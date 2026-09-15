// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Array of _Atomic structs, element assigned as a whole.
#include <pthread.h>

struct S { int f; };
_Atomic struct S a[4];
struct S other;

void *thr(void *arg) {
  (void)arg;
  a[1] = other; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  a[1] = other; // NORACE
  pthread_join(id, 0);
  return 0;
}
