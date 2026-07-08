%option noyywrap

%{
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stddef.h>
#include<string.h>
#include<stdbool.h>
#include "error.h"
#include "parser_rules.tab.h"

extern int line;
extern int col;

%}

%%

\n { line++; col = 0;}

(\t|\f|\v|\r) { col++; }

indicator { col += 9; return indicator_function; }
strategy { col += 8; return strategy_function; }
if { col += 2; return if_statement; }
else { col += 4; return else_statement; }
for { col += 3; return for_statement; }
return { col += 6; return return_statement; }
continue { col += 8; return continue_statement; }
to { col += 2; return to; }
switch { col += 6; return switch_statement; }
break { col += 5; return break_statement; }
default { col += 7; return default_statement; }
while { col += 5; return while_statement; }
var { col += 3; return var; }
const { col += 5; return const_statement; }
simple { col += 6; return simple; }
import { col += 6; return import_statement; }
as { col += 2; return as; }
input { col += 5; return input_func; }
int { col += 3; return int_type; }
bool { col += 4; return bool_type; }
float { col += 5; return float_type; }
color { col += 5; return color_type; }
string { col += 6; return string_as_type; }
and { col += 3; return logical_and; }
"#" { col++; return func_paren; }
"(" { col++; return left_paren; }
")" { col++; return right_paren; }
"[" { col++; return left_quad_brace; }
"]" { col++; return right_quad_brace; }
"{" { col++; return left_brace; }
"}" { col++; return right_brace; }
"<<==" { col += 4; return bitwise_shift_left_with_equals; }
">>=" { col += 3; return bitwise_shift_right_with_equals;}
"<<" { col += 2; return bitwise_shift_to_left; }
">>" { col += 2; return bitwise_shift_to_right; }
"==" { col += 2; return equals; }
"=" { col++; return assign; }
":" { col++; return colon;}
":=" { col += 2; return re_assign; }
">" { col++; return greater_than; }
"<" { col++; return lesser_than; }
"+" { col++; return plus; }
"-" { col++; return minus; }
"*" { col++; return multiply; }
"/" { col++; return divide; }
"%" { col++; return divide_with_remind; }
">=" { col += 2; return greater_than_or_equals; }
"<=" { col += 2; return lesser_than_or_equals; }
"&=" { col += 2; return bitwise_and_with_equals; }
"|=" { col += 2; return bitwise_or_with_equals; }
"^=" { col += 2; return bitwise_xor_with_equals; }
"~=" { col += 2; return bitwise_not_with_equals; }
"," { col++; return comma; }
"." { col++; return dot; }
"!" { col++; return logical_not; }
"&&" { col += 2; return logical_and; }
"!=" { col += 2; return dont_equal; }
";" { col++; return semicolon; }
"&" { col++; return bitwise_and; }
"||" { col += 2; return logical_or; }
"|" { col++; return bitwise_or; }
"^" { col++; return bitwise_xor; }
"~" { col++; return bitwise_not; }
"?" { col++; return question_sign; }

[0-9]+\.[0-9]+ { yylval.sval = strdup(yytext);col += yyleng;return number;}
[0-9]+ {yylval.ival = strtol(yytext, NULL, 10);col += yyleng;return number;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.sval = strdup(yytext);col += yyleng; return identifier; }
\"(\\.|[^"\\])*\" {
    size_t len = yyleng;
    if (len >= 2) {
        yylval.sval = malloc(len - 1); 
        if (!yylval.sval) exit(1);
        memcpy(yylval.sval, yytext + 1, len - 2);
        yylval.sval[len - 2] = '\0';
    } else {
        yylval.sval = strdup("");
    }
    col += yyleng;
    return string;
}
"//".* { col += yyleng; }
" " { col++; }
.|\n { 
    col++;
    errorf(line, col, "unexpected character %s", yytext);
}

<<EOF>> { return 0; }

%%


