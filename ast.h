#pragma once

#include <stddef.h>
#include <stdint.h>
typedef struct ast_node {
  int type;
 
  union {
    struct {
      char* name;
      struct ast_node* value;
    } assign;
    struct {
      struct ast_node* name;
      struct ast_node* value;
    } ast_assign;
    struct {
      struct ast_node *cond, *then, *else_;
      int is_elif;
    } if_node;
    struct {
      struct ast_node *cond, *then, *else_;
    } ternary_node;
    struct {
      char* var;
      struct ast_node *start, *end, *step, *body;
    } for_node;
    struct {
      struct ast_node *cond, *body;
    } while_node;
    struct {
      char* ident;
      struct ast_node* args;
      struct ast_node* body;
      int arg_count;
    } func_node;
    struct {
      char* type;
      char* ident;
      struct ast_node* next;
    } func_arg;
    struct {
      char* cont_name;
      struct ast_node* func_type;
      char* ident;
      struct ast_node* next;
    } func_containter_arg;
    struct {
      struct ast_node* value;
    } return_node;
    struct {
      struct ast_node* value;
      struct ast_node* body;
      struct ast_node* next;
    } switch_case;
    struct {
      struct ast_node* expr;
      struct ast_node* cases;
      struct ast_node* default_body;
      size_t case_count;
    } switch_node;
    struct {
      char* name;
      int n;
    } var;
    struct {
      int value;
    } number;
    struct {
      char* value;
    } string;
    struct {
      char* op;
      struct ast_node *left, *right;
    } binop;
    struct {
      struct ast_node* expr;
    } paren_expr;
    struct {
      struct ast_node* expr;
      struct ast_node* value;
    } index;
    struct {
      struct ast_node* expr;
    } quad_expr;
    struct {
      struct ast_node* expr;
    } comma_expr;
    struct {
      char* op;
      struct ast_node* operand;
    } unop;
    struct {
      struct ast_node* val;
      struct ast_node* next;
    } call_arg;
    struct {
      struct ast_node* name;
      struct ast_node* args;
      int arg_count;
      int magic_num; //this is the num for determinig if call_node is really unallocated and free for use
    } call_node;
    struct {
      struct ast_node* prev;
      struct ast_node* th;
    } switch_block_node;

    struct {
      struct ast_node* expr;
      struct ast_node* switch_blk_node;
    } case_stmt;
    struct {
      struct ast_node* switch_blk_node;
    } default_stmt;
    struct {
      struct ast_node* next;
      struct ast_node* stmt;
      int is_else;
    } block_node;
    struct {
      struct ast_node* stmt;
    } stmt_node;
    struct {
    struct ast_node* expr_list;
    } array_node;
    struct {
    char* float_num;
    } float_number_node;
  };
} ast_node;

typedef enum ast_node_kind {
  AST_ASSIGN,
  AST_EXPR_ASSIGN,
  AST_IF,
  AST_FOR,
  AST_WHILE,
  AST_TERNARY,
  AST_RETURN,
  AST_VARIP,
  AST_VAR,
  AST_VARN,
  AST_NUMBER,
  AST_FL_NUMBER,
  AST_STRING,
  AST_BINOP,
  AST_PAREN_OP,
  AST_QUAD_BRACE_OP,
  AST_INDEX,
  AST_COMMA_OP,
  AST_UNOP,
  AST_FUNC,
  AST_CALL,
  AST_CALL_ARG,
  AST_FUNC_ARG,
  AST_ARR_FUNC_ARG,
  AST_BREAK,
  AST_CONTINUE,
  AST_SWITCH,
  AST_SWITCH_BLOCK,
  AST_CASE,
  AST_CASE_RANGE,
  AST_DEFAULT,
  AST_CONST,
  AST_SIMPLE,
  AST_IMPORT,
  AST_INDICATOR,
  AST_STRATEGY,
  AST_STMT,
  AST_STMTS,
  AST_ARRAY
} ast_node_kind;

ast_node* new_assign_node(char* name, ast_node* value);
ast_node* new_expr_assign_node(ast_node* name, ast_node* value);
ast_node* new_if_node(ast_node* cond, ast_node* then, ast_node* else_);
ast_node* new_for_node(char* var, ast_node* start, ast_node* end,
                       ast_node* step, ast_node* body);
ast_node* new_ternary_node(ast_node* cond, ast_node* then, ast_node* else_);
ast_node* new_while_node(ast_node* cond, ast_node* body);
ast_node* new_return_node(ast_node* value);
ast_node* new_var_node(char* name, ast_node* value);
ast_node* new_varip_node(char* name, ast_node* value);
ast_node* new_varn_node(char* name, int is_need_n);
ast_node* new_number_node(int value);
ast_node* new_number_float_node(char* f);
ast_node* new_string_node(char* value);
ast_node* new_binop_node(char* op, ast_node* left, ast_node* right);
ast_node* new_paren_expr_node(ast_node* expr);
ast_node* new_quad_brace_expr_node(ast_node* expr);
ast_node* new_index_node(ast_node* expr, ast_node* value);
ast_node* new_comma_expr_node(ast_node* expr);
ast_node* new_unop_node(char* op, ast_node* operand);
ast_node* new_call_node(ast_node* name, ast_node* args);
ast_node* new_call_node_dot(ast_node* name, ast_node* args);
ast_node* new_call_arg_node(ast_node* expr);
ast_node* new_func_node(char* ident, ast_node* args, ast_node* body);
ast_node* new_func_type_node(char* type, char* name);
ast_node* new_func_type_dot_node(char* prt_before, char* prt_after, char* name);
ast_node* new_array_func_type_node(char* arr, ast_node* arr_type, char* name);
ast_node* new_array_func_type_dot_node(char* p_b, char* p_a, ast_node* arr_type,
                                       char* name);
char* new_type_name(int token);
ast_node* new_indicator_node(char* name);
ast_node* new_strategy_node(char* name);
ast_node* new_break_node(void);
ast_node* new_continue_node(void);
ast_node* new_switch_node(ast_node* expr, ast_node* cases,
                          ast_node* default_body);
ast_node* new_switch_block_node(ast_node* prev, ast_node* th);
ast_node* new_case_node(ast_node* expr, ast_node* switch_blk_node);
// ast_node* new_case_node_range(ast_node* from, ast_node* to, ast_node* body);
ast_node* new_default_node(ast_node* body);
ast_node* new_const_node(char* name, ast_node* value);
ast_node* new_simple_node(char* name, ast_node* value);
ast_node* new_import_node(char* name);
ast_node* new_assign_re_node(char* name, ast_node* value);
ast_node* new_assign_expr_re_node(ast_node* name, ast_node* value);
ast_node* new_block_node(ast_node* stmt);
ast_node* new_stmt_node(ast_node* stmts);
ast_node* new_var_dot_node(char* name, char* scnd_name);
ast_node* new_array_node(ast_node* expr_list);
void ast_free(ast_node* node);
