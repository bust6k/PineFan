// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// First part of user prologue.
#line 26 "parser_rules.y"

extern void yyerror(const char* s);
extern Vector* program_root;

#line 47 "parser.cpp"

#include "parser.hpp"

// Unqualified %code blocks.
#line 22 "parser_rules.y"

#include "lexer.hpp"

#line 58 "parser.cpp"

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h>  // FIXME: INFRINGES ON USER NAME SPACE.
#define YY_(msgid) dgettext("bison-runtime", msgid)
#endif
#endif
#ifndef YY_
#define YY_(msgid) msgid
#endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
#if defined __GNUC__ && !defined __EXCEPTIONS
#define YY_EXCEPTIONS 0
#else
#define YY_EXCEPTIONS 1
#endif
#endif

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
#define YYCDEBUG \
  if (yydebug_) (*yycdebug_)

#define YY_SYMBOL_PRINT(Title, Symbol) \
  do {                                 \
    if (yydebug_) {                    \
      *yycdebug_ << Title << ' ';      \
      yy_print_(*yycdebug_, Symbol);   \
      *yycdebug_ << '\n';              \
    }                                  \
  } while (false)

#define YY_REDUCE_PRINT(Rule)             \
  do {                                    \
    if (yydebug_) yy_reduce_print_(Rule); \
  } while (false)

#define YY_STACK_PRINT()             \
  do {                               \
    if (yydebug_) yy_stack_print_(); \
  } while (false)

#else  // !YYDEBUG

#define YYCDEBUG \
  if (false) std::cerr
#define YY_SYMBOL_PRINT(Title, Symbol) YY_USE(Symbol)
#define YY_REDUCE_PRINT(Rule) static_cast<void>(0)
#define YY_STACK_PRINT() static_cast<void>(0)

#endif  // !YYDEBUG

#define yyerrok (yyerrstatus_ = 0)
#define yyclearin (yyla.clear())

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab
#define YYRECOVERING() (!!yyerrstatus_)

#line 7 "parser_rules.y"
namespace PineFan {
#line 132 "parser.cpp"

/// Build a parser object.
Parser::Parser()
#if YYDEBUG
    : yydebug_(false),
      yycdebug_(&std::cerr)
#else

#endif
{
}

Parser::~Parser() {}

Parser::syntax_error::~syntax_error() YY_NOEXCEPT YY_NOTHROW {}

/*---------.
| symbol.  |
`---------*/

// by_state.
Parser::by_state::by_state() YY_NOEXCEPT : state(empty_state) {}

Parser::by_state::by_state(const by_state& that) YY_NOEXCEPT
    : state(that.state) {}

void Parser::by_state::clear() YY_NOEXCEPT { state = empty_state; }

void Parser::by_state::move(by_state& that) {
  state = that.state;
  that.clear();
}

Parser::by_state::by_state(state_type s) YY_NOEXCEPT : state(s) {}

Parser::symbol_kind_type Parser::by_state::kind() const YY_NOEXCEPT {
  if (state == empty_state)
    return symbol_kind::S_YYEMPTY;
  else
    return YY_CAST(symbol_kind_type, yystos_[+state]);
}

Parser::stack_symbol_type::stack_symbol_type() {}

Parser::stack_symbol_type::stack_symbol_type(YY_RVREF(stack_symbol_type) that)
    : super_type(YY_MOVE(that.state)) {
  switch (that.kind()) {
    case symbol_kind::S_program:             // program
    case symbol_kind::S_statement:           // statement
    case symbol_kind::S_block:               // block
    case symbol_kind::S_indicator_stmt:      // indicator_stmt
    case symbol_kind::S_strategy_stmt:       // strategy_stmt
    case symbol_kind::S_if_stmt:             // if_stmt
    case symbol_kind::S_for_stmt:            // for_stmt
    case symbol_kind::S_while_stmt:          // while_stmt
    case symbol_kind::S_return_stmt:         // return_stmt
    case symbol_kind::S_break_stmt:          // break_stmt
    case symbol_kind::S_continue_stmt:       // continue_stmt
    case symbol_kind::S_switch_stmt:         // switch_stmt
    case symbol_kind::S_case_stmt:           // case_stmt
    case symbol_kind::S_default_stmt:        // default_stmt
    case symbol_kind::S_var_stmt:            // var_stmt
    case symbol_kind::S_const_stmt:          // const_stmt
    case symbol_kind::S_simple_stmt:         // simple_stmt
    case symbol_kind::S_import_stmt:         // import_stmt
    case symbol_kind::S_assignment_stmt:     // assignment_stmt
    case symbol_kind::S_assignment_re_stmt:  // assignment_re_stmt
    case symbol_kind::S_expr:                // expr
      value.YY_MOVE_OR_COPY<ast_node>(YY_MOVE(that.value));
      break;

    case symbol_kind::S_number:  // number
      value.YY_MOVE_OR_COPY<int>(YY_MOVE(that.value));
      break;

    case symbol_kind::S_identifier:  // identifier
    case symbol_kind::S_string:      // string
      value.YY_MOVE_OR_COPY<std::string>(YY_MOVE(that.value));
      break;

    default:
      break;
  }

#if 201103L <= YY_CPLUSPLUS
  // that is emptied.
  that.state = empty_state;
#endif
}

Parser::stack_symbol_type::stack_symbol_type(state_type s,
                                             YY_MOVE_REF(symbol_type) that)
    : super_type(s) {
  switch (that.kind()) {
    case symbol_kind::S_program:             // program
    case symbol_kind::S_statement:           // statement
    case symbol_kind::S_block:               // block
    case symbol_kind::S_indicator_stmt:      // indicator_stmt
    case symbol_kind::S_strategy_stmt:       // strategy_stmt
    case symbol_kind::S_if_stmt:             // if_stmt
    case symbol_kind::S_for_stmt:            // for_stmt
    case symbol_kind::S_while_stmt:          // while_stmt
    case symbol_kind::S_return_stmt:         // return_stmt
    case symbol_kind::S_break_stmt:          // break_stmt
    case symbol_kind::S_continue_stmt:       // continue_stmt
    case symbol_kind::S_switch_stmt:         // switch_stmt
    case symbol_kind::S_case_stmt:           // case_stmt
    case symbol_kind::S_default_stmt:        // default_stmt
    case symbol_kind::S_var_stmt:            // var_stmt
    case symbol_kind::S_const_stmt:          // const_stmt
    case symbol_kind::S_simple_stmt:         // simple_stmt
    case symbol_kind::S_import_stmt:         // import_stmt
    case symbol_kind::S_assignment_stmt:     // assignment_stmt
    case symbol_kind::S_assignment_re_stmt:  // assignment_re_stmt
    case symbol_kind::S_expr:                // expr
      value.move<ast_node>(YY_MOVE(that.value));
      break;

    case symbol_kind::S_number:  // number
      value.move<int>(YY_MOVE(that.value));
      break;

    case symbol_kind::S_identifier:  // identifier
    case symbol_kind::S_string:      // string
      value.move<std::string>(YY_MOVE(that.value));
      break;

    default:
      break;
  }

  // that is emptied.
  that.kind_ = symbol_kind::S_YYEMPTY;
}

#if YY_CPLUSPLUS < 201103L
Parser::stack_symbol_type& Parser::stack_symbol_type::operator=(
    const stack_symbol_type& that) {
  state = that.state;
  switch (that.kind()) {
    case symbol_kind::S_program:             // program
    case symbol_kind::S_statement:           // statement
    case symbol_kind::S_block:               // block
    case symbol_kind::S_indicator_stmt:      // indicator_stmt
    case symbol_kind::S_strategy_stmt:       // strategy_stmt
    case symbol_kind::S_if_stmt:             // if_stmt
    case symbol_kind::S_for_stmt:            // for_stmt
    case symbol_kind::S_while_stmt:          // while_stmt
    case symbol_kind::S_return_stmt:         // return_stmt
    case symbol_kind::S_break_stmt:          // break_stmt
    case symbol_kind::S_continue_stmt:       // continue_stmt
    case symbol_kind::S_switch_stmt:         // switch_stmt
    case symbol_kind::S_case_stmt:           // case_stmt
    case symbol_kind::S_default_stmt:        // default_stmt
    case symbol_kind::S_var_stmt:            // var_stmt
    case symbol_kind::S_const_stmt:          // const_stmt
    case symbol_kind::S_simple_stmt:         // simple_stmt
    case symbol_kind::S_import_stmt:         // import_stmt
    case symbol_kind::S_assignment_stmt:     // assignment_stmt
    case symbol_kind::S_assignment_re_stmt:  // assignment_re_stmt
    case symbol_kind::S_expr:                // expr
      value.copy<ast_node>(that.value);
      break;

    case symbol_kind::S_number:  // number
      value.copy<int>(that.value);
      break;

    case symbol_kind::S_identifier:  // identifier
    case symbol_kind::S_string:      // string
      value.copy<std::string>(that.value);
      break;

    default:
      break;
  }

  return *this;
}

Parser::stack_symbol_type& Parser::stack_symbol_type::operator=(
    stack_symbol_type& that) {
  state = that.state;
  switch (that.kind()) {
    case symbol_kind::S_program:             // program
    case symbol_kind::S_statement:           // statement
    case symbol_kind::S_block:               // block
    case symbol_kind::S_indicator_stmt:      // indicator_stmt
    case symbol_kind::S_strategy_stmt:       // strategy_stmt
    case symbol_kind::S_if_stmt:             // if_stmt
    case symbol_kind::S_for_stmt:            // for_stmt
    case symbol_kind::S_while_stmt:          // while_stmt
    case symbol_kind::S_return_stmt:         // return_stmt
    case symbol_kind::S_break_stmt:          // break_stmt
    case symbol_kind::S_continue_stmt:       // continue_stmt
    case symbol_kind::S_switch_stmt:         // switch_stmt
    case symbol_kind::S_case_stmt:           // case_stmt
    case symbol_kind::S_default_stmt:        // default_stmt
    case symbol_kind::S_var_stmt:            // var_stmt
    case symbol_kind::S_const_stmt:          // const_stmt
    case symbol_kind::S_simple_stmt:         // simple_stmt
    case symbol_kind::S_import_stmt:         // import_stmt
    case symbol_kind::S_assignment_stmt:     // assignment_stmt
    case symbol_kind::S_assignment_re_stmt:  // assignment_re_stmt
    case symbol_kind::S_expr:                // expr
      value.move<ast_node>(that.value);
      break;

    case symbol_kind::S_number:  // number
      value.move<int>(that.value);
      break;

    case symbol_kind::S_identifier:  // identifier
    case symbol_kind::S_string:      // string
      value.move<std::string>(that.value);
      break;

    default:
      break;
  }

  // that is emptied.
  that.state = empty_state;
  return *this;
}
#endif

template <typename Base>
void Parser::yy_destroy_(const char* yymsg, basic_symbol<Base>& yysym) const {
  if (yymsg) YY_SYMBOL_PRINT(yymsg, yysym);
}

#if YYDEBUG
template <typename Base>
void Parser::yy_print_(std::ostream& yyo,
                       const basic_symbol<Base>& yysym) const {
  std::ostream& yyoutput = yyo;
  YY_USE(yyoutput);
  if (yysym.empty())
    yyo << "empty symbol";
  else {
    symbol_kind_type yykind = yysym.kind();
    yyo << (yykind < YYNTOKENS ? "token" : "nterm") << ' ' << yysym.name()
        << " (";
    YY_USE(yykind);
    yyo << ')';
  }
}
#endif

void Parser::yypush_(const char* m, YY_MOVE_REF(stack_symbol_type) sym) {
  if (m) YY_SYMBOL_PRINT(m, sym);
  yystack_.push(YY_MOVE(sym));
}

void Parser::yypush_(const char* m, state_type s,
                     YY_MOVE_REF(symbol_type) sym) {
#if 201103L <= YY_CPLUSPLUS
  yypush_(m, stack_symbol_type(s, std::move(sym)));
#else
  stack_symbol_type ss(s, sym);
  yypush_(m, ss);
#endif
}

void Parser::yypop_(int n) YY_NOEXCEPT { yystack_.pop(n); }

#if YYDEBUG
std::ostream& Parser::debug_stream() const { return *yycdebug_; }

void Parser::set_debug_stream(std::ostream& o) { yycdebug_ = &o; }

Parser::debug_level_type Parser::debug_level() const { return yydebug_; }

void Parser::set_debug_level(debug_level_type l) { yydebug_ = l; }
#endif  // YYDEBUG

Parser::state_type Parser::yy_lr_goto_state_(state_type yystate, int yysym) {
  int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
    return yytable_[yyr];
  else
    return yydefgoto_[yysym - YYNTOKENS];
}

bool Parser::yy_pact_value_is_default_(int yyvalue) YY_NOEXCEPT {
  return yyvalue == yypact_ninf_;
}

bool Parser::yy_table_value_is_error_(int yyvalue) YY_NOEXCEPT {
  return yyvalue == yytable_ninf_;
}

int Parser::operator()() { return parse(); }

int Parser::parse() {
  int yyn;
  /// Length of the RHS of the rule being reduced.
  int yylen = 0;

  // Error handling.
  int yynerrs_ = 0;
  int yyerrstatus_ = 0;

  /// The lookahead symbol.
  symbol_type yyla;

  /// The return value of parse ().
  int yyresult;

#if YY_EXCEPTIONS
  try
#endif  // YY_EXCEPTIONS
  {
    YYCDEBUG << "Starting parse\n";

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear();
    yypush_(YY_NULLPTR, 0, YY_MOVE(yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int(yystack_[0].state) << '\n';
    YY_STACK_PRINT();

    // Accept?
    if (yystack_[0].state == yyfinal_) YYACCEPT;

    goto yybackup;

  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_(yyn)) goto yydefault;

    // Read a lookahead token.
    if (yyla.empty()) {
      YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
      try
#endif  // YY_EXCEPTIONS
      {
        symbol_type yylookahead(yylex());
        yyla.move(yylookahead);
      }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc) {
        YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
        error(yyexc);
        goto yyerrlab1;
      }
#endif  // YY_EXCEPTIONS
    }
    YY_SYMBOL_PRINT("Next token is", yyla);

    if (yyla.kind() == symbol_kind::S_YYerror) {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind()) {
      goto yydefault;
    }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0) {
      if (yy_table_value_is_error_(yyn)) goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_) --yyerrstatus_;

    // Shift the lookahead token.
    yypush_("Shifting", state_type(yyn), YY_MOVE(yyla));
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0) goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn]) {
        case symbol_kind::S_program:             // program
        case symbol_kind::S_statement:           // statement
        case symbol_kind::S_block:               // block
        case symbol_kind::S_indicator_stmt:      // indicator_stmt
        case symbol_kind::S_strategy_stmt:       // strategy_stmt
        case symbol_kind::S_if_stmt:             // if_stmt
        case symbol_kind::S_for_stmt:            // for_stmt
        case symbol_kind::S_while_stmt:          // while_stmt
        case symbol_kind::S_return_stmt:         // return_stmt
        case symbol_kind::S_break_stmt:          // break_stmt
        case symbol_kind::S_continue_stmt:       // continue_stmt
        case symbol_kind::S_switch_stmt:         // switch_stmt
        case symbol_kind::S_case_stmt:           // case_stmt
        case symbol_kind::S_default_stmt:        // default_stmt
        case symbol_kind::S_var_stmt:            // var_stmt
        case symbol_kind::S_const_stmt:          // const_stmt
        case symbol_kind::S_simple_stmt:         // simple_stmt
        case symbol_kind::S_import_stmt:         // import_stmt
        case symbol_kind::S_assignment_stmt:     // assignment_stmt
        case symbol_kind::S_assignment_re_stmt:  // assignment_re_stmt
        case symbol_kind::S_expr:                // expr
          yylhs.value.emplace<ast_node>();
          break;

        case symbol_kind::S_number:  // number
          yylhs.value.emplace<int>();
          break;

        case symbol_kind::S_identifier:  // identifier
        case symbol_kind::S_string:      // string
          yylhs.value.emplace<std::string>();
          break;

        default:
          break;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT(yyn);
#if YY_EXCEPTIONS
      try
#endif  // YY_EXCEPTIONS
      {
        switch (yyn) {
          case 2:  // program: %empty
#line 125 "parser_rules.y"
          {
          }
#line 678 "parser.cpp"
          break;

          case 3:  // program: statement
#line 127 "parser_rules.y"
          {
            vec_push(program_root, yystack_[0].value.as<ast_node>());
          }
#line 684 "parser.cpp"
          break;

          case 4:  // program: program statement
#line 129 "parser_rules.y"
          {
            vec_push(program_root, yystack_[0].value.as<ast_node>());
          }
#line 690 "parser.cpp"
          break;

          case 5:  // statement: indicator_stmt
#line 133 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 696 "parser.cpp"
          break;

          case 6:  // statement: strategy_stmt
#line 134 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 702 "parser.cpp"
          break;

          case 7:  // statement: if_stmt
#line 135 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 708 "parser.cpp"
          break;

          case 8:  // statement: for_stmt
#line 136 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 714 "parser.cpp"
          break;

          case 9:  // statement: while_stmt
#line 137 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 720 "parser.cpp"
          break;

          case 10:  // statement: return_stmt
#line 138 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 726 "parser.cpp"
          break;

          case 11:  // statement: break_stmt
#line 139 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 732 "parser.cpp"
          break;

          case 12:  // statement: continue_stmt
#line 140 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 738 "parser.cpp"
          break;

          case 13:  // statement: switch_stmt
#line 141 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 744 "parser.cpp"
          break;

          case 14:  // statement: case_stmt
#line 142 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 750 "parser.cpp"
          break;

          case 15:  // statement: default_stmt
#line 143 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 756 "parser.cpp"
          break;

          case 16:  // statement: var_stmt
#line 144 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 762 "parser.cpp"
          break;

          case 17:  // statement: const_stmt
#line 145 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 768 "parser.cpp"
          break;

          case 18:  // statement: simple_stmt
#line 146 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 774 "parser.cpp"
          break;

          case 19:  // statement: import_stmt
#line 147 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 780 "parser.cpp"
          break;

          case 20:  // statement: assignment_stmt
#line 148 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 786 "parser.cpp"
          break;

          case 21:  // statement: assignment_re_stmt
#line 149 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 792 "parser.cpp"
          break;

          case 22:  // block: left_brace statement right_brace
#line 154 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[1].value.as<ast_node>();
          }
#line 798 "parser.cpp"
          break;

          case 23:  // block: statement
#line 156 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[0].value.as<ast_node>();
          }
#line 804 "parser.cpp"
          break;

          case 24:  // indicator_stmt: indicator_function left_paren string
                    // right_paren
#line 163 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_indicator_node(yystack_[1].value.as<std::string>());
          }
#line 810 "parser.cpp"
          break;

          case 25:  // strategy_stmt: strategy_function left_paren string
                    // right_paren
#line 168 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_strategy_node(yystack_[1].value.as<std::string>());
          }
#line 816 "parser.cpp"
          break;

          case 26:  // if_stmt: if_statement left_paren expr right_paren block
#line 173 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_if_node(yystack_[2].value.as<ast_node>(),
                            yystack_[0].value.as<ast_node>(), NULL);
          }
#line 822 "parser.cpp"
          break;

          case 27:  // if_stmt: if_statement left_paren expr right_paren block
                    // else_statement block
#line 175 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_if_node(yystack_[4].value.as<ast_node>(),
                            yystack_[2].value.as<ast_node>(),
                            yystack_[0].value.as<ast_node>());
          }
#line 828 "parser.cpp"
          break;

          case 28:  // for_stmt: for_statement identifier assign expr to expr
                    // block
#line 180 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_for_node(yystack_[5].value.as<std::string>(),
                             yystack_[3].value.as<ast_node>(),
                             yystack_[1].value.as<ast_node>(), NULL,
                             yystack_[0].value.as<ast_node>());
          }
#line 834 "parser.cpp"
          break;

          case 29:  // for_stmt: for_statement identifier assign expr to expr
                    // step expr block
#line 182 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_for_node(yystack_[7].value.as<std::string>(),
                             yystack_[5].value.as<ast_node>(),
                             yystack_[3].value.as<ast_node>(),
                             yystack_[1].value.as<ast_node>(),
                             yystack_[0].value.as<ast_node>());
          }
#line 840 "parser.cpp"
          break;

          case 30:  // for_stmt: for_statement expr block
#line 184 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_for_node(NULL, yystack_[1].value.as<ast_node>(), NULL, NULL,
                             yystack_[0].value.as<ast_node>());
          }
#line 846 "parser.cpp"
          break;

          case 31:  // while_stmt: while_statement expr block
#line 189 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_while_node(yystack_[1].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 852 "parser.cpp"
          break;

          case 32:  // return_stmt: return_statement expr
#line 194 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_return_node(yystack_[0].value.as<ast_node>());
          }
#line 858 "parser.cpp"
          break;

          case 33:  // return_stmt: return_statement
#line 196 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = new_return_node(NULL);
          }
#line 864 "parser.cpp"
          break;

          case 34:  // break_stmt: break_statement
#line 201 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = new_break_node();
          }
#line 870 "parser.cpp"
          break;

          case 35:  // continue_stmt: continue_statement
#line 206 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = new_continue_node();
          }
#line 876 "parser.cpp"
          break;

          case 36:  // switch_stmt: switch_statement expr block
#line 211 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_switch_node(yystack_[1].value.as<ast_node>(),
                                yystack_[0].value.as<ast_node>());
          }
#line 882 "parser.cpp"
          break;

          case 37:  // case_stmt: case_statement expr colon block
#line 216 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_case_node(yystack_[2].value.as<ast_node>(),
                              yystack_[0].value.as<ast_node>());
          }
#line 888 "parser.cpp"
          break;

          case 38:  // case_stmt: case_statement expr comma expr colon block
#line 218 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_case_node_range(yystack_[4].value.as<ast_node>(),
                                    yystack_[2].value.as<ast_node>(),
                                    yystack_[0].value.as<ast_node>());
          }
#line 894 "parser.cpp"
          break;

          case 39:  // default_stmt: default_statement colon block
#line 223 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_default_node(yystack_[0].value.as<ast_node>());
          }
#line 900 "parser.cpp"
          break;

          case 40:  // var_stmt: var identifier assign expr
#line 228 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_var_node(yystack_[2].value.as<std::string>());
          }
#line 906 "parser.cpp"
          break;

          case 41:  // var_stmt: var identifier
#line 230 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_var_node(yystack_[0].value.as<std::string>());
          }
#line 912 "parser.cpp"
          break;

          case 42:  // const_stmt: const_statement identifier assign expr
#line 235 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_const_node(yystack_[2].value.as<std::string>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 918 "parser.cpp"
          break;

          case 43:  // simple_stmt: simple identifier
#line 240 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_simple_node(yystack_[0].value.as<std::string>());
          }
#line 924 "parser.cpp"
          break;

          case 44:  // import_stmt: import_statement string
#line 245 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_import_node(yystack_[0].value.as<std::string>());
          }
#line 930 "parser.cpp"
          break;

          case 45:  // assignment_stmt: identifier assign expr
#line 250 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_assign_node(yystack_[2].value.as<std::string>(),
                                yystack_[0].value.as<ast_node>());
          }
#line 936 "parser.cpp"
          break;

          case 46:  // assignment_re_stmt: identifier re_assign expr
#line 255 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_assign_re_node(yystack_[2].value.as<std::string>(),
                                   yystack_[0].value.as<ast_node>());
          }
#line 942 "parser.cpp"
          break;

          case 47:  // expr: number
#line 261 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_number_node(yystack_[0].value.as<int>());
          }
#line 948 "parser.cpp"
          break;

          case 48:  // expr: identifier
#line 263 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_var_node(yystack_[0].value.as<std::string>());
          }
#line 954 "parser.cpp"
          break;

          case 49:  // expr: string
#line 265 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_string_node(yystack_[0].value.as<std::string>());
          }
#line 960 "parser.cpp"
          break;

          case 50:  // expr: expr '+' expr
#line 267 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("+", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 966 "parser.cpp"
          break;

          case 51:  // expr: expr '-' expr
#line 269 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("-", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 972 "parser.cpp"
          break;

          case 52:  // expr: expr '*' expr
#line 271 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("*", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 978 "parser.cpp"
          break;

          case 53:  // expr: expr '/' expr
#line 273 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("/", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 984 "parser.cpp"
          break;

          case 54:  // expr: expr '%' expr
#line 275 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("%", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 990 "parser.cpp"
          break;

          case 55:  // expr: expr logical_and expr
#line 277 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("&&", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 996 "parser.cpp"
          break;

          case 56:  // expr: expr logical_or expr
#line 279 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("||", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1002 "parser.cpp"
          break;

          case 57:  // expr: expr equals expr
#line 281 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("==", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1008 "parser.cpp"
          break;

          case 58:  // expr: expr dont_equal expr
#line 283 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("!=", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1014 "parser.cpp"
          break;

          case 59:  // expr: expr greater_than expr
#line 285 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node(">", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1020 "parser.cpp"
          break;

          case 60:  // expr: expr lesser_than expr
#line 287 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("<", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1026 "parser.cpp"
          break;

          case 61:  // expr: expr greater_than_or_equals expr
#line 289 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node(">=", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1032 "parser.cpp"
          break;

          case 62:  // expr: expr lesser_than_or_equals expr
#line 291 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("<=", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1038 "parser.cpp"
          break;

          case 63:  // expr: expr bitwise_and expr
#line 293 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("&", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1044 "parser.cpp"
          break;

          case 64:  // expr: expr bitwise_or expr
#line 295 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("|", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1050 "parser.cpp"
          break;

          case 65:  // expr: expr bitwise_xor expr
#line 297 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("^", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1056 "parser.cpp"
          break;

          case 66:  // expr: expr bitwise_shift_to_left expr
#line 299 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node("<<", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1062 "parser.cpp"
          break;

          case 67:  // expr: expr bitwise_shift_to_right expr
#line 301 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_binop_node(">>", yystack_[2].value.as<ast_node>(),
                               yystack_[0].value.as<ast_node>());
          }
#line 1068 "parser.cpp"
          break;

          case 68:  // expr: logical_not expr
#line 303 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_unop_node("!", yystack_[0].value.as<ast_node>());
          }
#line 1074 "parser.cpp"
          break;

          case 69:  // expr: bitwise_not expr
#line 305 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_unop_node("~", yystack_[0].value.as<ast_node>());
          }
#line 1080 "parser.cpp"
          break;

          case 70:  // expr: '-' expr
#line 307 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_unop_node("-", yystack_[0].value.as<ast_node>());
          }
#line 1086 "parser.cpp"
          break;

          case 71:  // expr: '+' expr
#line 309 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() =
                new_unop_node("+", yystack_[0].value.as<ast_node>());
          }
#line 1092 "parser.cpp"
          break;

          case 72:  // expr: left_paren expr right_paren
#line 311 "parser_rules.y"
          {
            yylhs.value.as<ast_node>() = yystack_[1].value.as<ast_node>();
          }
#line 1098 "parser.cpp"
          break;

#line 1102 "parser.cpp"

          default:
            break;
        }
      }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc) {
        YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
        error(yyexc);
        YYERROR;
      }
#endif  // YY_EXCEPTIONS
      YY_SYMBOL_PRINT("-> $$ =", yylhs);
      yypop_(yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_(YY_NULLPTR, YY_MOVE(yylhs));
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_) {
      ++yynerrs_;
      context yyctx(*this, yyla);
      std::string msg = yysyntax_error_(yyctx);
      error(YY_MOVE(msg));
    }

    if (yyerrstatus_ == 3) {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      // Return failure if at end of input.
      if (yyla.kind() == symbol_kind::S_YYEOF)
        YYABORT;
      else if (!yyla.empty()) {
        yy_destroy_("Error: discarding", yyla);
        yyla.clear();
      }
    }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;

  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false) YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_(yylen);
    yylen = 0;
    YY_STACK_PRINT();
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;  // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;) {
      yyn = yypact_[+yystack_[0].state];
      if (!yy_pact_value_is_default_(yyn)) {
        yyn += symbol_kind::S_YYerror;
        if (0 <= yyn && yyn <= yylast_ &&
            yycheck_[yyn] == symbol_kind::S_YYerror) {
          yyn = yytable_[yyn];
          if (0 < yyn) break;
        }
      }

      // Pop the current state because it cannot handle the error token.
      if (yystack_.size() == 1) YYABORT;

      yy_destroy_("Error: popping", yystack_[0]);
      yypop_();
      YY_STACK_PRINT();
    }
    {
      stack_symbol_type error_token;

      // Shift the error token.
      error_token.state = state_type(yyn);
      yypush_("Shifting", YY_MOVE(error_token));
    }
    goto yynewstate;

  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty()) yy_destroy_("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_(yylen);
    YY_STACK_PRINT();
    while (1 < yystack_.size()) {
      yy_destroy_("Cleanup: popping", yystack_[0]);
      yypop_();
    }

    return yyresult;
  }
#if YY_EXCEPTIONS
  catch (...) {
    YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
    // Do not try to display the values of the reclaimed symbols,
    // as their printers might throw an exception.
    if (!yyla.empty()) yy_destroy_(YY_NULLPTR, yyla);

    while (1 < yystack_.size()) {
      yy_destroy_(YY_NULLPTR, yystack_[0]);
      yypop_();
    }
    throw;
  }
#endif  // YY_EXCEPTIONS
}

void Parser::error(const syntax_error& yyexc) { error(yyexc.what()); }

/* Return YYSTR after stripping away unnecessary quotes and
   backslashes, so that it's suitable for yyerror.  The heuristic is
   that double-quoting is unnecessary unless the string contains an
   apostrophe, a comma, or backslash (other than backslash-backslash).
   YYSTR is taken from yytname.  */
std::string Parser::yytnamerr_(const char* yystr) {
  if (*yystr == '"') {
    std::string yyr;
    char const* yyp = yystr;

    for (;;) switch (*++yyp) {
        case '\'':
        case ',':
          goto do_not_strip_quotes;

        case '\\':
          if (*++yyp != '\\')
            goto do_not_strip_quotes;
          else
            goto append;

        append:
        default:
          yyr += *yyp;
          break;

        case '"':
          return yyr;
      }
  do_not_strip_quotes:;
  }

  return yystr;
}

std::string Parser::symbol_name(symbol_kind_type yysymbol) {
  return yytnamerr_(yytname_[yysymbol]);
}

// Parser::context.
Parser::context::context(const Parser& yyparser, const symbol_type& yyla)
    : yyparser_(yyparser), yyla_(yyla) {}

int Parser::context::expected_tokens(symbol_kind_type yyarg[],
                                     int yyargn) const {
  // Actual number of expected tokens
  int yycount = 0;

  const int yyn = yypact_[+yyparser_.yystack_[0].state];
  if (!yy_pact_value_is_default_(yyn)) {
    /* Start YYX at -YYN if negative to avoid negative indexes in
       YYCHECK.  In other words, skip the first -YYN actions for
       this state because they are default actions.  */
    const int yyxbegin = yyn < 0 ? -yyn : 0;
    // Stay within bounds of both yycheck and yytname.
    const int yychecklim = yylast_ - yyn + 1;
    const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
    for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
      if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror &&
          !yy_table_value_is_error_(yytable_[yyx + yyn])) {
        if (!yyarg)
          ++yycount;
        else if (yycount == yyargn)
          return 0;
        else
          yyarg[yycount++] = YY_CAST(symbol_kind_type, yyx);
      }
  }

  if (yyarg && yycount == 0 && 0 < yyargn) yyarg[0] = symbol_kind::S_YYEMPTY;
  return yycount;
}

int Parser::yy_syntax_error_arguments_(const context& yyctx,
                                       symbol_kind_type yyarg[],
                                       int yyargn) const {
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yyla) is
       if this state is a consistent state with a default action.
       Thus, detecting the absence of a lookahead is sufficient to
       determine that there is no unexpected or expected token to
       report.  In that case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is
       a consistent state with a default action.  There might have
       been a previous inconsistent state, consistent state with a
       non-default action, or user semantic action that manipulated
       yyla.  (However, yyla is currently not documented for users.)
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */

  if (!yyctx.lookahead().empty()) {
    if (yyarg) yyarg[0] = yyctx.token();
    int yyn = yyctx.expected_tokens(yyarg ? yyarg + 1 : yyarg, yyargn - 1);
    return yyn + 1;
  }
  return 0;
}

// Generate an error message.
std::string Parser::yysyntax_error_(const context& yyctx) const {
  // Its maximum.
  enum { YYARGS_MAX = 5 };
  // Arguments of yyformat.
  symbol_kind_type yyarg[YYARGS_MAX];
  int yycount = yy_syntax_error_arguments_(yyctx, yyarg, YYARGS_MAX);

  char const* yyformat = YY_NULLPTR;
  switch (yycount) {
#define YYCASE_(N, S) \
  case N:             \
    yyformat = S;     \
    break
    default:  // Avoid compiler warnings.
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(
          5,
          YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
  }

  std::string yyres;
  // Argument number.
  std::ptrdiff_t yyi = 0;
  for (char const* yyp = yyformat; *yyp; ++yyp)
    if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount) {
      yyres += symbol_name(yyarg[yyi++]);
      ++yyp;
    } else
      yyres += *yyp;
  return yyres;
}

const signed char Parser::yypact_ninf_ = -49;

const signed char Parser::yytable_ninf_ = -1;

const short Parser::yypact_[] = {
    338, -32, -31, -29, -13, 529, 529, -49, -49, 529, 529, -47, -28, -23, -22,
    -42, -41, 226, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49, -49,
    -49, -49, -49, -49, -49, -49, -19, -18, 529, 529, 529, 529, -49, 1,   -49,
    529, 529, 159, -49, 474, 159, 159, 339, 306, 2,   8,   -49, -49, 529, 529,
    -49, -49, -1,  12,  386, -49, -49, 396, 529, -49, -49, 529, 529, 529, 529,
    529, 529, 529, 529, 338, 529, 529, 529, 529, 529, 529, 529, 529, 529, 529,
    -49, -49, -49, -49, 529, 306, -49, 529, 529, 474, 474, -49, -49, 306, -49,
    242, 501, 230, -4,  218, 310, 449, -35, -35, 13,  -4,  -4,  -4,  -4,  -4,
    -48, -48, -49, -49, -49, 443, -49, 474, 474, 50,  529, -49, 306, 306, 95,
    -49, -49, 529, -49, 159, -49};

const signed char Parser::yydefact_[] = {
    2,  0,  0,  0,  0,  33, 0,  34, 35, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    3,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    0,  0,  0,  0,  0,  0,  47, 48, 49, 0,  0,  0,  48, 32, 0,  0,  0,  0,
    41, 0,  43, 44, 0,  0,  1,  4,  0,  0,  0,  68, 69, 0,  0,  71, 70, 0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    23, 30, 31, 36, 0,  0,  39, 0,  0,  45, 46, 24, 25, 0,  72, 0,  55, 56,
    58, 63, 64, 65, 66, 67, 0,  57, 59, 60, 61, 62, 50, 51, 52, 53, 54, 0,
    37, 40, 42, 26, 0,  22, 0,  0,  0,  38, 27, 0,  28, 0,  29};

const signed char Parser::yypgoto_[] = {-49, -49, 6,   -38, -49, -49, -49, -49,
                                        -49, -49, -49, -49, -49, -49, -49, -49,
                                        -49, -49, -49, -49, -49, -5};

const signed char Parser::yydefgoto_[] = {0,  17, 90, 91, 19, 20, 21, 22,
                                          23, 24, 25, 26, 27, 28, 29, 30,
                                          31, 32, 33, 34, 35, 47};

const unsigned char Parser::yytable_[] = {
    49,  50,  58,  59,  51,  52,  18,  36,  37,  39,  38,  53,  92,  93,  40,
    96,  87,  88,  89,  57,  74,  75,  76,  61,  77,  78,  41,  85,  86,  87,
    88,  89,  54,  64,  65,  66,  67,  55,  56,  101, 69,  70,  62,  63,  68,
    97,  42,  43,  44,  45,  46,  98,  102, 99,  100, 131, 133, 126, 85,  86,
    87,  88,  89,  105, 0,   129, 106, 107, 108, 109, 110, 111, 112, 113, 0,
    115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 114, 0,   0,   0,   125,
    0,   0,   127, 128, 135, 136, 138, 0,   1,   2,   3,   140, 4,   137, 0,
    5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  71,  72,  0,   73,  74,
    75,  76,  0,   77,  78,  134, 15,  0,   0,   0,   0,   0,   139, 0,   0,
    0,   79,  0,   0,   0,   80,  81,  82,  83,  84,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   16,  0,   85,  86,  87,  88,  89,  1,   2,   3,
    0,   4,   0,   0,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  71,
    72,  0,   73,  74,  75,  76,  0,   77,  78,  0,   15,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   79,  0,   0,   0,   80,  81,  82,  83,  84,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   16,  0,   85,  86,  87,  88,
    89,  60,  0,   0,   1,   2,   3,   0,   4,   0,   0,   5,   6,   7,   8,
    9,   10,  11,  12,  13,  14,  77,  78,  0,   0,   71,  130, 0,   73,  74,
    75,  76,  15,  77,  78,  0,   0,   71,  72,  0,   73,  74,  75,  76,  0,
    77,  78,  0,   0,   0,   80,  81,  82,  83,  84,  85,  86,  87,  88,  89,
    0,   16,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  0,   0,   0,
    0,   0,   0,   0,   85,  86,  87,  88,  89,  1,   2,   3,   0,   4,   0,
    0,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  0,   0,   0,   0,
    0,   0,   0,   0,   74,  0,   76,  15,  77,  78,  0,   1,   2,   3,   0,
    4,   0,   79,  5,   6,   7,   8,   9,   10,  11,  12,  13,  14,  0,   71,
    72,  0,   73,  74,  75,  76,  16,  77,  78,  15,  0,   0,   85,  86,  87,
    88,  89,  0,   0,   0,   0,   0,   0,   0,   80,  81,  82,  83,  84,  0,
    0,   0,   0,   0,   0,   94,  0,   95,  16,  0,   0,   85,  86,  87,  88,
    89,  71,  72,  0,   73,  74,  75,  76,  0,   77,  78,  71,  72,  0,   73,
    74,  75,  76,  0,   77,  78,  103, 0,   0,   0,   0,   80,  81,  82,  83,
    84,  104, 0,   0,   0,   0,   80,  81,  82,  83,  84,  0,   0,   85,  86,
    87,  88,  89,  0,   0,   0,   0,   0,   85,  86,  87,  88,  89,  71,  72,
    0,   73,  74,  75,  76,  0,   77,  78,  74,  0,   0,   0,   77,  78,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   80,  81,  82,  83,  84,  0,   71,
    72,  0,   73,  74,  75,  76,  132, 77,  78,  0,   85,  86,  87,  88,  89,
    0,   85,  86,  87,  88,  89,  0,   0,   0,   80,  81,  82,  83,  84,  73,
    74,  75,  76,  0,   77,  78,  0,   0,   0,   0,   0,   85,  86,  87,  88,
    89,  0,   0,   0,   0,   0,   80,  81,  82,  83,  84,  39,  0,   0,   0,
    0,   40,  0,   0,   0,   0,   0,   0,   85,  86,  87,  88,  89,  41,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   42,  48,  44,  45,  46};

const short Parser::yycheck_[] = {
    5,  6,  43, 44, 9,   10,  0,   39, 39, 22, 39, 58,  50, 51, 27, 53, 64, 65,
    66, 61, 24, 25, 26,  17,  28,  29, 39, 62, 63, 64,  65, 66, 60, 38, 39, 40,
    41, 60, 60, 40, 45,  46,  61,  61, 43, 43, 59, 60,  61, 62, 63, 43, 40, 58,
    59, 42, 6,  95, 62,  63,  64,  65, 66, 68, -1, 103, 71, 72, 73, 74, 75, 76,
    77, 78, -1, 80, 81,  82,  83,  84, 85, 86, 87, 88,  89, 79, -1, -1, -1, 94,
    -1, -1, 97, 98, 132, 133, 134, -1, 3,  4,  5,  139, 7,  8,  -1, 10, 11, 12,
    13, 14, 15, 16, 17,  18,  19,  20, 21, -1, 23, 24,  25, 26, -1, 28, 29, 130,
    31, -1, -1, -1, -1,  -1,  137, -1, -1, -1, 41, -1,  -1, -1, 45, 46, 47, 48,
    49, -1, -1, -1, -1,  -1,  -1,  -1, -1, -1, -1, 60,  -1, 62, 63, 64, 65, 66,
    3,  4,  5,  -1, 7,   -1,  -1,  10, 11, 12, 13, 14,  15, 16, 17, 18, 19, 20,
    21, -1, 23, 24, 25,  26,  -1,  28, 29, -1, 31, -1,  -1, -1, -1, -1, -1, -1,
    -1, -1, 41, -1, -1,  -1,  45,  46, 47, 48, 49, -1,  -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 60, -1,  62,  63,  64, 65, 66, 0,  -1,  -1, 3,  4,  5,  -1, 7,
    -1, -1, 10, 11, 12,  13,  14,  15, 16, 17, 18, 19,  28, 29, -1, -1, 20, 9,
    -1, 23, 24, 25, 26,  31,  28,  29, -1, -1, 20, 21,  -1, 23, 24, 25, 26, -1,
    28, 29, -1, -1, -1,  45,  46,  47, 48, 49, 62, 63,  64, 65, 66, -1, 60, 45,
    46, 47, 48, 49, 62,  63,  64,  65, 66, -1, -1, -1,  -1, -1, -1, -1, 62, 63,
    64, 65, 66, 3,  4,   5,   -1,  7,  -1, -1, 10, 11,  12, 13, 14, 15, 16, 17,
    18, 19, -1, -1, -1,  -1,  -1,  -1, -1, -1, 24, -1,  26, 31, 28, 29, -1, 3,
    4,  5,  -1, 7,  -1,  41,  10,  11, 12, 13, 14, 15,  16, 17, 18, 19, -1, 20,
    21, -1, 23, 24, 25,  26,  60,  28, 29, 31, -1, -1,  62, 63, 64, 65, 66, -1,
    -1, -1, -1, -1, -1,  -1,  45,  46, 47, 48, 49, -1,  -1, -1, -1, -1, -1, 56,
    -1, 58, 60, -1, -1,  62,  63,  64, 65, 66, 20, 21,  -1, 23, 24, 25, 26, -1,
    28, 29, 20, 21, -1,  23,  24,  25, 26, -1, 28, 29,  40, -1, -1, -1, -1, 45,
    46, 47, 48, 49, 40,  -1,  -1,  -1, -1, 45, 46, 47,  48, 49, -1, -1, 62, 63,
    64, 65, 66, -1, -1,  -1,  -1,  -1, 62, 63, 64, 65,  66, 20, 21, -1, 23, 24,
    25, 26, -1, 28, 29,  24,  -1,  -1, -1, 28, 29, -1,  -1, -1, -1, -1, -1, -1,
    -1, -1, 45, 46, 47,  48,  49,  -1, 20, 21, -1, 23,  24, 25, 26, 58, 28, 29,
    -1, 62, 63, 64, 65,  66,  -1,  62, 63, 64, 65, 66,  -1, -1, -1, 45, 46, 47,
    48, 49, 23, 24, 25,  26,  -1,  28, 29, -1, -1, -1,  -1, -1, 62, 63, 64, 65,
    66, -1, -1, -1, -1,  -1,  45,  46, 47, 48, 49, 22,  -1, -1, -1, -1, 27, -1,
    -1, -1, -1, -1, -1,  62,  63,  64, 65, 66, 39, -1,  -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1,  -1,  -1,  -1, -1, -1, -1, -1,  59, 60, 61, 62, 63};

const signed char Parser::yystos_[] = {
    0,  3,  4,  5,  7,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 31, 60, 71,
    72, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    39, 39, 39, 22, 27, 39, 59, 60, 61, 62, 63, 91, 60, 91, 91, 91, 91, 58,
    60, 60, 60, 61, 43, 44, 0,  72, 61, 61, 91, 91, 91, 91, 43, 91, 91, 20,
    21, 23, 24, 25, 26, 28, 29, 41, 45, 46, 47, 48, 49, 62, 63, 64, 65, 66,
    72, 73, 73, 73, 56, 58, 73, 43, 43, 91, 91, 40, 40, 40, 40, 91, 91, 91,
    91, 91, 91, 91, 91, 91, 72, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
    73, 91, 91, 73, 9,  42, 58, 6,  91, 73, 73, 8,  73, 91, 73};

const signed char Parser::yyr1_[] = {
    0,  70, 71, 71, 71, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72,
    72, 72, 72, 73, 73, 74, 75, 76, 76, 77, 77, 77, 78, 79, 79, 80, 81, 82, 83,
    83, 84, 85, 85, 86, 87, 88, 89, 90, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
    91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91, 91};

const signed char Parser::yyr2_[] = {
    0, 2, 0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 4,
    4, 5, 7, 7, 9, 3, 3, 2, 1, 1, 1, 3, 4, 6, 3, 4, 2, 4, 2, 2, 3, 3, 1, 1, 1,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 3};

#if YYDEBUG || 1
// YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
// First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
const char* const Parser::yytname_[] = {"\"end of file\"",
                                        "error",
                                        "\"invalid token\"",
                                        "indicator_function",
                                        "strategy_function",
                                        "if_statement",
                                        "else_statement",
                                        "for_statement",
                                        "step",
                                        "to",
                                        "return_statement",
                                        "while_statement",
                                        "break_statement",
                                        "continue_statement",
                                        "switch_statement",
                                        "case_statement",
                                        "default_statement",
                                        "var",
                                        "const_statement",
                                        "simple",
                                        "logical_and",
                                        "logical_or",
                                        "logical_not",
                                        "dont_equal",
                                        "bitwise_and",
                                        "bitwise_or",
                                        "bitwise_xor",
                                        "bitwise_not",
                                        "bitwise_shift_to_left",
                                        "bitwise_shift_to_right",
                                        "semicolon",
                                        "import_statement",
                                        "as",
                                        "input",
                                        "int_type",
                                        "bool_type",
                                        "float_type",
                                        "color_type",
                                        "string_as_type",
                                        "left_paren",
                                        "right_paren",
                                        "left_brace",
                                        "right_brace",
                                        "assign",
                                        "re_assign",
                                        "equals",
                                        "greater_than",
                                        "lesser_than",
                                        "greater_than_or_equals",
                                        "lesser_than_or_equals",
                                        "bitwise_and_with_equals",
                                        "bitwise_or_with_equals",
                                        "bitwise_xor_with_equals",
                                        "bitwise_not_with_equals",
                                        "bitwise_shift_right_with_equals",
                                        "bitwise_shift_left_with_equals",
                                        "comma",
                                        "dot",
                                        "colon",
                                        "number",
                                        "identifier",
                                        "string",
                                        "'+'",
                                        "'-'",
                                        "'*'",
                                        "'/'",
                                        "'%'",
                                        "'('",
                                        "'['",
                                        "'.'",
                                        "$accept",
                                        "program",
                                        "statement",
                                        "block",
                                        "indicator_stmt",
                                        "strategy_stmt",
                                        "if_stmt",
                                        "for_stmt",
                                        "while_stmt",
                                        "return_stmt",
                                        "break_stmt",
                                        "continue_stmt",
                                        "switch_stmt",
                                        "case_stmt",
                                        "default_stmt",
                                        "var_stmt",
                                        "const_stmt",
                                        "simple_stmt",
                                        "import_stmt",
                                        "assignment_stmt",
                                        "assignment_re_stmt",
                                        "expr",
                                        YY_NULLPTR};
#endif

#if YYDEBUG
const short Parser::yyrline_[] = {
    0,   125, 125, 126, 128, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
    143, 144, 145, 146, 147, 148, 149, 153, 155, 162, 167, 172, 174, 179, 181,
    183, 188, 193, 195, 200, 205, 210, 215, 217, 222, 227, 229, 234, 239, 244,
    249, 254, 260, 262, 264, 266, 268, 270, 272, 274, 276, 278, 280, 282, 284,
    286, 288, 290, 292, 294, 296, 298, 300, 302, 304, 306, 308, 310};

void Parser::yy_stack_print_() const {
  *yycdebug_ << "Stack now";
  for (stack_type::const_iterator i = yystack_.begin(), i_end = yystack_.end();
       i != i_end; ++i)
    *yycdebug_ << ' ' << int(i->state);
  *yycdebug_ << '\n';
}

void Parser::yy_reduce_print_(int yyrule) const {
  int yylno = yyrline_[yyrule];
  int yynrhs = yyr2_[yyrule];
  // Print the symbols being reduced, and their result.
  *yycdebug_ << "Reducing stack by rule " << yyrule - 1 << " (line " << yylno
             << "):\n";
  // The symbols being reduced.
  for (int yyi = 0; yyi < yynrhs; yyi++)
    YY_SYMBOL_PRINT("   $" << yyi + 1 << " =", yystack_[(yynrhs) - (yyi + 1)]);
}
#endif  // YYDEBUG

#line 7 "parser_rules.y"
}  // namespace PineFan
#line 1763 "parser.cpp"

#line 314 "parser_rules.y"
