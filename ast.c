#include "ast.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ast_node* new_assign_node(char* name, ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_ASSIGN;
  node->assign.name = name;
  node->assign.value = value;
  return node;
}

ast_node* new_expr_assign_node(ast_node* name, ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_EXPR_ASSIGN;
  node->ast_assign.name = name;
  node->ast_assign.value = value;
  return node;
}

ast_node* new_index_node(ast_node* expr, ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_INDEX;
  node->index.expr = expr;
  node->index.value = value;
  return node;
}

ast_node* new_if_node(ast_node* cond, ast_node* then, ast_node* else_) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_IF;
  node->if_node.cond = cond;
  node->if_node.then = then;
  node->if_node.else_ = else_;
  return node;
}

ast_node* new_ternary_node(ast_node* cond, ast_node* then, ast_node* else_) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_TERNARY;
  node->ternary_node.cond = cond;
  node->ternary_node.then = then;
  node->ternary_node.else_ = else_;
  return node;
}

ast_node* new_for_node(char* var, ast_node* start, ast_node* end,
                       ast_node* step, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_FOR;
  node->for_node.var = var;
  node->for_node.start = start;
  node->for_node.end = end;
  node->for_node.step = step;
  node->for_node.body = body;
  return node;
}

ast_node* new_while_node(ast_node* cond, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_WHILE;
  node->while_node.cond = cond;
  node->while_node.body = body;
  return node;
}

ast_node* reverse_fun_list(ast_node* node) {
  ast_node* prev = NULL;
  ast_node* current = node;
  ast_node* next = NULL;

  while (current != NULL) {
    if (current->type == AST_FUNC_ARG) {
      next = current->func_arg.next;
      current->func_arg.next = prev;
      prev = current;
      current = next;
    } else if (current->type == AST_ARR_FUNC_ARG) {
      next = current->func_containter_arg.next;
      current->func_containter_arg.next = prev;
      prev = current;
      current = next;
    } else {
      next = NULL;
      current = NULL;
      prev = NULL;
    }
  }

  return prev;
}

ast_node* new_func_node(char* ident, ast_node* args, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_FUNC;
  node->func_node.ident = ident;
  node->func_node.args = reverse_fun_list(args);
  node->func_node.body = body;

  size_t count = 0;
  ast_node* a = args;
  while (a) {
    count++;
    if (a->type == AST_FUNC_ARG) {
      a = a->func_arg.next;
    } else if (a->type == AST_ARR_FUNC_ARG) {
      a = a->func_containter_arg.next;
    }
  }

  node->func_node.arg_count = count;

  return node;
}

ast_node* new_func_type_node(char* type, char* name) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_FUNC_ARG;
  node->func_arg.type = type;
  node->func_arg.ident = name;

  return node;
}

ast_node* new_func_type_dot_node(char* prt_before, char* prt_after,
                                 char* name) {
  int len_frst = strlen(prt_before);
  int len_scnd = strlen(prt_after);

  char* with_dot = malloc(len_frst + 2 + len_scnd);
  strcpy(with_dot, prt_before);

  with_dot[len_frst] = '.';

  strcpy(with_dot + len_frst + 1, prt_after);

  if (prt_before) free(prt_before);
  if (prt_after) free(prt_after);

  return new_func_type_node(with_dot, name);
}

ast_node* new_array_func_type_node(char* arr, ast_node* arr_type, char* name) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_ARR_FUNC_ARG;
  node->func_containter_arg.cont_name = arr;
  node->func_containter_arg.func_type = arr_type;
  node->func_containter_arg.ident = name;

  return node;
}

ast_node* new_array_func_type_dot_node(char* p_b, char* p_a, ast_node* arr_type,
                                       char* name) {
  int len_frst = strlen(p_b);
  int len_scnd = strlen(p_a);

  char* with_dot = malloc(len_frst + 2 + len_scnd);
  strcpy(with_dot, p_b);

  with_dot[len_frst] = '.';

  strcpy(with_dot + len_frst + 1, p_a);

  if (p_b) free(p_b);
  if (p_a) free(p_a);

  return new_array_func_type_node(with_dot, arr_type, name);
}

#include "parser_rules.tab.h"

char* new_type_name(int token) {
  printf("token = %d, int_type = %d, bool_type = %d\n", token, int_type,
         bool_type);
  char* type = malloc(8);

  if (token == int_type) {
    strcpy(type, "int");
    return type;
  } else if (token == bool_type) {
    strcpy(type, "bool");
    return type;
  } else if (token == float_type) {
    strcpy(type, "float");
    return type;
  } else if (token == string_as_type) {
    strcpy(type, "str");
    return type;
  } else if (token == color_type) {
    strcpy(type, "color");
    return type;
  }

  free(type);

  return NULL;
}

ast_node* new_return_node(ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_RETURN;
  node->return_node.value = value;
  return node;
}

ast_node* new_var_node(char* name,ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_VAR;
  node->assign.name = name;
  node->assign.value = value;
  return node;
}


ast_node* new_varip_node(char* name,ast_node* value){
ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_VARIP;
  node->assign.name = name;
  node->assign.value = value;
  return node;
}

ast_node* new_var_dot_node(char* name, char* scnd_name) {
  int len_frst = strlen(name);
  int len_scnd = strlen(scnd_name);

  char* with_dot = malloc(len_frst + 2 + len_scnd);
  strcpy(with_dot, name);

  with_dot[len_frst] = '.';

  strcpy(with_dot + len_frst + 1, scnd_name);

  if (name) free(name);
  if (scnd_name) free(scnd_name);
//TODO
  return new_var_node(with_dot,NULL);
}

ast_node* new_number_node(int value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_NUMBER;
  node->number.value = value;
  return node;
}

ast_node* new_string_node(char* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_STRING;
  node->string.value = value;
  return node;
}

ast_node* new_binop_node(char* op, ast_node* left, ast_node* right) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_BINOP;
  node->binop.op = strdup(op);
  node->binop.left = left;
  node->binop.right = right;
  return node;
}

ast_node* new_paren_expr_node(ast_node* expr) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_PAREN_OP;
  node->paren_expr.expr = expr;
  return node;
}

ast_node* new_quad_brace_expr_node(ast_node* expr) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_QUAD_BRACE_OP;
  node->quad_expr.expr = expr;
  return node;
}

ast_node* new_comma_expr_node(ast_node* expr) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_COMMA_OP;
  node->comma_expr.expr = expr;
  return node;
}

ast_node* new_unop_node(char* op, ast_node* operand) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_UNOP;
  node->unop.op = op;
  node->unop.operand = operand;
  return node;
}

ast_node* reverse_list(ast_node* node) {
  ast_node* prev = NULL;
  ast_node* current = node;
  ast_node* next = NULL;

  while (current != NULL) {
    next = current->call_arg.next;
    current->call_arg.next = prev;
    prev = current;
    current = next;
  }

  return prev;
}

ast_node* new_call_node(char* name, ast_node* args) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CALL;
  node->call_node.name = name;
  node->call_node.args = reverse_list(args);

  size_t count = 0;
  ast_node* a = args;
  while (a) {
    count++;
    a = a->call_arg.next;
  }

  node->call_node.arg_count = count;
  return node;
}
ast_node* new_call_node_dot(char* name, ast_node* args) {
  return new_call_node(name, args);
}

ast_node* new_call_arg_node(ast_node* expr) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CALL_ARG;
  node->call_arg.val = expr;

  return node;
}

ast_node* new_indicator_node(char* name) {
  struct ast_node* str = new_string_node(name);
  str->type = AST_INDICATOR;
  return str;
}

ast_node* new_strategy_node(char* name) {
  struct ast_node* str = new_string_node(name);
  str->type = AST_STRATEGY;
  return str;
}

ast_node* new_break_node(void) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_BREAK;
  return node;
}

ast_node* new_continue_node(void) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CONTINUE;
  return node;
}
ast_node* new_switch_node(ast_node* expr, ast_node* cases,
                          ast_node* default_body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_SWITCH;
  node->switch_node.expr = expr;
  node->switch_node.cases = cases;
  node->switch_node.default_body = default_body;

  size_t count = 0;
  ast_node* c = cases;
  while (c) {
    count++;
    c = c->switch_case.next;
  }
  node->switch_node.case_count = count;

  return node;
}

ast_node* new_switch_block_node(ast_node* prev, ast_node* th) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_SWITCH_BLOCK;
  node->switch_block_node.prev = prev;
  node->switch_block_node.th = th;

  return node;
}

ast_node* new_case_node(ast_node* expr, ast_node* switch_blk_node) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CASE;
  node->case_stmt.expr = expr;
  node->case_stmt.switch_blk_node = switch_blk_node;

  return node;
}

/*
ast_node* new_case_node_range(ast_node* from, ast_node* to, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CASE_RANGE;
  return node;  // TODO
}
*/

ast_node* new_default_node(ast_node* switch_blk_node) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_DEFAULT;
  node->default_stmt.switch_blk_node = switch_blk_node;
  return node;
}

ast_node* new_const_node(char* name, ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CONST;
  node->assign.name = name;
  node->assign.value = value;
  return node;
}

ast_node* new_simple_node(char* name,ast_node * value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_SIMPLE;
  node->assign.name = name;
  node->assign.value = value;
  return node;
}

ast_node* new_import_node(char* name) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_IMPORT;
  node->string.value = name;
  return node;
}

ast_node* new_assign_re_node(char* name, ast_node* value) {
  return new_assign_node(name, value);  // similar as temporarly
}

ast_node* new_assign_expr_re_node(ast_node* name, ast_node* value) {
  return new_expr_assign_node(name, value);
}

ast_node* reverse_stmt_list(ast_node* node) {
  ast_node* prev = NULL;
  ast_node* current = node;
  ast_node* next = NULL;

  while (current != NULL) {
    next = current->block_node.next;
    current->block_node.next = prev;
    prev = current;
    current = next;
  }

  return prev;
}
ast_node* new_block_node(ast_node* stmt) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_STMT;
  node->block_node.stmt = stmt;

  return node;
}

ast_node* new_stmt_node(ast_node* stmts) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_STMTS;
  node->stmt_node.stmt = reverse_stmt_list(stmts);

  return node;
}

void ast_free(ast_node* node) {
  if (!node) return;
  switch (node->type) {
    case AST_ASSIGN:
    case AST_CONST:
      if (node->assign.name) free(node->assign.name);
      ast_free(node->assign.value);
      break;

    case AST_IF:
      ast_free(node->if_node.cond);
      ast_free(node->if_node.then);
      ast_free(node->if_node.else_);
      break;

    case AST_FOR:
      if (node->for_node.var) free(node->for_node.var);
      ast_free(node->for_node.start);
      ast_free(node->for_node.end);
      ast_free(node->for_node.step);
      ast_free(node->for_node.body);
      break;

    case AST_WHILE:
      ast_free(node->while_node.cond);
      ast_free(node->while_node.body);
      break;

    case AST_FUNC:
      if (node->func_node.ident) free(node->func_node.ident);
      ast_free(node->func_node.args);
      ast_free(node->func_node.body);
      break;

    case AST_FUNC_ARG:
      if (node->func_arg.type) free(node->func_arg.type);
      if (node->func_arg.ident) free(node->func_arg.ident);
      ast_free(node->func_arg.next);
      break;

    case AST_ARR_FUNC_ARG:
      if (node->func_containter_arg.cont_name)
        free(node->func_containter_arg.cont_name);
      ast_free(node->func_containter_arg.func_type);
      if (node->func_containter_arg.ident)
        free(node->func_containter_arg.ident);
      ast_free(node->func_containter_arg.next);
      break;

    case AST_RETURN:
      ast_free(node->return_node.value);
      break;

    case AST_VAR:
    case AST_SIMPLE:
      if (node->var.name) free(node->var.name);
      break;

    case AST_NUMBER:
      // nothing to free
      break;

    case AST_STRING:
    case AST_INDICATOR:
    case AST_STRATEGY:
    case AST_IMPORT:
      if (node->string.value) free(node->string.value);
      break;

    case AST_BINOP:
      if (node->binop.op) free(node->binop.op);
      ast_free(node->binop.left);
      ast_free(node->binop.right);
      break;

    case AST_PAREN_OP:
      ast_free(node->paren_expr.expr);
      break;

    case AST_COMMA_OP:
      ast_free(node->comma_expr.expr);
      break;

    case AST_UNOP:
      ast_free(node->unop.operand);
      break;

    case AST_CALL:
      if (node->call_node.name) free(node->call_node.name);
      ast_free(node->call_node.args);
      break;

    case AST_CALL_ARG:
      ast_free(node->call_arg.val);
      ast_free(node->call_arg.next);
      break;

    case AST_BREAK:
    case AST_CONTINUE:
      // nothing to free
      break;

    case AST_SWITCH:
      ast_free(node->switch_node.expr);
      ast_free(node->switch_node.cases);
      ast_free(node->switch_node.default_body);
      break;

    case AST_SWITCH_BLOCK:
      ast_free(node->switch_block_node.prev);
      ast_free(node->switch_block_node.th);
      break;

    case AST_CASE:
      ast_free(node->case_stmt.expr);
      ast_free(node->case_stmt.switch_blk_node);
      ast_free(node->switch_case.next);
      break;

    case AST_CASE_RANGE:
      // TODO: implement when properly filled
      break;

    case AST_DEFAULT:
      ast_free(node->default_stmt.switch_blk_node);
      break;

    case AST_STMT:
      ast_free(node->block_node.stmt);
      ast_free(node->block_node.next);
      break;

    case AST_STMTS:
      ast_free(node->stmt_node.stmt);
      break;

    default:
      // unknown type — free nothing
      break;
      break;
  }

  free(node);
}
