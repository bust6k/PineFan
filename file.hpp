#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include<sstream>

extern int open_prp_files_count;

namespace Pinefan {
namespace File {

#ifdef _WIN32
constexpr std::string_view correct_suffix = ".pine";
constexpr std::string_view output_exstension = ".py";
constexpr char PATH_SEPARATOR = '\\';
#else
constexpr std::string_view correct_suffix = ".pine";
constexpr std::string_view output_exstension = ".py";
constexpr char PATH_SEPARATOR = '/';
#endif

class Prp_file {
 public:
  Prp_file(std::string name, std::string content) {
    this->name = normalize_path(name);
    this->content = content;
  }
  
  std::string vector_str_convert(std::vector<std::string>* vec) {
    if (vec->empty()) {
        return "";  
    }
    
    std::string result;
    for (size_t i = 0; i < vec->size(); ++i) {
        result += vec->at(i);
        if (i != vec->size() - 1) {
            result += '\n';
        }
    }
    return result;
  }

  std::string get_name() { return this->name; }
 
  std::string get_content(int is_debug = 1) { 
  std::string line;
  std::vector<std::string> lines;
  std::istringstream icontent(this->content);
  int i = 0;

  while (std::getline(icontent, line)) {
  //if(is_debug) lines.push_back(std::to_string(++i));  
  lines.push_back("\e[92m" + std::to_string(++i) + "\e[0m" + ' ' +  line + '\n');   
   
  }
  return vector_str_convert(&lines);
  }

  bool check_suffix(std::string file_name);
  std::string* replace_suffix(std::string file_name);
  static void add_preprocessed_file(Prp_file* file);
  static Prp_file* get_preprocessed_file(int i);

 private:
  std::string name;
  std::string content;
  int flags;

  std::string normalize_path(const std::string& path) {
    std::string normalized = path;
#ifdef _WIN32
    std::replace(normalized.begin(), normalized.end(), '/', '\\');
#else
    std::replace(normalized.begin(), normalized.end(), '\\', '/');
#endif
    return normalized;
  }
};

extern std::vector<Prp_file*> preprocessed_files;

std::string get_home_directory();
bool create_directories(const std::string& path);
std::string get_executable_path();
bool add_to_path(const std::string& bin_dir);
bool install_pinefan();
std::string get_current_directory();
bool file_exists(const std::string& path);
}  // namespace File
}  // namespace Pinefan

