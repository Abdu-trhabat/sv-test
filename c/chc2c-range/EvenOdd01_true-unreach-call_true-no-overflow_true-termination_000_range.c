// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/EvenOdd01_true-unreach-call_true-no-overflow_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "EvenOdd01_true-unreach-call_true-no-overflow_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_tailrecurse_i_0;
    int main_tailrecurse_i_1;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    int D_1;
    int E_1;
    int F_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;
    _Bool G_2;
    _Bool H_2;
    int I_2;
    _Bool J_2;
    int K_2;
    _Bool L_2;
    _Bool M_2;
    int N_2;
    int O_2;
    int P_2;
    _Bool A_3;
    _Bool B_3;
    _Bool C_3;
    _Bool D_3;
    int E_3;
    int F_3;
    _Bool G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool K_3;
    int L_3;
    _Bool M_3;
    _Bool N_3;
    int O_3;
    _Bool P_3;
    _Bool Q_3;
    int R_3;
    int S_3;
    int T_3;
    int U_3;
    _Bool V_3;
    _Bool W_3;
    _Bool X_3;
    _Bool CHC_COMP_UNUSED_4;

    if (((main_tailrecurse_i_0 <= -1000000000)
         || (main_tailrecurse_i_0 >= 1000000000))
        || ((main_tailrecurse_i_1 <= -1000000000)
            || (main_tailrecurse_i_1 >= 1000000000)) || ((D_1 <= -1000000000)
                                                         || (D_1 >=
                                                             1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((N_2 <= -1000000000) || (N_2 >= 1000000000))
        || ((O_2 <= -1000000000) || (O_2 >= 1000000000))
        || ((P_2 <= -1000000000) || (P_2 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((L_3 <= -1000000000) || (L_3 >= 1000000000))
        || ((O_3 <= -1000000000) || (O_3 >= 1000000000))
        || ((R_3 <= -1000000000) || (R_3 >= 1000000000))
        || ((S_3 <= -1000000000) || (S_3 >= 1000000000))
        || ((T_3 <= -1000000000) || (T_3 >= 1000000000))
        || ((U_3 <= -1000000000) || (U_3 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_1 = __VERIFIER_nondet__Bool ();
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    E_1 = __VERIFIER_nondet_int ();
    if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
        abort ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    if (!
        (((!C_1) || (!B_1) || (D_1 == E_1))
         && ((!C_1) || (!B_1) || (F_1 == D_1)) && ((!B_1) || (C_1 && B_1))
         && (!A_1) && B_1 && (!((0 <= E_1) == A_1))))
        abort ();
    main_tailrecurse_i_0 = E_1;
    main_tailrecurse_i_1 = F_1;
    A_2 = __VERIFIER_nondet__Bool ();
    B_2 = __VERIFIER_nondet__Bool ();
    C_2 = __VERIFIER_nondet__Bool ();
    D_2 = __VERIFIER_nondet__Bool ();
    E_2 = __VERIFIER_nondet__Bool ();
    F_2 = __VERIFIER_nondet__Bool ();
    G_2 = __VERIFIER_nondet__Bool ();
    H_2 = __VERIFIER_nondet__Bool ();
    J_2 = __VERIFIER_nondet__Bool ();
    K_2 = __VERIFIER_nondet_int ();
    if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
        abort ();
    L_2 = __VERIFIER_nondet__Bool ();
    M_2 = __VERIFIER_nondet__Bool ();
    N_2 = __VERIFIER_nondet_int ();
    if (((N_2 <= -1000000000) || (N_2 >= 1000000000)))
        abort ();
    P_2 = __VERIFIER_nondet_int ();
    if (((P_2 <= -1000000000) || (P_2 >= 1000000000)))
        abort ();
    O_2 = main_tailrecurse_i_0;
    I_2 = main_tailrecurse_i_1;
    if (!
        (((!C_2) || B_2 || (!A_2)) && ((!E_2) || (!D_2) || (!C_2))
         && ((!F_2) || (!B_2) || (!A_2)) && ((!H_2) || (!G_2) || (!F_2))
         && ((!M_2) || (G_2 && F_2) || (D_2 && C_2)) && ((!M_2) || (!L_2)
                                                         || (N_2 == K_2))
         && ((!M_2) || (!L_2) || (P_2 == N_2)) && ((!M_2) || (!L_2) || (!J_2))
         && ((!C_2) || (E_2 == (I_2 == 0))) && ((!C_2) || (C_2 && A_2))
         && ((!D_2) || C_2) && ((!F_2) || (H_2 == (I_2 == 1))) && ((!F_2)
                                                                   || (F_2
                                                                       &&
                                                                       A_2))
         && ((!G_2) || F_2) && ((!L_2) || (M_2 && L_2)) && ((!M_2)
                                                            || (K_2 ==
                                                                (I_2 + -2)))
         && ((!M_2) || (J_2 == (I_2 == 2))) && L_2 && (!((1 <= I_2) == B_2))))
        abort ();
    main_tailrecurse_i_0 = O_2;
    main_tailrecurse_i_1 = P_2;
    goto main_tailrecurse_i_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_tailrecurse_i_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet__Bool ();
          B_3 = __VERIFIER_nondet__Bool ();
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          G_3 = __VERIFIER_nondet__Bool ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet_int ();
          if (((L_3 <= -1000000000) || (L_3 >= 1000000000)))
              abort ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet__Bool ();
          O_3 = __VERIFIER_nondet_int ();
          if (((O_3 <= -1000000000) || (O_3 >= 1000000000)))
              abort ();
          P_3 = __VERIFIER_nondet__Bool ();
          Q_3 = __VERIFIER_nondet__Bool ();
          R_3 = __VERIFIER_nondet_int ();
          if (((R_3 <= -1000000000) || (R_3 >= 1000000000)))
              abort ();
          T_3 = __VERIFIER_nondet_int ();
          if (((T_3 <= -1000000000) || (T_3 >= 1000000000)))
              abort ();
          U_3 = __VERIFIER_nondet_int ();
          if (((U_3 <= -1000000000) || (U_3 >= 1000000000)))
              abort ();
          V_3 = __VERIFIER_nondet__Bool ();
          W_3 = __VERIFIER_nondet__Bool ();
          X_3 = __VERIFIER_nondet__Bool ();
          S_3 = main_tailrecurse_i_0;
          F_3 = main_tailrecurse_i_1;
          if (!
              (((!W_3) || (P_3 && Q_3) || (N_3 && M_3) || (K_3 && J_3))
               && ((!J_3) || (P_3 && D_3) || (M_3 && C_3)) && ((!K_3)
                                                               || (!J_3)
                                                               || (L_3 == 0))
               && ((!K_3) || (!J_3) || (T_3 == L_3)) && ((!K_3) || (!J_3)
                                                         || G_3) && ((!M_3)
                                                                     || B_3
                                                                     ||
                                                                     (!A_3))
               && ((!M_3) || (!H_3) || (!C_3)) && ((!N_3) || (!M_3)
                                                   || (O_3 == 0)) && ((!N_3)
                                                                      ||
                                                                      (!M_3)
                                                                      || (T_3
                                                                          ==
                                                                          O_3))
               && ((!N_3) || (!M_3) || H_3) && ((!P_3) || (!B_3) || (!A_3))
               && ((!P_3) || (!Q_3) || (R_3 == 1)) && ((!P_3) || (!Q_3)
                                                       || (T_3 == R_3))
               && ((!P_3) || (!I_3) || (!D_3)) && ((!P_3) || I_3 || (!Q_3))
               && ((!W_3) || (U_3 == ((S_3 % 2 + 2) % 2))) && ((!W_3)
                                                               || (V_3 ==
                                                                   (T_3 ==
                                                                    U_3)))
               && ((!W_3) || (!V_3)) && ((!X_3) || (X_3 && W_3)) && ((!J_3)
                                                                     || (E_3
                                                                         ==
                                                                         (F_3
                                                                          +
                                                                          -2)))
               && ((!J_3) || (G_3 == (F_3 == 2))) && ((!K_3) || J_3)
               && ((!M_3) || (H_3 == (F_3 == 0))) && ((!M_3) || (M_3 && A_3))
               && (M_3 || (!C_3)) && ((!N_3) || M_3) && ((!P_3)
                                                         || (I_3 ==
                                                             (F_3 == 1)))
               && ((!P_3) || (P_3 && A_3)) && (P_3 || (!D_3)) && (P_3
                                                                  || (!Q_3))
               && X_3 && (!((1 <= F_3) == B_3))))
              abort ();
          CHC_COMP_UNUSED_4 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet__Bool ();
          M_2 = __VERIFIER_nondet__Bool ();
          N_2 = __VERIFIER_nondet_int ();
          if (((N_2 <= -1000000000) || (N_2 >= 1000000000)))
              abort ();
          P_2 = __VERIFIER_nondet_int ();
          if (((P_2 <= -1000000000) || (P_2 >= 1000000000)))
              abort ();
          O_2 = main_tailrecurse_i_0;
          I_2 = main_tailrecurse_i_1;
          if (!
              (((!C_2) || B_2 || (!A_2)) && ((!E_2) || (!D_2) || (!C_2))
               && ((!F_2) || (!B_2) || (!A_2)) && ((!H_2) || (!G_2) || (!F_2))
               && ((!M_2) || (G_2 && F_2) || (D_2 && C_2)) && ((!M_2)
                                                               || (!L_2)
                                                               || (N_2 ==
                                                                   K_2))
               && ((!M_2) || (!L_2) || (P_2 == N_2)) && ((!M_2) || (!L_2)
                                                         || (!J_2)) && ((!C_2)
                                                                        ||
                                                                        (E_2
                                                                         ==
                                                                         (I_2
                                                                          ==
                                                                          0)))
               && ((!C_2) || (C_2 && A_2)) && ((!D_2) || C_2) && ((!F_2)
                                                                  || (H_2 ==
                                                                      (I_2 ==
                                                                       1)))
               && ((!F_2) || (F_2 && A_2)) && ((!G_2) || F_2) && ((!L_2)
                                                                  || (M_2
                                                                      && L_2))
               && ((!M_2) || (K_2 == (I_2 + -2))) && ((!M_2)
                                                      || (J_2 == (I_2 == 2)))
               && L_2 && (!((1 <= I_2) == B_2))))
              abort ();
          main_tailrecurse_i_0 = O_2;
          main_tailrecurse_i_1 = P_2;
          goto main_tailrecurse_i_0;

      default:
          abort ();
      }

    // return expression

}

