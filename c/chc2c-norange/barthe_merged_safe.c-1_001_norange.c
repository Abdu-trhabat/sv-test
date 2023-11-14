// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/barthe_merged_safe.c-1_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "barthe_merged_safe.c-1_001_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main6_0;
    int inv_main6_1;
    int inv_main6_2;
    int inv_main6_3;
    int inv_main6_4;
    int inv_main13_0;
    int inv_main13_1;
    int inv_main13_2;
    int inv_main13_3;
    int inv_main13_4;
    int inv_main13_5;
    int inv_main13_6;
    int inv_main10_0;
    int inv_main10_1;
    int inv_main10_2;
    int inv_main10_3;
    int inv_main10_4;
    int inv_main10_5;
    int inv_main10_6;
    int A_0;
    int B_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int v_6_3;
    int v_7_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;



    // main logic
    goto main_init;

  main_init:
    if (!((0 == v_2_0) && (0 == v_3_0) && (0 == v_4_0)))
        abort ();
    inv_main6_0 = B_0;
    inv_main6_1 = A_0;
    inv_main6_2 = v_2_0;
    inv_main6_3 = v_3_0;
    inv_main6_4 = v_4_0;
    A_3 = __VERIFIER_nondet_int ();
    v_6_3 = __VERIFIER_nondet_int ();
    v_7_3 = __VERIFIER_nondet_int ();
    D_3 = inv_main6_0;
    B_3 = inv_main6_1;
    F_3 = inv_main6_2;
    C_3 = inv_main6_3;
    E_3 = inv_main6_4;
    if (!
        ((1 <= (D_3 + (-1 * F_3))) && (A_3 == ((5 * F_3) + B_3))
         && (v_6_3 == B_3) && (0 == v_7_3)))
        abort ();
    inv_main10_0 = D_3;
    inv_main10_1 = B_3;
    inv_main10_2 = F_3;
    inv_main10_3 = A_3;
    inv_main10_4 = E_3;
    inv_main10_5 = v_6_3;
    inv_main10_6 = v_7_3;
    A_1 = __VERIFIER_nondet_int ();
    B_1 = __VERIFIER_nondet_int ();
    E_1 = inv_main10_0;
    C_1 = inv_main10_1;
    I_1 = inv_main10_2;
    D_1 = inv_main10_3;
    F_1 = inv_main10_4;
    H_1 = inv_main10_5;
    G_1 = inv_main10_6;
    if (!((B_1 == (F_1 + D_1)) && (A_1 == (G_1 + H_1))))
        abort ();
    inv_main13_0 = E_1;
    inv_main13_1 = C_1;
    inv_main13_2 = I_1;
    inv_main13_3 = D_1;
    inv_main13_4 = B_1;
    inv_main13_5 = H_1;
    inv_main13_6 = A_1;
    goto inv_main13;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main13:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = inv_main13_0;
          A_4 = inv_main13_1;
          G_4 = inv_main13_2;
          B_4 = inv_main13_3;
          D_4 = inv_main13_4;
          F_4 = inv_main13_5;
          E_4 = inv_main13_6;
          if (!(!(D_4 == E_4)))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          F_2 = inv_main13_0;
          D_2 = inv_main13_1;
          J_2 = inv_main13_2;
          E_2 = inv_main13_3;
          G_2 = inv_main13_4;
          I_2 = inv_main13_5;
          H_2 = inv_main13_6;
          if (!
              ((B_2 == ((5 * J_2) + D_2 + 5)) && (C_2 == (J_2 + 1))
               && (2 <= (F_2 + (-1 * J_2))) && (A_2 == (I_2 + 5))))
              abort ();
          inv_main10_0 = F_2;
          inv_main10_1 = D_2;
          inv_main10_2 = C_2;
          inv_main10_3 = B_2;
          inv_main10_4 = G_2;
          inv_main10_5 = A_2;
          inv_main10_6 = H_2;
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          E_1 = inv_main10_0;
          C_1 = inv_main10_1;
          I_1 = inv_main10_2;
          D_1 = inv_main10_3;
          F_1 = inv_main10_4;
          H_1 = inv_main10_5;
          G_1 = inv_main10_6;
          if (!((B_1 == (F_1 + D_1)) && (A_1 == (G_1 + H_1))))
              abort ();
          inv_main13_0 = E_1;
          inv_main13_1 = C_1;
          inv_main13_2 = I_1;
          inv_main13_3 = D_1;
          inv_main13_4 = B_1;
          inv_main13_5 = H_1;
          inv_main13_6 = A_1;
          goto inv_main13;

      default:
          abort ();
      }

    // return expression

}

