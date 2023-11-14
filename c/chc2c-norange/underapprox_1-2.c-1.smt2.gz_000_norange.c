// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/underapprox_1-2.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "underapprox_1-2.c-1.smt2.gz_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main5_0;
    int inv_main5_1;
    int inv_main4_0;
    int inv_main4_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;



    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 1) && (B_0 == 0)))
        abort ();
    inv_main4_0 = B_0;
    inv_main4_1 = A_0;
    A_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    D_2 = inv_main4_0;
    B_2 = inv_main4_1;
    if (!
        ((A_2 == (D_2 + 1)) && (0 <= B_2) && (0 <= D_2) && (D_2 <= 5)
         && ((C_2 + (-2 * B_2)) == 0)))
        abort ();
    inv_main4_0 = A_2;
    inv_main4_1 = C_2;
    goto inv_main4_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main4_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = inv_main4_0;
          B_1 = inv_main4_1;
          if (!((0 <= A_1) && (!(A_1 <= 5)) && (0 <= B_1)))
              abort ();
          inv_main5_0 = A_1;
          inv_main5_1 = B_1;
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          B_3 = inv_main5_0;
          A_3 = inv_main5_1;
          if (!
              ((C_3 == 0) && (-2 <= C_3) && (0 <= B_3) && (0 <= A_3)
               && (C_3 <= 2) && ((!(1 <= C_3)) || (1 <= A_3))
               && ((!(C_3 <= -1)) || (A_3 <= -1))
               && (A_3 == ((3 * D_3) + C_3))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = inv_main4_0;
          B_2 = inv_main4_1;
          if (!
              ((A_2 == (D_2 + 1)) && (0 <= B_2) && (0 <= D_2) && (D_2 <= 5)
               && ((C_2 + (-2 * B_2)) == 0)))
              abort ();
          inv_main4_0 = A_2;
          inv_main4_1 = C_2;
          goto inv_main4_0;

      default:
          abort ();
      }

    // return expression

}

