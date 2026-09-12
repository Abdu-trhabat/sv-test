// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_12_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_12_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV0_0;
    int INV0_1;
    int INV0_2;
    int INV1_0;
    int INV1_1;
    int INV1_2;
    int INV2_0;
    int INV2_1;
    int INV2_2;
    int A_0;
    int v_1_0;
    int v_2_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int C_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int A_5;
    int B_5;
    int C_5;
    int A_6;
    int B_6;
    int C_6;

    if (((INV0_0 <= -1000000000) || (INV0_0 >= 1000000000))
        || ((INV0_1 <= -1000000000) || (INV0_1 >= 1000000000))
        || ((INV0_2 <= -1000000000) || (INV0_2 >= 1000000000))
        || ((INV1_0 <= -1000000000) || (INV1_0 >= 1000000000))
        || ((INV1_1 <= -1000000000) || (INV1_1 >= 1000000000))
        || ((INV1_2 <= -1000000000) || (INV1_2 >= 1000000000))
        || ((INV2_0 <= -1000000000) || (INV2_0 >= 1000000000))
        || ((INV2_1 <= -1000000000) || (INV2_1 >= 1000000000))
        || ((INV2_2 <= -1000000000) || (INV2_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((!(A_0 <= 0)) && (0 == v_1_0) && (0 == v_2_0)))
        abort ();
    INV0_0 = A_0;
    INV0_1 = v_1_0;
    INV0_2 = v_2_0;
    goto INV0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = INV0_0;
          B_6 = INV0_1;
          C_6 = INV0_2;
          if (!((A_6 == 0) && (!(B_6 == C_6))))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          A_1 = INV0_0;
          C_1 = INV0_1;
          D_1 = INV0_2;
          if (!((!(A_1 <= 0)) && (B_1 == (A_1 + -1))))
              abort ();
          INV1_0 = B_1;
          INV1_1 = C_1;
          INV1_2 = D_1;
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          C_2 = INV1_0;
          A_2 = INV1_1;
          B_2 = INV1_2;
          if (!((E_2 == (B_2 + -1)) && (!(C_2 <= A_2)) && (D_2 == (A_2 + 1))))
              abort ();
          INV1_0 = C_2;
          INV1_1 = D_2;
          INV1_2 = E_2;
          goto INV1_0;

      default:
          abort ();
      }
  INV1_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          C_2 = INV1_0;
          A_2 = INV1_1;
          B_2 = INV1_2;
          if (!((E_2 == (B_2 + -1)) && (!(C_2 <= A_2)) && (D_2 == (A_2 + 1))))
              abort ();
          INV1_0 = C_2;
          INV1_1 = D_2;
          INV1_2 = E_2;
          goto INV1_0;

      case 1:
          A_3 = INV1_0;
          B_3 = INV1_1;
          C_3 = INV1_2;
          if (!(A_3 <= B_3))
              abort ();
          INV2_0 = A_3;
          INV2_1 = B_3;
          INV2_2 = C_3;
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          C_4 = INV2_0;
          A_4 = INV2_1;
          B_4 = INV2_2;
          if (!((E_4 == (B_4 + 1)) && (!(C_4 <= B_4)) && (D_4 == (A_4 + -1))))
              abort ();
          INV2_0 = C_4;
          INV2_1 = D_4;
          INV2_2 = E_4;
          goto INV2_1;

      default:
          abort ();
      }
  INV2_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = INV2_0;
          B_5 = INV2_1;
          C_5 = INV2_2;
          if (!(A_5 <= C_5))
              abort ();
          INV0_0 = A_5;
          INV0_1 = B_5;
          INV0_2 = C_5;
          goto INV0;

      case 1:
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          C_4 = INV2_0;
          A_4 = INV2_1;
          B_4 = INV2_2;
          if (!((E_4 == (B_4 + 1)) && (!(C_4 <= B_4)) && (D_4 == (A_4 + -1))))
              abort ();
          INV2_0 = C_4;
          INV2_1 = D_4;
          INV2_2 = E_4;
          goto INV2_1;

      default:
          abort ();
      }

    // return expression

}

