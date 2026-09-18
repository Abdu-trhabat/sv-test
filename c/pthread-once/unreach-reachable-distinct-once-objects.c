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

extern void abort();
void reach_error() { assert(0); }

#define __VERIFIER_assert(cond) { if(!(cond)) { reach_error(); abort(); } }

int g = 0;
pthread_once_t once1 = PTHREAD_ONCE_INIT;
pthread_once_t once2 = PTHREAD_ONCE_INIT;

void increment() {
  g++;
}

int main(void) {
  pthread_once(&once1, increment);
  pthread_once(&once2, increment); // distinct object -> runs again

  __VERIFIER_assert(g == 1); // wrong: g is 2 here, so reach_error is reached

  return 0;
}
