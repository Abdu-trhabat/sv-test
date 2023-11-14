// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/barthe2_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "barthe2_merged_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main17_0;
    int inv_main17_1;
    int inv_main17_2;
    int inv_main17_3;
    int inv_main17_4;
    int A_0;
    int v_1_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
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
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    int I_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;

    if (((inv_main7_0 <= -1000000000) || (inv_main7_0 >= 1000000000))
        || ((inv_main7_1 <= -1000000000) || (inv_main7_1 >= 1000000000))
        || ((inv_main7_2 <= -1000000000) || (inv_main7_2 >= 1000000000))
        || ((inv_main7_3 <= -1000000000) || (inv_main7_3 >= 1000000000))
        || ((inv_main7_4 <= -1000000000) || (inv_main7_4 >= 1000000000))
        || ((inv_main17_0 <= -1000000000) || (inv_main17_0 >= 1000000000))
        || ((inv_main17_1 <= -1000000000) || (inv_main17_1 >= 1000000000))
        || ((inv_main17_2 <= -1000000000) || (inv_main17_2 >= 1000000000))
        || ((inv_main17_3 <= -1000000000) || (inv_main17_3 >= 1000000000))
        || ((inv_main17_4 <= -1000000000) || (inv_main17_4 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
        || ((v_3_0 <= -1000000000) || (v_3_0 >= 1000000000))
        || ((v_4_0 <= -1000000000) || (v_4_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
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
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((H_5 <= -1000000000) || (H_5 >= 1000000000))
        || ((I_5 <= -1000000000) || (I_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((0 == v_1_0) && (0 == v_2_0) && (0 == v_3_0) && (1 == v_4_0)))
        abort ();
    inv_main7_0 = A_0;
    inv_main7_1 = v_1_0;
    inv_main7_2 = v_2_0;
    inv_main7_3 = v_3_0;
    inv_main7_4 = v_4_0;
    goto inv_main7;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main7:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          B_2 = inv_main7_0;
          D_2 = inv_main7_1;
          C_2 = inv_main7_2;
          A_2 = inv_main7_3;
          E_2 = inv_main7_4;
          if (!
              ((!(0 <= (B_2 + (-1 * E_2))))
               && ((!(1 <= (E_2 + (-1 * B_2))))
                   || (!(1 <= (A_2 + (-1 * B_2)))))
               && (!(0 <= (B_2 + (-1 * A_2))))))
              abort ();
          inv_main17_0 = B_2;
          inv_main17_1 = D_2;
          inv_main17_2 = C_2;
          inv_main17_3 = A_2;
          inv_main17_4 = E_2;
          goto inv_main17;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          D_3 = inv_main7_0;
          F_3 = inv_main7_1;
          E_3 = inv_main7_2;
          C_3 = inv_main7_3;
          G_3 = inv_main7_4;
          if (!
              ((B_3 == (E_3 + G_3)) && (!(0 <= (D_3 + (-1 * C_3))))
               && (0 <= (D_3 + (-1 * G_3))) && ((!(0 <= (G_3 + (-1 * D_3))))
                                                ||
                                                (!(1 <= (C_3 + (-1 * D_3)))))
               && (A_3 == (G_3 + 1))))
              abort ();
          inv_main17_0 = D_3;
          inv_main17_1 = F_3;
          inv_main17_2 = B_3;
          inv_main17_3 = C_3;
          inv_main17_4 = A_3;
          goto inv_main17;

      case 2:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          D_4 = inv_main7_0;
          F_4 = inv_main7_1;
          E_4 = inv_main7_2;
          C_4 = inv_main7_3;
          G_4 = inv_main7_4;
          if (!
              ((B_4 == (F_4 + C_4)) && (0 <= (D_4 + (-1 * C_4)))
               && (!(0 <= (D_4 + (-1 * G_4))))
               && ((!(0 <= (C_4 + (-1 * D_4))))
                   || (!(1 <= (G_4 + (-1 * D_4))))) && (A_4 == (C_4 + 1))))
              abort ();
          inv_main17_0 = D_4;
          inv_main17_1 = B_4;
          inv_main17_2 = E_4;
          inv_main17_3 = A_4;
          inv_main17_4 = G_4;
          goto inv_main17;

      case 3:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          D_5 = __VERIFIER_nondet_int ();
          if (((D_5 <= -1000000000) || (D_5 >= 1000000000)))
              abort ();
          F_5 = inv_main7_0;
          H_5 = inv_main7_1;
          G_5 = inv_main7_2;
          E_5 = inv_main7_3;
          I_5 = inv_main7_4;
          if (!
              ((B_5 == (E_5 + 1)) && (C_5 == (G_5 + I_5))
               && (D_5 == (H_5 + E_5)) && (0 <= (F_5 + (-1 * E_5)))
               && (0 <= (F_5 + (-1 * I_5))) && ((!(0 <= (I_5 + (-1 * F_5))))
                                                ||
                                                (!(0 <= (E_5 + (-1 * F_5)))))
               && (A_5 == (I_5 + 1))))
              abort ();
          inv_main17_0 = F_5;
          inv_main17_1 = D_5;
          inv_main17_2 = C_5;
          inv_main17_3 = B_5;
          inv_main17_4 = A_5;
          goto inv_main17;

      default:
          abort ();
      }
  inv_main17:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = inv_main17_0;
          D_1 = inv_main17_1;
          C_1 = inv_main17_2;
          A_1 = inv_main17_3;
          E_1 = inv_main17_4;
          if (!1)
              abort ();
          inv_main7_0 = B_1;
          inv_main7_1 = D_1;
          inv_main7_2 = C_1;
          inv_main7_3 = A_1;
          inv_main7_4 = E_1;
          goto inv_main7;

      case 1:
          B_6 = inv_main17_0;
          D_6 = inv_main17_1;
          C_6 = inv_main17_2;
          A_6 = inv_main17_3;
          E_6 = inv_main17_4;
          if (!(!(C_6 == (D_6 + A_6))))
              abort ();
          goto main_error;

      default:
          abort ();
      }

    // return expression

}

