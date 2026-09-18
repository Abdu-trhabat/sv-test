/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// pthread_once object is passed as a pointer (and it may change)
#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>
extern int __VERIFIER_nondet_int();

int* g;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_mutex_t mtx;

void init0() {
  g = malloc(sizeof(int));
}


void* thread(void* arg) {
  pthread_once(&once, init0);

  pthread_mutex_lock(&mtx);
  if(g == NULL) {
    // Will not happen!
    exit(42);
  }
  *g = 4711; //NORACE
  pthread_mutex_unlock(&mtx);

  return NULL;
}

int main(void) {
  pthread_t id, id2;
  int top = __VERIFIER_nondet_int();

  pthread_create(&id, NULL, thread, NULL);
  pthread_create(&id2, NULL, thread, NULL);

  pthread_join(id, NULL);
  pthread_join(id2, NULL);

  *g = 47; //NORACE

  return 0;
}
