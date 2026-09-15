// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Parenthesised _Atomic(T) inside a typedef.
#include <pthread.h>

typedef _Atomic(int) at_t;
at_t x;

void *thr(void *arg) {
  (void)arg;
  x = 1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  x = 2; // NORACE
  pthread_join(id, 0);
  return 0;
}
