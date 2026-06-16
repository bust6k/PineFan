#pragma once

#include <string>
#include <vector>

extern int open_prp_files_count;
// extern int open_out_count;

namespace Pinefan {
namespace File {
constexpr std::string_view correct_suffix = ".pine";
constexpr std::string_view output_exstension = ".py";

class Prp_file {
 public:
  Prp_file(std::string name, std::string content) {
    this->name = name;
    this->content = content;
  }

  std::string get_name() { return this->name; }
  std::string get_content() { return this->content; }

  // std::vector<ast_node> ast_three;

  bool check_suffix(std::string file_name);
  std::string* replace_suffix(std::string file_name);
  void add_preprocessed_file(Prp_file* file);
  // void add_output_file(File* file);
  Prp_file* get_preprocessed_file(int i);
  // Prp_file* get_file_out(int i);
  // void file_init();

 private:
  std::string name;
  std::string content;
  int flags;  // it'll need when we should determine something. For example
              // determine the version. The 4 lower bits can say what's version
              // of PS is used for file
};
inline std::vector<Prp_file*> preprocessed_files;



}  // namespace File
}  // namespace Pinefan
