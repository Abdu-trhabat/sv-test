// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/010-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "010-horn_000_norange.c", 13, "reach_error"); }



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
    int INV1_6;
    int INV1_7;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
    int I_0;
    int J_0;
    int K_0;
    int L_0;
    int M_0;
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
    int K_1;
    int L_1;
    int M_1;
    int N_1;
    int O_1;
    int P_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int J_2;
    int K_2;
    int L_2;
    int M_2;
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
    int G_4;
    int H_4;
    int I_4;
    int J_4;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((G_3 == 1) && (F_3 == 1) && (E_3 == (A_3 + -1)) && (D_3 == 0)
         && (C_3 == 1) && (B_3 == 0) && (H_3 == 0)))
        abort ();
    INV1_0 = A_3;
    INV1_1 = B_3;
    INV1_2 = C_3;
    INV1_3 = D_3;
    INV1_4 = E_3;
    INV1_5 = F_3;
    INV1_6 = G_3;
    INV1_7 = H_3;
    A_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    D_2 = __VERIFIER_nondet_int ();
    L_2 = __VERIFIER_nondet_int ();
    M_2 = __VERIFIER_nondet_int ();
    I_2 = INV1_0;
    J_2 = INV1_1;
    B_2 = INV1_2;
    K_2 = INV1_3;
    E_2 = INV1_4;
    F_2 = INV1_5;
    G_2 = INV1_6;
    H_2 = INV1_7;
    if (!
        (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1)) && (I_2 == (A_2 + 1))
         && (I_2 >= 1) && (!(E_2 >= 1)) && ((J_2 + B_2) == D_2)))
        abort ();
    INV1_0 = A_2;
    INV1_1 = B_2;
    INV1_2 = C_2;
    INV1_3 = D_2;
    INV1_4 = E_2;
    INV1_5 = F_2;
    INV1_6 = G_2;
    INV1_7 = H_2;
    goto INV1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          I_4 = __VERIFIER_nondet_int ();
          J_4 = __VERIFIER_nondet_int ();
          C_4 = INV1_0;
          E_4 = INV1_1;
          A_4 = INV1_2;
          F_4 = INV1_3;
          D_4 = INV1_4;
          G_4 = INV1_5;
          B_4 = INV1_6;
          H_4 = INV1_7;
          if (!
              ((!(A_4 == B_4)) && (!(D_4 >= 1)) && (!(C_4 >= 1))
               && (I_4 == (J_4 + -1))))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          O_1 = __VERIFIER_nondet_int ();
          P_1 = __VERIFIER_nondet_int ();
          I_1 = INV1_0;
          J_1 = INV1_1;
          B_1 = INV1_2;
          M_1 = INV1_3;
          K_1 = INV1_4;
          L_1 = INV1_5;
          F_1 = INV1_6;
          N_1 = INV1_7;
          if (!
              (((L_1 + F_1) == G_1) && ((J_1 + B_1) == C_1)
               && ((J_1 + B_1) == D_1) && (O_1 == (P_1 + -1))
               && (K_1 == (E_1 + 1)) && (I_1 == (A_1 + 1)) && (K_1 >= 1)
               && (I_1 >= 1) && ((L_1 + F_1) == H_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          INV1_6 = G_1;
          INV1_7 = H_1;
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          I_2 = INV1_0;
          J_2 = INV1_1;
          B_2 = INV1_2;
          K_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          G_2 = INV1_6;
          H_2 = INV1_7;
          if (!
              (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1))
               && (I_2 == (A_2 + 1)) && (I_2 >= 1) && (!(E_2 >= 1))
               && ((J_2 + B_2) == D_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          INV1_6 = G_2;
          INV1_7 = H_2;
          goto INV1_2;

      case 2:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          I_2 = INV1_0;
          J_2 = INV1_1;
          B_2 = INV1_2;
          K_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          G_2 = INV1_6;
          H_2 = INV1_7;
          if (!
              (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1))
               && (I_2 == (A_2 + 1)) && (I_2 >= 1) && (!(E_2 >= 1))
               && ((J_2 + B_2) == D_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          INV1_6 = G_2;
          INV1_7 = H_2;
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          I_2 = INV1_0;
          J_2 = INV1_1;
          B_2 = INV1_2;
          K_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          G_2 = INV1_6;
          H_2 = INV1_7;
          if (!
              (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1))
               && (I_2 == (A_2 + 1)) && (I_2 >= 1) && (!(E_2 >= 1))
               && ((J_2 + B_2) == D_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          INV1_6 = G_2;
          INV1_7 = H_2;
          goto INV1_2;

      case 3:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          I_2 = INV1_0;
          J_2 = INV1_1;
          B_2 = INV1_2;
          K_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          G_2 = INV1_6;
          H_2 = INV1_7;
          if (!
              (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1))
               && (I_2 == (A_2 + 1)) && (I_2 >= 1) && (!(E_2 >= 1))
               && ((J_2 + B_2) == D_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          INV1_6 = G_2;
          INV1_7 = H_2;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_0 = __VERIFIER_nondet_int ();
          G_0 = __VERIFIER_nondet_int ();
          H_0 = __VERIFIER_nondet_int ();
          L_0 = __VERIFIER_nondet_int ();
          M_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          B_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          I_0 = INV1_4;
          J_0 = INV1_5;
          F_0 = INV1_6;
          K_0 = INV1_7;
          if (!
              (((J_0 + F_0) == G_0) && (L_0 == (M_0 + -1))
               && (I_0 == (E_0 + 1)) && (I_0 >= 1) && (!(A_0 >= 1))
               && ((J_0 + F_0) == H_0)))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          INV1_4 = E_0;
          INV1_5 = F_0;
          INV1_6 = G_0;
          INV1_7 = H_0;
          goto INV1_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          I_2 = INV1_0;
          J_2 = INV1_1;
          B_2 = INV1_2;
          K_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          G_2 = INV1_6;
          H_2 = INV1_7;
          if (!
              (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1))
               && (I_2 == (A_2 + 1)) && (I_2 >= 1) && (!(E_2 >= 1))
               && ((J_2 + B_2) == D_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          INV1_6 = G_2;
          INV1_7 = H_2;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          O_1 = __VERIFIER_nondet_int ();
          P_1 = __VERIFIER_nondet_int ();
          I_1 = INV1_0;
          J_1 = INV1_1;
          B_1 = INV1_2;
          M_1 = INV1_3;
          K_1 = INV1_4;
          L_1 = INV1_5;
          F_1 = INV1_6;
          N_1 = INV1_7;
          if (!
              (((L_1 + F_1) == G_1) && ((J_1 + B_1) == C_1)
               && ((J_1 + B_1) == D_1) && (O_1 == (P_1 + -1))
               && (K_1 == (E_1 + 1)) && (I_1 == (A_1 + 1)) && (K_1 >= 1)
               && (I_1 >= 1) && ((L_1 + F_1) == H_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          INV1_6 = G_1;
          INV1_7 = H_1;
          goto INV1_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          I_2 = INV1_0;
          J_2 = INV1_1;
          B_2 = INV1_2;
          K_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          G_2 = INV1_6;
          H_2 = INV1_7;
          if (!
              (((J_2 + B_2) == C_2) && (L_2 == (M_2 + -1))
               && (I_2 == (A_2 + 1)) && (I_2 >= 1) && (!(E_2 >= 1))
               && ((J_2 + B_2) == D_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          INV1_6 = G_2;
          INV1_7 = H_2;
          goto INV1_2;

      default:
          abort ();
      }

    // return expression

}

