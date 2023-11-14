// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/inductive6-3_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "inductive6-3_000_range.c", 13, "reach_error"); }



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
    int D_1;
    int E_1;
    int F_1;
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
    int D_4;
    int E_4;
    int F_4;

    if (((f_unknown_4_0 <= -1000000000) || (f_unknown_4_0 >= 1000000000))
        || ((f_unknown_4_1 <= -1000000000) || (f_unknown_4_1 >= 1000000000))
        || ((decr_unknown_2_0 <= -1000000000)
            || (decr_unknown_2_0 >= 1000000000))
        || ((decr_unknown_2_1 <= -1000000000)
            || (decr_unknown_2_1 >= 1000000000))
        || ((f_unknown_6_0 <= -1000000000) || (f_unknown_6_0 >= 1000000000))
        || ((f_unknown_6_1 <= -1000000000) || (f_unknown_6_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000)))
        abort ();

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
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = f_unknown_6_0;
          A_4 = f_unknown_6_1;
          if (!
              ((!((0 == C_4) == (A_4 >= 3))) && ((0 == B_4) == (F_4 <= 0))
               && (!((0 == E_4) == ((!(0 == C_4)) || (!(0 == D_4)))))
               && (0 == B_4) && (!(0 == E_4))
               && (!((0 == D_4) == (A_4 <= 0)))))
              abort ();
          goto main_error;

      case 1:
          if (!(A_0 == (B_0 + -1)))
              abort ();
          decr_unknown_2_0 = A_0;
          decr_unknown_2_1 = B_0;
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          A_1 = decr_unknown_2_0;
          F_1 = decr_unknown_2_1;
          if (!
              ((!((0 == C_1) == (B_1 >= 3)))
               && (!((0 == E_1) == ((!(0 == C_1)) || (!(0 == D_1)))))
               && (!(0 == E_1)) && (!((0 == D_1) == (B_1 <= 0)))))
              abort ();
          f_unknown_4_0 = A_1;
          f_unknown_4_1 = F_1;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = f_unknown_4_0;
          B_2 = f_unknown_4_1;
          if (!((!(0 == C_2)) && (A_2 == D_2) && ((0 == C_2) == (B_2 <= 0))))
              abort ();
          f_unknown_6_0 = A_2;
          f_unknown_6_1 = B_2;
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = f_unknown_6_0;
          A_4 = f_unknown_6_1;
          if (!
              ((!((0 == C_4) == (A_4 >= 3))) && ((0 == B_4) == (F_4 <= 0))
               && (!((0 == E_4) == ((!(0 == C_4)) || (!(0 == D_4)))))
               && (0 == B_4) && (!(0 == E_4))
               && (!((0 == D_4) == (A_4 <= 0)))))
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

