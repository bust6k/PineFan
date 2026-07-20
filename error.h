#pragma once

void errorf(int line, int pos, const char* fmt, ...);
void warnf(int line, int pos, const char* fmt, ...);
void error_read_source_file(const char* filename);
void error_free_source_lines(void);

