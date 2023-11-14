// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop5_unsafe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop5_unsafe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main23_0;
    int inv_main23_1;
    int inv_main23_2;
    int inv_main23_3;
    int inv_main23_4;
    int inv_main3_0;
    int inv_main10_0;
    int inv_main10_1;
    int inv_main10_2;
    int inv_main10_3;
    int inv_main29_0;
    int inv_main29_1;
    int inv_main29_2;
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
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int v_6_5;
    int v_7_5;
    int A_6;
    int B_6;
    int C_6;

    if (((inv_main23_0 <= -1000000000) || (inv_main23_0 >= 1000000000))
        || ((inv_main23_1 <= -1000000000) || (inv_main23_1 >= 1000000000))
        || ((inv_main23_2 <= -1000000000) || (inv_main23_2 >= 1000000000))
        || ((inv_main23_3 <= -1000000000) || (inv_main23_3 >= 1000000000))
        || ((inv_main23_4 <= -1000000000) || (inv_main23_4 >= 1000000000))
        || ((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main10_0 <= -1000000000) || (inv_main10_0 >= 1000000000))
        || ((inv_main10_1 <= -1000000000) || (inv_main10_1 >= 1000000000))
        || ((inv_main10_2 <= -1000000000) || (inv_main10_2 >= 1000000000))
        || ((inv_main10_3 <= -1000000000) || (inv_main10_3 >= 1000000000))
        || ((inv_main29_0 <= -1000000000) || (inv_main29_0 >= 1000000000))
        || ((inv_main29_1 <= -1000000000) || (inv_main29_1 >= 1000000000))
        || ((inv_main29_2 <= -1000000000) || (inv_main29_2 >= 1000000000))
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
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((v_6_5 <= -1000000000) || (v_6_5 >= 1000000000))
        || ((v_7_5 <= -1000000000) || (v_7_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
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
    if (!((v_1_4 == A_4) && (0 == v_2_4) && (0 == v_3_4)))
        abort ();
    inv_main10_0 = A_4;
    inv_main10_1 = v_1_4;
    inv_main10_2 = v_2_4;
    inv_main10_3 = v_3_4;
    A_2 = __VERIFIER_nondet_int ();
    if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();
    B_2 = __VERIFIER_nondet_int ();
    if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
        abort ();
    D_2 = __VERIFIER_nondet_int ();
    if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
        abort ();
    C_2 = inv_main10_0;
    F_2 = inv_main10_1;
    E_2 = inv_main10_2;
    G_2 = inv_main10_3;
    if (!
        ((!(D_2 == 0)) && (B_2 == (E_2 + 1))
         && (1 <= ((2 * F_2) + (-1 * E_2))) && (A_2 == (G_2 + 1))))
        abort ();
    inv_main10_0 = C_2;
    inv_main10_1 = F_2;
    inv_main10_2 = B_2;
    inv_main10_3 = A_2;
    goto inv_main10_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main23_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          A_3 = inv_main23_0;
          B_3 = inv_main23_1;
          F_3 = inv_main23_2;
          E_3 = inv_main23_3;
          D_3 = inv_main23_4;
          if (!((!(1 <= E_3)) || (C_3 == 0)))
              abort ();
          inv_main29_0 = A_3;
          inv_main29_1 = B_3;
          inv_main29_2 = D_3;
          A_6 = inv_main29_0;
          B_6 = inv_main29_1;
          C_6 = inv_main29_2;
          if (!(!(B_6 == C_6)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          C_1 = inv_main23_0;
          E_1 = inv_main23_1;
          H_1 = inv_main23_2;
          G_1 = inv_main23_3;
          F_1 = inv_main23_4;
          if (!
              ((B_1 == (G_1 + -1)) && (!(D_1 == 0)) && (1 <= G_1)
               && (A_1 == (F_1 + 2))))
              abort ();
          inv_main23_0 = C_1;
          inv_main23_1 = E_1;
          inv_main23_2 = H_1;
          inv_main23_3 = B_1;
          inv_main23_4 = A_1;
          goto inv_main23_0;

      default:
          abort ();
      }
  inv_main10_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          v_6_5 = __VERIFIER_nondet_int ();
          if (((v_6_5 <= -1000000000) || (v_6_5 >= 1000000000)))
              abort ();
          v_7_5 = __VERIFIER_nondet_int ();
          if (((v_7_5 <= -1000000000) || (v_7_5 >= 1000000000)))
              abort ();
          C_5 = inv_main10_0;
          E_5 = inv_main10_1;
          D_5 = inv_main10_2;
          F_5 = inv_main10_3;
          if (!
              (((!(1 <= ((2 * E_5) + (-1 * D_5)))) || (B_5 == 0))
               && (A_5 == (C_5 + 1)) && (v_6_5 == C_5) && (0 == v_7_5)))
              abort ();
          inv_main23_0 = C_5;
          inv_main23_1 = F_5;
          inv_main23_2 = v_6_5;
          inv_main23_3 = A_5;
          inv_main23_4 = v_7_5;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          C_1 = inv_main23_0;
          E_1 = inv_main23_1;
          H_1 = inv_main23_2;
          G_1 = inv_main23_3;
          F_1 = inv_main23_4;
          if (!
              ((B_1 == (G_1 + -1)) && (!(D_1 == 0)) && (1 <= G_1)
               && (A_1 == (F_1 + 2))))
              abort ();
          inv_main23_0 = C_1;
          inv_main23_1 = E_1;
          inv_main23_2 = H_1;
          inv_main23_3 = B_1;
          inv_main23_4 = A_1;
          goto inv_main23_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          C_2 = inv_main10_0;
          F_2 = inv_main10_1;
          E_2 = inv_main10_2;
          G_2 = inv_main10_3;
          if (!
              ((!(D_2 == 0)) && (B_2 == (E_2 + 1))
               && (1 <= ((2 * F_2) + (-1 * E_2))) && (A_2 == (G_2 + 1))))
              abort ();
          inv_main10_0 = C_2;
          inv_main10_1 = F_2;
          inv_main10_2 = B_2;
          inv_main10_3 = A_2;
          goto inv_main10_1;

      default:
          abort ();
      }

    // return expression

}

