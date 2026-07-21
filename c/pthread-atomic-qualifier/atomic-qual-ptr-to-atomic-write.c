// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Pointer to _Atomic: the pointer object itself is ordinary, so writing p races.
#include <pthread.h>

_Atomic int v1, v2;
_Atomic int *p;

void *thr(void *arg) {
  (void)arg;
  p = &v1; // RACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  p = &v2; // RACE
  pthread_join(id, 0);
  return 0;
}
