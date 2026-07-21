// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Array of _Atomic pointers.
#include <pthread.h>

int v1, v2;
int * _Atomic a[4];

void *thr(void *arg) {
  (void)arg;
  a[1] = &v1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  a[1] = &v2; // NORACE
  pthread_join(id, 0);
  return 0;
}
