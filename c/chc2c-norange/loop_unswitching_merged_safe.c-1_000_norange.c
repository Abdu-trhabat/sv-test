// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop_unswitching_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop_unswitching_merged_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main9_0;
    int inv_main9_1;
    int inv_main9_2;
    int inv_main9_3;
    int inv_main9_4;
    int inv_main9_5;
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main7_5;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int G_7;
    int H_7;
    int A_11;
    int B_11;
    int v_2_11;
    int v_3_11;
    int v_4_11;
    int v_5_11;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int E_13;
    int F_13;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_11 = __VERIFIER_nondet_int ();
    B_11 = __VERIFIER_nondet_int ();
    v_2_11 = __VERIFIER_nondet_int ();
    v_4_11 = __VERIFIER_nondet_int ();
    v_3_11 = __VERIFIER_nondet_int ();
    v_5_11 = __VERIFIER_nondet_int ();
    if (!
        ((1 <= B_11) && (v_2_11 == A_11) && (v_3_11 == A_11) && (0 == v_4_11)
         && (0 == v_5_11)))
        abort ();
    inv_main7_0 = B_11;
    inv_main7_1 = A_11;
    inv_main7_2 = v_2_11;
    inv_main7_3 = v_3_11;
    inv_main7_4 = v_4_11;
    inv_main7_5 = v_5_11;
    A_7 = __VERIFIER_nondet_int ();
    B_7 = __VERIFIER_nondet_int ();
    H_7 = inv_main7_0;
    C_7 = inv_main7_1;
    D_7 = inv_main7_2;
    F_7 = inv_main7_3;
    E_7 = inv_main7_4;
    G_7 = inv_main7_5;
    if (!((B_7 == (D_7 + -1)) && (1 <= D_7) && (A_7 == (E_7 + 1))))
        abort ();
    inv_main7_0 = H_7;
    inv_main7_1 = C_7;
    inv_main7_2 = B_7;
    inv_main7_3 = F_7;
    inv_main7_4 = A_7;
    inv_main7_5 = G_7;
    goto inv_main7_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main6:
    goto inv_main6;
  inv_main12:
    goto inv_main12;
  inv_main8:
    goto inv_main8;
  inv_main15:
    goto inv_main15;
  inv_main20:
    goto inv_main20;
  inv_main7_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          F_1 = inv_main7_0;
          A_1 = inv_main7_1;
          B_1 = inv_main7_2;
          D_1 = inv_main7_3;
          C_1 = inv_main7_4;
          E_1 = inv_main7_5;
          if (!(!(1 <= B_1)))
              abort ();
          inv_main9_0 = F_1;
          inv_main9_1 = A_1;
          inv_main9_2 = B_1;
          inv_main9_3 = D_1;
          inv_main9_4 = C_1;
          inv_main9_5 = E_1;
          F_13 = inv_main9_0;
          A_13 = inv_main9_1;
          B_13 = inv_main9_2;
          D_13 = inv_main9_3;
          C_13 = inv_main9_4;
          E_13 = inv_main9_5;
          if (!((!(A_13 <= 0)) && (!(C_13 == A_13))))
              abort ();
          goto main_error;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          H_7 = inv_main7_0;
          C_7 = inv_main7_1;
          D_7 = inv_main7_2;
          F_7 = inv_main7_3;
          E_7 = inv_main7_4;
          G_7 = inv_main7_5;
          if (!((B_7 == (D_7 + -1)) && (1 <= D_7) && (A_7 == (E_7 + 1))))
              abort ();
          inv_main7_0 = H_7;
          inv_main7_1 = C_7;
          inv_main7_2 = B_7;
          inv_main7_3 = F_7;
          inv_main7_4 = A_7;
          inv_main7_5 = G_7;
          goto inv_main7_0;

      default:
          abort ();
      }

    // return expression

}

