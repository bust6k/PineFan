#include "error.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "color.h"

#ifdef _WIN32
#include <io.h>
#define isatty _isatty
#define fileno _fileno
#else
#include <unistd.h>
#endif

#define MAX_SOURCE_LINES 100000
#define MAX_LINE_LENGTH 4096

static char* source_lines[MAX_SOURCE_LINES];
static int source_lines_count = 0;
static char current_file_name[1024] = "unknown";

void error_read_source_file(const char* filename) {
  FILE* f = fopen(filename, "r");
  if (!f) return;

  strncpy(current_file_name, filename, sizeof(current_file_name) - 1);
  current_file_name[sizeof(current_file_name) - 1] = '\0';

  source_lines_count = 0;
  char buf[MAX_LINE_LENGTH];
  while (fgets(buf, sizeof(buf), f) && source_lines_count < MAX_SOURCE_LINES) {
    size_t len = strlen(buf);
    source_lines[source_lines_count] = (char*)malloc(len + 1);
    if (source_lines[source_lines_count]) {
      memcpy(source_lines[source_lines_count], buf, len + 1);
    }
    source_lines_count++;
  }
  fclose(f);
}

void error_free_source_lines(void) {
  for (int i = 0; i < source_lines_count; i++) {
    free(source_lines[i]);
  }
  source_lines_count = 0;
}
static void print_error(int line, int pos, const char* label, const char* fmt,
                        va_list args) {
#ifdef _WIN32
  RED_COLOR;
  fprintf(stderr, "[%s]: ", label);
  RESET_COLOR;
  fprintf(stderr, "%s ", current_file_name);
  GREEN_COLOR;
  fprintf(stderr, "line");
  RESET_COLOR;
  fprintf(stderr, " %d ", line);
  CYAN_COLOR;
  fprintf(stderr, "column");
  RESET_COLOR;
  fprintf(stderr, " %d: ", pos);
#else
  int tty = isatty(fileno(stderr));
  if (tty) {
    fprintf(stderr, "\e[91m[%s]\e[0m: ", label);
  } else {
    fprintf(stderr, "[%s]: ", label);
  }
  fprintf(stderr, "%s ", current_file_name);
  if (tty) {
    fprintf(stderr, "\e[92mline\e[0m %d \e[94mcolumn\e[0m %d: ", line, pos);
  } else {
    fprintf(stderr, "line %d column %d: ", line, pos);
  }
#endif

  vfprintf(stderr, fmt, args);
  fprintf(stderr, "\n");

  if (source_lines_count > 0 && line > 0 && line <= source_lines_count) {
    const char* src = source_lines[line - 1];
    if (src) {
      size_t len = strlen(src);
      if (len > 0 && src[len - 1] == '\n') {
        fprintf(stderr, "%.*s", (int)(len - 1), src);
      } else {
        fprintf(stderr, "%s", src);
      }
      fprintf(stderr, "\n");

      if (pos > 0) {
        for (int i = 1; i < pos; i++) {
          fprintf(stderr, "~");
        }
#ifdef _WIN32
        GREEN_COLOR;
        fprintf(stderr, "^");
        RESET_COLOR;
#else
        if (tty) {
          fprintf(stderr, "\e[1;32m^\e[0m");
        } else {
          fprintf(stderr, "^");
        }
#endif
        if (pos <= (int)len) {
          for (int i = pos; i < (int)len; i++) {
            if (src[i] != '\n') {
              fprintf(stderr, "~");
            }
          }
        }
        fprintf(stderr, "\n");
      }
    }
  }
}

void errorf(int line, int pos, const char* fmt, ...) {
  va_list args;
  va_start(args, fmt);
  print_error(line, pos, "ERROR", fmt, args);
  va_end(args);
  exit(1);
}

void warnf(int line, int pos, const char* fmt, ...) {
  va_list args;
  va_start(args, fmt);
  print_error(line, pos, "WARN", fmt, args);
  va_end(args);
}
