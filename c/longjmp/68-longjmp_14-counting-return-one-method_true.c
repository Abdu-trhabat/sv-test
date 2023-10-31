#include <assert.h>
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#include <setjmp.h>

jmp_buf my_jump_buffer;

int main(void)
{
    int count = setjmp(my_jump_buffer);
    if (count < 5) {
        __VERIFIER_assert(count >= 0 && count < 5);
        longjmp(my_jump_buffer, count + 1);
    }
    __VERIFIER_assert(count == 5);
}
