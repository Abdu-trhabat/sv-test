// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_unsafe_struct1-1.c", 3, "reach_error"); }

struct int_cache {
  int cache;
};

int* f1(struct int_cache g) {
  g.cache = 3;
  return malloc(sizeof(int));
}

int f2(struct int_cache gg) {
  gg.cache = 5;
  return 7;
}

int f3(struct int_cache notg) {
  struct int_cache g;
  g.cache = 0;
  return f2(g);
}

int main() {
  struct int_cache g;
  g.cache = 0;
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified 
  *f1(g) = f3(g);
  // g is either 3 or 5, depending on which function is evaluated last
  if (g.cache == 3) {reach_error();abort();}
  return 0;
}