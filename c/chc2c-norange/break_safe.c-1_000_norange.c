// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/break_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "break_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main3_0;
    int inv_main29_0;
    int inv_main29_1;
    int inv_main29_2;
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main20_0;
    int inv_main20_1;
    int inv_main20_2;
    int inv_main20_3;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int A_5;
    int v_1_5;
    int v_2_5;
    int A_6;
    int B_6;
    int C_6;
    int v_3_6;
    int v_4_6;
    int A_7;
    int B_7;
    int C_7;
    int v_3_7;
    int v_4_7;
    int A_8;
    int B_8;
    int C_8;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    v_2_5 = __VERIFIER_nondet_int ();
    v_1_5 = __VERIFIER_nondet_int ();
    A_5 = inv_main3_0;
    if (!((v_1_5 == A_5) && (0 == v_2_5)))
        abort ();
    inv_main7_0 = A_5;
    inv_main7_1 = v_1_5;
    inv_main7_2 = v_2_5;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = inv_main7_0;
    C_2 = inv_main7_1;
    D_2 = inv_main7_2;
    if (!((!(D_2 == C_2)) && (D_2 <= 10) && (A_2 == (D_2 + 1))))
        abort ();
    inv_main7_0 = B_2;
    inv_main7_1 = C_2;
    inv_main7_2 = A_2;
    goto inv_main7_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main7_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main7_0;
          C_2 = inv_main7_1;
          D_2 = inv_main7_2;
          if (!((!(D_2 == C_2)) && (D_2 <= 10) && (A_2 == (D_2 + 1))))
              abort ();
          inv_main7_0 = B_2;
          inv_main7_1 = C_2;
          inv_main7_2 = A_2;
          goto inv_main7_0;

      case 1:
          v_4_6 = __VERIFIER_nondet_int ();
          v_3_6 = __VERIFIER_nondet_int ();
          A_6 = inv_main7_0;
          B_6 = inv_main7_1;
          C_6 = inv_main7_2;
          if (!((!(C_6 <= 10)) && (v_3_6 == A_6) && (10 == v_4_6)))
              abort ();
          inv_main20_0 = A_6;
          inv_main20_1 = C_6;
          inv_main20_2 = v_3_6;
          inv_main20_3 = v_4_6;
          A_1 = __VERIFIER_nondet_int ();
          B_1 = inv_main20_0;
          E_1 = inv_main20_1;
          C_1 = inv_main20_2;
          D_1 = inv_main20_3;
          if (!
              ((!(D_1 == ((-1 * C_1) + 10))) && (0 <= D_1)
               && (A_1 == (D_1 + -1))))
              abort ();
          inv_main20_0 = B_1;
          inv_main20_1 = E_1;
          inv_main20_2 = C_1;
          inv_main20_3 = A_1;
          goto inv_main20_1;

      case 2:
          v_4_7 = __VERIFIER_nondet_int ();
          v_3_7 = __VERIFIER_nondet_int ();
          A_7 = inv_main7_0;
          B_7 = inv_main7_1;
          C_7 = inv_main7_2;
          if (!
              ((C_7 <= 10) && (C_7 == B_7) && (v_3_7 == A_7)
               && (10 == v_4_7)))
              abort ();
          inv_main20_0 = A_7;
          inv_main20_1 = C_7;
          inv_main20_2 = v_3_7;
          inv_main20_3 = v_4_7;
          A_1 = __VERIFIER_nondet_int ();
          B_1 = inv_main20_0;
          E_1 = inv_main20_1;
          C_1 = inv_main20_2;
          D_1 = inv_main20_3;
          if (!
              ((!(D_1 == ((-1 * C_1) + 10))) && (0 <= D_1)
               && (A_1 == (D_1 + -1))))
              abort ();
          inv_main20_0 = B_1;
          inv_main20_1 = E_1;
          inv_main20_2 = C_1;
          inv_main20_3 = A_1;
          goto inv_main20_1;

      default:
          abort ();
      }
  inv_main20_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = inv_main20_0;
          E_3 = inv_main20_1;
          C_3 = inv_main20_2;
          D_3 = inv_main20_3;
          if (!((!(0 <= D_3)) && (A_3 == ((-1 * D_3) + 10))))
              abort ();
          inv_main29_0 = B_3;
          inv_main29_1 = E_3;
          inv_main29_2 = A_3;
          A_8 = inv_main29_0;
          C_8 = inv_main29_1;
          B_8 = inv_main29_2;
          if (!(!(C_8 == B_8)))
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = inv_main20_0;
          E_4 = inv_main20_1;
          C_4 = inv_main20_2;
          D_4 = inv_main20_3;
          if (!
              ((D_4 == ((-1 * C_4) + 10)) && (0 <= D_4)
               && (A_4 == ((-1 * D_4) + 10))))
              abort ();
          inv_main29_0 = B_4;
          inv_main29_1 = E_4;
          inv_main29_2 = A_4;
          A_8 = inv_main29_0;
          C_8 = inv_main29_1;
          B_8 = inv_main29_2;
          if (!(!(C_8 == B_8)))
              abort ();
          goto main_error;

      case 2:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = inv_main20_0;
          E_1 = inv_main20_1;
          C_1 = inv_main20_2;
          D_1 = inv_main20_3;
          if (!
              ((!(D_1 == ((-1 * C_1) + 10))) && (0 <= D_1)
               && (A_1 == (D_1 + -1))))
              abort ();
          inv_main20_0 = B_1;
          inv_main20_1 = E_1;
          inv_main20_2 = C_1;
          inv_main20_3 = A_1;
          goto inv_main20_1;

      default:
          abort ();
      }

    // return expression

}

