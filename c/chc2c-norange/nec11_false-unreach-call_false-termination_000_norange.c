// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/nec11_false-unreach-call_false-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nec11_false-unreach-call_false-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_entry_0;
    int A_0;
    int A_1;
    int B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    _Bool CHC_COMP_UNUSED_2;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    main_entry_0 = A_0;
    A_1 = __VERIFIER_nondet_int ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet__Bool ();
    B_1 = main_entry_0;
    if (!
        (((!F_1) || (!D_1) || (!C_1)) && ((!F_1) || (F_1 && C_1))
         && ((!F_1) || (!E_1)) && ((!G_1) || (G_1 && F_1)) && G_1
         && (A_1 == B_1)))
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

