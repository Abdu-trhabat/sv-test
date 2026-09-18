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

int h;

pthread_barrier_t barrier;
pthread_mutex_t mutex;

void* f1(void* ptr) {
    h = 3; // RACE!
    pthread_barrier_wait(&barrier);

    return NULL;
}

int main(int argc, char const *argv[])
{
    int top = __VERIFIER_nondet_int();
    int i = 0;

    pthread_barrier_init(&barrier, NULL, 2);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    h = 5; // RACE!

    pthread_barrier_wait(&barrier);

    return 0;
}
