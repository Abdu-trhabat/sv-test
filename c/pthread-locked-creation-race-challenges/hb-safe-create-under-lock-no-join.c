/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// verdict: no-data-race true
// PARAM: --set ana.activated[+] threadJoins --set ana.activated[+] threadDescendants --set ana.activated[+] mustlockHistory --set ana.activated[+] descendantLockset
#include <pthread.h>

int global = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1, id2;

void *t2(void *arg) {
  global++; // NORACE
  return NULL;
}

void *t1(void *arg) {
  pthread_mutex_lock(&mutex);
  // everything from here must happen after unlock in main
  pthread_create(&id2, NULL, t2, NULL);
  pthread_mutex_unlock(&mutex);
  return NULL;
}

int main(void) {
  pthread_mutex_lock(&mutex);
  pthread_create(&id1, NULL, t1, NULL);
  global++; // NORACE
  pthread_mutex_unlock(&mutex);
  return 0;
}
