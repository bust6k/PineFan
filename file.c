#include "file.h"

#include <stdlib.h>
#include <string.h>

int open_in_count = 0;
int open_out_count = 0;

bool check_suffix(const char* fn) {
  size_t n = strlen(fn);
  if (n < 5) return false;
  return strcmp(fn + n - 5, CORRECT_SUFFIX) == 0;
}

char* replace_suffix(char* fn) {
  int str_len = strlen(fn);

  char* pure_fn = calloc(str_len - 3, sizeof(char));
  int i = 0;

  while (i < str_len - 5) {
    pure_fn[i] = fn[i];
    i++;
  }

  int j = i++;

  pure_fn[j] = OUTPUT_EXTENSION[0];
  ++j;
  pure_fn[j] = OUTPUT_EXTENSION[1];
  ++j;
  pure_fn[j] = OUTPUT_EXTENSION[2];
  ++j;
  pure_fn[j] = '\0';

  return pure_fn;
}

void add_input_file(struct File* f) {
  vec_push(inputs, f);
  open_in_count++;
}

void add_output_file(struct File* f) {
  vec_push(outputs, f);
  open_out_count++;
}

struct File* get_file_in(int i) { return vec_get(inputs, i); }

struct File* get_file_out(int i) { return vec_get(outputs, i); }

void file_init() {
  inputs = do_make_vector(15);
  outputs = do_make_vector(15);
}
