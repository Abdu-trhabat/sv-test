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

extern void abort(void);
void reach_error() { assert(0); }

#define __VERIFIER_assert(cond) { if((cond)) { reach_error(); abort(); } } // expected: unreach-call is false

int g = 0;
pthread_once_t once = PTHREAD_ONCE_INIT;

void fun() {
  g++;
}


int main(void) {
  pthread_t id;

  pthread_once(&once, fun);
  pthread_once(&once, fun);

  __VERIFIER_assert(g==1); // g==1 is true here -> reach_error() is reached

  return 0;
}
