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
   if(setjmp(env_buffer)) { //NOWARN
      return 0;
   }


   global = 2;
   longjmp(env_buffer, 2);
}


int main () {
   int val;
   jmp_buf env_buffer2;

   __VERIFIER_assert(global == 0);

   if(setjmp(env_buffer)) { //NOWARN
      return 0;
   }

   int n;

   {
      // Array of variably modified type
      int a[n];

      if(setjmp(env_buffer)) { // WARN
         return 0;
      }
   }

   {
      // Array of variably modified type
      int b[2][n];

      if(setjmp(env_buffer)) { // WARN
         return 0;
      }
   }

   fun();

   return(0);
}
