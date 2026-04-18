#ifndef AST_H
#define AST_H

typedef struct ast_node { int type;
    union {
        struct { char *name; struct ast_node *value; } assign;
        struct { struct ast_node *cond, *then, *else_; } if_node;
        struct { char *var; struct ast_node *start, *end, *step, *body; } for_node;
        struct { struct ast_node *cond, *body; } while_node;
        struct { struct ast_node *value; } return_node;
        struct { char *name; } var;
        struct { int value; } number;
        struct { char *value; } string;
        struct { char *op; struct ast_node *left, *right; } binop;
        struct { char *op; struct ast_node *operand; } unop;
        struct { char *name; struct ast_node **args; int arg_count; } call;
    };
} ast_node;

typedef enum ast_node_kind {
AST_ASSIGN = 1,
AST_IF,
AST_FOR,
AST_WHILE,
AST_RETURN,
AST_VAR,
AST_NUMBER,
AST_STRING,
AST_BINOP,
AST_UNOP,
AST_CALL,
AST_BREAK,
AST_CONTINUE,
AST_SWITCH,
AST_CASE,
AST_CASE_RANGE,
AST_DEFAULT,
AST_CONST,
AST_SIMPLE,
AST_IMPORT,
AST_INDICATOR,
AST_STRATEGY,
} ast_node_kind;

ast_node* new_assign_node(char *name, ast_node *value);
ast_node* new_if_node(ast_node *cond, ast_node *then, ast_node *else_);
ast_node* new_for_node(char *var, ast_node *start, ast_node *end, ast_node *step, ast_node *body);
ast_node* new_while_node(ast_node *cond, ast_node *body);
ast_node* new_return_node(ast_node *value);
ast_node* new_var_node(char *name);
ast_node* new_number_node(int value);
ast_node* new_string_node(char *value);
ast_node* new_binop_node(char *op, ast_node *left, ast_node *right);
ast_node* new_unop_node(char *op, ast_node *operand);
ast_node* new_call_node(char *name, ast_node **args, int arg_count);
ast_node* new_indicator_node(char *name);
ast_node* new_strategy_node(char *name);
ast_node* new_break_node(void);
ast_node* new_continue_node(void);
ast_node* new_switch_node(ast_node *expr, ast_node *body);
ast_node* new_case_node(ast_node *value, ast_node *body);
ast_node* new_case_node_range(ast_node *from, ast_node *to, ast_node *body);
ast_node* new_default_node(ast_node *body);
ast_node* new_const_node(char *name, ast_node *value);
ast_node* new_simple_node(char *name);
ast_node* new_import_node(char *name);
ast_node* new_assign_re_node(char *name, ast_node *value);

void ast_free(ast_node *node);

#endif //AST_H
