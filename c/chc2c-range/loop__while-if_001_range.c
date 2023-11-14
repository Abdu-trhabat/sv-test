// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__while-if_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__while-if_001_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_42_0;
    int INV_MAIN_42_1;
    int INV_MAIN_42_2;
    int INV_MAIN_42_3;
    int INV_MAIN_42_4;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    int I_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;

    if (((INV_MAIN_42_0 <= -1000000000) || (INV_MAIN_42_0 >= 1000000000))
        || ((INV_MAIN_42_1 <= -1000000000) || (INV_MAIN_42_1 >= 1000000000))
        || ((INV_MAIN_42_2 <= -1000000000) || (INV_MAIN_42_2 >= 1000000000))
        || ((INV_MAIN_42_3 <= -1000000000) || (INV_MAIN_42_3 >= 1000000000))
        || ((INV_MAIN_42_4 <= -1000000000) || (INV_MAIN_42_4 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((H_5 <= -1000000000) || (H_5 >= 1000000000))
        || ((I_5 <= -1000000000) || (I_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((G_6 <= -1000000000) || (G_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((F_1 == D_1) && (E_1 == 0) && (B_1 == 0) && (F_1 >= 1)
         && (A_1 == C_1)))
        abort ();
    INV_MAIN_42_0 = A_1;
    INV_MAIN_42_1 = B_1;
    INV_MAIN_42_2 = C_1;
    INV_MAIN_42_3 = D_1;
    INV_MAIN_42_4 = E_1;
    A_5 = __VERIFIER_nondet_int ();
    if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
        abort ();
    B_5 = __VERIFIER_nondet_int ();
    if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
        abort ();
    C_5 = __VERIFIER_nondet_int ();
    if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
        abort ();
    E_5 = __VERIFIER_nondet_int ();
    if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
        abort ();
    F_5 = INV_MAIN_42_0;
    G_5 = INV_MAIN_42_1;
    H_5 = INV_MAIN_42_2;
    D_5 = INV_MAIN_42_3;
    I_5 = INV_MAIN_42_4;
    if (!
        ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
         && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1) && (I_5 == (E_5 + -1))))
        abort ();
    INV_MAIN_42_0 = A_5;
    INV_MAIN_42_1 = B_5;
    INV_MAIN_42_2 = C_5;
    INV_MAIN_42_3 = D_5;
    INV_MAIN_42_4 = E_5;
    goto INV_MAIN_42_4;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_23:
    goto INV_MAIN_23;
  INV_MAIN_42_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          D_9 = INV_MAIN_42_0;
          A_9 = INV_MAIN_42_1;
          C_9 = INV_MAIN_42_2;
          E_9 = INV_MAIN_42_3;
          B_9 = INV_MAIN_42_4;
          if (!((!(D_9 >= 1)) && (!(C_9 >= 1)) && (!(A_9 == B_9))))
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          F_4 = INV_MAIN_42_0;
          G_4 = INV_MAIN_42_1;
          H_4 = INV_MAIN_42_2;
          D_4 = INV_MAIN_42_3;
          E_4 = INV_MAIN_42_4;
          if (!
              ((G_4 == (B_4 + -1)) && (F_4 == (A_4 + 1)) && (H_4 >= 1)
               && (F_4 >= 1) && (!(D_4 >= 1)) && (H_4 == (C_4 + 1))))
              abort ();
          INV_MAIN_42_0 = A_4;
          INV_MAIN_42_1 = B_4;
          INV_MAIN_42_2 = C_4;
          INV_MAIN_42_3 = D_4;
          INV_MAIN_42_4 = E_4;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

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
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      case 3:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          F_6 = INV_MAIN_42_0;
          G_6 = INV_MAIN_42_1;
          C_6 = INV_MAIN_42_2;
          D_6 = INV_MAIN_42_3;
          E_6 = INV_MAIN_42_4;
          if (!
              ((F_6 == (A_6 + 1)) && (F_6 >= 1) && (!(C_6 >= 1))
               && (G_6 == (B_6 + -1))))
              abort ();
          INV_MAIN_42_0 = A_6;
          INV_MAIN_42_1 = B_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = D_6;
          INV_MAIN_42_4 = E_6;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      case 4:
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          A_8 = INV_MAIN_42_0;
          B_8 = INV_MAIN_42_1;
          F_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          G_8 = INV_MAIN_42_4;
          if (!
              ((F_8 == (C_8 + 1)) && (!(A_8 >= 1)) && (F_8 >= 1) && (D_8 >= 1)
               && (G_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      case 5:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_7 = __VERIFIER_nondet_int ();
          if (((C_7 <= -1000000000) || (C_7 >= 1000000000)))
              abort ();
          A_7 = INV_MAIN_42_0;
          B_7 = INV_MAIN_42_1;
          F_7 = INV_MAIN_42_2;
          D_7 = INV_MAIN_42_3;
          E_7 = INV_MAIN_42_4;
          if (!
              ((!(A_7 >= 1)) && (F_7 >= 1) && (!(D_7 >= 1))
               && (F_7 == (C_7 + 1))))
              abort ();
          INV_MAIN_42_0 = A_7;
          INV_MAIN_42_1 = B_7;
          INV_MAIN_42_2 = C_7;
          INV_MAIN_42_3 = D_7;
          INV_MAIN_42_4 = E_7;
          goto INV_MAIN_42_0;

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
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          F_4 = INV_MAIN_42_0;
          G_4 = INV_MAIN_42_1;
          H_4 = INV_MAIN_42_2;
          D_4 = INV_MAIN_42_3;
          E_4 = INV_MAIN_42_4;
          if (!
              ((G_4 == (B_4 + -1)) && (F_4 == (A_4 + 1)) && (H_4 >= 1)
               && (F_4 >= 1) && (!(D_4 >= 1)) && (H_4 == (C_4 + 1))))
              abort ();
          INV_MAIN_42_0 = A_4;
          INV_MAIN_42_1 = B_4;
          INV_MAIN_42_2 = C_4;
          INV_MAIN_42_3 = D_4;
          INV_MAIN_42_4 = E_4;
          goto INV_MAIN_42_1;

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
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          A_8 = INV_MAIN_42_0;
          B_8 = INV_MAIN_42_1;
          F_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          G_8 = INV_MAIN_42_4;
          if (!
              ((F_8 == (C_8 + 1)) && (!(A_8 >= 1)) && (F_8 >= 1) && (D_8 >= 1)
               && (G_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_2;

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
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          F_6 = INV_MAIN_42_0;
          G_6 = INV_MAIN_42_1;
          C_6 = INV_MAIN_42_2;
          D_6 = INV_MAIN_42_3;
          E_6 = INV_MAIN_42_4;
          if (!
              ((F_6 == (A_6 + 1)) && (F_6 >= 1) && (!(C_6 >= 1))
               && (G_6 == (B_6 + -1))))
              abort ();
          INV_MAIN_42_0 = A_6;
          INV_MAIN_42_1 = B_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = D_6;
          INV_MAIN_42_4 = E_6;
          goto INV_MAIN_42_3;

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
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = INV_MAIN_42_0;
          G_5 = INV_MAIN_42_1;
          H_5 = INV_MAIN_42_2;
          D_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          if (!
              ((H_5 == (C_5 + 1)) && (G_5 == (B_5 + -1)) && (F_5 == (A_5 + 1))
               && (D_5 >= 1) && (H_5 >= 1) && (F_5 >= 1)
               && (I_5 == (E_5 + -1))))
              abort ();
          INV_MAIN_42_0 = A_5;
          INV_MAIN_42_1 = B_5;
          INV_MAIN_42_2 = C_5;
          INV_MAIN_42_3 = D_5;
          INV_MAIN_42_4 = E_5;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }

    // return expression

}

