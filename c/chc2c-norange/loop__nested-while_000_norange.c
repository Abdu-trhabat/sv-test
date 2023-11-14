// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__nested-while_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__nested-while_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int A_9;
    int B_9;
    int C_9;
    int D_9;



    // main logic
    goto main_init;

  main_init:
    if (!((A_9 == C_9) && (!(C_9 <= 0)) && (A_9 <= 0) && (B_9 == D_9)))
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42:
    goto INV_MAIN_42;
  INV_MAIN_23:
    goto INV_MAIN_23;

    // return expression

}

