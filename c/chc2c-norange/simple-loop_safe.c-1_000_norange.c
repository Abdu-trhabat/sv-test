// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/simple-loop_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "simple-loop_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main21_0;
    int inv_main21_1;
    int inv_main21_2;
    int inv_main3_0;
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main16_0;
    int inv_main16_1;
    int inv_main16_2;
    int inv_main16_3;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int A_4;
    int v_1_4;
    int v_2_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int v_4_5;
    int v_5_5;
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
    A_4 = inv_main3_0;
    if (!((v_1_4 == A_4) && (0 == v_2_4)))
        abort ();
    inv_main7_0 = A_4;
    inv_main7_1 = v_1_4;
    inv_main7_2 = v_2_4;
    A_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    B_2 = inv_main7_0;
    D_2 = inv_main7_1;
    E_2 = inv_main7_2;
    if (!((!(C_2 == 0)) && (E_2 <= 10) && (A_2 == (E_2 + 1))))
        abort ();
    inv_main7_0 = B_2;
    inv_main7_1 = D_2;
    inv_main7_2 = A_2;
    goto inv_main7_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main7_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main7_0;
          D_2 = inv_main7_1;
          E_2 = inv_main7_2;
          if (!((!(C_2 == 0)) && (E_2 <= 10) && (A_2 == (E_2 + 1))))
              abort ();
          inv_main7_0 = B_2;
          inv_main7_1 = D_2;
          inv_main7_2 = A_2;
          goto inv_main7_0;

      case 1:
          B_5 = __VERIFIER_nondet_int ();
          v_4_5 = __VERIFIER_nondet_int ();
          v_5_5 = __VERIFIER_nondet_int ();
          A_5 = inv_main7_0;
          C_5 = inv_main7_1;
          D_5 = inv_main7_2;
          if (!
              (((!(D_5 <= 10)) || (B_5 == 0)) && (v_4_5 == A_5)
               && (1 == v_5_5)))
              abort ();
          inv_main16_0 = A_5;
          inv_main16_1 = D_5;
          inv_main16_2 = v_4_5;
          inv_main16_3 = v_5_5;
          A_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          C_1 = inv_main16_0;
          E_1 = inv_main16_1;
          D_1 = inv_main16_2;
          B_1 = inv_main16_3;
          if (!((!(F_1 == 0)) && (B_1 <= 10) && (A_1 == (B_1 + 1))))
              abort ();
          inv_main16_0 = C_1;
          inv_main16_1 = E_1;
          inv_main16_2 = D_1;
          inv_main16_3 = A_1;
          goto inv_main16_1;

      default:
          abort ();
      }
  inv_main16_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_3 = __VERIFIER_nondet_int ();
          B_3 = inv_main16_0;
          D_3 = inv_main16_1;
          C_3 = inv_main16_2;
          A_3 = inv_main16_3;
          if (!((!(A_3 <= 10)) || (E_3 == 0)))
              abort ();
          inv_main21_0 = B_3;
          inv_main21_1 = D_3;
          inv_main21_2 = A_3;
          B_6 = inv_main21_0;
          C_6 = inv_main21_1;
          A_6 = inv_main21_2;
          if (!(!(C_6 == A_6)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          C_1 = inv_main16_0;
          E_1 = inv_main16_1;
          D_1 = inv_main16_2;
          B_1 = inv_main16_3;
          if (!((!(F_1 == 0)) && (B_1 <= 10) && (A_1 == (B_1 + 1))))
              abort ();
          inv_main16_0 = C_1;
          inv_main16_1 = E_1;
          inv_main16_2 = D_1;
          inv_main16_3 = A_1;
          goto inv_main16_1;

      default:
          abort ();
      }

    // return expression

}

