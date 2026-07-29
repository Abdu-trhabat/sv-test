/*
 * Date: 28.09.2015
 * Author: Thomas Ströder
 */
#include <stdlib.h>
void *safe_calloc(size_t num, size_t size) {
  void *p = calloc(num, size);
  if (p == 0) {
    abort();
  }
  return p;
}

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

#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

char *(cstrncpy)(char *s1, const char *s2, int n)
 {
     char *dst = s1;
     const char *src = s2;
     char *us;
     int n2;
     /* Copy bytes, one at a time.  */
     while (n > 0) {
         n--;
         if ((*dst++ = *src++) == '\0') {
             /* If we get here, we found a null character at the end
                of s2, so use memset to put null bytes at the end of
                s1.  */
             us = dst;
             n2 = n;
             while (n2-- != 0)
                 *us++ = '\0';
             break;
         }
     }
     return s1;
 }

int main() {
  int length = __VERIFIER_nondet_int();
  int n = __VERIFIER_nondet_int();
  if (length < 1) {
      length = 1;
  }
  if (n < 1) {
      n = 1;
  }
  char* nondetArea = (char*) safe_malloc(n * sizeof(char));
  char* nondetString = (char*) safe_malloc(length * sizeof(char));
  nondetString[length-1] = '\0';
  cstrncpy(nondetArea, nondetString, n);
  free(nondetArea);
  free(nondetString);
  return 0;
}
