#include "ast.h"

#include <stdlib.h>
#include <string.h>

ast_node* new_assign_node(char* name, ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_ASSIGN;
  node->assign.name = strdup(name);
  node->assign.value = value;
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

ast_node* new_for_node(char* var, ast_node* start, ast_node* end,
                       ast_node* step, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_FOR;
  node->for_node.var = var ? strdup(var) : NULL;
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

ast_node* new_return_node(ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_RETURN;
  node->return_node.value = value;
  return node;
}

ast_node* new_var_node(char* name) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_VAR;
  node->var.name = strdup(name);
  return node;
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
  node->string.value = strdup(value);
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

ast_node* new_unop_node(char* op, ast_node* operand) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_UNOP;
  node->unop.op = strdup(op);
  node->unop.operand = operand;
  return node;
}

ast_node* new_call_node(char* name, ast_node** args, int arg_count) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CALL;
  node->call.name = strdup(name);
  node->call.args = args;
  node->call.arg_count = arg_count;
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

ast_node* new_switch_node(ast_node* expr, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_SWITCH;
  return node;  // TODO
}

ast_node* new_case_node(ast_node* value, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CASE;
  return node;  // TODO
}

ast_node* new_case_node_range(ast_node* from, ast_node* to, ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CASE_RANGE;
  return node;  // TODO
}

ast_node* new_default_node(ast_node* body) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_DEFAULT;
  return node;  // TODO
}

ast_node* new_const_node(char* name, ast_node* value) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_CONST;
  node->assign.name = strdup(name);
  node->assign.value = value;
  return node;
}

ast_node* new_simple_node(char* name) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_SIMPLE;
  node->var.name = strdup(name);
  return node;
}

ast_node* new_import_node(char* name) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_IMPORT;
  node->string.value = strdup(name);
  return node;
}

ast_node* new_assign_re_node(char* name, ast_node* value) {
  return new_assign_node(name, value);  // пока одинаково
}

void ast_free(ast_node* node) {
  if (!node) return;
  // TODO: рекурсивное освобождение
  free(node);
}
