typedef unsigned int size_t;
extern  void free(void*);
extern void* safe_malloc(size_t);
extern void* safe_realloc( void *ptr, size_t new_size );
extern char __VERIFIER_nondet_char(void);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

void *safe_realloc(void *ptr, size_t size) {
  void *p = realloc(ptr, size);
  if (p == 0) {
    abort();
  }
  return p;
}


int main(void) {
    char* p = safe_malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        p[i] = __VERIFIER_nondet_char();
    }

    free(p);

    if (p[2] == 'a')
        p = safe_realloc(p, 20 * sizeof(int));

    return 0;
}
