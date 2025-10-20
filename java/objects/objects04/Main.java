/* 
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
 */


import org.sosy_lab.sv_benchmarks.Verifier;

public class Main {
    public static void main(String[] args) {
        Object o = Verifier.nondetObject();
        // assertion violation reachable
        if (o != null) {
            assert false;
        }
    }
}