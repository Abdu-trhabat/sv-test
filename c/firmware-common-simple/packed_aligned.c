// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}
void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

typedef struct {
  char c;
  int i;
} __attribute__((packed)) packed_t;

typedef struct {
  char c;
  int i;
} __attribute__((aligned(8))) aligned_t;

typedef struct {
  char c;
  packed_t i __attribute__((aligned(8)));
} packed_aligned_t;

int main() {
  __VERIFIER_assert(sizeof(packed_t) == 5);
  __VERIFIER_assert(sizeof(aligned_t) == 8);
  __VERIFIER_assert(sizeof(packed_aligned_t) == 16);
  return 0;
}