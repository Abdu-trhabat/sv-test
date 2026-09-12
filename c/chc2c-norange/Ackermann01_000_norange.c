// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/Ackermann01_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Ackermann01_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int ack_1030_unknown_8_0;
    int ack_1030_unknown_8_1;
    int ack_1030_unknown_8_2;
    int ack_1030_unknown_8_3;
    int ack_1030_unknown_8_4;
    int ack_1030_unknown_8_5;
    int ack_1030_unknown_8_6;
    int ack_1030_unknown_8_7;
    int fail_unknown_21_0;
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
    int Q_0;
    int R_0;
    int S_0;
    int T_0;
    int U_0;
    int V_0;
    int W_0;
    int X_0;
    int Y_0;
    int Z_0;
    int A1_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int v_8_1;
    int v_9_1;
    int v_10_1;
    int A_2;



    // main logic
    goto main_init;

  main_init:
    if (!
        (((0 == G_1) == (A_1 <= 0)) && ((0 == F_1) == (B_1 <= 0))
         && (!(0 == H_1)) && (E_1 == 0) && (D_1 == 0) && (C_1 == 0)
         && (!((0 == H_1) == ((!(0 == F_1)) && (!(0 == G_1)))))
         && (v_8_1 == E_1) && (v_9_1 == D_1) && (v_10_1 == C_1)))
        abort ();
    ack_1030_unknown_8_0 = B_1;
    ack_1030_unknown_8_1 = E_1;
    ack_1030_unknown_8_2 = D_1;
    ack_1030_unknown_8_3 = C_1;
    ack_1030_unknown_8_4 = A_1;
    ack_1030_unknown_8_5 = v_8_1;
    ack_1030_unknown_8_6 = v_9_1;
    ack_1030_unknown_8_7 = v_10_1;
    I_0 = __VERIFIER_nondet_int ();
    J_0 = __VERIFIER_nondet_int ();
    K_0 = __VERIFIER_nondet_int ();
    L_0 = __VERIFIER_nondet_int ();
    M_0 = __VERIFIER_nondet_int ();
    N_0 = __VERIFIER_nondet_int ();
    O_0 = __VERIFIER_nondet_int ();
    P_0 = __VERIFIER_nondet_int ();
    A1_0 = __VERIFIER_nondet_int ();
    Q_0 = __VERIFIER_nondet_int ();
    R_0 = __VERIFIER_nondet_int ();
    S_0 = __VERIFIER_nondet_int ();
    T_0 = __VERIFIER_nondet_int ();
    U_0 = __VERIFIER_nondet_int ();
    V_0 = __VERIFIER_nondet_int ();
    W_0 = __VERIFIER_nondet_int ();
    X_0 = __VERIFIER_nondet_int ();
    Y_0 = __VERIFIER_nondet_int ();
    Z_0 = __VERIFIER_nondet_int ();
    H_0 = ack_1030_unknown_8_0;
    G_0 = ack_1030_unknown_8_1;
    F_0 = ack_1030_unknown_8_2;
    E_0 = ack_1030_unknown_8_3;
    D_0 = ack_1030_unknown_8_4;
    C_0 = ack_1030_unknown_8_5;
    B_0 = ack_1030_unknown_8_6;
    A_0 = ack_1030_unknown_8_7;
    if (!
        ((!((0 == Y_0) == (X_0 >= 0))) && ((0 == S_0) == (M_0 <= R_0))
         && (0 == Z_0) && (!(0 == E_0)) && (A1_0 == 1) && (X_0 == (V_0 + W_0))
         && (W_0 == H_0) && (V_0 == (T_0 + U_0)) && (U_0 == 0) && (T_0 == 0)
         && (R_0 == (P_0 + Q_0)) && (Q_0 == H_0) && (P_0 == (N_0 + O_0))
         && (O_0 == 0) && (N_0 == 0) && (M_0 == (K_0 + L_0)) && (L_0 == G_0)
         && (K_0 == (I_0 + J_0)) && (J_0 == 0) && (I_0 == 0)
         && (!((0 == Z_0) == ((!(0 == S_0)) && (!(0 == Y_0)))))))
        abort ();
    fail_unknown_21_0 = A1_0;
    A_2 = fail_unknown_21_0;
    if (!1)
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

