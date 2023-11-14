// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/alias_partial00_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "alias_partial00_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_1030_unknown_8_0;
    int f_1030_unknown_8_1;
    int f_1030_unknown_8_2;
    int f_1030_unknown_8_3;
    int f_1030_unknown_8_4;
    int f_1030_unknown_8_5;
    int main_1035_unknown_22_0;
    int main_1035_unknown_22_1;
    int main_1035_unknown_22_2;
    int fail_unknown_10_0;
    int lambda_1031_unknown_14_0;
    int lambda_1031_unknown_14_1;
    int lambda_1031_unknown_14_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_4;
    int B_4;
    int C_4;
    int A_5;



    // main logic
    goto main_init;

  main_init:
    if (!((B_4 == 0) && (A_4 == 0) && (C_4 == 1)))
        abort ();
    main_1035_unknown_22_0 = C_4;
    main_1035_unknown_22_1 = B_4;
    main_1035_unknown_22_2 = A_4;
    D_1 = __VERIFIER_nondet_int ();
    E_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    C_1 = main_1035_unknown_22_0;
    B_1 = main_1035_unknown_22_1;
    A_1 = main_1035_unknown_22_2;
    if (!((F_1 == 0) && (E_1 == 0) && (D_1 == 2) && (G_1 == 1)))
        abort ();
    f_1030_unknown_8_0 = D_1;
    f_1030_unknown_8_1 = B_1;
    f_1030_unknown_8_2 = A_1;
    f_1030_unknown_8_3 = G_1;
    f_1030_unknown_8_4 = F_1;
    f_1030_unknown_8_5 = E_1;
    G_0 = __VERIFIER_nondet_int ();
    H_0 = __VERIFIER_nondet_int ();
    C_0 = f_1030_unknown_8_0;
    B_0 = f_1030_unknown_8_1;
    A_0 = f_1030_unknown_8_2;
    F_0 = f_1030_unknown_8_3;
    E_0 = f_1030_unknown_8_4;
    D_0 = f_1030_unknown_8_5;
    if (!((!(0 == G_0)) && (H_0 == (F_0 + -1)) && ((0 == G_0) == (F_0 <= 0))))
        abort ();
    f_1030_unknown_8_0 = C_0;
    f_1030_unknown_8_1 = B_0;
    f_1030_unknown_8_2 = A_0;
    f_1030_unknown_8_3 = H_0;
    f_1030_unknown_8_4 = E_0;
    f_1030_unknown_8_5 = D_0;
    goto f_1030_unknown_8_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  f_1030_unknown_8_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          G_2 = __VERIFIER_nondet_int ();
          A_2 = f_1030_unknown_8_0;
          C_2 = f_1030_unknown_8_1;
          B_2 = f_1030_unknown_8_2;
          F_2 = f_1030_unknown_8_3;
          E_2 = f_1030_unknown_8_4;
          D_2 = f_1030_unknown_8_5;
          if (!((0 == G_2) && ((0 == G_2) == (F_2 <= 0))))
              abort ();
          lambda_1031_unknown_14_0 = A_2;
          lambda_1031_unknown_14_1 = C_2;
          lambda_1031_unknown_14_2 = B_2;
          D_3 = __VERIFIER_nondet_int ();
          A_3 = lambda_1031_unknown_14_0;
          C_3 = lambda_1031_unknown_14_1;
          B_3 = lambda_1031_unknown_14_2;
          if (!((D_3 == 1) && (!(0 == B_3))))
              abort ();
          fail_unknown_10_0 = D_3;
          A_5 = fail_unknown_10_0;
          if (!1)
              abort ();
          goto main_error;

      case 1:
          G_0 = __VERIFIER_nondet_int ();
          H_0 = __VERIFIER_nondet_int ();
          C_0 = f_1030_unknown_8_0;
          B_0 = f_1030_unknown_8_1;
          A_0 = f_1030_unknown_8_2;
          F_0 = f_1030_unknown_8_3;
          E_0 = f_1030_unknown_8_4;
          D_0 = f_1030_unknown_8_5;
          if (!
              ((!(0 == G_0)) && (H_0 == (F_0 + -1))
               && ((0 == G_0) == (F_0 <= 0))))
              abort ();
          f_1030_unknown_8_0 = C_0;
          f_1030_unknown_8_1 = B_0;
          f_1030_unknown_8_2 = A_0;
          f_1030_unknown_8_3 = H_0;
          f_1030_unknown_8_4 = E_0;
          f_1030_unknown_8_5 = D_0;
          goto f_1030_unknown_8_0;

      default:
          abort ();
      }

    // return expression

}

