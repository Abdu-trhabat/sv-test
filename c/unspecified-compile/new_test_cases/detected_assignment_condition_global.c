#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_assignment_condition_global.c", 3, "reach_error"); }

int a = 0;

int* f1() {
    a = 3;
    return malloc(sizeof(int));
}

int f2() {
    if (a==3){
      return 0;
    }else{
      return 42;
    }
}

int main() {
    //f1() is evaluated before f2(), a++ is called
    //f2() is evaluated before f1(), a-- is called
    if ((*f1() = f2()) != 0) {
        a--;
        if (a != 2) {reach_error();abort();}
    } else {
        a++;
        if (a != 4) {reach_error();abort();}
    }

    return 0;
}