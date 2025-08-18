// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "undetected_functioncall_withinarguments_local.c", 3, "reach_error"); }

int f1() {
  int a = 3;
  return a;
}

int f2() {
  int a = 1;
  return a;
}

int foo(int a) {
  return 1;
}

int main() {
  int c = foo(f1()+f2());
  if ((f1()+f2()) != 4){reach_error();abort();}
  return 0;
}