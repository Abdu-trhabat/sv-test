// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic pointer to _Atomic int.
#include <pthread.h>

_Atomic int v;
_Atomic int * _Atomic p = &v;

void *thr(void *arg) {
  (void)arg;
  *p = 1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  *p = 2; // NORACE
  pthread_join(id, 0);
  return 0;
}
