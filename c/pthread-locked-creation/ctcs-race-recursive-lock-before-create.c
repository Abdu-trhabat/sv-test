/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#define _XOPEN_SOURCE 700
#include <pthread.h>

int global = 0;
pthread_mutex_t mutex;
pthread_t id1, id2;

void *t1(void *arg) {
  pthread_mutex_lock(&mutex);
  global++; // RACE!
  pthread_mutex_unlock(&mutex);
  return NULL;
}

void *t2(void *arg) {
  global++; // RACE!
  return NULL;
}

int main(void) {
  pthread_mutexattr_t attr;
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
  pthread_mutex_init(&mutex, &attr);

  pthread_create(&id1, NULL, t1, NULL);
  pthread_mutex_lock(&mutex);
  pthread_mutex_lock(&mutex);
  pthread_create(&id2, NULL, t2, NULL);
  pthread_mutex_unlock(&mutex);
  pthread_mutex_unlock(&mutex);
  pthread_join(id2, NULL);
  return 0;
}
