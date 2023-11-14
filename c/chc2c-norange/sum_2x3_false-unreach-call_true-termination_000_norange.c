// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/sum_2x3_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sum_2x3_false-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    _Bool A_1;
    _Bool B_1;
    _Bool CHC_COMP_UNUSED_2;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_1 = __VERIFIER_nondet__Bool ();
    B_1 = __VERIFIER_nondet__Bool ();
    if (!(B_1 && ((!B_1) || (B_1 && A_1))))
        abort ();
    CHC_COMP_UNUSED_2 = __VERIFIER_nondet__Bool ();
    if (!1)
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

