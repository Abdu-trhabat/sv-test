// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/inductive4_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "inductive4_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_unknown_2_0;
    int f_unknown_2_1;
    int incr_unknown_6_0;
    int incr_unknown_6_1;
    int f_unknown_4_0;
    int f_unknown_4_1;
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
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
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
    int D_5;
    int E_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int A_7;
    int B_7;
    int A_8;
    int B_8;
    int C_8;

    if (((f_unknown_2_0 <= -1000000000) || (f_unknown_2_0 >= 1000000000))
        || ((f_unknown_2_1 <= -1000000000) || (f_unknown_2_1 >= 1000000000))
        || ((incr_unknown_6_0 <= -1000000000)
            || (incr_unknown_6_0 >= 1000000000))
        || ((incr_unknown_6_1 <= -1000000000)
            || (incr_unknown_6_1 >= 1000000000))
        || ((f_unknown_4_0 <= -1000000000) || (f_unknown_4_0 >= 1000000000))
        || ((f_unknown_4_1 <= -1000000000) || (f_unknown_4_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
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
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
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
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(A_7 == (B_7 + 1)))
        abort ();
    incr_unknown_6_0 = A_7;
    incr_unknown_6_1 = B_7;
    B_3 = __VERIFIER_nondet_int ();
    if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
        abort ();
    A_3 = incr_unknown_6_0;
    C_3 = incr_unknown_6_1;
    if (!(B_3 == 3))
        abort ();
    f_unknown_2_0 = A_3;
    f_unknown_2_1 = C_3;
    C_0 = __VERIFIER_nondet_int ();
    if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
        abort ();
    D_0 = __VERIFIER_nondet_int ();
    if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
        abort ();
    E_0 = __VERIFIER_nondet_int ();
    if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
        abort ();
    A_0 = f_unknown_2_0;
    B_0 = f_unknown_2_1;
    if (!((!(0 == D_0)) && (E_0 == -4) && ((0 == D_0) == (-3 <= C_0))))
        abort ();
    f_unknown_2_0 = A_0;
    f_unknown_2_1 = B_0;
    goto f_unknown_2_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  f_unknown_2_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          A_0 = f_unknown_2_0;
          B_0 = f_unknown_2_1;
          if (!((!(0 == D_0)) && (E_0 == -4) && ((0 == D_0) == (-3 <= C_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          A_0 = f_unknown_2_0;
          B_0 = f_unknown_2_1;
          if (!((!(0 == D_0)) && (E_0 == -4) && ((0 == D_0) == (-3 <= C_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_2;

      case 1:
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          A_0 = f_unknown_2_0;
          B_0 = f_unknown_2_1;
          if (!((!(0 == D_0)) && (E_0 == -4) && ((0 == D_0) == (-3 <= C_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_2;

      case 2:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = f_unknown_2_0;
          B_4 = f_unknown_2_1;
          if (!
              (((0 == C_4) == (-3 <= B_4)) && (!(0 == D_4)) && (0 == C_4)
               && (A_4 == E_4) && (!((0 == D_4) == (B_4 <= 1)))))
              abort ();
          f_unknown_4_0 = A_4;
          f_unknown_4_1 = B_4;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = f_unknown_4_0;
          D_5 = f_unknown_4_1;
          if (!
              ((!(0 == C_5)) && (A_5 == E_5) && (D_5 == -4)
               && ((0 == C_5) == (-3 <= B_5))))
              abort ();
          f_unknown_4_0 = A_5;
          f_unknown_4_1 = B_5;
          goto f_unknown_4_3;

      default:
          abort ();
      }
  f_unknown_4_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          B_8 = f_unknown_4_0;
          A_8 = f_unknown_4_1;
          if (!((0 == C_8) && (A_8 == 3) && (!((0 == C_8) == (B_8 >= -3)))))
              abort ();
          goto main_error;

      case 1:
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          A_2 = f_unknown_4_0;
          E_2 = f_unknown_4_1;
          if (!
              ((!((0 == D_2) == (B_2 <= 1))) && (0 == C_2) && (0 == D_2)
               && (F_2 == (B_2 + -2)) && ((0 == C_2) == (-3 <= B_2))))
              abort ();
          f_unknown_2_0 = A_2;
          f_unknown_2_1 = E_2;
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          A_0 = f_unknown_2_0;
          B_0 = f_unknown_2_1;
          if (!((!(0 == D_0)) && (E_0 == -4) && ((0 == D_0) == (-3 <= C_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_2;

      case 2:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = f_unknown_4_0;
          D_5 = f_unknown_4_1;
          if (!
              ((!(0 == C_5)) && (A_5 == E_5) && (D_5 == -4)
               && ((0 == C_5) == (-3 <= B_5))))
              abort ();
          f_unknown_4_0 = A_5;
          f_unknown_4_1 = B_5;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = f_unknown_4_0;
          D_5 = f_unknown_4_1;
          if (!
              ((!(0 == C_5)) && (A_5 == E_5) && (D_5 == -4)
               && ((0 == C_5) == (-3 <= B_5))))
              abort ();
          f_unknown_4_0 = A_5;
          f_unknown_4_1 = B_5;
          goto f_unknown_4_3;

      case 3:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = f_unknown_4_0;
          D_5 = f_unknown_4_1;
          if (!
              ((!(0 == C_5)) && (A_5 == E_5) && (D_5 == -4)
               && ((0 == C_5) == (-3 <= B_5))))
              abort ();
          f_unknown_4_0 = A_5;
          f_unknown_4_1 = B_5;
          goto f_unknown_4_3;

      default:
          abort ();
      }
  f_unknown_2_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          A_1 = f_unknown_2_0;
          B_1 = f_unknown_2_1;
          if (!
              (((0 == D_1) == (-3 <= C_1)) && (0 == E_1) && (0 == D_1)
               && (F_1 == (C_1 + -2)) && (!((0 == E_1) == (C_1 <= 1)))))
              abort ();
          f_unknown_2_0 = A_1;
          f_unknown_2_1 = B_1;
          goto f_unknown_2_0;

      case 1:
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          A_0 = f_unknown_2_0;
          B_0 = f_unknown_2_1;
          if (!((!(0 == D_0)) && (E_0 == -4) && ((0 == D_0) == (-3 <= C_0))))
              abort ();
          f_unknown_2_0 = A_0;
          f_unknown_2_1 = B_0;
          goto f_unknown_2_2;

      default:
          abort ();
      }
  f_unknown_4_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          D_6 = __VERIFIER_nondet_int ();
          if (((D_6 <= -1000000000) || (D_6 >= 1000000000)))
              abort ();
          F_6 = f_unknown_4_0;
          E_6 = f_unknown_4_1;
          if (!
              ((!((0 == D_6) == (B_6 <= 1))) && (0 == C_6) && (0 == D_6)
               && (A_6 == F_6) && (E_6 == (B_6 + -2))
               && ((0 == C_6) == (-3 <= B_6))))
              abort ();
          f_unknown_4_0 = A_6;
          f_unknown_4_1 = B_6;
          goto f_unknown_4_1;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = f_unknown_4_0;
          D_5 = f_unknown_4_1;
          if (!
              ((!(0 == C_5)) && (A_5 == E_5) && (D_5 == -4)
               && ((0 == C_5) == (-3 <= B_5))))
              abort ();
          f_unknown_4_0 = A_5;
          f_unknown_4_1 = B_5;
          goto f_unknown_4_3;

      default:
          abort ();
      }

    // return expression

}

