// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic struct assigned as a whole (member access on an atomic struct would be
// undefined per C11 6.5.2.3p5, so the whole object is assigned instead).
#include <pthread.h>

struct S { int f; };
_Atomic struct S s;
struct S other;

void *thr(void *arg) {
  (void)arg;
  s = other; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  s = other; // NORACE
  pthread_join(id, 0);
  return 0;
}
