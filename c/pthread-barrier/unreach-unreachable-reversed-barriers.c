/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// In this example, the barriers "deadlock"
#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

extern void abort();
void reach_error() { assert(0); }

#define __VERIFIER_assert(cond) { if(!(cond)) { reach_error(); abort(); } }
extern int __VERIFIER_nondet_int();

int g;
int h;

pthread_barrier_t barrier;
pthread_barrier_t barrier2;
pthread_mutex_t mutex;

void* f1(void* ptr) {
    g = 2;
    pthread_barrier_wait(&barrier);
    pthread_barrier_wait(&barrier2);

    return NULL;
}

int main(int argc, char const *argv[])
{
    int top = __VERIFIER_nondet_int();
    int i = 0;

    pthread_barrier_init(&barrier, NULL, 2);
    pthread_barrier_init(&barrier2, NULL, 2);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    if(top) {
        pthread_barrier_wait(&barrier2);
        pthread_barrier_wait(&barrier);
        i = 2;
    }

    __VERIFIER_assert(i == 0);



    return 0;
}
