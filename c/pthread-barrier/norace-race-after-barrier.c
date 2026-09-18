/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

extern int __VERIFIER_nondet_int();

int g;

pthread_barrier_t barrier;

void* f1(void* ptr) {
    pthread_barrier_wait(&barrier);
    g = 1; // RACE!
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_barrier_init(&barrier, NULL, 2);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    pthread_barrier_wait(&barrier);
    g = 2; // RACE! both threads continue past the barrier concurrently

    return 0;
}
