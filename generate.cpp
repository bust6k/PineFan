#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
#include <stack>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

extern "C" {
#include "ast.h"
#include "parser_rules.tab.h"
#include "vector.h"
}

#include "color.h"
#include "file.hpp"
#include "generate_matrolib.hpp"
#include "ppp.hpp"
#include "third-party/noxorany.h"

std::string_view pinefan_version = "v0.0.1\n";
int magic_ohlc = 400000000;

int line = 1;
int col = 0;
int udf_depth = 0;
int func_cnt = 0;
int func_rg = 0;
int is_in_exec_model = 0;

static bool var_collection_done = false;

std::unordered_map<std::string, int> const_table;

std::vector<struct ast_node*> program_cpp_root;
std::vector<struct ast_node*> var_buffer;
std::vector<struct ast_node*> varip_buffer;

Vector* program_root;

extern int yylex(void);
extern FILE* yyin;
int line_count = 0;
extern int open_in_count;

std::vector<std::string> source_lines;

void convert_program_root() {
  if (!program_root) return;

  program_cpp_root.clear();
  program_cpp_root.reserve(program_root->len);

  for (int i = 0; i < program_root->len; i++) {
    ast_node* node = static_cast<ast_node*>(program_root->body[i]);
    program_cpp_root.push_back(node);
  }
}

char* fast_toupper(char* str) {
  for (int i = 0; str[i]; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }

  return str;
}

char* fast_tolower(char* str) {
  char* cpy = strdup(str);
  for (int i = 0; cpy[i]; i++) {
    if (cpy[i] >= 'A' && cpy[i] <= 'Z') {
      cpy[i] += 32;
    }
  }
  return cpy;
}

char* is_in_const_table(char* name) {
  if (const_table.find(name) != const_table.end()) {
    return fast_toupper(name);
  }
  return name;
}
void transform_constants(struct ast_node* node) {
  if (!node || (long long)node < 0x1000) return;

  switch (node->type) {
    case AST_VAR:
    case AST_SIMPLE:
    case AST_VARIP:
      if (const_table.count(node->assign.name)) {
        fast_toupper(node->assign.name);
      }
      transform_constants(node->assign.value);
      break;

    case AST_VARN:
      if (const_table.count(node->var.name)) {
        fast_toupper(node->var.name);
      }
      break;
    case AST_EXPR_LIST:
      transform_constants(node->expr_list_node.expr);
      transform_constants(node->expr_list_node.next);
      break;

    case AST_ASSIGN:
    case AST_CONST:
      if (const_table.count(node->assign.name)) {
        fast_toupper(node->assign.name);
      }
      transform_constants(node->assign.value);
      break;

    case AST_EXPR_ASSIGN:
      transform_constants(node->ast_assign.name);
      transform_constants(node->ast_assign.value);
      break;

    case AST_BINOP:
      transform_constants(node->binop.left);
      transform_constants(node->binop.right);
      break;

    case AST_UNOP:
      transform_constants(node->unop.operand);
      break;

    case AST_CALL:
      // Fix: properly iterate through the linked list of args
      {
        ast_node* arg = node->call_node.args;
        while (arg) {
          transform_constants(arg->call_arg.val);
          arg = arg->call_arg.next;
        }
      }
      break;

    case AST_CALL_ARG:
      transform_constants(node->call_arg.val);
      transform_constants(node->call_arg.next);
      break;

    case AST_FUNC:
      transform_constants(node->func_node.body);
      break;

    case AST_FUNC_ARG:
      transform_constants(node->func_arg.next);
      break;

    case AST_ARR_FUNC_ARG:
      transform_constants(node->func_containter_arg.func_type);
      transform_constants(node->func_containter_arg.next);
      break;

    case AST_IF:
      transform_constants(node->if_node.cond);
      transform_constants(node->if_node.then);
      transform_constants(node->if_node.else_);
      break;

    case AST_TERNARY:
      transform_constants(node->ternary_node.cond);
      transform_constants(node->ternary_node.then);
      transform_constants(node->ternary_node.else_);
      break;

    case AST_FOR:
      transform_constants(node->for_node.start);
      transform_constants(node->for_node.end);
      transform_constants(node->for_node.step);
      transform_constants(node->for_node.body);
      break;

    case AST_WHILE:
      transform_constants(node->while_node.cond);
      transform_constants(node->while_node.body);
      break;

    case AST_RETURN:
      transform_constants(node->return_node.value);
      break;

    case AST_PAREN_OP:
      transform_constants(node->paren_expr.expr);
      break;

    case AST_ARRAY:
      transform_constants(node->array_node.expr_list);
      break;

    case AST_INDEX:
      transform_constants(node->index.expr);
      transform_constants(node->index.value);
      break;

    case AST_COMMA_OP:
      transform_constants(node->comma_expr.expr);
      break;

    case AST_SWITCH:
      transform_constants(node->switch_node.expr);
      {
        ast_node* c = node->switch_node.cases;
        while (c) {
          transform_constants(c->switch_case.value);
          transform_constants(c->switch_case.body);
          c = c->switch_case.next;
        }
      }
      transform_constants(node->switch_node.default_body);
      break;

    case AST_SWITCH_BLOCK:
      transform_constants(node->switch_block_node.prev);
      transform_constants(node->switch_block_node.th);
      break;

    case AST_CASE:
      transform_constants(node->case_stmt.expr);
      transform_constants(node->case_stmt.switch_blk_node);
      break;

    case AST_CASE_RANGE:
      // Handle when implemented
      break;

    case AST_DEFAULT:
      transform_constants(node->default_stmt.switch_blk_node);
      break;

    case AST_STMT:
      transform_constants(node->block_node.stmt);
      transform_constants(node->block_node.next);
      break;

    case AST_STMTS:
      transform_constants(node->stmt_node.stmt);
      break;

    case AST_NUMBER:
    case AST_FL_NUMBER:
    case AST_STRING:
    case AST_INDICATOR:
    case AST_STRATEGY:
    case AST_IMPORT:
    case AST_BREAK:
    case AST_CONTINUE:
      // Nothing to transform
      break;

    default:
      break;
  }
}

void read_source_file(const std::filesystem::path& filename) {
  std::ifstream file(filename);
  if (!file.is_open()) return;

  std::string line;
  while (std::getline(file, line)) {
    source_lines.push_back(line);
  }
}

extern "C" {

void yyerror(const char* s) {
  const std::string_view& message(s);

  auto* file = Pinefan::File::preprocessed_files.back();
#ifdef _WIN32
  RED_COLOR;
  std::cerr << "[ERROR]: ";
  RESET_COLOR;
  std::cerr << file->get_name() << " ";
  GREEN_COLOR;
  std::cerr << "line";
  RESET_COLOR;
  std::cerr << " " << line;
  CYAN_COLOR;
  std::cerr << " column ";
  RESET_COLOR;
  std::cerr << col << ": " << message << "\n";
#else
  std::cerr << RED_COLOR;
  std::cerr << "[ERROR]: ";
  std::cerr << RESET_COLOR;
  std::cerr << file->get_name() << " ";
  std::cerr << GREEN_COLOR;
  std::cerr << "line";
  std::cerr << RESET_COLOR;
  std::cerr << " " << line;
  std::cerr << CYAN_COLOR;
  std::cerr << " column ";
  std::cerr << RESET_COLOR;
  std::cerr << col << ": " << message << "\n";
#endif

  // std::cerr << std::format(
  //  "[ERROR]:" RESET_COLOR " {}" GREEN_COLOR "line"  RESET_COLOR "{}
  //  CYAN_COLOR column" RESET_COLOR "{}: {}\n",
  // file->get_name(), line, col, message);

  if (source_lines.empty() ||
      static_cast<size_t>(line - 1) >= source_lines.size()) {
    return;
  }

  std::string_view src = source_lines[line - 1];
  if (src.ends_with('\n')) {
    src.remove_suffix(1);
  }

  std::cerr << src << '\n';

  if (col > 0) {
    std::cerr << std::string(col - 1, '~') << "\e[1;32m^\e[0m";

    if (static_cast<size_t>(col) <= src.length()) {
      std::cerr << std::string(src.length() - col, '~');
    }
    std::cerr << '\n';
  }
}
}

extern "C" {
void error_read_source_file(const char* filename);
}

void prologue(std::ofstream& output, const std::filesystem::path& source_name) {
  output << "# code generated by the PineFan technology. DO NOT EDIT WITHOUT "
            "OF NECESSARY\n"
         << std::format("# - PineFan's version: {}\n", pinefan_version.data())
         << std::format("# - source: {}\n\n", source_name.string());
  output << "from typing import List as array \n";
  output << "from typing import Dict as map \n";
  output << "import csv\n";
  output << "import os\n";

  output << R"(

csv_path = input("Enter the path to your OHLC CSV file: ").strip()

csv_path = csv_path.strip('"').strip("'")

if not os.path.exists(csv_path):
    script_dir = os.path.dirname(os.path.abspath(__file__))
    alt_path = os.path.join(script_dir, os.path.basename(csv_path))
    if os.path.exists(alt_path):
        csv_path = alt_path
    else:
        raise FileNotFoundError(f"File not found: {csv_path}")

open = []
high = []
low = []
close = []
volume = []
time = []

with open(csv_path, 'r') as f:
    reader = csv.reader(f)
    header = next(reader, None)
    for row in reader:
        if len(row) >= 5:
            time.append(row[0])
            open.append(float(row[1]))
            high.append(float(row[2]))
            low.append(float(row[3]))
            close.append(float(row[4]))
            volume.append(float(row[5]) if len(row) > 5 else 0.0)

print(f"Loaded {len(close)} bars from {csv_path}\n")
)";
}

void indicator(std::string_view str, std::ofstream& output,
               std::string indent_str) {
  output << indent_str << "# indicator\n";
  output << indent_str << std::format("print (\"{}\")\n", str);
}

void strategy(std::string_view str, std::ofstream& output,
              std::string indent_str) {
  output << indent_str << "# strategy\n";
  output << indent_str << std::format("print (\"{}\")\n", str);
}

void common_var(std::string_view name, ast_node* value, std::ofstream& output) {
  if (!value) return;

  switch (value->type) {
    case AST_NUMBER:
      output << std::format("{} = {}\n", name, value->number.value);
      break;

    case AST_STRING:
      output << std::format("{} = \"{}\"\n", name, value->string.value);
      break;

    default:
      output << "unknown language construction" << std::endl;
      break;
  }
}

extern "C" {
void yy_scan_string(const char* str);
void yy_delete_buffer(int);
}

void up_const_names_recursive(ast_node* node, char* name) {
  char* normal_cpy = strdup(name);

  for (auto node : program_cpp_root) {
    if (!node) continue;
    transform_constants(node);
    if (node->type != AST_STRING && node->type != AST_FUNC && node->type != AST_STMT &&
        node->type != AST_CALL && node->type != AST_NUMBER && node->type != AST_FL_NUMBER && strcmp(node->assign.name, normal_cpy) == 0  ) {
      node->assign.name = fast_toupper(node->assign.name);
      char* f = fast_tolower(node->assign.name);
      const_table[f] = 42;
      free(f);
    }
  }
  free(normal_cpy);
}

void gen_switch_speak(bool is_case, std::ofstream& output,
                      std::string indent_str) {
  if (is_case) {
    output << indent_str
           << "# in source code version that was switch-statement. Since "
              "Python doesn't it(but only since Python "
              "3.10),PineFan\n";
    output << indent_str
           << "# translates it to if/elif/else construction. Where "
              "if-statement is the first condition like in "
              "switch-statement\n";
    output << indent_str << "# elif is all the other conditions\n";
    output << indent_str
           << "# and else - it's an optional last condition like default in "
              "switch-statement\n\n";

    output << indent_str << "if ";
    return;
  } else {
    output << indent_str
           << "# in source code version that was switch-statement. Since "
              "Python doesn't it(but only since Python "
              "3.10),PineFan\n";
    output << indent_str << "# translates it to if construction\n";
    output << indent_str
           << "# where if - it's a default-like condition that executes as "
              "always\n\n";

    output << indent_str << "if ";
    return;
  }
}

ast_node* find_last_statement(ast_node* node) {
  if (!node) return NULL;

  // AST_STMTS: тело функции/блока
  if (node->type == AST_STMTS) {
    return find_last_statement(node->stmt_node.stmt);
  }

  // AST_STMT: одиночный statement в списке
  if (node->type == AST_STMT) {
    // Если есть следующий — идём в него
    if (node->block_node.next) {
      return find_last_statement(node->block_node.next);
    }
    // Последний в списке — его содержимое
    return find_last_statement(node->block_node.stmt);
  }

  // AST_IF: последнее — то, что после if/else
  if (node->type == AST_IF) {
    if (node->if_node.else_) {
      return find_last_statement(node->if_node.else_);
    }
    // if без else — возвращаем сам if (он не возвращает значение в PineScript)
    return find_last_statement(node->if_node.then);
  }

  // AST_FOR, AST_WHILE — возвращают последнее после цикла
  // (не внутри цикла)
  if (node->type == AST_FOR || node->type == AST_WHILE) {
    return NULL;  // циклы не возвращают значение сами по себе
  }

  // AST_SWITCH — аналогично if/else
  if (node->type == AST_SWITCH) {
    if (node->switch_node.default_body) {
      return find_last_statement(node->switch_node.default_body);
    }
    return NULL;
  }

  // Все остальные (AST_ASSIGN, AST_CALL, AST_BINOP, etc.) —
  // это и есть "последнее выражение"
  return node;
}

void collect_var_variables(ast_node* node, std::ofstream& output,
                           int indent = 0);
void generate_var_buffer(std::ofstream& output, int indent);
void collect_varip_variables(ast_node* node, std::ofstream& output, int indent);
void generate_varip_buffer(std::ofstream& output, int indent);

void generate_code(ast_node* node, std::ofstream& output, int indent = 0,
                   ast_node* last_node = NULL, int is_quad = 0,int is_statement = 0) {
  if (!node) return;

  std::string indent_str(indent, ' ');
  std::string indent_next(indent + 4, ' ');

  int idt = indent;

  if (is_in_exec_model == 1 && is_statement) indent_str += "    ";

  switch (node->type) {
    case AST_IF: {
      if (node->if_node.cond != NULL && node->if_node.then != NULL) {
        transform_constants(node->if_node.cond);

        std::string indent_prev = indent_str;
        if (indent >= 4) {
          idt = idt;
          indent_prev = std::string(idt, ' ');
        }

        if (node->if_node.is_elif) {
          output << indent_prev << "elif ";
        } else {
          output << indent_str << "if ";
        }
        generate_code(node->if_node.cond, output, 0);
        output << ":";
	if(is_statement){output << "\n";}
        if (node->if_node.is_elif) {
          generate_code(node->if_node.then, output, indent + 4);
        } else {
          generate_code(node->if_node.then, output, indent + 4);
        }
      }

      if (node->if_node.else_) {
        if (node->if_node.else_->block_node.stmt != NULL &&
            node->if_node.else_->block_node.stmt->type == AST_IF) {
          node->if_node.else_->block_node.is_else = 1;
        }

        generate_code(node->if_node.else_, output, idt);
      }
      break;
    }

    case AST_TERNARY: {
      transform_constants(node->ternary_node.cond);
      output << indent_str;
      generate_code(node->ternary_node.then, output, indent);
      output << " if ";
      generate_code(node->ternary_node.cond, output, 0);
      output << " else ";
      generate_code(node->ternary_node.else_, output, 0);
     if(is_statement){output << "\n";}
        
      break;
    }

    case AST_SWITCH: {
      struct ast_node* first_case = node->switch_node.cases;
      transform_constants(node->switch_node.expr);
      struct ast_node* const_first_case = node->switch_node.expr;
      bool is_only_def = false;

      if (first_case == NULL) {
        gen_switch_speak(false, output, indent_str);
        output << "True:\n";
        generate_code(
            node->switch_node.default_body->default_stmt.switch_blk_node,
            output, indent + 4);
        output << "\n";

        is_only_def = true;
      }

      else if (first_case != NULL) {
        gen_switch_speak(true, output, indent_str);
        while (first_case->switch_case.next != NULL) {
          first_case = first_case->switch_case.next;
        }

        generate_code(const_first_case, output, 0);
        output << " == ";
        generate_code(first_case->case_stmt.expr, output, 0);

        output << ":";
	if(is_statement){output << "\n";}
        
        generate_code(first_case->case_stmt.switch_blk_node, output,
                      indent + 4);

        first_case = node->switch_node.cases;

        if (first_case != NULL) {
          while (first_case->switch_case.next != NULL) {
            output << indent_str << "elif ";
            generate_code(const_first_case, output, 0);
            output << " == ";
            generate_code(first_case->case_stmt.expr, output, 0);
            output << ":";
	if(is_statement){output << "\n";}
        
            generate_code(first_case->case_stmt.switch_blk_node, output,
                          indent + 4);
            first_case = first_case->switch_case.next;
          }
        }
      }

      if (node->switch_node.default_body != NULL && !is_only_def) {
        output << indent_str << "else";
        output << ":";
	if(is_statement){output << "\n";}
        

        generate_code(
            node->switch_node.default_body->default_stmt.switch_blk_node,
            output, indent + 4);
      }
      break;
    }

    case AST_BINOP: {
      generate_code(node->binop.left, output, 0);
      output << " " << node->binop.op << " ";
      generate_code(node->binop.right, output, 0);
      if (!strcmp(node->binop.op, "+=") || !strcmp(node->binop.op, "-=") ||
          !strcmp(node->binop.op, "*=") || !strcmp(node->binop.op, "/=") ||
          !strcmp(node->binop.op, "%=")) {
        	if(is_statement){output << "\n";}
        
      }
      break;
    }

    case AST_PAREN_OP: {
      output << "( ";
      generate_code(node->paren_expr.expr, output, 0);
      output << " )";
      break;
    }

    case AST_ARRAY: {
      output << "[";
      generate_code(node->array_node.expr_list, output, indent, NULL, 1);
      output << "]";
      break;
    }

    case AST_INDEX: {
      generate_code(node->index.expr, output, indent);
      output << "[";
      generate_code(node->index.value, output, indent);
      output << "]";
      break;
    }
    case AST_NUMBER: {
      output << node->number.value;
      break;
    }
    case AST_FL_NUMBER: {
    output << node->float_number_node.float_num;
    break;
    }

    case AST_STRING: {
      output << "\"" << node->string.value << "\"";
      break;
    }

    case AST_CALL: {
      output << indent_str << node->call_node.name->var.name << "(";
      for (int i = 0; i < node->call_node.arg_count; i++) {
      generate_code(node->call_node.args, output, 0);
        // if (i + 1 < node->call_node.arg_count) output << ", ";
      }
      output << ")";
      if(is_statement){ output << "\n";}
     break;
    }
 
   case AST_EXPR_LIST: {
   for(int i = 0;i < node->expr_list_node.count;i++) {
   generate_code(node->expr_list_node.expr,output,indent);
   if(i + 1 < node->expr_list_node.count) output << ", ";
   generate_code(node->expr_list_node.next,output,indent);
   }
   if(is_statement){ output << "\n";}
   break;
   }

    case AST_FUNC: {
      udf_depth++;
      func_rg++;

      output << "def ";
      output << node->func_node.ident << "(";
      for (int i = 0; i < node->func_node.arg_count; i++) {
        generate_code(node->func_node.args, output, 0);
      }
      output << "):\n";
      ast_node* last = find_last_statement(node->func_node.body);

      generate_code(node->func_node.body, output, indent + 4, last);
      udf_depth--;
      break;
    }
    case AST_UNOP: {
      output << node->unop.op;
      generate_code(node->unop.operand, output, 0);
      break;
    }

    case AST_RETURN: {
      output << indent_str << "return ";
      if (node->return_node.value)
        generate_code(node->return_node.value, output, 0);
     	if(is_statement){output << "\n";}
        
      break;
    }

    case AST_ASSIGN:
    case AST_SIMPLE: {
      output << indent_str << node->assign.name << " = ";
      generate_code(node->assign.value, output, 0);
      	if(is_statement){output << "\n";}
        
      break;
    }

    case AST_VARIP: {
      collect_varip_variables(node, output, indent);
      break;
    }

    case AST_VAR: {
      collect_var_variables(node, output, indent);
      break;
    }

    case AST_VARN: {
      if(!strcmp(node->var.name,"int") || !strcmp(node->var.name,"float") || !strcmp(node->var.name,"bool") || !strcmp(node->var.name,"str") || !strcmp(node->var.name,"color")) break;
      if (!is_quad) {
        output << indent_str << node->var.name;
      } else {
        output << node->var.name;
      }

      if (node->var.n && is_statement) output << "\n";
        
      break;
    }

    case AST_EXPR_ASSIGN: {
      generate_code(node->ast_assign.name, output, indent,NULL,0,1);
      output << " = ";
      generate_code(node->ast_assign.value, output, 0);
     	if(is_statement){output << "\n";}
        
      break;
    }

    case AST_CONST: {
      output << indent_str << "# a constant variable!" << std::endl;
      up_const_names_recursive(node, node->assign.name);
      output << indent_str << node->assign.name << " = ";
      generate_code(node->assign.value, output, 0);
      	if(is_statement){output << "\n";}
        
      break;
    }

    case AST_FOR: {
      // PineScript: for var = start to end [by step]
      // Python: for var in range(start, end + 1, step)

      output << indent_str << "for ";
      output << node->for_node.var;  // имя переменной (char*)
      output << " in range(";
      generate_code(node->for_node.start, output, 0);
      output << ", ";
      generate_code(node->for_node.end, output, 0);
      output << " + 1";  // PineScript includes end, Python range excludes end

      if (node->for_node.step) {
        output << ", ";
        generate_code(node->for_node.step, output, 0);
      }

      output << "):";
	if(is_statement){output << "\n";}
        
      generate_code(node->for_node.body, output, indent + 4);
      break;
    }
    case AST_WHILE: {
      output << indent_str << "while ";
      generate_code(node->while_node.cond, output, 0);
      output << ":";
	if(is_statement){output << "\n";}
        
      generate_code(node->while_node.body, output, indent + 4);
      break;
    }

    case AST_BREAK: {
      output << indent_str << "break\n";
      break;
    }

    case AST_CONTINUE: {
      output << indent_str << "continue\n";
      break;
    }

    case AST_INDICATOR: {
      indicator(node->string.value, output, indent_str);
      break;
    }

    case AST_STRATEGY: {
      strategy(node->string.value, output, indent_str);
      break;
    }

    case AST_SWITCH_BLOCK: {
      generate_code(node->switch_block_node.th, output, indent);
      if (node->switch_block_node.prev != NULL) {
        node->switch_block_node.th = node->switch_block_node.prev;
      }
      break;
    }

    case AST_CALL_ARG: {
      generate_code(node->call_arg.val, output);

      if (node->call_arg.next != NULL) {
        output << ", ";
        generate_code(node->call_arg.next, output);
      }

      break;
    }

    case AST_FUNC_ARG: {
      if (node->func_arg.ident != NULL) {
        output << node->func_arg.ident;
        if (node->func_arg.type != NULL) output << ": " << node->func_arg.type;
        if (node->func_arg.next != NULL) {
          output << ", ";
          generate_code(node->func_arg.next, output);
        }
      } else if (node->func_arg.ident == NULL) {
        output << node->func_arg.type;
      }

      if (node->func_containter_arg.next != NULL) {
        output << ", ";
        generate_code(node->func_arg.next, output);
      }

      break;
    }

    case AST_ARR_FUNC_ARG: {
      if (node->func_containter_arg.ident != NULL) {
        output << node->func_containter_arg.ident;

        output << ": ";
        output << node->func_containter_arg.cont_name;
        output << "[";
        generate_code(node->func_containter_arg.func_type, output);
        output << "]";
      }

      if (node->func_containter_arg.next != NULL) {
        output << ", ";
        generate_code(node->func_containter_arg.next, output);
      }

      break;
    }

    case AST_STMT: {
      if (last_node != NULL && last_node == node->block_node.stmt) {
        output << "\n";
        output << indent_str << "return ";
      }
      if (node->block_node.stmt != NULL &&
          node->block_node.stmt->type == AST_IF &&
          node->block_node.is_else == 1) {
        // it's else if — generating directly
        node->block_node.stmt->if_node.is_elif = 1;
        generate_code(node->block_node.stmt, output, indent, last_node,0,1);
      } else {
        // common block
        generate_code(node->block_node.stmt, output, indent, last_node,0,1);
      }

      if (node->block_node.next != NULL) {
        generate_code(node->block_node.next, output, indent, last_node,0,1);
      } else if (node->block_node.next == NULL)
        break;

      break;
    }

    case AST_STMTS: {
      generate_code(node->stmt_node.stmt, output, indent, last_node,0,1);
      break;
    }

    default: {
      output << indent_str << "# TODO: unknown node type " << node->type
             << "\n";
      break;
    }
  }
}

void collect_var_variables(ast_node* node, std::ofstream& output, int indent) {
  if (!node) return;

  std::string indent_str(indent, ' ');

  if (node->type == AST_VAR && node->assign.value != NULL) {
    var_buffer.push_back(node);
  }
}

void collect_varip_variables(ast_node* node, std::ofstream& output,
                             int indent) {
  if (!node) return;

  std::string indent_str(indent, ' ');

  if (node->type == AST_VARIP && node->assign.value != NULL) {
    varip_buffer.push_back(node);
  }
}

void generate_bar_loop(std::ofstream& output, int indent = 0,
                       std::string indent_str = "    ") {
  if ((var_collection_done == false) && (func_cnt == 0) ||
      (udf_depth == 0 && func_cnt != 0 && func_cnt == func_rg &&
       func_cnt != magic_ohlc)) {
    var_collection_done = true;

    generate_var_buffer(output, indent);

    output << "\n\nfor bar in close:\n";
    indent += 4;
    generate_varip_buffer(output, indent);
    // indent_str += "    ";
    udf_depth = 21103030;
    func_cnt = magic_ohlc;
    is_in_exec_model = 1;
  }
}

void generate_var_buffer(std::ofstream& output, int indent) {
  var_collection_done = true;
  std::string indent_str(indent, ' ');
  for (auto* var : var_buffer) {
    // output << "\n";
    output << indent_str << var->assign.name << " = ";
    generate_code(var->assign.value, output, 0);
    output << "\n";
  }
}
void generate_varip_buffer(std::ofstream& output, int indent) {
  var_collection_done = true;
  std::string indent_str(indent, ' ');
  for (auto* varip : varip_buffer) {
    // output << "\n";
    output << indent_str << varip->assign.name << " = ";
    generate_code(varip->assign.value, output, indent);
    output << "\n";
  }
}

#ifdef __linux__
extern "C" {
#include <sys/ptrace.h>
}
#endif

#ifdef _WIN32
#include <windows.h>
#endif

int main(int argc, char* argv[]) {
/*
#ifdef __linux__
  if (ptrace(PTRACE_TRACEME, 0, 1, 0) < 0) {
    exit(0);
  }
#endif

#ifdef _WIN32
  if (IsDebuggerPresent()) {
    ExitProcess(0);
  }
#endif
*/
  if (argc > 1 && strcmp(argv[1], "--install") == 0) {
    if (Pinefan::File::install_pinefan()) {
      std::cout << "PineFan installed successfully." << std::endl;
      std::cout << "Restart your terminal and run 'pinefan' from anywhere."
                << std::endl;
      return 0;
    } else {
      std::cout << "Installation failed." << std::endl;
      return 1;
    }
  }

  if (argc < 2) {
#ifdef _WIN32
    YELLOW_COLOR;
    std::cout << "(WARNING): ";
    RESET_COLOR;
    std::cout << "Not enough arguments" << std::endl;
#else
    std::cout << YELLOW_COLOR << "(WARNING): " << RESET_COLOR
              << "Not enough arguments" << std::endl;
#endif

    std::cout << "Usage: pinefan <file1.pine> <file2.pine> ... <filen.pine>"
              << std::endl;
    std::cout << "       pinefan --install" << std::endl;

    return 0;
  }

  Pinefan::Ppp::preprocess_files(argc, argv);

  yydebug = 1;

  for (int i = 0; i < Pinefan::File::preprocessed_files.size(); i++) {
    Pinefan::File::Prp_file* prped_file =
        Pinefan::File::preprocessed_files.at(i);

    error_read_source_file(prped_file->get_name().c_str());
   
    yy_scan_string(prped_file->get_content(0).c_str());

    read_source_file(prped_file->get_name());

    std::string name = prped_file->get_name();

    std::string pure_name(name.begin(), name.end() - 5);

    std::ofstream output_file(pure_name +
                              Pinefan::File::output_exstension.data());

    program_root = make_vector();
    int r = yyparse();

    if (0) {
      if (r) {
        convert_program_root();
        vec_free(program_root);

        for (int f = 0; f < program_cpp_root.size(); f++) {
          ast_free(program_cpp_root.at(f));
        }

        Pinefan::Ppp::clean_prp_files();
      }
    }

    convert_program_root();
    vec_free(program_root);

    prologue(output_file, prped_file->get_name());

    for (int j = 0; j < program_cpp_root.size(); j++) {
      auto* val = program_cpp_root.at(j);
      generate_bar_loop(output_file);
      generate_code(val, output_file);
    }
  }

  for (int f = 0; f < program_cpp_root.size(); f++) {
   // ast_free(program_cpp_root.at(f));
  }

  Pinefan::Ppp::clean_prp_files();
  generate_matrolib();
  return 0;
}
