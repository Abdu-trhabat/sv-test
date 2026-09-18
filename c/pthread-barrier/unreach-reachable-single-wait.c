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

int main(int argc, char const *argv[])
{
    int i = 0;

    // A barrier with a count of 1 never blocks
    pthread_barrier_init(&barrier, NULL, 1);

    pthread_barrier_wait(&barrier);
    // Reached, since a single waiter already meets the count
    i = 1;

    __VERIFIER_assert(i == 0);

    return 0;
}
