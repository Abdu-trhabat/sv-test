// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/terminator_02_true-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "terminator_02_true-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__lr_ph_split_us_0;
    int main__lr_ph_split_us_1;
    int main__lr_ph_split_us_2;
    int main__bb_0;
    int main__bb_1;
    int main__bb_2;
    int main_entry_0;
    int main_entry_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    _Bool G_1;
    _Bool H_1;
    _Bool I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    _Bool M_1;
    int N_1;
    int O_1;
    int P_1;
    _Bool Q_1;
    _Bool R_1;
    int S_1;
    int T_1;
    int U_1;
    int V_1;
    int A_2;
    _Bool B_2;
    int C_2;
    _Bool D_2;
    int E_2;
    int F_2;
    int G_2;
    _Bool H_2;
    _Bool I_2;
    _Bool J_2;
    int K_2;
    int L_2;
    int M_2;
    _Bool N_2;
    _Bool O_2;
    int P_2;
    int Q_2;
    int R_2;
    int S_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool K_3;
    _Bool L_3;
    _Bool M_3;
    int N_3;
    int O_3;
    int P_3;
    _Bool Q_3;
    int R_3;
    int S_3;
    int T_3;
    _Bool U_3;
    _Bool V_3;
    _Bool W_3;
    _Bool X_3;
    _Bool Y_3;
    _Bool Z_3;
    _Bool A1_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    _Bool E_4;
    _Bool F_4;
    _Bool G_4;
    int H_4;
    int I_4;
    int J_4;
    _Bool K_4;
    int L_4;
    _Bool M_4;
    _Bool N_4;
    int O_4;
    _Bool P_4;
    int Q_4;
    int R_4;
    int S_4;
    _Bool T_4;
    int U_4;
    int V_4;
    int W_4;
    int X_4;
    int Y_4;
    int Z_4;
    _Bool A1_4;
    int B1_4;
    int C1_4;
    _Bool D1_4;
    int E1_4;
    int F1_4;
    int G1_4;
    _Bool H1_4;
    _Bool I1_4;
    _Bool J1_4;
    _Bool K1_4;
    _Bool L1_4;
    _Bool M1_4;
    _Bool N1_4;
    int A_5;
    _Bool B_5;
    _Bool C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int A_6;
    _Bool B_6;
    _Bool C_6;
    int D_6;
    _Bool E_6;
    int F_6;
    _Bool G_6;
    _Bool H_6;
    int I_6;
    int J_6;
    int K_6;
    int L_6;
    _Bool CHC_COMP_UNUSED_7;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    main_entry_0 = A_0;
    main_entry_1 = B_0;
    goto main_entry;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_entry:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet__Bool ();
          L_1 = __VERIFIER_nondet__Bool ();
          M_1 = __VERIFIER_nondet__Bool ();
          N_1 = __VERIFIER_nondet_int ();
          O_1 = __VERIFIER_nondet_int ();
          P_1 = __VERIFIER_nondet_int ();
          Q_1 = __VERIFIER_nondet__Bool ();
          R_1 = __VERIFIER_nondet__Bool ();
          S_1 = __VERIFIER_nondet_int ();
          T_1 = __VERIFIER_nondet_int ();
          U_1 = __VERIFIER_nondet_int ();
          V_1 = main_entry_0;
          D_1 = main_entry_1;
          if (!
              ((!((O_1 <= 100) == J_1))
               && (G_1 == ((!(199 <= E_1)) && (E_1 >= 0)))
               && (H_1 == ((!(199 <= F_1)) && (F_1 >= 0)))
               && (I_1 == (H_1 && G_1)) && (M_1 == (K_1 && J_1))
               && (A_1 == D_1) && (B_1 == D_1) && (C_1 == D_1)
               && (E_1 == (N_1 + 99)) && (F_1 == (O_1 + 99)) && ((!L_1) || M_1
                                                                 || (!R_1))
               && ((!R_1) || (!Q_1) || (P_1 == N_1)) && ((!R_1) || (!Q_1)
                                                         || (S_1 == O_1))
               && ((!R_1) || (!Q_1) || (T_1 == S_1)) && ((!R_1) || (!Q_1)
                                                         || (U_1 == P_1))
               && ((!Q_1) || (R_1 && Q_1)) && ((!R_1) || (R_1 && L_1)) && I_1
               && Q_1 && (!((100 <= N_1) == K_1))))
              abort ();
          main__lr_ph_split_us_0 = T_1;
          main__lr_ph_split_us_1 = U_1;
          main__lr_ph_split_us_2 = V_1;
          B_5 = __VERIFIER_nondet__Bool ();
          C_5 = __VERIFIER_nondet__Bool ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          F_5 = main__lr_ph_split_us_0;
          A_5 = main__lr_ph_split_us_1;
          G_5 = main__lr_ph_split_us_2;
          if (!
              (((!C_5) || (!B_5) || (E_5 == D_5)) && ((!B_5) || (C_5 && B_5))
               && B_5 && ((!C_5) || (!B_5) || (D_5 == A_5))))
              abort ();
          main__bb_0 = E_5;
          main__bb_1 = F_5;
          main__bb_2 = G_5;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet__Bool ();
          C_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet__Bool ();
          F_6 = __VERIFIER_nondet_int ();
          G_6 = __VERIFIER_nondet__Bool ();
          H_6 = __VERIFIER_nondet__Bool ();
          I_6 = __VERIFIER_nondet_int ();
          J_6 = __VERIFIER_nondet_int ();
          D_6 = main__bb_0;
          K_6 = main__bb_1;
          L_6 = main__bb_2;
          if (!
              (((!B_6) || C_6 || (!H_6)) && ((!H_6) || (!G_6) || (I_6 == F_6))
               && ((!H_6) || (!G_6) || (J_6 == I_6)) && ((!G_6) || E_6
                                                         || (!H_6)) && ((!G_6)
                                                                        ||
                                                                        (H_6
                                                                         &&
                                                                         G_6))
               && ((!H_6) || (!((100 <= F_6) == E_6))) && ((!H_6)
                                                           || (F_6 ==
                                                               (D_6 + 1)))
               && ((!H_6) || (H_6 && B_6)) && G_6 && (A_6 == L_6)))
              abort ();
          main__bb_0 = J_6;
          main__bb_1 = K_6;
          main__bb_2 = L_6;
          goto main__bb_0;

      case 1:
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet_int ();
          O_3 = __VERIFIER_nondet_int ();
          P_3 = __VERIFIER_nondet_int ();
          A1_3 = __VERIFIER_nondet__Bool ();
          Q_3 = __VERIFIER_nondet__Bool ();
          R_3 = __VERIFIER_nondet_int ();
          S_3 = __VERIFIER_nondet_int ();
          T_3 = __VERIFIER_nondet_int ();
          U_3 = __VERIFIER_nondet__Bool ();
          V_3 = __VERIFIER_nondet__Bool ();
          W_3 = __VERIFIER_nondet__Bool ();
          X_3 = __VERIFIER_nondet__Bool ();
          Y_3 = __VERIFIER_nondet__Bool ();
          Z_3 = __VERIFIER_nondet__Bool ();
          A_3 = main_entry_0;
          E_3 = main_entry_1;
          if (!
              ((!((N_3 <= 100) == K_3))
               && (H_3 == ((!(199 <= F_3)) && (F_3 >= 0)))
               && (I_3 == ((!(199 <= G_3)) && (G_3 >= 0)))
               && (J_3 == (I_3 && H_3)) && (M_3 == (L_3 && K_3))
               && (B_3 == E_3) && (C_3 == E_3) && (D_3 == E_3)
               && (F_3 == (O_3 + 99)) && (G_3 == (N_3 + 99)) && ((!Q_3)
                                                                 || (P_3 ==
                                                                     N_3)
                                                                 || (!Z_3))
               && ((!Q_3) || (R_3 == O_3) || (!Z_3)) && ((!Q_3)
                                                         || (S_3 == R_3)
                                                         || (!Z_3)) && ((!Q_3)
                                                                        ||
                                                                        (T_3
                                                                         ==
                                                                         P_3)
                                                                        ||
                                                                        (!Z_3))
               && ((!Q_3) || (!M_3) || (!Z_3)) && ((!Z_3)
                                                   ||
                                                   (!((101 <= T_3) == U_3)))
               && ((!Z_3) || (!((S_3 <= 99) == V_3))) && ((!Z_3)
                                                          || (X_3 ==
                                                              (V_3 || U_3)))
               && ((!Z_3) || (!(X_3 == Y_3))) && ((!Z_3) || (Q_3 && Z_3))
               && ((!Z_3) || Y_3) && ((!A1_3) || (A1_3 && Z_3)) && ((!W_3)
                                                                    || (!Z_3))
               && J_3 && A1_3 && (!((100 <= O_3) == L_3))))
              abort ();
          CHC_COMP_UNUSED_7 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main__bb_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet__Bool ();
          C_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet__Bool ();
          F_6 = __VERIFIER_nondet_int ();
          G_6 = __VERIFIER_nondet__Bool ();
          H_6 = __VERIFIER_nondet__Bool ();
          I_6 = __VERIFIER_nondet_int ();
          J_6 = __VERIFIER_nondet_int ();
          D_6 = main__bb_0;
          K_6 = main__bb_1;
          L_6 = main__bb_2;
          if (!
              (((!B_6) || C_6 || (!H_6)) && ((!H_6) || (!G_6) || (I_6 == F_6))
               && ((!H_6) || (!G_6) || (J_6 == I_6)) && ((!G_6) || E_6
                                                         || (!H_6)) && ((!G_6)
                                                                        ||
                                                                        (H_6
                                                                         &&
                                                                         G_6))
               && ((!H_6) || (!((100 <= F_6) == E_6))) && ((!H_6)
                                                           || (F_6 ==
                                                               (D_6 + 1)))
               && ((!H_6) || (H_6 && B_6)) && G_6 && (A_6 == L_6)))
              abort ();
          main__bb_0 = J_6;
          main__bb_1 = K_6;
          main__bb_2 = L_6;
          goto main__bb_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet__Bool ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          N_2 = __VERIFIER_nondet__Bool ();
          O_2 = __VERIFIER_nondet__Bool ();
          P_2 = __VERIFIER_nondet_int ();
          Q_2 = __VERIFIER_nondet_int ();
          R_2 = __VERIFIER_nondet_int ();
          C_2 = main__bb_0;
          F_2 = main__bb_1;
          S_2 = main__bb_2;
          if (!
              (((!O_2) || (!D_2) || (E_2 == C_2))
               && ((!O_2) || (!D_2) || (G_2 == E_2)) && ((!O_2) || (!D_2)
                                                         || (!B_2)) && ((!O_2)
                                                                        ||
                                                                        (!N_2)
                                                                        ||
                                                                        (M_2
                                                                         ==
                                                                         K_2))
               && ((!O_2) || (!N_2) || (P_2 == L_2)) && ((!O_2) || (!N_2)
                                                         || (Q_2 == P_2))
               && ((!O_2) || (!N_2) || (R_2 == M_2)) && ((!O_2) || (!N_2)
                                                         || J_2) && ((!N_2)
                                                                     || (O_2
                                                                         &&
                                                                         N_2))
               && ((!O_2) || (!((101 <= G_2) == I_2))) && ((!O_2)
                                                           ||
                                                           (!((L_2 <= 100) ==
                                                              H_2)))
               && ((!O_2) || (J_2 == (I_2 && H_2))) && ((!O_2)
                                                        || (K_2 ==
                                                            (G_2 + -1)))
               && ((!O_2) || (L_2 == (F_2 + -1))) && ((!O_2) || (O_2 && D_2))
               && N_2 && (A_2 == S_2)))
              abort ();
          main__lr_ph_split_us_0 = Q_2;
          main__lr_ph_split_us_1 = R_2;
          main__lr_ph_split_us_2 = S_2;
          B_5 = __VERIFIER_nondet__Bool ();
          C_5 = __VERIFIER_nondet__Bool ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          F_5 = main__lr_ph_split_us_0;
          A_5 = main__lr_ph_split_us_1;
          G_5 = main__lr_ph_split_us_2;
          if (!
              (((!C_5) || (!B_5) || (E_5 == D_5)) && ((!B_5) || (C_5 && B_5))
               && B_5 && ((!C_5) || (!B_5) || (D_5 == A_5))))
              abort ();
          main__bb_0 = E_5;
          main__bb_1 = F_5;
          main__bb_2 = G_5;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet__Bool ();
          C_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet__Bool ();
          F_6 = __VERIFIER_nondet_int ();
          G_6 = __VERIFIER_nondet__Bool ();
          H_6 = __VERIFIER_nondet__Bool ();
          I_6 = __VERIFIER_nondet_int ();
          J_6 = __VERIFIER_nondet_int ();
          D_6 = main__bb_0;
          K_6 = main__bb_1;
          L_6 = main__bb_2;
          if (!
              (((!B_6) || C_6 || (!H_6)) && ((!H_6) || (!G_6) || (I_6 == F_6))
               && ((!H_6) || (!G_6) || (J_6 == I_6)) && ((!G_6) || E_6
                                                         || (!H_6)) && ((!G_6)
                                                                        ||
                                                                        (H_6
                                                                         &&
                                                                         G_6))
               && ((!H_6) || (!((100 <= F_6) == E_6))) && ((!H_6)
                                                           || (F_6 ==
                                                               (D_6 + 1)))
               && ((!H_6) || (H_6 && B_6)) && G_6 && (A_6 == L_6)))
              abort ();
          main__bb_0 = J_6;
          main__bb_1 = K_6;
          main__bb_2 = L_6;
          goto main__bb_0;

      case 2:
          A_4 = __VERIFIER_nondet_int ();
          C_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          M1_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet__Bool ();
          K1_4 = __VERIFIER_nondet__Bool ();
          G_4 = __VERIFIER_nondet__Bool ();
          H_4 = __VERIFIER_nondet_int ();
          I1_4 = __VERIFIER_nondet__Bool ();
          I_4 = __VERIFIER_nondet_int ();
          J_4 = __VERIFIER_nondet_int ();
          G1_4 = __VERIFIER_nondet_int ();
          K_4 = __VERIFIER_nondet__Bool ();
          L_4 = __VERIFIER_nondet_int ();
          E1_4 = __VERIFIER_nondet_int ();
          M_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet__Bool ();
          C1_4 = __VERIFIER_nondet_int ();
          P_4 = __VERIFIER_nondet__Bool ();
          A1_4 = __VERIFIER_nondet__Bool ();
          R_4 = __VERIFIER_nondet_int ();
          S_4 = __VERIFIER_nondet_int ();
          T_4 = __VERIFIER_nondet__Bool ();
          U_4 = __VERIFIER_nondet_int ();
          V_4 = __VERIFIER_nondet_int ();
          W_4 = __VERIFIER_nondet_int ();
          X_4 = __VERIFIER_nondet_int ();
          Y_4 = __VERIFIER_nondet_int ();
          Z_4 = __VERIFIER_nondet_int ();
          N1_4 = __VERIFIER_nondet__Bool ();
          L1_4 = __VERIFIER_nondet__Bool ();
          J1_4 = __VERIFIER_nondet__Bool ();
          H1_4 = __VERIFIER_nondet__Bool ();
          F1_4 = __VERIFIER_nondet_int ();
          D1_4 = __VERIFIER_nondet__Bool ();
          B1_4 = __VERIFIER_nondet_int ();
          O_4 = main__bb_0;
          Q_4 = main__bb_1;
          B_4 = main__bb_2;
          if (!
              (((!M_4) || (!K_4) || (C_4 == O_4))
               && ((!M_4) || (!K_4) || (D_4 == C_4)) && ((!N_4) || (!M_4)
                                                         || (!K_4)) && (N_4
                                                                        ||
                                                                        (!T_4)
                                                                        ||
                                                                        (!M_4))
               && ((!M1_4) || (D1_4 && M1_4) || (A1_4 && M1_4)) && ((!A1_4)
                                                                    || (!K_4)
                                                                    || (J_4 ==
                                                                        H_4))
               && ((!A1_4) || (!K_4) || (L_4 == I_4)) && ((!A1_4) || (!K_4)
                                                          || (V_4 == J_4))
               && ((!A1_4) || (!K_4) || (W_4 == L_4)) && ((!A1_4) || (!K_4)
                                                          || (!G_4))
               && ((!M1_4) || (Z_4 == V_4) || (!A1_4)) && ((!M1_4)
                                                           || (B1_4 == W_4)
                                                           || (!A1_4))
               && ((!M1_4) || (F1_4 == B1_4) || (!A1_4)) && ((!M1_4)
                                                             || (G1_4 == Z_4)
                                                             || (!A1_4))
               && ((!D1_4) || (!T_4) || (Y_4 == U_4)) && ((!D1_4) || (!T_4)
                                                          || (S_4 == Q_4))
               && ((!D1_4) || (!T_4) || (U_4 == R_4)) && ((!D1_4) || (!T_4)
                                                          || (X_4 == S_4))
               && ((!D1_4) || (!T_4) || (!P_4)) && ((!D1_4) || (!M1_4)
                                                    || (C1_4 == X_4))
               && ((!D1_4) || (!M1_4) || (E1_4 == Y_4)) && ((!D1_4)
                                                            || (F1_4 == E1_4)
                                                            || (!M1_4))
               && ((!D1_4) || (G1_4 == C1_4) || (!M1_4)) && ((!K_4)
                                                             ||
                                                             (!((101 <=
                                                                 D_4) ==
                                                                F_4)))
               && ((!K_4) || (!((H_4 <= 100) == E_4))) && ((!K_4)
                                                           || (G_4 ==
                                                               (F_4 && E_4)))
               && ((!K_4) || (H_4 == (Q_4 + -1))) && ((!K_4)
                                                      || (I_4 == (D_4 + -1)))
               && ((!K_4) || (M_4 && K_4)) && ((!T_4)
                                               || (!((100 <= R_4) == P_4)))
               && ((!T_4) || (R_4 == (O_4 + 1))) && ((!T_4) || (T_4 && M_4))
               && ((!M1_4) || (!((101 <= G1_4) == H1_4))) && ((!M1_4)
                                                              ||
                                                              (!((F1_4 <=
                                                                  99) ==
                                                                 I1_4)))
               && ((!M1_4) || (K1_4 == (I1_4 || H1_4))) && ((!M1_4)
                                                            ||
                                                            (!(K1_4 == L1_4)))
               && ((!M1_4) || L1_4) && ((!N1_4) || (N1_4 && M1_4)) && ((!A1_4)
                                                                       ||
                                                                       (A1_4
                                                                        &&
                                                                        K_4))
               && ((!D1_4) || (D1_4 && T_4)) && ((!J1_4) || (!M1_4)) && N1_4
               && (A_4 == B_4)))
              abort ();
          CHC_COMP_UNUSED_7 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }

    // return expression

}

