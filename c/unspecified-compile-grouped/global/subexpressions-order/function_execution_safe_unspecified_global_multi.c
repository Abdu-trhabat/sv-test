// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_subexpression_multi_global.c", 3, "reach_error"); }

int x = 0;
int y = 0;

int f() {
  x=1;
  y=2;
  return x;
}

int g() {
  y=3;
  return x;
}

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  // f() -> x -> g(): r = 0 + 1 + 1 = 2
  // x -> f() -> g(): r = 1 + 1 + 1 = 3
  // g() -> f() -> x: r = 0 + 1 + 1 = 2
  // g() -> x -> f(): r = 0 + 0 + 1 = 1
  int r = (f() + x) + g();
  if(r != 1 && r != 2 && r!= 3){reach_error();abort();}
  return 0;
}