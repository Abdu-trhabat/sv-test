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
extern int __VERIFIER_nondet_int();

int g;

pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_once_t i_once = PTHREAD_ONCE_INIT;

void *t_other(void* arg) {
  g = 17; // RACE!
  return NULL;
}

void fun() {
  // Even though this is only called inside the once, the accesses in the new thread and the accesses here can happen in parallel
  pthread_t tid = pthread_create(&tid, NULL, t_other, NULL);
  g = 42; // RACE!
}

void *t_fun(void *arg) {
  pthread_once(&once, fun);
  return NULL;
}

int main(void) {
  pthread_t id;

  pthread_create(&id, NULL, t_fun, NULL);

  pthread_once(&once, fun);

  return 0;
}
