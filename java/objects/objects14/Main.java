/* Copyright, TU Dortmund 2025 Marvin Lazar, Falk Howar
 * contributed-by: Marvin Lazar (marvin.lazar@tu-dortmund.de)
 *
 * license: MIT (see /java/jayhorn-recursive/LICENSE)
 */

import org.sosy_lab.sv_benchmarks.Verifier;

public class Main {
    public static void main(String[] args) {
        // class-cast exception for type D
        A a = (A) Verifier.nondetObject(); 
        // assertion violation reachable
        if (a.getX() != 0) {
            assert false;
        }
    }
}
