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

pthread_once_t once1;
int g = 0;

void increment() {
  g++;
}

int main(void) {
  pthread_once(&once1, increment);

  if(once1 != 0) {
    __VERIFIER_assert(1);
  }

  // On GCC prints 2
  printf("once1 = %d\n", once1);

  return 0;
}
