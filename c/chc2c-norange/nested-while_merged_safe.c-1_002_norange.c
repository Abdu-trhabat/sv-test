// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/nested-while_merged_safe.c-1_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nested-while_merged_safe.c-1_002_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main11_0;
    int inv_main11_1;
    int inv_main11_2;
    int inv_main11_3;
    int inv_main11_4;
    int inv_main11_5;
    int inv_main11_6;
    int inv_main11_7;
    int inv_main16_0;
    int inv_main16_1;
    int inv_main16_2;
    int inv_main16_3;
    int inv_main16_4;
    int inv_main16_5;
    int inv_main16_6;
    int inv_main16_7;
    int inv_main10_0;
    int inv_main10_1;
    int inv_main10_2;
    int inv_main10_3;
    int inv_main10_4;
    int inv_main10_5;
    int inv_main10_6;
    int inv_main10_7;
    int inv_main6_0;
    int inv_main6_1;
    int inv_main6_2;
    int inv_main6_3;
    int inv_main6_4;
    int inv_main6_5;
    int inv_main6_6;
    int inv_main6_7;
    int inv_main19_0;
    int inv_main19_1;
    int inv_main19_2;
    int inv_main19_3;
    int inv_main19_4;
    int inv_main19_5;
    int inv_main19_6;
    int inv_main19_7;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
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
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int H_6;
    int I_6;
    int J_6;
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
    int v_2_11;
    int v_3_11;
    int v_4_11;
    int v_5_11;
    int v_6_11;
    int v_7_11;
    int A_12;
    int B_12;
    int C_12;
    int v_3_12;
    int v_4_12;
    int v_5_12;
    int v_6_12;
    int v_7_12;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int E_13;
    int F_13;
    int G_13;
    int H_13;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    goto inv_main2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_11 = __VERIFIER_nondet_int ();
          B_11 = __VERIFIER_nondet_int ();
          v_2_11 = __VERIFIER_nondet_int ();
          v_4_11 = __VERIFIER_nondet_int ();
          v_3_11 = __VERIFIER_nondet_int ();
          v_6_11 = __VERIFIER_nondet_int ();
          v_5_11 = __VERIFIER_nondet_int ();
          v_7_11 = __VERIFIER_nondet_int ();
          if (!
              ((!(1 <= A_11)) && (v_2_11 == A_11) && (v_3_11 == A_11)
               && (v_4_11 == B_11) && (v_5_11 == B_11) && (0 == v_6_11)
               && (0 == v_7_11)))
              abort ();
          inv_main6_0 = A_11;
          inv_main6_1 = v_2_11;
          inv_main6_2 = v_3_11;
          inv_main6_3 = B_11;
          inv_main6_4 = v_4_11;
          inv_main6_5 = v_5_11;
          inv_main6_6 = v_6_11;
          inv_main6_7 = v_7_11;
          goto inv_main6;

      case 1:
          A_12 = __VERIFIER_nondet_int ();
          B_12 = __VERIFIER_nondet_int ();
          C_12 = __VERIFIER_nondet_int ();
          v_4_12 = __VERIFIER_nondet_int ();
          v_3_12 = __VERIFIER_nondet_int ();
          v_6_12 = __VERIFIER_nondet_int ();
          v_5_12 = __VERIFIER_nondet_int ();
          v_7_12 = __VERIFIER_nondet_int ();
          if (!
              ((1 <= C_12) && (A_12 == (B_12 + -1)) && (v_3_12 == C_12)
               && (v_4_12 == C_12) && (v_5_12 == B_12) && (1 == v_6_12)
               && (0 == v_7_12)))
              abort ();
          inv_main10_0 = C_12;
          inv_main10_1 = v_3_12;
          inv_main10_2 = v_4_12;
          inv_main10_3 = B_12;
          inv_main10_4 = A_12;
          inv_main10_5 = v_5_12;
          inv_main10_6 = v_6_12;
          inv_main10_7 = v_7_12;
          B_1 = inv_main10_0;
          E_1 = inv_main10_1;
          F_1 = inv_main10_2;
          C_1 = inv_main10_3;
          H_1 = inv_main10_4;
          G_1 = inv_main10_5;
          D_1 = inv_main10_6;
          A_1 = inv_main10_7;
          if (!1)
              abort ();
          inv_main11_0 = B_1;
          inv_main11_1 = E_1;
          inv_main11_2 = F_1;
          inv_main11_3 = C_1;
          inv_main11_4 = H_1;
          inv_main11_5 = G_1;
          inv_main11_6 = D_1;
          inv_main11_7 = A_1;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          D_3 = inv_main11_0;
          G_3 = inv_main11_1;
          H_3 = inv_main11_2;
          E_3 = inv_main11_3;
          J_3 = inv_main11_4;
          I_3 = inv_main11_5;
          F_3 = inv_main11_6;
          C_3 = inv_main11_7;
          if (!
              ((B_3 == (G_3 + 1)) && (1 <= (F_3 + (-1 * G_3)))
               && (A_3 == (J_3 + 1))))
              abort ();
          inv_main11_0 = D_3;
          inv_main11_1 = B_3;
          inv_main11_2 = H_3;
          inv_main11_3 = E_3;
          inv_main11_4 = A_3;
          inv_main11_5 = I_3;
          inv_main11_6 = F_3;
          inv_main11_7 = C_3;
          goto inv_main11_0;

      default:
          abort ();
      }
  inv_main6:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_7 = inv_main6_0;
          E_7 = inv_main6_1;
          F_7 = inv_main6_2;
          C_7 = inv_main6_3;
          H_7 = inv_main6_4;
          G_7 = inv_main6_5;
          D_7 = inv_main6_6;
          A_7 = inv_main6_7;
          if (!(!(1 <= (F_7 + (-1 * A_7)))))
              abort ();
          inv_main16_0 = B_7;
          inv_main16_1 = E_7;
          inv_main16_2 = F_7;
          inv_main16_3 = C_7;
          inv_main16_4 = H_7;
          inv_main16_5 = G_7;
          inv_main16_6 = D_7;
          inv_main16_7 = A_7;
          B_13 = inv_main16_0;
          E_13 = inv_main16_1;
          F_13 = inv_main16_2;
          C_13 = inv_main16_3;
          H_13 = inv_main16_4;
          G_13 = inv_main16_5;
          D_13 = inv_main16_6;
          A_13 = inv_main16_7;
          if (!
              (((!(B_13 <= 0)) || (!(G_13 == C_13)))
               && ((!(1 <= B_13)) || (!(G_13 == (C_13 + (-1 * B_13)))))))
              abort ();
          goto main_error;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          D_8 = inv_main6_0;
          G_8 = inv_main6_1;
          H_8 = inv_main6_2;
          E_8 = inv_main6_3;
          J_8 = inv_main6_4;
          I_8 = inv_main6_5;
          F_8 = inv_main6_6;
          C_8 = inv_main6_7;
          if (!
              ((B_8 == (I_8 + -1)) && (1 <= (H_8 + (-1 * C_8)))
               && (A_8 == (C_8 + 1))))
              abort ();
          inv_main19_0 = D_8;
          inv_main19_1 = G_8;
          inv_main19_2 = H_8;
          inv_main19_3 = E_8;
          inv_main19_4 = J_8;
          inv_main19_5 = B_8;
          inv_main19_6 = F_8;
          inv_main19_7 = A_8;
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          D_10 = inv_main19_0;
          G_10 = inv_main19_1;
          H_10 = inv_main19_2;
          E_10 = inv_main19_3;
          J_10 = inv_main19_4;
          I_10 = inv_main19_5;
          F_10 = inv_main19_6;
          C_10 = inv_main19_7;
          if (!
              ((B_10 == (I_10 + -1)) && (!(1 <= (C_10 + (-1 * H_10))))
               && (1 <= (H_10 + (-1 * C_10))) && (A_10 == (C_10 + 1))))
              abort ();
          inv_main19_0 = D_10;
          inv_main19_1 = G_10;
          inv_main19_2 = H_10;
          inv_main19_3 = E_10;
          inv_main19_4 = J_10;
          inv_main19_5 = B_10;
          inv_main19_6 = F_10;
          inv_main19_7 = A_10;
          goto inv_main19_2;

      default:
          abort ();
      }
  inv_main22:
    goto inv_main22;
  inv_main11_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          B_5 = inv_main11_0;
          E_5 = inv_main11_1;
          F_5 = inv_main11_2;
          C_5 = inv_main11_3;
          H_5 = inv_main11_4;
          G_5 = inv_main11_5;
          D_5 = inv_main11_6;
          A_5 = inv_main11_7;
          if (!((!(1 <= (E_5 + (-1 * D_5)))) && (!(1 <= (D_5 + (-1 * E_5))))))
              abort ();
          inv_main6_0 = B_5;
          inv_main6_1 = E_5;
          inv_main6_2 = F_5;
          inv_main6_3 = C_5;
          inv_main6_4 = H_5;
          inv_main6_5 = G_5;
          inv_main6_6 = D_5;
          inv_main6_7 = A_5;
          goto inv_main6;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          D_3 = inv_main11_0;
          G_3 = inv_main11_1;
          H_3 = inv_main11_2;
          E_3 = inv_main11_3;
          J_3 = inv_main11_4;
          I_3 = inv_main11_5;
          F_3 = inv_main11_6;
          C_3 = inv_main11_7;
          if (!
              ((B_3 == (G_3 + 1)) && (1 <= (F_3 + (-1 * G_3)))
               && (A_3 == (J_3 + 1))))
              abort ();
          inv_main11_0 = D_3;
          inv_main11_1 = B_3;
          inv_main11_2 = H_3;
          inv_main11_3 = E_3;
          inv_main11_4 = A_3;
          inv_main11_5 = I_3;
          inv_main11_6 = F_3;
          inv_main11_7 = C_3;
          goto inv_main11_0;

      case 2:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          D_6 = inv_main11_0;
          G_6 = inv_main11_1;
          H_6 = inv_main11_2;
          E_6 = inv_main11_3;
          J_6 = inv_main11_4;
          I_6 = inv_main11_5;
          F_6 = inv_main11_6;
          C_6 = inv_main11_7;
          if (!
              ((B_6 == (J_6 + -1)) && (!(1 <= (F_6 + (-1 * G_6))))
               && (1 <= (G_6 + (-1 * F_6))) && (A_6 == (F_6 + 1))))
              abort ();
          inv_main10_0 = D_6;
          inv_main10_1 = G_6;
          inv_main10_2 = H_6;
          inv_main10_3 = E_6;
          inv_main10_4 = B_6;
          inv_main10_5 = I_6;
          inv_main10_6 = A_6;
          inv_main10_7 = C_6;
          B_1 = inv_main10_0;
          E_1 = inv_main10_1;
          F_1 = inv_main10_2;
          C_1 = inv_main10_3;
          H_1 = inv_main10_4;
          G_1 = inv_main10_5;
          D_1 = inv_main10_6;
          A_1 = inv_main10_7;
          if (!1)
              abort ();
          inv_main11_0 = B_1;
          inv_main11_1 = E_1;
          inv_main11_2 = F_1;
          inv_main11_3 = C_1;
          inv_main11_4 = H_1;
          inv_main11_5 = G_1;
          inv_main11_6 = D_1;
          inv_main11_7 = A_1;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          D_3 = inv_main11_0;
          G_3 = inv_main11_1;
          H_3 = inv_main11_2;
          E_3 = inv_main11_3;
          J_3 = inv_main11_4;
          I_3 = inv_main11_5;
          F_3 = inv_main11_6;
          C_3 = inv_main11_7;
          if (!
              ((B_3 == (G_3 + 1)) && (1 <= (F_3 + (-1 * G_3)))
               && (A_3 == (J_3 + 1))))
              abort ();
          inv_main11_0 = D_3;
          inv_main11_1 = B_3;
          inv_main11_2 = H_3;
          inv_main11_3 = E_3;
          inv_main11_4 = A_3;
          inv_main11_5 = I_3;
          inv_main11_6 = F_3;
          inv_main11_7 = C_3;
          goto inv_main11_0;

      default:
          abort ();
      }
  inv_main19_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          B_9 = inv_main19_0;
          E_9 = inv_main19_1;
          F_9 = inv_main19_2;
          C_9 = inv_main19_3;
          H_9 = inv_main19_4;
          G_9 = inv_main19_5;
          D_9 = inv_main19_6;
          A_9 = inv_main19_7;
          if (!((!(1 <= (F_9 + (-1 * A_9)))) && (!(1 <= (A_9 + (-1 * F_9))))))
              abort ();
          inv_main16_0 = B_9;
          inv_main16_1 = E_9;
          inv_main16_2 = F_9;
          inv_main16_3 = C_9;
          inv_main16_4 = H_9;
          inv_main16_5 = G_9;
          inv_main16_6 = D_9;
          inv_main16_7 = A_9;
          B_13 = inv_main16_0;
          E_13 = inv_main16_1;
          F_13 = inv_main16_2;
          C_13 = inv_main16_3;
          H_13 = inv_main16_4;
          G_13 = inv_main16_5;
          D_13 = inv_main16_6;
          A_13 = inv_main16_7;
          if (!
              (((!(B_13 <= 0)) || (!(G_13 == C_13)))
               && ((!(1 <= B_13)) || (!(G_13 == (C_13 + (-1 * B_13)))))))
              abort ();
          goto main_error;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          D_10 = inv_main19_0;
          G_10 = inv_main19_1;
          H_10 = inv_main19_2;
          E_10 = inv_main19_3;
          J_10 = inv_main19_4;
          I_10 = inv_main19_5;
          F_10 = inv_main19_6;
          C_10 = inv_main19_7;
          if (!
              ((B_10 == (I_10 + -1)) && (!(1 <= (C_10 + (-1 * H_10))))
               && (1 <= (H_10 + (-1 * C_10))) && (A_10 == (C_10 + 1))))
              abort ();
          inv_main19_0 = D_10;
          inv_main19_1 = G_10;
          inv_main19_2 = H_10;
          inv_main19_3 = E_10;
          inv_main19_4 = J_10;
          inv_main19_5 = B_10;
          inv_main19_6 = F_10;
          inv_main19_7 = A_10;
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          D_10 = inv_main19_0;
          G_10 = inv_main19_1;
          H_10 = inv_main19_2;
          E_10 = inv_main19_3;
          J_10 = inv_main19_4;
          I_10 = inv_main19_5;
          F_10 = inv_main19_6;
          C_10 = inv_main19_7;
          if (!
              ((B_10 == (I_10 + -1)) && (!(1 <= (C_10 + (-1 * H_10))))
               && (1 <= (H_10 + (-1 * C_10))) && (A_10 == (C_10 + 1))))
              abort ();
          inv_main19_0 = D_10;
          inv_main19_1 = G_10;
          inv_main19_2 = H_10;
          inv_main19_3 = E_10;
          inv_main19_4 = J_10;
          inv_main19_5 = B_10;
          inv_main19_6 = F_10;
          inv_main19_7 = A_10;
          goto inv_main19_2;

      case 2:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          D_10 = inv_main19_0;
          G_10 = inv_main19_1;
          H_10 = inv_main19_2;
          E_10 = inv_main19_3;
          J_10 = inv_main19_4;
          I_10 = inv_main19_5;
          F_10 = inv_main19_6;
          C_10 = inv_main19_7;
          if (!
              ((B_10 == (I_10 + -1)) && (!(1 <= (C_10 + (-1 * H_10))))
               && (1 <= (H_10 + (-1 * C_10))) && (A_10 == (C_10 + 1))))
              abort ();
          inv_main19_0 = D_10;
          inv_main19_1 = G_10;
          inv_main19_2 = H_10;
          inv_main19_3 = E_10;
          inv_main19_4 = J_10;
          inv_main19_5 = B_10;
          inv_main19_6 = F_10;
          inv_main19_7 = A_10;
          goto inv_main19_2;

      default:
          abort ();
      }
  inv_main19_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = inv_main19_0;
          G_4 = inv_main19_1;
          H_4 = inv_main19_2;
          E_4 = inv_main19_3;
          J_4 = inv_main19_4;
          I_4 = inv_main19_5;
          F_4 = inv_main19_6;
          C_4 = inv_main19_7;
          if (!
              ((B_4 == (H_4 + 1)) && (1 <= (C_4 + (-1 * H_4)))
               && (A_4 == (I_4 + 1))))
              abort ();
          inv_main19_0 = D_4;
          inv_main19_1 = G_4;
          inv_main19_2 = B_4;
          inv_main19_3 = E_4;
          inv_main19_4 = J_4;
          inv_main19_5 = A_4;
          inv_main19_6 = F_4;
          inv_main19_7 = C_4;
          goto inv_main19_1;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          D_10 = inv_main19_0;
          G_10 = inv_main19_1;
          H_10 = inv_main19_2;
          E_10 = inv_main19_3;
          J_10 = inv_main19_4;
          I_10 = inv_main19_5;
          F_10 = inv_main19_6;
          C_10 = inv_main19_7;
          if (!
              ((B_10 == (I_10 + -1)) && (!(1 <= (C_10 + (-1 * H_10))))
               && (1 <= (H_10 + (-1 * C_10))) && (A_10 == (C_10 + 1))))
              abort ();
          inv_main19_0 = D_10;
          inv_main19_1 = G_10;
          inv_main19_2 = H_10;
          inv_main19_3 = E_10;
          inv_main19_4 = J_10;
          inv_main19_5 = B_10;
          inv_main19_6 = F_10;
          inv_main19_7 = A_10;
          goto inv_main19_2;

      default:
          abort ();
      }

    // return expression

}

