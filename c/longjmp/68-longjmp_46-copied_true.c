#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
// 
struct buf_struct {
   jmp_buf buf;
};

struct buf_struct env_buffer;
struct buf_struct buffer2;
int global = 0;

int main () {
   int val;
   __VERIFIER_assert(global == 0);

   if(setjmp(env_buffer.buf)) { //NOWARN
      return 0;
   }

   buffer2 = env_buffer;

   longjmp(buffer2.buf,42); //WARN

   return(0);
}
