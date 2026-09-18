/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

extern void abort();
void reach_error() { assert(0); }

#define __VERIFIER_assert(cond) { if(!(cond)) { reach_error(); abort(); } }
extern int __VERIFIER_nondet_int();

int g;

pthread_barrier_t barrier;

void* f1(void* ptr) {
    // This thread never calls wait, so it does not contribute to the barrier
    g = 1;
    return NULL;
}

int main(int argc, char const *argv[])
{
    int i = 0;

    pthread_barrier_init(&barrier, NULL, 2);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    pthread_barrier_wait(&barrier);
    // Only main waits while the barrier needs 2 -> it blocks forever
    reach_error(); // unreachable
    i = 1;

    __VERIFIER_assert(i == 0);

    return 0;
}
