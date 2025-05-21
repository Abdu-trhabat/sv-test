#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_subexpression_rr_global.c", 3, "reach_error"); }

int x = 0;

int f() {
  return x;
}

int g() {
  if(x==0){
    return 1;
  }else{
    return 2;
  }
}

int main() {
  // Potential unsequenced write-write conflict on 'x'
  int y = f() + g(); //Declaration
  if(x != 0){reach_error();abort();}
  return 0;
}