/* 
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
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
