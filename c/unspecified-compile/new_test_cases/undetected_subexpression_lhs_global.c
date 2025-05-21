#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_subexpression_lhs_global.c", 3, "reach_error"); }

int arr[10];
int x = 0;

int* f() {
   x++;
   return arr;
}

//first write x, then read x
int main() {
  int* p = f();   // x == 1
  int index = x;    // index == 1
  *(p + index) = 3; // arr[1] = 3
  if(arr[1] != 3 || arr[0] == 3){reach_error();abort();}
  return 0;
}