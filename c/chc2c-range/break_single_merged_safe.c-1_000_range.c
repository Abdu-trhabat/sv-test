// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/break_single_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "break_single_merged_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main11_0;
    int inv_main11_1;
    int inv_main11_2;
    int inv_main4_0;
    int inv_main4_1;
    int inv_main10_0;
    int inv_main10_1;
    int inv_main10_2;
    int A_0;
    int v_1_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int C_3;
    int A_4;
    int B_4;
    int v_2_4;
    int A_5;
    int B_5;
    int v_2_5;
    int A_6;
    int B_6;
    int C_6;

    if (((inv_main11_0 <= -1000000000) || (inv_main11_0 >= 1000000000))
        || ((inv_main11_1 <= -1000000000) || (inv_main11_1 >= 1000000000))
        || ((inv_main11_2 <= -1000000000) || (inv_main11_2 >= 1000000000))
        || ((inv_main4_0 <= -1000000000) || (inv_main4_0 >= 1000000000))
        || ((inv_main4_1 <= -1000000000) || (inv_main4_1 >= 1000000000))
        || ((inv_main10_0 <= -1000000000) || (inv_main10_0 >= 1000000000))
        || ((inv_main10_1 <= -1000000000) || (inv_main10_1 >= 1000000000))
        || ((inv_main10_2 <= -1000000000) || (inv_main10_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((v_2_4 <= -1000000000) || (v_2_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((v_2_5 <= -1000000000) || (v_2_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(0 == v_1_0))
        abort ();
    inv_main4_0 = A_0;
    inv_main4_1 = v_1_0;
    A_3 = __VERIFIER_nondet_int ();
    if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
        abort ();
    B_3 = inv_main4_0;
    C_3 = inv_main4_1;
    if (!((!(C_3 == B_3)) && (C_3 <= 10) && (A_3 == (C_3 + 1))))
        abort ();
    inv_main4_0 = B_3;
    inv_main4_1 = A_3;
    goto inv_main4_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main10_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = inv_main10_0;
          C_1 = inv_main10_1;
          A_1 = inv_main10_2;
          if (!((!(A_1 <= 10)) || (A_1 == B_1)))
              abort ();
          inv_main11_0 = B_1;
          inv_main11_1 = C_1;
          inv_main11_2 = A_1;
          B_6 = inv_main11_0;
          C_6 = inv_main11_1;
          A_6 = inv_main11_2;
          if (!(!(C_6 == A_6)))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          C_2 = inv_main10_0;
          D_2 = inv_main10_1;
          B_2 = inv_main10_2;
          if (!((!(B_2 == C_2)) && (B_2 <= 10) && (A_2 == (B_2 + 1))))
              abort ();
          inv_main10_0 = C_2;
          inv_main10_1 = D_2;
          inv_main10_2 = A_2;
          goto inv_main10_0;

      default:
          abort ();
      }
  inv_main4_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = inv_main4_0;
          C_3 = inv_main4_1;
          if (!((!(C_3 == B_3)) && (C_3 <= 10) && (A_3 == (C_3 + 1))))
              abort ();
          inv_main4_0 = B_3;
          inv_main4_1 = A_3;
          goto inv_main4_1;

      case 1:
          v_2_4 = __VERIFIER_nondet_int ();
          if (((v_2_4 <= -1000000000) || (v_2_4 >= 1000000000)))
              abort ();
          A_4 = inv_main4_0;
          B_4 = inv_main4_1;
          if (!((!(B_4 <= 10)) && (0 == v_2_4)))
              abort ();
          inv_main10_0 = A_4;
          inv_main10_1 = B_4;
          inv_main10_2 = v_2_4;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          C_2 = inv_main10_0;
          D_2 = inv_main10_1;
          B_2 = inv_main10_2;
          if (!((!(B_2 == C_2)) && (B_2 <= 10) && (A_2 == (B_2 + 1))))
              abort ();
          inv_main10_0 = C_2;
          inv_main10_1 = D_2;
          inv_main10_2 = A_2;
          goto inv_main10_0;

      case 2:
          v_2_5 = __VERIFIER_nondet_int ();
          if (((v_2_5 <= -1000000000) || (v_2_5 >= 1000000000)))
              abort ();
          A_5 = inv_main4_0;
          B_5 = inv_main4_1;
          if (!((B_5 <= 10) && (B_5 == A_5) && (0 == v_2_5)))
              abort ();
          inv_main10_0 = A_5;
          inv_main10_1 = B_5;
          inv_main10_2 = v_2_5;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          C_2 = inv_main10_0;
          D_2 = inv_main10_1;
          B_2 = inv_main10_2;
          if (!((!(B_2 == C_2)) && (B_2 <= 10) && (A_2 == (B_2 + 1))))
              abort ();
          inv_main10_0 = C_2;
          inv_main10_1 = D_2;
          inv_main10_2 = A_2;
          goto inv_main10_0;

      default:
          abort ();
      }

    // return expression

}

