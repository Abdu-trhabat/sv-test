// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_safe_specified_pointer_malloc.c", 3, "reach_error"); }


int* f1(int * g1) {
  *g1 = 3;
  return malloc(sizeof(int));
}

int f2(int * p1) {
  *p1 = 5;
  return 7;
}

int main() {
  int * g = malloc(sizeof(int));
  int * p = malloc(sizeof(int));
  *g = 0;
  *p = 0;

  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified
  *f1(g) = f2(g);
  if (*g != 3 && *p != 5) {reach_error();abort();}
  return 0;
}