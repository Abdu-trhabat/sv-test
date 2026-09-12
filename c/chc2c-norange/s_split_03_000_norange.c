// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: aeval-benchmarks/s_split_03_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_split_03_000_norange.c", 13, "reach_error"); }



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
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    _Bool CHC_COMP_UNUSED_3;



    // main logic
    goto main_init;

  main_init:
    if (!((D_0 == 0) && (!(B_0 <= C_0)) && (A_0 == 0)))
        abort ();
    inv_0 = A_0;
    inv_1 = B_0;
    inv_2 = C_0;
    inv_3 = D_0;
    C_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    A_1 = inv_0;
    D_1 = inv_1;
    E_1 = inv_2;
    B_1 = inv_3;
    if (!
        ((F_1 == ((E_1 <= A_1) ? (B_1 + -2) : (B_1 + 1)))
         && (C_1 == (A_1 + 1))))
        abort ();
    inv_0 = C_1;
    inv_1 = D_1;
    inv_2 = E_1;
    inv_3 = F_1;
    goto inv_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = inv_0;
          B_2 = inv_1;
          C_2 = inv_2;
          D_2 = inv_3;
          if (!((!(D_2 <= 0)) && (!(A_2 <= (B_2 + C_2)))))
              abort ();
          CHC_COMP_UNUSED_3 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          A_1 = inv_0;
          D_1 = inv_1;
          E_1 = inv_2;
          B_1 = inv_3;
          if (!
              ((F_1 == ((E_1 <= A_1) ? (B_1 + -2) : (B_1 + 1)))
               && (C_1 == (A_1 + 1))))
              abort ();
          inv_0 = C_1;
          inv_1 = D_1;
          inv_2 = E_1;
          inv_3 = F_1;
          goto inv_0;

      default:
          abort ();
      }

    // return expression

}

