// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/yz_plus_minus_2_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "yz_plus_minus_2_000_norange.c", 13, "reach_error"); }



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
    int v_0_0;
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
    int H_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;



    // main logic
    goto main_init;

  main_init:
    if (!((0 == v_0_0) && (0 == v_1_0) && (0 == v_2_0) && (0 == v_3_0)))
        abort ();
    inv_0 = v_0_0;
    inv_1 = v_1_0;
    inv_2 = v_2_0;
    inv_3 = v_3_0;
    E_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    H_1 = __VERIFIER_nondet_int ();
    A_1 = inv_0;
    D_1 = inv_1;
    B_1 = inv_2;
    C_1 = inv_3;
    if (!
        ((G_1 == (C_1 + -1)) && (F_1 == (B_1 + 1)) && (E_1 == (A_1 + C_1))
         && (!(10000 <= A_1)) && (H_1 == (D_1 + 1))))
        abort ();
    inv_0 = E_1;
    inv_1 = F_1;
    inv_2 = G_1;
    inv_3 = H_1;
    goto inv_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_2 = inv_0;
          A_2 = inv_1;
          B_2 = inv_2;
          C_2 = inv_3;
          if (!(!(D_2 >= 0)))
              abort ();
          goto main_error;

      case 1:
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          A_1 = inv_0;
          D_1 = inv_1;
          B_1 = inv_2;
          C_1 = inv_3;
          if (!
              ((G_1 == (C_1 + -1)) && (F_1 == (B_1 + 1))
               && (E_1 == (A_1 + C_1)) && (!(10000 <= A_1))
               && (H_1 == (D_1 + 1))))
              abort ();
          inv_0 = E_1;
          inv_1 = F_1;
          inv_2 = G_1;
          inv_3 = H_1;
          goto inv_0;

      default:
          abort ();
      }

    // return expression

}

