/* 
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
 *
 * SPDX-FileCopyrightText: 2025 AMarvin Lazar and Falk Howar, TU Dortmund University
 * SPDX-FileCopyrightText: 2025 The SV-Benchmarks Community
 * SPDX-License-Identifier: MIT
 */

import org.sosy_lab.sv_benchmarks.Verifier;
import svcomp.objects.*;

public class Main {

  public static void main(String[] args) {
    Object o1 = Verifier.nondetObject();
    Object o2 = Verifier.nondetObject(); 
    // assertion violation not reachable
    if (o1 != null && o2 != null) {
      if (o1 == o2) {
        assert false;
      }
    }
  }
}
