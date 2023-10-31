#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf env_buffer;

int fun() {
  int r;
  __goblint_assume(0 <= r);
  __goblint_assume(r <= 10);
  longjmp(env_buffer, r); //WARN
}


int main () {
  int val;
  if (val = setjmp( env_buffer )) {
    __VERIFIER_assert(1 <= val);
    __VERIFIER_assert(val <= 10);
    return 8;
  }

  fun();

  return(0);
}
