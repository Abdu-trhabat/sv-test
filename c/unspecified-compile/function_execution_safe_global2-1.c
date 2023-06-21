// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_safe_global2-1.c", 3, "reach_error"); }

int g = 0;

int f1() {
  g = 1;
  return 0;
}

int f2() {
  g = 2;
  return 0;
}

int main() {
  // Evaluation of ||, && and some others is ordered from left to right (dependency ordered, so if the left operand is false, the right is evaluated). (C11 §5.1.2.4)
  f1() || f2();
  // g is always 2, as f2() is evaluated last
  if (g != 2) {reach_error();abort();}
  return 0;
}