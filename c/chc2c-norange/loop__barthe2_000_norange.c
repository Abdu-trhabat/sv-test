// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__barthe2_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__barthe2_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_1_0;
    int INV_MAIN_1_1;
    int INV_MAIN_1_2;
    int INV_MAIN_1_3;
    int INV_MAIN_1_4;
    int INV_MAIN_1_5;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((D_0 == 1) && (C_0 == 0) && (B_0 == E_0) && (A_0 == 0)
         && (F_0 == 0)))
        abort ();
    INV_MAIN_1_0 = A_0;
    INV_MAIN_1_1 = B_0;
    INV_MAIN_1_2 = C_0;
    INV_MAIN_1_3 = D_0;
    INV_MAIN_1_4 = E_0;
    INV_MAIN_1_5 = F_0;
    A_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    G_2 = INV_MAIN_1_0;
    B_2 = INV_MAIN_1_1;
    H_2 = INV_MAIN_1_2;
    D_2 = INV_MAIN_1_3;
    E_2 = INV_MAIN_1_4;
    F_2 = INV_MAIN_1_5;
    if (!
        ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
         && ((H_2 + G_2) == C_2)))
        abort ();
    INV_MAIN_1_0 = A_2;
    INV_MAIN_1_1 = B_2;
    INV_MAIN_1_2 = C_2;
    INV_MAIN_1_3 = D_2;
    INV_MAIN_1_4 = E_2;
    INV_MAIN_1_5 = F_2;
    goto INV_MAIN_1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          F_4 = INV_MAIN_1_0;
          E_4 = INV_MAIN_1_1;
          A_4 = INV_MAIN_1_2;
          D_4 = INV_MAIN_1_3;
          C_4 = INV_MAIN_1_4;
          B_4 = INV_MAIN_1_5;
          if (!((!(E_4 >= F_4)) && (!(C_4 >= D_4)) && (!(A_4 == B_4))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = INV_MAIN_1_0;
          B_2 = INV_MAIN_1_1;
          H_2 = INV_MAIN_1_2;
          D_2 = INV_MAIN_1_3;
          E_2 = INV_MAIN_1_4;
          F_2 = INV_MAIN_1_5;
          if (!
              ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
               && ((H_2 + G_2) == C_2)))
              abort ();
          INV_MAIN_1_0 = A_2;
          INV_MAIN_1_1 = B_2;
          INV_MAIN_1_2 = C_2;
          INV_MAIN_1_3 = D_2;
          INV_MAIN_1_4 = E_2;
          INV_MAIN_1_5 = F_2;
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = INV_MAIN_1_0;
          B_2 = INV_MAIN_1_1;
          H_2 = INV_MAIN_1_2;
          D_2 = INV_MAIN_1_3;
          E_2 = INV_MAIN_1_4;
          F_2 = INV_MAIN_1_5;
          if (!
              ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
               && ((H_2 + G_2) == C_2)))
              abort ();
          INV_MAIN_1_0 = A_2;
          INV_MAIN_1_1 = B_2;
          INV_MAIN_1_2 = C_2;
          INV_MAIN_1_3 = D_2;
          INV_MAIN_1_4 = E_2;
          INV_MAIN_1_5 = F_2;
          goto INV_MAIN_1_2;

      case 2:
          D_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          A_3 = INV_MAIN_1_0;
          B_3 = INV_MAIN_1_1;
          C_3 = INV_MAIN_1_2;
          G_3 = INV_MAIN_1_3;
          E_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((G_3 == (D_3 + -1)) && (!(B_3 >= A_3)) && (E_3 >= G_3)
               && ((H_3 + G_3) == F_3)))
              abort ();
          INV_MAIN_1_0 = A_3;
          INV_MAIN_1_1 = B_3;
          INV_MAIN_1_2 = C_3;
          INV_MAIN_1_3 = D_3;
          INV_MAIN_1_4 = E_3;
          INV_MAIN_1_5 = F_3;
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = INV_MAIN_1_0;
          B_2 = INV_MAIN_1_1;
          H_2 = INV_MAIN_1_2;
          D_2 = INV_MAIN_1_3;
          E_2 = INV_MAIN_1_4;
          F_2 = INV_MAIN_1_5;
          if (!
              ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
               && ((H_2 + G_2) == C_2)))
              abort ();
          INV_MAIN_1_0 = A_2;
          INV_MAIN_1_1 = B_2;
          INV_MAIN_1_2 = C_2;
          INV_MAIN_1_3 = D_2;
          INV_MAIN_1_4 = E_2;
          INV_MAIN_1_5 = F_2;
          goto INV_MAIN_1_2;

      case 3:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = INV_MAIN_1_0;
          B_2 = INV_MAIN_1_1;
          H_2 = INV_MAIN_1_2;
          D_2 = INV_MAIN_1_3;
          E_2 = INV_MAIN_1_4;
          F_2 = INV_MAIN_1_5;
          if (!
              ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
               && ((H_2 + G_2) == C_2)))
              abort ();
          INV_MAIN_1_0 = A_2;
          INV_MAIN_1_1 = B_2;
          INV_MAIN_1_2 = C_2;
          INV_MAIN_1_3 = D_2;
          INV_MAIN_1_4 = E_2;
          INV_MAIN_1_5 = F_2;
          goto INV_MAIN_1_2;

      default:
          abort ();
      }
  INV_MAIN_1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = INV_MAIN_1_0;
          B_1 = INV_MAIN_1_1;
          H_1 = INV_MAIN_1_2;
          I_1 = INV_MAIN_1_3;
          E_1 = INV_MAIN_1_4;
          J_1 = INV_MAIN_1_5;
          if (!
              (((H_1 + G_1) == C_1) && (I_1 == (D_1 + -1))
               && (G_1 == (A_1 + -1)) && (B_1 >= G_1) && (E_1 >= I_1)
               && ((J_1 + I_1) == F_1)))
              abort ();
          INV_MAIN_1_0 = A_1;
          INV_MAIN_1_1 = B_1;
          INV_MAIN_1_2 = C_1;
          INV_MAIN_1_3 = D_1;
          INV_MAIN_1_4 = E_1;
          INV_MAIN_1_5 = F_1;
          goto INV_MAIN_1_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = INV_MAIN_1_0;
          B_2 = INV_MAIN_1_1;
          H_2 = INV_MAIN_1_2;
          D_2 = INV_MAIN_1_3;
          E_2 = INV_MAIN_1_4;
          F_2 = INV_MAIN_1_5;
          if (!
              ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
               && ((H_2 + G_2) == C_2)))
              abort ();
          INV_MAIN_1_0 = A_2;
          INV_MAIN_1_1 = B_2;
          INV_MAIN_1_2 = C_2;
          INV_MAIN_1_3 = D_2;
          INV_MAIN_1_4 = E_2;
          INV_MAIN_1_5 = F_2;
          goto INV_MAIN_1_2;

      default:
          abort ();
      }
  INV_MAIN_1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          A_3 = INV_MAIN_1_0;
          B_3 = INV_MAIN_1_1;
          C_3 = INV_MAIN_1_2;
          G_3 = INV_MAIN_1_3;
          E_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((G_3 == (D_3 + -1)) && (!(B_3 >= A_3)) && (E_3 >= G_3)
               && ((H_3 + G_3) == F_3)))
              abort ();
          INV_MAIN_1_0 = A_3;
          INV_MAIN_1_1 = B_3;
          INV_MAIN_1_2 = C_3;
          INV_MAIN_1_3 = D_3;
          INV_MAIN_1_4 = E_3;
          INV_MAIN_1_5 = F_3;
          goto INV_MAIN_1_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = INV_MAIN_1_0;
          B_2 = INV_MAIN_1_1;
          H_2 = INV_MAIN_1_2;
          D_2 = INV_MAIN_1_3;
          E_2 = INV_MAIN_1_4;
          F_2 = INV_MAIN_1_5;
          if (!
              ((G_2 == (A_2 + -1)) && (B_2 >= G_2) && (!(E_2 >= D_2))
               && ((H_2 + G_2) == C_2)))
              abort ();
          INV_MAIN_1_0 = A_2;
          INV_MAIN_1_1 = B_2;
          INV_MAIN_1_2 = C_2;
          INV_MAIN_1_3 = D_2;
          INV_MAIN_1_4 = E_2;
          INV_MAIN_1_5 = F_2;
          goto INV_MAIN_1_2;

      default:
          abort ();
      }

    // return expression

}

