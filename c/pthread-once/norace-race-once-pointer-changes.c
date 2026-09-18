/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// pthread_once object is passed as a pointer (and it may change)
#include <pthread.h>
#include <stdio.h>
extern int __VERIFIER_nondet_int();

int g;
void init0();

pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_once_t* optr = &once;
pthread_once_t once1 = PTHREAD_ONCE_INIT;

void init0() {
  g++; //RACE!
}


void* thread(void* arg) {
  pthread_once(&once, init0);
  return NULL;
}

int main(void) {
  pthread_t id;
  int top = __VERIFIER_nondet_int();

  pthread_create(&id, NULL, thread, NULL);
  if(top) { optr = &once1; }
  pthread_once(optr, init0);

  return 0;
}
