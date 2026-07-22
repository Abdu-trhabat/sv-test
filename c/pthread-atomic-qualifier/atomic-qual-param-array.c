// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic array function parameter: a is ordinary, but an array parameter
// decays to a pointer rather than copying the array, so writing through the
// _Atomic int * that sink() receives reaches a's storage directly and is
// atomic regardless of how a was declared.
#include <pthread.h>

int a[4];

void sink(_Atomic int v[4], int val) { v[1] = val; }

void *thr(void *arg) {
  sink((_Atomic int *)a, 1); // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  sink((_Atomic int *)a, 2); // NORACE
  pthread_join(id, 0);
  return 0;
}
