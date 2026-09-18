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
pthread_once_t once = PTHREAD_ONCE_INIT;

void increment() {
  g++;
}

int main(void) {
  pthread_once(&once, increment);
  pthread_once(&once, increment); // second call is a no-op

  __VERIFIER_assert(g != 2); // g is 1, never 2

  return 0;
}
