// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/binomial00_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "binomial00_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_1033_unknown_28_0;
    int main_1033_unknown_28_1;
    int main_1033_unknown_28_2;
    int main_1033_unknown_28_3;
    int main_1033_unknown_28_4;
    int main_1033_unknown_28_5;
    int fail_unknown_21_0;
    int bin_1030_unknown_8_0;
    int bin_1030_unknown_8_1;
    int bin_1030_unknown_8_2;
    int bin_1030_unknown_8_3;
    int bin_1030_unknown_8_4;
    int bin_1030_unknown_8_5;
    int bin_1030_unknown_8_6;
    int bin_1030_unknown_8_7;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
    int I_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int v_9_1;
    int v_10_1;
    int v_11_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int A_3;



    // main logic
    goto main_init;

  main_init:
    if (!((E_2 == 0) && (D_2 == 0) && (C_2 == 0) && (F_2 == 1)))
        abort ();
    main_1033_unknown_28_0 = A_2;
    main_1033_unknown_28_1 = B_2;
    main_1033_unknown_28_2 = F_2;
    main_1033_unknown_28_3 = E_2;
    main_1033_unknown_28_4 = D_2;
    main_1033_unknown_28_5 = C_2;
    v_9_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    H_1 = __VERIFIER_nondet_int ();
    I_1 = __VERIFIER_nondet_int ();
    v_11_1 = __VERIFIER_nondet_int ();
    v_10_1 = __VERIFIER_nondet_int ();
    F_1 = main_1033_unknown_28_0;
    E_1 = main_1033_unknown_28_1;
    D_1 = main_1033_unknown_28_2;
    C_1 = main_1033_unknown_28_3;
    B_1 = main_1033_unknown_28_4;
    A_1 = main_1033_unknown_28_5;
    if (!
        ((!((0 == H_1) == (F_1 >= 0))) && (!((0 == G_1) == (E_1 >= 0)))
         && (!(0 == I_1))
         && (!((0 == I_1) == ((!(0 == G_1)) && (!(0 == H_1)))))
         && (v_9_1 == C_1) && (v_10_1 == B_1) && (v_11_1 == A_1)))
        abort ();
    bin_1030_unknown_8_0 = F_1;
    bin_1030_unknown_8_1 = C_1;
    bin_1030_unknown_8_2 = B_1;
    bin_1030_unknown_8_3 = A_1;
    bin_1030_unknown_8_4 = E_1;
    bin_1030_unknown_8_5 = v_9_1;
    bin_1030_unknown_8_6 = v_10_1;
    bin_1030_unknown_8_7 = v_11_1;
    I_0 = __VERIFIER_nondet_int ();
    H_0 = bin_1030_unknown_8_0;
    G_0 = bin_1030_unknown_8_1;
    F_0 = bin_1030_unknown_8_2;
    E_0 = bin_1030_unknown_8_3;
    D_0 = bin_1030_unknown_8_4;
    C_0 = bin_1030_unknown_8_5;
    B_0 = bin_1030_unknown_8_6;
    A_0 = bin_1030_unknown_8_7;
    if (!((I_0 == 1) && (!(0 == E_0))))
        abort ();
    fail_unknown_21_0 = I_0;
    A_3 = fail_unknown_21_0;
    if (!1)
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

