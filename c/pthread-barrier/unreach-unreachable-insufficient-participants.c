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
    pthread_barrier_wait(&barrier);

    // This should not be reached as either main calls wait or the other thread is created
    // -> In the concrete, there never are three threads calling wait

    return NULL;
}

int main(int argc, char const *argv[])
{
    int top = __VERIFIER_nondet_int();
    int i = 0;

    pthread_barrier_init(&barrier, NULL, 3);

    pthread_t t1;
    pthread_create(&t1,NULL,f1,NULL);

    if(top) {
        pthread_barrier_wait(&barrier);
        reach_error();// Unreachable
        i = 1;
    } else {
        pthread_t t2;
        pthread_create(&t2,NULL,f1,NULL);
    }


    __VERIFIER_assert(i == 0);


    return 0;
}
