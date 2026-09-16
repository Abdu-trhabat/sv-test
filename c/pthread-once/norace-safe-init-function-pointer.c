/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// Function to be called by once is passed as a pointer
#include <pthread.h>
#include <stdio.h>
extern int __VERIFIER_nondet_int();

int g;
void init0();

void* initp = &init0;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void init0() {
  g++; //NORACE
}


void init1() {
  g++; //NORACE
}


void* thread(void* arg) {
  pthread_once(&once, initp);
  return NULL;
}

int main(void) {
  pthread_t id;
  int top = __VERIFIER_nondet_int();

  if(top) { initp = &init1; }

  pthread_create(&id, NULL, thread, NULL);

  pthread_once(&once, initp);

  return 0;
}
