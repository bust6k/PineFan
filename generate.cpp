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

#include "file.hpp"
#include "ppp.hpp"

constexpr std::string_view pinefan_version = "v1.0.0\n";

int line = 1;
int col = 0;
std::unordered_map<std::string, int> const_table;

std::vector<struct ast_node*> program_cpp_root;
Vector* program_root;

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

char* fast_toupper_alloc(char* str) {
  char* cpy = strdup(str);
  for (int i = 0; cpy[i]; i++) {
    if (cpy[i] >= 'a' && cpy[i] <= 'Z') cpy[i] -= 32;
  }
  return cpy;
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
void transform_constants(ast_node* node) {
  if (!node) return;

  switch (node->type) {
    case AST_VAR:
    case AST_SIMPLE:
      if (const_table.count(node->var.name)) {
        fast_toupper(node->var.name);
      }
      break;

    case AST_ASSIGN:
    case AST_CONST:
      if (const_table.count(node->assign.name)) {
        fast_toupper(node->assign.name);
      }
      transform_constants(node->assign.value);
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

    case AST_FUNC: {
      // Transform function arguments
      /*
      ast_node* arg = node->func_node.args;
      while (arg) {
        if (arg->type == AST_FUNC_ARG) {
          transform_constants(arg);
          arg = arg->func_arg.next;
        } else if (arg->type == AST_ARR_FUNC_ARG) {
          transform_constants(arg);
          arg = arg->func_containter_arg.next;
        }
      }
      */
      // Transform function body
      transform_constants(node->func_node.body);
    } break;

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

extern int yylex(void);
extern FILE* yyin;
int line_count = 0;
extern int open_in_count;

std::vector<std::string> source_lines;

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
  if (line > 1) line--;
  std::cerr << std::format(
      "\e[91m[ERROR]\e[0m: {} \e[92mline\e[0m {} \e[94mcolumn\e[0m {}: {}\n",
      file->get_name(), line, col, message);

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

void prologue(std::ofstream& output, const std::filesystem::path& source_name) {
  output << "# code generated by the PineFan technology. DO NOT EDIT WITHOUT "
            "OF NECESSARY\n"
         << std::format("# - PineFan's version: {}\n", pinefan_version.data())
         << std::format("# - source: {}\n\n", source_name.string());
  output << "from typing import List as array \n";
  output << "from typing import Dict as map \n\n";
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
      // throw "unknown var";
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
    if (strcmp(node->assign.name, normal_cpy) == 0 &&
        node->type != AST_STRING && node->type != AST_FUNC &&
        node->type != AST_CALL) {
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
void generate_code(ast_node* node, std::ofstream& output, int indent = 0) {
  if (!node) return;

  std::string indent_str(indent, ' ');
  std::string indent_next(indent + 4, ' ');

  switch (node->type) {
    case AST_IF: {
      if (node->if_node.cond != NULL && node->if_node.then != NULL) {
        transform_constants(node->if_node.cond);
        if (node->if_node.is_elif) {
          output << indent_str << "elif ";
        } else {
          output << indent_str << "if ";
        }
        generate_code(node->if_node.cond, output, 0);
        output << ":\n";
        generate_code(node->if_node.then, output, indent + 4);
      }

      if (node->if_node.else_) {
        generate_code(node->if_node.else_, output, indent + 4);
      }
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

        output << ":\n";
        generate_code(first_case->case_stmt.switch_blk_node, output,
                      indent + 4);

        first_case = node->switch_node.cases;

        if (first_case != NULL) {
          while (first_case->switch_case.next != NULL) {
            output << indent_str << "elif ";
            generate_code(const_first_case, output, 0);
            output << " == ";
            generate_code(first_case->case_stmt.expr, output, 0);
            output << ":\n";
            generate_code(first_case->case_stmt.switch_blk_node, output,
                          indent + 4);
            first_case = first_case->switch_case.next;
          }
        }
      }

      if (node->switch_node.default_body != NULL && !is_only_def) {
        output << indent_str << "else";
        output << ":\n";

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
      break;
    }

    case AST_PAREN_OP: {
      output << "( ";
      generate_code(node->paren_expr.expr, output, 0);
      output << " )";
      break;
    }

    case AST_NUMBER: {
      output << node->number.value;
      break;
    }

    case AST_VAR: {
      output << is_in_const_table(node->var.name);
      break;
    }

    case AST_STRING: {
      output << "\"" << node->string.value << "\"";
      break;
    }

    case AST_CALL: {
      output << indent_str << node->call_node.name << "(";
      for (int i = 0; i < node->call_node.arg_count; i++) {
        generate_code(node->call_node.args, output, 0);
        // if (i + 1 < node->call_node.arg_count) output << ", ";
      }
      output << ")\n";
      break;
    }

    case AST_FUNC: {
      output << "def ";
      output << node->func_node.ident << "(";
      for (int i = 0; i < node->func_node.arg_count; i++) {
        generate_code(node->func_node.args, output, 0);
      }
      output << "):\n";
      generate_code(node->func_node.body, output, indent + 4);
      break;
    }
    case AST_UNOP: {
      output << node->unop.op;
      generate_code(node->unop.operand, output, 0);
      break;
    }

    case AST_RETURN: {
      output << indent_str << "return ";
      generate_code(node->return_node.value, output, 0);
      output << "\n";
      break;
    }

    case AST_ASSIGN: {
      output << indent_str << node->assign.name << " = ";
      generate_code(node->assign.value, output, 0);
      output << "\n";
      break;
    }

    case AST_CONST: {
      output << "# a constant variable!" << std::endl;
      up_const_names_recursive(node, node->assign.name);
      output << indent_str << node->assign.name << " = ";
      generate_code(node->assign.value, output, 0);
      output << "\n";
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

      output << "):\n";
      generate_code(node->for_node.body, output, indent + 4);
      break;
    }
    case AST_WHILE: {
      output << indent_str << "while ";
      generate_code(node->while_node.cond, output, 0);
      output << ":\n";
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
        // generate_code(node->switch_block_node.th, output);
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
      if (node->block_node.stmt != NULL &&
          node->block_node.stmt->type == AST_IF) {
        // Это else if — генерируем без лишней обёртки
        node->block_node.stmt->if_node.is_elif = 1;
        generate_code(node->block_node.stmt, output, indent);
      } else {
        // Обычный блок
        generate_code(node->block_node.stmt, output, indent);
      }

      if (node->block_node.next != NULL) {
        generate_code(node->block_node.next, output, indent);
      }

      break;
    }
    case AST_STMTS: {
      generate_code(node->stmt_node.stmt, output, indent);
      /*if(node->stmt_node.stmt->block_node.next != NULL) {
      generate_code(node->stmt_node.stmt->block_node.next,output,indent);
      }
      */
      break;
    }

    default: {
      output << indent_str << "# TODO: unknown node type " << node->type
             << "\n";
      break;
    }
  }
}

std::string ff(int type) {
  if (type == AST_ARR_FUNC_ARG) {
    return "AST_ARR_FUNC_ARG";
  }
  return "";
}

int main(int argc, char* argv[]) {
  Pinefan::Ppp::preprocess_files(argc, argv);
  // yydebug = 1;
  for (int i = 0; i < Pinefan::File::preprocessed_files.size(); i++) {
    Pinefan::File::Prp_file* prped_file =
        Pinefan::File::preprocessed_files.at(i);

    yy_scan_string(prped_file->get_content().c_str());

    read_source_file(prped_file->get_name());

    std::string name = prped_file->get_name();

    std::string pure_name(name.begin(), name.end() - 5);

    std::ofstream output_file(pure_name +
                              Pinefan::File::output_exstension.data());

    program_root = make_vector();
    int r = yyparse();
    if (r) exit(1);

    convert_program_root();
    vec_free(program_root);

    prologue(output_file, prped_file->get_name());

    for (int j = 0; j < program_cpp_root.size(); j++) {
      auto* val = program_cpp_root.at(j);
      generate_code(val, output_file);
    }
  }

  for (int f = 0; f < program_cpp_root.size(); f++) {
    ast_free(program_cpp_root.at(f));
  }

  Pinefan::Ppp::clean_prp_files();
}
