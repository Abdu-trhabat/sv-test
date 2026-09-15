// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic function pointer: the pointer object itself is atomic, so writing it
// is race-free.
#include <pthread.h>

void f1(void) {}
void f2(void) {}

void (* _Atomic fp)(void);

void *thr(void *arg) {
  fp = f1; // NORACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  fp = f2; // NORACE
  pthread_join(id, 0);
  return 0;
}
