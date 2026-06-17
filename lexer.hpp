#pragma once

#include <FlexLexer.h>

#include "parser.hpp"

namespace PineFan {

class Lexer : public yyFlexLexer {
 public:
  Lexer(std::istream* in) : yyFlexLexer(in) {}
  virtual ~Lexer() {}

  int yylex(PineFan::Parser::semantic_type* yylval,
            PineFan::Parser::location_type* yylloc);

  void set_debug(bool debug) { yy_flex_debug = debug; }
  int get_current_line() const { return yylineno; }
};

}  // namespace PineFan
