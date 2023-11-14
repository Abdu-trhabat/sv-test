// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/alias_partial02_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "alias_partial02_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int f_1030_unknown_5_0;
    int f_1030_unknown_5_1;
    int f_1030_unknown_5_2;
    int main_1035_unknown_25_0;
    int main_1035_unknown_25_1;
    int main_1035_unknown_25_2;
    int fail_unknown_17_0;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
    int I_0;
    int J_0;
    int K_0;
    int L_0;
    int M_0;
    int N_0;
    int O_0;
    int P_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int A_3;

    if (((f_1030_unknown_5_0 <= -1000000000)
         || (f_1030_unknown_5_0 >= 1000000000))
        || ((f_1030_unknown_5_1 <= -1000000000)
            || (f_1030_unknown_5_1 >= 1000000000))
        || ((f_1030_unknown_5_2 <= -1000000000)
            || (f_1030_unknown_5_2 >= 1000000000))
        || ((main_1035_unknown_25_0 <= -1000000000)
            || (main_1035_unknown_25_0 >= 1000000000))
        || ((main_1035_unknown_25_1 <= -1000000000)
            || (main_1035_unknown_25_1 >= 1000000000))
        || ((main_1035_unknown_25_2 <= -1000000000)
            || (main_1035_unknown_25_2 >= 1000000000))
        || ((fail_unknown_17_0 <= -1000000000)
            || (fail_unknown_17_0 >= 1000000000)) || ((A_0 <= -1000000000)
                                                      || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((F_0 <= -1000000000) || (F_0 >= 1000000000))
        || ((G_0 <= -1000000000) || (G_0 >= 1000000000))
        || ((H_0 <= -1000000000) || (H_0 >= 1000000000))
        || ((I_0 <= -1000000000) || (I_0 >= 1000000000))
        || ((J_0 <= -1000000000) || (J_0 >= 1000000000))
        || ((K_0 <= -1000000000) || (K_0 >= 1000000000))
        || ((L_0 <= -1000000000) || (L_0 >= 1000000000))
        || ((M_0 <= -1000000000) || (M_0 >= 1000000000))
        || ((N_0 <= -1000000000) || (N_0 >= 1000000000))
        || ((O_0 <= -1000000000) || (O_0 >= 1000000000))
        || ((P_0 <= -1000000000) || (P_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((B_2 == 0) && (A_2 == 0) && (C_2 == 1)))
        abort ();
    main_1035_unknown_25_0 = C_2;
    main_1035_unknown_25_1 = B_2;
    main_1035_unknown_25_2 = A_2;
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    E_1 = __VERIFIER_nondet_int ();
    if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
        abort ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    C_1 = main_1035_unknown_25_0;
    B_1 = main_1035_unknown_25_1;
    A_1 = main_1035_unknown_25_2;
    if (!((E_1 == 0) && (D_1 == 0) && (F_1 == 1)))
        abort ();
    f_1030_unknown_5_0 = F_1;
    f_1030_unknown_5_1 = E_1;
    f_1030_unknown_5_2 = D_1;
    D_0 = __VERIFIER_nondet_int ();
    if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
        abort ();
    E_0 = __VERIFIER_nondet_int ();
    if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
        abort ();
    F_0 = __VERIFIER_nondet_int ();
    if (((F_0 <= -1000000000) || (F_0 >= 1000000000)))
        abort ();
    G_0 = __VERIFIER_nondet_int ();
    if (((G_0 <= -1000000000) || (G_0 >= 1000000000)))
        abort ();
    H_0 = __VERIFIER_nondet_int ();
    if (((H_0 <= -1000000000) || (H_0 >= 1000000000)))
        abort ();
    I_0 = __VERIFIER_nondet_int ();
    if (((I_0 <= -1000000000) || (I_0 >= 1000000000)))
        abort ();
    J_0 = __VERIFIER_nondet_int ();
    if (((J_0 <= -1000000000) || (J_0 >= 1000000000)))
        abort ();
    K_0 = __VERIFIER_nondet_int ();
    if (((K_0 <= -1000000000) || (K_0 >= 1000000000)))
        abort ();
    L_0 = __VERIFIER_nondet_int ();
    if (((L_0 <= -1000000000) || (L_0 >= 1000000000)))
        abort ();
    M_0 = __VERIFIER_nondet_int ();
    if (((M_0 <= -1000000000) || (M_0 >= 1000000000)))
        abort ();
    N_0 = __VERIFIER_nondet_int ();
    if (((N_0 <= -1000000000) || (N_0 >= 1000000000)))
        abort ();
    O_0 = __VERIFIER_nondet_int ();
    if (((O_0 <= -1000000000) || (O_0 >= 1000000000)))
        abort ();
    P_0 = __VERIFIER_nondet_int ();
    if (((P_0 <= -1000000000) || (P_0 >= 1000000000)))
        abort ();
    C_0 = f_1030_unknown_5_0;
    B_0 = f_1030_unknown_5_1;
    A_0 = f_1030_unknown_5_2;
    if (!
        ((!((0 == O_0) == ((!(0 == N_0)) && (!(0 == J_0)))))
         && (!((0 == N_0) == (M_0 >= 0))) && (!(0 == A_0)) && (0 == O_0)
         && (L_0 == C_0) && (K_0 == 0) && (I_0 == (G_0 + H_0)) && (H_0 == C_0)
         && (G_0 == 0) && (F_0 == (D_0 + E_0)) && (E_0 == B_0) && (D_0 == 0)
         && (P_0 == 1) && (M_0 == (K_0 + L_0))
         && ((0 == J_0) == (F_0 <= I_0))))
        abort ();
    fail_unknown_17_0 = P_0;
    A_3 = fail_unknown_17_0;
    if (!1)
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

