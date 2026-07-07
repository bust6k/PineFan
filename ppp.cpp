// ppp(pinescript preprocessor) - is a preprocessor for the PineScript language.
// that does to find the keyword(i.e if,for,while) or a function to do it to the
// // C-like form. it needed for simplify the other pipeline especially the
// parser. for determinig the keywords uses tabs for body selecting it uses the
// 5-tuple
// // DFA-keyword (Q,Σ,δ,q0,F) consisting of
//- a set of states Q
//{S_START,S_I,S_IF,S_F,S_FO,S_FOR,S_W,S_WH,S_WHI,S_WHIL,S_WHILE,S_END_IF,S_END_FOR,S_END_WHILE}
//- a finite set of input symbols Σ {i,f,w,h,i,l,e,o,r}
//- a transition function δ {dfa_keyw_trn_table} //- a start state q0 ∈ Q
//{S_START} //- a finite set of accept states
// F{S_END_IF,S_END_FOR,S_END_WHILE,S_ARROW_END} // at the same time, for
// determining the function body it uses the  5-tuple
// DFA-arrow (Q,Σ,δ,q0,F) consisting of
//- a set of states Q {S_START,S_EQ,S_GT,S_ARROW_END}
//- a finite set of input symbols Σ  {=,>}
//- a transition function {dfa_arrow_trn_table}
//- a start state q0 ∈ Q {S_START}
//- a finite set of accept states F {S_ARROW_END}

#include "ppp.hpp"

#include <format>
#include <fstream>
#include <iostream>
#include <optional>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#include "file.hpp"

// #define _IS_MAIN

namespace Pinefan {
namespace Ppp {

void KeywordDFA::reset() {
  state = KW_START;
  current_word.clear();
}

// Process single character, returns true if keyword is fully matched

std::optional<std::string> KeywordDFA::feed(char c) {
  if (!std::isalpha(c)) return std::nullopt;

  current_word += c;

  switch (state) {
    case KW_START:
      if (c == 'i')
        state = KW_I;
      else if (c == 'f')
        state = KW_F;
      else if (c == 'w')
        state = KW_W;
      else if (c == 's')
        state = KW_S;
      else if (c == 't')
        state = KW_T;
      else if (c == 'e')
        state = KW_E;
      else
        return std::nullopt;
      break;

    case KW_I:
      if (c == 'f')
        state = KW_ACCEPT_IF;
      else
        return std::nullopt;
      break;

    case KW_F:
      if (c == 'o')
        state = KW_FO;
      else
        return std::nullopt;
      break;

    case KW_S:
      if (c == 'w')
        state = KW_SW;
      else
        return std::nullopt;
      break;

    case KW_T:
      if (c == 'y')
        state = KW_TY;
      else
        return std::nullopt;
      break;

    case KW_E:
      if (c == 'l')
        state = KW_EL;
      else
        return std::nullopt;
      break;

    case KW_EL:
      if (c == 's')
        state = KW_ELS;
      else
        return std::nullopt;
      break;

    case KW_ELS:
      if (c == 'e')
        state = KW_ELSE;
      else
        return std::nullopt;
      break;

    case KW_ELSE:
      if (c == 'i')
        state = KW_ELSE_I;
      else
        return std::nullopt;
      break;

    case KW_ELSE_I:
      if (c == 'f')
        state = KW_ACCEPT_ELSE_IF;
      else
        return std::nullopt;
      break;

    case KW_FO:
      if (c == 'r')
        state = KW_ACCEPT_FOR;
      else
        return std::nullopt;
      break;

    case KW_W:
      if (c == 'h')
        state = KW_WH;
      else
        return std::nullopt;
      break;

    case KW_WH:
      if (c == 'i')
        state = KW_WHI;
      else
        return std::nullopt;
      break;

    case KW_SW:
      if (c == 'i')
        state = KW_SWI;
      else
        return std::nullopt;
      break;

    case KW_WHI:
      if (c == 'l')
        state = KW_WHIL;
      else
        return std::nullopt;
      break;

    case KW_WHIL:
      if (c == 'e')
        state = KW_ACCEPT_WHILE;
      else
        return std::nullopt;
      break;

    case KW_SWI:
      if (c == 't')
        state = KW_SWIT;
      else
        return std::nullopt;
      break;

    case KW_SWIT:
      if (c == 'c')
        state = KW_SWITC;
      else
        return std::nullopt;
      break;

    case KW_SWITC:
      if (c == 'h')
        state = KW_ACCEPT_SWITCH;
      else
        return std::nullopt;
      break;

    case KW_TY:
      if (c == 'p')
        state = KW_TYP;
      else
        return std::nullopt;
      break;

    case KW_TYP:
      if (c == 'e')
        state = KW_ACCEPT_TYPE;
      else
        return std::nullopt;
      break;

    default:
      return std::nullopt;
  }

  // Check if we reached accepting state
  if (state == KW_ACCEPT_IF) return "if";
  if (state == KW_ACCEPT_FOR) return "for";
  if (state == KW_ACCEPT_WHILE) return "while";
  if (state == KW_ACCEPT_SWITCH) return "switch";
  if (state == KW_ACCEPT_TYPE) return "type";
  if (state == KW_ACCEPT_ELSE_IF) return "else if";

  return std::nullopt;
}

// Helper functions
inline bool is_whitespace(char c) { return c == ' ' || c == '\t'; }

inline bool is_alpha(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

std::string trim_right(const std::string& s) {
  size_t end = s.find_last_not_of(" \t\r\n");
  return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

bool is_arrow(const std::string& line) {
  // Look for "=>" as separate tokens
  for (size_t i = 0; i + 1 < line.length(); ++i) {
    if (line[i] == '=' && line[i + 1] == '>') {
      // Check that it's not part of a word (should be separate)
      if ((i == 0 || !is_alpha(line[i - 1])) &&
          (i + 2 >= line.length() || !is_alpha(line[i + 2]))) {
        return true;
      }
    }
  }
  return false;
}

std::string remove_arrow(std::string line) {
  size_t pos = line.find("=>");
  if (pos != std::string::npos) {
    // Remove "=>" and surrounding whitespace
    line.erase(pos, 2);
    // Clean up extra spaces
    if (pos > 0 && is_whitespace(line[pos - 1])) {
      line.erase(pos - 1, 1);
    }
    if (pos < line.length() && is_whitespace(line[pos])) {
      line.erase(pos, 1);
    }
  }
  return trim_right(line);
}

std::string remove_parens(std::string line) {
  size_t pos = line.find("(");
  if (pos != std::string::npos) {
    line.at(pos) = '#';
    pos = line.find(")");
    if (pos != std::string::npos) {
      line.at(pos) = '#';
    }
  }

  return line;
}

// Find keyword in line at specific position (considering boundaries)
std::optional<std::string> find_keyword_at(const std::string& line,
                                           size_t start_pos) {
  KeywordDFA dfa;
  size_t i = start_pos;

  // Skip whitespace
  while (i < line.length() && is_whitespace(line[i])) ++i;

  // Check if it's start of a word
  if (i >= line.length() || !is_alpha(line[i])) return std::nullopt;

  // Feed characters to DFA until we either match or fail
  while (i < line.length()) {
    auto result = dfa.feed(line[i]);
    if (result.has_value()) {
      // Check boundary after keyword
      if (i + 1 < line.length() && is_alpha(line[i + 1])) {
        // Part of larger word (e.g., "iframe")
        return std::nullopt;
      }
      return result;
    }
    ++i;
  }

  return std::nullopt;
}

std::optional<std::string> find_switch_keyword_at(const std::string& line,
                                                  size_t start_pos) {
  size_t i = start_pos;
  while (i < line.length() && is_whitespace(line[i])) ++i;

  if (i >= line.length()) return std::nullopt;

  // Check for exact "switch" word
  const char* kw = "switch";
  size_t kw_len = 6;

  if (line.compare(i, kw_len, kw) != 0) return std::nullopt;

  // Check boundary after "switch"
  size_t next = i + kw_len;
  if (next < line.length() && is_alpha(line[next])) {
    // Part of larger word (e.g., "switchable")
    return std::nullopt;
  }

  return std::string("switch");
}

std::optional<std::string> find_expr_at_switch(const std::string& line,
                                               size_t start_pos) {
  size_t i = start_pos;
  while (i < line.length() && is_whitespace(line[i])) ++i;

  if (i >= line.length()) return std::nullopt;

  std::string expr;
  while (i < line.length()) {
    if (i + 1 < line.length() && line[i] == '=' && line[i + 1] == '>') {
      size_t end = expr.find_last_not_of(" \t");
      if (end != std::string::npos) {
        expr = expr.substr(0, end + 1);
      }
      return expr.empty() ? std::nullopt : std::optional<std::string>(expr);
    }
    expr += line[i];
    ++i;
  }

  return std::nullopt;
}

std::optional<int> find_arrow_pos(std::string& line, size_t start_pos) {
  size_t i = start_pos;
  while (i < line.length() && is_whitespace(line[i])) ++i;

  if (i >= line.length()) return std::nullopt;

  while (i < line.length()) {
    if (i + 1 < line.length() && line[i] == '=' && line[i + 1] == '>')
      return i;
    else
      ++i;
  }

  return std::nullopt;
}

// Process lines and build output with braces
void preprocess(const std::string& input, std::string& output) {
  // Parse input into lines
  std::vector<std::string> lines;
  std::string line;
  std::istringstream iss(input);

  while (std::getline(iss, line)) {
    lines.push_back(line);
  }
  // First pass: classify each line
  std::vector<LineInfo> infos;

  for (size_t idx = 0; idx < lines.size(); ++idx) {
    const auto& l = lines[idx];
    LineInfo info;
    info.content = trim_right(l);
    info.indent = 0;

    // Count indentation
    for (char c : l) {
      if (c == ' ')
        info.indent++;
      else if (c == '\t')
        info.indent += 4;
      else
        break;
    }

    // TODO: there's must be check if in this line have no something but if in
    // other one is has arrow so then you should grab that line
    auto left_part = find_expr_at_switch(info.content, 0);
    size_t is_func = 0;

    if (left_part.has_value()) {
      is_func = left_part->find("(");
      is_func = left_part->find(")");
    }

    if (!left_part.has_value() && find_arrow_pos(info.content, 0).has_value())
      is_func = 10;

    if (is_func == std::string::npos) {
      info.is_switch_stmt = true;
      info.arrow_before = left_part.value();

      auto arr_pos = find_arrow_pos(info.content, 0);
      if (arr_pos.has_value()) {
        info.content_after = info.content.substr(*arr_pos + 2);
      }
    } else if (is_func == 10) {
      info.is_switch_stmt = true;
      info.is_default = true;
      info.arrow_before = "default";

      auto arr_pos = find_arrow_pos(info.content, 0);
      if (arr_pos.has_value()) {
        info.content_after = info.content.substr(*arr_pos + 2);
      }
    }

    if (is_arrow(info.content) && is_func != std::string::npos &&
        is_func != 10) {
      info.type = LineInfo::FUNCTION;
      info.content = remove_arrow(info.content);
      info.content = remove_parens(info.content);
      info.keyword = "";
    } else {
      auto kw = find_keyword_at(info.content, 0);
      if (kw.has_value()) {
        info.type = LineInfo::KEYWORD;
        info.keyword = kw.value();
      } else {
        info.type = LineInfo::NORMAL;
        info.keyword = "";
      }
    }

    infos.push_back(info);
  }

  // Second pass: generate output with brace insertion
  // Second pass: generate output with brace insertion
  std::stack<int> indent_stack;
  indent_stack.push(0);

  SwitchState switch_state = SWITCH_NONE;
  bool has_default = false;
  int switch_indent = 0;
  int case_cnt = 0;

  for (size_t idx = 0; idx < infos.size(); ++idx) {
    auto& info = infos[idx];
    int current_indent = info.indent;

    while (current_indent > indent_stack.top() && !info.content.empty()) {
      indent_stack.push(current_indent);
      output += "{\n";
    }
    while (current_indent < indent_stack.top() && !info.content.empty()) {
      indent_stack.pop();
      output += "}\n";
    }

    if (info.content.empty()) {
      output += "\n";
      continue;
    }

    if (info.is_switch_stmt == true && info.is_default == false) {
      output += info.arrow_before + " {\n" + remove_arrow(info.content_after) +
                "\n};\n";
    } else if (info.is_switch_stmt == true && info.is_default == true) {
      output += info.arrow_before + " {\n" + remove_arrow(info.content_after) +
                "\n};\n";
    }

    switch (info.type) {
      case LineInfo::KEYWORD: {
        output += info.keyword + " (";
        size_t kw_pos = info.content.find(info.keyword);
        std::string condition;
        if (kw_pos != std::string::npos) {
          condition = info.content.substr(kw_pos + info.keyword.length());
          size_t start = condition.find_first_not_of(" \t");
          if (start != std::string::npos) {
            condition = condition.substr(start);
          } else {
            condition = "";
          }
        }
        condition = trim_right(condition);
        output += condition + ") ";
        break;
      }

      case LineInfo::FUNCTION: {
        output += info.content + ' ';
        break;
      }

      case LineInfo::NORMAL: {
        if (!info.is_switch_stmt && !info.is_default)
          output += info.content + "\n";
        break;
      }

      default:
        break;
    }
  }

  // Close any remaining blocks
  while (indent_stack.size() > 1) {
    indent_stack.pop();
    output += "}\n";
  }
}

int preprocess_files(int argc, char* argv[]) {
  for (int i = 1; i < argc; i++) {
    std::ifstream curr_file(argv[i]);

    if (!curr_file.is_open()) {
      std::cerr << std::format("Error: Cannot open file {}\n", argv[i]);

      return 1;
    }

    std::string content;
    std::string line;

    while (std::getline(curr_file, line)) {
      content += line + "\n";
    }

    std::string output;

    Pinefan::Ppp::preprocess(content, output);

    std::string f_name(argv[i]);

    auto* file = new Pinefan::File::Prp_file(f_name, output);

    file->Pinefan::File::Prp_file::add_preprocessed_file(file);

    auto* f = file->Pinefan::File::Prp_file::get_preprocessed_file(i - 1);

    std::cout << "\e[92m" << f_name << "\e[0m" << std::endl
              << std::endl
              << std::endl;
    std::cout << f->get_content();

    // delete file;
  }

  return 0;
}

void clean_prp_files() {
  for (int i = 0; i < Pinefan::File::preprocessed_files.size(); i++) {
    auto* f = Pinefan::File::preprocessed_files.at(i);
    delete f;
  }
}

}  // namespace Ppp
}  // namespace Pinefan

#ifdef _IS_MAIN
int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << std::format("Usage: \e[92m{}\e[0m \e[94m{:<2}\e[0m", argv[0],
                             " <input..n.pine> \n");

    return 1;
  }
  auto res = Pinefan::Ppp::preprocess_files(argc, argv);
  Pinefan::Ppp::clean_prp_files();
  return res;
}

#endif  //_IS_MAIN
