// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/intro2_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "intro2_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_unknown_2_0;
    int f_unknown_2_1;
    int f_unknown_1_0;
    int h_unknown_5_0;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;
    int B_2;
    int A_3;
    int B_3;

    if (((f_unknown_2_0 <= -1000000000) || (f_unknown_2_0 >= 1000000000))
        || ((f_unknown_2_1 <= -1000000000) || (f_unknown_2_1 >= 1000000000))
        || ((f_unknown_1_0 <= -1000000000) || (f_unknown_1_0 >= 1000000000))
        || ((h_unknown_5_0 <= -1000000000) || (h_unknown_5_0 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((!(0 == B_2)) && (!((0 == B_2) == (A_2 >= 0)))))
        abort ();
    f_unknown_1_0 = A_2;
    B_0 = __VERIFIER_nondet_int ();
    if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
        abort ();
    A_0 = f_unknown_1_0;
    if (!(B_0 == (A_0 + 1)))
        abort ();
    f_unknown_2_0 = B_0;
    f_unknown_2_1 = A_0;
    C_1 = __VERIFIER_nondet_int ();
    if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
        abort ();
    A_1 = f_unknown_2_0;
    B_1 = f_unknown_2_1;
    if (!((!(0 == C_1)) && (!((0 == C_1) == (B_1 >= 0)))))
        abort ();
    h_unknown_5_0 = A_1;
    B_3 = __VERIFIER_nondet_int ();
    if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
        abort ();
    A_3 = h_unknown_5_0;
    if (!((0 == B_3) && ((0 == B_3) == (A_3 <= 0))))
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

