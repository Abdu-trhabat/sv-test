// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic in a pointer cast type name: x itself is ordinary, but every access
// to it goes through a pointer explicitly cast to _Atomic int *, so the access
// is atomic regardless of how x was declared.
#include <pthread.h>

int x;

void *thr(void *arg) {
  *(_Atomic int *)&x = 1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  *(_Atomic int *)&x = 2; // NORACE
  pthread_join(id, 0);
  return 0;
}
