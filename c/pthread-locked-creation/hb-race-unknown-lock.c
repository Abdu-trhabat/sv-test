/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#include <pthread.h>

int __VERIFIER_nondet_int();

int global = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER, mutex_alt = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1;

void *t1(void *arg) {
  pthread_mutex_t *mutex_ref = &mutex_alt;
  int maybe = __VERIFIER_nondet_int();
  if (maybe) {
    mutex_ref = &mutex;
  }
  pthread_mutex_lock(mutex_ref); // lock of ambiguous mutex
  pthread_mutex_unlock(mutex_ref);
  global++; // RACE!
  return NULL;
}

int main(void) {
  pthread_mutex_lock(&mutex);
  pthread_create(&id1, NULL, t1, NULL);
  global++; // RACE!
  pthread_mutex_unlock(&mutex);
  return 0;
}
