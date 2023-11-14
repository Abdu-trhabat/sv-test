// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/Addition02WithOverflowBug_false-no-overflow_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Addition02WithOverflowBug_false-no-overflow_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__lr_ph_i_0;
    int main__lr_ph_i_1;
    int main__lr_ph_i_2;
    int main__lr_ph_i_3;
    _Bool A_1;
    _Bool B_1;
    int C_1;
    _Bool D_1;
    _Bool E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    _Bool A_2;
    _Bool B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    _Bool J_2;
    int K_2;
    int L_2;
    _Bool M_2;
    int N_2;
    _Bool O_2;
    int P_2;
    int Q_2;
    int R_2;
    _Bool S_2;
    _Bool T_2;
    int U_2;
    int V_2;
    int W_2;
    int X_2;
    int Y_2;
    _Bool A_3;
    _Bool B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool A_4;
    _Bool B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int I_4;
    _Bool J_4;
    int K_4;
    int L_4;
    _Bool M_4;
    int N_4;
    int O_4;
    _Bool P_4;
    int Q_4;
    _Bool R_4;
    int S_4;
    int T_4;
    _Bool U_4;
    int V_4;
    int W_4;
    int X_4;
    int Y_4;
    int Z_4;
    _Bool A1_4;
    _Bool B1_4;
    _Bool C1_4;
    _Bool CHC_COMP_UNUSED_5;

    if (((main__lr_ph_i_0 <= -1000000000) || (main__lr_ph_i_0 >= 1000000000))
        || ((main__lr_ph_i_1 <= -1000000000)
            || (main__lr_ph_i_1 >= 1000000000))
        || ((main__lr_ph_i_2 <= -1000000000)
            || (main__lr_ph_i_2 >= 1000000000))
        || ((main__lr_ph_i_3 <= -1000000000)
            || (main__lr_ph_i_3 >= 1000000000)) || ((C_1 <= -1000000000)
                                                    || (C_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((N_2 <= -1000000000) || (N_2 >= 1000000000))
        || ((P_2 <= -1000000000) || (P_2 >= 1000000000))
        || ((Q_2 <= -1000000000) || (Q_2 >= 1000000000))
        || ((R_2 <= -1000000000) || (R_2 >= 1000000000))
        || ((U_2 <= -1000000000) || (U_2 >= 1000000000))
        || ((V_2 <= -1000000000) || (V_2 >= 1000000000))
        || ((W_2 <= -1000000000) || (W_2 >= 1000000000))
        || ((X_2 <= -1000000000) || (X_2 >= 1000000000))
        || ((Y_2 <= -1000000000) || (Y_2 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((I_4 <= -1000000000) || (I_4 >= 1000000000))
        || ((K_4 <= -1000000000) || (K_4 >= 1000000000))
        || ((L_4 <= -1000000000) || (L_4 >= 1000000000))
        || ((N_4 <= -1000000000) || (N_4 >= 1000000000))
        || ((O_4 <= -1000000000) || (O_4 >= 1000000000))
        || ((Q_4 <= -1000000000) || (Q_4 >= 1000000000))
        || ((S_4 <= -1000000000) || (S_4 >= 1000000000))
        || ((T_4 <= -1000000000) || (T_4 >= 1000000000))
        || ((V_4 <= -1000000000) || (V_4 >= 1000000000))
        || ((W_4 <= -1000000000) || (W_4 >= 1000000000))
        || ((X_4 <= -1000000000) || (X_4 >= 1000000000))
        || ((Y_4 <= -1000000000) || (Y_4 >= 1000000000))
        || ((Z_4 <= -1000000000) || (Z_4 >= 1000000000)))
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
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
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
          J_3 = __VERIFIER_nondet__Bool ();
          if (!
              (((!B_3) || (C_3 == D_3) || (!I_3))
               && ((!B_3) || (F_3 == C_3) || (!I_3)) && ((!B_3) || A_3
                                                         || (!I_3)) && ((!I_3)
                                                                        ||
                                                                        (H_3
                                                                         ==
                                                                         (F_3
                                                                          ==
                                                                          G_3)))
               && ((!I_3) || (G_3 == (D_3 + (-1 * E_3)))) && ((!I_3)
                                                              || (B_3 && I_3))
               && ((!I_3) || (!H_3)) && ((!J_3) || (J_3 && I_3)) && J_3
               && (A_3 == (E_3 == 0))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet__Bool ();
          B_1 = __VERIFIER_nondet__Bool ();
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
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
          if (!
              (((!E_1) || (!B_1) || (!A_1))
               && ((!E_1) || (!D_1) || (C_1 == H_1)) && ((!E_1) || (!D_1)
                                                         || (F_1 == G_1))
               && ((!E_1) || (!D_1) || (I_1 == C_1)) && ((!E_1) || (!D_1)
                                                         || (J_1 == F_1))
               && ((!D_1) || (E_1 && D_1)) && ((!E_1) || (E_1 && A_1)) && D_1
               && (B_1 == (H_1 == 0))))
              abort ();
          main__lr_ph_i_0 = G_1;
          main__lr_ph_i_1 = H_1;
          main__lr_ph_i_2 = I_1;
          main__lr_ph_i_3 = J_1;
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          M_2 = __VERIFIER_nondet__Bool ();
          N_2 = __VERIFIER_nondet_int ();
          if (((N_2 <= -1000000000) || (N_2 >= 1000000000)))
              abort ();
          O_2 = __VERIFIER_nondet__Bool ();
          P_2 = __VERIFIER_nondet_int ();
          if (((P_2 <= -1000000000) || (P_2 >= 1000000000)))
              abort ();
          Q_2 = __VERIFIER_nondet_int ();
          if (((Q_2 <= -1000000000) || (Q_2 >= 1000000000)))
              abort ();
          R_2 = __VERIFIER_nondet_int ();
          if (((R_2 <= -1000000000) || (R_2 >= 1000000000)))
              abort ();
          S_2 = __VERIFIER_nondet__Bool ();
          T_2 = __VERIFIER_nondet__Bool ();
          U_2 = __VERIFIER_nondet_int ();
          if (((U_2 <= -1000000000) || (U_2 >= 1000000000)))
              abort ();
          X_2 = __VERIFIER_nondet_int ();
          if (((X_2 <= -1000000000) || (X_2 >= 1000000000)))
              abort ();
          Y_2 = __VERIFIER_nondet_int ();
          if (((Y_2 <= -1000000000) || (Y_2 >= 1000000000)))
              abort ();
          V_2 = main__lr_ph_i_0;
          W_2 = main__lr_ph_i_1;
          D_2 = main__lr_ph_i_2;
          C_2 = main__lr_ph_i_3;
          if (!
              (((!J_2) || (!B_2) || (!A_2)) && ((!M_2) || (!A_2) || B_2)
               && ((!T_2) || (T_2 && M_2) || (T_2 && J_2)) && ((!T_2)
                                                               || (!J_2)
                                                               || (I_2 ==
                                                                   E_2))
               && ((!T_2) || (!J_2) || (K_2 == F_2)) && ((!T_2) || (!J_2)
                                                         || (P_2 == K_2))
               && ((!T_2) || (!J_2) || (Q_2 == I_2)) && ((!T_2) || (!M_2)
                                                         || (L_2 == G_2))
               && ((!T_2) || (!M_2) || (N_2 == H_2)) && ((!T_2) || (!M_2)
                                                         || (P_2 == N_2))
               && ((!T_2) || (!M_2) || (Q_2 == L_2)) && ((!T_2) || (!S_2)
                                                         || (R_2 == P_2))
               && ((!T_2) || (!S_2) || (U_2 == Q_2)) && ((!T_2) || (!S_2)
                                                         || (X_2 == R_2))
               && ((!T_2) || (!S_2) || (Y_2 == U_2)) && ((!T_2) || (!S_2)
                                                         || (!O_2)) && ((!J_2)
                                                                        ||
                                                                        (E_2
                                                                         ==
                                                                         (C_2
                                                                          +
                                                                          -1)))
               && ((!J_2) || (F_2 == (D_2 + 1))) && ((!J_2) || (J_2 && A_2))
               && ((!M_2) || (G_2 == (C_2 + 1))) && ((!M_2)
                                                     || (H_2 == (D_2 + -1)))
               && ((!M_2) || (M_2 && A_2)) && ((!S_2) || (T_2 && S_2))
               && ((!T_2) || (O_2 == (P_2 == 0))) && S_2
               && (!((D_2 <= 0) == B_2))))
              abort ();
          main__lr_ph_i_0 = V_2;
          main__lr_ph_i_1 = W_2;
          main__lr_ph_i_2 = X_2;
          main__lr_ph_i_3 = Y_2;
          goto main__lr_ph_i_0;

      default:
          abort ();
      }
  main__lr_ph_i_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = __VERIFIER_nondet__Bool ();
          B_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          G_4 = __VERIFIER_nondet_int ();
          if (((G_4 <= -1000000000) || (G_4 >= 1000000000)))
              abort ();
          H_4 = __VERIFIER_nondet_int ();
          if (((H_4 <= -1000000000) || (H_4 >= 1000000000)))
              abort ();
          I_4 = __VERIFIER_nondet_int ();
          if (((I_4 <= -1000000000) || (I_4 >= 1000000000)))
              abort ();
          J_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet_int ();
          if (((K_4 <= -1000000000) || (K_4 >= 1000000000)))
              abort ();
          L_4 = __VERIFIER_nondet_int ();
          if (((L_4 <= -1000000000) || (L_4 >= 1000000000)))
              abort ();
          M_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet_int ();
          if (((N_4 <= -1000000000) || (N_4 >= 1000000000)))
              abort ();
          C1_4 = __VERIFIER_nondet__Bool ();
          O_4 = __VERIFIER_nondet_int ();
          if (((O_4 <= -1000000000) || (O_4 >= 1000000000)))
              abort ();
          P_4 = __VERIFIER_nondet__Bool ();
          A1_4 = __VERIFIER_nondet__Bool ();
          Q_4 = __VERIFIER_nondet_int ();
          if (((Q_4 <= -1000000000) || (Q_4 >= 1000000000)))
              abort ();
          R_4 = __VERIFIER_nondet__Bool ();
          S_4 = __VERIFIER_nondet_int ();
          if (((S_4 <= -1000000000) || (S_4 >= 1000000000)))
              abort ();
          T_4 = __VERIFIER_nondet_int ();
          if (((T_4 <= -1000000000) || (T_4 >= 1000000000)))
              abort ();
          U_4 = __VERIFIER_nondet__Bool ();
          V_4 = __VERIFIER_nondet_int ();
          if (((V_4 <= -1000000000) || (V_4 >= 1000000000)))
              abort ();
          Y_4 = __VERIFIER_nondet_int ();
          if (((Y_4 <= -1000000000) || (Y_4 >= 1000000000)))
              abort ();
          Z_4 = __VERIFIER_nondet_int ();
          if (((Z_4 <= -1000000000) || (Z_4 >= 1000000000)))
              abort ();
          B1_4 = __VERIFIER_nondet__Bool ();
          W_4 = main__lr_ph_i_0;
          X_4 = main__lr_ph_i_1;
          D_4 = main__lr_ph_i_2;
          C_4 = main__lr_ph_i_3;
          if (!
              (((!J_4) || (!B_4) || (!A_4)) && (B_4 || (!M_4) || (!A_4))
               && ((!R_4) || (R_4 && M_4) || (R_4 && J_4)) && ((!R_4)
                                                               || (!J_4)
                                                               || (Q_4 ==
                                                                   I_4))
               && ((!R_4) || (!J_4) || (I_4 == E_4)) && ((!R_4) || (!J_4)
                                                         || (K_4 == F_4))
               && ((!R_4) || (!J_4) || (O_4 == K_4)) && ((!R_4) || (!M_4)
                                                         || (N_4 == H_4))
               && ((!R_4) || (!M_4) || (Q_4 == L_4)) && ((!R_4) || (!M_4)
                                                         || (L_4 == G_4))
               && ((!R_4) || (!M_4) || (O_4 == N_4)) && ((!U_4) || (!R_4)
                                                         || (S_4 == Q_4))
               && ((!U_4) || (!R_4) || (T_4 == S_4)) && ((!U_4) || (!R_4)
                                                         || P_4) && ((!U_4)
                                                                     || (V_4
                                                                         ==
                                                                         T_4)
                                                                     ||
                                                                     (!B1_4))
               && ((!U_4) || (Y_4 == V_4) || (!B1_4)) && ((!J_4)
                                                          || (E_4 ==
                                                              (C_4 + -1)))
               && ((!J_4) || (F_4 == (D_4 + 1))) && ((!J_4) || (J_4 && A_4))
               && ((!M_4) || (G_4 == (C_4 + 1))) && ((!M_4)
                                                     || (H_4 == (D_4 + -1)))
               && ((!M_4) || (M_4 && A_4)) && ((!R_4) || (P_4 == (O_4 == 0)))
               && ((!B1_4) || (A1_4 == (Y_4 == Z_4))) && ((!B1_4)
                                                          || (Z_4 ==
                                                              (W_4 +
                                                               (-1 * X_4))))
               && ((!B1_4) || (U_4 && B1_4)) && ((!B1_4) || (!A1_4))
               && ((!C1_4) || (C1_4 && B1_4)) && ((!U_4) || (U_4 && R_4))
               && C1_4 && (!((D_4 <= 0) == B_4))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          M_2 = __VERIFIER_nondet__Bool ();
          N_2 = __VERIFIER_nondet_int ();
          if (((N_2 <= -1000000000) || (N_2 >= 1000000000)))
              abort ();
          O_2 = __VERIFIER_nondet__Bool ();
          P_2 = __VERIFIER_nondet_int ();
          if (((P_2 <= -1000000000) || (P_2 >= 1000000000)))
              abort ();
          Q_2 = __VERIFIER_nondet_int ();
          if (((Q_2 <= -1000000000) || (Q_2 >= 1000000000)))
              abort ();
          R_2 = __VERIFIER_nondet_int ();
          if (((R_2 <= -1000000000) || (R_2 >= 1000000000)))
              abort ();
          S_2 = __VERIFIER_nondet__Bool ();
          T_2 = __VERIFIER_nondet__Bool ();
          U_2 = __VERIFIER_nondet_int ();
          if (((U_2 <= -1000000000) || (U_2 >= 1000000000)))
              abort ();
          X_2 = __VERIFIER_nondet_int ();
          if (((X_2 <= -1000000000) || (X_2 >= 1000000000)))
              abort ();
          Y_2 = __VERIFIER_nondet_int ();
          if (((Y_2 <= -1000000000) || (Y_2 >= 1000000000)))
              abort ();
          V_2 = main__lr_ph_i_0;
          W_2 = main__lr_ph_i_1;
          D_2 = main__lr_ph_i_2;
          C_2 = main__lr_ph_i_3;
          if (!
              (((!J_2) || (!B_2) || (!A_2)) && ((!M_2) || (!A_2) || B_2)
               && ((!T_2) || (T_2 && M_2) || (T_2 && J_2)) && ((!T_2)
                                                               || (!J_2)
                                                               || (I_2 ==
                                                                   E_2))
               && ((!T_2) || (!J_2) || (K_2 == F_2)) && ((!T_2) || (!J_2)
                                                         || (P_2 == K_2))
               && ((!T_2) || (!J_2) || (Q_2 == I_2)) && ((!T_2) || (!M_2)
                                                         || (L_2 == G_2))
               && ((!T_2) || (!M_2) || (N_2 == H_2)) && ((!T_2) || (!M_2)
                                                         || (P_2 == N_2))
               && ((!T_2) || (!M_2) || (Q_2 == L_2)) && ((!T_2) || (!S_2)
                                                         || (R_2 == P_2))
               && ((!T_2) || (!S_2) || (U_2 == Q_2)) && ((!T_2) || (!S_2)
                                                         || (X_2 == R_2))
               && ((!T_2) || (!S_2) || (Y_2 == U_2)) && ((!T_2) || (!S_2)
                                                         || (!O_2)) && ((!J_2)
                                                                        ||
                                                                        (E_2
                                                                         ==
                                                                         (C_2
                                                                          +
                                                                          -1)))
               && ((!J_2) || (F_2 == (D_2 + 1))) && ((!J_2) || (J_2 && A_2))
               && ((!M_2) || (G_2 == (C_2 + 1))) && ((!M_2)
                                                     || (H_2 == (D_2 + -1)))
               && ((!M_2) || (M_2 && A_2)) && ((!S_2) || (T_2 && S_2))
               && ((!T_2) || (O_2 == (P_2 == 0))) && S_2
               && (!((D_2 <= 0) == B_2))))
              abort ();
          main__lr_ph_i_0 = V_2;
          main__lr_ph_i_1 = W_2;
          main__lr_ph_i_2 = X_2;
          main__lr_ph_i_3 = Y_2;
          goto main__lr_ph_i_0;

      default:
          abort ();
      }

    // return expression

}

