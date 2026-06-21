#pragma once

#include <optional>
#include <string>
#include <vector>

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
  KW_T,
  KW_TY,
  KW_TYP,
  KW_S,
  KW_SW,
  KW_SWI,
  KW_SWIT,
  KW_SWITC,
  KW_ACCEPT_IF,
  KW_ACCEPT_FOR,
  KW_ACCEPT_WHILE,
  KW_ACCEPT_TYPE,
  KW_ACCEPT_SWITCH,
};

// DFA for keyword detection
class KeywordDFA {
 private:
  KeywordState state = KW_START;
  std::string current_word;

 public:
  void reset();
  std::optional<std::string> feed(char c);
};

// Helper functions
bool is_whitespace(char c);
bool is_alpha(char c);
std::string trim_right(const std::string& s);
bool is_arrow(const std::string& line);
std::string remove_arrow(std::string line);
std::optional<std::string> find_keyword_at(const std::string& line,
                                           size_t start_pos);

// Line classification
struct LineInfo {
  enum Type {
    NORMAL,
    KEYWORD,
    FUNCTION,
  } type;
  std::string keyword;
  std::string content;
  std::string arrow_before;   // for switch-case: before of => arrow
  std::string content_after;  // for switch-case: there's the case's body
  bool is_switch_stmt = false;
  bool is_default = false;
  int indent;
};

enum SwitchState {
  SWITCH_NONE,
  SWITCH_OPEN,
  SWITCH_IN_CASE,
  SWITCH_IN_DEFAULT
};

// Main preprocessing function
void preprocess(const std::string& input, std::string& output);
int preprocess_files(int argc, char* argv[]);
void clean_prp_files();
}  // namespace Ppp
}  // namespace Pinefan
