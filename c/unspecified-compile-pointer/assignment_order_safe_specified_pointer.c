// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

#include <stdlib.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "assignment_order_unsafe_pointer1-1.c", 3, "reach_error"); }
struct int_cache {
    int cache;
};

int* f1(struct int_cache* p1) {
    p1->cache = 3;
    return malloc(sizeof(int));
}

int f2(struct int_cache* p2) {
    p2->cache = 5;
    return 7;
}


int f3(struct int_cache** p3) {
  struct int_cache g; // Local variable, lifetime ends when f3 returns
  *p3 = &g;
  return f2(*p3); //pointer aliasing is missing
}

int main() {
    struct int_cache g;
    struct int_cache* a = &g;
    struct int_cache* b = &g;
    g.cache = 0;

    // Left-hand side (f1) writes g.cache = 3
    // Right-hand side (f3) modifies b to point to a dead object
    // and writes 5 into that local g before it goes out of scope
    *f1(a) = f3(&b);
    // At this point:
    // - a still points to main's g (valid)
    // - b points to f3's local g, which no longer exists (dangling pointer)
    if (g.cache != 3) {reach_error();abort();}

    return g.cache;
}