// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/nested-while_merged_safe.c-1_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nested-while_merged_safe.c-1_001_norange.c", 13, "reach_error"); }



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

      case 1:
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
          B_13 = inv_main6_0;
          E_13 = inv_main6_1;
          F_13 = inv_main6_2;
          C_13 = inv_main6_3;
          H_13 = inv_main6_4;
          G_13 = inv_main6_5;
          D_13 = inv_main6_6;
          A_13 = inv_main6_7;
          if (!
              (((!(B_13 <= 0)) || (!(H_13 == C_13)))
               && ((!(1 <= B_13)) || (!(H_13 == (C_13 + (-1 * B_13)))))))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  inv_main16:
    goto inv_main16;
  inv_main19:
    goto inv_main19;
  inv_main22:
    goto inv_main22;
  inv_main11_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
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

      case 1:
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

      case 2:
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
          B_13 = inv_main6_0;
          E_13 = inv_main6_1;
          F_13 = inv_main6_2;
          C_13 = inv_main6_3;
          H_13 = inv_main6_4;
          G_13 = inv_main6_5;
          D_13 = inv_main6_6;
          A_13 = inv_main6_7;
          if (!
              (((!(B_13 <= 0)) || (!(H_13 == C_13)))
               && ((!(1 <= B_13)) || (!(H_13 == (C_13 + (-1 * B_13)))))))
              abort ();
          goto main_error;

      default:
          abort ();
      }

    // return expression

}

