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

int limit = N;

void *f1() { // N threads with f1
    int l;
    __VERIFIER_atomic_begin();
    l = limit;
    __VERIFIER_atomic_end();
    __VERIFIER_atomic_begin();
    limit = l + 1; // may overwrite the increment of another thread
    __VERIFIER_atomic_end();
    return 0;
}

void *f2() {
    int i, bound;
    __VERIFIER_atomic_begin();
    bound = limit; // limit can be anything between N and 2N
    __VERIFIER_atomic_end();
    for(i = 0; i < bound; i++);
    __VERIFIER_assert(i != 2 * N); // i can be anything between N and 2N, including 2N
    return 0;
}

int main() {
    pthread_t threads[N];
    for(int i = 0; i < N; ++i) {
        pthread_create(&threads[i], 0, f1, 0);
    }
    pthread_t t;
    pthread_create(&t, 0, f2, 0);
        
    for(int i = 0; i < N; ++i) {
        pthread_join(threads[i], 0);
    }
    pthread_join(t, 0);
    return 0;
}
