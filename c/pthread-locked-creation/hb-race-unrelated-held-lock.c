/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#include <pthread.h>

int global = 0;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER, mutex2 = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1;

void *t1(void *arg) {
  pthread_mutex_lock(&mutex1);
  pthread_mutex_unlock(&mutex1);
  global++; // RACE!
  return NULL;
}

int main(void) {
  pthread_mutex_lock(&mutex1);
  pthread_mutex_lock(&mutex2);
  pthread_create(&id1, NULL, t1, NULL);
  pthread_mutex_unlock(&mutex1);
  global++; // RACE!
  return 0;
}
