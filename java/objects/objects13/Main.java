/* 
 * Contributed to SV-COMP by Marvin Lazar and Falk Howar
 * License: MIT (see /java/objects/LICENSE-MIT)
 */


import org.sosy_lab.sv_benchmarks.Verifier;


public class Main {
    public static void main(String[] args) {
        // class-cast exception for type D
        A a = (A) Verifier.nondetObject(); 
		// assertion violation reachable
        if (a.getX() == 0) {
            assert false: "getX()";
        }
    }
}
