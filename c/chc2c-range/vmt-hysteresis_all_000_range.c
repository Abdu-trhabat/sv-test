// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-hysteresis_all_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-hysteresis_all_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int state_0;
    _Bool state_1;
    _Bool state_2;
    _Bool state_3;
    _Bool state_4;
    int state_5;
    int state_6;
    int state_7;
    int state_8;
    int state_9;
    int state_10;
    int state_11;
    _Bool state_12;
    _Bool state_13;
    int state_14;
    _Bool state_15;
    _Bool state_16;
    _Bool state_17;
    _Bool state_18;
    _Bool state_19;
    _Bool state_20;
    _Bool state_21;
    _Bool A_0;
    int B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    int F_0;
    int G_0;
    int H_0;
    int I_0;
    _Bool J_0;
    _Bool K_0;
    int L_0;
    int M_0;
    int N_0;
    int O_0;
    _Bool P_0;
    _Bool Q_0;
    _Bool R_0;
    _Bool S_0;
    _Bool T_0;
    _Bool U_0;
    _Bool V_0;
    _Bool A_1;
    int B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    _Bool J_1;
    _Bool K_1;
    int L_1;
    int M_1;
    int N_1;
    int O_1;
    _Bool P_1;
    _Bool Q_1;
    _Bool R_1;
    _Bool S_1;
    int T_1;
    _Bool U_1;
    _Bool V_1;
    _Bool W_1;
    _Bool X_1;
    int Y_1;
    _Bool Z_1;
    _Bool A1_1;
    _Bool B1_1;
    int C1_1;
    int D1_1;
    _Bool E1_1;
    _Bool F1_1;
    int G1_1;
    int H1_1;
    int I1_1;
    int J1_1;
    int K1_1;
    _Bool L1_1;
    _Bool M1_1;
    _Bool N1_1;
    _Bool O1_1;
    _Bool P1_1;
    _Bool Q1_1;
    _Bool R1_1;
    _Bool A_2;
    int B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    _Bool J_2;
    _Bool K_2;
    int L_2;
    int M_2;
    int N_2;
    int O_2;
    _Bool P_2;
    _Bool Q_2;
    _Bool R_2;
    _Bool S_2;
    _Bool T_2;
    _Bool U_2;
    _Bool V_2;

    if (((state_0 <= -1000000000) || (state_0 >= 1000000000))
        || ((state_5 <= -1000000000) || (state_5 >= 1000000000))
        || ((state_6 <= -1000000000) || (state_6 >= 1000000000))
        || ((state_7 <= -1000000000) || (state_7 >= 1000000000))
        || ((state_8 <= -1000000000) || (state_8 >= 1000000000))
        || ((state_9 <= -1000000000) || (state_9 >= 1000000000))
        || ((state_10 <= -1000000000) || (state_10 >= 1000000000))
        || ((state_11 <= -1000000000) || (state_11 >= 1000000000))
        || ((state_14 <= -1000000000) || (state_14 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((F_0 <= -1000000000) || (F_0 >= 1000000000))
        || ((G_0 <= -1000000000) || (G_0 >= 1000000000))
        || ((H_0 <= -1000000000) || (H_0 >= 1000000000))
        || ((I_0 <= -1000000000) || (I_0 >= 1000000000))
        || ((L_0 <= -1000000000) || (L_0 >= 1000000000))
        || ((M_0 <= -1000000000) || (M_0 >= 1000000000))
        || ((N_0 <= -1000000000) || (N_0 >= 1000000000))
        || ((O_0 <= -1000000000) || (O_0 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((M_1 <= -1000000000) || (M_1 >= 1000000000))
        || ((N_1 <= -1000000000) || (N_1 >= 1000000000))
        || ((O_1 <= -1000000000) || (O_1 >= 1000000000))
        || ((T_1 <= -1000000000) || (T_1 >= 1000000000))
        || ((Y_1 <= -1000000000) || (Y_1 >= 1000000000))
        || ((C1_1 <= -1000000000) || (C1_1 >= 1000000000))
        || ((D1_1 <= -1000000000) || (D1_1 >= 1000000000))
        || ((G1_1 <= -1000000000) || (G1_1 >= 1000000000))
        || ((H1_1 <= -1000000000) || (H1_1 >= 1000000000))
        || ((I1_1 <= -1000000000) || (I1_1 >= 1000000000))
        || ((J1_1 <= -1000000000) || (J1_1 >= 1000000000))
        || ((K1_1 <= -1000000000) || (K1_1 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((M_2 <= -1000000000) || (M_2 >= 1000000000))
        || ((N_2 <= -1000000000) || (N_2 >= 1000000000))
        || ((O_2 <= -1000000000) || (O_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((M_0 == L_0) && (N_0 == F_0) && (N_0 == M_0) && (O_0 == 0)
         && (O_0 == G_0) && ((S_0 && T_0 && ((!Q_0) || (!R_0))) == P_0)
         && (K_0 == V_0) && (V_0 == R_0) && (U_0 == Q_0) && (J_0 == U_0)
         && ((1000 <= G_0) || ((!D_0) && (!A_0)) || (G_0 <= -1000)
             || ((F_0 + (-1 * G_0) + (-1 * B_0)) == 0)) && (A_0 || (!D_0)
                                                            || (I_0 == 1))
         && (D_0 || (H_0 == -1) || (!A_0))
         && (((D_0 || A_0) && (!(G_0 <= -1000)) && (!(1000 <= G_0)))
             || (F_0 == G_0)) && ((I_0 == H_0) || (D_0 && (!A_0))) && (((!D_0)
                                                                        &&
                                                                        A_0)
                                                                       || (H_0
                                                                           ==
                                                                           0))
         && (!K_0) && T_0 && S_0 && (!J_0) && (I_0 == B_0)))
        abort ();
    state_0 = O_0;
    state_1 = J_0;
    state_2 = K_0;
    state_3 = T_0;
    state_4 = S_0;
    state_5 = N_0;
    state_6 = F_0;
    state_7 = G_0;
    state_8 = M_0;
    state_9 = I_0;
    state_10 = B_0;
    state_11 = L_0;
    state_12 = V_0;
    state_13 = U_0;
    state_14 = H_0;
    state_15 = A_0;
    state_16 = D_0;
    state_17 = R_0;
    state_18 = Q_0;
    state_19 = P_0;
    state_20 = C_0;
    state_21 = E_0;
    K1_1 = __VERIFIER_nondet_int ();
    if (((K1_1 <= -1000000000) || (K1_1 >= 1000000000)))
        abort ();
    I1_1 = __VERIFIER_nondet_int ();
    if (((I1_1 <= -1000000000) || (I1_1 >= 1000000000)))
        abort ();
    G1_1 = __VERIFIER_nondet_int ();
    if (((G1_1 <= -1000000000) || (G1_1 >= 1000000000)))
        abort ();
    E1_1 = __VERIFIER_nondet__Bool ();
    C1_1 = __VERIFIER_nondet_int ();
    if (((C1_1 <= -1000000000) || (C1_1 >= 1000000000)))
        abort ();
    P_1 = __VERIFIER_nondet__Bool ();
    A1_1 = __VERIFIER_nondet__Bool ();
    Q_1 = __VERIFIER_nondet__Bool ();
    R_1 = __VERIFIER_nondet__Bool ();
    S_1 = __VERIFIER_nondet__Bool ();
    T_1 = __VERIFIER_nondet_int ();
    if (((T_1 <= -1000000000) || (T_1 >= 1000000000)))
        abort ();
    U_1 = __VERIFIER_nondet__Bool ();
    V_1 = __VERIFIER_nondet__Bool ();
    W_1 = __VERIFIER_nondet__Bool ();
    X_1 = __VERIFIER_nondet__Bool ();
    Y_1 = __VERIFIER_nondet_int ();
    if (((Y_1 <= -1000000000) || (Y_1 >= 1000000000)))
        abort ();
    Z_1 = __VERIFIER_nondet__Bool ();
    J1_1 = __VERIFIER_nondet_int ();
    if (((J1_1 <= -1000000000) || (J1_1 >= 1000000000)))
        abort ();
    H1_1 = __VERIFIER_nondet_int ();
    if (((H1_1 <= -1000000000) || (H1_1 >= 1000000000)))
        abort ();
    F1_1 = __VERIFIER_nondet__Bool ();
    D1_1 = __VERIFIER_nondet_int ();
    if (((D1_1 <= -1000000000) || (D1_1 >= 1000000000)))
        abort ();
    B1_1 = __VERIFIER_nondet__Bool ();
    O_1 = state_0;
    J_1 = state_1;
    K_1 = state_2;
    P1_1 = state_3;
    O1_1 = state_4;
    N_1 = state_5;
    F_1 = state_6;
    G_1 = state_7;
    M_1 = state_8;
    I_1 = state_9;
    B_1 = state_10;
    L_1 = state_11;
    R1_1 = state_12;
    Q1_1 = state_13;
    H_1 = state_14;
    A_1 = state_15;
    D_1 = state_16;
    N1_1 = state_17;
    M1_1 = state_18;
    L1_1 = state_19;
    C_1 = state_20;
    E_1 = state_21;
    if (!
        ((D1_1 == K1_1) && (G1_1 == I1_1) && (J1_1 == T_1) && (K1_1 == J1_1)
         && (O_1 == G_1) && (N_1 == M_1) && (N_1 == F_1) && (M_1 == Y_1)
         && (M_1 == L_1) && (I_1 == B_1)
         && ((O1_1 && P1_1 && ((!M1_1) || (!N1_1))) == L1_1)
         && ((S_1 && Q_1 && ((!R_1) || (!P_1))) == Z_1)
         && (!((P_1 && N1_1) == Q_1)) && (!((R_1 && M1_1) == S_1))
         && (R1_1 == N1_1) && (Q1_1 == M1_1) && (W_1 == V_1) && (X_1 == U_1)
         && (A1_1 == P_1) && (A1_1 == X_1) && (B1_1 == R_1) && (B1_1 == W_1)
         && (K_1 == R1_1) && (J_1 == Q1_1) && ((1000 <= C1_1)
                                               || (C1_1 <= -1000)
                                               ||
                                               ((D1_1 + (-1 * C1_1) +
                                                 (-1 * G1_1)) == 0)
                                               || ((!F1_1) && (!E1_1)))
         && ((1000 <= G_1) || ((F_1 + (-1 * G_1) + (-1 * B_1)) == 0)
             || (G_1 <= -1000) || ((!A_1) && (!D_1))) && (E1_1 || (!F1_1)
                                                          || (H1_1 == -1))
         && (F1_1 || (!E1_1) || (I1_1 == 1)) && (A_1 || (!D_1) || (I_1 == 1))
         && (D_1 || (!A_1) || (H_1 == -1)) && ((D1_1 == C1_1)
                                               || ((F1_1 || E1_1)
                                                   && (!(C1_1 <= -1000))
                                                   && (!(1000 <= C1_1))))
         && ((F_1 == G_1)
             || ((A_1 || D_1) && (!(G_1 <= -1000)) && (!(1000 <= G_1))))
         && ((F1_1 && (!E1_1)) || (H1_1 == 0)) && (((!F1_1) && E1_1)
                                                   || (I1_1 == H1_1)) && ((A_1
                                                                           &&
                                                                           (!D_1))
                                                                          ||
                                                                          (H_1
                                                                           ==
                                                                           0))
         && (((!A_1) && D_1) || (I_1 == H_1)) && ((!R1_1)
                                                  || (!((T_1 <= 0) == V_1)))
         && (R1_1 || (V_1 == (10 <= T_1))) && ((!Q1_1)
                                               || (!((0 <= T_1) == U_1)))
         && (Q1_1 || (U_1 == (T_1 <= -10))) && (C1_1 == Y_1)))
        abort ();
    state_0 = Y_1;
    state_1 = X_1;
    state_2 = W_1;
    state_3 = S_1;
    state_4 = Q_1;
    state_5 = K1_1;
    state_6 = D1_1;
    state_7 = C1_1;
    state_8 = J1_1;
    state_9 = I1_1;
    state_10 = G1_1;
    state_11 = T_1;
    state_12 = B1_1;
    state_13 = A1_1;
    state_14 = H1_1;
    state_15 = F1_1;
    state_16 = E1_1;
    state_17 = R_1;
    state_18 = P_1;
    state_19 = Z_1;
    state_20 = V_1;
    state_21 = U_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          O_2 = state_0;
          J_2 = state_1;
          K_2 = state_2;
          T_2 = state_3;
          S_2 = state_4;
          N_2 = state_5;
          F_2 = state_6;
          G_2 = state_7;
          M_2 = state_8;
          I_2 = state_9;
          B_2 = state_10;
          L_2 = state_11;
          V_2 = state_12;
          U_2 = state_13;
          H_2 = state_14;
          A_2 = state_15;
          D_2 = state_16;
          R_2 = state_17;
          Q_2 = state_18;
          P_2 = state_19;
          C_2 = state_20;
          E_2 = state_21;
          if (!(!P_2))
              abort ();
          goto main_error;

      case 1:
          K1_1 = __VERIFIER_nondet_int ();
          if (((K1_1 <= -1000000000) || (K1_1 >= 1000000000)))
              abort ();
          I1_1 = __VERIFIER_nondet_int ();
          if (((I1_1 <= -1000000000) || (I1_1 >= 1000000000)))
              abort ();
          G1_1 = __VERIFIER_nondet_int ();
          if (((G1_1 <= -1000000000) || (G1_1 >= 1000000000)))
              abort ();
          E1_1 = __VERIFIER_nondet__Bool ();
          C1_1 = __VERIFIER_nondet_int ();
          if (((C1_1 <= -1000000000) || (C1_1 >= 1000000000)))
              abort ();
          P_1 = __VERIFIER_nondet__Bool ();
          A1_1 = __VERIFIER_nondet__Bool ();
          Q_1 = __VERIFIER_nondet__Bool ();
          R_1 = __VERIFIER_nondet__Bool ();
          S_1 = __VERIFIER_nondet__Bool ();
          T_1 = __VERIFIER_nondet_int ();
          if (((T_1 <= -1000000000) || (T_1 >= 1000000000)))
              abort ();
          U_1 = __VERIFIER_nondet__Bool ();
          V_1 = __VERIFIER_nondet__Bool ();
          W_1 = __VERIFIER_nondet__Bool ();
          X_1 = __VERIFIER_nondet__Bool ();
          Y_1 = __VERIFIER_nondet_int ();
          if (((Y_1 <= -1000000000) || (Y_1 >= 1000000000)))
              abort ();
          Z_1 = __VERIFIER_nondet__Bool ();
          J1_1 = __VERIFIER_nondet_int ();
          if (((J1_1 <= -1000000000) || (J1_1 >= 1000000000)))
              abort ();
          H1_1 = __VERIFIER_nondet_int ();
          if (((H1_1 <= -1000000000) || (H1_1 >= 1000000000)))
              abort ();
          F1_1 = __VERIFIER_nondet__Bool ();
          D1_1 = __VERIFIER_nondet_int ();
          if (((D1_1 <= -1000000000) || (D1_1 >= 1000000000)))
              abort ();
          B1_1 = __VERIFIER_nondet__Bool ();
          O_1 = state_0;
          J_1 = state_1;
          K_1 = state_2;
          P1_1 = state_3;
          O1_1 = state_4;
          N_1 = state_5;
          F_1 = state_6;
          G_1 = state_7;
          M_1 = state_8;
          I_1 = state_9;
          B_1 = state_10;
          L_1 = state_11;
          R1_1 = state_12;
          Q1_1 = state_13;
          H_1 = state_14;
          A_1 = state_15;
          D_1 = state_16;
          N1_1 = state_17;
          M1_1 = state_18;
          L1_1 = state_19;
          C_1 = state_20;
          E_1 = state_21;
          if (!
              ((D1_1 == K1_1) && (G1_1 == I1_1) && (J1_1 == T_1)
               && (K1_1 == J1_1) && (O_1 == G_1) && (N_1 == M_1)
               && (N_1 == F_1) && (M_1 == Y_1) && (M_1 == L_1) && (I_1 == B_1)
               && ((O1_1 && P1_1 && ((!M1_1) || (!N1_1))) == L1_1)
               && ((S_1 && Q_1 && ((!R_1) || (!P_1))) == Z_1)
               && (!((P_1 && N1_1) == Q_1)) && (!((R_1 && M1_1) == S_1))
               && (R1_1 == N1_1) && (Q1_1 == M1_1) && (W_1 == V_1)
               && (X_1 == U_1) && (A1_1 == P_1) && (A1_1 == X_1)
               && (B1_1 == R_1) && (B1_1 == W_1) && (K_1 == R1_1)
               && (J_1 == Q1_1) && ((1000 <= C1_1) || (C1_1 <= -1000)
                                    || ((D1_1 + (-1 * C1_1) + (-1 * G1_1)) ==
                                        0) || ((!F1_1) && (!E1_1)))
               && ((1000 <= G_1) || ((F_1 + (-1 * G_1) + (-1 * B_1)) == 0)
                   || (G_1 <= -1000) || ((!A_1) && (!D_1))) && (E1_1
                                                                || (!F1_1)
                                                                || (H1_1 ==
                                                                    -1))
               && (F1_1 || (!E1_1) || (I1_1 == 1)) && (A_1 || (!D_1)
                                                       || (I_1 == 1)) && (D_1
                                                                          ||
                                                                          (!A_1)
                                                                          ||
                                                                          (H_1
                                                                           ==
                                                                           -1))
               && ((D1_1 == C1_1)
                   || ((F1_1 || E1_1) && (!(C1_1 <= -1000))
                       && (!(1000 <= C1_1)))) && ((F_1 == G_1) || ((A_1
                                                                    || D_1)
                                                                   &&
                                                                   (!(G_1 <=
                                                                      -1000))
                                                                   &&
                                                                   (!(1000 <=
                                                                      G_1))))
               && ((F1_1 && (!E1_1)) || (H1_1 == 0)) && (((!F1_1) && E1_1)
                                                         || (I1_1 == H1_1))
               && ((A_1 && (!D_1)) || (H_1 == 0)) && (((!A_1) && D_1)
                                                      || (I_1 == H_1))
               && ((!R1_1) || (!((T_1 <= 0) == V_1))) && (R1_1
                                                          || (V_1 ==
                                                              (10 <= T_1)))
               && ((!Q1_1) || (!((0 <= T_1) == U_1))) && (Q1_1
                                                          || (U_1 ==
                                                              (T_1 <= -10)))
               && (C1_1 == Y_1)))
              abort ();
          state_0 = Y_1;
          state_1 = X_1;
          state_2 = W_1;
          state_3 = S_1;
          state_4 = Q_1;
          state_5 = K1_1;
          state_6 = D1_1;
          state_7 = C1_1;
          state_8 = J1_1;
          state_9 = I1_1;
          state_10 = G1_1;
          state_11 = T_1;
          state_12 = B1_1;
          state_13 = A1_1;
          state_14 = H1_1;
          state_15 = F1_1;
          state_16 = E1_1;
          state_17 = R_1;
          state_18 = P_1;
          state_19 = Z_1;
          state_20 = V_1;
          state_21 = U_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

