/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// verdict: no-data-race false
// PARAM: --set ana.activated[+] threadJoins --set ana.activated[+] threadDescendants --set ana.activated[+] mustlockHistory --set ana.activated[+] descendantLockset --enable ana.sv-comp.functions
extern int __VERIFIER_nondet_int();

#include <pthread.h>

int global = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_t id1;

void *t1(void *arg) {
  pthread_mutex_lock(&mutex);
  global++; // RACE!
  return NULL;
}

int main(void) {
  pthread_mutex_lock(&mutex);
  pthread_create(&id1, NULL, t1, NULL);
  int maybe = __VERIFIER_nondet_int();
  if (maybe) {
    pthread_mutex_unlock(&mutex);
  }
  global++; // RACE!
  return 0;
}
