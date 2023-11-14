// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-two_counters_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-two_counters_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int state_0;
    _Bool state_1;
    _Bool state_2;
    int state_3;
    _Bool state_4;
    _Bool state_5;
    _Bool state_6;
    _Bool state_7;
    _Bool state_8;
    _Bool state_9;
    _Bool state_10;
    _Bool state_11;
    int state_12;
    _Bool A_0;
    _Bool B_0;
    _Bool C_0;
    int D_0;
    int E_0;
    _Bool F_0;
    _Bool G_0;
    _Bool H_0;
    _Bool I_0;
    _Bool J_0;
    _Bool K_0;
    _Bool L_0;
    int M_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    int D_1;
    int E_1;
    _Bool F_1;
    _Bool G_1;
    int H_1;
    int I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    _Bool M_1;
    _Bool N_1;
    _Bool O_1;
    _Bool P_1;
    int Q_1;
    _Bool R_1;
    _Bool S_1;
    _Bool T_1;
    _Bool U_1;
    _Bool V_1;
    _Bool W_1;
    _Bool X_1;
    int Y_1;
    _Bool Z_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    int D_2;
    int E_2;
    _Bool F_2;
    _Bool G_2;
    _Bool H_2;
    _Bool I_2;
    _Bool J_2;
    _Bool K_2;
    _Bool L_2;
    int M_2;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((E_0 == D_0) && ((D_0 == 2) == J_0) && ((H_0 == G_0) == F_0)
         && ((A_0 && K_0) == I_0) && (J_0 == H_0) && (I_0 == G_0)
         && (B_0 == K_0) && (C_0 == A_0) && (!B_0) && (!C_0) && (E_0 == 0)))
        abort ();
    state_0 = E_0;
    state_1 = C_0;
    state_2 = B_0;
    state_3 = D_0;
    state_4 = J_0;
    state_5 = A_0;
    state_6 = K_0;
    state_7 = I_0;
    state_8 = H_0;
    state_9 = G_0;
    state_10 = F_0;
    state_11 = L_0;
    state_12 = M_0;
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet__Bool ();
    H_1 = __VERIFIER_nondet_int ();
    I_1 = __VERIFIER_nondet_int ();
    J_1 = __VERIFIER_nondet__Bool ();
    K_1 = __VERIFIER_nondet__Bool ();
    L_1 = __VERIFIER_nondet__Bool ();
    M_1 = __VERIFIER_nondet__Bool ();
    N_1 = __VERIFIER_nondet__Bool ();
    O_1 = __VERIFIER_nondet__Bool ();
    P_1 = __VERIFIER_nondet__Bool ();
    Q_1 = __VERIFIER_nondet_int ();
    Z_1 = __VERIFIER_nondet__Bool ();
    E_1 = state_0;
    C_1 = state_1;
    B_1 = state_2;
    D_1 = state_3;
    V_1 = state_4;
    A_1 = state_5;
    W_1 = state_6;
    U_1 = state_7;
    T_1 = state_8;
    S_1 = state_9;
    R_1 = state_10;
    X_1 = state_11;
    Y_1 = state_12;
    if (!
        ((Q_1 == I_1) && (E_1 == D_1) && ((Q_1 == 2) == N_1)
         && ((D_1 == 2) == V_1) && ((T_1 == S_1) == R_1)
         && ((L_1 == K_1) == J_1) && ((P_1 && O_1) == M_1)
         && ((A_1 && W_1) == U_1) && (W_1 == G_1) && (V_1 == T_1)
         && (U_1 == S_1) && (M_1 == K_1) && (N_1 == L_1) && (O_1 == F_1)
         && (P_1 == G_1) && (C_1 == A_1) && (B_1 == W_1) && (!(A_1 == F_1))
         && ((D_1 == 3) || ((D_1 + (-1 * H_1)) == -1)) && ((!(D_1 == 3))
                                                           || (H_1 == 0))
         && (I_1 == H_1)))
        abort ();
    state_0 = I_1;
    state_1 = G_1;
    state_2 = F_1;
    state_3 = Q_1;
    state_4 = N_1;
    state_5 = P_1;
    state_6 = O_1;
    state_7 = M_1;
    state_8 = L_1;
    state_9 = K_1;
    state_10 = J_1;
    state_11 = Z_1;
    state_12 = H_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_2 = state_0;
          C_2 = state_1;
          B_2 = state_2;
          D_2 = state_3;
          J_2 = state_4;
          A_2 = state_5;
          K_2 = state_6;
          I_2 = state_7;
          H_2 = state_8;
          G_2 = state_9;
          F_2 = state_10;
          L_2 = state_11;
          M_2 = state_12;
          if (!(!F_2))
              abort ();
          goto main_error;

      case 1:
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet__Bool ();
          L_1 = __VERIFIER_nondet__Bool ();
          M_1 = __VERIFIER_nondet__Bool ();
          N_1 = __VERIFIER_nondet__Bool ();
          O_1 = __VERIFIER_nondet__Bool ();
          P_1 = __VERIFIER_nondet__Bool ();
          Q_1 = __VERIFIER_nondet_int ();
          Z_1 = __VERIFIER_nondet__Bool ();
          E_1 = state_0;
          C_1 = state_1;
          B_1 = state_2;
          D_1 = state_3;
          V_1 = state_4;
          A_1 = state_5;
          W_1 = state_6;
          U_1 = state_7;
          T_1 = state_8;
          S_1 = state_9;
          R_1 = state_10;
          X_1 = state_11;
          Y_1 = state_12;
          if (!
              ((Q_1 == I_1) && (E_1 == D_1) && ((Q_1 == 2) == N_1)
               && ((D_1 == 2) == V_1) && ((T_1 == S_1) == R_1)
               && ((L_1 == K_1) == J_1) && ((P_1 && O_1) == M_1)
               && ((A_1 && W_1) == U_1) && (W_1 == G_1) && (V_1 == T_1)
               && (U_1 == S_1) && (M_1 == K_1) && (N_1 == L_1) && (O_1 == F_1)
               && (P_1 == G_1) && (C_1 == A_1) && (B_1 == W_1)
               && (!(A_1 == F_1)) && ((D_1 == 3)
                                      || ((D_1 + (-1 * H_1)) == -1))
               && ((!(D_1 == 3)) || (H_1 == 0)) && (I_1 == H_1)))
              abort ();
          state_0 = I_1;
          state_1 = G_1;
          state_2 = F_1;
          state_3 = Q_1;
          state_4 = N_1;
          state_5 = P_1;
          state_6 = O_1;
          state_7 = M_1;
          state_8 = L_1;
          state_9 = K_1;
          state_10 = J_1;
          state_11 = Z_1;
          state_12 = H_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

