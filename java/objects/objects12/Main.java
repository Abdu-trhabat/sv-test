/* 
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
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
