typedef unsigned int size_t;
extern  void free(void*);
extern void* malloc(size_t);
extern void abort(void);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


int main(void) {
    int* p = safe_malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++) {
        p[i] = 1;
        if(i == 5) {
            free(p);
        }
    }

    return 0;
}
