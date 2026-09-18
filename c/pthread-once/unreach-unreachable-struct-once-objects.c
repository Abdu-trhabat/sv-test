/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

extern void abort();
void reach_error() { assert(0); }

#define __VERIFIER_assert(cond) { if(!(cond)) { reach_error(); abort(); } }

struct {
  pthread_once_t once1;
  pthread_once_t once2;
} onces = {PTHREAD_ONCE_INIT, PTHREAD_ONCE_INIT};

int g;
pthread_mutex_t mtx;

void increment() {
  g++;
}

int main(void) {

  pthread_once(&onces.once1, increment);
  pthread_once(&onces.once2, increment);

  __VERIFIER_assert(g == 2);

  return 0;
}
