// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/Fibonacci00_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Fibonacci00_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int fib_1030_unknown_7_0;
    int fib_1030_unknown_7_1;
    int fib_1030_unknown_7_2;
    int fail_unknown_3_0;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;

    if (((fib_1030_unknown_7_0 <= -1000000000)
         || (fib_1030_unknown_7_0 >= 1000000000))
        || ((fib_1030_unknown_7_1 <= -1000000000)
            || (fib_1030_unknown_7_1 >= 1000000000))
        || ((fib_1030_unknown_7_2 <= -1000000000)
            || (fib_1030_unknown_7_2 >= 1000000000))
        || ((fail_unknown_3_0 <= -1000000000)
            || (fail_unknown_3_0 >= 1000000000)) || ((A_0 <= -1000000000)
                                                     || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((B_1 == 0) && (C_1 == 0)))
        abort ();
    fib_1030_unknown_7_0 = A_1;
    fib_1030_unknown_7_1 = C_1;
    fib_1030_unknown_7_2 = B_1;
    D_0 = __VERIFIER_nondet_int ();
    if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
        abort ();
    A_0 = fib_1030_unknown_7_0;
    C_0 = fib_1030_unknown_7_1;
    B_0 = fib_1030_unknown_7_2;
    if (!((D_0 == 1) && (!(0 == B_0))))
        abort ();
    fail_unknown_3_0 = D_0;
    A_2 = fail_unknown_3_0;
    if (!1)
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

