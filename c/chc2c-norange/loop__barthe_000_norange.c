// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__barthe_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__barthe_000_norange.c", 13, "reach_error"); }



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
    int INV_MAIN_42_5;
    int INV_MAIN_42_6;
    int INV_MAIN_42_7;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int v_4_0;
    int v_5_0;
    int v_6_0;
    int v_7_0;
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int I_3;
    int J_3;
    int K_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((A_0 == C_0) && (B_0 == D_0) && (0 == v_4_0) && (0 == v_5_0)
         && (0 == v_6_0) && (0 == v_7_0)))
        abort ();
    INV_MAIN_42_0 = B_0;
    INV_MAIN_42_1 = v_4_0;
    INV_MAIN_42_2 = A_0;
    INV_MAIN_42_3 = v_5_0;
    INV_MAIN_42_4 = v_6_0;
    INV_MAIN_42_5 = D_0;
    INV_MAIN_42_6 = C_0;
    INV_MAIN_42_7 = v_7_0;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = __VERIFIER_nondet_int ();
    C_2 = INV_MAIN_42_0;
    D_2 = INV_MAIN_42_1;
    E_2 = INV_MAIN_42_2;
    F_2 = INV_MAIN_42_3;
    G_2 = INV_MAIN_42_4;
    H_2 = INV_MAIN_42_5;
    I_2 = INV_MAIN_42_6;
    J_2 = INV_MAIN_42_7;
    if (!
        ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
         && (A_2 == (F_2 + (5 * D_2) + C_2))))
        abort ();
    INV_MAIN_42_0 = C_2;
    INV_MAIN_42_1 = B_2;
    INV_MAIN_42_2 = E_2;
    INV_MAIN_42_3 = A_2;
    INV_MAIN_42_4 = G_2;
    INV_MAIN_42_5 = H_2;
    INV_MAIN_42_6 = I_2;
    INV_MAIN_42_7 = J_2;
    goto INV_MAIN_42_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = INV_MAIN_42_0;
          B_4 = INV_MAIN_42_1;
          C_4 = INV_MAIN_42_2;
          D_4 = INV_MAIN_42_3;
          E_4 = INV_MAIN_42_4;
          F_4 = INV_MAIN_42_5;
          G_4 = INV_MAIN_42_6;
          H_4 = INV_MAIN_42_7;
          if (!((C_4 <= B_4) && (G_4 <= E_4) && (!(D_4 == H_4))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_42_0;
          D_2 = INV_MAIN_42_1;
          E_2 = INV_MAIN_42_2;
          F_2 = INV_MAIN_42_3;
          G_2 = INV_MAIN_42_4;
          H_2 = INV_MAIN_42_5;
          I_2 = INV_MAIN_42_6;
          J_2 = INV_MAIN_42_7;
          if (!
              ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
               && (A_2 == (F_2 + (5 * D_2) + C_2))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = E_2;
          INV_MAIN_42_3 = A_2;
          INV_MAIN_42_4 = G_2;
          INV_MAIN_42_5 = H_2;
          INV_MAIN_42_6 = I_2;
          INV_MAIN_42_7 = J_2;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_42_0;
          D_2 = INV_MAIN_42_1;
          E_2 = INV_MAIN_42_2;
          F_2 = INV_MAIN_42_3;
          G_2 = INV_MAIN_42_4;
          H_2 = INV_MAIN_42_5;
          I_2 = INV_MAIN_42_6;
          J_2 = INV_MAIN_42_7;
          if (!
              ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
               && (A_2 == (F_2 + (5 * D_2) + C_2))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = E_2;
          INV_MAIN_42_3 = A_2;
          INV_MAIN_42_4 = G_2;
          INV_MAIN_42_5 = H_2;
          INV_MAIN_42_6 = I_2;
          INV_MAIN_42_7 = J_2;
          goto INV_MAIN_42_2;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          J_3 = INV_MAIN_42_6;
          K_3 = INV_MAIN_42_7;
          if (!
              ((B_3 == (I_3 + 5)) && (C_3 == (H_3 + 1)) && (F_3 <= E_3)
               && (!(J_3 <= H_3)) && (A_3 == (K_3 + I_3))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = G_3;
          INV_MAIN_42_4 = C_3;
          INV_MAIN_42_5 = B_3;
          INV_MAIN_42_6 = J_3;
          INV_MAIN_42_7 = A_3;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_42_0;
          D_2 = INV_MAIN_42_1;
          E_2 = INV_MAIN_42_2;
          F_2 = INV_MAIN_42_3;
          G_2 = INV_MAIN_42_4;
          H_2 = INV_MAIN_42_5;
          I_2 = INV_MAIN_42_6;
          J_2 = INV_MAIN_42_7;
          if (!
              ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
               && (A_2 == (F_2 + (5 * D_2) + C_2))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = E_2;
          INV_MAIN_42_3 = A_2;
          INV_MAIN_42_4 = G_2;
          INV_MAIN_42_5 = H_2;
          INV_MAIN_42_6 = I_2;
          INV_MAIN_42_7 = J_2;
          goto INV_MAIN_42_2;

      case 3:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_42_0;
          D_2 = INV_MAIN_42_1;
          E_2 = INV_MAIN_42_2;
          F_2 = INV_MAIN_42_3;
          G_2 = INV_MAIN_42_4;
          H_2 = INV_MAIN_42_5;
          I_2 = INV_MAIN_42_6;
          J_2 = INV_MAIN_42_7;
          if (!
              ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
               && (A_2 == (F_2 + (5 * D_2) + C_2))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = E_2;
          INV_MAIN_42_3 = A_2;
          INV_MAIN_42_4 = G_2;
          INV_MAIN_42_5 = H_2;
          INV_MAIN_42_6 = I_2;
          INV_MAIN_42_7 = J_2;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }
  INV_MAIN_42_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet_int ();
          F_1 = INV_MAIN_42_0;
          G_1 = INV_MAIN_42_1;
          H_1 = INV_MAIN_42_2;
          I_1 = INV_MAIN_42_3;
          J_1 = INV_MAIN_42_4;
          K_1 = INV_MAIN_42_5;
          L_1 = INV_MAIN_42_6;
          M_1 = INV_MAIN_42_7;
          if (!
              ((B_1 == (K_1 + 5)) && (C_1 == (J_1 + 1))
               && (D_1 == (I_1 + (5 * G_1) + F_1)) && (E_1 == (G_1 + 1))
               && (!(H_1 <= G_1)) && (!(L_1 <= J_1)) && (A_1 == (M_1 + K_1))))
              abort ();
          INV_MAIN_42_0 = F_1;
          INV_MAIN_42_1 = E_1;
          INV_MAIN_42_2 = H_1;
          INV_MAIN_42_3 = D_1;
          INV_MAIN_42_4 = C_1;
          INV_MAIN_42_5 = B_1;
          INV_MAIN_42_6 = L_1;
          INV_MAIN_42_7 = A_1;
          goto INV_MAIN_42_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_42_0;
          D_2 = INV_MAIN_42_1;
          E_2 = INV_MAIN_42_2;
          F_2 = INV_MAIN_42_3;
          G_2 = INV_MAIN_42_4;
          H_2 = INV_MAIN_42_5;
          I_2 = INV_MAIN_42_6;
          J_2 = INV_MAIN_42_7;
          if (!
              ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
               && (A_2 == (F_2 + (5 * D_2) + C_2))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = E_2;
          INV_MAIN_42_3 = A_2;
          INV_MAIN_42_4 = G_2;
          INV_MAIN_42_5 = H_2;
          INV_MAIN_42_6 = I_2;
          INV_MAIN_42_7 = J_2;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }
  INV_MAIN_42_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          J_3 = INV_MAIN_42_6;
          K_3 = INV_MAIN_42_7;
          if (!
              ((B_3 == (I_3 + 5)) && (C_3 == (H_3 + 1)) && (F_3 <= E_3)
               && (!(J_3 <= H_3)) && (A_3 == (K_3 + I_3))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = G_3;
          INV_MAIN_42_4 = C_3;
          INV_MAIN_42_5 = B_3;
          INV_MAIN_42_6 = J_3;
          INV_MAIN_42_7 = A_3;
          goto INV_MAIN_42_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_42_0;
          D_2 = INV_MAIN_42_1;
          E_2 = INV_MAIN_42_2;
          F_2 = INV_MAIN_42_3;
          G_2 = INV_MAIN_42_4;
          H_2 = INV_MAIN_42_5;
          I_2 = INV_MAIN_42_6;
          J_2 = INV_MAIN_42_7;
          if (!
              ((B_2 == (D_2 + 1)) && (!(E_2 <= D_2)) && (I_2 <= G_2)
               && (A_2 == (F_2 + (5 * D_2) + C_2))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = E_2;
          INV_MAIN_42_3 = A_2;
          INV_MAIN_42_4 = G_2;
          INV_MAIN_42_5 = H_2;
          INV_MAIN_42_6 = I_2;
          INV_MAIN_42_7 = J_2;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }

    // return expression

}

