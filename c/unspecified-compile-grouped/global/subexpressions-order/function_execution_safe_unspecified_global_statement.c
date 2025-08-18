// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "detected_subexpression_statement_global.c", 3, "reach_error"); }

int x = 0;

int f() {
  x = 1;
  return 0;
}

int g() {
  x = 2;
  return 0;
}

int main() {
  // Potential unsequenced write-write conflict on 'x'
  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour states that the order in which subexpressions are evaluated is not specified (with some exceptions, + not being one)
  f() + g();//CExpressionStatement
  if( x != 1 && x != 2){reach_error();abort();}
  return 0;
}