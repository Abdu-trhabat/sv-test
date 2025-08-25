// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_unsafe_unspecified_global1-2.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 2 * g;
  return 5;
}

int f2() {
  g++;
  return 7;
}

int h() {
  return f1() + f2();
}

int main() {
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  int c = h() + h();
  // g may have any value between 3 and 6 (but 3 or 6 are more likely than 4 or 5), depending on evaluation order
  // Expecting left to right ordering we get g == 3
  // Expecting right to left ordering consistently we get g == 6
  if (g == 3) {reach_error();abort();}
  return 0;
} 