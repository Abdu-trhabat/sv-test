/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// The init function runs inside once in the child, but main writes g directly
#include <pthread.h>
#include <stdio.h>
extern int __VERIFIER_nondet_int();

int g;
pthread_once_t once = PTHREAD_ONCE_INIT;

void fun() {
  g = 1; // RACE!
}

void *t_fun(void *arg) {
  pthread_once(&once, fun);
  return NULL;
}

int main(void) {
  pthread_t id;

  pthread_create(&id, NULL, t_fun, NULL);
  g = 2; // RACE! unsynchronized with the child's once-protected write

  return 0;
}
