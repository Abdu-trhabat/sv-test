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
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1;

void *t1(void *arg) {
  pthread_mutex_lock(&mutex);
  pthread_mutex_unlock(&mutex);
  global++; // RACE!
  return NULL;
}

int main(void) {
  for (int i = 0; i < 3; i++) {
    if (i == 2) { 
      pthread_mutex_lock(&mutex);
    }
    pthread_create(&id1, NULL, t1, NULL); // Same TID created multiple times with different locksets
  }

  global++; // RACE!
  pthread_mutex_unlock(&mutex);
  return 0;
}
