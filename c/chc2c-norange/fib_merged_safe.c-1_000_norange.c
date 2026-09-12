// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/fib_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "fib_merged_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main7_5;
    int inv_main7_6;
    int inv_main15_0;
    int inv_main15_1;
    int inv_main15_2;
    int inv_main15_3;
    int inv_main15_4;
    int inv_main15_5;
    int inv_main15_6;
    int A_0;
    int v_1_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int v_5_0;
    int v_6_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int J_2;
    int K_2;
    int L_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((0 == v_1_0) && (1 == v_2_0) && (1 == v_3_0) && (1 == v_4_0)
         && (0 == v_5_0) && (0 == v_6_0)))
        abort ();
    inv_main7_0 = A_0;
    inv_main7_1 = v_1_0;
    inv_main7_2 = v_2_0;
    inv_main7_3 = v_3_0;
    inv_main7_4 = v_4_0;
    inv_main7_5 = v_5_0;
    inv_main7_6 = v_6_0;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    D_2 = __VERIFIER_nondet_int ();
    E_2 = __VERIFIER_nondet_int ();
    K_2 = inv_main7_0;
    F_2 = inv_main7_1;
    L_2 = inv_main7_2;
    G_2 = inv_main7_3;
    J_2 = inv_main7_4;
    H_2 = inv_main7_5;
    I_2 = inv_main7_6;
    if (!
        ((B_2 == (F_2 + G_2)) && (C_2 == (L_2 + J_2)) && (D_2 == (F_2 + G_2))
         && (E_2 == (K_2 + -1)) && (1 <= K_2) && (A_2 == (L_2 + J_2))))
        abort ();
    inv_main15_0 = E_2;
    inv_main15_1 = G_2;
    inv_main15_2 = J_2;
    inv_main15_3 = D_2;
    inv_main15_4 = C_2;
    inv_main15_5 = B_2;
    inv_main15_6 = A_2;
    goto inv_main15;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main15:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          F_3 = inv_main15_0;
          A_3 = inv_main15_1;
          G_3 = inv_main15_2;
          B_3 = inv_main15_3;
          E_3 = inv_main15_4;
          C_3 = inv_main15_5;
          D_3 = inv_main15_6;
          if (!(!(D_3 == (C_3 + A_3))))
              abort ();
          goto main_error;

      case 1:
          F_1 = inv_main15_0;
          A_1 = inv_main15_1;
          G_1 = inv_main15_2;
          B_1 = inv_main15_3;
          E_1 = inv_main15_4;
          C_1 = inv_main15_5;
          D_1 = inv_main15_6;
          if (!1)
              abort ();
          inv_main7_0 = F_1;
          inv_main7_1 = A_1;
          inv_main7_2 = G_1;
          inv_main7_3 = B_1;
          inv_main7_4 = E_1;
          inv_main7_5 = C_1;
          inv_main7_6 = D_1;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          K_2 = inv_main7_0;
          F_2 = inv_main7_1;
          L_2 = inv_main7_2;
          G_2 = inv_main7_3;
          J_2 = inv_main7_4;
          H_2 = inv_main7_5;
          I_2 = inv_main7_6;
          if (!
              ((B_2 == (F_2 + G_2)) && (C_2 == (L_2 + J_2))
               && (D_2 == (F_2 + G_2)) && (E_2 == (K_2 + -1)) && (1 <= K_2)
               && (A_2 == (L_2 + J_2))))
              abort ();
          inv_main15_0 = E_2;
          inv_main15_1 = G_2;
          inv_main15_2 = J_2;
          inv_main15_3 = D_2;
          inv_main15_4 = C_2;
          inv_main15_5 = B_2;
          inv_main15_6 = A_2;
          goto inv_main15;

      default:
          abort ();
      }

    // return expression

}

