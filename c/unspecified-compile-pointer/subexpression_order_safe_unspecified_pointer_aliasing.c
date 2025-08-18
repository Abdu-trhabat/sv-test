// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>
#include <stdbool.h>

extern void abort(void);
extern void __assert_fail(const char*, const char*, unsigned, const char*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_safe_unspecified_alias_writewrite1-1.c", 3, "reach_error"); }

extern unsigned int __VERIFIER_nondet_uint(void);
extern _Bool __VERIFIER_nondet_bool(void);

int f1(int *g) {
  *g = 8;   // write
  return 4; // value for '+'
}

int f2(int *g) {
  *g = 5;   // write
  return 7; // value for '+'
}

int main(void) {
  // buffer and setup
  int *buf = (int*)malloc(3 * sizeof(int));
  if (!buf) return 1;
  buf[0] = buf[1] = buf[2] = 3;

  // choose p as buf+1 or buf+2
  int *p = __VERIFIER_nondet_bool() ? (buf + 1) : (buf + 2);
  *p = 1;

  int *p2 = p - 1;
  int *p3 = p2 + 1; // p3 == p (alias)

  // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified
  // Both f1 and f2 write through the same alias (p == p3), so the final
  // stored value at *p depends on which operand is evaluated last.
  int r = f1(p) + f2(p3);

  // Observe the final content at the aliased location: it is either 8 or 5.
  // (The return value r is 11 regardless, but side effects on *p are unsequenced.)
  if (!(*p == 8 || *p == 5)) { reach_error(); abort(); }

  free(buf);
  return r;
}
