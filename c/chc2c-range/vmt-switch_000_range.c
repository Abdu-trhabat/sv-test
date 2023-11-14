// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-switch_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-switch_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    _Bool state_0;
    _Bool state_1;
    _Bool state_2;
    _Bool state_3;
    _Bool state_4;
    _Bool state_5;
    _Bool state_6;
    _Bool state_7;
    _Bool state_8;
    _Bool state_9;
    _Bool state_10;
    _Bool state_11;
    _Bool state_12;
    _Bool state_13;
    _Bool state_14;
    _Bool A_0;
    _Bool B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool G_0;
    _Bool H_0;
    _Bool I_0;
    _Bool J_0;
    _Bool K_0;
    _Bool L_0;
    _Bool M_0;
    _Bool N_0;
    _Bool O_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    _Bool H_1;
    _Bool I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    _Bool M_1;
    _Bool N_1;
    _Bool O_1;
    _Bool P_1;
    _Bool Q_1;
    _Bool R_1;
    _Bool S_1;
    _Bool T_1;
    _Bool U_1;
    _Bool V_1;
    _Bool W_1;
    _Bool X_1;
    _Bool Y_1;
    _Bool Z_1;
    _Bool A1_1;
    _Bool B1_1;
    _Bool C1_1;
    _Bool D1_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;
    _Bool G_2;
    _Bool H_2;
    _Bool I_2;
    _Bool J_2;
    _Bool K_2;
    _Bool L_2;
    _Bool M_2;
    _Bool N_2;
    _Bool O_2;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((M_0 == F_0) && (L_0 == K_0) && (L_0 == D_0) && (C_0 == E_0)
         && (D_0 == N_0) && (F_0 == O_0) && (C_0 || (!I_0) || (!B_0))
         && ((B_0 && I_0) || (C_0 == (O_0 == N_0))) && ((!I_0) || (!J_0))
         && ((!H_0) || (!I_0)) && (B_0 || (G_0 == H_0)) && (G_0 || (!B_0))
         && (M_0 == K_0)))
        abort ();
    state_0 = M_0;
    state_1 = F_0;
    state_2 = L_0;
    state_3 = D_0;
    state_4 = B_0;
    state_5 = G_0;
    state_6 = H_0;
    state_7 = I_0;
    state_8 = C_0;
    state_9 = O_0;
    state_10 = E_0;
    state_11 = N_0;
    state_12 = K_0;
    state_13 = J_0;
    state_14 = A_0;
    D_1 = __VERIFIER_nondet__Bool ();
    I_1 = __VERIFIER_nondet__Bool ();
    J_1 = __VERIFIER_nondet__Bool ();
    K_1 = __VERIFIER_nondet__Bool ();
    L_1 = __VERIFIER_nondet__Bool ();
    M_1 = __VERIFIER_nondet__Bool ();
    N_1 = __VERIFIER_nondet__Bool ();
    O_1 = __VERIFIER_nondet__Bool ();
    P_1 = __VERIFIER_nondet__Bool ();
    Q_1 = __VERIFIER_nondet__Bool ();
    R_1 = __VERIFIER_nondet__Bool ();
    S_1 = __VERIFIER_nondet__Bool ();
    T_1 = __VERIFIER_nondet__Bool ();
    U_1 = __VERIFIER_nondet__Bool ();
    V_1 = __VERIFIER_nondet__Bool ();
    B1_1 = state_0;
    G_1 = state_1;
    A1_1 = state_2;
    E_1 = state_3;
    B_1 = state_4;
    H_1 = state_5;
    W_1 = state_6;
    X_1 = state_7;
    C_1 = state_8;
    D1_1 = state_9;
    F_1 = state_10;
    C1_1 = state_11;
    Z_1 = state_12;
    Y_1 = state_13;
    A_1 = state_14;
    if (!
        ((A1_1 == E_1) && (N_1 == L_1) && (P_1 == O_1) && (S_1 == U_1)
         && (T_1 == N_1) && (T_1 == Q_1) && (G_1 == D1_1) && (E_1 == C1_1)
         && (V_1 == P_1) && (V_1 == R_1) && (C_1 == F_1) && (S_1 || (!J_1)
                                                             || (!M_1))
         && (E_1 || L_1 || (!M_1)) && (C_1 || (!X_1) || (!B_1))
         && ((M_1 && J_1) || (S_1 == (R_1 == Q_1))) && ((L_1 == I_1)
                                                        || ((!E_1) && M_1))
         && ((B_1 && X_1) || (C_1 == (D1_1 == C1_1))) && (J_1 || (G_1 == K_1))
         && (J_1 || (E_1 == I_1)) && ((!J_1) || (!I_1)) && ((!K_1) || (!J_1))
         && (M_1 || (O_1 == K_1)) && (O_1 || (!M_1)) && (B_1 || (H_1 == W_1))
         && ((!B_1) || H_1) && (B1_1 == G_1)))
        abort ();
    state_0 = P_1;
    state_1 = V_1;
    state_2 = N_1;
    state_3 = T_1;
    state_4 = M_1;
    state_5 = O_1;
    state_6 = K_1;
    state_7 = J_1;
    state_8 = S_1;
    state_9 = R_1;
    state_10 = U_1;
    state_11 = Q_1;
    state_12 = D_1;
    state_13 = I_1;
    state_14 = L_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          M_2 = state_0;
          F_2 = state_1;
          L_2 = state_2;
          D_2 = state_3;
          B_2 = state_4;
          G_2 = state_5;
          H_2 = state_6;
          I_2 = state_7;
          C_2 = state_8;
          O_2 = state_9;
          E_2 = state_10;
          N_2 = state_11;
          K_2 = state_12;
          J_2 = state_13;
          A_2 = state_14;
          if (!(!E_2))
              abort ();
          goto main_error;

      case 1:
          D_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet__Bool ();
          L_1 = __VERIFIER_nondet__Bool ();
          M_1 = __VERIFIER_nondet__Bool ();
          N_1 = __VERIFIER_nondet__Bool ();
          O_1 = __VERIFIER_nondet__Bool ();
          P_1 = __VERIFIER_nondet__Bool ();
          Q_1 = __VERIFIER_nondet__Bool ();
          R_1 = __VERIFIER_nondet__Bool ();
          S_1 = __VERIFIER_nondet__Bool ();
          T_1 = __VERIFIER_nondet__Bool ();
          U_1 = __VERIFIER_nondet__Bool ();
          V_1 = __VERIFIER_nondet__Bool ();
          B1_1 = state_0;
          G_1 = state_1;
          A1_1 = state_2;
          E_1 = state_3;
          B_1 = state_4;
          H_1 = state_5;
          W_1 = state_6;
          X_1 = state_7;
          C_1 = state_8;
          D1_1 = state_9;
          F_1 = state_10;
          C1_1 = state_11;
          Z_1 = state_12;
          Y_1 = state_13;
          A_1 = state_14;
          if (!
              ((A1_1 == E_1) && (N_1 == L_1) && (P_1 == O_1) && (S_1 == U_1)
               && (T_1 == N_1) && (T_1 == Q_1) && (G_1 == D1_1)
               && (E_1 == C1_1) && (V_1 == P_1) && (V_1 == R_1)
               && (C_1 == F_1) && (S_1 || (!J_1) || (!M_1)) && (E_1 || L_1
                                                                || (!M_1))
               && (C_1 || (!X_1) || (!B_1)) && ((M_1 && J_1)
                                                || (S_1 == (R_1 == Q_1)))
               && ((L_1 == I_1) || ((!E_1) && M_1)) && ((B_1 && X_1)
                                                        || (C_1 ==
                                                            (D1_1 == C1_1)))
               && (J_1 || (G_1 == K_1)) && (J_1 || (E_1 == I_1)) && ((!J_1)
                                                                     ||
                                                                     (!I_1))
               && ((!K_1) || (!J_1)) && (M_1 || (O_1 == K_1)) && (O_1
                                                                  || (!M_1))
               && (B_1 || (H_1 == W_1)) && ((!B_1) || H_1) && (B1_1 == G_1)))
              abort ();
          state_0 = P_1;
          state_1 = V_1;
          state_2 = N_1;
          state_3 = T_1;
          state_4 = M_1;
          state_5 = O_1;
          state_6 = K_1;
          state_7 = J_1;
          state_8 = S_1;
          state_9 = R_1;
          state_10 = U_1;
          state_11 = Q_1;
          state_12 = D_1;
          state_13 = I_1;
          state_14 = L_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

