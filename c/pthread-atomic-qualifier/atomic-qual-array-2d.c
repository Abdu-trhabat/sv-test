// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic as the element type of a 2-D array.
#include <pthread.h>

_Atomic int a[2][2];

void *thr(void *arg) {
  (void)arg;
  a[1][1] = 1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  a[1][1] = 2; // NORACE
  pthread_join(id, 0);
  return 0;
}
