/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

extern int __VERIFIER_nondet_int();

#include <pthread.h>

int global = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1, id2;

void *t1(void *arg) {
  pthread_mutex_lock(&mutex);
  pthread_mutex_unlock(&mutex);
  global++; // RACE!
  return NULL;
}

int main(void) {
  int maybe = __VERIFIER_nondet_int();
  if (maybe) {
    pthread_create(&id1, NULL, t1, NULL); // locking happens after thread creation!
    pthread_mutex_lock(&mutex);
  } else {
    pthread_mutex_lock(&mutex);
    pthread_create(&id2, NULL, t1, NULL);
  }
  global++; // RACE!
  pthread_mutex_unlock(&mutex);
  return 0;
}
