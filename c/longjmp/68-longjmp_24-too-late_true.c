#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf env_buffer;
int global = 0;

int fun() {
   int top;
   longjmp(env_buffer, 2); //WARN
}

int bar() {
   if(setjmp( env_buffer )) {
      return 8;
   }
}


int main () {
   int val;

   __VERIFIER_assert(global == 0);
   bar();
   fun();

   return(0);
}
