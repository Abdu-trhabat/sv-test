// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/count_by_2_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "count_by_2_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int itp2_0;
    int itp2_1;
    int itp1_0;
    int itp1_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;
    int B_2;
    int C_2;
    int A_3;
    int B_3;
    int C_3;
    int A_4;
    int B_4;

    if (((itp2_0 <= -1000000000) || (itp2_0 >= 1000000000))
        || ((itp2_1 <= -1000000000) || (itp2_1 >= 1000000000))
        || ((itp1_0 <= -1000000000) || (itp1_0 >= 1000000000))
        || ((itp1_1 <= -1000000000) || (itp1_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 0) && (B_0 == 128)))
        abort ();
    itp1_0 = A_0;
    itp1_1 = B_0;
    B_1 = __VERIFIER_nondet_int ();
    if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
        abort ();
    A_1 = itp1_0;
    C_1 = itp1_1;
    if (!((!(C_1 <= A_1)) && (B_1 == (A_1 + 2))))
        abort ();
    itp1_0 = B_1;
    itp1_1 = C_1;
    goto itp1_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  itp2_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = itp2_0;
          B_4 = itp2_1;
          if (!((A_4 >= B_4) && (!(A_4 == B_4))))
              abort ();
          goto main_error;

      case 1:
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          A_3 = itp2_0;
          C_3 = itp2_1;
          if (!((!(C_3 <= A_3)) && (B_3 == (A_3 + 2))))
              abort ();
          itp2_0 = B_3;
          itp2_1 = C_3;
          goto itp2_0;

      default:
          abort ();
      }
  itp1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          B_2 = itp1_0;
          A_2 = itp1_1;
          if (!((B_2 >= A_2) && (C_2 == (A_2 + 128))))
              abort ();
          itp2_0 = B_2;
          itp2_1 = C_2;
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          A_3 = itp2_0;
          C_3 = itp2_1;
          if (!((!(C_3 <= A_3)) && (B_3 == (A_3 + 2))))
              abort ();
          itp2_0 = B_3;
          itp2_1 = C_3;
          goto itp2_0;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          A_1 = itp1_0;
          C_1 = itp1_1;
          if (!((!(C_1 <= A_1)) && (B_1 == (A_1 + 2))))
              abort ();
          itp1_0 = B_1;
          itp1_1 = C_1;
          goto itp1_1;

      default:
          abort ();
      }

    // return expression

}

