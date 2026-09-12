// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/enc-rev_accum_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "enc-rev_accum_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int rev_unknown_3_0;
    int rev_unknown_3_1;
    int rev_unknown_3_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;



    // main logic
    goto main_init;

  main_init:
    if (!((!(0 == D_1)) && (A_1 == C_1) && (!((0 == D_1) == (B_1 == 0)))))
        abort ();
    rev_unknown_3_0 = A_1;
    rev_unknown_3_1 = C_1;
    rev_unknown_3_2 = B_1;
    A_0 = __VERIFIER_nondet_int ();
    B_0 = __VERIFIER_nondet_int ();
    C_0 = __VERIFIER_nondet_int ();
    D_0 = __VERIFIER_nondet_int ();
    G_0 = rev_unknown_3_0;
    F_0 = rev_unknown_3_1;
    E_0 = rev_unknown_3_2;
    if (!
        ((0 == D_0) && (F_0 == (C_0 + 1)) && (E_0 == (B_0 + -1))
         && (A_0 == G_0) && (!((0 == D_0) == (B_0 == 0)))))
        abort ();
    rev_unknown_3_0 = A_0;
    rev_unknown_3_1 = C_0;
    rev_unknown_3_2 = B_0;
    goto rev_unknown_3_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  rev_unknown_3_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          B_2 = rev_unknown_3_0;
          D_2 = rev_unknown_3_1;
          A_2 = rev_unknown_3_2;
          if (!((0 == C_2) && (D_2 == 0) && (!((0 == C_2) == (B_2 >= A_2)))))
              abort ();
          goto main_error;

      case 1:
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          D_0 = __VERIFIER_nondet_int ();
          G_0 = rev_unknown_3_0;
          F_0 = rev_unknown_3_1;
          E_0 = rev_unknown_3_2;
          if (!
              ((0 == D_0) && (F_0 == (C_0 + 1)) && (E_0 == (B_0 + -1))
               && (A_0 == G_0) && (!((0 == D_0) == (B_0 == 0)))))
              abort ();
          rev_unknown_3_0 = A_0;
          rev_unknown_3_1 = C_0;
          rev_unknown_3_2 = B_0;
          goto rev_unknown_3_0;

      default:
          abort ();
      }

    // return expression

}

