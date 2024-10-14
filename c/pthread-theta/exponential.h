// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2024 Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

#include <assert.h>
#include <pthread.h>
#include <stdatomic.h>

extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int expression) { if (!expression) { ERROR: {reach_error();abort();}}; return; }
extern void __VERIFIER_atomic_begin(void);
extern void __VERIFIER_atomic_end(void);

atomic_int y;
void *f1(void *arg) { // N threads with f1
  y = y + 1;
  return 0;
}
void *f2(void *arg) { // N threads with f2
  y = y * y;
  return 0;
}
int main() {
  int x, z, p, i;
  __VERIFIER_atomic_begin();
  pthread_t t;
  p = 0;
  while(p < N) {
    pthread_create(&t, 0, f1, 0);
    pthread_create(&t, 0, f2, 0);
    p++;
  }
  __VERIFIER_atomic_end();
  i = 0;
  while(i < N) {
    z = z + 2 * y; // the z % 2 == 0 predicate remains the same
    i++;
  }
  if(z % 2 == 0) { // z % 2 == 0 was initially true and have not been affected, so it is always true
    x = 0;
  } else {
    x = 1;
  }
  __VERIFIER_assert(x * y == 0); // x is always 0, so this always holds
  return 0;
}
