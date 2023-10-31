#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include <setjmp.h>

jmp_buf my_jump_buffer;

int foo(int count)
{
    __VERIFIER_assert(count >= 0 && count <= 5);
    longjmp(my_jump_buffer, -10);
    return 8;
}

int main(void)
{
    volatile int count = 0;
    int x = setjmp(my_jump_buffer);
    if( x == -10) {
        return -1;
    }
    if( x > 0) {
    }

    foo(count);
}
