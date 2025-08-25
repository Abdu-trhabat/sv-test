// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_nested_unsafe_unspecified_global1-2.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 3;
  return 0;
}

int f2() {
  g = 5;
  return 0;
}

int f3() {
  g = 7;
  return 0;
}

int f4() {
  g = 9;
  return 0;
}

int fun(int a, int b) {
  return a + b;
}

int main() {
  int (*pf[1]) (int x, int y);
  pf[0] = fun;
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified
  // This example is directly taken from section §6.5.2.2.10 Function calls of the C11 standard
  // f1() to f4() may be evaluated in any order, only the function pointed to by pf[f1()] is called last.
  (*pf[f1()]) (f2(), f3() + f4());
  // g is either 3 or 5 or 7 or 9, depending on which function is evaluated last before fun()
  if (g == 5) {reach_error();abort();}
  return 0;
}