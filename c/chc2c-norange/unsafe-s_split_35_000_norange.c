// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: aeval-unsafe/unsafe-s_split_35_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "unsafe-s_split_35_000_norange.c", 13, "reach_error"); }



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
    int A_0;
    int B_0;
    int C_0;
    int D_0;
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
    if (!((A_0 == 0) && (!(C_0 <= B_0)) && (D_0 == 0)))
        abort ();
    inv_0 = D_0;
    inv_1 = C_0;
    inv_2 = B_0;
    inv_3 = A_0;
    A_1 = __VERIFIER_nondet_int ();
    B_1 = __VERIFIER_nondet_int ();
    C_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet_int ();
    G_1 = inv_0;
    H_1 = inv_1;
    F_1 = inv_2;
    E_1 = inv_3;
    if (!
        ((C_1 == (H_1 + 3)) && (B_1 == (F_1 + 1))
         && (A_1 == ((F_1 <= G_1) ? (E_1 + -1) : (E_1 + 1)))
         && (D_1 == (G_1 + 5))))
        abort ();
    inv_0 = D_1;
    inv_1 = C_1;
    inv_2 = B_1;
    inv_3 = A_1;
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
          B_2 = inv_1;
          D_2 = inv_2;
          A_2 = inv_3;
          if (!((A_2 <= 0) && (!(C_2 <= B_2))))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          G_1 = inv_0;
          H_1 = inv_1;
          F_1 = inv_2;
          E_1 = inv_3;
          if (!
              ((C_1 == (H_1 + 3)) && (B_1 == (F_1 + 1))
               && (A_1 == ((F_1 <= G_1) ? (E_1 + -1) : (E_1 + 1)))
               && (D_1 == (G_1 + 5))))
              abort ();
          inv_0 = D_1;
          inv_1 = C_1;
          inv_2 = B_1;
          inv_3 = A_1;
          goto inv_0;

      default:
          abort ();
      }

    // return expression

}

