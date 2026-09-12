// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/szymanski_safe_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "szymanski_safe_000_norange.c", 13, "reach_error"); }



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
    int state_4;
    _Bool state_5;
    _Bool state_6;
    _Bool state_7;
    _Bool state_8;
    int state_9;
    int A_0;
    _Bool B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool G_0;
    _Bool H_0;
    _Bool I_0;
    int J_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    int D_1;
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    _Bool H_1;
    _Bool I_1;
    _Bool J_1;
    int K_1;
    _Bool L_1;
    int M_1;
    _Bool N_1;
    _Bool O_1;
    _Bool P_1;
    _Bool Q_1;
    _Bool R_1;
    _Bool S_1;
    _Bool T_1;
    _Bool U_1;
    int V_1;
    int A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;
    _Bool G_2;
    _Bool H_2;
    _Bool I_2;
    int J_2;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((A_0 == 0) && ((!H_0) || (!I_0)) && ((!D_0) || (!E_0)) && (!I_0)
         && (!H_0) && (!G_0) && (!F_0) && (!E_0) && (!D_0) && (!C_0) && (!B_0)
         && (J_0 == 0)))
        abort ();
    state_0 = E_0;
    state_1 = D_0;
    state_2 = I_0;
    state_3 = H_0;
    state_4 = J_0;
    state_5 = G_0;
    state_6 = F_0;
    state_7 = C_0;
    state_8 = B_0;
    state_9 = A_0;
    A_1 = __VERIFIER_nondet__Bool ();
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet_int ();
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet__Bool ();
    H_1 = __VERIFIER_nondet__Bool ();
    I_1 = __VERIFIER_nondet__Bool ();
    J_1 = __VERIFIER_nondet__Bool ();
    K_1 = __VERIFIER_nondet_int ();
    L_1 = __VERIFIER_nondet__Bool ();
    Q_1 = state_0;
    P_1 = state_1;
    U_1 = state_2;
    T_1 = state_3;
    V_1 = state_4;
    S_1 = state_5;
    R_1 = state_6;
    O_1 = state_7;
    N_1 = state_8;
    M_1 = state_9;
    if (!
        ((T_1 || (!R_1) || (!S_1) || (!U_1) || (!E_1)
          || (F_1 && (!C_1) && B_1 && A_1 && (V_1 == D_1))) && (R_1 || S_1
                                                                || T_1
                                                                || (!U_1)
                                                                || (!E_1)
                                                                || (F_1
                                                                    && (!C_1)
                                                                    && (!B_1)
                                                                    && A_1
                                                                    && (V_1 ==
                                                                        D_1)))
         && (R_1 || T_1 || U_1 || (!S_1) || (!E_1)
             || ((!F_1) && (!C_1) && B_1 && A_1 && (D_1 == 3))) && (R_1 || S_1
                                                                    || T_1
                                                                    || U_1
                                                                    || (!E_1)
                                                                    || ((!F_1)
                                                                        &&
                                                                        (!C_1)
                                                                        &&
                                                                        (!B_1)
                                                                        && A_1
                                                                        &&
                                                                        (D_1
                                                                         ==
                                                                         1)))
         && (R_1 || T_1 || (!S_1) || (!U_1) || (!E_1)
             || (F_1 && (!C_1) && B_1 && A_1 && (D_1 == 0))) && (S_1 || T_1
                                                                 || U_1
                                                                 || (!R_1)
                                                                 || (!E_1)
                                                                 ||
                                                                 (((!(3 <=
                                                                      M_1))
                                                                   || ((!F_1)
                                                                       &&
                                                                       (!C_1)
                                                                       &&
                                                                       (!B_1)
                                                                       &&
                                                                       A_1))
                                                                  &&
                                                                  ((3 <= M_1)
                                                                   || ((!F_1)
                                                                       &&
                                                                       (!C_1)
                                                                       && B_1
                                                                       &&
                                                                       (!A_1)))
                                                                  && (V_1 ==
                                                                      D_1)))
         && (T_1 || U_1 || (!R_1) || (!S_1) || (!E_1)
             || (((!(M_1 == 1)) || (C_1 && (!B_1) && (!A_1)))
                 && ((M_1 == 1) || (C_1 && B_1 && (!A_1))) && (V_1 == D_1)))
         && (S_1 || T_1 || (!R_1) || (!U_1) || (!E_1)
             ||
             ((((M_1 <= 3) && (2 <= M_1)) || (F_1 && (!C_1) && B_1 && (!A_1)))
              && ((!(2 <= M_1)) || (!(M_1 <= 3))
                  || (F_1 && (!C_1) && (!B_1) && A_1)) && (V_1 == D_1)))
         && (Q_1 || (!N_1) || (!O_1) || (!P_1) || (!L_1)
             || (J_1 && I_1 && H_1 && (!G_1) && (M_1 == K_1))) && (N_1 || O_1
                                                                   || Q_1
                                                                   || (!P_1)
                                                                   || (!L_1)
                                                                   || (J_1
                                                                       &&
                                                                       (!I_1)
                                                                       && H_1
                                                                       &&
                                                                       (!G_1)
                                                                       && (M_1
                                                                           ==
                                                                           K_1)))
         && (N_1 || P_1 || Q_1 || (!O_1) || (!L_1)
             || (J_1 && I_1 && (!H_1) && (!G_1) && (K_1 == 3))) && (N_1 || O_1
                                                                    || P_1
                                                                    || Q_1
                                                                    || (!L_1)
                                                                    || (J_1
                                                                        &&
                                                                        (!I_1)
                                                                        &&
                                                                        (!H_1)
                                                                        &&
                                                                        (!G_1)
                                                                        &&
                                                                        (K_1
                                                                         ==
                                                                         1)))
         && (N_1 || Q_1 || (!O_1) || (!P_1) || (!L_1)
             || (J_1 && I_1 && H_1 && (!G_1) && (K_1 == 0))) && (O_1 || P_1
                                                                 || Q_1
                                                                 || (!N_1)
                                                                 || (!L_1)
                                                                 ||
                                                                 (((3 <= V_1)
                                                                   || ((!J_1)
                                                                       && I_1
                                                                       &&
                                                                       (!H_1)
                                                                       &&
                                                                       (!G_1)))
                                                                  &&
                                                                  ((!(3 <=
                                                                      V_1))
                                                                   || (J_1
                                                                       &&
                                                                       (!I_1)
                                                                       &&
                                                                       (!H_1)
                                                                       &&
                                                                       (!G_1)))
                                                                  && (M_1 ==
                                                                      K_1)))
         && (P_1 || Q_1 || (!N_1) || (!O_1) || (!L_1)
             || (((!(V_1 == 1)) || ((!J_1) && (!I_1) && G_1))
                 && ((V_1 == 1) || ((!J_1) && I_1 && G_1)) && (M_1 == K_1)))
         && (O_1 || Q_1 || (!N_1) || (!P_1) || (!L_1)
             ||
             ((((V_1 <= 3) && (2 <= V_1)) || ((!J_1) && I_1 && H_1 && (!G_1)))
              && ((!(2 <= V_1)) || (!(V_1 <= 3))
                  || (J_1 && (!I_1) && H_1 && (!G_1))) && (M_1 == K_1)))
         && (R_1 || S_1 || (!T_1) || (!E_1)
             || (C_1 && (!B_1) && A_1 && (D_1 == 2))) && (R_1 || (!S_1)
                                                          || (!T_1) || (!E_1)
                                                          || (C_1 && B_1
                                                              && A_1
                                                              && (D_1 == 4)))
         && ((!R_1) || (!S_1) || (!T_1) || (!E_1)
             || (((!(2 <= M_1)) || (C_1 && B_1 && A_1))
                 && ((2 <= M_1) || (F_1 && (!C_1) && (!B_1) && (!A_1)))
                 && (V_1 == D_1))) && (S_1 || (!R_1) || (!T_1) || (!E_1)
                                       ||
                                       (((M_1 == 4) || (C_1 && (!B_1) && A_1))
                                        && ((!(M_1 == 4))
                                            || (C_1 && B_1 && (!A_1)))
                                        && (V_1 == D_1))) && (N_1 || O_1
                                                              || (!Q_1)
                                                              || (!L_1)
                                                              || (J_1
                                                                  && (!I_1)
                                                                  && G_1
                                                                  && (K_1 ==
                                                                      2)))
         && (N_1 || (!O_1) || (!Q_1) || (!L_1)
             || (J_1 && I_1 && G_1 && (K_1 == 4))) && ((!N_1) || (!O_1)
                                                       || (!Q_1) || (!L_1)
                                                       ||
                                                       (((!(2 <= V_1))
                                                         || (J_1 && I_1
                                                             && G_1))
                                                        && ((2 <= V_1)
                                                            || ((!J_1)
                                                                && (!I_1)
                                                                && H_1
                                                                && (!G_1)))
                                                        && (M_1 == K_1)))
         && (O_1 || (!N_1) || (!Q_1) || (!L_1)
             || (((!(V_1 == 4)) || ((!J_1) && I_1 && G_1))
                 && ((V_1 == 4) || (J_1 && (!I_1) && G_1)) && (M_1 == K_1)))
         && ((!T_1) || (!U_1)) && ((!P_1) || (!Q_1)) && (E_1
                                                         || ((V_1 == D_1)
                                                             && (R_1 == A_1)
                                                             && (S_1 == B_1)
                                                             && (T_1 == C_1)
                                                             && (U_1 == F_1)))
         && ((!F_1) || (!C_1)) && ((!H_1) || (!G_1)) && (L_1
                                                         || ((M_1 == K_1)
                                                             && (N_1 == J_1)
                                                             && (O_1 == I_1)
                                                             && (P_1 == H_1)
                                                             && (Q_1 == G_1)))
         && (!(E_1 == L_1))))
        abort ();
    state_0 = G_1;
    state_1 = H_1;
    state_2 = F_1;
    state_3 = C_1;
    state_4 = D_1;
    state_5 = B_1;
    state_6 = A_1;
    state_7 = I_1;
    state_8 = J_1;
    state_9 = K_1;
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
          D_2 = state_1;
          I_2 = state_2;
          H_2 = state_3;
          J_2 = state_4;
          G_2 = state_5;
          F_2 = state_6;
          C_2 = state_7;
          B_2 = state_8;
          A_2 = state_9;
          if (!
              ((!H_2) && (!G_2) && (!F_2) && (!E_2) && D_2 && (!C_2) && (!B_2)
               && I_2))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet__Bool ();
          B_1 = __VERIFIER_nondet__Bool ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet_int ();
          L_1 = __VERIFIER_nondet__Bool ();
          Q_1 = state_0;
          P_1 = state_1;
          U_1 = state_2;
          T_1 = state_3;
          V_1 = state_4;
          S_1 = state_5;
          R_1 = state_6;
          O_1 = state_7;
          N_1 = state_8;
          M_1 = state_9;
          if (!
              ((T_1 || (!R_1) || (!S_1) || (!U_1) || (!E_1)
                || (F_1 && (!C_1) && B_1 && A_1 && (V_1 == D_1))) && (R_1
                                                                      || S_1
                                                                      || T_1
                                                                      ||
                                                                      (!U_1)
                                                                      ||
                                                                      (!E_1)
                                                                      || (F_1
                                                                          &&
                                                                          (!C_1)
                                                                          &&
                                                                          (!B_1)
                                                                          &&
                                                                          A_1
                                                                          &&
                                                                          (V_1
                                                                           ==
                                                                           D_1)))
               && (R_1 || T_1 || U_1 || (!S_1) || (!E_1)
                   || ((!F_1) && (!C_1) && B_1 && A_1 && (D_1 == 3))) && (R_1
                                                                          ||
                                                                          S_1
                                                                          ||
                                                                          T_1
                                                                          ||
                                                                          U_1
                                                                          ||
                                                                          (!E_1)
                                                                          ||
                                                                          ((!F_1) && (!C_1) && (!B_1) && A_1 && (D_1 == 1))) && (R_1 || T_1 || (!S_1) || (!U_1) || (!E_1) || (F_1 && (!C_1) && B_1 && A_1 && (D_1 == 0))) && (S_1 || T_1 || U_1 || (!R_1) || (!E_1) || (((!(3 <= M_1)) || ((!F_1) && (!C_1) && (!B_1) && A_1)) && ((3 <= M_1) || ((!F_1) && (!C_1) && B_1 && (!A_1))) && (V_1 == D_1))) && (T_1 || U_1 || (!R_1) || (!S_1) || (!E_1) || (((!(M_1 == 1)) || (C_1 && (!B_1) && (!A_1))) && ((M_1 == 1) || (C_1 && B_1 && (!A_1))) && (V_1 == D_1))) && (S_1 || T_1 || (!R_1) || (!U_1) || (!E_1) || ((((M_1 <= 3) && (2 <= M_1)) || (F_1 && (!C_1) && B_1 && (!A_1))) && ((!(2 <= M_1)) || (!(M_1 <= 3)) || (F_1 && (!C_1) && (!B_1) && A_1)) && (V_1 == D_1))) && (Q_1 || (!N_1) || (!O_1) || (!P_1) || (!L_1) || (J_1 && I_1 && H_1 && (!G_1) && (M_1 == K_1))) && (N_1 || O_1 || Q_1 || (!P_1) || (!L_1) || (J_1 && (!I_1) && H_1 && (!G_1) && (M_1 == K_1))) && (N_1 || P_1 || Q_1 || (!O_1) || (!L_1) || (J_1 && I_1 && (!H_1) && (!G_1) && (K_1 == 3))) && (N_1 || O_1 || P_1 || Q_1 || (!L_1) || (J_1 && (!I_1) && (!H_1) && (!G_1) && (K_1 == 1))) && (N_1 || Q_1 || (!O_1) || (!P_1) || (!L_1) || (J_1 && I_1 && H_1 && (!G_1) && (K_1 == 0))) && (O_1 || P_1 || Q_1 || (!N_1) || (!L_1) || (((3 <= V_1) || ((!J_1) && I_1 && (!H_1) && (!G_1))) && ((!(3 <= V_1)) || (J_1 && (!I_1) && (!H_1) && (!G_1))) && (M_1 == K_1))) && (P_1 || Q_1 || (!N_1) || (!O_1) || (!L_1) || (((!(V_1 == 1)) || ((!J_1) && (!I_1) && G_1)) && ((V_1 == 1) || ((!J_1) && I_1 && G_1)) && (M_1 == K_1))) && (O_1 || Q_1 || (!N_1) || (!P_1) || (!L_1) || ((((V_1 <= 3) && (2 <= V_1)) || ((!J_1) && I_1 && H_1 && (!G_1))) && ((!(2 <= V_1)) || (!(V_1 <= 3)) || (J_1 && (!I_1) && H_1 && (!G_1))) && (M_1 == K_1))) && (R_1 || S_1 || (!T_1) || (!E_1) || (C_1 && (!B_1) && A_1 && (D_1 == 2))) && (R_1 || (!S_1) || (!T_1) || (!E_1) || (C_1 && B_1 && A_1 && (D_1 == 4))) && ((!R_1) || (!S_1) || (!T_1) || (!E_1) || (((!(2 <= M_1)) || (C_1 && B_1 && A_1)) && ((2 <= M_1) || (F_1 && (!C_1) && (!B_1) && (!A_1))) && (V_1 == D_1))) && (S_1 || (!R_1) || (!T_1) || (!E_1) || (((M_1 == 4) || (C_1 && (!B_1) && A_1)) && ((!(M_1 == 4)) || (C_1 && B_1 && (!A_1))) && (V_1 == D_1))) && (N_1 || O_1 || (!Q_1) || (!L_1) || (J_1 && (!I_1) && G_1 && (K_1 == 2))) && (N_1 || (!O_1) || (!Q_1) || (!L_1) || (J_1 && I_1 && G_1 && (K_1 == 4))) && ((!N_1) || (!O_1) || (!Q_1) || (!L_1) || (((!(2 <= V_1)) || (J_1 && I_1 && G_1)) && ((2 <= V_1) || ((!J_1) && (!I_1) && H_1 && (!G_1))) && (M_1 == K_1))) && (O_1 || (!N_1) || (!Q_1) || (!L_1) || (((!(V_1 == 4)) || ((!J_1) && I_1 && G_1)) && ((V_1 == 4) || (J_1 && (!I_1) && G_1)) && (M_1 == K_1))) && ((!T_1) || (!U_1)) && ((!P_1) || (!Q_1)) && (E_1 || ((V_1 == D_1) && (R_1 == A_1) && (S_1 == B_1) && (T_1 == C_1) && (U_1 == F_1))) && ((!F_1) || (!C_1)) && ((!H_1) || (!G_1)) && (L_1 || ((M_1 == K_1) && (N_1 == J_1) && (O_1 == I_1) && (P_1 == H_1) && (Q_1 == G_1))) && (!(E_1 == L_1))))
              abort ();
          state_0 = G_1;
          state_1 = H_1;
          state_2 = F_1;
          state_3 = C_1;
          state_4 = D_1;
          state_5 = B_1;
          state_6 = A_1;
          state_7 = I_1;
          state_8 = J_1;
          state_9 = K_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

