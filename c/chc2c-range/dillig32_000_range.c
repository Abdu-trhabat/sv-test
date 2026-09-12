// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/dillig32_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "dillig32_000_range.c", 13, "reach_error"); }



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
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;

    if (((inv_0 <= -1000000000) || (inv_0 >= 1000000000))
        || ((inv_1 <= -1000000000) || (inv_1 >= 1000000000))
        || ((inv_2 <= -1000000000) || (inv_2 >= 1000000000))
        || ((inv_3 <= -1000000000) || (inv_3 >= 1000000000))
        || ((inv_4 <= -1000000000) || (inv_4 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((B_0 == C_0) && (A_0 == 100) && ((E_0 == 0) || (E_0 == 1))
         && (D_0 == 0)))
        abort ();
    inv_0 = A_0;
    inv_1 = B_0;
    inv_2 = C_0;
    inv_3 = D_0;
    inv_4 = E_0;
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    G_1 = __VERIFIER_nondet_int ();
    if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
        abort ();
    H_1 = __VERIFIER_nondet_int ();
    if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
        abort ();
    I_1 = __VERIFIER_nondet_int ();
    if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
        abort ();
    E_1 = inv_0;
    A_1 = inv_1;
    B_1 = inv_2;
    D_1 = inv_3;
    C_1 = inv_4;
    if (!
        ((H_1 == (D_1 + 1)) && (G_1 == ((C_1 == 0) ? B_1 : (B_1 + 1)))
         && (F_1 == ((C_1 == 0) ? (A_1 + 1) : A_1)) && (!((2 * E_1) <= D_1))
         && (I_1 == ((C_1 == 0) ? 1 : 0))))
        abort ();
    inv_0 = E_1;
    inv_1 = F_1;
    inv_2 = G_1;
    inv_3 = H_1;
    inv_4 = I_1;
    goto inv_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = inv_0;
          D_2 = inv_1;
          E_2 = inv_2;
          B_2 = inv_3;
          A_2 = inv_4;
          if (!((B_2 == (2 * C_2)) && (!(D_2 == E_2))))
              abort ();
          goto main_error;

      case 1:
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          G_1 = __VERIFIER_nondet_int ();
          if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet_int ();
          if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
              abort ();
          I_1 = __VERIFIER_nondet_int ();
          if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
              abort ();
          E_1 = inv_0;
          A_1 = inv_1;
          B_1 = inv_2;
          D_1 = inv_3;
          C_1 = inv_4;
          if (!
              ((H_1 == (D_1 + 1)) && (G_1 == ((C_1 == 0) ? B_1 : (B_1 + 1)))
               && (F_1 == ((C_1 == 0) ? (A_1 + 1) : A_1))
               && (!((2 * E_1) <= D_1)) && (I_1 == ((C_1 == 0) ? 1 : 0))))
              abort ();
          inv_0 = E_1;
          inv_1 = F_1;
          inv_2 = G_1;
          inv_3 = H_1;
          inv_4 = I_1;
          goto inv_0;

      default:
          abort ();
      }

    // return expression

}

