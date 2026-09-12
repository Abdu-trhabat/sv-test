// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/multivar_1-1.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "multivar_1-1.c-1.smt2.gz_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main5_0;
    int inv_main5_1;
    int inv_main6_0;
    int inv_main6_1;
    int A_1;
    int B_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int v_1_3;
    int A_4;
    int B_4;

    if (((inv_main5_0 <= -1000000000) || (inv_main5_0 >= 1000000000))
        || ((inv_main5_1 <= -1000000000) || (inv_main5_1 >= 1000000000))
        || ((inv_main6_0 <= -1000000000) || (inv_main6_0 >= 1000000000))
        || ((inv_main6_1 <= -1000000000) || (inv_main6_1 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((v_1_3 <= -1000000000) || (v_1_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_3 = __VERIFIER_nondet_int ();
    if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
        abort ();
    v_1_3 = __VERIFIER_nondet_int ();
    if (((v_1_3 <= -1000000000) || (v_1_3 >= 1000000000)))
        abort ();
    if (!((0 <= A_3) && (v_1_3 == A_3)))
        abort ();
    inv_main5_0 = A_3;
    inv_main5_1 = v_1_3;
    A_2 = __VERIFIER_nondet_int ();
    if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();
    C_2 = __VERIFIER_nondet_int ();
    if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
        abort ();
    B_2 = inv_main5_0;
    D_2 = inv_main5_1;
    if (!
        ((C_2 == (B_2 + 1)) && (0 <= B_2) && (0 <= A_2) && (0 <= D_2)
         && (0 <= C_2) && (B_2 <= 1023) && (A_2 == (D_2 + 1))))
        abort ();
    inv_main5_0 = C_2;
    inv_main5_1 = A_2;
    goto inv_main5_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main5_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = inv_main5_0;
          A_1 = inv_main5_1;
          if (!((0 <= A_1) && (!(B_1 <= 1023)) && (0 <= B_1)))
              abort ();
          inv_main6_0 = B_1;
          inv_main6_1 = A_1;
          B_4 = inv_main6_0;
          A_4 = inv_main6_1;
          if (!((0 <= B_4) && (0 <= A_4) && (!(B_4 == A_4))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          B_2 = inv_main5_0;
          D_2 = inv_main5_1;
          if (!
              ((C_2 == (B_2 + 1)) && (0 <= B_2) && (0 <= A_2) && (0 <= D_2)
               && (0 <= C_2) && (B_2 <= 1023) && (A_2 == (D_2 + 1))))
              abort ();
          inv_main5_0 = C_2;
          inv_main5_1 = A_2;
          goto inv_main5_0;

      default:
          abort ();
      }

    // return expression

}

