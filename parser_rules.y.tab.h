/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_RULES_Y_TAB_H_INCLUDED
# define YY_YY_PARSER_RULES_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_INDICATOR = 258,         /* TOKEN_INDICATOR  */
    TOKEN_STRATEGY = 259,          /* TOKEN_STRATEGY  */
    TOKEN_IF = 260,                /* TOKEN_IF  */
    TOKEN_INDENT = 261,            /* TOKEN_INDENT  */
    TOKEN_DEDENT = 262,            /* TOKEN_DEDENT  */
    TOKEN_ELSE = 263,              /* TOKEN_ELSE  */
    TOKEN_FOR = 264,               /* TOKEN_FOR  */
    TOKEN_STEP = 265,              /* TOKEN_STEP  */
    TOKEN_TO = 266,                /* TOKEN_TO  */
    TOKEN_RETURN = 267,            /* TOKEN_RETURN  */
    TOKEN_WHILE = 268,             /* TOKEN_WHILE  */
    TOKEN_BREAK = 269,             /* TOKEN_BREAK  */
    TOKEN_CONTINUE = 270,          /* TOKEN_CONTINUE  */
    TOKEN_SWITCH = 271,            /* TOKEN_SWITCH  */
    TOKEN_CASE = 272,              /* TOKEN_CASE  */
    TOKEN_DEFAULT = 273,           /* TOKEN_DEFAULT  */
    TOKEN_VAR = 274,               /* TOKEN_VAR  */
    TOKEN_CONST = 275,             /* TOKEN_CONST  */
    TOKEN_SIMPLE = 276,            /* TOKEN_SIMPLE  */
    TOKEN_LOG_AND = 277,           /* TOKEN_LOG_AND  */
    TOKEN_LOG_OR = 278,            /* TOKEN_LOG_OR  */
    TOKEN_LOG_NOT = 279,           /* TOKEN_LOG_NOT  */
    TOKEN_DONT_EQ = 280,           /* TOKEN_DONT_EQ  */
    TOKEN_BIT_AND = 281,           /* TOKEN_BIT_AND  */
    TOKEN_BIT_OR = 282,            /* TOKEN_BIT_OR  */
    TOKEN_BIT_XOR = 283,           /* TOKEN_BIT_XOR  */
    TOKEN_BIT_NOT = 284,           /* TOKEN_BIT_NOT  */
    TOKEN_BIT_SHL = 285,           /* TOKEN_BIT_SHL  */
    TOKEN_BIT_SHR = 286,           /* TOKEN_BIT_SHR  */
    TOKEN_SEMICOLON = 287,         /* TOKEN_SEMICOLON  */
    TOKEN_IMPORT = 288,            /* TOKEN_IMPORT  */
    TOKEN_AS = 289,                /* TOKEN_AS  */
    TOKEN_INPUT = 290,             /* TOKEN_INPUT  */
    TOKEN_INT = 291,               /* TOKEN_INT  */
    TOKEN_BOOL = 292,              /* TOKEN_BOOL  */
    TOKEN_FLOAT = 293,             /* TOKEN_FLOAT  */
    TOKEN_COLOR = 294,             /* TOKEN_COLOR  */
    TOKEN_STRING_TYPE = 295,       /* TOKEN_STRING_TYPE  */
    TOKEN_LPAREN = 296,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 297,            /* TOKEN_RPAREN  */
    TOKEN_LBRACE = 298,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 299,            /* TOKEN_RBRACE  */
    TOKEN_ASSIGN = 300,            /* TOKEN_ASSIGN  */
    TOKEN_ASSIGN_RE = 301,         /* TOKEN_ASSIGN_RE  */
    TOKEN_EQ = 302,                /* TOKEN_EQ  */
    TOKEN_GT = 303,                /* TOKEN_GT  */
    TOKEN_LT = 304,                /* TOKEN_LT  */
    TOKEN_GT_OR_EQ = 305,          /* TOKEN_GT_OR_EQ  */
    TOKEN_LT_OR_EQ = 306,          /* TOKEN_LT_OR_EQ  */
    TOKEN_BIT_AND_EQ = 307,        /* TOKEN_BIT_AND_EQ  */
    TOKEN_BIT_OR_EQ = 308,         /* TOKEN_BIT_OR_EQ  */
    TOKEN_BIT_XOR_EQ = 309,        /* TOKEN_BIT_XOR_EQ  */
    TOKEN_BIT_NOT_EQ = 310,        /* TOKEN_BIT_NOT_EQ  */
    TOKEN_BIT_SHL_EQ = 311,        /* TOKEN_BIT_SHL_EQ  */
    TOKEN_BIT_SHR_EQ = 312,        /* TOKEN_BIT_SHR_EQ  */
    TOKEN_ARROW = 313,             /* TOKEN_ARROW  */
    TOKEN_COMMA = 314,             /* TOKEN_COMMA  */
    TOKEN_DOT = 315,               /* TOKEN_DOT  */
    TOKEN_COLON = 316,             /* TOKEN_COLON  */
    TOKEN_NUMBER = 317,            /* TOKEN_NUMBER  */
    TOKEN_IDENTIFIER = 318,        /* TOKEN_IDENTIFIER  */
    TOKEN_STRING = 319             /* TOKEN_STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser_rules.y"

    int ival;
    char *sval;
    struct ast_node *node;

#line 134 "parser_rules.y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_RULES_Y_TAB_H_INCLUDED  */
