// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/dillig21_m_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "dillig21_m_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_0;
    int inv_1;
    int inv_2;
    int inv_3;
    int inv_4;
    int inv1_0;
    int inv1_1;
    int v_0_0;
    int v_1_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
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
    int H_3;
    int I_3;
    int J_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;

    if (((inv_0 <= -1000000000) || (inv_0 >= 1000000000))
        || ((inv_1 <= -1000000000) || (inv_1 >= 1000000000))
        || ((inv_2 <= -1000000000) || (inv_2 >= 1000000000))
        || ((inv_3 <= -1000000000) || (inv_3 >= 1000000000))
        || ((inv_4 <= -1000000000) || (inv_4 >= 1000000000))
        || ((inv1_0 <= -1000000000) || (inv1_0 >= 1000000000))
        || ((inv1_1 <= -1000000000) || (inv1_1 >= 1000000000))
        || ((v_0_0 <= -1000000000) || (v_0_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
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
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((I_3 <= -1000000000) || (I_3 >= 1000000000))
        || ((J_3 <= -1000000000) || (J_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((10 == v_0_0) && (20 == v_1_0)))
        abort ();
    inv1_0 = v_0_0;
    inv1_1 = v_1_0;
    C_1 = __VERIFIER_nondet_int ();
    if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
        abort ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    A_1 = inv1_0;
    B_1 = inv1_1;
    if (!((C_1 == (2 * A_1)) && (D_1 == (2 * B_1))))
        abort ();
    inv1_0 = C_1;
    inv1_1 = D_1;
    goto inv1_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv1_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          A_2 = inv1_0;
          B_2 = inv1_1;
          if (!((C_2 == 0) && (!(10 <= E_2)) && (!(E_2 <= 0)) && (D_2 == 0)))
              abort ();
          inv_0 = A_2;
          inv_1 = B_2;
          inv_2 = C_2;
          inv_3 = D_2;
          inv_4 = E_2;
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          H_3 = __VERIFIER_nondet_int ();
          if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
              abort ();
          I_3 = __VERIFIER_nondet_int ();
          if (((I_3 <= -1000000000) || (I_3 >= 1000000000)))
              abort ();
          F_3 = inv_0;
          G_3 = inv_1;
          E_3 = inv_2;
          A_3 = inv_3;
          J_3 = inv_4;
          if (!
              ((C_3 == ((B_3 % 2 + 2) % 2)) && (I_3 == (A_3 + 1))
               && (H_3 == ((D_3 == 0) ? (E_3 + F_3) : (E_3 + G_3)))
               && (!(J_3 <= A_3)) && (D_3 == ((C_3 == 0) ? 0 : 1))))
              abort ();
          inv_0 = F_3;
          inv_1 = G_3;
          inv_2 = H_3;
          inv_3 = I_3;
          inv_4 = J_3;
          goto inv_1;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          A_1 = inv1_0;
          B_1 = inv1_1;
          if (!((C_1 == (2 * A_1)) && (D_1 == (2 * B_1))))
              abort ();
          inv1_0 = C_1;
          inv1_1 = D_1;
          goto inv1_0;

      default:
          abort ();
      }
  inv_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = inv_0;
          B_4 = inv_1;
          D_4 = inv_2;
          C_4 = inv_3;
          E_4 = inv_4;
          if (!((D_4 <= E_4) && (C_4 >= E_4)))
              abort ();
          goto main_error;

      case 1:
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          H_3 = __VERIFIER_nondet_int ();
          if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
              abort ();
          I_3 = __VERIFIER_nondet_int ();
          if (((I_3 <= -1000000000) || (I_3 >= 1000000000)))
              abort ();
          F_3 = inv_0;
          G_3 = inv_1;
          E_3 = inv_2;
          A_3 = inv_3;
          J_3 = inv_4;
          if (!
              ((C_3 == ((B_3 % 2 + 2) % 2)) && (I_3 == (A_3 + 1))
               && (H_3 == ((D_3 == 0) ? (E_3 + F_3) : (E_3 + G_3)))
               && (!(J_3 <= A_3)) && (D_3 == ((C_3 == 0) ? 0 : 1))))
              abort ();
          inv_0 = F_3;
          inv_1 = G_3;
          inv_2 = H_3;
          inv_3 = I_3;
          inv_4 = J_3;
          goto inv_1;

      default:
          abort ();
      }

    // return expression

}

