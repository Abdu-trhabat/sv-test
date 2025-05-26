#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_subexpression_condition_global.c", 3, "reach_error"); }

int a = 0;

int f() {
    a = 1;
    return 5;
}

int g() {
    a = 3;
    return 3;
}

int main() {
    if (f() + g() != 0) {
        if (a != 1 && a != 3) {reach_error();abort();}
        return a;
    }
    return 0;
}