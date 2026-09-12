// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__loop_unswitching_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__loop_unswitching_001_range.c", 13, "reach_error"); }



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
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int G_7;
    int H_7;
    int I_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
    int I_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int F_10;
    int G_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int F_11;
    int G_11;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;

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
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((G_7 <= -1000000000) || (G_7 >= 1000000000))
        || ((H_7 <= -1000000000) || (H_7 >= 1000000000))
        || ((I_7 <= -1000000000) || (I_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((H_8 <= -1000000000) || (H_8 >= 1000000000))
        || ((I_8 <= -1000000000) || (I_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000))
        || ((F_9 <= -1000000000) || (F_9 >= 1000000000))
        || ((G_9 <= -1000000000) || (G_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000))
        || ((D_10 <= -1000000000) || (D_10 >= 1000000000))
        || ((E_10 <= -1000000000) || (E_10 >= 1000000000))
        || ((F_10 <= -1000000000) || (F_10 >= 1000000000))
        || ((G_10 <= -1000000000) || (G_10 >= 1000000000))
        || ((A_11 <= -1000000000) || (A_11 >= 1000000000))
        || ((B_11 <= -1000000000) || (B_11 >= 1000000000))
        || ((C_11 <= -1000000000) || (C_11 >= 1000000000))
        || ((D_11 <= -1000000000) || (D_11 >= 1000000000))
        || ((E_11 <= -1000000000) || (E_11 >= 1000000000))
        || ((F_11 <= -1000000000) || (F_11 >= 1000000000))
        || ((G_11 <= -1000000000) || (G_11 >= 1000000000))
        || ((A_12 <= -1000000000) || (A_12 >= 1000000000))
        || ((B_12 <= -1000000000) || (B_12 >= 1000000000))
        || ((C_12 <= -1000000000) || (C_12 >= 1000000000))
        || ((D_12 <= -1000000000) || (D_12 >= 1000000000))
        || ((E_12 <= -1000000000) || (E_12 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((E_1 == 0) && (B_1 == 0) && (A_1 == C_1) && (F_1 >= 1)
         && (F_1 == D_1)))
        abort ();
    INV_MAIN_42_0 = A_1;
    INV_MAIN_42_1 = B_1;
    INV_MAIN_42_2 = C_1;
    INV_MAIN_42_3 = D_1;
    INV_MAIN_42_4 = E_1;
    A_8 = __VERIFIER_nondet_int ();
    if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
        abort ();
    B_8 = __VERIFIER_nondet_int ();
    if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
        abort ();
    C_8 = __VERIFIER_nondet_int ();
    if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
        abort ();
    E_8 = __VERIFIER_nondet_int ();
    if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
        abort ();
    F_8 = INV_MAIN_42_0;
    G_8 = INV_MAIN_42_1;
    H_8 = INV_MAIN_42_2;
    D_8 = INV_MAIN_42_3;
    I_8 = INV_MAIN_42_4;
    if (!
        ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
         && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1) && (I_8 == (E_8 + -1))))
        abort ();
    INV_MAIN_42_0 = A_8;
    INV_MAIN_42_1 = B_8;
    INV_MAIN_42_2 = C_8;
    INV_MAIN_42_3 = D_8;
    INV_MAIN_42_4 = E_8;
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
          D_12 = INV_MAIN_42_0;
          A_12 = INV_MAIN_42_1;
          C_12 = INV_MAIN_42_2;
          E_12 = INV_MAIN_42_3;
          B_12 = INV_MAIN_42_4;
          if (!((!(D_12 >= 1)) && (!(C_12 >= 1)) && (!(A_12 == B_12))))
              abort ();
          goto main_error;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          C_7 = __VERIFIER_nondet_int ();
          if (((C_7 <= -1000000000) || (C_7 >= 1000000000)))
              abort ();
          E_7 = __VERIFIER_nondet_int ();
          if (((E_7 <= -1000000000) || (E_7 >= 1000000000)))
              abort ();
          F_7 = INV_MAIN_42_0;
          G_7 = INV_MAIN_42_1;
          H_7 = INV_MAIN_42_2;
          D_7 = INV_MAIN_42_3;
          I_7 = INV_MAIN_42_4;
          if (!
              ((H_7 == (C_7 + 1)) && (G_7 == (B_7 + -1)) && (F_7 == (A_7 + 1))
               && (H_7 >= 1) && (F_7 >= 1) && (!(D_7 >= 1))
               && (I_7 == (E_7 + 1))))
              abort ();
          INV_MAIN_42_0 = A_7;
          INV_MAIN_42_1 = B_7;
          INV_MAIN_42_2 = C_7;
          INV_MAIN_42_3 = D_7;
          INV_MAIN_42_4 = E_7;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      case 2:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      case 3:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          F_9 = INV_MAIN_42_0;
          G_9 = INV_MAIN_42_1;
          C_9 = INV_MAIN_42_2;
          D_9 = INV_MAIN_42_3;
          E_9 = INV_MAIN_42_4;
          if (!
              ((F_9 == (A_9 + 1)) && (F_9 >= 1) && (!(C_9 >= 1))
               && (G_9 == (B_9 + -1))))
              abort ();
          INV_MAIN_42_0 = A_9;
          INV_MAIN_42_1 = B_9;
          INV_MAIN_42_2 = C_9;
          INV_MAIN_42_3 = D_9;
          INV_MAIN_42_4 = E_9;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      case 4:
          C_11 = __VERIFIER_nondet_int ();
          if (((C_11 <= -1000000000) || (C_11 >= 1000000000)))
              abort ();
          E_11 = __VERIFIER_nondet_int ();
          if (((E_11 <= -1000000000) || (E_11 >= 1000000000)))
              abort ();
          A_11 = INV_MAIN_42_0;
          B_11 = INV_MAIN_42_1;
          F_11 = INV_MAIN_42_2;
          D_11 = INV_MAIN_42_3;
          G_11 = INV_MAIN_42_4;
          if (!
              ((F_11 == (C_11 + 1)) && (!(A_11 >= 1)) && (F_11 >= 1)
               && (D_11 >= 1) && (G_11 == (E_11 + -1))))
              abort ();
          INV_MAIN_42_0 = A_11;
          INV_MAIN_42_1 = B_11;
          INV_MAIN_42_2 = C_11;
          INV_MAIN_42_3 = D_11;
          INV_MAIN_42_4 = E_11;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      case 5:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_10 = __VERIFIER_nondet_int ();
          if (((C_10 <= -1000000000) || (C_10 >= 1000000000)))
              abort ();
          E_10 = __VERIFIER_nondet_int ();
          if (((E_10 <= -1000000000) || (E_10 >= 1000000000)))
              abort ();
          A_10 = INV_MAIN_42_0;
          B_10 = INV_MAIN_42_1;
          F_10 = INV_MAIN_42_2;
          D_10 = INV_MAIN_42_3;
          G_10 = INV_MAIN_42_4;
          if (!
              ((F_10 == (C_10 + 1)) && (!(A_10 >= 1)) && (F_10 >= 1)
               && (!(D_10 >= 1)) && (G_10 == (E_10 + 1))))
              abort ();
          INV_MAIN_42_0 = A_10;
          INV_MAIN_42_1 = B_10;
          INV_MAIN_42_2 = C_10;
          INV_MAIN_42_3 = D_10;
          INV_MAIN_42_4 = E_10;
          goto INV_MAIN_42_0;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          F_9 = INV_MAIN_42_0;
          G_9 = INV_MAIN_42_1;
          C_9 = INV_MAIN_42_2;
          D_9 = INV_MAIN_42_3;
          E_9 = INV_MAIN_42_4;
          if (!
              ((F_9 == (A_9 + 1)) && (F_9 >= 1) && (!(C_9 >= 1))
               && (G_9 == (B_9 + -1))))
              abort ();
          INV_MAIN_42_0 = A_9;
          INV_MAIN_42_1 = B_9;
          INV_MAIN_42_2 = C_9;
          INV_MAIN_42_3 = D_9;
          INV_MAIN_42_4 = E_9;
          goto INV_MAIN_42_1;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_11 = __VERIFIER_nondet_int ();
          if (((C_11 <= -1000000000) || (C_11 >= 1000000000)))
              abort ();
          E_11 = __VERIFIER_nondet_int ();
          if (((E_11 <= -1000000000) || (E_11 >= 1000000000)))
              abort ();
          A_11 = INV_MAIN_42_0;
          B_11 = INV_MAIN_42_1;
          F_11 = INV_MAIN_42_2;
          D_11 = INV_MAIN_42_3;
          G_11 = INV_MAIN_42_4;
          if (!
              ((F_11 == (C_11 + 1)) && (!(A_11 >= 1)) && (F_11 >= 1)
               && (D_11 >= 1) && (G_11 == (E_11 + -1))))
              abort ();
          INV_MAIN_42_0 = A_11;
          INV_MAIN_42_1 = B_11;
          INV_MAIN_42_2 = C_11;
          INV_MAIN_42_3 = D_11;
          INV_MAIN_42_4 = E_11;
          goto INV_MAIN_42_2;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }
  INV_MAIN_42_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          C_7 = __VERIFIER_nondet_int ();
          if (((C_7 <= -1000000000) || (C_7 >= 1000000000)))
              abort ();
          E_7 = __VERIFIER_nondet_int ();
          if (((E_7 <= -1000000000) || (E_7 >= 1000000000)))
              abort ();
          F_7 = INV_MAIN_42_0;
          G_7 = INV_MAIN_42_1;
          H_7 = INV_MAIN_42_2;
          D_7 = INV_MAIN_42_3;
          I_7 = INV_MAIN_42_4;
          if (!
              ((H_7 == (C_7 + 1)) && (G_7 == (B_7 + -1)) && (F_7 == (A_7 + 1))
               && (H_7 >= 1) && (F_7 >= 1) && (!(D_7 >= 1))
               && (I_7 == (E_7 + 1))))
              abort ();
          INV_MAIN_42_0 = A_7;
          INV_MAIN_42_1 = B_7;
          INV_MAIN_42_2 = C_7;
          INV_MAIN_42_3 = D_7;
          INV_MAIN_42_4 = E_7;
          goto INV_MAIN_42_3;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = __VERIFIER_nondet_int ();
          if (((E_8 <= -1000000000) || (E_8 >= 1000000000)))
              abort ();
          F_8 = INV_MAIN_42_0;
          G_8 = INV_MAIN_42_1;
          H_8 = INV_MAIN_42_2;
          D_8 = INV_MAIN_42_3;
          I_8 = INV_MAIN_42_4;
          if (!
              ((H_8 == (C_8 + 1)) && (G_8 == (B_8 + -1)) && (F_8 == (A_8 + 1))
               && (H_8 >= 1) && (F_8 >= 1) && (D_8 >= 1)
               && (I_8 == (E_8 + -1))))
              abort ();
          INV_MAIN_42_0 = A_8;
          INV_MAIN_42_1 = B_8;
          INV_MAIN_42_2 = C_8;
          INV_MAIN_42_3 = D_8;
          INV_MAIN_42_4 = E_8;
          goto INV_MAIN_42_4;

      default:
          abort ();
      }

    // return expression

}

