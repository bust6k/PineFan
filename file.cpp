#include "file.hpp"

#include <string>

namespace Pinefan {
namespace File {

std::vector<Prp_file*> preprocessed_files;
int open_prp_files_count = 0;
// int open_out_count = 0;

bool Prp_file::check_suffix(std::string file_name) {
  if (file_name.length() < 5) return false;
  return std::equal(file_name.end() - 5, file_name.end(),
                    correct_suffix.begin());
}

std::string* Prp_file::replace_suffix(std::string file_name) {
  std::string* output_file_name =
      new std::string(file_name, 0, file_name.length() - 5);

  (*output_file_name) += output_exstension;

  return output_file_name;
}

void Prp_file::add_preprocessed_file(Prp_file* file) {
  preprocessed_files.push_back(file);
  open_prp_files_count++;
}

Prp_file* Prp_file::get_preprocessed_file(int i) {
  return preprocessed_files.at(i);
}

// struct File* get_file_out(int i) { return vec_get(outputs, i); }
}  // namespace File
}  // namespace Pinefan
