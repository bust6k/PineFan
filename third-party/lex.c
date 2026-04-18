//TODO: now reading of IDs and keywords now are wrong(strcmp not find \0 and invoke segfault). need to make two functions:
//- one function determines if string is some word keyword and returns correspond token
// second one builds a string keyword until it not map with that one
// that's allow us to read keywords


//XXX: add on each function incrementing of pos or line for bf object. on that functions not does it (in)directly
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<stdbool.h>
#include<string.h>
#include<string.h>
#include "vector.c"

typedef enum{
    TOKEN_INDICATOR,
    TOKEN_STRATEGY,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_FOR,
    TOKEN_RETURN,
    TOKEN_WHILE,
    TOKEN_BREAK,
    TOKEN_CONTINUE,
    TOKEN_SWITCH,
    TOKEN_CASE,
    TOKEN_DEFAULT,
    TOKEN_VAR,
    TOKEN_CONST,
    TOKEN_SIMPLE,
    TOKEN_INPUT,
    TOKEN_INT,
    TOKEN_BOOL,
    TOKEN_FLOAT,
    TOKEN_COLOR,
    TOKEN_STRING_TYPE,
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_STRING,
    TOKEN_LPAREN,      // (
    TOKEN_RPAREN,      // )
    TOKEN_LBRACE,      // {
    TOKEN_RBRACE,      // }
    TOKEN_ASSIGN,      // =
    TOKEN_ASSIGN_RE,   // :=
    TOKEN_EQ,          // ==
    TOKEN_GT,          // >
    TOKEN_LT,          // <
    TOKEN_EOF
} TokenType;

typedef struct{
TokenType tp;
union{
Vector* val;
VectorInt* i_val;
};
int line;
int col;
} Token;

typedef struct {
    char* buffer;
    int pos;
    int line;
} Lexer;

typedef struct {
char* buf;
long size;
} Buffer;

Buffer* load_file(const char* path) {
    FILE* f = fopen(path, "rb");
    
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    
    fseek(f, 0, SEEK_SET);
    char* buf = malloc(size + 1);
    
    fread(buf, 1, size, f);
    buf[size] = 0;
    
    fclose(f);
    Buffer* sbuf = calloc(1,sizeof(Buffer));
    
    sbuf->buf = buf;
    sbuf->size = size;
    return sbuf;
}

static void print_error(int line, int pos, char *label, char *fmt, va_list args) {
    fprintf(stderr, isatty(fileno(stderr)) ? "\e[1;31m[%s]\e[0m " : "[%s] ", label);
    fprintf(stderr, "%d:%d:", line, pos);
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
}

static void errorf(int line,int pos, char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    print_error(line, pos, "ERROR", fmt, args);
    va_end(args);
    exit(1);
}

static void warnf(int line, int pos, char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    print_error(line, pos, "WARN", fmt, args);
    va_end(args);
}

Lexer* bf;

void lex_init(char* fn){
Buffer* buf = load_file(fn);

bf = calloc(1,sizeof(Lexer));
bf->buffer = buf->buf;
}

  

int readc(){
int c = *bf->buffer++;

if(c == EOF){
return -1;
}
else if(c == '\n'){
bf->line++;
return c;
}

bf->pos++;
return c;
}

int unreadc(){
int c = *bf->buffer--;

if(c == EOF){
return -1;
}
else if(c == '\n'){
bf->line--;
return c;
}

bf->pos--;
return c;
}

int peek() {
int r = readc();
unreadc();
return r;
}

int peek_expect(char c){
int r = readc();
if(r != c) errorf(bf->line,bf->pos,"expected %c,but got %c\n",c,r);
unreadc();
return r;
}

bool is_white_space(int c){
return c == ' ' || c == '\t' || c == '\v' || c == '\f';
}

bool is_digit(char c){
return c >= '0' && c <= '9';
}

bool is_float(char c){
unreadc();
int pc = readc();
readc();
int nc = readc();

return c == '.' && is_digit(pc) && is_digit(nc);
}

void  skip_white_space(){
int c = readc();
if(is_white_space(c)){
return;
}
unreadc();
}

Token* skip_comment(){
int c = 0;
while((c = readc()) != '\n'){
if(c == EOF){
break;
}
continue;
}

return NULL;
}

// XXX:WRONG
Token* skip_block_comment(){
int c = 0;
while((c = readc()) != '*'){
if(c == EOF) errorf(bf->line,bf->pos,"expected closing character */\n");
if(readc() == '/') continue; else errorf(bf->line,bf->pos,"expected %c,but got %c",'/',c);
}

return NULL;
}

Token* make_keyword(char* s) {
    Token* t = calloc(1, sizeof(Token));
    t->line = bf->line;
    t->col = bf->pos;
    
    if (!strcmp(s, "indicator")) t->tp = TOKEN_INDICATOR;
    else if (!strcmp(s, "strategy")) t->tp = TOKEN_STRATEGY;
    else if (!strcmp(s, "if")) t->tp = TOKEN_IF;
    else if (!strcmp(s, "else")) t->tp = TOKEN_ELSE;
    else if (!strcmp(s, "for")) t->tp = TOKEN_FOR;
    else if (!strcmp(s, "return")) t->tp = TOKEN_RETURN;
    else if (!strcmp(s, "while")) t->tp = TOKEN_WHILE;
    else if (!strcmp(s, "switch")) t->tp = TOKEN_SWITCH;
    else if (!strcmp(s, "break")) t->tp = TOKEN_BREAK;
    else if (!strcmp(s, "default")) t->tp = TOKEN_DEFAULT;
    else if (!strcmp(s, "continue")) t->tp = TOKEN_CONTINUE;
    else if (!strcmp(s, "var")) t->tp = TOKEN_VAR;
    else if (!strcmp(s, "simple")) t->tp = TOKEN_SIMPLE;
    else if (!strcmp(s, "const")) t->tp = TOKEN_CONST;
    else if (!strcmp(s, "int")) t->tp = TOKEN_INT;
    else if (!strcmp(s, "float")) t->tp = TOKEN_FLOAT;
    else if (!strcmp(s, "bool")) t->tp = TOKEN_BOOL;
    else if (!strcmp(s, "color")) t->tp = TOKEN_COLOR;
    else if (!strcmp(s, "string")) t->tp = TOKEN_STRING_TYPE;
    else if (!strcmp(s, "input")) t->tp = TOKEN_INPUT;
    else {
        free(t);
        return NULL;
    }
    
    return t;
}

char* add_null_terminator(char* s,int i){
char* s_malloc = malloc(i + 1);
memcpy(s_malloc,s,i);
s_malloc[i + 1] = '\0';

return s_malloc;
}

bool is_alpha(char c){
 return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

Token* read_keyword(char* s) {
char str[25] = {0};
Token* t = NULL;

int i = 0;

while(is_alpha(s[i]) && i < 25){ 
str[i] = s[i];
i++;
bf->pos++;
}

str[i] = '\0';


t = make_keyword(str);

return t;
}

// incorrect
/*
Token* read_identifier(char f){
Token* t = calloc(1,sizeof(Token));
VectorInt* identifer = make_vector_int();

for(;;){
switch(f){
	case ':':{ int c = peek(); if(c == '=') break;else errorf(bf->line,bf->pos,"expected := operator,but got %c%c",':',f);}
        case EOF: {free(t);vec_free_int(identifer) ;return NULL;} //free(t) //vec_free_int(identifer)
        case ';': case '\n': case '=':  break;
        case ' ': case '\t': case '\f': case '\v': continue;
        default: vec_push_int(identifer,f); 
}
readc();
}

t->tp = TOKEN_IDENTIFIER;
t->i_val = identifer;
t->line = bf->line;
t->col = bf->pos;
return t;
}
*/

  Token* read_identifier(char s) {
  VectorInt* str = make_vector_int();
  Token* t = NULL;

  int i = 0;

  char ss = s;
  while(is_alpha(ss) && i < 30){
  vec_push_int(str,ss);
  i++;
  bf->pos++;
readc();
  ss = readc(); 
  }

  vec_push_int(str,'\0');

  t->tp = TOKEN_IDENTIFIER;
  t->i_val = str;
  t->line = bf->line;
  t->col = bf->pos;
  return t;
  }

Token* read_number(int f){
Token* t = calloc(1,sizeof(Token));
VectorInt* number = make_vector_int();

readc();
while(is_digit(f) || is_float(f)){
vec_push_int(number,f);
f = readc();
}
t->tp = TOKEN_NUMBER;
t->i_val = number;
t->line = bf->line;
t->col = bf->pos;

return t;
}

Token* read_string(){
 Token* t = calloc(1,sizeof(Token));
VectorInt *string = make_vector_int();

int f = readc();

while(f != '"' && f != EOF){
vec_push_int(string,f);
f = readc();
}
t->tp = TOKEN_STRING;
t->i_val = string;
t->line = bf->line;
t->col = bf->pos;

return t;
}

Token* read_operator(int f){
Token* t = calloc(1,sizeof(Token));

t->line = bf->line;
t->col = bf->pos;

switch(f){
	case '(':{
        t->tp = TOKEN_LPAREN;
        break;	
	}
        case ')':{
	t->tp = TOKEN_RPAREN;
	break;
		}
	case '{':{
	t->tp = TOKEN_LBRACE;
	break;
		 }
	case '}':{
	t->tp = TOKEN_RBRACE;
	break;
	}
	case '=':{
	readc();
	f = readc();
	if(f == '='){
	t->tp = TOKEN_EQ;
	break;
	}
	t->tp = TOKEN_ASSIGN;
	break;
	}
	case ':':{
	readc();
	f = readc();
	if(f == '='){
	t->tp = TOKEN_ASSIGN_RE;
	break;
	}
	else errorf(bf->line,bf->pos,"expected %c%c,but got %c\n",':','=',f);
	}
	case '<':{
	t->tp = TOKEN_LT;
	break;
	}
	case '>':{
	t->tp = TOKEN_GT;
	break;
	}
	case EOF:{
	t->tp = TOKEN_EOF;
	break;
	}
}
return t;
}


 static Token* next_token(){
 int c = readc();
 
 Token* t;

 switch(c){
	  case 'a' ... 'z': case 'A' ... 'Z': {unreadc();t = read_keyword(bf->buffer); if(t == NULL) t = read_identifier(c); if(t == NULL) errorf(bf->line,bf->pos,"expected keyword or identifer"); break;}
	  case '0' ... '9':  {t = read_number(c); break;}
	  case '"': {t = read_string();break;}
	  case ' ': case '\t': case '\f': case '\v': skip_white_space();
	  case '/':{int f = readc(); if(f == '/') t = skip_comment(); else t = skip_block_comment(); }
	  default:{ t = read_operator(c);break;}
  }
 
  return t;
  }


/*
int main(int argc,char* argv[]){
if(argv[1] == NULL) errorf(0,0,"expected file name");

lex_init(argv[1]);

Token* t = next_token();

printf("%d\t",t->tp);


while(t->tp != TOKEN_EOF){
free(t);
t = next_token();
printf("%d\t",t->tp);

}

free(t);
printf("\n");
}

*/
