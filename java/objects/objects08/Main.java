/* Copyright, TU Dortmund 2025 Marvin Lazar, Falk Howar
 * contributed-by: Marvin Lazar (marvin.lazar@tu-dortmund.de)
 *
 * license: MIT (see /java/jayhorn-recursive/LICENSE)
 */

import org.sosy_lab.sv_benchmarks.Verifier;


public class Main {
    public static void main(String[] args) {
        Object o1 = Verifier.nondetObject();
        Object o2 = o1; 
        // assertion violation not reachable
        if (o1 != o2) {
            assert false;
        }
    }
}
