/* Copyright, TU Dortmund 2025 Marvin Lazar, Falk Howar
 * contributed-by: Marvin Lazar (marvin.lazar@tu-dortmund.de)
 *
 * license: MIT (see /java/jayhorn-recursive/LICENSE)
 */

import org.sosy_lab.sv_benchmarks.Verifier;


public class Main {
    public static void main(String[] args) {
        // class-cast exceptions for type D
        A a1 = (A) Verifier.nondetObject(); 
        A a2 = (A) Verifier.nondetObject(); 
        // assertion violation reachable
        if (a1.getX() == a2.getX()) {
            assert false;
        }
    }
}
