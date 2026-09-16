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

int g;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_mutex_t mtx;

void increment() {
  g++;
}

int main(void) {
  pthread_once_t* optr5;
  pthread_once_t* optr;

  for(int i = 0; i < 10; i++) {
    optr = malloc(sizeof(pthread_once_t));
    // PTHREAD_ONCE_INIT on OS X is an aggregate initializer
    // #define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
    // so there, this assignment is not valid.
    *optr = PTHREAD_ONCE_INIT;

    if(i == 5) {
      optr5 = optr;
    }
  }

  pthread_once(optr, increment);
  pthread_once(optr5, increment);

  if(g == 2) {
    __VERIFIER_assert(1);
  }


  return 0;
}
