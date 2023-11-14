// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/03_while_unsafe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "03_while_unsafe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main31_0;
    int inv_main31_1;
    int inv_main31_2;
    int inv_main31_3;
    int inv_main12_0;
    int inv_main12_1;
    int inv_main12_2;
    int inv_main12_3;
    int inv_main12_4;
    int inv_main12_5;
    int inv_main12_6;
    int inv_main3_0;
    int inv_main3_1;
    int inv_main26_0;
    int inv_main26_1;
    int inv_main26_2;
    int inv_main26_3;
    int inv_main26_4;
    int inv_main26_5;
    int inv_main26_6;
    int inv_main26_7;
    int A_0;
    int B_0;
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
    int v_2_3;
    int v_3_3;
    int v_4_3;
    int v_5_3;
    int v_6_3;
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
    int v_7_5;
    int v_8_5;
    int v_9_5;
    int v_10_5;
    int v_11_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    inv_main3_1 = B_0;
    v_2_3 = __VERIFIER_nondet_int ();
    v_4_3 = __VERIFIER_nondet_int ();
    v_3_3 = __VERIFIER_nondet_int ();
    v_6_3 = __VERIFIER_nondet_int ();
    v_5_3 = __VERIFIER_nondet_int ();
    B_3 = inv_main3_0;
    A_3 = inv_main3_1;
    if (!
        ((v_2_3 == B_3) && (v_3_3 == A_3) && (0 == v_4_3) && (0 == v_5_3)
         && (0 == v_6_3)))
        abort ();
    inv_main12_0 = B_3;
    inv_main12_1 = A_3;
    inv_main12_2 = v_2_3;
    inv_main12_3 = v_3_3;
    inv_main12_4 = v_4_3;
    inv_main12_5 = v_5_3;
    inv_main12_6 = v_6_3;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    G_2 = inv_main12_0;
    E_2 = inv_main12_1;
    F_2 = inv_main12_2;
    J_2 = inv_main12_3;
    H_2 = inv_main12_4;
    I_2 = inv_main12_5;
    D_2 = inv_main12_6;
    if (!
        ((B_2 == ((5 * H_2) + J_2)) && (C_2 == (H_2 + 1))
         && (1 <= (F_2 + (-1 * H_2))) && (A_2 == (D_2 + (5 * H_2) + J_2))))
        abort ();
    inv_main12_0 = G_2;
    inv_main12_1 = E_2;
    inv_main12_2 = F_2;
    inv_main12_3 = J_2;
    inv_main12_4 = C_2;
    inv_main12_5 = B_2;
    inv_main12_6 = A_2;
    goto inv_main12_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main12_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          G_2 = inv_main12_0;
          E_2 = inv_main12_1;
          F_2 = inv_main12_2;
          J_2 = inv_main12_3;
          H_2 = inv_main12_4;
          I_2 = inv_main12_5;
          D_2 = inv_main12_6;
          if (!
              ((B_2 == ((5 * H_2) + J_2)) && (C_2 == (H_2 + 1))
               && (1 <= (F_2 + (-1 * H_2)))
               && (A_2 == (D_2 + (5 * H_2) + J_2))))
              abort ();
          inv_main12_0 = G_2;
          inv_main12_1 = E_2;
          inv_main12_2 = F_2;
          inv_main12_3 = J_2;
          inv_main12_4 = C_2;
          inv_main12_5 = B_2;
          inv_main12_6 = A_2;
          goto inv_main12_0;

      case 1:
          v_9_5 = __VERIFIER_nondet_int ();
          v_8_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          v_7_5 = __VERIFIER_nondet_int ();
          v_10_5 = __VERIFIER_nondet_int ();
          D_5 = inv_main12_0;
          B_5 = inv_main12_1;
          C_5 = inv_main12_2;
          G_5 = inv_main12_3;
          E_5 = inv_main12_4;
          F_5 = inv_main12_5;
          A_5 = inv_main12_6;
          if (!
              ((!(1 <= (C_5 + (-1 * E_5)))) && (v_7_5 == D_5)
               && (v_8_5 == B_5) && (0 == v_9_5) && (0 == v_10_5)
               && (0 == v_11_5)))
              abort ();
          inv_main26_0 = D_5;
          inv_main26_1 = B_5;
          inv_main26_2 = A_5;
          inv_main26_3 = v_7_5;
          inv_main26_4 = v_8_5;
          inv_main26_5 = v_9_5;
          inv_main26_6 = v_10_5;
          inv_main26_7 = v_11_5;
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          G_1 = inv_main26_0;
          F_1 = inv_main26_1;
          D_1 = inv_main26_2;
          I_1 = inv_main26_3;
          K_1 = inv_main26_4;
          E_1 = inv_main26_5;
          H_1 = inv_main26_6;
          J_1 = inv_main26_7;
          if (!
              ((B_1 == (H_1 + 5)) && (C_1 == (E_1 + 1))
               && (1 <= (I_1 + (-1 * E_1))) && (A_1 == (J_1 + H_1))))
              abort ();
          inv_main26_0 = G_1;
          inv_main26_1 = F_1;
          inv_main26_2 = D_1;
          inv_main26_3 = I_1;
          inv_main26_4 = K_1;
          inv_main26_5 = C_1;
          inv_main26_6 = B_1;
          inv_main26_7 = A_1;
          goto inv_main26_1;

      default:
          abort ();
      }
  inv_main26_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_4 = inv_main26_0;
          C_4 = inv_main26_1;
          A_4 = inv_main26_2;
          F_4 = inv_main26_3;
          H_4 = inv_main26_4;
          B_4 = inv_main26_5;
          E_4 = inv_main26_6;
          G_4 = inv_main26_7;
          if (!(!(1 <= (F_4 + (-1 * B_4)))))
              abort ();
          inv_main31_0 = D_4;
          inv_main31_1 = C_4;
          inv_main31_2 = A_4;
          inv_main31_3 = G_4;
          D_6 = inv_main31_0;
          B_6 = inv_main31_1;
          A_6 = inv_main31_2;
          C_6 = inv_main31_3;
          if (!(!(A_6 == C_6)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          G_1 = inv_main26_0;
          F_1 = inv_main26_1;
          D_1 = inv_main26_2;
          I_1 = inv_main26_3;
          K_1 = inv_main26_4;
          E_1 = inv_main26_5;
          H_1 = inv_main26_6;
          J_1 = inv_main26_7;
          if (!
              ((B_1 == (H_1 + 5)) && (C_1 == (E_1 + 1))
               && (1 <= (I_1 + (-1 * E_1))) && (A_1 == (J_1 + H_1))))
              abort ();
          inv_main26_0 = G_1;
          inv_main26_1 = F_1;
          inv_main26_2 = D_1;
          inv_main26_3 = I_1;
          inv_main26_4 = K_1;
          inv_main26_5 = C_1;
          inv_main26_6 = B_1;
          inv_main26_7 = A_1;
          goto inv_main26_1;

      default:
          abort ();
      }

    // return expression

}

