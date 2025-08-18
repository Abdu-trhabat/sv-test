// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_assignment_order_unsafe_global1-1.c", 3, "reach_error"); }

int g = 0;

int* f1() {
  g = 2;
  return malloc(sizeof(int));
}

int f2() {
  g = 4;
  return 7;
}

int main() {
  int* p = f1();   // g = 2
  int val = f2();  // g = 4
  *p = val;
  if (g != 4) {reach_error();abort();} //always first f1() then f2()
  return 0;
}