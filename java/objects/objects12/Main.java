/*
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
 *
 * SPDX-FileCopyrightText: 2025 Marvin Lazar and Falk Howar, TU Dortmund University
 * SPDX-FileCopyrightText: 2025 The SV-Benchmarks Community
 * SPDX-License-Identifier: MIT
 */

import org.sosy_lab.sv_benchmarks.Verifier;
import svcomp.objects.*;

public class Main {

  public static void main(String[] args) {
    // class-cast exceptions for type D
    A a1 = (A) Verifier.nondetObject(new Generator());
    A a2 = (A) Verifier.nondetObject(new Generator());
    // assertion violation reachable
    if (a1.getX() == a2.getX()) {
      assert false;
    }
  }
}
