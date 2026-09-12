// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/inductive3_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "inductive3_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_unknown_2_0;
    int f_unknown_2_1;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
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



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!
              (((0 == C_1) == (-1 <= B_1)) && (!(0 == D_1)) && (0 == C_1)
               && (A_1 == (E_1 + -1)) && (E_1 == (2 * B_1))
               && (!((0 == D_1) == (B_1 <= 1)))))
              abort ();
          f_unknown_2_0 = A_1;
          f_unknown_2_1 = B_1;
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          E_0 = f_unknown_2_0;
          D_0 = f_unknown_2_1;
          if (!
              ((!(0 == C_0)) && (D_0 == -2) && (A_0 == E_0)
               && ((0 == C_0) == (-1 <= B_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_0;

      case 1:
          if (!
              ((!((0 == D_2) == (B_2 <= 1))) && (0 == C_2) && (0 == D_2)
               && (A_2 == B_2) && ((0 == C_2) == (-1 <= B_2))))
              abort ();
          f_unknown_2_0 = A_2;
          f_unknown_2_1 = B_2;
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          E_0 = f_unknown_2_0;
          D_0 = f_unknown_2_1;
          if (!
              ((!(0 == C_0)) && (D_0 == -2) && (A_0 == E_0)
               && ((0 == C_0) == (-1 <= B_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_0;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  f_unknown_2_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_3 = __VERIFIER_nondet_int ();
          B_3 = f_unknown_2_0;
          A_3 = f_unknown_2_1;
          if (!((0 == C_3) && (A_3 == 3) && (!((0 == C_3) == (B_3 >= 0)))))
              abort ();
          goto main_error;

      case 1:
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          E_0 = f_unknown_2_0;
          D_0 = f_unknown_2_1;
          if (!
              ((!(0 == C_0)) && (D_0 == -2) && (A_0 == E_0)
               && ((0 == C_0) == (-1 <= B_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_0;

      default:
          abort ();
      }

    // return expression

}

