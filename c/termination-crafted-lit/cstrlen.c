/*
 * Date: 17.12.2013
 * Author: Thomas Ströder
 */
typedef long unsigned int size_t;

void * __attribute__((__cdecl__)) malloc (size_t __size) ;

extern void abort(void);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

extern int __VERIFIER_nondet_int(void);

/* Returns some null-terminated string. */
char* build_nondet_String(void) {
    int length = __VERIFIER_nondet_int();
    if (length < 1) {
        length = 1;
    }
    char* nondetString = (char*) safe_malloc(length * sizeof(char));
    nondetString[length-1] = '\0';
    return nondetString;
}





int (cstrlen)(const char *s)
 {
     const char *p = s;
     /* Loop over the data in s.  */
     while (*p != '\0')
         p++;
     return (int)(p - s);
 }

int main() {
    return cstrlen(build_nondet_String());
}


