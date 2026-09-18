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


int g;

pthread_barrier_t barrier;
pthread_mutex_t mutex;

void* thread_func(void* arg) {
    // Some initialization code
    pthread_barrier_wait(&barrier);

    pthread_mutex_lock(&mutex);
    g = 5; //NORACE
    pthread_mutex_unlock(&mutex);

    return NULL;
}



int main(int argc, char const *argv[])
{
    pthread_t worker1, worker2;

    pthread_barrier_init(&barrier, NULL, 3);

    pthread_create(&worker1, NULL, thread_func, NULL);
    pthread_create(&worker2, NULL, thread_func, NULL);

    g = 8; //NORACE

    pthread_barrier_wait(&barrier);
    return 0;
}
