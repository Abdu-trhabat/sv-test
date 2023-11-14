// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_mutants_05_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_mutants_05_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int itp_0;
    int itp_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;

    if (((itp_0 <= -1000000000) || (itp_0 >= 1000000000))
        || ((itp_1 <= -1000000000) || (itp_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((!(B_0 <= A_0)) && (A_0 == 0)))
        abort ();
    itp_0 = A_0;
    itp_1 = B_0;
    C_1 = __VERIFIER_nondet_int ();
    if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
        abort ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    A_1 = itp_0;
    B_1 = itp_1;
    if (!((C_1 == (A_1 + 1)) && (D_1 == (B_1 + 2))))
        abort ();
    itp_0 = C_1;
    itp_1 = D_1;
    goto itp_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  itp_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = itp_0;
          B_2 = itp_1;
          if (!((!(A_2 <= 1000)) && (B_2 <= 2000)))
              abort ();
          goto main_error;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          A_1 = itp_0;
          B_1 = itp_1;
          if (!((C_1 == (A_1 + 1)) && (D_1 == (B_1 + 2))))
              abort ();
          itp_0 = C_1;
          itp_1 = D_1;
          goto itp_0;

      default:
          abort ();
      }

    // return expression

}

