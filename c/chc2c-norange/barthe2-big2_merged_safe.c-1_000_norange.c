// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/barthe2-big2_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "barthe2-big2_merged_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main12_0;
    int inv_main12_1;
    int inv_main12_2;
    int inv_main12_3;
    int inv_main12_4;
    int inv_main12_5;
    int inv_main19_0;
    int inv_main19_1;
    int inv_main19_2;
    int inv_main19_3;
    int inv_main19_4;
    int inv_main19_5;
    int inv_main23_0;
    int inv_main23_1;
    int inv_main23_2;
    int inv_main23_3;
    int inv_main23_4;
    int inv_main23_5;
    int inv_main6_0;
    int inv_main6_1;
    int inv_main6_2;
    int inv_main6_3;
    int A_0;
    int v_1_0;
    int v_2_0;
    int v_3_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int v_4_3;
    int v_5_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
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



    // main logic
    goto main_init;

  main_init:
    if (!((1 == v_1_0) && (1 == v_2_0) && (1 == v_3_0)))
        abort ();
    inv_main6_0 = A_0;
    inv_main6_1 = v_1_0;
    inv_main6_2 = v_2_0;
    inv_main6_3 = v_3_0;
    A_1 = __VERIFIER_nondet_int ();
    B_1 = __VERIFIER_nondet_int ();
    C_1 = __VERIFIER_nondet_int ();
    E_1 = inv_main6_0;
    F_1 = inv_main6_1;
    G_1 = inv_main6_2;
    D_1 = inv_main6_3;
    if (!
        ((B_1 == G_1) && (C_1 == (F_1 + 1)) && (0 <= (E_1 + (-1 * F_1)))
         && (A_1 == D_1)))
        abort ();
    inv_main6_0 = E_1;
    inv_main6_1 = C_1;
    inv_main6_2 = B_1;
    inv_main6_3 = A_1;
    goto inv_main6_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main12:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          D_5 = inv_main12_0;
          E_5 = inv_main12_1;
          F_5 = inv_main12_2;
          C_5 = inv_main12_3;
          B_5 = inv_main12_4;
          A_5 = inv_main12_5;
          if (!((!(0 <= (D_5 + (-1 * B_5)))) && (!(0 <= (D_5 + (-1 * A_5))))))
              abort ();
          inv_main19_0 = D_5;
          inv_main19_1 = E_5;
          inv_main19_2 = F_5;
          inv_main19_3 = C_5;
          inv_main19_4 = B_5;
          inv_main19_5 = A_5;
          D_4 = inv_main19_0;
          E_4 = inv_main19_1;
          F_4 = inv_main19_2;
          C_4 = inv_main19_3;
          B_4 = inv_main19_4;
          A_4 = inv_main19_5;
          if (!((!(1 <= (B_4 + (-1 * D_4)))) || (!(1 <= (A_4 + (-1 * D_4))))))
              abort ();
          inv_main23_0 = D_4;
          inv_main23_1 = E_4;
          inv_main23_2 = F_4;
          inv_main23_3 = C_4;
          inv_main23_4 = B_4;
          inv_main23_5 = A_4;
          goto inv_main23;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          F_6 = inv_main12_0;
          G_6 = inv_main12_1;
          H_6 = inv_main12_2;
          E_6 = inv_main12_3;
          D_6 = inv_main12_4;
          C_6 = inv_main12_5;
          if (!
              ((B_6 == (E_6 + C_6)) && (0 <= (F_6 + (-1 * C_6)))
               && (!(0 <= (F_6 + (-1 * D_6)))) && (A_6 == (C_6 + 1))))
              abort ();
          inv_main19_0 = F_6;
          inv_main19_1 = G_6;
          inv_main19_2 = H_6;
          inv_main19_3 = B_6;
          inv_main19_4 = D_6;
          inv_main19_5 = A_6;
          D_4 = inv_main19_0;
          E_4 = inv_main19_1;
          F_4 = inv_main19_2;
          C_4 = inv_main19_3;
          B_4 = inv_main19_4;
          A_4 = inv_main19_5;
          if (!((!(1 <= (B_4 + (-1 * D_4)))) || (!(1 <= (A_4 + (-1 * D_4))))))
              abort ();
          inv_main23_0 = D_4;
          inv_main23_1 = E_4;
          inv_main23_2 = F_4;
          inv_main23_3 = C_4;
          inv_main23_4 = B_4;
          inv_main23_5 = A_4;
          goto inv_main23;

      case 2:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          F_7 = inv_main12_0;
          G_7 = inv_main12_1;
          H_7 = inv_main12_2;
          E_7 = inv_main12_3;
          D_7 = inv_main12_4;
          C_7 = inv_main12_5;
          if (!
              ((B_7 == (H_7 + D_7)) && (!(0 <= (F_7 + (-1 * C_7))))
               && (0 <= (F_7 + (-1 * D_7))) && (A_7 == (D_7 + 1))))
              abort ();
          inv_main19_0 = F_7;
          inv_main19_1 = G_7;
          inv_main19_2 = B_7;
          inv_main19_3 = E_7;
          inv_main19_4 = A_7;
          inv_main19_5 = C_7;
          D_4 = inv_main19_0;
          E_4 = inv_main19_1;
          F_4 = inv_main19_2;
          C_4 = inv_main19_3;
          B_4 = inv_main19_4;
          A_4 = inv_main19_5;
          if (!((!(1 <= (B_4 + (-1 * D_4)))) || (!(1 <= (A_4 + (-1 * D_4))))))
              abort ();
          inv_main23_0 = D_4;
          inv_main23_1 = E_4;
          inv_main23_2 = F_4;
          inv_main23_3 = C_4;
          inv_main23_4 = B_4;
          inv_main23_5 = A_4;
          goto inv_main23;

      case 3:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = __VERIFIER_nondet_int ();
          D_8 = __VERIFIER_nondet_int ();
          H_8 = inv_main12_0;
          I_8 = inv_main12_1;
          J_8 = inv_main12_2;
          G_8 = inv_main12_3;
          F_8 = inv_main12_4;
          E_8 = inv_main12_5;
          if (!
              ((B_8 == (F_8 + 1)) && (C_8 == (G_8 + E_8))
               && (D_8 == (J_8 + F_8)) && (0 <= (H_8 + (-1 * E_8)))
               && (0 <= (H_8 + (-1 * F_8))) && (A_8 == (E_8 + 1))))
              abort ();
          inv_main19_0 = H_8;
          inv_main19_1 = I_8;
          inv_main19_2 = D_8;
          inv_main19_3 = C_8;
          inv_main19_4 = B_8;
          inv_main19_5 = A_8;
          D_4 = inv_main19_0;
          E_4 = inv_main19_1;
          F_4 = inv_main19_2;
          C_4 = inv_main19_3;
          B_4 = inv_main19_4;
          A_4 = inv_main19_5;
          if (!((!(1 <= (B_4 + (-1 * D_4)))) || (!(1 <= (A_4 + (-1 * D_4))))))
              abort ();
          inv_main23_0 = D_4;
          inv_main23_1 = E_4;
          inv_main23_2 = F_4;
          inv_main23_3 = C_4;
          inv_main23_4 = B_4;
          inv_main23_5 = A_4;
          goto inv_main23;

      default:
          abort ();
      }
  inv_main23:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_2 = inv_main23_0;
          E_2 = inv_main23_1;
          F_2 = inv_main23_2;
          C_2 = inv_main23_3;
          B_2 = inv_main23_4;
          A_2 = inv_main23_5;
          if (!1)
              abort ();
          inv_main12_0 = D_2;
          inv_main12_1 = E_2;
          inv_main12_2 = F_2;
          inv_main12_3 = C_2;
          inv_main12_4 = B_2;
          inv_main12_5 = A_2;
          goto inv_main12;

      case 1:
          D_9 = inv_main23_0;
          E_9 = inv_main23_1;
          F_9 = inv_main23_2;
          C_9 = inv_main23_3;
          B_9 = inv_main23_4;
          A_9 = inv_main23_5;
          if (!(!(C_9 == (F_9 + B_9))))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  inv_main6_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_4_3 = __VERIFIER_nondet_int ();
          v_5_3 = __VERIFIER_nondet_int ();
          B_3 = inv_main6_0;
          C_3 = inv_main6_1;
          D_3 = inv_main6_2;
          A_3 = inv_main6_3;
          if (!((!(0 <= (B_3 + (-1 * C_3)))) && (0 == v_4_3) && (1 == v_5_3)))
              abort ();
          inv_main12_0 = B_3;
          inv_main12_1 = C_3;
          inv_main12_2 = D_3;
          inv_main12_3 = A_3;
          inv_main12_4 = v_4_3;
          inv_main12_5 = v_5_3;
          goto inv_main12;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          E_1 = inv_main6_0;
          F_1 = inv_main6_1;
          G_1 = inv_main6_2;
          D_1 = inv_main6_3;
          if (!
              ((B_1 == G_1) && (C_1 == (F_1 + 1)) && (0 <= (E_1 + (-1 * F_1)))
               && (A_1 == D_1)))
              abort ();
          inv_main6_0 = E_1;
          inv_main6_1 = C_1;
          inv_main6_2 = B_1;
          inv_main6_3 = A_1;
          goto inv_main6_0;

      default:
          abort ();
      }

    // return expression

}

