/* Copyright, TU Dortmund 2025 Marvin Lazar, Falk Howar
 * contributed-by: Marvin Lazar (marvin.lazar@tu-dortmund.de)
 *
 * license: MIT (see /java/jayhorn-recursive/LICENSE)
 */

import org.sosy_lab.sv_benchmarks.Verifier;


public class Main {
    public static void main(String[] args) {
        Object o = Verifier.nondetObject();
        // class-cast exception for types A and D
		B b = (B) o;

    }
}
