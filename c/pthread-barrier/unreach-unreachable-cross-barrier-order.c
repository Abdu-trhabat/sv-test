/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// This example exploits information on one barrier to become more precise for the other. Inception!
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

pthread_barrier_t barrier1;
pthread_barrier_t barrier2;
pthread_mutex_t mutex;

void* f1(void* ptr) {
    pthread_barrier_wait(&barrier1);
    pthread_barrier_wait(&barrier2);

    return NULL;
}

int main(int argc, char const *argv[])
{
    int top = __VERIFIER_nondet_int();
    int i = 0;

    pthread_barrier_init(&barrier1, NULL, 2);
    pthread_barrier_init(&barrier2, NULL, 2);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    if(top == 2) {
        pthread_barrier_wait(&barrier1);
    } else if (top == 3) {
        // Here, we cleverly exploit the additional MHP information, that for f1 to call wait on barrier2,
        // it must have seen a call to wait by main on barrier1.
        pthread_barrier_wait(&barrier2);
        i = 2;
    }

    __VERIFIER_assert(i == 0);

    return 0;
}
