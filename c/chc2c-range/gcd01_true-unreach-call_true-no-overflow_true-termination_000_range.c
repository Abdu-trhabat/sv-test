// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/gcd01_true-unreach-call_true-no-overflow_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "gcd01_true-unreach-call_true-no-overflow_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__bb_0;
    int main__bb_1;
    int main__bb_2;
    int main__bb_3;
    int main__lr_ph__lr_ph_split_crit_edge_i_0;
    int main__lr_ph__lr_ph_split_crit_edge_i_1;
    int main__lr_ph__lr_ph_split_crit_edge_i_2;
    int main__lr_ph__lr_ph_split_crit_edge_i_3;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    int E_1;
    _Bool F_1;
    _Bool G_1;
    int H_1;
    int I_1;
    int J_1;
    int K_1;
    int L_1;
    _Bool A_2;
    _Bool B_2;
    int C_2;
    _Bool D_2;
    int E_2;
    _Bool F_2;
    int G_2;
    int H_2;
    _Bool I_2;
    _Bool J_2;
    _Bool K_2;
    int L_2;
    int M_2;
    int N_2;
    _Bool O_2;
    _Bool P_2;
    int Q_2;
    int R_2;
    int S_2;
    int T_2;
    int U_2;
    _Bool A_3;
    _Bool B_3;
    _Bool C_3;
    _Bool D_3;
    int E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    int J_3;
    _Bool K_3;
    _Bool L_3;
    _Bool M_3;
    _Bool N_3;
    _Bool O_3;
    int A_4;
    _Bool B_4;
    int C_4;
    _Bool D_4;
    int E_4;
    int F_4;
    int G_4;
    _Bool H_4;
    _Bool I_4;
    _Bool J_4;
    _Bool K_4;
    _Bool L_4;
    int M_4;
    _Bool N_4;
    _Bool O_4;
    _Bool P_4;
    int Q_4;
    _Bool R_4;
    _Bool S_4;
    int T_4;
    int U_4;
    _Bool V_4;
    int W_4;
    _Bool X_4;
    int Y_4;
    int Z_4;
    int A1_4;
    _Bool B1_4;
    _Bool C1_4;
    int D1_4;
    _Bool E1_4;
    _Bool F1_4;
    _Bool G1_4;
    _Bool H1_4;
    _Bool I1_4;
    int A_5;
    _Bool B_5;
    _Bool C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    _Bool A_6;
    _Bool B_6;
    int C_6;
    _Bool D_6;
    _Bool E_6;
    _Bool F_6;
    int G_6;
    _Bool H_6;
    _Bool I_6;
    int J_6;
    int K_6;
    int L_6;
    int M_6;
    int N_6;
    _Bool CHC_COMP_UNUSED_7;

    if (((main__bb_0 <= -1000000000) || (main__bb_0 >= 1000000000))
        || ((main__bb_1 <= -1000000000) || (main__bb_1 >= 1000000000))
        || ((main__bb_2 <= -1000000000) || (main__bb_2 >= 1000000000))
        || ((main__bb_3 <= -1000000000) || (main__bb_3 >= 1000000000))
        || ((main__lr_ph__lr_ph_split_crit_edge_i_0 <= -1000000000)
            || (main__lr_ph__lr_ph_split_crit_edge_i_0 >= 1000000000))
        || ((main__lr_ph__lr_ph_split_crit_edge_i_1 <= -1000000000)
            || (main__lr_ph__lr_ph_split_crit_edge_i_1 >= 1000000000))
        || ((main__lr_ph__lr_ph_split_crit_edge_i_2 <= -1000000000)
            || (main__lr_ph__lr_ph_split_crit_edge_i_2 >= 1000000000))
        || ((main__lr_ph__lr_ph_split_crit_edge_i_3 <= -1000000000)
            || (main__lr_ph__lr_ph_split_crit_edge_i_3 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((M_2 <= -1000000000) || (M_2 >= 1000000000))
        || ((N_2 <= -1000000000) || (N_2 >= 1000000000))
        || ((Q_2 <= -1000000000) || (Q_2 >= 1000000000))
        || ((R_2 <= -1000000000) || (R_2 >= 1000000000))
        || ((S_2 <= -1000000000) || (S_2 >= 1000000000))
        || ((T_2 <= -1000000000) || (T_2 >= 1000000000))
        || ((U_2 <= -1000000000) || (U_2 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((J_3 <= -1000000000) || (J_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((M_4 <= -1000000000) || (M_4 >= 1000000000))
        || ((Q_4 <= -1000000000) || (Q_4 >= 1000000000))
        || ((T_4 <= -1000000000) || (T_4 >= 1000000000))
        || ((U_4 <= -1000000000) || (U_4 >= 1000000000))
        || ((W_4 <= -1000000000) || (W_4 >= 1000000000))
        || ((Y_4 <= -1000000000) || (Y_4 >= 1000000000))
        || ((Z_4 <= -1000000000) || (Z_4 >= 1000000000))
        || ((A1_4 <= -1000000000) || (A1_4 >= 1000000000))
        || ((D1_4 <= -1000000000) || (D1_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((H_5 <= -1000000000) || (H_5 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((G_6 <= -1000000000) || (G_6 >= 1000000000))
        || ((J_6 <= -1000000000) || (J_6 >= 1000000000))
        || ((K_6 <= -1000000000) || (K_6 >= 1000000000))
        || ((L_6 <= -1000000000) || (L_6 >= 1000000000))
        || ((M_6 <= -1000000000) || (M_6 >= 1000000000))
        || ((N_6 <= -1000000000) || (N_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    goto main_entry;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_entry:
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
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          G_3 = __VERIFIER_nondet_int ();
          if (((G_3 <= -1000000000) || (G_3 >= 1000000000)))
              abort ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet_int ();
          if (((J_3 <= -1000000000) || (J_3 >= 1000000000)))
              abort ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet__Bool ();
          O_3 = __VERIFIER_nondet__Bool ();
          if (!
              ((!((1 <= J_3) == B_3)) && (C_3 == (B_3 || A_3))
               && ((!D_3) || (E_3 == 0) || (!N_3)) && ((!D_3) || (F_3 == E_3)
                                                       || (!N_3)) && ((!D_3)
                                                                      || C_3
                                                                      ||
                                                                      (!N_3))
               && ((!N_3) || (!((1 <= F_3) == I_3))) && ((!N_3)
                                                         ||
                                                         (!((G_3 <= 0) ==
                                                            H_3))) && ((!N_3)
                                                                       ||
                                                                       (!((J_3
                                                                           <=
                                                                           0)
                                                                          ==
                                                                          K_3)))
               && ((!N_3) || (L_3 == (I_3 && H_3))) && ((!N_3)
                                                        || (M_3 ==
                                                            (L_3 && K_3)))
               && ((!N_3) || (D_3 && N_3)) && ((!N_3) || M_3) && ((!O_3)
                                                                  || (O_3
                                                                      && N_3))
               && (!A_3) && (!B_3) && O_3 && (!((1 <= G_3) == A_3))))
              abort ();
          CHC_COMP_UNUSED_7 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet__Bool ();
          B_1 = __VERIFIER_nondet__Bool ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
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
          if (!
              ((!((1 <= J_1) == B_1)) && (D_1 == (B_1 || A_1))
               && ((!G_1) || (!D_1) || (!C_1)) && ((!G_1) || (!F_1)
                                                   || (E_1 == J_1)) && ((!G_1)
                                                                        ||
                                                                        (!F_1)
                                                                        ||
                                                                        (H_1
                                                                         ==
                                                                         I_1))
               && ((!G_1) || (!F_1) || (K_1 == H_1)) && ((!G_1) || (!F_1)
                                                         || (L_1 == E_1))
               && ((!F_1) || (G_1 && F_1)) && ((!G_1) || (G_1 && C_1))
               && (!A_1) && (!B_1) && F_1 && (!((1 <= I_1) == A_1))))
              abort ();
          main__lr_ph__lr_ph_split_crit_edge_i_0 = I_1;
          main__lr_ph__lr_ph_split_crit_edge_i_1 = J_1;
          main__lr_ph__lr_ph_split_crit_edge_i_2 = K_1;
          main__lr_ph__lr_ph_split_crit_edge_i_3 = L_1;
          B_5 = __VERIFIER_nondet__Bool ();
          C_5 = __VERIFIER_nondet__Bool ();
          D_5 = __VERIFIER_nondet_int ();
          if (((D_5 <= -1000000000) || (D_5 >= 1000000000)))
              abort ();
          H_5 = __VERIFIER_nondet_int ();
          if (((H_5 <= -1000000000) || (H_5 >= 1000000000)))
              abort ();
          E_5 = main__lr_ph__lr_ph_split_crit_edge_i_0;
          F_5 = main__lr_ph__lr_ph_split_crit_edge_i_1;
          G_5 = main__lr_ph__lr_ph_split_crit_edge_i_2;
          A_5 = main__lr_ph__lr_ph_split_crit_edge_i_3;
          if (!
              (((!C_5) || (!B_5) || (H_5 == D_5)) && ((!B_5) || (C_5 && B_5))
               && B_5 && ((!C_5) || (!B_5) || (D_5 == A_5))))
              abort ();
          main__bb_0 = E_5;
          main__bb_1 = F_5;
          main__bb_2 = G_5;
          main__bb_3 = H_5;
          A_6 = __VERIFIER_nondet__Bool ();
          B_6 = __VERIFIER_nondet__Bool ();
          D_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet__Bool ();
          F_6 = __VERIFIER_nondet__Bool ();
          G_6 = __VERIFIER_nondet_int ();
          if (((G_6 <= -1000000000) || (G_6 >= 1000000000)))
              abort ();
          H_6 = __VERIFIER_nondet__Bool ();
          I_6 = __VERIFIER_nondet__Bool ();
          J_6 = __VERIFIER_nondet_int ();
          if (((J_6 <= -1000000000) || (J_6 >= 1000000000)))
              abort ();
          N_6 = __VERIFIER_nondet_int ();
          if (((N_6 <= -1000000000) || (N_6 >= 1000000000)))
              abort ();
          K_6 = main__bb_0;
          L_6 = main__bb_1;
          M_6 = main__bb_2;
          C_6 = main__bb_3;
          if (!
              (((!D_6) || (!B_6) || (!A_6)) && ((!I_6) || (!E_6) || (!D_6))
               && ((!I_6) || (!H_6) || (J_6 == G_6)) && ((!I_6) || (!H_6)
                                                         || (N_6 == J_6))
               && ((!I_6) || (!H_6) || (!F_6)) && ((!D_6)
                                                   || (G_6 ==
                                                       (C_6 + (-1 * M_6))))
               && ((!D_6) || (!((M_6 <= C_6) == E_6))) && ((!D_6)
                                                           || (D_6 && A_6))
               && ((!H_6) || (I_6 && H_6)) && ((!I_6)
                                               || (!((1 <= G_6) == F_6)))
               && ((!I_6) || (I_6 && D_6)) && H_6 && (B_6 == (C_6 == M_6))))
              abort ();
          main__bb_0 = K_6;
          main__bb_1 = L_6;
          main__bb_2 = M_6;
          main__bb_3 = N_6;
          goto main__bb_0;

      default:
          abort ();
      }
  main__bb_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_6 = __VERIFIER_nondet__Bool ();
          B_6 = __VERIFIER_nondet__Bool ();
          D_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet__Bool ();
          F_6 = __VERIFIER_nondet__Bool ();
          G_6 = __VERIFIER_nondet_int ();
          if (((G_6 <= -1000000000) || (G_6 >= 1000000000)))
              abort ();
          H_6 = __VERIFIER_nondet__Bool ();
          I_6 = __VERIFIER_nondet__Bool ();
          J_6 = __VERIFIER_nondet_int ();
          if (((J_6 <= -1000000000) || (J_6 >= 1000000000)))
              abort ();
          N_6 = __VERIFIER_nondet_int ();
          if (((N_6 <= -1000000000) || (N_6 >= 1000000000)))
              abort ();
          K_6 = main__bb_0;
          L_6 = main__bb_1;
          M_6 = main__bb_2;
          C_6 = main__bb_3;
          if (!
              (((!D_6) || (!B_6) || (!A_6)) && ((!I_6) || (!E_6) || (!D_6))
               && ((!I_6) || (!H_6) || (J_6 == G_6)) && ((!I_6) || (!H_6)
                                                         || (N_6 == J_6))
               && ((!I_6) || (!H_6) || (!F_6)) && ((!D_6)
                                                   || (G_6 ==
                                                       (C_6 + (-1 * M_6))))
               && ((!D_6) || (!((M_6 <= C_6) == E_6))) && ((!D_6)
                                                           || (D_6 && A_6))
               && ((!H_6) || (I_6 && H_6)) && ((!I_6)
                                               || (!((1 <= G_6) == F_6)))
               && ((!I_6) || (I_6 && D_6)) && H_6 && (B_6 == (C_6 == M_6))))
              abort ();
          main__bb_0 = K_6;
          main__bb_1 = L_6;
          main__bb_2 = M_6;
          main__bb_3 = N_6;
          goto main__bb_0;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          G_4 = __VERIFIER_nondet_int ();
          if (((G_4 <= -1000000000) || (G_4 >= 1000000000)))
              abort ();
          H_4 = __VERIFIER_nondet__Bool ();
          I1_4 = __VERIFIER_nondet__Bool ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet__Bool ();
          G1_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet__Bool ();
          L_4 = __VERIFIER_nondet__Bool ();
          E1_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet__Bool ();
          C1_4 = __VERIFIER_nondet__Bool ();
          O_4 = __VERIFIER_nondet__Bool ();
          P_4 = __VERIFIER_nondet__Bool ();
          Q_4 = __VERIFIER_nondet_int ();
          if (((Q_4 <= -1000000000) || (Q_4 >= 1000000000)))
              abort ();
          R_4 = __VERIFIER_nondet__Bool ();
          S_4 = __VERIFIER_nondet__Bool ();
          T_4 = __VERIFIER_nondet_int ();
          if (((T_4 <= -1000000000) || (T_4 >= 1000000000)))
              abort ();
          U_4 = __VERIFIER_nondet_int ();
          if (((U_4 <= -1000000000) || (U_4 >= 1000000000)))
              abort ();
          V_4 = __VERIFIER_nondet__Bool ();
          W_4 = __VERIFIER_nondet_int ();
          if (((W_4 <= -1000000000) || (W_4 >= 1000000000)))
              abort ();
          X_4 = __VERIFIER_nondet__Bool ();
          Y_4 = __VERIFIER_nondet_int ();
          if (((Y_4 <= -1000000000) || (Y_4 >= 1000000000)))
              abort ();
          Z_4 = __VERIFIER_nondet_int ();
          if (((Z_4 <= -1000000000) || (Z_4 >= 1000000000)))
              abort ();
          H1_4 = __VERIFIER_nondet__Bool ();
          F1_4 = __VERIFIER_nondet__Bool ();
          B1_4 = __VERIFIER_nondet__Bool ();
          A1_4 = main__bb_0;
          D1_4 = main__bb_1;
          M_4 = main__bb_2;
          C_4 = main__bb_3;
          if (!
              (((!J_4) || (!D_4) || (E_4 == C_4))
               && ((!J_4) || (!D_4) || (G_4 == E_4)) && ((!J_4) || (!D_4)
                                                         || B_4) && ((!O_4)
                                                                     || (!L_4)
                                                                     ||
                                                                     (!D_4))
               && ((!P_4) || (!O_4) || (Q_4 == M_4)) && ((!P_4) || (!O_4)
                                                         || (U_4 == Q_4))
               && ((!P_4) || (!O_4) || L_4) && ((!R_4) || (!D_4) || (!B_4))
               && ((T_4 == 0) || (!S_4) || (!R_4)) && ((U_4 == T_4) || (!S_4)
                                                       || (!R_4)) && (N_4
                                                                      ||
                                                                      (!S_4)
                                                                      ||
                                                                      (!R_4))
               && ((!V_4) || K_4 || (!J_4)) && ((!H1_4) || (H1_4 && V_4)
                                                || (X_4 && H1_4)) && ((!H1_4)
                                                                      ||
                                                                      (!V_4)
                                                                      || (W_4
                                                                          ==
                                                                          0))
               && ((!H1_4) || (!V_4) || (Z_4 == W_4)) && ((!X_4)
                                                          || (R_4 && S_4)
                                                          || (P_4 && O_4))
               && ((!X_4) || (!H1_4) || (Y_4 == U_4)) && ((!X_4)
                                                          || (Z_4 == Y_4)
                                                          || (!H1_4))
               && ((!D_4) || (A_4 == (C_4 + (-1 * M_4)))) && ((!D_4)
                                                              ||
                                                              (!((M_4 <=
                                                                  C_4) ==
                                                                 B_4)))
               && ((!D_4) || (O_4 && D_4)) && ((!J_4)
                                               || (F_4 == (M_4 + (-1 * G_4))))
               && ((!J_4) || (!((1 <= F_4) == I_4))) && ((!J_4)
                                                         ||
                                                         (!((1 <= G_4) ==
                                                            H_4))) && ((!J_4)
                                                                       || (K_4
                                                                           ==
                                                                           (I_4
                                                                            ||
                                                                            H_4)))
               && ((!J_4) || (J_4 && D_4)) && ((!P_4) || O_4) && ((!R_4)
                                                                  ||
                                                                  (!((1 <=
                                                                      A_4) ==
                                                                     N_4)))
               && ((!R_4) || (R_4 && D_4)) && (R_4 || (!S_4)) && ((!V_4)
                                                                  || (V_4
                                                                      && J_4))
               && ((!H1_4) || (!((1 <= Z_4) == C1_4))) && ((!H1_4)
                                                           ||
                                                           (!((A1_4 <= 0) ==
                                                              B1_4)))
               && ((!H1_4) || (!((D1_4 <= 0) == E1_4))) && ((!H1_4)
                                                            || (F1_4 ==
                                                                (C1_4
                                                                 && B1_4)))
               && ((!H1_4) || (G1_4 == (F1_4 && E1_4))) && ((!H1_4) || G1_4)
               && ((!I1_4) || (I1_4 && H1_4)) && I1_4
               && (L_4 == (C_4 == M_4))))
              abort ();
          CHC_COMP_UNUSED_7 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 2:
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet__Bool ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet__Bool ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          M_2 = __VERIFIER_nondet_int ();
          if (((M_2 <= -1000000000) || (M_2 >= 1000000000)))
              abort ();
          N_2 = __VERIFIER_nondet_int ();
          if (((N_2 <= -1000000000) || (N_2 >= 1000000000)))
              abort ();
          O_2 = __VERIFIER_nondet__Bool ();
          P_2 = __VERIFIER_nondet__Bool ();
          Q_2 = __VERIFIER_nondet_int ();
          if (((Q_2 <= -1000000000) || (Q_2 >= 1000000000)))
              abort ();
          T_2 = __VERIFIER_nondet_int ();
          if (((T_2 <= -1000000000) || (T_2 >= 1000000000)))
              abort ();
          U_2 = __VERIFIER_nondet_int ();
          if (((U_2 <= -1000000000) || (U_2 >= 1000000000)))
              abort ();
          R_2 = main__bb_0;
          S_2 = main__bb_1;
          H_2 = main__bb_2;
          E_2 = main__bb_3;
          if (!
              (((!F_2) || (!B_2) || (!A_2))
               && ((!P_2) || (!F_2) || (G_2 == E_2)) && ((!P_2) || (!F_2)
                                                         || (L_2 == G_2))
               && ((!P_2) || (!F_2) || D_2) && ((!P_2) || (!O_2)
                                                || (N_2 == L_2)) && ((!P_2)
                                                                     || (!O_2)
                                                                     || (Q_2
                                                                         ==
                                                                         M_2))
               && ((!P_2) || (!O_2) || (T_2 == Q_2)) && ((!P_2) || (!O_2)
                                                         || (U_2 == N_2))
               && ((!P_2) || (!O_2) || (!K_2)) && ((!F_2)
                                                   || (C_2 ==
                                                       (E_2 + (-1 * H_2))))
               && ((!F_2) || (!((H_2 <= E_2) == D_2))) && ((!F_2)
                                                           || (F_2 && A_2))
               && ((!O_2) || (P_2 && O_2)) && ((!P_2)
                                               || (M_2 == (H_2 + (-1 * L_2))))
               && ((!P_2) || (!((1 <= L_2) == I_2))) && ((!P_2)
                                                         ||
                                                         (!((1 <= M_2) ==
                                                            J_2))) && ((!P_2)
                                                                       || (K_2
                                                                           ==
                                                                           (J_2
                                                                            ||
                                                                            I_2)))
               && ((!P_2) || (P_2 && F_2)) && O_2 && (B_2 == (E_2 == H_2))))
              abort ();
          main__lr_ph__lr_ph_split_crit_edge_i_0 = R_2;
          main__lr_ph__lr_ph_split_crit_edge_i_1 = S_2;
          main__lr_ph__lr_ph_split_crit_edge_i_2 = T_2;
          main__lr_ph__lr_ph_split_crit_edge_i_3 = U_2;
          B_5 = __VERIFIER_nondet__Bool ();
          C_5 = __VERIFIER_nondet__Bool ();
          D_5 = __VERIFIER_nondet_int ();
          if (((D_5 <= -1000000000) || (D_5 >= 1000000000)))
              abort ();
          H_5 = __VERIFIER_nondet_int ();
          if (((H_5 <= -1000000000) || (H_5 >= 1000000000)))
              abort ();
          E_5 = main__lr_ph__lr_ph_split_crit_edge_i_0;
          F_5 = main__lr_ph__lr_ph_split_crit_edge_i_1;
          G_5 = main__lr_ph__lr_ph_split_crit_edge_i_2;
          A_5 = main__lr_ph__lr_ph_split_crit_edge_i_3;
          if (!
              (((!C_5) || (!B_5) || (H_5 == D_5)) && ((!B_5) || (C_5 && B_5))
               && B_5 && ((!C_5) || (!B_5) || (D_5 == A_5))))
              abort ();
          main__bb_0 = E_5;
          main__bb_1 = F_5;
          main__bb_2 = G_5;
          main__bb_3 = H_5;
          A_6 = __VERIFIER_nondet__Bool ();
          B_6 = __VERIFIER_nondet__Bool ();
          D_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet__Bool ();
          F_6 = __VERIFIER_nondet__Bool ();
          G_6 = __VERIFIER_nondet_int ();
          if (((G_6 <= -1000000000) || (G_6 >= 1000000000)))
              abort ();
          H_6 = __VERIFIER_nondet__Bool ();
          I_6 = __VERIFIER_nondet__Bool ();
          J_6 = __VERIFIER_nondet_int ();
          if (((J_6 <= -1000000000) || (J_6 >= 1000000000)))
              abort ();
          N_6 = __VERIFIER_nondet_int ();
          if (((N_6 <= -1000000000) || (N_6 >= 1000000000)))
              abort ();
          K_6 = main__bb_0;
          L_6 = main__bb_1;
          M_6 = main__bb_2;
          C_6 = main__bb_3;
          if (!
              (((!D_6) || (!B_6) || (!A_6)) && ((!I_6) || (!E_6) || (!D_6))
               && ((!I_6) || (!H_6) || (J_6 == G_6)) && ((!I_6) || (!H_6)
                                                         || (N_6 == J_6))
               && ((!I_6) || (!H_6) || (!F_6)) && ((!D_6)
                                                   || (G_6 ==
                                                       (C_6 + (-1 * M_6))))
               && ((!D_6) || (!((M_6 <= C_6) == E_6))) && ((!D_6)
                                                           || (D_6 && A_6))
               && ((!H_6) || (I_6 && H_6)) && ((!I_6)
                                               || (!((1 <= G_6) == F_6)))
               && ((!I_6) || (I_6 && D_6)) && H_6 && (B_6 == (C_6 == M_6))))
              abort ();
          main__bb_0 = K_6;
          main__bb_1 = L_6;
          main__bb_2 = M_6;
          main__bb_3 = N_6;
          goto main__bb_0;

      default:
          abort ();
      }

    // return expression

}

