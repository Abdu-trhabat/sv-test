// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-hysteresis_3_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-hysteresis_3_000_range.c", 13, "reach_error"); }



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
    int state_4;
    int state_5;
    int state_6;
    int state_7;
    int state_8;
    int state_9;
    int state_10;
    _Bool state_11;
    _Bool state_12;
    int state_13;
    _Bool state_14;
    _Bool state_15;
    _Bool state_16;
    _Bool state_17;
    _Bool state_18;
    _Bool state_19;
    _Bool state_20;
    int A_0;
    int B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    int G_0;
    int H_0;
    _Bool I_0;
    _Bool J_0;
    int K_0;
    int L_0;
    int M_0;
    int N_0;
    _Bool O_0;
    _Bool P_0;
    _Bool Q_0;
    _Bool R_0;
    _Bool S_0;
    _Bool T_0;
    int U_0;
    int A_1;
    int B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    int G_1;
    int H_1;
    _Bool I_1;
    _Bool J_1;
    int K_1;
    int L_1;
    int M_1;
    int N_1;
    int O_1;
    _Bool P_1;
    _Bool Q_1;
    _Bool R_1;
    _Bool S_1;
    _Bool T_1;
    _Bool U_1;
    int V_1;
    _Bool W_1;
    _Bool X_1;
    _Bool Y_1;
    _Bool Z_1;
    int A1_1;
    int B1_1;
    _Bool C1_1;
    _Bool D1_1;
    int E1_1;
    int F1_1;
    int G1_1;
    int H1_1;
    int I1_1;
    _Bool J1_1;
    _Bool K1_1;
    _Bool L1_1;
    _Bool M1_1;
    _Bool N1_1;
    _Bool O1_1;
    int P1_1;
    int A_2;
    int B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;
    int G_2;
    int H_2;
    _Bool I_2;
    _Bool J_2;
    int K_2;
    int L_2;
    int M_2;
    int N_2;
    _Bool O_2;
    _Bool P_2;
    _Bool Q_2;
    _Bool R_2;
    _Bool S_2;
    _Bool T_2;
    int U_2;

    if (((state_0 <= -1000000000) || (state_0 >= 1000000000))
        || ((state_4 <= -1000000000) || (state_4 >= 1000000000))
        || ((state_5 <= -1000000000) || (state_5 >= 1000000000))
        || ((state_6 <= -1000000000) || (state_6 >= 1000000000))
        || ((state_7 <= -1000000000) || (state_7 >= 1000000000))
        || ((state_8 <= -1000000000) || (state_8 >= 1000000000))
        || ((state_9 <= -1000000000) || (state_9 >= 1000000000))
        || ((state_10 <= -1000000000) || (state_10 >= 1000000000))
        || ((state_13 <= -1000000000) || (state_13 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((G_0 <= -1000000000) || (G_0 >= 1000000000))
        || ((H_0 <= -1000000000) || (H_0 >= 1000000000))
        || ((K_0 <= -1000000000) || (K_0 >= 1000000000))
        || ((L_0 <= -1000000000) || (L_0 >= 1000000000))
        || ((M_0 <= -1000000000) || (M_0 >= 1000000000))
        || ((N_0 <= -1000000000) || (N_0 >= 1000000000))
        || ((U_0 <= -1000000000) || (U_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((M_1 <= -1000000000) || (M_1 >= 1000000000))
        || ((N_1 <= -1000000000) || (N_1 >= 1000000000))
        || ((O_1 <= -1000000000) || (O_1 >= 1000000000))
        || ((V_1 <= -1000000000) || (V_1 >= 1000000000))
        || ((A1_1 <= -1000000000) || (A1_1 >= 1000000000))
        || ((B1_1 <= -1000000000) || (B1_1 >= 1000000000))
        || ((E1_1 <= -1000000000) || (E1_1 >= 1000000000))
        || ((F1_1 <= -1000000000) || (F1_1 >= 1000000000))
        || ((G1_1 <= -1000000000) || (G1_1 >= 1000000000))
        || ((H1_1 <= -1000000000) || (H1_1 >= 1000000000))
        || ((I1_1 <= -1000000000) || (I1_1 >= 1000000000))
        || ((P1_1 <= -1000000000) || (P1_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((M_2 <= -1000000000) || (M_2 >= 1000000000))
        || ((N_2 <= -1000000000) || (N_2 >= 1000000000))
        || ((U_2 <= -1000000000) || (U_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((L_0 == K_0) && (M_0 == G_0) && (M_0 == L_0) && (N_0 == 0)
         && (N_0 == U_0) && (J_0 == T_0) && (T_0 == S_0) && (R_0 == Q_0)
         && (P_0 == O_0) && (I_0 == R_0) && ((1000 <= U_0)
                                             || ((!D_0) && (!F_0))
                                             || (U_0 <= -1000)
                                             ||
                                             ((G_0 + (-1 * U_0) +
                                               (-1 * A_0)) == 0)) && (D_0
                                                                      ||
                                                                      (!F_0)
                                                                      || (H_0
                                                                          ==
                                                                          1))
         && ((B_0 == -1) || (!D_0) || F_0)
         && (((D_0 || F_0) && (!(U_0 <= -1000)) && (!(1000 <= U_0)))
             || (G_0 == U_0)) && ((D_0 && (!F_0)) || (B_0 == 0)) && (((!D_0)
                                                                      && F_0)
                                                                     || (H_0
                                                                         ==
                                                                         B_0))
         && (!J_0) && P_0 && (!I_0) && (H_0 == A_0)))
        abort ();
    state_0 = N_0;
    state_1 = I_0;
    state_2 = J_0;
    state_3 = P_0;
    state_4 = M_0;
    state_5 = G_0;
    state_6 = U_0;
    state_7 = L_0;
    state_8 = H_0;
    state_9 = A_0;
    state_10 = K_0;
    state_11 = T_0;
    state_12 = R_0;
    state_13 = B_0;
    state_14 = D_0;
    state_15 = F_0;
    state_16 = S_0;
    state_17 = Q_0;
    state_18 = O_0;
    state_19 = C_0;
    state_20 = E_0;
    I1_1 = __VERIFIER_nondet_int ();
    if (((I1_1 <= -1000000000) || (I1_1 >= 1000000000)))
        abort ();
    G1_1 = __VERIFIER_nondet_int ();
    if (((G1_1 <= -1000000000) || (G1_1 >= 1000000000)))
        abort ();
    E1_1 = __VERIFIER_nondet_int ();
    if (((E1_1 <= -1000000000) || (E1_1 >= 1000000000)))
        abort ();
    C1_1 = __VERIFIER_nondet__Bool ();
    O_1 = __VERIFIER_nondet_int ();
    if (((O_1 <= -1000000000) || (O_1 >= 1000000000)))
        abort ();
    P_1 = __VERIFIER_nondet__Bool ();
    A1_1 = __VERIFIER_nondet_int ();
    if (((A1_1 <= -1000000000) || (A1_1 >= 1000000000)))
        abort ();
    Q_1 = __VERIFIER_nondet__Bool ();
    R_1 = __VERIFIER_nondet__Bool ();
    S_1 = __VERIFIER_nondet__Bool ();
    T_1 = __VERIFIER_nondet__Bool ();
    U_1 = __VERIFIER_nondet__Bool ();
    V_1 = __VERIFIER_nondet_int ();
    if (((V_1 <= -1000000000) || (V_1 >= 1000000000)))
        abort ();
    W_1 = __VERIFIER_nondet__Bool ();
    X_1 = __VERIFIER_nondet__Bool ();
    Y_1 = __VERIFIER_nondet__Bool ();
    Z_1 = __VERIFIER_nondet__Bool ();
    H1_1 = __VERIFIER_nondet_int ();
    if (((H1_1 <= -1000000000) || (H1_1 >= 1000000000)))
        abort ();
    F1_1 = __VERIFIER_nondet_int ();
    if (((F1_1 <= -1000000000) || (F1_1 >= 1000000000)))
        abort ();
    D1_1 = __VERIFIER_nondet__Bool ();
    B1_1 = __VERIFIER_nondet_int ();
    if (((B1_1 <= -1000000000) || (B1_1 >= 1000000000)))
        abort ();
    N_1 = state_0;
    I_1 = state_1;
    J_1 = state_2;
    K1_1 = state_3;
    M_1 = state_4;
    G_1 = state_5;
    P1_1 = state_6;
    L_1 = state_7;
    H_1 = state_8;
    A_1 = state_9;
    K_1 = state_10;
    O1_1 = state_11;
    M1_1 = state_12;
    B_1 = state_13;
    D_1 = state_14;
    F_1 = state_15;
    N1_1 = state_16;
    L1_1 = state_17;
    J1_1 = state_18;
    C_1 = state_19;
    E_1 = state_20;
    if (!
        ((B1_1 == I1_1) && (E1_1 == G1_1) && (H1_1 == O_1) && (I1_1 == H1_1)
         && (N_1 == P1_1) && (M_1 == L_1) && (M_1 == G_1) && (L_1 == V_1)
         && (L_1 == K_1) && (H_1 == A_1) && (!((Q_1 && L1_1) == R_1))
         && (O1_1 == N1_1) && (M1_1 == L1_1) && (K1_1 == J1_1) && (T_1 == S_1)
         && (U_1 == P_1) && (W_1 == R_1) && (Y_1 == U_1) && (Y_1 == X_1)
         && (Z_1 == Q_1) && (Z_1 == T_1) && (J_1 == O1_1) && (I_1 == M1_1)
         && ((1000 <= A1_1) || ((B1_1 + (-1 * A1_1) + (-1 * E1_1)) == 0)
             || (A1_1 <= -1000) || ((!D1_1) && (!C1_1))) && ((1000 <= P1_1)
                                                             ||
                                                             ((G_1 +
                                                               (-1 * P1_1) +
                                                               (-1 * A_1)) ==
                                                              0)
                                                             || (P1_1 <=
                                                                 -1000)
                                                             || ((!D_1)
                                                                 && (!F_1)))
         && (C1_1 || (!D1_1) || (F1_1 == -1)) && (D1_1 || (!C1_1)
                                                  || (G1_1 == 1)) && (D_1
                                                                      ||
                                                                      (!F_1)
                                                                      || (H_1
                                                                          ==
                                                                          1))
         && (F_1 || (!D_1) || (B_1 == -1)) && ((B1_1 == A1_1)
                                               || ((D1_1 || C1_1)
                                                   && (!(A1_1 <= -1000))
                                                   && (!(1000 <= A1_1))))
         && ((G_1 == P1_1)
             || ((D_1 || F_1) && (!(P1_1 <= -1000)) && (!(1000 <= P1_1))))
         && ((D1_1 && (!C1_1)) || (F1_1 == 0)) && (((!D1_1) && C1_1)
                                                   || (G1_1 == F1_1)) && ((D_1
                                                                           &&
                                                                           (!F_1))
                                                                          ||
                                                                          (B_1
                                                                           ==
                                                                           0))
         && (((!D_1) && F_1) || (H_1 == B_1)) && ((!O1_1)
                                                  || (!((O_1 <= 0) == S_1)))
         && (O1_1 || (S_1 == (10 <= O_1))) && ((!M1_1)
                                               || (!((0 <= O_1) == P_1)))
         && (M1_1 || (P_1 == (O_1 <= -10))) && (A1_1 == V_1)))
        abort ();
    state_0 = V_1;
    state_1 = U_1;
    state_2 = T_1;
    state_3 = R_1;
    state_4 = I1_1;
    state_5 = B1_1;
    state_6 = A1_1;
    state_7 = H1_1;
    state_8 = G1_1;
    state_9 = E1_1;
    state_10 = O_1;
    state_11 = Z_1;
    state_12 = Y_1;
    state_13 = F1_1;
    state_14 = D1_1;
    state_15 = C1_1;
    state_16 = Q_1;
    state_17 = X_1;
    state_18 = W_1;
    state_19 = S_1;
    state_20 = P_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          N_2 = state_0;
          I_2 = state_1;
          J_2 = state_2;
          P_2 = state_3;
          M_2 = state_4;
          G_2 = state_5;
          U_2 = state_6;
          L_2 = state_7;
          H_2 = state_8;
          A_2 = state_9;
          K_2 = state_10;
          T_2 = state_11;
          R_2 = state_12;
          B_2 = state_13;
          D_2 = state_14;
          F_2 = state_15;
          S_2 = state_16;
          Q_2 = state_17;
          O_2 = state_18;
          C_2 = state_19;
          E_2 = state_20;
          if (!(!O_2))
              abort ();
          goto main_error;

      case 1:
          I1_1 = __VERIFIER_nondet_int ();
          if (((I1_1 <= -1000000000) || (I1_1 >= 1000000000)))
              abort ();
          G1_1 = __VERIFIER_nondet_int ();
          if (((G1_1 <= -1000000000) || (G1_1 >= 1000000000)))
              abort ();
          E1_1 = __VERIFIER_nondet_int ();
          if (((E1_1 <= -1000000000) || (E1_1 >= 1000000000)))
              abort ();
          C1_1 = __VERIFIER_nondet__Bool ();
          O_1 = __VERIFIER_nondet_int ();
          if (((O_1 <= -1000000000) || (O_1 >= 1000000000)))
              abort ();
          P_1 = __VERIFIER_nondet__Bool ();
          A1_1 = __VERIFIER_nondet_int ();
          if (((A1_1 <= -1000000000) || (A1_1 >= 1000000000)))
              abort ();
          Q_1 = __VERIFIER_nondet__Bool ();
          R_1 = __VERIFIER_nondet__Bool ();
          S_1 = __VERIFIER_nondet__Bool ();
          T_1 = __VERIFIER_nondet__Bool ();
          U_1 = __VERIFIER_nondet__Bool ();
          V_1 = __VERIFIER_nondet_int ();
          if (((V_1 <= -1000000000) || (V_1 >= 1000000000)))
              abort ();
          W_1 = __VERIFIER_nondet__Bool ();
          X_1 = __VERIFIER_nondet__Bool ();
          Y_1 = __VERIFIER_nondet__Bool ();
          Z_1 = __VERIFIER_nondet__Bool ();
          H1_1 = __VERIFIER_nondet_int ();
          if (((H1_1 <= -1000000000) || (H1_1 >= 1000000000)))
              abort ();
          F1_1 = __VERIFIER_nondet_int ();
          if (((F1_1 <= -1000000000) || (F1_1 >= 1000000000)))
              abort ();
          D1_1 = __VERIFIER_nondet__Bool ();
          B1_1 = __VERIFIER_nondet_int ();
          if (((B1_1 <= -1000000000) || (B1_1 >= 1000000000)))
              abort ();
          N_1 = state_0;
          I_1 = state_1;
          J_1 = state_2;
          K1_1 = state_3;
          M_1 = state_4;
          G_1 = state_5;
          P1_1 = state_6;
          L_1 = state_7;
          H_1 = state_8;
          A_1 = state_9;
          K_1 = state_10;
          O1_1 = state_11;
          M1_1 = state_12;
          B_1 = state_13;
          D_1 = state_14;
          F_1 = state_15;
          N1_1 = state_16;
          L1_1 = state_17;
          J1_1 = state_18;
          C_1 = state_19;
          E_1 = state_20;
          if (!
              ((B1_1 == I1_1) && (E1_1 == G1_1) && (H1_1 == O_1)
               && (I1_1 == H1_1) && (N_1 == P1_1) && (M_1 == L_1)
               && (M_1 == G_1) && (L_1 == V_1) && (L_1 == K_1) && (H_1 == A_1)
               && (!((Q_1 && L1_1) == R_1)) && (O1_1 == N1_1)
               && (M1_1 == L1_1) && (K1_1 == J1_1) && (T_1 == S_1)
               && (U_1 == P_1) && (W_1 == R_1) && (Y_1 == U_1) && (Y_1 == X_1)
               && (Z_1 == Q_1) && (Z_1 == T_1) && (J_1 == O1_1)
               && (I_1 == M1_1) && ((1000 <= A1_1)
                                    || ((B1_1 + (-1 * A1_1) + (-1 * E1_1)) ==
                                        0) || (A1_1 <= -1000) || ((!D1_1)
                                                                  && (!C1_1)))
               && ((1000 <= P1_1) || ((G_1 + (-1 * P1_1) + (-1 * A_1)) == 0)
                   || (P1_1 <= -1000) || ((!D_1) && (!F_1))) && (C1_1
                                                                 || (!D1_1)
                                                                 || (F1_1 ==
                                                                     -1))
               && (D1_1 || (!C1_1) || (G1_1 == 1)) && (D_1 || (!F_1)
                                                       || (H_1 == 1)) && (F_1
                                                                          ||
                                                                          (!D_1)
                                                                          ||
                                                                          (B_1
                                                                           ==
                                                                           -1))
               && ((B1_1 == A1_1)
                   || ((D1_1 || C1_1) && (!(A1_1 <= -1000))
                       && (!(1000 <= A1_1)))) && ((G_1 == P1_1) || ((D_1
                                                                     || F_1)
                                                                    &&
                                                                    (!(P1_1 <=
                                                                       -1000))
                                                                    &&
                                                                    (!(1000 <=
                                                                       P1_1))))
               && ((D1_1 && (!C1_1)) || (F1_1 == 0)) && (((!D1_1) && C1_1)
                                                         || (G1_1 == F1_1))
               && ((D_1 && (!F_1)) || (B_1 == 0)) && (((!D_1) && F_1)
                                                      || (H_1 == B_1))
               && ((!O1_1) || (!((O_1 <= 0) == S_1))) && (O1_1
                                                          || (S_1 ==
                                                              (10 <= O_1)))
               && ((!M1_1) || (!((0 <= O_1) == P_1))) && (M1_1
                                                          || (P_1 ==
                                                              (O_1 <= -10)))
               && (A1_1 == V_1)))
              abort ();
          state_0 = V_1;
          state_1 = U_1;
          state_2 = T_1;
          state_3 = R_1;
          state_4 = I1_1;
          state_5 = B1_1;
          state_6 = A1_1;
          state_7 = H1_1;
          state_8 = G1_1;
          state_9 = E1_1;
          state_10 = O_1;
          state_11 = Z_1;
          state_12 = Y_1;
          state_13 = F1_1;
          state_14 = D1_1;
          state_15 = C1_1;
          state_16 = Q_1;
          state_17 = X_1;
          state_18 = W_1;
          state_19 = S_1;
          state_20 = P_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

