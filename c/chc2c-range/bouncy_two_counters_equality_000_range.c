// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/bouncy_two_counters_equality_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "bouncy_two_counters_equality_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int itp2_0;
    int itp2_1;
    int itp2_2;
    int itp1_0;
    int itp1_1;
    int itp1_2;
    int A_0;
    int B_0;
    int C_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_4;
    int B_4;
    int C_4;

    if (((itp2_0 <= -1000000000) || (itp2_0 >= 1000000000))
        || ((itp2_1 <= -1000000000) || (itp2_1 >= 1000000000))
        || ((itp2_2 <= -1000000000) || (itp2_2 >= 1000000000))
        || ((itp1_0 <= -1000000000) || (itp1_0 >= 1000000000))
        || ((itp1_1 <= -1000000000) || (itp1_1 >= 1000000000))
        || ((itp1_2 <= -1000000000) || (itp1_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((B_0 == 0) && (A_0 == 0) && (C_0 == 0)))
        abort ();
    itp1_0 = A_0;
    itp1_1 = B_0;
    itp1_2 = C_0;
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    E_1 = __VERIFIER_nondet_int ();
    if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
        abort ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    A_1 = itp1_0;
    C_1 = itp1_1;
    B_1 = itp1_2;
    if (!((E_1 == C_1) && (D_1 == (A_1 + 1)) && (F_1 == (B_1 + 1))))
        abort ();
    itp1_0 = D_1;
    itp1_1 = E_1;
    itp1_2 = F_1;
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
          C_4 = itp2_2;
          if (!((A_4 == B_4) && (!(C_4 == 0))))
              abort ();
          goto main_error;

      case 1:
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          C_3 = itp2_0;
          A_3 = itp2_1;
          B_3 = itp2_2;
          if (!((E_3 == (A_3 + 1)) && (D_3 == C_3) && (F_3 == (B_3 + -1))))
              abort ();
          itp2_0 = D_3;
          itp2_1 = E_3;
          itp2_2 = F_3;
          goto itp2_0;

      default:
          abort ();
      }
  itp1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = itp1_0;
          B_2 = itp1_1;
          C_2 = itp1_2;
          if (!1)
              abort ();
          itp2_0 = A_2;
          itp2_1 = B_2;
          itp2_2 = C_2;
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          C_3 = itp2_0;
          A_3 = itp2_1;
          B_3 = itp2_2;
          if (!((E_3 == (A_3 + 1)) && (D_3 == C_3) && (F_3 == (B_3 + -1))))
              abort ();
          itp2_0 = D_3;
          itp2_1 = E_3;
          itp2_2 = F_3;
          goto itp2_0;

      case 1:
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          A_1 = itp1_0;
          C_1 = itp1_1;
          B_1 = itp1_2;
          if (!((E_1 == C_1) && (D_1 == (A_1 + 1)) && (F_1 == (B_1 + 1))))
              abort ();
          itp1_0 = D_1;
          itp1_1 = E_1;
          itp1_2 = F_1;
          goto itp1_1;

      default:
          abort ();
      }

    // return expression

}

