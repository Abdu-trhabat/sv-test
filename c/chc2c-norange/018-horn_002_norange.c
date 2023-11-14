// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/018-horn_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "018-horn_002_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV1_0;
    int INV1_1;
    int INV1_2;
    int INV1_3;
    int INV1_4;
    int INV1_5;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
    int I_8;
    int J_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;
    int H_9;
    int I_9;
    int J_9;
    int K_9;
    int L_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int F_10;
    int G_10;
    int H_10;
    int I_10;
    int J_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int F_11;
    int G_11;
    int H_11;
    int A_16;
    int B_16;
    int C_16;
    int D_16;
    int E_16;
    int F_16;
    int G_16;
    int H_16;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((F_11 == 2) && (E_11 == 1) && (D_11 == 1) && (C_11 == 0)
         && (B_11 == 1) && (A_11 == 1) && (H_11 <= 0) && (G_11 <= 0)
         && (H_11 == G_11)))
        abort ();
    INV1_0 = A_11;
    INV1_1 = B_11;
    INV1_2 = C_11;
    INV1_3 = D_11;
    INV1_4 = E_11;
    INV1_5 = F_11;
    E_8 = __VERIFIER_nondet_int ();
    F_8 = __VERIFIER_nondet_int ();
    I_8 = __VERIFIER_nondet_int ();
    J_8 = __VERIFIER_nondet_int ();
    A_8 = INV1_0;
    B_8 = INV1_1;
    C_8 = INV1_2;
    D_8 = INV1_3;
    G_8 = INV1_4;
    H_8 = INV1_5;
    if (!
        ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
         && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
         && (I_8 <= 0) && (J_8 == I_8)))
        abort ();
    INV1_0 = A_8;
    INV1_1 = B_8;
    INV1_2 = C_8;
    INV1_3 = D_8;
    INV1_4 = E_8;
    INV1_5 = F_8;
    goto INV1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV2:
    goto INV2;
  INV4:
    goto INV4;
  INV3:
    goto INV3;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          G_16 = __VERIFIER_nondet_int ();
          H_16 = __VERIFIER_nondet_int ();
          C_16 = INV1_0;
          D_16 = INV1_1;
          A_16 = INV1_2;
          E_16 = INV1_3;
          F_16 = INV1_4;
          B_16 = INV1_5;
          if (!
              ((!(A_16 == B_16)) && (!((E_16 + (-1 * F_16)) >= 1))
               && (!(C_16 >= D_16)) && (H_16 <= 0) && (G_16 <= 0)
               && (H_16 == G_16)))
              abort ();
          goto main_error;

      case 1:
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          I_8 = __VERIFIER_nondet_int ();
          J_8 = __VERIFIER_nondet_int ();
          A_8 = INV1_0;
          B_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          G_8 = INV1_4;
          H_8 = INV1_5;
          if (!
              ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
               && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
               && (I_8 <= 0) && (J_8 == I_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          I_8 = __VERIFIER_nondet_int ();
          J_8 = __VERIFIER_nondet_int ();
          A_8 = INV1_0;
          B_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          G_8 = INV1_4;
          H_8 = INV1_5;
          if (!
              ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
               && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
               && (I_8 <= 0) && (J_8 == I_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          goto INV1_2;

      case 2:
          B_10 = __VERIFIER_nondet_int ();
          C_10 = __VERIFIER_nondet_int ();
          I_10 = __VERIFIER_nondet_int ();
          J_10 = __VERIFIER_nondet_int ();
          A_10 = INV1_0;
          G_10 = INV1_1;
          H_10 = INV1_2;
          D_10 = INV1_3;
          E_10 = INV1_4;
          F_10 = INV1_5;
          if (!
              ((H_10 == (C_10 + -2)) && (G_10 == (B_10 + -1))
               && (!((D_10 + (-1 * E_10)) >= 1)) && (A_10 >= G_10)
               && (J_10 <= 0) && (I_10 <= 0) && (J_10 == I_10)))
              abort ();
          INV1_0 = A_10;
          INV1_1 = B_10;
          INV1_2 = C_10;
          INV1_3 = D_10;
          INV1_4 = E_10;
          INV1_5 = F_10;
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          I_8 = __VERIFIER_nondet_int ();
          J_8 = __VERIFIER_nondet_int ();
          A_8 = INV1_0;
          B_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          G_8 = INV1_4;
          H_8 = INV1_5;
          if (!
              ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
               && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
               && (I_8 <= 0) && (J_8 == I_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          goto INV1_2;

      case 3:
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          I_8 = __VERIFIER_nondet_int ();
          J_8 = __VERIFIER_nondet_int ();
          A_8 = INV1_0;
          B_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          G_8 = INV1_4;
          H_8 = INV1_5;
          if (!
              ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
               && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
               && (I_8 <= 0) && (J_8 == I_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_9 = __VERIFIER_nondet_int ();
          C_9 = __VERIFIER_nondet_int ();
          E_9 = __VERIFIER_nondet_int ();
          F_9 = __VERIFIER_nondet_int ();
          K_9 = __VERIFIER_nondet_int ();
          L_9 = __VERIFIER_nondet_int ();
          A_9 = INV1_0;
          G_9 = INV1_1;
          H_9 = INV1_2;
          D_9 = INV1_3;
          I_9 = INV1_4;
          J_9 = INV1_5;
          if (!
              ((J_9 == (F_9 + -2)) && (I_9 == (E_9 + -1))
               && (H_9 == (C_9 + -2)) && (G_9 == (B_9 + -1))
               && ((D_9 + (-1 * I_9)) >= 1) && (A_9 >= G_9) && (L_9 <= 0)
               && (K_9 <= 0) && (L_9 == K_9)))
              abort ();
          INV1_0 = A_9;
          INV1_1 = B_9;
          INV1_2 = C_9;
          INV1_3 = D_9;
          INV1_4 = E_9;
          INV1_5 = F_9;
          goto INV1_0;

      case 1:
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          I_8 = __VERIFIER_nondet_int ();
          J_8 = __VERIFIER_nondet_int ();
          A_8 = INV1_0;
          B_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          G_8 = INV1_4;
          H_8 = INV1_5;
          if (!
              ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
               && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
               && (I_8 <= 0) && (J_8 == I_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_10 = __VERIFIER_nondet_int ();
          C_10 = __VERIFIER_nondet_int ();
          I_10 = __VERIFIER_nondet_int ();
          J_10 = __VERIFIER_nondet_int ();
          A_10 = INV1_0;
          G_10 = INV1_1;
          H_10 = INV1_2;
          D_10 = INV1_3;
          E_10 = INV1_4;
          F_10 = INV1_5;
          if (!
              ((H_10 == (C_10 + -2)) && (G_10 == (B_10 + -1))
               && (!((D_10 + (-1 * E_10)) >= 1)) && (A_10 >= G_10)
               && (J_10 <= 0) && (I_10 <= 0) && (J_10 == I_10)))
              abort ();
          INV1_0 = A_10;
          INV1_1 = B_10;
          INV1_2 = C_10;
          INV1_3 = D_10;
          INV1_4 = E_10;
          INV1_5 = F_10;
          goto INV1_1;

      case 1:
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          I_8 = __VERIFIER_nondet_int ();
          J_8 = __VERIFIER_nondet_int ();
          A_8 = INV1_0;
          B_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          G_8 = INV1_4;
          H_8 = INV1_5;
          if (!
              ((H_8 == (F_8 + -2)) && (G_8 == (E_8 + -1))
               && ((D_8 + (-1 * G_8)) >= 1) && (!(A_8 >= B_8)) && (J_8 <= 0)
               && (I_8 <= 0) && (J_8 == I_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          goto INV1_2;

      default:
          abort ();
      }

    // return expression

}

