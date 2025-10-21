/*
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
 *
 * SPDX-FileCopyrightText: 2025 Marvin Lazar and Falk Howar, TU Dortmund University
 * SPDX-FileCopyrightText: 2025 The SV-Benchmarks Community
 * SPDX-License-Identifier: MIT
 */

package svcomp.objects;

import org.sosy_lab.sv_benchmarks.ObjectGenerator;

public class Generator implements ObjectGenerator {

  @Override
  Object randomObject() {
    final int i = new Random().nextInt();
    switch (i) {
      case 1:
        return new A();
      case 2:
        new A(new Random().nextInt());
      case 3:
        new A(new Random().nextInt(), new Random().nextInt());
      case 4:
        new A(new Random().nextInt(), new Random().nextInt(), new Sub1());
      case 5:
        new A(new Random().nextInt(), new Random().nextInt(), new Sub2());
      case 6:
        new A(new Random().nextInt(), new Random().nextInt(), new Sub2(new Random().nextInt()));
      case 7:
        return new B();
      case 8:
        return new C();
      case 9:
        return new D();
      default:
        return null;
    }
  }
}
