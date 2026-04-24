// ppp(pinescript preprocessor) - is a preprocessor for the PineScript language.
// that does to find the keyword(i.e if,for,while) or a function to do it to the // C-like form. it needed for simplify the other pipeline especially the parser.
// for determinig the keywords uses tabs for body selecting it uses the 5-tuple
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

#include <fstream>
#include <iostream>
#include <optional>
#include <sstream>
#include <stack>
#include <string>

namespace Ppp {

void preprocess(std::stringstream& ss);

enum States {
  S_START,
  S_I,
  S_IF,
  S_F,
  S_FO,
  S_FOR,
  S_W,
  S_WH,
  S_WHI,
  S_WHIL,
  S_WHILE,
  S_END_IF,
  S_END_FOR,
  S_END_WHILE,
  S_EQ,
  S_GT,
  S_ARROW_END
};

static States dfa_keyw_trn_table[512][512];
static States dfa_arrow_trn_table[512][512];

std::stringstream in_ss;
std::stringstream out_ss;

bool is_alpha(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool is_maybe_keyw(char c) { return is_alpha(c) || c == '_'; }

static void dfa_init() {
  /* dfa_keyw_trn_table */
  dfa_keyw_trn_table[S_START][S_I] = S_I;
  dfa_keyw_trn_table[S_I][S_IF] = S_IF;
  dfa_keyw_trn_table[S_START][S_F] = S_F;
  dfa_keyw_trn_table[S_F][S_FO] = S_FO;
  dfa_keyw_trn_table[S_FO][S_FOR] = S_FOR;
  dfa_keyw_trn_table[S_START][S_W] = S_W;
  dfa_keyw_trn_table[S_W][S_WH] = S_WH;
  dfa_keyw_trn_table[S_WH][S_WHI] = S_WHI;
  dfa_keyw_trn_table[S_WHI][S_WHIL] = S_WHIL;
  dfa_keyw_trn_table[S_WHIL][S_WHILE] = S_WHILE;

  dfa_keyw_trn_table[S_IF][S_END_IF] = S_END_IF;
  dfa_keyw_trn_table[S_FOR][S_END_FOR] = S_END_FOR;
  dfa_keyw_trn_table[S_WHILE][S_END_WHILE] = S_END_WHILE;

  /* dfa_arrow_trn_table */
  dfa_arrow_trn_table[S_START][S_EQ] = S_EQ;
  dfa_arrow_trn_table[S_EQ][S_GT] = S_GT;
  dfa_arrow_trn_table[S_GT][S_ARROW_END] = S_ARROW_END;
}

std::optional<std::string> dfa_is_needed_keyw(std::stringstream& ss) {
  States state = S_START;

  for (;;) {
    switch (state) {
      case S_START: {
        char letter = ss.get();

        if (letter == 'i') {
          state = dfa_keyw_trn_table[state][S_I];
        } else if (letter == 'f') {
          state = dfa_keyw_trn_table[state][S_F];
        } else if (letter == 'w') {
          state = dfa_keyw_trn_table[state][S_W];
        }
        break;
      }

      case S_I: {
        char foo = ss.get();
        if (foo == 'f') {
          state = dfa_keyw_trn_table[state][S_IF];
          break;
        } else {
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }
      case S_IF: {
        state = dfa_keyw_trn_table[state][S_END_IF];
        break;
      }

      case S_END_IF: {
        if (!is_maybe_keyw(ss.get()))
          return "if";
        else {
          ss.unget();
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }
      case S_F: {
        if (ss.get() == 'o') {
          state = dfa_keyw_trn_table[state][S_FO];
          break;
        } else {
          ss.unget();
          return std::nullopt;
        }
        break;
      }
      case S_FO: {
        if (ss.get() == 'r') {
          state = dfa_keyw_trn_table[state][S_FOR];
          break;
        } else {
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }
      case S_FOR: {
        state = dfa_keyw_trn_table[state][S_END_FOR];
        break;
      }

      case S_END_FOR: {
        if (!is_maybe_keyw(ss.get()))

          return "for";

        else {
          ss.unget();
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }

      case S_W: {
        if (ss.get() == 'h') {
          state = dfa_keyw_trn_table[state][S_WH];
          break;
        } else {
          ss.unget();
          return std::nullopt;
        }
        break;
      }
      case S_WH: {
        if (ss.get() == 'i') {
          state = dfa_keyw_trn_table[state][S_WHI];
          break;
        } else {
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }

      case S_WHI: {
        if (ss.get() == 'l') {
          state = dfa_keyw_trn_table[state][S_WHIL];
          break;
        } else {
          ss.unget();
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }

      case S_WHIL: {
        if (ss.get() == 'e') {
          state = dfa_keyw_trn_table[state][S_WHILE];
          break;
        } else {
          ss.unget();
          ss.unget();
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }

      case S_WHILE: {
        state = dfa_keyw_trn_table[state][S_END_WHILE];
        break;
      }

      case S_END_WHILE: {
        if (!is_maybe_keyw(ss.get()))
          return "while";
        else {
          ss.unget();
          ss.unget();
          ss.unget();
          ss.unget();
          ss.unget();
          return std::nullopt;
        }
        break;
      }
      default:
        return std::nullopt;
    }
  }
}

bool dfa_is_arrow(std::stringstream& ss) {
  int state = S_START;
  for (;;) {
    switch (state) {
      case S_START: {
        auto first = ss.get();
        if (first == '=') {
          state = dfa_arrow_trn_table[state][S_EQ];
        } else {
          ss.unget();
          return false;
        }
        break;
      }

      case S_EQ: {
        auto first = ss.get();
        if (first == '>') {
          state = dfa_arrow_trn_table[state][S_GT];
        } else {
          ss.unget();
          ss.unget();
          return false;
        }
        break;
      }

      case S_GT: {
        state = dfa_arrow_trn_table[state][S_ARROW_END];
        break;
      }
      case S_ARROW_END: {
        if (!is_maybe_keyw(ss.get())) {
          return true;
        }
        return false;
      }
      default:
        return false;
    }
  }
}

int countIndent(std::string& s) {
  int cnt = 0;
  for (char c : s) {
    if (c == ' ')
      cnt += 1;
    else if (c == '\t')
      cnt += 4;
    else
      break;
  }
  return cnt;
}

// this is the pseudo-code.please,don't think this is would to be used at
// production
//  so you also need to make function that also adds brackets( () ) to the
//  if,for,while declarations. it also significant for the bison parser

// TODO: add isNeed var that detemines if it keyword(need the bracket( ( () or a
// function(don't need)
// TODO: add dfa checking to add the ( bracket to all the keywords. so it could
// be couple with the past line
void process_stack(std::stringstream& ss, bool isFun = false) {
  std::stack<int> st;
  bool isNotOpened = true;

  st.push(0);

  auto trimRight = [](const std::string& s) {
    size_t end = s.find_last_not_of(" \t\r\n");
    return (end == std::string::npos) ? std::string() : s.substr(0, end + 1);
  };

  std::string line;
  std::string res_clear;

  while (std::getline(ss, line)) {
    res_clear = trimRight(line);
    if (res_clear.ends_with("=>")) {
      res_clear.erase(res_clear.size() - 2);
      isFun = true;
    }

    if (ss.eof()) break;
    if (res_clear.empty()) {
      out_ss << '\n';
      continue;
    }

    int indent_count = countIndent(line);

    if (indent_count > st.top()) {
      if (!isFun) {
        out_ss << ")";
      }
      out_ss << "{\n";
      isNotOpened = false;
      st.push(indent_count);

    } else if (indent_count == st.top()) {
      std::string res = dfa_is_needed_keyw(ss).value_or("");
      if (res != "") {
        isNotOpened = true;
      }
      continue;
    } else {
      st.pop();
      isNotOpened = true;
      out_ss << "}\n";
    }
    //    if(isOpened){out_ss << res_clear + '\n';}
    if (isNotOpened) {
      out_ss << res_clear;
    } else {
      out_ss << res_clear << '\n';
    }
  }

  while (st.size() > 1) {
    st.pop();
    isNotOpened = true;
    out_ss << "\n}\n";
  }
}

void preprocess(std::stringstream& ss) {
  std::string res;
  bool is_found;
  while (!is_found) {
    auto pos_before = ss.tellg();
    res = dfa_is_needed_keyw(ss).value_or("");

    if (res != "") {
      out_ss << res << "(";
      process_stack(ss);
      is_found = true;
      continue;
    }
    bool is_arrow;
    is_arrow = dfa_is_arrow(ss);
    if (is_arrow) {
      process_stack(ss);
      is_found = true;
      continue;
    }
    ss.clear();
    ss.seekg(pos_before);
    std::string line;

    auto trimRight = [](const std::string& s) {
      size_t end = s.find_last_not_of(" \t\r\n");
      return (end == std::string::npos) ? std::string() : s.substr(0, end + 1);
    };

    if (std::getline(ss, line)) {
      std::string clear_line = trimRight(line);
      if (!clear_line.empty()) {
        std::string clear_line_copy = clear_line;
        std::string erased_line = clear_line.erase(clear_line.size() - 2);

        if (clear_line_copy.ends_with("=>")) {
          out_ss << erased_line;
          process_stack(ss, true);
          is_found = true;
          continue;
        }

        out_ss << clear_line << "\n";
      }
    } else {
      return;
    }
  }
}
/*
void preprocess(std::stringstream& ss) {
  std::string res;
  res = dfa_is_needed_keyw(ss).value_or("");
  if (res != "") {
    out_ss << res + " ";
    process_stack(ss);
  } else if (dfa_is_arrow(ss)) {
    process_stack(ss);
  } else {
    //    buf_write(in_file, buf_read_ch(curr_file));
    std::string line;
    std::getline(in_ss, line);
    ss << line;
  }
}

*/

}  // namespace Ppp

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <input.pine>\n";
    return 1;
  }
  Ppp::dfa_init();

  std::ifstream file(argv[1]);
  if (!file.is_open()) {
    std::cerr << "Error: Cannot open file '" << argv[1] << "'\n";
    return 1;
  }

  std::string content;
  std::string chunk;
  while (std::getline(file, chunk)) {
    content += chunk + "\n";
  }

  Ppp::in_ss.str(content);
  Ppp::in_ss.clear();
  Ppp::in_ss.seekg(0);

  Ppp::preprocess(Ppp::in_ss);

  std::cout << Ppp::out_ss.str();

  return 0;
}
