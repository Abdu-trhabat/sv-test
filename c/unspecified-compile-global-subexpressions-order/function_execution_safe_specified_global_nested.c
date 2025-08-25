// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_safe_specified_global_nested.c", 3, "reach_error"); }

int g = 0;

int f1(int a) {
  return a;
}

int f2() {
  g++;
  return 7;
}

int f3(int a) {
  f2();
  return g;
}

int main() {
  int x = f2();
  int y = f1(f3(g));
  int c = x + y;//no unsequenced side effects
  if(c != 9){reach_error();abort();}
  return 0;
}


