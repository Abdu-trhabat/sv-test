typedef unsigned int size_t;
extern  void free(void*);
extern void* safe_malloc(size_t);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


void freePointer(int* p) {
    free(p);
}

int main(void) {
    int* p = safe_malloc(10 * sizeof(int));

    freePointer(p);

    p[0] = 1;

    return 0;
}
