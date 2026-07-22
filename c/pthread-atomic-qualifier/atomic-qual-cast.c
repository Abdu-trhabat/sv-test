// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// _Atomic in a cast type name: casting a value to an atomic scalar type must
// not change the value.
#include <pthread.h>

extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

void *thr(void *arg) {
  if ((int)(_Atomic int)41 != 41) reach_error(); // UNREACH
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  if ((int)(_Atomic int)42 != 42) reach_error(); // UNREACH
  pthread_join(id, 0);
  return 0;
}
