// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/MultCommutative_true-unreach-call_true-no-overflow_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "MultCommutative_true-unreach-call_true-no-overflow_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_tailrecurse_i_0;
    int main_tailrecurse_i_1;
    int main_tailrecurse_i_2;
    int main_tailrecurse_i_3;
    int main_tailrecurse_outer_i3_0;
    int main_tailrecurse_outer_i3_1;
    int main_tailrecurse_outer_i3_2;
    int main_tailrecurse_outer_i3_3;
    int main_tailrecurse_outer_i3_4;
    int main_tailrecurse_outer_i_0;
    int main_tailrecurse_outer_i_1;
    int main_tailrecurse_outer_i_2;
    int main_tailrecurse_outer_i_3;
    int main_tailrecurse_i5_0;
    int main_tailrecurse_i5_1;
    int main_tailrecurse_i5_2;
    int main_tailrecurse_i5_3;
    int main_tailrecurse_i5_4;
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
    int A_2;
    _Bool B_2;
    int C_2;
    _Bool D_2;
    int E_2;
    _Bool F_2;
    _Bool G_2;
    int H_2;
    int I_2;
    int J_2;
    int K_2;
    int L_2;
    _Bool M_2;
    _Bool N_2;
    int O_2;
    int P_2;
    int Q_2;
    int R_2;
    int S_2;
    int A_3;
    _Bool B_3;
    _Bool C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int A_4;
    _Bool B_4;
    int C_4;
    _Bool D_4;
    _Bool E_4;
    int F_4;
    int G_4;
    int H_4;
    int I_4;
    int J_4;
    int A_5;
    _Bool B_5;
    int C_5;
    _Bool D_5;
    int E_5;
    int F_5;
    _Bool G_5;
    int H_5;
    _Bool I_5;
    int J_5;
    int K_5;
    _Bool L_5;
    _Bool M_5;
    int N_5;
    int O_5;
    int P_5;
    int Q_5;
    int R_5;
    int S_5;
    int A_6;
    _Bool B_6;
    int C_6;
    _Bool D_6;
    int E_6;
    _Bool F_6;
    _Bool G_6;
    int H_6;
    int I_6;
    int J_6;
    int K_6;
    int L_6;
    _Bool M_6;
    _Bool N_6;
    int O_6;
    int P_6;
    int Q_6;
    int R_6;
    int S_6;
    int T_6;
    int A_7;
    _Bool B_7;
    _Bool C_7;
    int D_7;
    int E_7;
    int F_7;
    int G_7;
    int H_7;
    int I_7;
    int A_8;
    _Bool B_8;
    int C_8;
    _Bool D_8;
    _Bool E_8;
    int F_8;
    int G_8;
    int H_8;
    int I_8;
    int J_8;
    int K_8;
    int A_9;
    _Bool B_9;
    int C_9;
    _Bool D_9;
    int E_9;
    int F_9;
    _Bool G_9;
    int H_9;
    _Bool I_9;
    int J_9;
    int K_9;
    int L_9;
    int M_9;
    _Bool N_9;
    _Bool O_9;
    int P_9;
    _Bool Q_9;
    _Bool R_9;
    _Bool S_9;
    _Bool T_9;
    _Bool U_9;
    _Bool CHC_COMP_UNUSED_10;

    if (((main_tailrecurse_i_0 <= -1000000000)
         || (main_tailrecurse_i_0 >= 1000000000))
        || ((main_tailrecurse_i_1 <= -1000000000)
            || (main_tailrecurse_i_1 >= 1000000000))
        || ((main_tailrecurse_i_2 <= -1000000000)
            || (main_tailrecurse_i_2 >= 1000000000))
        || ((main_tailrecurse_i_3 <= -1000000000)
            || (main_tailrecurse_i_3 >= 1000000000))
        || ((main_tailrecurse_outer_i3_0 <= -1000000000)
            || (main_tailrecurse_outer_i3_0 >= 1000000000))
        || ((main_tailrecurse_outer_i3_1 <= -1000000000)
            || (main_tailrecurse_outer_i3_1 >= 1000000000))
        || ((main_tailrecurse_outer_i3_2 <= -1000000000)
            || (main_tailrecurse_outer_i3_2 >= 1000000000))
        || ((main_tailrecurse_outer_i3_3 <= -1000000000)
            || (main_tailrecurse_outer_i3_3 >= 1000000000))
        || ((main_tailrecurse_outer_i3_4 <= -1000000000)
            || (main_tailrecurse_outer_i3_4 >= 1000000000))
        || ((main_tailrecurse_outer_i_0 <= -1000000000)
            || (main_tailrecurse_outer_i_0 >= 1000000000))
        || ((main_tailrecurse_outer_i_1 <= -1000000000)
            || (main_tailrecurse_outer_i_1 >= 1000000000))
        || ((main_tailrecurse_outer_i_2 <= -1000000000)
            || (main_tailrecurse_outer_i_2 >= 1000000000))
        || ((main_tailrecurse_outer_i_3 <= -1000000000)
            || (main_tailrecurse_outer_i_3 >= 1000000000))
        || ((main_tailrecurse_i5_0 <= -1000000000)
            || (main_tailrecurse_i5_0 >= 1000000000))
        || ((main_tailrecurse_i5_1 <= -1000000000)
            || (main_tailrecurse_i5_1 >= 1000000000))
        || ((main_tailrecurse_i5_2 <= -1000000000)
            || (main_tailrecurse_i5_2 >= 1000000000))
        || ((main_tailrecurse_i5_3 <= -1000000000)
            || (main_tailrecurse_i5_3 >= 1000000000))
        || ((main_tailrecurse_i5_4 <= -1000000000)
            || (main_tailrecurse_i5_4 >= 1000000000)) || ((C_1 <= -1000000000)
                                                          || (C_1 >=
                                                              1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((O_2 <= -1000000000) || (O_2 >= 1000000000))
        || ((P_2 <= -1000000000) || (P_2 >= 1000000000))
        || ((Q_2 <= -1000000000) || (Q_2 >= 1000000000))
        || ((R_2 <= -1000000000) || (R_2 >= 1000000000))
        || ((S_2 <= -1000000000) || (S_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((I_4 <= -1000000000) || (I_4 >= 1000000000))
        || ((J_4 <= -1000000000) || (J_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((H_5 <= -1000000000) || (H_5 >= 1000000000))
        || ((J_5 <= -1000000000) || (J_5 >= 1000000000))
        || ((K_5 <= -1000000000) || (K_5 >= 1000000000))
        || ((N_5 <= -1000000000) || (N_5 >= 1000000000))
        || ((O_5 <= -1000000000) || (O_5 >= 1000000000))
        || ((P_5 <= -1000000000) || (P_5 >= 1000000000))
        || ((Q_5 <= -1000000000) || (Q_5 >= 1000000000))
        || ((R_5 <= -1000000000) || (R_5 >= 1000000000))
        || ((S_5 <= -1000000000) || (S_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((H_6 <= -1000000000) || (H_6 >= 1000000000))
        || ((I_6 <= -1000000000) || (I_6 >= 1000000000))
        || ((J_6 <= -1000000000) || (J_6 >= 1000000000))
        || ((K_6 <= -1000000000) || (K_6 >= 1000000000))
        || ((L_6 <= -1000000000) || (L_6 >= 1000000000))
        || ((O_6 <= -1000000000) || (O_6 >= 1000000000))
        || ((P_6 <= -1000000000) || (P_6 >= 1000000000))
        || ((Q_6 <= -1000000000) || (Q_6 >= 1000000000))
        || ((R_6 <= -1000000000) || (R_6 >= 1000000000))
        || ((S_6 <= -1000000000) || (S_6 >= 1000000000))
        || ((T_6 <= -1000000000) || (T_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((G_7 <= -1000000000) || (G_7 >= 1000000000))
        || ((H_7 <= -1000000000) || (H_7 >= 1000000000))
        || ((I_7 <= -1000000000) || (I_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((H_8 <= -1000000000) || (H_8 >= 1000000000))
        || ((I_8 <= -1000000000) || (I_8 >= 1000000000))
        || ((J_8 <= -1000000000) || (J_8 >= 1000000000))
        || ((K_8 <= -1000000000) || (K_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000))
        || ((F_9 <= -1000000000) || (F_9 >= 1000000000))
        || ((H_9 <= -1000000000) || (H_9 >= 1000000000))
        || ((J_9 <= -1000000000) || (J_9 >= 1000000000))
        || ((K_9 <= -1000000000) || (K_9 >= 1000000000))
        || ((L_9 <= -1000000000) || (L_9 >= 1000000000))
        || ((M_9 <= -1000000000) || (M_9 >= 1000000000))
        || ((P_9 <= -1000000000) || (P_9 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
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
        ((B_1 == ((!(H_1 <= 46340)) || (!(H_1 >= 0))))
         && ((!E_1) || (!D_1) || (C_1 == 0)) && ((!E_1) || (!D_1)
                                                 || (F_1 == H_1)) && ((!E_1)
                                                                      ||
                                                                      (!D_1)
                                                                      || (I_1
                                                                          ==
                                                                          C_1))
         && ((!E_1) || (!D_1) || (J_1 == F_1)) && ((!D_1) || (E_1 && D_1))
         && (!A_1) && (!B_1) && D_1
         && (A_1 == ((!(G_1 <= 46340)) || (!(G_1 >= 0))))))
        abort ();
    main_tailrecurse_outer_i_0 = G_1;
    main_tailrecurse_outer_i_1 = H_1;
    main_tailrecurse_outer_i_2 = I_1;
    main_tailrecurse_outer_i_3 = J_1;
    B_3 = __VERIFIER_nondet__Bool ();
    C_3 = __VERIFIER_nondet__Bool ();
    D_3 = __VERIFIER_nondet_int ();
    if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
        abort ();
    H_3 = __VERIFIER_nondet_int ();
    if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
        abort ();
    E_3 = main_tailrecurse_outer_i_0;
    F_3 = main_tailrecurse_outer_i_1;
    G_3 = main_tailrecurse_outer_i_2;
    A_3 = main_tailrecurse_outer_i_3;
    if (!
        (((!C_3) || (!B_3) || (H_3 == D_3)) && ((!B_3) || (C_3 && B_3)) && B_3
         && ((!C_3) || (!B_3) || (D_3 == A_3))))
        abort ();
    main_tailrecurse_i_0 = E_3;
    main_tailrecurse_i_1 = F_3;
    main_tailrecurse_i_2 = G_3;
    main_tailrecurse_i_3 = H_3;
    B_4 = __VERIFIER_nondet__Bool ();
    C_4 = __VERIFIER_nondet_int ();
    if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
        abort ();
    D_4 = __VERIFIER_nondet__Bool ();
    E_4 = __VERIFIER_nondet__Bool ();
    F_4 = __VERIFIER_nondet_int ();
    if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
        abort ();
    J_4 = __VERIFIER_nondet_int ();
    if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
        abort ();
    G_4 = main_tailrecurse_i_0;
    H_4 = main_tailrecurse_i_1;
    I_4 = main_tailrecurse_i_2;
    A_4 = main_tailrecurse_i_3;
    if (!
        ((!((0 <= A_4) == B_4)) && ((!E_4) || (!D_4) || (F_4 == C_4))
         && ((!E_4) || (!D_4) || (J_4 == F_4)) && ((!E_4) || (!D_4) || B_4)
         && ((!D_4) || (E_4 && D_4)) && D_4 && (C_4 == (-1 * A_4))))
        abort ();
    main_tailrecurse_i_0 = G_4;
    main_tailrecurse_i_1 = H_4;
    main_tailrecurse_i_2 = I_4;
    main_tailrecurse_i_3 = J_4;
    goto main_tailrecurse_i_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_tailrecurse_i5_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet__Bool ();
          D_9 = __VERIFIER_nondet__Bool ();
          E_9 = __VERIFIER_nondet_int ();
          if (((E_9 <= -1000000000) || (E_9 >= 1000000000)))
              abort ();
          F_9 = __VERIFIER_nondet_int ();
          if (((F_9 <= -1000000000) || (F_9 >= 1000000000)))
              abort ();
          G_9 = __VERIFIER_nondet__Bool ();
          I_9 = __VERIFIER_nondet__Bool ();
          J_9 = __VERIFIER_nondet_int ();
          if (((J_9 <= -1000000000) || (J_9 >= 1000000000)))
              abort ();
          L_9 = __VERIFIER_nondet_int ();
          if (((L_9 <= -1000000000) || (L_9 >= 1000000000)))
              abort ();
          N_9 = __VERIFIER_nondet__Bool ();
          O_9 = __VERIFIER_nondet__Bool ();
          Q_9 = __VERIFIER_nondet__Bool ();
          R_9 = __VERIFIER_nondet__Bool ();
          S_9 = __VERIFIER_nondet__Bool ();
          T_9 = __VERIFIER_nondet__Bool ();
          U_9 = __VERIFIER_nondet__Bool ();
          K_9 = main_tailrecurse_i5_0;
          M_9 = main_tailrecurse_i5_1;
          P_9 = main_tailrecurse_i5_2;
          H_9 = main_tailrecurse_i5_3;
          C_9 = main_tailrecurse_i5_4;
          if (!
              ((!((0 <= C_9) == B_9)) && ((!I_9) || (J_9 == H_9) || (!T_9))
               && ((!I_9) || (L_9 == J_9) || (!T_9)) && ((!I_9) || G_9
                                                         || (!T_9)) && ((!I_9)
                                                                        ||
                                                                        (!D_9)
                                                                        ||
                                                                        (F_9
                                                                         ==
                                                                         E_9))
               && ((!I_9) || (!D_9) || (E_9 == C_9)) && ((!I_9) || (!D_9)
                                                         || (!B_9)) && ((!T_9)
                                                                        ||
                                                                        (!((K_9 == L_9) == O_9))) && ((!T_9) || (!((P_9 <= 0) == Q_9))) && ((!T_9) || (!((M_9 <= 0) == N_9))) && ((!T_9) || (R_9 == (O_9 && N_9))) && ((!T_9) || (S_9 == (R_9 && Q_9))) && ((!T_9) || (I_9 && T_9)) && ((!T_9) || S_9) && ((!U_9) || (U_9 && T_9)) && ((!I_9) || (G_9 == (F_9 == 0))) && ((!I_9) || (I_9 && D_9)) && U_9 && (A_9 == (-1 * C_9))))
              abort ();
          CHC_COMP_UNUSED_10 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          B_8 = __VERIFIER_nondet__Bool ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          D_8 = __VERIFIER_nondet__Bool ();
          E_8 = __VERIFIER_nondet__Bool ();
          F_8 = __VERIFIER_nondet_int ();
          if (((F_8 <= -1000000000) || (F_8 >= 1000000000)))
              abort ();
          K_8 = __VERIFIER_nondet_int ();
          if (((K_8 <= -1000000000) || (K_8 >= 1000000000)))
              abort ();
          G_8 = main_tailrecurse_i5_0;
          H_8 = main_tailrecurse_i5_1;
          I_8 = main_tailrecurse_i5_2;
          J_8 = main_tailrecurse_i5_3;
          A_8 = main_tailrecurse_i5_4;
          if (!
              ((!((0 <= A_8) == B_8)) && ((!E_8) || (!D_8) || (F_8 == C_8))
               && ((!E_8) || (!D_8) || (K_8 == F_8)) && ((!E_8) || B_8
                                                         || (!D_8)) && ((!D_8)
                                                                        ||
                                                                        (E_8
                                                                         &&
                                                                         D_8))
               && D_8 && (C_8 == (-1 * A_8))))
              abort ();
          main_tailrecurse_i5_0 = G_8;
          main_tailrecurse_i5_1 = H_8;
          main_tailrecurse_i5_2 = I_8;
          main_tailrecurse_i5_3 = J_8;
          main_tailrecurse_i5_4 = K_8;
          goto main_tailrecurse_i5_0;

      case 2:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet__Bool ();
          D_6 = __VERIFIER_nondet__Bool ();
          E_6 = __VERIFIER_nondet_int ();
          if (((E_6 <= -1000000000) || (E_6 >= 1000000000)))
              abort ();
          F_6 = __VERIFIER_nondet__Bool ();
          G_6 = __VERIFIER_nondet__Bool ();
          H_6 = __VERIFIER_nondet_int ();
          if (((H_6 <= -1000000000) || (H_6 >= 1000000000)))
              abort ();
          J_6 = __VERIFIER_nondet_int ();
          if (((J_6 <= -1000000000) || (J_6 >= 1000000000)))
              abort ();
          K_6 = __VERIFIER_nondet_int ();
          if (((K_6 <= -1000000000) || (K_6 >= 1000000000)))
              abort ();
          L_6 = __VERIFIER_nondet_int ();
          if (((L_6 <= -1000000000) || (L_6 >= 1000000000)))
              abort ();
          M_6 = __VERIFIER_nondet__Bool ();
          N_6 = __VERIFIER_nondet__Bool ();
          O_6 = __VERIFIER_nondet_int ();
          if (((O_6 <= -1000000000) || (O_6 >= 1000000000)))
              abort ();
          S_6 = __VERIFIER_nondet_int ();
          if (((S_6 <= -1000000000) || (S_6 >= 1000000000)))
              abort ();
          T_6 = __VERIFIER_nondet_int ();
          if (((T_6 <= -1000000000) || (T_6 >= 1000000000)))
              abort ();
          P_6 = main_tailrecurse_i5_0;
          Q_6 = main_tailrecurse_i5_1;
          R_6 = main_tailrecurse_i5_2;
          I_6 = main_tailrecurse_i5_3;
          C_6 = main_tailrecurse_i5_4;
          if (!
              ((!((0 <= C_6) == B_6)) && ((!F_6) || (!D_6) || (E_6 == C_6))
               && ((!F_6) || (!D_6) || (H_6 == E_6)) && ((!F_6) || (!D_6)
                                                         || (!B_6)) && ((!N_6)
                                                                        ||
                                                                        (!M_6)
                                                                        ||
                                                                        (O_6
                                                                         ==
                                                                         K_6))
               && ((!N_6) || (!M_6) || (L_6 == J_6)) && ((!N_6) || (!M_6)
                                                         || (S_6 == L_6))
               && ((!N_6) || (!M_6) || (T_6 == O_6)) && ((!N_6) || (!G_6)
                                                         || (!F_6)) && ((!F_6)
                                                                        ||
                                                                        (G_6
                                                                         ==
                                                                         (H_6
                                                                          ==
                                                                          0)))
               && ((!F_6) || (F_6 && D_6)) && ((!M_6) || (N_6 && M_6))
               && ((!N_6) || (J_6 == (I_6 + R_6))) && ((!N_6)
                                                       || (K_6 == (H_6 + -1)))
               && ((!N_6) || (N_6 && F_6)) && M_6 && (A_6 == (-1 * C_6))))
              abort ();
          main_tailrecurse_outer_i3_0 = P_6;
          main_tailrecurse_outer_i3_1 = Q_6;
          main_tailrecurse_outer_i3_2 = R_6;
          main_tailrecurse_outer_i3_3 = S_6;
          main_tailrecurse_outer_i3_4 = T_6;
          B_7 = __VERIFIER_nondet__Bool ();
          C_7 = __VERIFIER_nondet__Bool ();
          D_7 = __VERIFIER_nondet_int ();
          if (((D_7 <= -1000000000) || (D_7 >= 1000000000)))
              abort ();
          I_7 = __VERIFIER_nondet_int ();
          if (((I_7 <= -1000000000) || (I_7 >= 1000000000)))
              abort ();
          E_7 = main_tailrecurse_outer_i3_0;
          F_7 = main_tailrecurse_outer_i3_1;
          G_7 = main_tailrecurse_outer_i3_2;
          H_7 = main_tailrecurse_outer_i3_3;
          A_7 = main_tailrecurse_outer_i3_4;
          if (!
              (((!C_7) || (!B_7) || (I_7 == D_7)) && ((!B_7) || (C_7 && B_7))
               && B_7 && ((!C_7) || (!B_7) || (D_7 == A_7))))
              abort ();
          main_tailrecurse_i5_0 = E_7;
          main_tailrecurse_i5_1 = F_7;
          main_tailrecurse_i5_2 = G_7;
          main_tailrecurse_i5_3 = H_7;
          main_tailrecurse_i5_4 = I_7;
          B_8 = __VERIFIER_nondet__Bool ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          D_8 = __VERIFIER_nondet__Bool ();
          E_8 = __VERIFIER_nondet__Bool ();
          F_8 = __VERIFIER_nondet_int ();
          if (((F_8 <= -1000000000) || (F_8 >= 1000000000)))
              abort ();
          K_8 = __VERIFIER_nondet_int ();
          if (((K_8 <= -1000000000) || (K_8 >= 1000000000)))
              abort ();
          G_8 = main_tailrecurse_i5_0;
          H_8 = main_tailrecurse_i5_1;
          I_8 = main_tailrecurse_i5_2;
          J_8 = main_tailrecurse_i5_3;
          A_8 = main_tailrecurse_i5_4;
          if (!
              ((!((0 <= A_8) == B_8)) && ((!E_8) || (!D_8) || (F_8 == C_8))
               && ((!E_8) || (!D_8) || (K_8 == F_8)) && ((!E_8) || B_8
                                                         || (!D_8)) && ((!D_8)
                                                                        ||
                                                                        (E_8
                                                                         &&
                                                                         D_8))
               && D_8 && (C_8 == (-1 * A_8))))
              abort ();
          main_tailrecurse_i5_0 = G_8;
          main_tailrecurse_i5_1 = H_8;
          main_tailrecurse_i5_2 = I_8;
          main_tailrecurse_i5_3 = J_8;
          main_tailrecurse_i5_4 = K_8;
          goto main_tailrecurse_i5_0;

      default:
          abort ();
      }
  main_tailrecurse_i_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          B_4 = __VERIFIER_nondet__Bool ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          J_4 = __VERIFIER_nondet_int ();
          if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
              abort ();
          G_4 = main_tailrecurse_i_0;
          H_4 = main_tailrecurse_i_1;
          I_4 = main_tailrecurse_i_2;
          A_4 = main_tailrecurse_i_3;
          if (!
              ((!((0 <= A_4) == B_4)) && ((!E_4) || (!D_4) || (F_4 == C_4))
               && ((!E_4) || (!D_4) || (J_4 == F_4)) && ((!E_4) || (!D_4)
                                                         || B_4) && ((!D_4)
                                                                     || (E_4
                                                                         &&
                                                                         D_4))
               && D_4 && (C_4 == (-1 * A_4))))
              abort ();
          main_tailrecurse_i_0 = G_4;
          main_tailrecurse_i_1 = H_4;
          main_tailrecurse_i_2 = I_4;
          main_tailrecurse_i_3 = J_4;
          goto main_tailrecurse_i_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          J_2 = __VERIFIER_nondet_int ();
          if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
              abort ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          M_2 = __VERIFIER_nondet__Bool ();
          N_2 = __VERIFIER_nondet__Bool ();
          O_2 = __VERIFIER_nondet_int ();
          if (((O_2 <= -1000000000) || (O_2 >= 1000000000)))
              abort ();
          R_2 = __VERIFIER_nondet_int ();
          if (((R_2 <= -1000000000) || (R_2 >= 1000000000)))
              abort ();
          S_2 = __VERIFIER_nondet_int ();
          if (((S_2 <= -1000000000) || (S_2 >= 1000000000)))
              abort ();
          P_2 = main_tailrecurse_i_0;
          Q_2 = main_tailrecurse_i_1;
          I_2 = main_tailrecurse_i_2;
          C_2 = main_tailrecurse_i_3;
          if (!
              ((!((0 <= C_2) == B_2)) && ((!F_2) || (!D_2) || (E_2 == C_2))
               && ((!F_2) || (!D_2) || (H_2 == E_2)) && ((!F_2) || (!D_2)
                                                         || (!B_2)) && ((!N_2)
                                                                        ||
                                                                        (!G_2)
                                                                        ||
                                                                        (!F_2))
               && ((!N_2) || (!M_2) || (L_2 == J_2)) && ((!N_2) || (!M_2)
                                                         || (O_2 == K_2))
               && ((!N_2) || (!M_2) || (R_2 == L_2)) && ((!N_2) || (!M_2)
                                                         || (S_2 == O_2))
               && ((!F_2) || (G_2 == (H_2 == 0))) && ((!F_2) || (F_2 && D_2))
               && ((!M_2) || (N_2 && M_2)) && ((!N_2) || (J_2 == (I_2 + P_2)))
               && ((!N_2) || (K_2 == (H_2 + -1))) && ((!N_2) || (N_2 && F_2))
               && M_2 && (A_2 == (-1 * C_2))))
              abort ();
          main_tailrecurse_outer_i_0 = P_2;
          main_tailrecurse_outer_i_1 = Q_2;
          main_tailrecurse_outer_i_2 = R_2;
          main_tailrecurse_outer_i_3 = S_2;
          B_3 = __VERIFIER_nondet__Bool ();
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          H_3 = __VERIFIER_nondet_int ();
          if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
              abort ();
          E_3 = main_tailrecurse_outer_i_0;
          F_3 = main_tailrecurse_outer_i_1;
          G_3 = main_tailrecurse_outer_i_2;
          A_3 = main_tailrecurse_outer_i_3;
          if (!
              (((!C_3) || (!B_3) || (H_3 == D_3)) && ((!B_3) || (C_3 && B_3))
               && B_3 && ((!C_3) || (!B_3) || (D_3 == A_3))))
              abort ();
          main_tailrecurse_i_0 = E_3;
          main_tailrecurse_i_1 = F_3;
          main_tailrecurse_i_2 = G_3;
          main_tailrecurse_i_3 = H_3;
          B_4 = __VERIFIER_nondet__Bool ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          J_4 = __VERIFIER_nondet_int ();
          if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
              abort ();
          G_4 = main_tailrecurse_i_0;
          H_4 = main_tailrecurse_i_1;
          I_4 = main_tailrecurse_i_2;
          A_4 = main_tailrecurse_i_3;
          if (!
              ((!((0 <= A_4) == B_4)) && ((!E_4) || (!D_4) || (F_4 == C_4))
               && ((!E_4) || (!D_4) || (J_4 == F_4)) && ((!E_4) || (!D_4)
                                                         || B_4) && ((!D_4)
                                                                     || (E_4
                                                                         &&
                                                                         D_4))
               && D_4 && (C_4 == (-1 * A_4))))
              abort ();
          main_tailrecurse_i_0 = G_4;
          main_tailrecurse_i_1 = H_4;
          main_tailrecurse_i_2 = I_4;
          main_tailrecurse_i_3 = J_4;
          goto main_tailrecurse_i_1;

      case 2:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet__Bool ();
          D_5 = __VERIFIER_nondet__Bool ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = __VERIFIER_nondet_int ();
          if (((F_5 <= -1000000000) || (F_5 >= 1000000000)))
              abort ();
          G_5 = __VERIFIER_nondet__Bool ();
          I_5 = __VERIFIER_nondet__Bool ();
          J_5 = __VERIFIER_nondet_int ();
          if (((J_5 <= -1000000000) || (J_5 >= 1000000000)))
              abort ();
          K_5 = __VERIFIER_nondet_int ();
          if (((K_5 <= -1000000000) || (K_5 >= 1000000000)))
              abort ();
          L_5 = __VERIFIER_nondet__Bool ();
          M_5 = __VERIFIER_nondet__Bool ();
          N_5 = __VERIFIER_nondet_int ();
          if (((N_5 <= -1000000000) || (N_5 >= 1000000000)))
              abort ();
          O_5 = __VERIFIER_nondet_int ();
          if (((O_5 <= -1000000000) || (O_5 >= 1000000000)))
              abort ();
          R_5 = __VERIFIER_nondet_int ();
          if (((R_5 <= -1000000000) || (R_5 >= 1000000000)))
              abort ();
          S_5 = __VERIFIER_nondet_int ();
          if (((S_5 <= -1000000000) || (S_5 >= 1000000000)))
              abort ();
          P_5 = main_tailrecurse_i_0;
          Q_5 = main_tailrecurse_i_1;
          H_5 = main_tailrecurse_i_2;
          C_5 = main_tailrecurse_i_3;
          if (!
              ((!((0 <= C_5) == B_5)) && ((!D_5) || (F_5 == E_5) || (!I_5))
               && ((E_5 == C_5) || (!D_5) || (!I_5)) && ((!B_5) || (!D_5)
                                                         || (!I_5)) && ((!M_5)
                                                                        ||
                                                                        (!I_5)
                                                                        ||
                                                                        (J_5
                                                                         ==
                                                                         H_5))
               && ((!M_5) || (!I_5) || (O_5 == J_5)) && ((!M_5) || (!L_5)
                                                         || (N_5 == P_5))
               && ((!M_5) || (!L_5) || (K_5 == 0)) && ((!M_5) || (!L_5)
                                                       || (R_5 == K_5))
               && ((!M_5) || (!L_5) || (S_5 == N_5)) && ((!M_5) || G_5
                                                         || (!I_5)) && ((!I_5)
                                                                        ||
                                                                        (G_5
                                                                         ==
                                                                         (F_5
                                                                          ==
                                                                          0)))
               && ((!I_5) || (D_5 && I_5)) && ((!L_5) || (M_5 && L_5))
               && ((!M_5) || (M_5 && I_5)) && L_5 && (A_5 == (-1 * C_5))))
              abort ();
          main_tailrecurse_outer_i3_0 = O_5;
          main_tailrecurse_outer_i3_1 = P_5;
          main_tailrecurse_outer_i3_2 = Q_5;
          main_tailrecurse_outer_i3_3 = R_5;
          main_tailrecurse_outer_i3_4 = S_5;
          B_7 = __VERIFIER_nondet__Bool ();
          C_7 = __VERIFIER_nondet__Bool ();
          D_7 = __VERIFIER_nondet_int ();
          if (((D_7 <= -1000000000) || (D_7 >= 1000000000)))
              abort ();
          I_7 = __VERIFIER_nondet_int ();
          if (((I_7 <= -1000000000) || (I_7 >= 1000000000)))
              abort ();
          E_7 = main_tailrecurse_outer_i3_0;
          F_7 = main_tailrecurse_outer_i3_1;
          G_7 = main_tailrecurse_outer_i3_2;
          H_7 = main_tailrecurse_outer_i3_3;
          A_7 = main_tailrecurse_outer_i3_4;
          if (!
              (((!C_7) || (!B_7) || (I_7 == D_7)) && ((!B_7) || (C_7 && B_7))
               && B_7 && ((!C_7) || (!B_7) || (D_7 == A_7))))
              abort ();
          main_tailrecurse_i5_0 = E_7;
          main_tailrecurse_i5_1 = F_7;
          main_tailrecurse_i5_2 = G_7;
          main_tailrecurse_i5_3 = H_7;
          main_tailrecurse_i5_4 = I_7;
          B_8 = __VERIFIER_nondet__Bool ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          D_8 = __VERIFIER_nondet__Bool ();
          E_8 = __VERIFIER_nondet__Bool ();
          F_8 = __VERIFIER_nondet_int ();
          if (((F_8 <= -1000000000) || (F_8 >= 1000000000)))
              abort ();
          K_8 = __VERIFIER_nondet_int ();
          if (((K_8 <= -1000000000) || (K_8 >= 1000000000)))
              abort ();
          G_8 = main_tailrecurse_i5_0;
          H_8 = main_tailrecurse_i5_1;
          I_8 = main_tailrecurse_i5_2;
          J_8 = main_tailrecurse_i5_3;
          A_8 = main_tailrecurse_i5_4;
          if (!
              ((!((0 <= A_8) == B_8)) && ((!E_8) || (!D_8) || (F_8 == C_8))
               && ((!E_8) || (!D_8) || (K_8 == F_8)) && ((!E_8) || B_8
                                                         || (!D_8)) && ((!D_8)
                                                                        ||
                                                                        (E_8
                                                                         &&
                                                                         D_8))
               && D_8 && (C_8 == (-1 * A_8))))
              abort ();
          main_tailrecurse_i5_0 = G_8;
          main_tailrecurse_i5_1 = H_8;
          main_tailrecurse_i5_2 = I_8;
          main_tailrecurse_i5_3 = J_8;
          main_tailrecurse_i5_4 = K_8;
          goto main_tailrecurse_i5_0;

      default:
          abort ();
      }

    // return expression

}

