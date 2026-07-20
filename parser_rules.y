%define parse.error verbose

%code requires {
#include <stdio.h>
#include "ast.h"
#include<string.h>
}

%code {
#include "vector.h"
extern int yylex(void);
extern void yyerror(const char* s);
extern Vector* program_root;
}

%{
extern void yyerror(const char *s);
extern int func_cnt;
%}

%union {
    int ival;
    char *sval;
    struct ast_node *node;
}

%token LOWEST_PREC
%right LOWEST_PREC

%token indicator_function
%token strategy_function
%token if_statement
%token else_statement
%token for_statement
%token step
%token to
%token return_statement
%token while_statement
%token break_statement
%token continue_statement
%token switch_statement
%token case_statement
%token default_statement
%token var
%token varip
%token const_statement
%token simple
%token logical_and
%token logical_or
%token logical_not
%token dont_equal
%token question_sign
%token bitwise_and
%token bitwise_or
%token bitwise_xor
%token bitwise_not
%token bitwise_shift_to_left
%token bitwise_shift_to_right
%token semicolon
%token import_statement
%token as
%token input_func
%token <ival> int_type
%token <ival> bool_type
%token <ival> float_type
%token <ival> color_type
%token <ival> string_as_type
%token left_paren
%token right_paren
%token func_paren
%token left_quad_brace
%token right_quad_brace
%token left_brace
%token right_brace
%token assign
%token re_assign
%token equals
%token greater_than
%token lesser_than
%token plus_and_assign
%token minus_and_assign
%token multiply_and_assign
%token divide_and_assign
%token remind_and_assign
%token plus
%token minus
%token multiply
%token divide
%token divide_with_remind
%token greater_than_or_equals
%token lesser_than_or_equals
%token bitwise_and_with_equals
%token bitwise_or_with_equals
%token bitwise_xor_with_equals
%token bitwise_not_with_equals
%token bitwise_shift_right_with_equals
%token bitwise_shift_left_with_equals
%token comma
%token dot
%token colon

%token <ival> number
%token <sval> identifier string
%type <sval> pine_type 
%type <sval> pine_type_primitive

%type <node> program statement   expr expr_list block stmt_list stmt_block if_body indicator_stmt strategy_stmt if_stmt for_stmt while_stmt  return_stmt_expr break_stmt continue_stmt dot_expr   switch_stmt case_list default_case case_stmt switch_block_stmts switch_block_stmt call_arg_stmt func_stmt opt_arg_list arg_list func_type  call_list call_stmt varip_stmt var_stmt const_stmt simple_stmt import_stmt assignment_stmt assignment_re_stmt 
%start program


%nonassoc if_statement
%nonassoc else_statement


%token PREC_SINGLE_NAME 
%token PREC_TYPE_NAME

%nonassoc PREC_SINGLE_NAME
%nonassoc PREC_TYPE_NAME

%token PREC_FUNC PREC_CALL PREC_TERNARY_IDENT
%nonassoc PREC_CALL
%nonassoc PREC_FUNC
%right PREC_TERNARY_IDENT

%right assign re_assign
%right bitwise_and_with_equals bitwise_or_with_equals bitwise_xor_with_equals bitwise_not_with_equals
%right bitwise_shift_left_with_equals bitwise_shift_right_with_equals

%left logical_or
%left logical_and
%left equals dont_equal greater_than lesser_than greater_than_or_equals lesser_than_or_equals

%left bitwise_or
%left bitwise_xor
%left bitwise_and
%left bitwise_shift_to_left bitwise_shift_to_right

%left plus minus

%left multiply divide divide_with_remind

%nonassoc logical_not bitwise_not
%nonassoc  left_quad_brace right_quad_brace dot
%nonassoc left_paren left_brace
%%

program:
     statement
    { vec_push(program_root,$1); }
    | program statement
      {vec_push(program_root, $2);}
    ;

statement:
    indicator_stmt
    | strategy_stmt
    | if_stmt
    | for_stmt
    | while_stmt
    | return_stmt_expr
    | break_stmt
    | continue_stmt
    | switch_stmt
    | varip_stmt
    | var_stmt
    | const_stmt
    | simple_stmt
    | func_stmt
    | call_arg_stmt
    | import_stmt
    | assignment_stmt
    | assignment_re_stmt
    | expr %prec LOWEST_PREC
    ;
 
block:
    left_brace stmt_list right_brace
    { $$ = new_stmt_node($2); }
    ;

stmt_list:
    stmt_list stmt_block
    { $2->block_node.next = $1;$$ = $2; }
    | stmt_block
    { $$ = $1; }
    ;

stmt_block:
  statement
  { $$ = new_block_node($1);}

if_body:
    block
    { $$ = $1; }
    | statement
    { $$ = new_block_node($1); }
    ;

indicator_stmt:
    indicator_function left_paren string right_paren
    { $$ = new_indicator_node($3); }
    ;

strategy_stmt:
    strategy_function left_paren string right_paren
    { $$ = new_strategy_node($3); }
    ;

if_stmt:
    if_statement  left_paren expr right_paren if_body %prec if_statement 
    { $$ = new_if_node($3,$5,NULL); }
    | if_statement  left_paren expr right_paren if_body else_statement if_body %prec else_statement
    { $$ = new_if_node($3,$5,$7); }
    
    ;

for_stmt:
    for_statement left_paren identifier assign expr to expr right_paren block
    { $$ = new_for_node($3, $5, $7, NULL, $9); }
    | for_statement left_paren identifier assign expr to expr step expr right_paren block
    { $$ = new_for_node($3, $5, $7, $9, $11); }
    | for_statement  left_paren expr right_paren block
    { $$ = new_for_node(NULL, $3, NULL, NULL, $5); }
    ;

while_stmt:
    while_statement left_paren expr right_paren block
    { $$ = new_while_node($3, $5); }
    ;

func_stmt:
   identifier func_paren opt_arg_list func_paren block %prec PREC_FUNC
   { $$ = new_func_node($1,$3,$5);func_cnt++; }
   ; 

opt_arg_list:
    arg_list
    { $$ = $1; }
    | /* empty */
    { $$ = NULL; }
    ;

arg_list:
    arg_list comma func_type
    { if($3->type == AST_FUNC_ARG) {

    $3->func_arg.next = $1; $$ = $3; 
    }
    else if($3->type == AST_ARR_FUNC_ARG) {
    $3->func_containter_arg.next = $1; $$ = $3;
    }
    }
    | func_type
    { $$ = $1; }
    ;

func_type:
   pine_type identifier %prec PREC_TYPE_NAME
  { $$ = new_func_type_node($1,$2);} 
  | pine_type %prec PREC_SINGLE_NAME
  { $$ = new_func_type_node(NULL,$1); }  
  | pine_type dot pine_type identifier
  { $$ = new_func_type_dot_node($1,$3,$4);}
  | pine_type dot pine_type
  { $$ = new_func_type_dot_node($1,$3,NULL);}
  | pine_type  lesser_than func_type greater_than identifier
   { $$ = new_array_func_type_node($1,$3,$5);} 
  | pine_type dot pine_type lesser_than func_type greater_than identifier
   { $$ = new_array_func_type_dot_node($1,$3,$5,$7);}
  ; 

pine_type_primitive:
  int_type
  { $$ = new_type_name(int_type);}
  | bool_type
  { $$ = new_type_name(bool_type);}
  | string_as_type
  { $$ = new_type_name(string_as_type);}
  | float_type
  { $$ = new_type_name(float_type);}
  | color_type
  { $$ = new_type_name(color_type);}

pine_type:
  int_type
  { $$ = new_type_name(int_type);}
  | bool_type
  { $$ = new_type_name(bool_type);}
  | string_as_type
  { $$ = new_type_name(string_as_type);}
  | float_type
  { $$ = new_type_name(float_type);}
  | color_type
  { $$ = new_type_name(color_type);}
  | identifier
  { $$ = $1;}
  ;

return_stmt_expr:
     return_statement  expr
    { $$ = new_return_node($2); }
    ;

break_stmt:
    break_statement
    { $$ = new_break_node(); }
    ;

continue_stmt:
    continue_statement
    { $$ = new_continue_node(); }
    ;

switch_stmt:
    switch_statement left_paren expr right_paren left_brace case_list default_case right_brace
    { $$ = new_switch_node($3, $6, $7); }
    ;

case_list:
    case_list case_stmt
    {
        $2->switch_case.next = $1;
        $$ = $2;
    }
    | /* empty */
    {
        $$ = NULL;
    }
    ;

case_stmt:
    expr left_brace switch_block_stmts right_brace semicolon
    {
        $$ = new_case_node($1, $3);
    }
    ;

default_case:
    default_statement left_brace switch_block_stmts right_brace semicolon
    {
        $$ = new_default_node($3);
    }
    | /* empty */
    {
        $$ = NULL;
    }
    ;

switch_block_stmt:
   statement
   { $$ = $1; }

switch_block_stmts:
   switch_block_stmt
   { $$ = new_block_node($1); }
   | switch_block_stmts switch_block_stmt
   { $$ = new_switch_block_node($1, new_block_node($2)); }
   ;

dot_expr:
    pine_type dot pine_type %prec PREC_TERNARY_IDENT
    { $$ = new_var_dot_node($1, $3); }
    ;

call_arg_stmt:
   identifier left_paren call_list right_paren %prec PREC_CALL
   { $$ = new_call_node($1,$3); }
   | dot_expr  left_paren call_list right_paren %prec PREC_CALL
   { $$ = new_call_node_dot($1->var.name,$3);}
   ;

call_list:
   call_stmt
   { $$ = $1; }
   | call_list comma call_stmt
   { $3->call_arg.next = $1; $$ = $3; }
   | /*empty*/
   { $$ = NULL;}
   ;

call_stmt:
  expr 
  { $$ = new_call_arg_node($1); }
  | identifier assign expr
  { $$ = new_call_arg_node($3); }

var_stmt:
    var identifier assign expr
    { $$ = new_var_node($2,$4); }
    | var identifier
    { $$ = new_var_node($2,NULL); }
    | var identifier assign call_arg_stmt
     { $$ = new_var_node($2,$4); }
    ;
varip_stmt:
   varip identifier assign expr
   { $$ = new_varip_node($2,$4); }
   | varip identifier
   { $$ = new_varip_node($2,NULL); }
   | varip identifier assign call_arg_stmt
   { $$ = new_varip_node($2,$4);}

const_stmt:
    const_statement pine_type identifier assign expr
    { $$ = new_const_node($3, $5); }
    | const_statement pine_type identifier assign call_arg_stmt
    { $$ = new_const_node($3, $5);}
    ;

simple_stmt:
    simple identifier
    { $$ = new_simple_node($2,NULL); }
    | simple identifier assign expr
    { $$ = new_simple_node($2,$4); }
    |simple identifier assign call_arg_stmt
    { $$ = new_simple_node($2,$4); }
    ;

import_stmt:
    import_statement string
     { $$ = new_import_node($2); }
    ;

assignment_stmt:
     identifier assign expr
    { $$ = new_assign_node($1, $3); }
    | identifier assign call_arg_stmt
    { $$ = new_assign_node($1,$3); }
    | expr assign expr
    { $$ = new_expr_assign_node($1,$3); }
    | pine_type_primitive identifier assign expr
    { $$ = new_assign_node($2,$4); }
    ;

assignment_re_stmt:
    identifier re_assign expr
    { $$ = new_assign_re_node($1, $3); }
    | identifier re_assign call_arg_stmt
    { $$ = new_assign_re_node($1,$3) ; }
    | expr re_assign expr
    { $$ = new_assign_expr_re_node($1,$3); }
    ;


expr:
    number
    { $$ = new_number_node($1); }
    | identifier
    { $$ = new_varn_node($1,0); }
    | string
    { $$ = new_string_node($1); }
    | dot_expr
    { $$ = $1;}
    | expr plus_and_assign expr
    { $$ = new_binop_node("+=",$1,$3); }
    | expr minus_and_assign expr 
    { $$ = new_binop_node("-=",$1,$3); }
    | expr multiply_and_assign expr
    { $$ = new_binop_node("*=",$1,$3); }
    | expr divide_and_assign expr
    { $$ = new_binop_node("/=",$1,$3); }
    | expr remind_and_assign expr
    { $$ = new_binop_node("%=",$1,$3); }
    | expr plus expr
    { $$ = new_binop_node("+", $1, $3); }
    | expr minus expr
    { $$ = new_binop_node("-", $1, $3); }
    | expr multiply expr
    { $$ = new_binop_node("*", $1, $3); }
    | expr divide expr
    { $$ = new_binop_node("/", $1, $3); }
    | expr divide_with_remind expr
    { $$ = new_binop_node("%", $1, $3); }
    | expr logical_and expr
    { $$ = new_binop_node("&&", $1, $3); }
    | expr logical_or expr
    { $$ = new_binop_node("||", $1, $3); }
    | expr equals expr
    { $$ = new_binop_node("==", $1, $3); }
    | expr dont_equal expr
    { $$ = new_binop_node("!=", $1, $3); }
    | expr greater_than expr
    { $$ = new_binop_node(">", $1, $3); }
    | expr lesser_than expr
    { $$ = new_binop_node("<", $1, $3); }
    | expr greater_than_or_equals expr
    { $$ = new_binop_node(">=", $1, $3); }
    | expr lesser_than_or_equals expr
    { $$ = new_binop_node("<=", $1, $3); }
    | expr bitwise_and expr
    { $$ = new_binop_node("&", $1, $3); }
    | expr bitwise_or expr
    { $$ = new_binop_node("|", $1, $3); }
    | expr bitwise_xor expr
    { $$ = new_binop_node("^", $1, $3); }
    | expr bitwise_shift_to_left expr
    { $$ = new_binop_node("<<", $1, $3); }
    | expr bitwise_shift_to_right expr
    { $$ = new_binop_node(">>", $1, $3); }
    | logical_not expr
    { $$ = new_unop_node("!", $2); }
    | bitwise_not expr
    { $$ = new_unop_node("~", $2); }
    | minus  expr %prec multiply
    { $$ = new_unop_node("-", $2); }
    | plus  expr %prec multiply
    { $$ = new_unop_node("+", $2); }
    | left_paren expr right_paren
    { $$ = new_paren_expr_node($2); }
    | expr left_quad_brace expr right_quad_brace
    { $$ = new_index_node($1,$3); }
    | left_quad_brace expr right_quad_brace
    { $$ = new_quad_brace_expr_node($2); }
    | expr question_sign expr colon expr %prec PREC_TERNARY_IDENT
    { $$ = new_ternary_node($1,$3,$5); }
    | left_quad_brace expr_list right_quad_brace
    { $$ = new_array_node($2); }
    ;

expr_list:
    expr
    | expr_list comma expr
    ;

%%


