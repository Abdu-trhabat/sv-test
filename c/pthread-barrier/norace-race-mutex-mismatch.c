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
pthread_mutex_t mutex;

void* f1(void* ptr) {
    pthread_mutex_lock(&mutex);
    g = 1; // RACE! the other write is not protected by the mutex
    pthread_mutex_unlock(&mutex);
    pthread_barrier_wait(&barrier);
    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_barrier_init(&barrier, NULL, 2);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    g = 2; // RACE! written without holding the mutex, before the barrier
    pthread_barrier_wait(&barrier);

    return 0;
}
