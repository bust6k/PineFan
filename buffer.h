#include<ctype.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
char *body;
int nalloc;
int len;
int rc;
} Buffer;

#define INIT_SIZE 256

Buffer *make_buffer();
static void realloc_body(Buffer *b);
char *buf_body(Buffer *b);
int buf_len(Buffer *b);
void buf_write(Buffer *b, char c);
char* buf_read(Buffer *b);
void  buf_unread(Buffer *b,int delta);
char buf_read_ch(Buffer *b);
char* buf_read_str(Buffer *b);
void buf_append(Buffer *b, char *s, int len);
void buf_printf(Buffer *b, char *fmt, ...);
char *vformat(char *fmt, va_list ap);
char *format(char *fmt, ...);
static char *quote(char c);
static void print(Buffer *b, char c);
char *quote_cstring(char *p);
char *quote_cstring_len(char *p, int len);
char *quote_char(char c);
