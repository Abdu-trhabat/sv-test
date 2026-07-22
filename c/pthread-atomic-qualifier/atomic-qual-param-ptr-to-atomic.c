// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Pointer-to-_Atomic function parameter: x is ordinary, but every access to it
// goes through sink()'s _Atomic int * parameter (fed by an explicit cast at
// the call site, since C does not allow an implicit int * to _Atomic int *
// conversion), so the write inside sink() is atomic regardless of how x was
// declared.
#include <pthread.h>

int x;

void sink(_Atomic int *v, int val) { *v = val; }

void *thr(void *arg) {
  sink((_Atomic int *)&x, 1); // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  sink((_Atomic int *)&x, 2); // NORACE
  pthread_join(id, 0);
  return 0;
}
