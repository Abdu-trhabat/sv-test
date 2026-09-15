// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic member of a nested struct.
#include <pthread.h>

struct I { _Atomic int f; };
struct S { struct I i; };
struct S s;

void *thr(void *arg) {
  (void)arg;
  s.i.f = 1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  s.i.f = 2; // NORACE
  pthread_join(id, 0);
  return 0;
}
