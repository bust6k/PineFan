#include "error.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_error(int line, int pos, char* label, char* fmt, va_list args) {
  fprintf(stderr, isatty(fileno(stderr)) ? "\e[1;31m[%s]\e[0m " : "[%s] ",
          label);
  fprintf(stderr, "%d:%d:", line, pos);
  vfprintf(stderr, fmt, args);
  fprintf(stderr, "\n");
}

void errorf(int line, int pos, char* fmt, ...) {
  va_list args;
  va_start(args, fmt);
  print_error(line, pos, "ERROR", fmt, args);
  va_end(args);
  exit(1);
}

void warnf(int line, int pos, char* fmt, ...) {
  va_list args;
  va_start(args, fmt);
  print_error(line, pos, "WARN", fmt, args);
  va_end(args);
}
