// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2024 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

public class Main {

  public static void main(String[] args) {
    MathSin sin = new MathSin();
    assert sin.mysin(0.0) == 0.0;
  }
}
