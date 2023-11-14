// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_10_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_10_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int SAD_0;
    int SAD_1;
    int SAD_2;
    int FUN_0;
    int FUN_1;
    int FUN_2;
    int WEE_0;
    int WEE_1;
    int WEE_2;
    int A_0;
    int B_0;
    int C_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
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
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int A_6;
    int B_6;
    int C_6;

    if (((SAD_0 <= -1000000000) || (SAD_0 >= 1000000000))
        || ((SAD_1 <= -1000000000) || (SAD_1 >= 1000000000))
        || ((SAD_2 <= -1000000000) || (SAD_2 >= 1000000000))
        || ((FUN_0 <= -1000000000) || (FUN_0 >= 1000000000))
        || ((FUN_1 <= -1000000000) || (FUN_1 >= 1000000000))
        || ((FUN_2 <= -1000000000) || (FUN_2 >= 1000000000))
        || ((WEE_0 <= -1000000000) || (WEE_0 >= 1000000000))
        || ((WEE_1 <= -1000000000) || (WEE_1 >= 1000000000))
        || ((WEE_2 <= -1000000000) || (WEE_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 0) && (!(C_0 <= 0)) && (B_0 == 0)))
        abort ();
    FUN_0 = A_0;
    FUN_1 = B_0;
    FUN_2 = C_0;
    C_1 = __VERIFIER_nondet_int ();
    if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
        abort ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    A_1 = FUN_0;
    B_1 = FUN_1;
    E_1 = FUN_2;
    if (!((C_1 == (A_1 + 1)) && (!(E_1 <= B_1)) && (D_1 == (B_1 + 1))))
        abort ();
    FUN_0 = C_1;
    FUN_1 = D_1;
    FUN_2 = E_1;
    goto FUN_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  FUN_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          B_2 = FUN_0;
          A_2 = FUN_1;
          E_2 = FUN_2;
          if (!((C_2 == B_2) && (A_2 >= E_2) && (D_2 == 0)))
              abort ();
          SAD_0 = C_2;
          SAD_1 = D_2;
          SAD_2 = E_2;
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          A_3 = SAD_0;
          B_3 = SAD_1;
          E_3 = SAD_2;
          if (!((C_3 == (A_3 + -1)) && (!(E_3 <= B_3)) && (D_3 == (B_3 + 1))))
              abort ();
          SAD_0 = C_3;
          SAD_1 = D_3;
          SAD_2 = E_3;
          goto SAD_1;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          A_1 = FUN_0;
          B_1 = FUN_1;
          E_1 = FUN_2;
          if (!((C_1 == (A_1 + 1)) && (!(E_1 <= B_1)) && (D_1 == (B_1 + 1))))
              abort ();
          FUN_0 = C_1;
          FUN_1 = D_1;
          FUN_2 = E_1;
          goto FUN_0;

      default:
          abort ();
      }
  SAD_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          A_3 = SAD_0;
          B_3 = SAD_1;
          E_3 = SAD_2;
          if (!((C_3 == (A_3 + -1)) && (!(E_3 <= B_3)) && (D_3 == (B_3 + 1))))
              abort ();
          SAD_0 = C_3;
          SAD_1 = D_3;
          SAD_2 = E_3;
          goto SAD_1;

      case 1:
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          B_4 = SAD_0;
          A_4 = SAD_1;
          E_4 = SAD_2;
          if (!((C_4 == B_4) && (A_4 >= E_4) && (D_4 == 0)))
              abort ();
          WEE_0 = C_4;
          WEE_1 = D_4;
          WEE_2 = E_4;
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          D_5 = __VERIFIER_nondet_int ();
          if (((D_5 <= -1000000000) || (D_5 >= 1000000000)))
              abort ();
          A_5 = WEE_0;
          B_5 = WEE_1;
          E_5 = WEE_2;
          if (!((C_5 == (A_5 + 1)) && (!(E_5 <= B_5)) && (D_5 == (B_5 + 1))))
              abort ();
          WEE_0 = C_5;
          WEE_1 = D_5;
          WEE_2 = E_5;
          goto WEE_2;

      default:
          abort ();
      }
  WEE_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_6 = WEE_0;
          A_6 = WEE_1;
          C_6 = WEE_2;
          if (!((A_6 >= C_6) && (!(B_6 == C_6))))
              abort ();
          goto main_error;

      case 1:
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          D_5 = __VERIFIER_nondet_int ();
          if (((D_5 <= -1000000000) || (D_5 >= 1000000000)))
              abort ();
          A_5 = WEE_0;
          B_5 = WEE_1;
          E_5 = WEE_2;
          if (!((C_5 == (A_5 + 1)) && (!(E_5 <= B_5)) && (D_5 == (B_5 + 1))))
              abort ();
          WEE_0 = C_5;
          WEE_1 = D_5;
          WEE_2 = E_5;
          goto WEE_2;

      default:
          abort ();
      }

    // return expression

}

