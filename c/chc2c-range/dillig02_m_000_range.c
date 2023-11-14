// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/dillig02_m_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "dillig02_m_000_range.c", 13, "reach_error"); }



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
    int inv_5;
    int inv1_0;
    int inv1_1;
    int inv1_2;
    int inv1_3;
    int inv1_4;
    int inv1_5;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
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
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;

    if (((inv_0 <= -1000000000) || (inv_0 >= 1000000000))
        || ((inv_1 <= -1000000000) || (inv_1 >= 1000000000))
        || ((inv_2 <= -1000000000) || (inv_2 >= 1000000000))
        || ((inv_3 <= -1000000000) || (inv_3 >= 1000000000))
        || ((inv_4 <= -1000000000) || (inv_4 >= 1000000000))
        || ((inv_5 <= -1000000000) || (inv_5 >= 1000000000))
        || ((inv1_0 <= -1000000000) || (inv1_0 >= 1000000000))
        || ((inv1_1 <= -1000000000) || (inv1_1 >= 1000000000))
        || ((inv1_2 <= -1000000000) || (inv1_2 >= 1000000000))
        || ((inv1_3 <= -1000000000) || (inv1_3 >= 1000000000))
        || ((inv1_4 <= -1000000000) || (inv1_4 >= 1000000000))
        || ((inv1_5 <= -1000000000) || (inv1_5 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((F_0 <= -1000000000) || (F_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((E_0 == 0) && (D_0 == 0) && (C_0 == (A_0 + (-1 * B_0))) && (B_0 == 0)
         && (A_0 == 1) && (F_0 == 0)))
        abort ();
    inv_0 = A_0;
    inv_1 = B_0;
    inv_2 = C_0;
    inv_3 = D_0;
    inv_4 = E_0;
    inv_5 = F_0;
    goto inv;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = inv_0;
          B_4 = inv_1;
          C_4 = inv_2;
          E_4 = inv_3;
          F_4 = inv_4;
          D_4 = inv_5;
          if (!(!(E_4 == F_4)))
              abort ();
          goto main_error;

      case 1:
          A_1 = inv_0;
          B_1 = inv_1;
          C_1 = inv_2;
          D_1 = inv_3;
          E_1 = inv_4;
          F_1 = inv_5;
          if (!1)
              abort ();
          inv1_0 = A_1;
          inv1_1 = B_1;
          inv1_2 = C_1;
          inv1_3 = D_1;
          inv1_4 = E_1;
          inv1_5 = F_1;
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          J_2 = __VERIFIER_nondet_int ();
          if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
              abort ();
          E_2 = inv1_0;
          F_2 = inv1_1;
          A_2 = inv1_2;
          C_2 = inv1_3;
          B_2 = inv1_4;
          D_2 = inv1_5;
          if (!
              ((I_2 == (B_2 + 1))
               && (H_2 == ((((G_2 % 2 + 2) % 2) == 1) ? (C_2 + 1) : C_2))
               && (G_2 == (A_2 + C_2 + B_2 + D_2)) && (J_2 == (D_2 + 2))))
              abort ();
          inv1_0 = E_2;
          inv1_1 = F_2;
          inv1_2 = G_2;
          inv1_3 = H_2;
          inv1_4 = I_2;
          inv1_5 = J_2;
          goto inv1_0;

      default:
          abort ();
      }
  inv1_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = inv1_0;
          B_3 = inv1_1;
          C_3 = inv1_2;
          D_3 = inv1_3;
          E_3 = inv1_4;
          F_3 = inv1_5;
          if (!1)
              abort ();
          inv_0 = A_3;
          inv_1 = B_3;
          inv_2 = C_3;
          inv_3 = D_3;
          inv_4 = E_3;
          inv_5 = F_3;
          goto inv;

      case 1:
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          J_2 = __VERIFIER_nondet_int ();
          if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
              abort ();
          E_2 = inv1_0;
          F_2 = inv1_1;
          A_2 = inv1_2;
          C_2 = inv1_3;
          B_2 = inv1_4;
          D_2 = inv1_5;
          if (!
              ((I_2 == (B_2 + 1))
               && (H_2 == ((((G_2 % 2 + 2) % 2) == 1) ? (C_2 + 1) : C_2))
               && (G_2 == (A_2 + C_2 + B_2 + D_2)) && (J_2 == (D_2 + 2))))
              abort ();
          inv1_0 = E_2;
          inv1_1 = F_2;
          inv1_2 = G_2;
          inv1_3 = H_2;
          inv1_4 = I_2;
          inv1_5 = J_2;
          goto inv1_0;

      default:
          abort ();
      }

    // return expression

}

