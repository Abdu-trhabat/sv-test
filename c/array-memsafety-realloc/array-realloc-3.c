#include <stdlib.h>
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


extern int __VERIFIER_nondet_int(void);
int num;

int ind, newsize, i = 1;

void *expandArray(void *arg) {
  int *a = (int *)arg;
  while (newsize < num) {
    newsize = newsize + 1;
    int *b = NULL;
    b = safe_realloc(a, sizeof(int) * newsize);
    b[newsize - 1] = i;
    a = b;
  }

  return 0;
}

int main(int argc, char **argv) {
  num = __VERIFIER_nondet_int();
  if (!(num > 0 && num < 100)) {
    return 0;
  }
  int *a = (int *)safe_malloc(sizeof(int));
  if (a == NULL) {
    return 0;
  }
  newsize = 0;
  expandArray(a);

  return 0;
}
