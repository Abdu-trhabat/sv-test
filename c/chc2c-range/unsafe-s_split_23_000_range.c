// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: aeval-unsafe/unsafe-s_split_23_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "unsafe-s_split_23_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_0;
    int inv_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;

    if (((inv_0 <= -1000000000) || (inv_0 >= 1000000000))
        || ((inv_1 <= -1000000000) || (inv_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 100) && (B_0 == 1000)))
        abort ();
    inv_0 = B_0;
    inv_1 = A_0;
    A_1 = __VERIFIER_nondet_int ();
    if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
        abort ();
    B_1 = __VERIFIER_nondet_int ();
    if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
        abort ();
    D_1 = inv_0;
    C_1 = inv_1;
    if (!
        ((A_1 == ((C_1 <= (D_1 / 10)) ? (C_1 + 1) : (C_1 + -1)))
         && (B_1 == ((C_1 <= (D_1 / 10)) ? (D_1 + -1) : (D_1 + 1)))))
        abort ();
    inv_0 = B_1;
    inv_1 = A_1;
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
          if (!(!(A_2 <= B_2)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = inv_0;
          C_1 = inv_1;
          if (!
              ((A_1 == ((C_1 <= (D_1 / 10)) ? (C_1 + 1) : (C_1 + -1)))
               && (B_1 == ((C_1 <= (D_1 / 10)) ? (D_1 + -1) : (D_1 + 1)))))
              abort ();
          inv_0 = B_1;
          inv_1 = A_1;
          goto inv_0;

      default:
          abort ();
      }

    // return expression

}

