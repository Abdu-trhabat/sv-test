// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_nested_unsafe_global1-1.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 3;
  return 0;
}

int f2() {
  g = 5;
  return 0;
}

int fun1(int a) {
  g = 9;
  return a;
}

int fun2(int a) {
  g = 1;
  return a;
}

int main() {
  int (*pf[2]) (int x);
  pf[0] = fun1;
  pf[1] = fun2;
  (*pf[f1()]) (f2());
  if (g != 9 && g != 1) {reach_error();abort();}
  return 0;
}