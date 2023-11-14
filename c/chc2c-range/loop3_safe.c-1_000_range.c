// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop3_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop3_safe.c-1_000_range.c", 13, "reach_error"); }



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
    int inv_main3_0;
    int inv_main37_0;
    int inv_main37_1;
    int inv_main37_2;
    int inv_main29_0;
    int inv_main29_1;
    int inv_main29_2;
    int inv_main29_3;
    int inv_main29_4;
    int A_0;
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_4;
    int v_1_4;
    int v_2_4;
    int v_3_4;
    int A_5;
    int v_1_5;
    int v_2_5;
    int v_3_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int v_5_6;
    int v_6_6;
    int v_7_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int v_5_7;
    int v_6_7;
    int v_7_7;
    int A_8;
    int B_8;
    int C_8;

    if (((inv_main12_0 <= -1000000000) || (inv_main12_0 >= 1000000000))
        || ((inv_main12_1 <= -1000000000) || (inv_main12_1 >= 1000000000))
        || ((inv_main12_2 <= -1000000000) || (inv_main12_2 >= 1000000000))
        || ((inv_main12_3 <= -1000000000) || (inv_main12_3 >= 1000000000))
        || ((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main37_0 <= -1000000000) || (inv_main37_0 >= 1000000000))
        || ((inv_main37_1 <= -1000000000) || (inv_main37_1 >= 1000000000))
        || ((inv_main37_2 <= -1000000000) || (inv_main37_2 >= 1000000000))
        || ((inv_main29_0 <= -1000000000) || (inv_main29_0 >= 1000000000))
        || ((inv_main29_1 <= -1000000000) || (inv_main29_1 >= 1000000000))
        || ((inv_main29_2 <= -1000000000) || (inv_main29_2 >= 1000000000))
        || ((inv_main29_3 <= -1000000000) || (inv_main29_3 >= 1000000000))
        || ((inv_main29_4 <= -1000000000) || (inv_main29_4 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
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
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((v_1_4 <= -1000000000) || (v_1_4 >= 1000000000))
        || ((v_2_4 <= -1000000000) || (v_2_4 >= 1000000000))
        || ((v_3_4 <= -1000000000) || (v_3_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((v_1_5 <= -1000000000) || (v_1_5 >= 1000000000))
        || ((v_2_5 <= -1000000000) || (v_2_5 >= 1000000000))
        || ((v_3_5 <= -1000000000) || (v_3_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((v_5_6 <= -1000000000) || (v_5_6 >= 1000000000))
        || ((v_6_6 <= -1000000000) || (v_6_6 >= 1000000000))
        || ((v_7_6 <= -1000000000) || (v_7_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((v_5_7 <= -1000000000) || (v_5_7 >= 1000000000))
        || ((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000))
        || ((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    goto inv_main3;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_2_4 = __VERIFIER_nondet_int ();
          if (((v_2_4 <= -1000000000) || (v_2_4 >= 1000000000)))
              abort ();
          v_1_4 = __VERIFIER_nondet_int ();
          if (((v_1_4 <= -1000000000) || (v_1_4 >= 1000000000)))
              abort ();
          v_3_4 = __VERIFIER_nondet_int ();
          if (((v_3_4 <= -1000000000) || (v_3_4 >= 1000000000)))
              abort ();
          A_4 = inv_main3_0;
          if (!((A_4 <= 0) && (1 == v_1_4) && (1 == v_2_4) && (0 == v_3_4)))
              abort ();
          inv_main12_0 = A_4;
          inv_main12_1 = v_1_4;
          inv_main12_2 = v_2_4;
          inv_main12_3 = v_3_4;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          E_2 = inv_main12_0;
          D_2 = inv_main12_1;
          C_2 = inv_main12_2;
          G_2 = inv_main12_3;
          if (!
              ((!(F_2 == 0)) && (B_2 == (C_2 + 1))
               && (0 <= (D_2 + (-1 * C_2))) && (A_2 == (G_2 + 2))))
              abort ();
          inv_main12_0 = E_2;
          inv_main12_1 = D_2;
          inv_main12_2 = B_2;
          inv_main12_3 = A_2;
          goto inv_main12_1;

      case 1:
          v_2_5 = __VERIFIER_nondet_int ();
          if (((v_2_5 <= -1000000000) || (v_2_5 >= 1000000000)))
              abort ();
          v_1_5 = __VERIFIER_nondet_int ();
          if (((v_1_5 <= -1000000000) || (v_1_5 >= 1000000000)))
              abort ();
          v_3_5 = __VERIFIER_nondet_int ();
          if (((v_3_5 <= -1000000000) || (v_3_5 >= 1000000000)))
              abort ();
          A_5 = inv_main3_0;
          if (!
              ((!(A_5 <= 0)) && (v_1_5 == A_5) && (1 == v_2_5)
               && (0 == v_3_5)))
              abort ();
          inv_main12_0 = A_5;
          inv_main12_1 = v_1_5;
          inv_main12_2 = v_2_5;
          inv_main12_3 = v_3_5;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          E_2 = inv_main12_0;
          D_2 = inv_main12_1;
          C_2 = inv_main12_2;
          G_2 = inv_main12_3;
          if (!
              ((!(F_2 == 0)) && (B_2 == (C_2 + 1))
               && (0 <= (D_2 + (-1 * C_2))) && (A_2 == (G_2 + 2))))
              abort ();
          inv_main12_0 = E_2;
          inv_main12_1 = D_2;
          inv_main12_2 = B_2;
          inv_main12_3 = A_2;
          goto inv_main12_1;

      default:
          abort ();
      }
  inv_main29_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          D_3 = inv_main29_0;
          E_3 = inv_main29_1;
          A_3 = inv_main29_2;
          C_3 = inv_main29_3;
          F_3 = inv_main29_4;
          if (!((!(1 <= (A_3 + (-1 * C_3)))) || (B_3 == 0)))
              abort ();
          inv_main37_0 = D_3;
          inv_main37_1 = E_3;
          inv_main37_2 = F_3;
          A_8 = inv_main37_0;
          B_8 = inv_main37_1;
          C_8 = inv_main37_2;
          if (!(!(B_8 == C_8)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet_int ();
          if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
              abort ();
          E_1 = inv_main29_0;
          F_1 = inv_main29_1;
          C_1 = inv_main29_2;
          D_1 = inv_main29_3;
          G_1 = inv_main29_4;
          if (!
              ((B_1 == (D_1 + 1)) && (!(H_1 == 0))
               && (1 <= (C_1 + (-1 * D_1))) && (A_1 == (G_1 + 2))))
              abort ();
          inv_main29_0 = E_1;
          inv_main29_1 = F_1;
          inv_main29_2 = C_1;
          inv_main29_3 = B_1;
          inv_main29_4 = A_1;
          goto inv_main29_0;

      default:
          abort ();
      }
  inv_main12_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          E_2 = inv_main12_0;
          D_2 = inv_main12_1;
          C_2 = inv_main12_2;
          G_2 = inv_main12_3;
          if (!
              ((!(F_2 == 0)) && (B_2 == (C_2 + 1))
               && (0 <= (D_2 + (-1 * C_2))) && (A_2 == (G_2 + 2))))
              abort ();
          inv_main12_0 = E_2;
          inv_main12_1 = D_2;
          inv_main12_2 = B_2;
          inv_main12_3 = A_2;
          goto inv_main12_1;

      case 1:
          D_6 = __VERIFIER_nondet_int ();
          if (((D_6 <= -1000000000) || (D_6 >= 1000000000)))
              abort ();
          v_6_6 = __VERIFIER_nondet_int ();
          if (((v_6_6 <= -1000000000) || (v_6_6 >= 1000000000)))
              abort ();
          v_5_6 = __VERIFIER_nondet_int ();
          if (((v_5_6 <= -1000000000) || (v_5_6 >= 1000000000)))
              abort ();
          v_7_6 = __VERIFIER_nondet_int ();
          if (((v_7_6 <= -1000000000) || (v_7_6 >= 1000000000)))
              abort ();
          C_6 = inv_main12_0;
          B_6 = inv_main12_1;
          A_6 = inv_main12_2;
          E_6 = inv_main12_3;
          if (!
              (((!(0 <= (B_6 + (-1 * A_6)))) || (D_6 == 0)) && (C_6 <= 0)
               && (1 == v_5_6) && (1 == v_6_6) && (2 == v_7_6)))
              abort ();
          inv_main29_0 = C_6;
          inv_main29_1 = E_6;
          inv_main29_2 = v_5_6;
          inv_main29_3 = v_6_6;
          inv_main29_4 = v_7_6;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet_int ();
          if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
              abort ();
          E_1 = inv_main29_0;
          F_1 = inv_main29_1;
          C_1 = inv_main29_2;
          D_1 = inv_main29_3;
          G_1 = inv_main29_4;
          if (!
              ((B_1 == (D_1 + 1)) && (!(H_1 == 0))
               && (1 <= (C_1 + (-1 * D_1))) && (A_1 == (G_1 + 2))))
              abort ();
          inv_main29_0 = E_1;
          inv_main29_1 = F_1;
          inv_main29_2 = C_1;
          inv_main29_3 = B_1;
          inv_main29_4 = A_1;
          goto inv_main29_0;

      case 2:
          D_7 = __VERIFIER_nondet_int ();
          if (((D_7 <= -1000000000) || (D_7 >= 1000000000)))
              abort ();
          v_6_7 = __VERIFIER_nondet_int ();
          if (((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000)))
              abort ();
          v_5_7 = __VERIFIER_nondet_int ();
          if (((v_5_7 <= -1000000000) || (v_5_7 >= 1000000000)))
              abort ();
          v_7_7 = __VERIFIER_nondet_int ();
          if (((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000)))
              abort ();
          C_7 = inv_main12_0;
          B_7 = inv_main12_1;
          A_7 = inv_main12_2;
          E_7 = inv_main12_3;
          if (!
              (((!(0 <= (B_7 + (-1 * A_7)))) || (D_7 == 0)) && (!(C_7 <= 0))
               && (v_5_7 == C_7) && (1 == v_6_7) && (2 == v_7_7)))
              abort ();
          inv_main29_0 = C_7;
          inv_main29_1 = E_7;
          inv_main29_2 = v_5_7;
          inv_main29_3 = v_6_7;
          inv_main29_4 = v_7_7;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet_int ();
          if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
              abort ();
          E_1 = inv_main29_0;
          F_1 = inv_main29_1;
          C_1 = inv_main29_2;
          D_1 = inv_main29_3;
          G_1 = inv_main29_4;
          if (!
              ((B_1 == (D_1 + 1)) && (!(H_1 == 0))
               && (1 <= (C_1 + (-1 * D_1))) && (A_1 == (G_1 + 2))))
              abort ();
          inv_main29_0 = E_1;
          inv_main29_1 = F_1;
          inv_main29_2 = C_1;
          inv_main29_3 = B_1;
          inv_main29_4 = A_1;
          goto inv_main29_0;

      default:
          abort ();
      }

    // return expression

}

