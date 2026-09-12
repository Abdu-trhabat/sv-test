// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__loop_unswitching_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__loop_unswitching_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_23_0;
    int INV_MAIN_23_1;
    int INV_MAIN_23_2;
    int INV_MAIN_23_3;
    int INV_MAIN_23_4;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int I_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((E_0 == 0) && (B_0 == 0) && (A_0 == C_0) && (!(F_0 >= 1))
         && (F_0 == D_0)))
        abort ();
    INV_MAIN_23_0 = A_0;
    INV_MAIN_23_1 = B_0;
    INV_MAIN_23_2 = C_0;
    INV_MAIN_23_3 = D_0;
    INV_MAIN_23_4 = E_0;
    A_4 = __VERIFIER_nondet_int ();
    B_4 = __VERIFIER_nondet_int ();
    F_4 = INV_MAIN_23_0;
    G_4 = INV_MAIN_23_1;
    C_4 = INV_MAIN_23_2;
    D_4 = INV_MAIN_23_3;
    E_4 = INV_MAIN_23_4;
    if (!
        ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
         && (G_4 == (B_4 + 1))))
        abort ();
    INV_MAIN_23_0 = A_4;
    INV_MAIN_23_1 = B_4;
    INV_MAIN_23_2 = C_4;
    INV_MAIN_23_3 = D_4;
    INV_MAIN_23_4 = E_4;
    goto INV_MAIN_23_4;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42:
    goto INV_MAIN_42;
  INV_MAIN_23_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          D_12 = INV_MAIN_23_0;
          A_12 = INV_MAIN_23_1;
          C_12 = INV_MAIN_23_2;
          E_12 = INV_MAIN_23_3;
          B_12 = INV_MAIN_23_4;
          if (!((!(D_12 >= 1)) && (!(C_12 >= 1)) && (!(A_12 == B_12))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = INV_MAIN_23_0;
          G_2 = INV_MAIN_23_1;
          H_2 = INV_MAIN_23_2;
          D_2 = INV_MAIN_23_3;
          I_2 = INV_MAIN_23_4;
          if (!
              ((H_2 == (C_2 + 1)) && (G_2 == (B_2 + 1)) && (F_2 == (A_2 + 1))
               && (H_2 >= 1) && (F_2 >= 1) && (!(D_2 >= 1))
               && (I_2 == (E_2 + 1))))
              abort ();
          INV_MAIN_23_0 = A_2;
          INV_MAIN_23_1 = B_2;
          INV_MAIN_23_2 = C_2;
          INV_MAIN_23_3 = D_2;
          INV_MAIN_23_4 = E_2;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          F_3 = INV_MAIN_23_0;
          G_3 = INV_MAIN_23_1;
          H_3 = INV_MAIN_23_2;
          D_3 = INV_MAIN_23_3;
          I_3 = INV_MAIN_23_4;
          if (!
              ((H_3 == (C_3 + 1)) && (G_3 == (B_3 + 1)) && (F_3 == (A_3 + 1))
               && (H_3 >= 1) && (F_3 >= 1) && (D_3 >= 1)
               && (I_3 == (E_3 + -1))))
              abort ();
          INV_MAIN_23_0 = A_3;
          INV_MAIN_23_1 = B_3;
          INV_MAIN_23_2 = C_3;
          INV_MAIN_23_3 = D_3;
          INV_MAIN_23_4 = E_3;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      case 3:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      case 4:
          C_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          A_5 = INV_MAIN_23_0;
          B_5 = INV_MAIN_23_1;
          F_5 = INV_MAIN_23_2;
          D_5 = INV_MAIN_23_3;
          G_5 = INV_MAIN_23_4;
          if (!
              ((F_5 == (C_5 + 1)) && (!(A_5 >= 1)) && (F_5 >= 1)
               && (!(D_5 >= 1)) && (G_5 == (E_5 + 1))))
              abort ();
          INV_MAIN_23_0 = A_5;
          INV_MAIN_23_1 = B_5;
          INV_MAIN_23_2 = C_5;
          INV_MAIN_23_3 = D_5;
          INV_MAIN_23_4 = E_5;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      case 5:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      default:
          abort ();
      }
  INV_MAIN_23_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_6 = __VERIFIER_nondet_int ();
          E_6 = __VERIFIER_nondet_int ();
          A_6 = INV_MAIN_23_0;
          B_6 = INV_MAIN_23_1;
          F_6 = INV_MAIN_23_2;
          D_6 = INV_MAIN_23_3;
          G_6 = INV_MAIN_23_4;
          if (!
              ((F_6 == (C_6 + 1)) && (!(A_6 >= 1)) && (F_6 >= 1) && (D_6 >= 1)
               && (G_6 == (E_6 + -1))))
              abort ();
          INV_MAIN_23_0 = A_6;
          INV_MAIN_23_1 = B_6;
          INV_MAIN_23_2 = C_6;
          INV_MAIN_23_3 = D_6;
          INV_MAIN_23_4 = E_6;
          goto INV_MAIN_23_0;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      default:
          abort ();
      }
  INV_MAIN_23_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          A_5 = INV_MAIN_23_0;
          B_5 = INV_MAIN_23_1;
          F_5 = INV_MAIN_23_2;
          D_5 = INV_MAIN_23_3;
          G_5 = INV_MAIN_23_4;
          if (!
              ((F_5 == (C_5 + 1)) && (!(A_5 >= 1)) && (F_5 >= 1)
               && (!(D_5 >= 1)) && (G_5 == (E_5 + 1))))
              abort ();
          INV_MAIN_23_0 = A_5;
          INV_MAIN_23_1 = B_5;
          INV_MAIN_23_2 = C_5;
          INV_MAIN_23_3 = D_5;
          INV_MAIN_23_4 = E_5;
          goto INV_MAIN_23_1;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      default:
          abort ();
      }
  INV_MAIN_23_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          F_3 = INV_MAIN_23_0;
          G_3 = INV_MAIN_23_1;
          H_3 = INV_MAIN_23_2;
          D_3 = INV_MAIN_23_3;
          I_3 = INV_MAIN_23_4;
          if (!
              ((H_3 == (C_3 + 1)) && (G_3 == (B_3 + 1)) && (F_3 == (A_3 + 1))
               && (H_3 >= 1) && (F_3 >= 1) && (D_3 >= 1)
               && (I_3 == (E_3 + -1))))
              abort ();
          INV_MAIN_23_0 = A_3;
          INV_MAIN_23_1 = B_3;
          INV_MAIN_23_2 = C_3;
          INV_MAIN_23_3 = D_3;
          INV_MAIN_23_4 = E_3;
          goto INV_MAIN_23_2;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      default:
          abort ();
      }
  INV_MAIN_23_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = INV_MAIN_23_0;
          G_2 = INV_MAIN_23_1;
          H_2 = INV_MAIN_23_2;
          D_2 = INV_MAIN_23_3;
          I_2 = INV_MAIN_23_4;
          if (!
              ((H_2 == (C_2 + 1)) && (G_2 == (B_2 + 1)) && (F_2 == (A_2 + 1))
               && (H_2 >= 1) && (F_2 >= 1) && (!(D_2 >= 1))
               && (I_2 == (E_2 + 1))))
              abort ();
          INV_MAIN_23_0 = A_2;
          INV_MAIN_23_1 = B_2;
          INV_MAIN_23_2 = C_2;
          INV_MAIN_23_3 = D_2;
          INV_MAIN_23_4 = E_2;
          goto INV_MAIN_23_3;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = INV_MAIN_23_0;
          G_4 = INV_MAIN_23_1;
          C_4 = INV_MAIN_23_2;
          D_4 = INV_MAIN_23_3;
          E_4 = INV_MAIN_23_4;
          if (!
              ((F_4 == (A_4 + 1)) && (F_4 >= 1) && (!(C_4 >= 1))
               && (G_4 == (B_4 + 1))))
              abort ();
          INV_MAIN_23_0 = A_4;
          INV_MAIN_23_1 = B_4;
          INV_MAIN_23_2 = C_4;
          INV_MAIN_23_3 = D_4;
          INV_MAIN_23_4 = E_4;
          goto INV_MAIN_23_4;

      default:
          abort ();
      }

    // return expression

}

