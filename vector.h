#ifdef __cplusplus
#pragma once
extern "C" {
#endif //__cplusplus
#define MIN_SIZE 512

  typedef struct {
      void **body;
      int len;
      int nalloc;
  } Vector;
  
 
  Vector *make_vector(void);
  Vector *make_vector1(void *e);
  static int max(int a, int b);
  static int roundup(int n);
  static void extend(Vector *vec, int delta);
  Vector *do_make_vector(int size);
  Vector *vec_copy(Vector *src);
  void vec_push(Vector *vec, void *elem);
  void vec_append(Vector *a, Vector *b);
  void *vec_pop(Vector *vec);
  void *vec_get(Vector *vec, int index);
  void vec_set(Vector *vec, int index, void *val);
  void *vec_head(Vector *vec);
  void *vec_tail(Vector *vec);
  Vector *vec_reverse(Vector *vec);
  void *vec_body(Vector *vec);
  int vec_len(Vector *vec);
  void vec_free(Vector *vec);
#ifdef __cplusplus
  }  
#endif //__cplusplus
