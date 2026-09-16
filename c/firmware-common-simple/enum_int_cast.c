// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

void reach_error() {}

typedef enum { VALUE = 0x8000000000000000 } enum_t;

enum_t foo() { return VALUE; }

int main() {
  if (!(foo() == 0x8000000000000000)) {
    reach_error();
    return 1;
  }
  return 0;
}