// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/inductive6_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "inductive6_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_unknown_4_0;
    int f_unknown_4_1;
    int decr_unknown_2_0;
    int decr_unknown_2_1;
    int f_unknown_6_0;
    int f_unknown_6_1;
    int A_0;
    int B_0;
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
    int C_4;



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!((0 == C_3) && (A_3 == 1) && ((0 == C_3) == (B_3 <= 0))))
              abort ();
          f_unknown_6_0 = A_3;
          f_unknown_6_1 = B_3;
          C_4 = __VERIFIER_nondet_int ();
          B_4 = f_unknown_6_0;
          A_4 = f_unknown_6_1;
          if (!((0 == C_4) && (A_4 == 3) && ((0 == C_4) == (B_4 <= 0))))
              abort ();
          goto main_error;

      case 1:
          if (!(A_0 == (B_0 + -1)))
              abort ();
          decr_unknown_2_0 = A_0;
          decr_unknown_2_1 = B_0;
          B_1 = __VERIFIER_nondet_int ();
          A_1 = decr_unknown_2_0;
          C_1 = decr_unknown_2_1;
          if (!(B_1 == 3))
              abort ();
          f_unknown_4_0 = A_1;
          f_unknown_4_1 = C_1;
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = f_unknown_4_0;
          B_2 = f_unknown_4_1;
          if (!((!(0 == C_2)) && (A_2 == D_2) && ((0 == C_2) == (B_2 <= 0))))
              abort ();
          f_unknown_6_0 = A_2;
          f_unknown_6_1 = B_2;
          C_4 = __VERIFIER_nondet_int ();
          B_4 = f_unknown_6_0;
          A_4 = f_unknown_6_1;
          if (!((0 == C_4) && (A_4 == 3) && ((0 == C_4) == (B_4 <= 0))))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

