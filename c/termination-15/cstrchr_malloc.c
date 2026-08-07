/*
 * Date: 28.09.2015
 * Author: Thomas Ströder
 */
#include <stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

char *(cstrchr)(const char *s, int c)
 {
     /* Scan s for the character.  When this loop is finished,
        s will either point to the end of the string or the
        character we were looking for.  */
     while (*s != '\0' && *s != (char)c)
         s++;
     return ( (*s == c) ? (char *) s : 0 );
 }

int main() {
    int length = __VERIFIER_nondet_int();
    if (length < 1) {
        length = 1;
    }
    char* nondetString = (char*) safe_malloc(length * sizeof(char));
    nondetString[length-1] = '\0';
    cstrchr(nondetString,__VERIFIER_nondet_int());
    free(nondetString);
    return 0;
}


