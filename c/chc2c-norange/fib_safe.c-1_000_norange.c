// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/fib_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "fib_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main3_0;
    int inv_main23_0;
    int inv_main23_1;
    int inv_main23_2;
    int inv_main23_3;
    int inv_main23_4;
    int inv_main23_5;
    int inv_main31_0;
    int inv_main31_1;
    int inv_main31_2;
    int inv_main9_0;
    int inv_main9_1;
    int inv_main9_2;
    int inv_main9_3;
    int inv_main9_4;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int A_4;
    int v_1_4;
    int v_2_4;
    int v_3_4;
    int v_4_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int v_6_5;
    int v_7_5;
    int v_8_5;
    int v_9_5;
    int A_6;
    int B_6;
    int C_6;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    v_2_4 = __VERIFIER_nondet_int ();
    v_1_4 = __VERIFIER_nondet_int ();
    v_4_4 = __VERIFIER_nondet_int ();
    v_3_4 = __VERIFIER_nondet_int ();
    A_4 = inv_main3_0;
    if (!((v_1_4 == A_4) && (0 == v_2_4) && (1 == v_3_4) && (0 == v_4_4)))
        abort ();
    inv_main9_0 = A_4;
    inv_main9_1 = v_1_4;
    inv_main9_2 = v_2_4;
    inv_main9_3 = v_3_4;
    inv_main9_4 = v_4_4;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    G_2 = __VERIFIER_nondet_int ();
    H_2 = inv_main9_0;
    F_2 = inv_main9_1;
    E_2 = inv_main9_2;
    D_2 = inv_main9_3;
    I_2 = inv_main9_4;
    if (!
        ((B_2 == (E_2 + D_2)) && (C_2 == (F_2 + -1)) && (!(G_2 == 0))
         && (1 <= F_2) && (A_2 == (E_2 + D_2))))
        abort ();
    inv_main9_0 = H_2;
    inv_main9_1 = C_2;
    inv_main9_2 = D_2;
    inv_main9_3 = B_2;
    inv_main9_4 = A_2;
    goto inv_main9_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main23_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_3 = __VERIFIER_nondet_int ();
          G_3 = inv_main23_0;
          E_3 = inv_main23_1;
          F_3 = inv_main23_2;
          A_3 = inv_main23_3;
          C_3 = inv_main23_4;
          B_3 = inv_main23_5;
          if (!((!(1 <= F_3)) || (D_3 == 0)))
              abort ();
          inv_main31_0 = G_3;
          inv_main31_1 = E_3;
          inv_main31_2 = C_3;
          C_6 = inv_main31_0;
          B_6 = inv_main31_1;
          A_6 = inv_main31_2;
          if (!(!(B_6 == A_6)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          J_1 = inv_main23_0;
          H_1 = inv_main23_1;
          I_1 = inv_main23_2;
          D_1 = inv_main23_3;
          G_1 = inv_main23_4;
          E_1 = inv_main23_5;
          if (!
              ((B_1 == (D_1 + G_1)) && (C_1 == (I_1 + -1)) && (!(F_1 == 0))
               && (1 <= I_1) && (A_1 == (D_1 + G_1))))
              abort ();
          inv_main23_0 = J_1;
          inv_main23_1 = H_1;
          inv_main23_2 = C_1;
          inv_main23_3 = G_1;
          inv_main23_4 = B_1;
          inv_main23_5 = A_1;
          goto inv_main23_0;

      default:
          abort ();
      }
  inv_main9_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_9_5 = __VERIFIER_nondet_int ();
          F_5 = __VERIFIER_nondet_int ();
          v_6_5 = __VERIFIER_nondet_int ();
          v_8_5 = __VERIFIER_nondet_int ();
          v_7_5 = __VERIFIER_nondet_int ();
          D_5 = inv_main9_0;
          C_5 = inv_main9_1;
          B_5 = inv_main9_2;
          A_5 = inv_main9_3;
          E_5 = inv_main9_4;
          if (!
              (((!(1 <= C_5)) || (F_5 == 0)) && (v_6_5 == D_5) && (1 == v_7_5)
               && (1 == v_8_5) && (0 == v_9_5)))
              abort ();
          inv_main23_0 = D_5;
          inv_main23_1 = A_5;
          inv_main23_2 = v_6_5;
          inv_main23_3 = v_7_5;
          inv_main23_4 = v_8_5;
          inv_main23_5 = v_9_5;
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          J_1 = inv_main23_0;
          H_1 = inv_main23_1;
          I_1 = inv_main23_2;
          D_1 = inv_main23_3;
          G_1 = inv_main23_4;
          E_1 = inv_main23_5;
          if (!
              ((B_1 == (D_1 + G_1)) && (C_1 == (I_1 + -1)) && (!(F_1 == 0))
               && (1 <= I_1) && (A_1 == (D_1 + G_1))))
              abort ();
          inv_main23_0 = J_1;
          inv_main23_1 = H_1;
          inv_main23_2 = C_1;
          inv_main23_3 = G_1;
          inv_main23_4 = B_1;
          inv_main23_5 = A_1;
          goto inv_main23_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          H_2 = inv_main9_0;
          F_2 = inv_main9_1;
          E_2 = inv_main9_2;
          D_2 = inv_main9_3;
          I_2 = inv_main9_4;
          if (!
              ((B_2 == (E_2 + D_2)) && (C_2 == (F_2 + -1)) && (!(G_2 == 0))
               && (1 <= F_2) && (A_2 == (E_2 + D_2))))
              abort ();
          inv_main9_0 = H_2;
          inv_main9_1 = C_2;
          inv_main9_2 = D_2;
          inv_main9_3 = B_2;
          inv_main9_4 = A_2;
          goto inv_main9_1;

      default:
          abort ();
      }

    // return expression

}

