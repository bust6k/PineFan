#include "file.hpp"

#include <algorithm>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>

#ifdef _WIN32
#include <direct.h>
#include <shlobj.h>
#include <windows.h>
#else
#include <limits.h>
#include <sys/stat.h>
#include <unistd.h>

#include <cerrno>
#endif

namespace Pinefan {
namespace File {

std::vector<Prp_file*> preprocessed_files;
int open_prp_files_count = 0;

bool Prp_file::check_suffix(std::string file_name) {
  if (file_name.length() < 5) return false;

  // Нормализуем суффикс для сравнения
  std::string suffix(file_name.end() - 5, file_name.end());
#ifdef _WIN32
  // На Windows регистр не важен
  std::transform(suffix.begin(), suffix.end(), suffix.begin(), ::tolower);
  std::string correct(correct_suffix);
  std::transform(correct.begin(), correct.end(), correct.begin(), ::tolower);
  return suffix == correct;
#else
  return std::equal(file_name.end() - 5, file_name.end(),
                    correct_suffix.begin());
#endif
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

// Вспомогательная функция для получения текущей директории
std::string get_current_directory() {
  char buffer[FILENAME_MAX];
#ifdef _WIN32
  _getcwd(buffer, FILENAME_MAX);
#else
  getcwd(buffer, FILENAME_MAX);
#endif
  return std::string(buffer);
}

// Вспомогательная функция для проверки существования файла
bool file_exists(const std::string& path) {
#ifdef _WIN32
  DWORD attrs = GetFileAttributesA(path.c_str());
  return (attrs != INVALID_FILE_ATTRIBUTES &&
          !(attrs & FILE_ATTRIBUTE_DIRECTORY));
#else
  struct stat buffer;
  return (stat(path.c_str(), &buffer) == 0);
#endif
}

std::string get_home_directory() {
#ifdef _WIN32
  char home[MAX_PATH];
  if (SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_LOCAL_APPDATA, NULL, 0, home))) {
    return std::string(home);
  }
  return ".";
#else
  const char* home = getenv("HOME");
  return home ? std::string(home) : ".";
#endif
}

bool create_directories(const std::string& path) {
#ifdef _WIN32
  return CreateDirectoryA(path.c_str(), NULL) != 0 ||
         GetLastError() == ERROR_ALREADY_EXISTS;
#else
  return mkdir(path.c_str(), 0755) == 0 || errno == EEXIST;
#endif
}

std::string get_executable_path() {
  char buffer[FILENAME_MAX];
#ifdef _WIN32
  GetModuleFileNameA(NULL, buffer, FILENAME_MAX);
#else
  ssize_t len = readlink("/proc/self/exe", buffer, sizeof(buffer) - 1);
  if (len != -1) {
    buffer[len] = '\0';
  } else {
    buffer[0] = '\0';
  }
#endif
  return std::string(buffer);
}

bool add_to_path(const std::string& bin_dir) {
#ifdef _WIN32
  HKEY hkey;
  if (RegOpenKeyExA(HKEY_CURRENT_USER, "Environment", 0, KEY_READ | KEY_WRITE,
                    &hkey) == ERROR_SUCCESS) {
    char current_path[32768];
    DWORD size = sizeof(current_path);
    DWORD type = REG_EXPAND_SZ;

    bool need_add = true;
    if (RegQueryValueExA(hkey, "Path", NULL, &type, (LPBYTE)current_path,
                         &size) == ERROR_SUCCESS) {
      current_path[size] = '\0';
      std::string path_str(current_path);
      if (path_str.find(bin_dir) != std::string::npos) {
        need_add = false;
      }
    } else {
      current_path[0] = '\0';
    }

    if (need_add) {
      std::string new_path;
      if (current_path[0] != '\0') {
        new_path = std::string(current_path) + ";" + bin_dir;
      } else {
        new_path = bin_dir;
      }

      if (RegSetValueExA(hkey, "Path", 0, REG_EXPAND_SZ,
                         (const BYTE*)new_path.c_str(),
                         new_path.length() + 1) == ERROR_SUCCESS) {
        RegCloseKey(hkey);
        SendMessageTimeoutA(HWND_BROADCAST, WM_SETTINGCHANGE, 0,
                            (LPARAM) "Environment", SMTO_ABORTIFHUNG, 5000,
                            NULL);
        return true;
      }
    }
    RegCloseKey(hkey);
  }
  return false;
#else
  std::string home = get_home_directory();
  std::string profile_path = home + "/.profile";

  std::ifstream profile_in(profile_path);
  std::string content;
  if (profile_in.is_open()) {
    std::stringstream buffer;
    buffer << profile_in.rdbuf();
    content = buffer.str();
    profile_in.close();

    if (content.find(bin_dir) != std::string::npos) {
      return true;
    }
  }

  std::ofstream profile_out(profile_path, std::ios::app);
  if (profile_out.is_open()) {
    profile_out << "\n# Added by PineFan\n";
    profile_out << "export PATH=\"$PATH:" << bin_dir << "\"\n";
    profile_out.close();
    return true;
  }
  return false;
#endif
}

bool install_pinefan() {
  std::string home = get_home_directory();
  std::string bin_dir;

#ifdef _WIN32
  bin_dir = home + "\\PineFan\\bin";
#else
  bin_dir = home + "/.local/bin";
#endif

  if (!create_directories(bin_dir)) {
    return false;
  }

  std::string exe_path = get_executable_path();
  std::string dest_path;

#ifdef _WIN32
  dest_path = bin_dir + "\\pinefan.exe";
#else
  dest_path = bin_dir + "/pinefan";
#endif

  std::ifstream src(exe_path, std::ios::binary);
  std::ofstream dst(dest_path, std::ios::binary);
  if (!src.is_open() || !dst.is_open()) {
    return false;
  }
  dst << src.rdbuf();
  src.close();
  dst.close();

#ifndef _WIN32
  chmod(dest_path.c_str(), 0755);
#endif

  return add_to_path(bin_dir);
}

}  // namespace File
}  // namespace Pinefan
