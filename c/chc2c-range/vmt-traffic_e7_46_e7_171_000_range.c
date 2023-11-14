// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-traffic_e7_46_e7_171_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-traffic_e7_46_e7_171_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int state_0;
    _Bool state_1;
    int state_2;
    _Bool state_3;
    int state_4;
    int state_5;
    int state_6;
    int state_7;
    int state_8;
    _Bool state_9;
    int A_0;
    _Bool B_0;
    _Bool C_0;
    _Bool D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
    int I_0;
    int J_0;
    int A_1;
    _Bool B_1;
    int C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    int K_1;
    int L_1;
    _Bool M_1;
    _Bool N_1;
    int O_1;
    int P_1;
    int Q_1;
    int R_1;
    int S_1;
    int T_1;
    int A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int J_2;

    if (((state_0 <= -1000000000) || (state_0 >= 1000000000))
        || ((state_2 <= -1000000000) || (state_2 >= 1000000000))
        || ((state_4 <= -1000000000) || (state_4 >= 1000000000))
        || ((state_5 <= -1000000000) || (state_5 >= 1000000000))
        || ((state_6 <= -1000000000) || (state_6 >= 1000000000))
        || ((state_7 <= -1000000000) || (state_7 >= 1000000000))
        || ((state_8 <= -1000000000) || (state_8 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((F_0 <= -1000000000) || (F_0 >= 1000000000))
        || ((G_0 <= -1000000000) || (G_0 >= 1000000000))
        || ((H_0 <= -1000000000) || (H_0 >= 1000000000))
        || ((I_0 <= -1000000000) || (I_0 >= 1000000000))
        || ((J_0 <= -1000000000) || (J_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((O_1 <= -1000000000) || (O_1 >= 1000000000))
        || ((P_1 <= -1000000000) || (P_1 >= 1000000000))
        || ((Q_1 <= -1000000000) || (Q_1 >= 1000000000))
        || ((R_1 <= -1000000000) || (R_1 >= 1000000000))
        || ((S_1 <= -1000000000) || (S_1 >= 1000000000))
        || ((T_1 <= -1000000000) || (T_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((F_0 == E_0) && (A_0 == 0) && (A_0 == H_0)
         && ((((I_0 <= 1) && (-1 <= I_0)) || B_0) == D_0)
         && (((!D_0) || ((E_0 <= 20) && (0 <= E_0))) == C_0) && ((I_0 <= 0)
                                                                 || (10 <=
                                                                     H_0)
                                                                 ||
                                                                 ((I_0 + H_0 +
                                                                   (-1 *
                                                                    G_0)) ==
                                                                  0))
         && ((!(0 <= I_0)) || (!(H_0 <= 0)) || (J_0 == G_0)) && ((H_0 == G_0)
                                                                 ||
                                                                 ((!(I_0 <=
                                                                     0))
                                                                  &&
                                                                  (!(10 <=
                                                                     H_0))))
         && (((H_0 <= 0) && (0 <= I_0)) || ((I_0 + H_0 + (-1 * J_0)) == 0))
         && B_0 && (J_0 == F_0)))
        abort ();
    state_0 = A_0;
    state_1 = B_0;
    state_2 = I_0;
    state_3 = D_0;
    state_4 = H_0;
    state_5 = J_0;
    state_6 = F_0;
    state_7 = G_0;
    state_8 = E_0;
    state_9 = C_0;
    C_1 = __VERIFIER_nondet_int ();
    if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
        abort ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet_int ();
    if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
        abort ();
    H_1 = __VERIFIER_nondet_int ();
    if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
        abort ();
    I_1 = __VERIFIER_nondet_int ();
    if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
        abort ();
    J_1 = __VERIFIER_nondet_int ();
    if (((J_1 <= -1000000000) || (J_1 >= 1000000000)))
        abort ();
    K_1 = __VERIFIER_nondet_int ();
    if (((K_1 <= -1000000000) || (K_1 >= 1000000000)))
        abort ();
    L_1 = __VERIFIER_nondet_int ();
    if (((L_1 <= -1000000000) || (L_1 >= 1000000000)))
        abort ();
    A_1 = state_0;
    B_1 = state_1;
    S_1 = state_2;
    N_1 = state_3;
    R_1 = state_4;
    T_1 = state_5;
    P_1 = state_6;
    Q_1 = state_7;
    O_1 = state_8;
    M_1 = state_9;
    if (!
        ((P_1 == O_1) && (P_1 == C_1) && (H_1 == G_1) && (H_1 == L_1)
         && (J_1 == C_1) && (A_1 == R_1)
         && (((!N_1) || ((O_1 <= 20) && (0 <= O_1))) == M_1)
         && ((D_1 || ((K_1 <= 1) && (-1 <= K_1))) == F_1)
         && (((!F_1) || ((G_1 <= 20) && (0 <= G_1))) == E_1)
         && ((B_1 || ((S_1 <= 1) && (-1 <= S_1))) == N_1) && (N_1 == D_1)
         && ((S_1 <= 0) || (10 <= R_1) || ((S_1 + R_1 + (-1 * Q_1)) == 0))
         && ((!(0 <= S_1)) || (!(R_1 <= 0)) || (T_1 == Q_1)) && ((!(0 <= K_1))
                                                                 ||
                                                                 (!(J_1 <= 0))
                                                                 || (L_1 ==
                                                                     I_1))
         && ((K_1 <= 0) || (10 <= J_1) || ((K_1 + J_1 + (-1 * I_1)) == 0))
         && ((R_1 == Q_1) || ((!(S_1 <= 0)) && (!(10 <= R_1))))
         && (((R_1 <= 0) && (0 <= S_1)) || ((S_1 + R_1 + (-1 * T_1)) == 0))
         && (((J_1 <= 0) && (0 <= K_1)) || ((K_1 + J_1 + (-1 * L_1)) == 0))
         && ((J_1 == I_1) || ((!(K_1 <= 0)) && (!(10 <= J_1))))
         && (T_1 == P_1)))
        abort ();
    state_0 = C_1;
    state_1 = D_1;
    state_2 = K_1;
    state_3 = F_1;
    state_4 = J_1;
    state_5 = L_1;
    state_6 = H_1;
    state_7 = I_1;
    state_8 = G_1;
    state_9 = E_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = state_0;
          B_2 = state_1;
          I_2 = state_2;
          D_2 = state_3;
          H_2 = state_4;
          J_2 = state_5;
          F_2 = state_6;
          G_2 = state_7;
          E_2 = state_8;
          C_2 = state_9;
          if (!(!C_2))
              abort ();
          goto main_error;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet_int ();
          if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet_int ();
          if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
              abort ();
          I_1 = __VERIFIER_nondet_int ();
          if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
              abort ();
          J_1 = __VERIFIER_nondet_int ();
          if (((J_1 <= -1000000000) || (J_1 >= 1000000000)))
              abort ();
          K_1 = __VERIFIER_nondet_int ();
          if (((K_1 <= -1000000000) || (K_1 >= 1000000000)))
              abort ();
          L_1 = __VERIFIER_nondet_int ();
          if (((L_1 <= -1000000000) || (L_1 >= 1000000000)))
              abort ();
          A_1 = state_0;
          B_1 = state_1;
          S_1 = state_2;
          N_1 = state_3;
          R_1 = state_4;
          T_1 = state_5;
          P_1 = state_6;
          Q_1 = state_7;
          O_1 = state_8;
          M_1 = state_9;
          if (!
              ((P_1 == O_1) && (P_1 == C_1) && (H_1 == G_1) && (H_1 == L_1)
               && (J_1 == C_1) && (A_1 == R_1)
               && (((!N_1) || ((O_1 <= 20) && (0 <= O_1))) == M_1)
               && ((D_1 || ((K_1 <= 1) && (-1 <= K_1))) == F_1)
               && (((!F_1) || ((G_1 <= 20) && (0 <= G_1))) == E_1)
               && ((B_1 || ((S_1 <= 1) && (-1 <= S_1))) == N_1)
               && (N_1 == D_1) && ((S_1 <= 0) || (10 <= R_1)
                                   || ((S_1 + R_1 + (-1 * Q_1)) == 0))
               && ((!(0 <= S_1)) || (!(R_1 <= 0)) || (T_1 == Q_1))
               && ((!(0 <= K_1)) || (!(J_1 <= 0)) || (L_1 == I_1))
               && ((K_1 <= 0) || (10 <= J_1)
                   || ((K_1 + J_1 + (-1 * I_1)) == 0)) && ((R_1 == Q_1)
                                                           || ((!(S_1 <= 0))
                                                               &&
                                                               (!(10 <=
                                                                  R_1))))
               && (((R_1 <= 0) && (0 <= S_1))
                   || ((S_1 + R_1 + (-1 * T_1)) == 0)) && (((J_1 <= 0)
                                                            && (0 <= K_1))
                                                           ||
                                                           ((K_1 + J_1 +
                                                             (-1 * L_1)) ==
                                                            0))
               && ((J_1 == I_1) || ((!(K_1 <= 0)) && (!(10 <= J_1))))
               && (T_1 == P_1)))
              abort ();
          state_0 = C_1;
          state_1 = D_1;
          state_2 = K_1;
          state_3 = F_1;
          state_4 = J_1;
          state_5 = L_1;
          state_6 = H_1;
          state_7 = I_1;
          state_8 = G_1;
          state_9 = E_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

