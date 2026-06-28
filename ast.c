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

ast_node* new_paren_expr_node(ast_node* expr) {
ast_node* node = calloc(1,sizeof(ast_node));
node->type = AST_PAREN_OP;
node->paren_expr.expr = expr;
return node;
}

ast_node* new_comma_expr_node(ast_node* expr) {
ast_node* node = calloc(1,sizeof(ast_node));
node->type = AST_COMMA_OP;
node->comma_expr.expr = expr;
return node;
}

ast_node* new_unop_node(char* op, ast_node* operand) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_UNOP;
  node->unop.op = strdup(op);
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
  node->call_node.name = strdup(name);
  node->call_node.args = reverse_list(args);

  size_t count = 0;
  ast_node* a = args;
  while(a) {
  count++;
  a = a->call_arg.next;
  }

  node->call_node.arg_count = count;
  return node;
}
ast_node* new_call_node_dot(char* name,char* scnd_name,ast_node* args){
int len_frst = strlen(name);
int len_scnd = strlen(scnd_name);

char* with_dot = malloc(len_frst + 2 + len_scnd);
strcpy(with_dot,name);

with_dot[len_frst] = '.';

strcpy(with_dot + len_frst+1,scnd_name);


return new_call_node(with_dot,args);
}

ast_node* new_call_arg_node(ast_node* expr) {
ast_node* node = calloc(1,sizeof(ast_node));
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

ast_node* new_default_node(ast_node*  switch_blk_node) {
  ast_node* node = calloc(1, sizeof(ast_node));
  node->type = AST_DEFAULT;
  node->default_stmt.switch_blk_node = switch_blk_node;
  return node;  
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

  switch (node->type) {
    case AST_ASSIGN:
    case AST_CONST:
      free(node->assign.name);
      ast_free(node->assign.value);
      break;

    case AST_IF:
      ast_free(node->if_node.cond);
      ast_free(node->if_node.then);
      ast_free(node->if_node.else_);
      break;

    case AST_FOR:
      free(node->for_node.var);
      ast_free(node->for_node.start);
      ast_free(node->for_node.end);
      ast_free(node->for_node.step);
      ast_free(node->for_node.body);
      break;

    case AST_WHILE:
      ast_free(node->while_node.cond);
      ast_free(node->while_node.body);
      break;

    case AST_RETURN:
      ast_free(node->return_node.value);
      break;

    case AST_VAR:
    case AST_SIMPLE:
      free(node->var.name);
      break;

    case AST_NUMBER:
      // nothing to free
      break;

    case AST_STRING:
    case AST_INDICATOR:
    case AST_STRATEGY:
    case AST_IMPORT:
      free(node->string.value);
      break;

    case AST_BINOP:
      free(node->binop.op);
      ast_free(node->binop.left);
      ast_free(node->binop.right);
      break;

    case AST_UNOP:
      free(node->unop.op);
      ast_free(node->unop.operand);
      break;

    case AST_CALL:
      free(node->call_node.name);
      /*
      if (node->call_no.args) {
        for (int i = 0; i < node->call.arg_count; i++) {
          ast_free(node->call.args[i]);
        }
        free(node->call.args);
      }
      */
      break;

    case AST_BREAK:
    case AST_CONTINUE:
      // nothing to free
      break;

    case AST_SWITCH:
    case AST_CASE:
    case AST_CASE_RANGE:
    case AST_DEFAULT:
      // TODO: implement when these nodes are properly filled
      break;

    default:
      // unknown type — free nothing
      break;
  }

  free(node);
}
