// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Parenthesised _Atomic(int) inside sizeof: the qualifier must not change the
// size of the object.
#include <pthread.h>

extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }

_Atomic int x;

void *thr(void *arg) {
  if (sizeof(_Atomic(int)) != sizeof(int)) reach_error(); // UNREACH
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  if (sizeof(x) != sizeof(int)) reach_error(); // UNREACH
  pthread_join(id, 0);
  return 0;
}
