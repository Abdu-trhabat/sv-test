// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/nested-while_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nested-while_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main15_0;
    int inv_main15_1;
    int inv_main15_2;
    int inv_main15_3;
    int inv_main15_4;
    int inv_main33_0;
    int inv_main33_1;
    int inv_main33_2;
    int inv_main33_3;
    int inv_main33_4;
    int inv_main33_5;
    int inv_main39_0;
    int inv_main39_1;
    int inv_main39_2;
    int inv_main39_3;
    int inv_main3_0;
    int inv_main3_1;
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
    int v_3_5;
    int v_4_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int v_6_7;
    int v_7_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int v_5_8;
    int A_9;
    int B_9;
    int v_2_9;
    int v_3_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;

    if (((inv_main15_0 <= -1000000000) || (inv_main15_0 >= 1000000000))
        || ((inv_main15_1 <= -1000000000) || (inv_main15_1 >= 1000000000))
        || ((inv_main15_2 <= -1000000000) || (inv_main15_2 >= 1000000000))
        || ((inv_main15_3 <= -1000000000) || (inv_main15_3 >= 1000000000))
        || ((inv_main15_4 <= -1000000000) || (inv_main15_4 >= 1000000000))
        || ((inv_main33_0 <= -1000000000) || (inv_main33_0 >= 1000000000))
        || ((inv_main33_1 <= -1000000000) || (inv_main33_1 >= 1000000000))
        || ((inv_main33_2 <= -1000000000) || (inv_main33_2 >= 1000000000))
        || ((inv_main33_3 <= -1000000000) || (inv_main33_3 >= 1000000000))
        || ((inv_main33_4 <= -1000000000) || (inv_main33_4 >= 1000000000))
        || ((inv_main33_5 <= -1000000000) || (inv_main33_5 >= 1000000000))
        || ((inv_main39_0 <= -1000000000) || (inv_main39_0 >= 1000000000))
        || ((inv_main39_1 <= -1000000000) || (inv_main39_1 >= 1000000000))
        || ((inv_main39_2 <= -1000000000) || (inv_main39_2 >= 1000000000))
        || ((inv_main39_3 <= -1000000000) || (inv_main39_3 >= 1000000000))
        || ((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main3_1 <= -1000000000) || (inv_main3_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((v_3_5 <= -1000000000) || (v_3_5 >= 1000000000))
        || ((v_4_5 <= -1000000000) || (v_4_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000))
        || ((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((v_5_8 <= -1000000000) || (v_5_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((v_2_9 <= -1000000000) || (v_2_9 >= 1000000000))
        || ((v_3_9 <= -1000000000) || (v_3_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000))
        || ((D_10 <= -1000000000) || (D_10 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    inv_main3_1 = B_0;
    goto inv_main3;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          v_4_5 = __VERIFIER_nondet_int ();
          if (((v_4_5 <= -1000000000) || (v_4_5 >= 1000000000)))
              abort ();
          v_3_5 = __VERIFIER_nondet_int ();
          if (((v_3_5 <= -1000000000) || (v_3_5 >= 1000000000)))
              abort ();
          C_5 = inv_main3_0;
          B_5 = inv_main3_1;
          if (!
              ((1 <= C_5) && (A_5 == (B_5 + -1)) && (v_3_5 == C_5)
               && (1 == v_4_5)))
              abort ();
          inv_main15_0 = C_5;
          inv_main15_1 = B_5;
          inv_main15_2 = v_3_5;
          inv_main15_3 = A_5;
          inv_main15_4 = v_4_5;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          G_4 = inv_main15_0;
          E_4 = inv_main15_1;
          D_4 = inv_main15_2;
          C_4 = inv_main15_3;
          F_4 = inv_main15_4;
          if (!
              ((B_4 == (C_4 + -1)) && (1 <= (D_4 + (-1 * F_4)))
               && (!(1 <= (F_4 + (-1 * D_4)))) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main15_0 = G_4;
          inv_main15_1 = E_4;
          inv_main15_2 = D_4;
          inv_main15_3 = B_4;
          inv_main15_4 = A_4;
          goto inv_main15_3;

      case 1:
          v_2_9 = __VERIFIER_nondet_int ();
          if (((v_2_9 <= -1000000000) || (v_2_9 >= 1000000000)))
              abort ();
          v_3_9 = __VERIFIER_nondet_int ();
          if (((v_3_9 <= -1000000000) || (v_3_9 >= 1000000000)))
              abort ();
          B_9 = inv_main3_0;
          A_9 = inv_main3_1;
          if (!((!(1 <= B_9)) && (v_2_9 == A_9) && (v_3_9 == A_9)))
              abort ();
          inv_main39_0 = B_9;
          inv_main39_1 = A_9;
          inv_main39_2 = v_2_9;
          inv_main39_3 = v_3_9;
          C_10 = inv_main39_0;
          B_10 = inv_main39_1;
          D_10 = inv_main39_2;
          A_10 = inv_main39_3;
          if (!(!(D_10 == A_10)))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  inv_main33_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = inv_main33_0;
          D_2 = inv_main33_1;
          H_2 = inv_main33_2;
          E_2 = inv_main33_3;
          G_2 = inv_main33_4;
          C_2 = inv_main33_5;
          if (!
              ((B_2 == (G_2 + -1)) && (!(1 <= (C_2 + (-1 * E_2))))
               && (1 <= (E_2 + (-1 * C_2))) && (A_2 == (C_2 + 1))))
              abort ();
          inv_main33_0 = F_2;
          inv_main33_1 = D_2;
          inv_main33_2 = H_2;
          inv_main33_3 = E_2;
          inv_main33_4 = B_2;
          inv_main33_5 = A_2;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = inv_main33_0;
          D_2 = inv_main33_1;
          H_2 = inv_main33_2;
          E_2 = inv_main33_3;
          G_2 = inv_main33_4;
          C_2 = inv_main33_5;
          if (!
              ((B_2 == (G_2 + -1)) && (!(1 <= (C_2 + (-1 * E_2))))
               && (1 <= (E_2 + (-1 * C_2))) && (A_2 == (C_2 + 1))))
              abort ();
          inv_main33_0 = F_2;
          inv_main33_1 = D_2;
          inv_main33_2 = H_2;
          inv_main33_3 = E_2;
          inv_main33_4 = B_2;
          inv_main33_5 = A_2;
          goto inv_main33_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = inv_main33_0;
          D_2 = inv_main33_1;
          H_2 = inv_main33_2;
          E_2 = inv_main33_3;
          G_2 = inv_main33_4;
          C_2 = inv_main33_5;
          if (!
              ((B_2 == (G_2 + -1)) && (!(1 <= (C_2 + (-1 * E_2))))
               && (1 <= (E_2 + (-1 * C_2))) && (A_2 == (C_2 + 1))))
              abort ();
          inv_main33_0 = F_2;
          inv_main33_1 = D_2;
          inv_main33_2 = H_2;
          inv_main33_3 = E_2;
          inv_main33_4 = B_2;
          inv_main33_5 = A_2;
          goto inv_main33_1;

      case 2:
          D_6 = inv_main33_0;
          B_6 = inv_main33_1;
          F_6 = inv_main33_2;
          C_6 = inv_main33_3;
          E_6 = inv_main33_4;
          A_6 = inv_main33_5;
          if (!((!(1 <= (C_6 + (-1 * A_6)))) && (!(1 <= (A_6 + (-1 * C_6))))))
              abort ();
          inv_main39_0 = D_6;
          inv_main39_1 = B_6;
          inv_main39_2 = F_6;
          inv_main39_3 = E_6;
          C_10 = inv_main39_0;
          B_10 = inv_main39_1;
          D_10 = inv_main39_2;
          A_10 = inv_main39_3;
          if (!(!(D_10 == A_10)))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  inv_main33_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          F_1 = inv_main33_0;
          D_1 = inv_main33_1;
          H_1 = inv_main33_2;
          E_1 = inv_main33_3;
          G_1 = inv_main33_4;
          C_1 = inv_main33_5;
          if (!
              ((B_1 == (E_1 + 1)) && (1 <= (C_1 + (-1 * E_1)))
               && (A_1 == (G_1 + 1))))
              abort ();
          inv_main33_0 = F_1;
          inv_main33_1 = D_1;
          inv_main33_2 = H_1;
          inv_main33_3 = B_1;
          inv_main33_4 = A_1;
          inv_main33_5 = C_1;
          goto inv_main33_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = inv_main33_0;
          D_2 = inv_main33_1;
          H_2 = inv_main33_2;
          E_2 = inv_main33_3;
          G_2 = inv_main33_4;
          C_2 = inv_main33_5;
          if (!
              ((B_2 == (G_2 + -1)) && (!(1 <= (C_2 + (-1 * E_2))))
               && (1 <= (E_2 + (-1 * C_2))) && (A_2 == (C_2 + 1))))
              abort ();
          inv_main33_0 = F_2;
          inv_main33_1 = D_2;
          inv_main33_2 = H_2;
          inv_main33_3 = E_2;
          inv_main33_4 = B_2;
          inv_main33_5 = A_2;
          goto inv_main33_1;

      default:
          abort ();
      }
  inv_main15_2:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          G_4 = inv_main15_0;
          E_4 = inv_main15_1;
          D_4 = inv_main15_2;
          C_4 = inv_main15_3;
          F_4 = inv_main15_4;
          if (!
              ((B_4 == (C_4 + -1)) && (1 <= (D_4 + (-1 * F_4)))
               && (!(1 <= (F_4 + (-1 * D_4)))) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main15_0 = G_4;
          inv_main15_1 = E_4;
          inv_main15_2 = D_4;
          inv_main15_3 = B_4;
          inv_main15_4 = A_4;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          G_4 = inv_main15_0;
          E_4 = inv_main15_1;
          D_4 = inv_main15_2;
          C_4 = inv_main15_3;
          F_4 = inv_main15_4;
          if (!
              ((B_4 == (C_4 + -1)) && (1 <= (D_4 + (-1 * F_4)))
               && (!(1 <= (F_4 + (-1 * D_4)))) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main15_0 = G_4;
          inv_main15_1 = E_4;
          inv_main15_2 = D_4;
          inv_main15_3 = B_4;
          inv_main15_4 = A_4;
          goto inv_main15_3;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          G_4 = inv_main15_0;
          E_4 = inv_main15_1;
          D_4 = inv_main15_2;
          C_4 = inv_main15_3;
          F_4 = inv_main15_4;
          if (!
              ((B_4 == (C_4 + -1)) && (1 <= (D_4 + (-1 * F_4)))
               && (!(1 <= (F_4 + (-1 * D_4)))) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main15_0 = G_4;
          inv_main15_1 = E_4;
          inv_main15_2 = D_4;
          inv_main15_3 = B_4;
          inv_main15_4 = A_4;
          goto inv_main15_3;

      case 2:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          v_6_7 = __VERIFIER_nondet_int ();
          if (((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000)))
              abort ();
          v_7_7 = __VERIFIER_nondet_int ();
          if (((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000)))
              abort ();
          F_7 = inv_main15_0;
          D_7 = inv_main15_1;
          C_7 = inv_main15_2;
          B_7 = inv_main15_3;
          E_7 = inv_main15_4;
          if (!
              ((!(1 <= (C_7 + (-1 * E_7)))) && (!(1 <= (E_7 + (-1 * C_7))))
               && (1 <= F_7) && (A_7 == (D_7 + -1)) && (v_6_7 == F_7)
               && (1 == v_7_7)))
              abort ();
          inv_main33_0 = F_7;
          inv_main33_1 = D_7;
          inv_main33_2 = B_7;
          inv_main33_3 = v_6_7;
          inv_main33_4 = A_7;
          inv_main33_5 = v_7_7;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = inv_main33_0;
          D_2 = inv_main33_1;
          H_2 = inv_main33_2;
          E_2 = inv_main33_3;
          G_2 = inv_main33_4;
          C_2 = inv_main33_5;
          if (!
              ((B_2 == (G_2 + -1)) && (!(1 <= (C_2 + (-1 * E_2))))
               && (1 <= (E_2 + (-1 * C_2))) && (A_2 == (C_2 + 1))))
              abort ();
          inv_main33_0 = F_2;
          inv_main33_1 = D_2;
          inv_main33_2 = H_2;
          inv_main33_3 = E_2;
          inv_main33_4 = B_2;
          inv_main33_5 = A_2;
          goto inv_main33_1;

      case 3:
          v_5_8 = __VERIFIER_nondet_int ();
          if (((v_5_8 <= -1000000000) || (v_5_8 >= 1000000000)))
              abort ();
          E_8 = inv_main15_0;
          C_8 = inv_main15_1;
          B_8 = inv_main15_2;
          A_8 = inv_main15_3;
          D_8 = inv_main15_4;
          if (!
              ((!(1 <= (D_8 + (-1 * B_8)))) && (!(1 <= E_8))
               && (!(1 <= (B_8 + (-1 * D_8)))) && (v_5_8 == C_8)))
              abort ();
          inv_main39_0 = E_8;
          inv_main39_1 = C_8;
          inv_main39_2 = A_8;
          inv_main39_3 = v_5_8;
          C_10 = inv_main39_0;
          B_10 = inv_main39_1;
          D_10 = inv_main39_2;
          A_10 = inv_main39_3;
          if (!(!(D_10 == A_10)))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  inv_main15_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          G_3 = inv_main15_0;
          E_3 = inv_main15_1;
          D_3 = inv_main15_2;
          C_3 = inv_main15_3;
          F_3 = inv_main15_4;
          if (!
              ((B_3 == (D_3 + 1)) && (1 <= (F_3 + (-1 * D_3)))
               && (A_3 == (C_3 + 1))))
              abort ();
          inv_main15_0 = G_3;
          inv_main15_1 = E_3;
          inv_main15_2 = B_3;
          inv_main15_3 = A_3;
          inv_main15_4 = F_3;
          goto inv_main15_2;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          G_4 = inv_main15_0;
          E_4 = inv_main15_1;
          D_4 = inv_main15_2;
          C_4 = inv_main15_3;
          F_4 = inv_main15_4;
          if (!
              ((B_4 == (C_4 + -1)) && (1 <= (D_4 + (-1 * F_4)))
               && (!(1 <= (F_4 + (-1 * D_4)))) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main15_0 = G_4;
          inv_main15_1 = E_4;
          inv_main15_2 = D_4;
          inv_main15_3 = B_4;
          inv_main15_4 = A_4;
          goto inv_main15_3;

      default:
          abort ();
      }

    // return expression

}

