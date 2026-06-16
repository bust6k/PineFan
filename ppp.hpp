#pragma once

#include <optional>
#include <string>

namespace Pinefan {
namespace Ppp {

// DFA states for keyword recognition
enum KeywordState {
  KW_START,
  KW_I,
  KW_F,
  KW_FO,
  KW_W,
  KW_WH,
  KW_WHI,
  KW_WHIL,
  KW_S,
  KW_SW,
  KW_SWI,
  KW_SWIT,
  KW_SWITC,
  KW_T,
  KW_TY,
  KW_TYP,
  KW_ACCEPT_IF,
  KW_ACCEPT_FOR,
  KW_ACCEPT_WHILE,
  KW_ACCEPT_SWITCH,
  KW_ACCEPT_TYPE,
};

// DFA for keyword detection (if/for/while/switch/type)
class KeywordDFA {
 private:
  KeywordState state = KW_START;
  std::string current_word;

 public:
  // Reset DFA to initial state
  void reset();

  // Process single character, returns true if keyword is fully matched
  std::optional<std::string> feed(char c);
};

class LineInfo {
  // it's public temporarly,since LineInfo one-used. When PineFan go to
  // multithreading we're change the structure as well
 public:
  enum Type { NORMAL, KEYWORD, FUNCTION } type;
  std::string keyword;  // for KEYWORD: "if", "for", "while", etc
  std::string content;  // cleaned content (no arrow, trim)
  int indent;
};

inline bool is_whitespace(char c);
inline bool is_alpha(char c);

std::string trim_right(const std::string& s);
bool is_arrow(const std::string& line);
std::string remove_arrow(std::string line);

// Find keyword in line at specific position (considering boundaries)
std::optional<std::string> find_keyword_at(const std::string& line,
                                           size_t start_pos);

// Process lines and build output with braces
void preprocess(const std::string& input, std::string& output);
int preprocess_files(int argc, char* argv[]);
}  // namespace Ppp
}  // namespace Pinefan
