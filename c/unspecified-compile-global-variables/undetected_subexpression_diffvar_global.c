// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_subexpression_diffvar_global.c", 3, "reach_error"); }

int x = 0;
int y = 0;

int f() {
  x = 1;
  return 0;
}

int g() {
  int a = y;
  return a;
}

int main() {
  int result = f() + g(); // f() writes x, g() reads y, no conflict
  if(x != 1 && y !=0){reach_error();abort();}
  return 0;
}