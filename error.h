#ifndef ERROR_H
#define ERROR_H

#include <stdarg.h>

void print_error(int line, int pos, char* label, char* fmt, va_list args);
void errorf(int line, int pos, char* fmt, ...);
void warnf(int line, int pos, char* fmt, ...);

#endif  // ERROR_H
