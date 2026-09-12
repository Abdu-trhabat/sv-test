// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-twisted_counters_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-twisted_counters_000_norange.c", 13, "reach_error"); }



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
    _Bool state_5;
    _Bool state_6;
    _Bool state_7;
    _Bool state_8;
    _Bool state_9;
    _Bool state_10;
    _Bool state_11;
    _Bool state_12;
    _Bool state_13;
    int state_14;
    int state_15;
    int state_16;
    int A_0;
    _Bool B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool G_0;
    int H_0;
    int I_0;
    _Bool J_0;
    _Bool K_0;
    _Bool L_0;
    _Bool M_0;
    _Bool N_0;
    _Bool O_0;
    int P_0;
    int Q_0;
    int A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    int H_1;
    int I_1;
    _Bool J_1;
    int K_1;
    _Bool L_1;
    _Bool M_1;
    int N_1;
    int O_1;
    int P_1;
    _Bool Q_1;
    _Bool R_1;
    _Bool S_1;
    _Bool T_1;
    _Bool U_1;
    _Bool V_1;
    _Bool W_1;
    _Bool X_1;
    _Bool Y_1;
    int Z_1;
    _Bool A1_1;
    _Bool B1_1;
    _Bool C1_1;
    _Bool D1_1;
    _Bool E1_1;
    _Bool F1_1;
    int G1_1;
    int H1_1;
    int A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;
    _Bool G_2;
    int H_2;
    int I_2;
    _Bool J_2;
    _Bool K_2;
    _Bool L_2;
    _Bool M_2;
    _Bool N_2;
    _Bool O_2;
    int P_2;
    int Q_2;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((I_0 == H_0) && ((H_0 == 5) == O_0)
         && (((!K_0) || (M_0 == L_0)) == J_0) && ((C_0 && B_0) == N_0)
         && (O_0 == M_0) && (N_0 == L_0) && (D_0 == B_0) && (F_0 == E_0)
         && (G_0 == C_0) && (!D_0) && (!F_0) && (!G_0) && (I_0 == 0)))
        abort ();
    state_0 = I_0;
    state_1 = G_0;
    state_2 = F_0;
    state_3 = D_0;
    state_4 = H_0;
    state_5 = O_0;
    state_6 = C_0;
    state_7 = E_0;
    state_8 = B_0;
    state_9 = N_0;
    state_10 = M_0;
    state_11 = L_0;
    state_12 = K_0;
    state_13 = J_0;
    state_14 = P_0;
    state_15 = Q_0;
    state_16 = A_0;
    J_1 = __VERIFIER_nondet__Bool ();
    K_1 = __VERIFIER_nondet_int ();
    L_1 = __VERIFIER_nondet__Bool ();
    M_1 = __VERIFIER_nondet__Bool ();
    N_1 = __VERIFIER_nondet_int ();
    O_1 = __VERIFIER_nondet_int ();
    P_1 = __VERIFIER_nondet_int ();
    Q_1 = __VERIFIER_nondet__Bool ();
    R_1 = __VERIFIER_nondet__Bool ();
    S_1 = __VERIFIER_nondet__Bool ();
    T_1 = __VERIFIER_nondet__Bool ();
    U_1 = __VERIFIER_nondet__Bool ();
    V_1 = __VERIFIER_nondet__Bool ();
    W_1 = __VERIFIER_nondet__Bool ();
    X_1 = __VERIFIER_nondet__Bool ();
    Y_1 = __VERIFIER_nondet__Bool ();
    Z_1 = __VERIFIER_nondet_int ();
    I_1 = state_0;
    G_1 = state_1;
    F_1 = state_2;
    D_1 = state_3;
    H_1 = state_4;
    F1_1 = state_5;
    C_1 = state_6;
    E_1 = state_7;
    B_1 = state_8;
    E1_1 = state_9;
    D1_1 = state_10;
    C1_1 = state_11;
    B1_1 = state_12;
    A1_1 = state_13;
    G1_1 = state_14;
    H1_1 = state_15;
    A_1 = state_16;
    if (!
        ((Z_1 == P_1) && (I_1 == H_1) && ((Z_1 == 5) == V_1)
         && ((H_1 == 5) == F1_1) && (((!B1_1) || (D1_1 == C1_1)) == A1_1)
         && (((!R_1) || (T_1 == S_1)) == Q_1) && ((X_1 && W_1) == U_1)
         && ((B_1 && C_1) == E1_1) && (F1_1 == D1_1) && (E1_1 == C1_1)
         && (J_1 == ((C_1 && E_1) || (B_1 && (!C_1) && B1_1)))
         && (L_1 == ((B_1 && (!B1_1)) || (!(E_1 == C_1)))) && (U_1 == S_1)
         && (V_1 == T_1) && (W_1 == J_1) && (X_1 == M_1) && (Y_1 == L_1)
         && (G_1 == C_1) && (F_1 == E_1) && (D_1 == B_1) && (!(C_1 == M_1))
         && ((H_1 == 4) || ((H_1 + (-1 * N_1)) == -1)) && ((!(H_1 == 4))
                                                           || (N_1 == K_1))
         && ((!(H_1 == 5)) || (O_1 == 2)) && ((H_1 == 5) || (O_1 == N_1))
         && (B1_1 || (K_1 == 3)) && ((!B1_1) || (K_1 == 5)) && (P_1 == O_1)))
        abort ();
    state_0 = P_1;
    state_1 = M_1;
    state_2 = L_1;
    state_3 = J_1;
    state_4 = Z_1;
    state_5 = V_1;
    state_6 = X_1;
    state_7 = Y_1;
    state_8 = W_1;
    state_9 = U_1;
    state_10 = T_1;
    state_11 = S_1;
    state_12 = R_1;
    state_13 = Q_1;
    state_14 = K_1;
    state_15 = N_1;
    state_16 = O_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          I_2 = state_0;
          G_2 = state_1;
          F_2 = state_2;
          D_2 = state_3;
          H_2 = state_4;
          O_2 = state_5;
          C_2 = state_6;
          E_2 = state_7;
          B_2 = state_8;
          N_2 = state_9;
          M_2 = state_10;
          L_2 = state_11;
          K_2 = state_12;
          J_2 = state_13;
          P_2 = state_14;
          Q_2 = state_15;
          A_2 = state_16;
          if (!(!J_2))
              abort ();
          goto main_error;

      case 1:
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet_int ();
          L_1 = __VERIFIER_nondet__Bool ();
          M_1 = __VERIFIER_nondet__Bool ();
          N_1 = __VERIFIER_nondet_int ();
          O_1 = __VERIFIER_nondet_int ();
          P_1 = __VERIFIER_nondet_int ();
          Q_1 = __VERIFIER_nondet__Bool ();
          R_1 = __VERIFIER_nondet__Bool ();
          S_1 = __VERIFIER_nondet__Bool ();
          T_1 = __VERIFIER_nondet__Bool ();
          U_1 = __VERIFIER_nondet__Bool ();
          V_1 = __VERIFIER_nondet__Bool ();
          W_1 = __VERIFIER_nondet__Bool ();
          X_1 = __VERIFIER_nondet__Bool ();
          Y_1 = __VERIFIER_nondet__Bool ();
          Z_1 = __VERIFIER_nondet_int ();
          I_1 = state_0;
          G_1 = state_1;
          F_1 = state_2;
          D_1 = state_3;
          H_1 = state_4;
          F1_1 = state_5;
          C_1 = state_6;
          E_1 = state_7;
          B_1 = state_8;
          E1_1 = state_9;
          D1_1 = state_10;
          C1_1 = state_11;
          B1_1 = state_12;
          A1_1 = state_13;
          G1_1 = state_14;
          H1_1 = state_15;
          A_1 = state_16;
          if (!
              ((Z_1 == P_1) && (I_1 == H_1) && ((Z_1 == 5) == V_1)
               && ((H_1 == 5) == F1_1)
               && (((!B1_1) || (D1_1 == C1_1)) == A1_1)
               && (((!R_1) || (T_1 == S_1)) == Q_1) && ((X_1 && W_1) == U_1)
               && ((B_1 && C_1) == E1_1) && (F1_1 == D1_1) && (E1_1 == C1_1)
               && (J_1 == ((C_1 && E_1) || (B_1 && (!C_1) && B1_1)))
               && (L_1 == ((B_1 && (!B1_1)) || (!(E_1 == C_1))))
               && (U_1 == S_1) && (V_1 == T_1) && (W_1 == J_1) && (X_1 == M_1)
               && (Y_1 == L_1) && (G_1 == C_1) && (F_1 == E_1) && (D_1 == B_1)
               && (!(C_1 == M_1)) && ((H_1 == 4)
                                      || ((H_1 + (-1 * N_1)) == -1))
               && ((!(H_1 == 4)) || (N_1 == K_1)) && ((!(H_1 == 5))
                                                      || (O_1 == 2))
               && ((H_1 == 5) || (O_1 == N_1)) && (B1_1 || (K_1 == 3))
               && ((!B1_1) || (K_1 == 5)) && (P_1 == O_1)))
              abort ();
          state_0 = P_1;
          state_1 = M_1;
          state_2 = L_1;
          state_3 = J_1;
          state_4 = Z_1;
          state_5 = V_1;
          state_6 = X_1;
          state_7 = Y_1;
          state_8 = W_1;
          state_9 = U_1;
          state_10 = T_1;
          state_11 = S_1;
          state_12 = R_1;
          state_13 = Q_1;
          state_14 = K_1;
          state_15 = N_1;
          state_16 = O_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

