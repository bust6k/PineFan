#ifndef FILE_H
#define FILE_H

#define CORRECT_SUFFIX ".pine"
#define OUTPUT_EXTENSION ".py"

#include<stdio.h>
#include "vector.h"
#include<stdbool.h>
 
struct File{
FILE*  f;
char* name;
};
  
Vector* inputs; 
Vector* outputs; 
  
extern int open_in_count;
extern int open_out_count;
  
bool check_suffix(const char *fn);
char* replace_suffix(char* fn);
void add_input_file(struct File* f);
void add_output_file(struct File* f);
struct File* get_file_in(int i);
struct File* get_file_out(int i);
void file_init();

#endif //FILE_H
