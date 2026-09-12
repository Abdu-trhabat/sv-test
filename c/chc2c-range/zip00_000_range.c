// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/zip00_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "zip00_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int fail_unknown_3_0;
    int zip_1030_unknown_12_0;
    int zip_1030_unknown_12_1;
    int zip_1030_unknown_12_2;
    int zip_1030_unknown_12_3;
    int zip_1030_unknown_12_4;
    int zip_1030_unknown_12_5;
    int zip_1030_unknown_12_6;
    int zip_1030_unknown_12_7;
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
    int v_5_1;
    int v_6_1;
    int v_7_1;
    int A_2;

    if (((fail_unknown_3_0 <= -1000000000)
         || (fail_unknown_3_0 >= 1000000000))
        || ((zip_1030_unknown_12_0 <= -1000000000)
            || (zip_1030_unknown_12_0 >= 1000000000))
        || ((zip_1030_unknown_12_1 <= -1000000000)
            || (zip_1030_unknown_12_1 >= 1000000000))
        || ((zip_1030_unknown_12_2 <= -1000000000)
            || (zip_1030_unknown_12_2 >= 1000000000))
        || ((zip_1030_unknown_12_3 <= -1000000000)
            || (zip_1030_unknown_12_3 >= 1000000000))
        || ((zip_1030_unknown_12_4 <= -1000000000)
            || (zip_1030_unknown_12_4 >= 1000000000))
        || ((zip_1030_unknown_12_5 <= -1000000000)
            || (zip_1030_unknown_12_5 >= 1000000000))
        || ((zip_1030_unknown_12_6 <= -1000000000)
            || (zip_1030_unknown_12_6 >= 1000000000))
        || ((zip_1030_unknown_12_7 <= -1000000000)
            || (zip_1030_unknown_12_7 >= 1000000000)) || ((A_0 <= -1000000000)
                                                          || (A_0 >=
                                                              1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((F_0 <= -1000000000) || (F_0 >= 1000000000))
        || ((G_0 <= -1000000000) || (G_0 >= 1000000000))
        || ((H_0 <= -1000000000) || (H_0 >= 1000000000))
        || ((I_0 <= -1000000000) || (I_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000))
        || ((v_6_1 <= -1000000000) || (v_6_1 >= 1000000000))
        || ((v_7_1 <= -1000000000) || (v_7_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((D_1 == 0) && (C_1 == 0) && (E_1 == 0) && (v_5_1 == E_1)
         && (v_6_1 == D_1) && (v_7_1 == C_1)))
        abort ();
    zip_1030_unknown_12_0 = B_1;
    zip_1030_unknown_12_1 = E_1;
    zip_1030_unknown_12_2 = D_1;
    zip_1030_unknown_12_3 = C_1;
    zip_1030_unknown_12_4 = A_1;
    zip_1030_unknown_12_5 = v_5_1;
    zip_1030_unknown_12_6 = v_6_1;
    zip_1030_unknown_12_7 = v_7_1;
    I_0 = __VERIFIER_nondet_int ();
    if (((I_0 <= -1000000000) || (I_0 >= 1000000000)))
        abort ();
    H_0 = zip_1030_unknown_12_0;
    G_0 = zip_1030_unknown_12_1;
    F_0 = zip_1030_unknown_12_2;
    E_0 = zip_1030_unknown_12_3;
    D_0 = zip_1030_unknown_12_4;
    C_0 = zip_1030_unknown_12_5;
    B_0 = zip_1030_unknown_12_6;
    A_0 = zip_1030_unknown_12_7;
    if (!((I_0 == 1) && (!(0 == E_0))))
        abort ();
    fail_unknown_3_0 = I_0;
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

