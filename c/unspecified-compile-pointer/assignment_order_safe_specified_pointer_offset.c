// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>
#include <stdbool.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

void reach_error() {
  __assert_fail("0", "assignment_order_safe_specified_pointer_offset.c", 3, "reach_error");
}

extern _Bool __VERIFIER_nondet_bool(void);

int f1(int *g) {
  *g = 8;
  return 4;
}

int f2(int *g) {
  *g = 5;
  return 7;
}

int main(void) {
  static int buf[5] = {1, 2, 3, 4, 5};

  int *p = __VERIFIER_nondet_bool() ? (buf + 2) : (buf + 4);
  *p = 1;

  int *p2 = p - 1;  // points to buf[1] or buf[3]
  int *p3 = p2 + 1; // points to buf[2] or buf[4]

  int r = f1(p) + f2(p2);

  if (buf[2] != 8 && buf[4] != 8 && buf[1] != 5 && buf[3] != 5) {
    reach_error();
    abort();
  }

  return r;
}
