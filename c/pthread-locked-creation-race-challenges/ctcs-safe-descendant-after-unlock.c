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
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER, mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1, id2, id3;

void *t1(void *arg) {
  pthread_mutex_lock(&mutex);
  global++; // NORACE
  pthread_mutex_unlock(&mutex);
  return NULL;
}

void *t3(void *arg) {
  global++; // NORACE
  return NULL;
}

void *t2(void *arg) { // t2 is protected by mutex locked in main thread
  pthread_mutex_lock(&mutex);
  pthread_create(&id3, NULL, t3, NULL);
  pthread_mutex_unlock(&mutex);
  pthread_mutex_lock(&mutex); // irrelevant lock/unlock
  pthread_mutex_unlock(&mutex);
  return NULL;
}

int main(void) {
  pthread_create(&id1, NULL, t1, NULL);
  pthread_mutex_lock(&mutex); // lock and unlock mutex before creation
  pthread_mutex_unlock(&mutex);
  pthread_mutex_lock(&mutex);
  pthread_mutex_lock(&mutex1);
  pthread_create(&id2, NULL, t2, NULL);
  pthread_mutex_unlock(&mutex1); // unlock unrelated mutex before joining
  pthread_join(id3, NULL);
  pthread_mutex_unlock(&mutex);
  return 0;
}
