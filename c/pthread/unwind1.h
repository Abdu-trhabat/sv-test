// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2024 Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

#include <assert.h>
#include <pthread.h>

extern int __VERIFIER_nondet_int();
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int expression) { if (!expression) { ERROR: {reach_error();abort();}}; return; }
extern void __VERIFIER_atomic_begin(void);
extern void __VERIFIER_atomic_end(void);

int limit;

void *f1() {
    if(__VERIFIER_nondet_int()) { // non-deterministic branching
        __VERIFIER_atomic_begin();
        limit = N;
        __VERIFIER_atomic_end();
    } else {
        __VERIFIER_atomic_begin();
        limit = N + 1;
        __VERIFIER_atomic_end();
    }
    return 0;
}

void *f2() {
    int i, bound;
    __VERIFIER_atomic_begin();
    bound = limit;
    __VERIFIER_atomic_end();
    for (i = 0; i < bound; i++) ; // loop bound is non-deterministic due to unknown branching in the other thread
    __VERIFIER_assert(i <= N);
    return 0;
}

int main() {
    pthread_t t1, t2;
    pthread_create(&t1, 0, f1, 0);
    pthread_create(&t2, 0, f2, 0);
    pthread_join(t1, 0);
    pthread_join(t2, 0);
    return 0;
}
