// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2024 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

import org.sosy_lab.sv_benchmarks.Verifier;

public class Main {
  public static void main(String[] args) {
    double d1 = Verifier.nondetDouble();
    double d2 = Verifier.nondetDouble();
    if (d1 < 0 || d1 >= Math.PI / 4 || d2 < 0 || d2 >= Math.PI / 4) {
      return;
    }
    JPFBenchmark.benchmark03(d1, d2);
  }
}
