// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/fxx_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "fxx_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_unknown_2_0;
    int f_unknown_2_1;
    int A_0;
    int v_1_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;



    // main logic
    goto main_init;

  main_init:
    if (!(v_1_0 == A_0))
        abort ();
    f_unknown_2_0 = A_0;
    f_unknown_2_1 = v_1_0;
    C_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet_int ();
    E_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    B_1 = f_unknown_2_0;
    A_1 = f_unknown_2_1;
    if (!
        ((!((0 == D_1) == (B_1 <= 0))) && ((0 == C_1) == (A_1 <= 0))
         && (!((0 == F_1) == (0 == E_1))) && (0 == F_1)
         && (!((0 == E_1) == ((!(0 == C_1)) && (!(0 == D_1)))))))
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

