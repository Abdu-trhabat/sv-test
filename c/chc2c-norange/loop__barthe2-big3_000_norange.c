// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__barthe2-big3_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__barthe2-big3_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_2_0;
    int INV_MAIN_2_1;
    int INV_MAIN_2_2;
    int INV_MAIN_2_3;
    int INV_MAIN_2_4;
    int INV_MAIN_2_5;
    int INV_MAIN_4_0;
    int INV_MAIN_4_1;
    int INV_MAIN_4_2;
    int INV_MAIN_4_3;
    int INV_MAIN_1_0;
    int INV_MAIN_1_1;
    int INV_MAIN_1_2;
    int INV_MAIN_1_3;
    int INV_MAIN_1_4;
    int INV_MAIN_1_5;
    int INV_MAIN_3_0;
    int INV_MAIN_3_1;
    int INV_MAIN_3_2;
    int INV_MAIN_3_3;
    int INV_MAIN_3_4;
    int INV_MAIN_3_5;
    int A_0;
    int B_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int v_5_0;
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
    int v_6_4;
    int v_7_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    int I_5;
    int J_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int H_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int G_7;
    int H_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int v_6_8;
    int v_7_8;
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
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int F_10;
    int G_10;
    int H_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int F_11;
    int G_11;
    int H_11;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;
    int F_12;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int E_13;
    int F_13;
    int G_13;
    int H_13;
    int A_14;
    int B_14;
    int C_14;
    int D_14;
    int E_14;
    int F_14;
    int A_15;
    int B_15;
    int C_15;
    int D_15;
    int E_15;
    int F_15;
    int A_16;
    int B_16;
    int C_16;
    int D_16;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((A_0 == B_0) && (1 == v_2_0) && (1 == v_3_0) && (1 == v_4_0)
         && (1 == v_5_0)))
        abort ();
    INV_MAIN_1_0 = v_2_0;
    INV_MAIN_1_1 = A_0;
    INV_MAIN_1_2 = v_3_0;
    INV_MAIN_1_3 = v_4_0;
    INV_MAIN_1_4 = B_0;
    INV_MAIN_1_5 = v_5_0;
    A_3 = __VERIFIER_nondet_int ();
    B_3 = __VERIFIER_nondet_int ();
    C_3 = INV_MAIN_1_0;
    D_3 = INV_MAIN_1_1;
    E_3 = INV_MAIN_1_2;
    F_3 = INV_MAIN_1_3;
    G_3 = INV_MAIN_1_4;
    H_3 = INV_MAIN_1_5;
    if (!
        ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
         && (A_3 == H_3)))
        abort ();
    INV_MAIN_1_0 = C_3;
    INV_MAIN_1_1 = D_3;
    INV_MAIN_1_2 = E_3;
    INV_MAIN_1_3 = B_3;
    INV_MAIN_1_4 = G_3;
    INV_MAIN_1_5 = A_3;
    goto INV_MAIN_1_4;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          v_6_4 = __VERIFIER_nondet_int ();
          v_7_4 = __VERIFIER_nondet_int ();
          A_4 = INV_MAIN_1_0;
          B_4 = INV_MAIN_1_1;
          C_4 = INV_MAIN_1_2;
          D_4 = INV_MAIN_1_3;
          E_4 = INV_MAIN_1_4;
          F_4 = INV_MAIN_1_5;
          if (!
              ((!(A_4 <= B_4)) && (!(D_4 <= E_4)) && (0 == v_6_4)
               && (1 == v_7_4)))
              abort ();
          INV_MAIN_2_0 = v_6_4;
          INV_MAIN_2_1 = B_4;
          INV_MAIN_2_2 = C_4;
          INV_MAIN_2_3 = v_7_4;
          INV_MAIN_2_4 = E_4;
          INV_MAIN_2_5 = F_4;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          goto INV_MAIN_2_11;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = INV_MAIN_1_0;
          F_1 = INV_MAIN_1_1;
          G_1 = INV_MAIN_1_2;
          H_1 = INV_MAIN_1_3;
          I_1 = INV_MAIN_1_4;
          J_1 = INV_MAIN_1_5;
          if (!
              ((B_1 == (H_1 + 1)) && (C_1 == G_1) && (D_1 == (E_1 + 1))
               && (H_1 <= I_1) && (E_1 <= F_1) && (A_1 == J_1)))
              abort ();
          INV_MAIN_1_0 = D_1;
          INV_MAIN_1_1 = F_1;
          INV_MAIN_1_2 = C_1;
          INV_MAIN_1_3 = B_1;
          INV_MAIN_1_4 = I_1;
          INV_MAIN_1_5 = A_1;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_1_0;
          D_3 = INV_MAIN_1_1;
          E_3 = INV_MAIN_1_2;
          F_3 = INV_MAIN_1_3;
          G_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
               && (A_3 == H_3)))
              abort ();
          INV_MAIN_1_0 = C_3;
          INV_MAIN_1_1 = D_3;
          INV_MAIN_1_2 = E_3;
          INV_MAIN_1_3 = B_3;
          INV_MAIN_1_4 = G_3;
          INV_MAIN_1_5 = A_3;
          goto INV_MAIN_1_4;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_1_0;
          D_3 = INV_MAIN_1_1;
          E_3 = INV_MAIN_1_2;
          F_3 = INV_MAIN_1_3;
          G_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
               && (A_3 == H_3)))
              abort ();
          INV_MAIN_1_0 = C_3;
          INV_MAIN_1_1 = D_3;
          INV_MAIN_1_2 = E_3;
          INV_MAIN_1_3 = B_3;
          INV_MAIN_1_4 = G_3;
          INV_MAIN_1_5 = A_3;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_1_0;
          D_3 = INV_MAIN_1_1;
          E_3 = INV_MAIN_1_2;
          F_3 = INV_MAIN_1_3;
          G_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
               && (A_3 == H_3)))
              abort ();
          INV_MAIN_1_0 = C_3;
          INV_MAIN_1_1 = D_3;
          INV_MAIN_1_2 = E_3;
          INV_MAIN_1_3 = B_3;
          INV_MAIN_1_4 = G_3;
          INV_MAIN_1_5 = A_3;
          goto INV_MAIN_1_4;

      case 3:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_1_0;
          D_3 = INV_MAIN_1_1;
          E_3 = INV_MAIN_1_2;
          F_3 = INV_MAIN_1_3;
          G_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
               && (A_3 == H_3)))
              abort ();
          INV_MAIN_1_0 = C_3;
          INV_MAIN_1_1 = D_3;
          INV_MAIN_1_2 = E_3;
          INV_MAIN_1_3 = B_3;
          INV_MAIN_1_4 = G_3;
          INV_MAIN_1_5 = A_3;
          goto INV_MAIN_1_4;

      default:
          abort ();
      }
  INV_MAIN_1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_1_0;
          D_2 = INV_MAIN_1_1;
          E_2 = INV_MAIN_1_2;
          F_2 = INV_MAIN_1_3;
          G_2 = INV_MAIN_1_4;
          H_2 = INV_MAIN_1_5;
          if (!
              ((B_2 == (C_2 + 1)) && (!(F_2 <= G_2)) && (C_2 <= D_2)
               && (A_2 == E_2)))
              abort ();
          INV_MAIN_1_0 = B_2;
          INV_MAIN_1_1 = D_2;
          INV_MAIN_1_2 = A_2;
          INV_MAIN_1_3 = F_2;
          INV_MAIN_1_4 = G_2;
          INV_MAIN_1_5 = H_2;
          goto INV_MAIN_1_0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_1_0;
          D_3 = INV_MAIN_1_1;
          E_3 = INV_MAIN_1_2;
          F_3 = INV_MAIN_1_3;
          G_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
               && (A_3 == H_3)))
              abort ();
          INV_MAIN_1_0 = C_3;
          INV_MAIN_1_1 = D_3;
          INV_MAIN_1_2 = E_3;
          INV_MAIN_1_3 = B_3;
          INV_MAIN_1_4 = G_3;
          INV_MAIN_1_5 = A_3;
          goto INV_MAIN_1_4;

      default:
          abort ();
      }
  INV_MAIN_4_2:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_16 = INV_MAIN_4_0;
          B_16 = INV_MAIN_4_1;
          C_16 = INV_MAIN_4_2;
          D_16 = INV_MAIN_4_3;
          if (!((!(A_16 >= 0)) && (C_16 <= 0) && (!(B_16 == D_16))))
              abort ();
          goto main_error;

      case 1:
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          goto INV_MAIN_4_8;

      case 2:
          A_14 = __VERIFIER_nondet_int ();
          B_14 = __VERIFIER_nondet_int ();
          C_14 = INV_MAIN_4_0;
          D_14 = INV_MAIN_4_1;
          E_14 = INV_MAIN_4_2;
          F_14 = INV_MAIN_4_3;
          if (!
              ((A_14 == (D_14 + C_14)) && (C_14 >= 0) && (E_14 <= 0)
               && (B_14 == (C_14 + -1))))
              abort ();
          INV_MAIN_4_0 = B_14;
          INV_MAIN_4_1 = A_14;
          INV_MAIN_4_2 = E_14;
          INV_MAIN_4_3 = F_14;
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          goto INV_MAIN_4_8;

      case 3:
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          goto INV_MAIN_4_8;

      default:
          abort ();
      }
  INV_MAIN_3_3:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_12 = INV_MAIN_3_0;
          B_12 = INV_MAIN_3_1;
          C_12 = INV_MAIN_3_2;
          D_12 = INV_MAIN_3_3;
          E_12 = INV_MAIN_3_4;
          F_12 = INV_MAIN_3_5;
          if (!((!(A_12 <= B_12)) && (!(D_12 <= E_12))))
              abort ();
          INV_MAIN_4_0 = B_12;
          INV_MAIN_4_1 = C_12;
          INV_MAIN_4_2 = E_12;
          INV_MAIN_4_3 = F_12;
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          goto INV_MAIN_4_8;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          C_10 = INV_MAIN_3_0;
          D_10 = INV_MAIN_3_1;
          E_10 = INV_MAIN_3_2;
          F_10 = INV_MAIN_3_3;
          G_10 = INV_MAIN_3_4;
          H_10 = INV_MAIN_3_5;
          if (!
              ((B_10 == (C_10 + 1)) && (!(F_10 <= G_10)) && (C_10 <= D_10)
               && (A_10 == (2 * E_10))))
              abort ();
          INV_MAIN_3_0 = B_10;
          INV_MAIN_3_1 = D_10;
          INV_MAIN_3_2 = A_10;
          INV_MAIN_3_3 = F_10;
          INV_MAIN_3_4 = G_10;
          INV_MAIN_3_5 = H_10;
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          goto INV_MAIN_3_10;

      case 2:
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          goto INV_MAIN_3_10;

      case 3:
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          goto INV_MAIN_3_10;

      default:
          abort ();
      }
  INV_MAIN_1_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = INV_MAIN_1_0;
          F_1 = INV_MAIN_1_1;
          G_1 = INV_MAIN_1_2;
          H_1 = INV_MAIN_1_3;
          I_1 = INV_MAIN_1_4;
          J_1 = INV_MAIN_1_5;
          if (!
              ((B_1 == (H_1 + 1)) && (C_1 == G_1) && (D_1 == (E_1 + 1))
               && (H_1 <= I_1) && (E_1 <= F_1) && (A_1 == J_1)))
              abort ();
          INV_MAIN_1_0 = D_1;
          INV_MAIN_1_1 = F_1;
          INV_MAIN_1_2 = C_1;
          INV_MAIN_1_3 = B_1;
          INV_MAIN_1_4 = I_1;
          INV_MAIN_1_5 = A_1;
          goto INV_MAIN_1_1;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_1_0;
          D_3 = INV_MAIN_1_1;
          E_3 = INV_MAIN_1_2;
          F_3 = INV_MAIN_1_3;
          G_3 = INV_MAIN_1_4;
          H_3 = INV_MAIN_1_5;
          if (!
              ((B_3 == (F_3 + 1)) && (F_3 <= G_3) && (!(C_3 <= D_3))
               && (A_3 == H_3)))
              abort ();
          INV_MAIN_1_0 = C_3;
          INV_MAIN_1_1 = D_3;
          INV_MAIN_1_2 = E_3;
          INV_MAIN_1_3 = B_3;
          INV_MAIN_1_4 = G_3;
          INV_MAIN_1_5 = A_3;
          goto INV_MAIN_1_4;

      default:
          abort ();
      }
  INV_MAIN_4_5:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_15 = __VERIFIER_nondet_int ();
          B_15 = __VERIFIER_nondet_int ();
          C_15 = INV_MAIN_4_0;
          D_15 = INV_MAIN_4_1;
          E_15 = INV_MAIN_4_2;
          F_15 = INV_MAIN_4_3;
          if (!
              ((A_15 == (F_15 + E_15)) && (!(C_15 >= 0)) && (!(E_15 <= 0))
               && (B_15 == (E_15 + -1))))
              abort ();
          INV_MAIN_4_0 = C_15;
          INV_MAIN_4_1 = D_15;
          INV_MAIN_4_2 = B_15;
          INV_MAIN_4_3 = A_15;
          goto INV_MAIN_4_2;

      case 1:
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          goto INV_MAIN_4_8;

      default:
          abort ();
      }
  INV_MAIN_2_6:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = INV_MAIN_2_0;
          F_5 = INV_MAIN_2_1;
          G_5 = INV_MAIN_2_2;
          H_5 = INV_MAIN_2_3;
          I_5 = INV_MAIN_2_4;
          J_5 = INV_MAIN_2_5;
          if (!
              ((B_5 == (H_5 + 1)) && (C_5 == (G_5 + E_5))
               && (D_5 == (E_5 + 1)) && (H_5 <= I_5) && (E_5 <= F_5)
               && (A_5 == (J_5 + H_5))))
              abort ();
          INV_MAIN_2_0 = D_5;
          INV_MAIN_2_1 = F_5;
          INV_MAIN_2_2 = C_5;
          INV_MAIN_2_3 = B_5;
          INV_MAIN_2_4 = I_5;
          INV_MAIN_2_5 = A_5;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          goto INV_MAIN_2_11;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          goto INV_MAIN_2_11;

      case 2:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          goto INV_MAIN_2_11;

      case 3:
          v_6_8 = __VERIFIER_nondet_int ();
          v_7_8 = __VERIFIER_nondet_int ();
          A_8 = INV_MAIN_2_0;
          B_8 = INV_MAIN_2_1;
          C_8 = INV_MAIN_2_2;
          D_8 = INV_MAIN_2_3;
          E_8 = INV_MAIN_2_4;
          F_8 = INV_MAIN_2_5;
          if (!
              ((!(A_8 <= B_8)) && (!(D_8 <= E_8)) && (1 == v_6_8)
               && (1 == v_7_8)))
              abort ();
          INV_MAIN_3_0 = v_6_8;
          INV_MAIN_3_1 = B_8;
          INV_MAIN_3_2 = C_8;
          INV_MAIN_3_3 = v_7_8;
          INV_MAIN_3_4 = E_8;
          INV_MAIN_3_5 = F_8;
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          goto INV_MAIN_3_10;

      default:
          abort ();
      }
  INV_MAIN_3_7:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          C_9 = __VERIFIER_nondet_int ();
          D_9 = __VERIFIER_nondet_int ();
          E_9 = INV_MAIN_3_0;
          F_9 = INV_MAIN_3_1;
          G_9 = INV_MAIN_3_2;
          H_9 = INV_MAIN_3_3;
          I_9 = INV_MAIN_3_4;
          J_9 = INV_MAIN_3_5;
          if (!
              ((B_9 == (H_9 + 1)) && (C_9 == (2 * G_9)) && (D_9 == (E_9 + 1))
               && (H_9 <= I_9) && (E_9 <= F_9) && (A_9 == (2 * J_9))))
              abort ();
          INV_MAIN_3_0 = D_9;
          INV_MAIN_3_1 = F_9;
          INV_MAIN_3_2 = C_9;
          INV_MAIN_3_3 = B_9;
          INV_MAIN_3_4 = I_9;
          INV_MAIN_3_5 = A_9;
          goto INV_MAIN_3_3;

      case 1:
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          goto INV_MAIN_3_10;

      default:
          abort ();
      }
  INV_MAIN_4_8:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_14 = __VERIFIER_nondet_int ();
          B_14 = __VERIFIER_nondet_int ();
          C_14 = INV_MAIN_4_0;
          D_14 = INV_MAIN_4_1;
          E_14 = INV_MAIN_4_2;
          F_14 = INV_MAIN_4_3;
          if (!
              ((A_14 == (D_14 + C_14)) && (C_14 >= 0) && (E_14 <= 0)
               && (B_14 == (C_14 + -1))))
              abort ();
          INV_MAIN_4_0 = B_14;
          INV_MAIN_4_1 = A_14;
          INV_MAIN_4_2 = E_14;
          INV_MAIN_4_3 = F_14;
          goto INV_MAIN_4_5;

      case 1:
          A_13 = __VERIFIER_nondet_int ();
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          D_13 = __VERIFIER_nondet_int ();
          E_13 = INV_MAIN_4_0;
          F_13 = INV_MAIN_4_1;
          G_13 = INV_MAIN_4_2;
          H_13 = INV_MAIN_4_3;
          if (!
              ((B_13 == (G_13 + -1)) && (D_13 == (E_13 + -1))
               && (C_13 == (F_13 + E_13)) && (E_13 >= 0) && (!(G_13 <= 0))
               && (A_13 == (H_13 + G_13))))
              abort ();
          INV_MAIN_4_0 = D_13;
          INV_MAIN_4_1 = C_13;
          INV_MAIN_4_2 = B_13;
          INV_MAIN_4_3 = A_13;
          goto INV_MAIN_4_8;

      default:
          abort ();
      }
  INV_MAIN_2_9:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = INV_MAIN_2_0;
          D_6 = INV_MAIN_2_1;
          E_6 = INV_MAIN_2_2;
          F_6 = INV_MAIN_2_3;
          G_6 = INV_MAIN_2_4;
          H_6 = INV_MAIN_2_5;
          if (!
              ((B_6 == (C_6 + 1)) && (!(F_6 <= G_6)) && (C_6 <= D_6)
               && (A_6 == (E_6 + C_6))))
              abort ();
          INV_MAIN_2_0 = B_6;
          INV_MAIN_2_1 = D_6;
          INV_MAIN_2_2 = A_6;
          INV_MAIN_2_3 = F_6;
          INV_MAIN_2_4 = G_6;
          INV_MAIN_2_5 = H_6;
          goto INV_MAIN_2_6;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          goto INV_MAIN_2_11;

      default:
          abort ();
      }
  INV_MAIN_3_10:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          C_10 = INV_MAIN_3_0;
          D_10 = INV_MAIN_3_1;
          E_10 = INV_MAIN_3_2;
          F_10 = INV_MAIN_3_3;
          G_10 = INV_MAIN_3_4;
          H_10 = INV_MAIN_3_5;
          if (!
              ((B_10 == (C_10 + 1)) && (!(F_10 <= G_10)) && (C_10 <= D_10)
               && (A_10 == (2 * E_10))))
              abort ();
          INV_MAIN_3_0 = B_10;
          INV_MAIN_3_1 = D_10;
          INV_MAIN_3_2 = A_10;
          INV_MAIN_3_3 = F_10;
          INV_MAIN_3_4 = G_10;
          INV_MAIN_3_5 = H_10;
          goto INV_MAIN_3_7;

      case 1:
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          C_11 = INV_MAIN_3_0;
          D_11 = INV_MAIN_3_1;
          E_11 = INV_MAIN_3_2;
          F_11 = INV_MAIN_3_3;
          G_11 = INV_MAIN_3_4;
          H_11 = INV_MAIN_3_5;
          if (!
              ((B_11 == (F_11 + 1)) && (F_11 <= G_11) && (!(C_11 <= D_11))
               && (A_11 == (2 * H_11))))
              abort ();
          INV_MAIN_3_0 = C_11;
          INV_MAIN_3_1 = D_11;
          INV_MAIN_3_2 = E_11;
          INV_MAIN_3_3 = B_11;
          INV_MAIN_3_4 = G_11;
          INV_MAIN_3_5 = A_11;
          goto INV_MAIN_3_10;

      default:
          abort ();
      }
  INV_MAIN_2_11:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = INV_MAIN_2_0;
          F_5 = INV_MAIN_2_1;
          G_5 = INV_MAIN_2_2;
          H_5 = INV_MAIN_2_3;
          I_5 = INV_MAIN_2_4;
          J_5 = INV_MAIN_2_5;
          if (!
              ((B_5 == (H_5 + 1)) && (C_5 == (G_5 + E_5))
               && (D_5 == (E_5 + 1)) && (H_5 <= I_5) && (E_5 <= F_5)
               && (A_5 == (J_5 + H_5))))
              abort ();
          INV_MAIN_2_0 = D_5;
          INV_MAIN_2_1 = F_5;
          INV_MAIN_2_2 = C_5;
          INV_MAIN_2_3 = B_5;
          INV_MAIN_2_4 = I_5;
          INV_MAIN_2_5 = A_5;
          goto INV_MAIN_2_9;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_2_0;
          D_7 = INV_MAIN_2_1;
          E_7 = INV_MAIN_2_2;
          F_7 = INV_MAIN_2_3;
          G_7 = INV_MAIN_2_4;
          H_7 = INV_MAIN_2_5;
          if (!
              ((B_7 == (F_7 + 1)) && (F_7 <= G_7) && (!(C_7 <= D_7))
               && (A_7 == (H_7 + F_7))))
              abort ();
          INV_MAIN_2_0 = C_7;
          INV_MAIN_2_1 = D_7;
          INV_MAIN_2_2 = E_7;
          INV_MAIN_2_3 = B_7;
          INV_MAIN_2_4 = G_7;
          INV_MAIN_2_5 = A_7;
          goto INV_MAIN_2_11;

      default:
          abort ();
      }

    // return expression

}

