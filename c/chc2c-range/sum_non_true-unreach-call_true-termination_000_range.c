// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/sum_non_true-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sum_non_true-unreach-call_true-termination_000_range.c", 13, "reach_error"); }



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
    int B_2;
    _Bool C_2;
    int D_2;
    int E_2;
    int F_2;
    _Bool G_2;
    _Bool H_2;
    int I_2;
    int J_2;
    int K_2;
    int L_2;
    int M_2;
    _Bool A_3;
    int B_3;
    _Bool C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int I_3;
    int J_3;
    _Bool K_3;
    _Bool L_3;
    _Bool M_3;
    int A_4;
    int B_4;
    _Bool C_4;
    int D_4;
    int E_4;
    int F_4;
    _Bool G_4;
    int H_4;
    int I_4;
    int J_4;
    int K_4;
    _Bool L_4;
    int M_4;
    int N_4;
    int O_4;
    int P_4;
    int Q_4;
    int R_4;
    int S_4;
    _Bool T_4;
    _Bool U_4;
    _Bool V_4;
    _Bool CHC_COMP_UNUSED_5;

    if (((main_tailrecurse_i_0 <= -1000000000)
         || (main_tailrecurse_i_0 >= 1000000000))
        || ((main_tailrecurse_i_1 <= -1000000000)
            || (main_tailrecurse_i_1 >= 1000000000))
        || ((main_tailrecurse_i_2 <= -1000000000)
            || (main_tailrecurse_i_2 >= 1000000000))
        || ((main_tailrecurse_i_3 <= -1000000000)
            || (main_tailrecurse_i_3 >= 1000000000)) || ((C_1 <= -1000000000)
                                                         || (C_1 >=
                                                             1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((M_2 <= -1000000000) || (M_2 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((I_3 <= -1000000000) || (I_3 >= 1000000000))
        || ((J_3 <= -1000000000) || (J_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((I_4 <= -1000000000) || (I_4 >= 1000000000))
        || ((J_4 <= -1000000000) || (J_4 >= 1000000000))
        || ((K_4 <= -1000000000) || (K_4 >= 1000000000))
        || ((M_4 <= -1000000000) || (M_4 >= 1000000000))
        || ((N_4 <= -1000000000) || (N_4 >= 1000000000))
        || ((O_4 <= -1000000000) || (O_4 >= 1000000000))
        || ((P_4 <= -1000000000) || (P_4 >= 1000000000))
        || ((Q_4 <= -1000000000) || (Q_4 >= 1000000000))
        || ((R_4 <= -1000000000) || (R_4 >= 1000000000))
        || ((S_4 <= -1000000000) || (S_4 >= 1000000000)))
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
               && ((!E_1) || (!D_1) || (C_1 == G_1)) && ((!E_1) || (!D_1)
                                                         || (F_1 == H_1))
               && ((!E_1) || (!D_1) || (I_1 == F_1)) && ((!E_1) || (!D_1)
                                                         || (J_1 == C_1))
               && ((!D_1) || (E_1 && D_1)) && ((!E_1) || (E_1 && A_1)) && D_1
               && (!((1 <= H_1) == B_1))))
              abort ();
          main_tailrecurse_i_0 = G_1;
          main_tailrecurse_i_1 = H_1;
          main_tailrecurse_i_2 = I_1;
          main_tailrecurse_i_3 = J_1;
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          M_2 = __VERIFIER_nondet_int ();
          if (((M_2 <= -1000000000) || (M_2 >= 1000000000)))
              abort ();
          J_2 = main_tailrecurse_i_0;
          K_2 = main_tailrecurse_i_1;
          B_2 = main_tailrecurse_i_2;
          A_2 = main_tailrecurse_i_3;
          if (!
              ((E_2 == (B_2 + -1)) && (!((2 <= B_2) == C_2))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (L_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (M_2 == F_2))
               && ((!H_2) || (!G_2) || (!C_2)) && ((!G_2) || (H_2 && G_2))
               && G_2 && (D_2 == (A_2 + 1))))
              abort ();
          main_tailrecurse_i_0 = J_2;
          main_tailrecurse_i_1 = K_2;
          main_tailrecurse_i_2 = L_2;
          main_tailrecurse_i_3 = M_2;
          goto main_tailrecurse_i_0;

      case 1:
          A_3 = __VERIFIER_nondet__Bool ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet__Bool ();
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
          H_3 = __VERIFIER_nondet_int ();
          if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
              abort ();
          I_3 = __VERIFIER_nondet_int ();
          if (((I_3 <= -1000000000) || (I_3 >= 1000000000)))
              abort ();
          J_3 = __VERIFIER_nondet_int ();
          if (((J_3 <= -1000000000) || (J_3 >= 1000000000)))
              abort ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          if (!
              (((!L_3) || (!C_3) || (B_3 == G_3))
               && ((!L_3) || (!C_3) || (D_3 == H_3)) && ((!L_3) || (!C_3)
                                                         || (E_3 == D_3))
               && ((!L_3) || (!C_3) || (F_3 == B_3)) && ((!L_3) || (!C_3)
                                                         || A_3) && ((!L_3)
                                                                     || (I_3
                                                                         ==
                                                                         (E_3
                                                                          +
                                                                          F_3)))
               && ((!L_3) || (J_3 == (G_3 + H_3))) && ((!L_3)
                                                       || (K_3 ==
                                                           (I_3 == J_3)))
               && ((!L_3) || (L_3 && C_3)) && ((!L_3) || (!K_3)) && ((!M_3)
                                                                     || (M_3
                                                                         &&
                                                                         L_3))
               && M_3 && (!((1 <= H_3) == A_3))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main_tailrecurse_i_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          M_2 = __VERIFIER_nondet_int ();
          if (((M_2 <= -1000000000) || (M_2 >= 1000000000)))
              abort ();
          J_2 = main_tailrecurse_i_0;
          K_2 = main_tailrecurse_i_1;
          B_2 = main_tailrecurse_i_2;
          A_2 = main_tailrecurse_i_3;
          if (!
              ((E_2 == (B_2 + -1)) && (!((2 <= B_2) == C_2))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (L_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (M_2 == F_2))
               && ((!H_2) || (!G_2) || (!C_2)) && ((!G_2) || (H_2 && G_2))
               && G_2 && (D_2 == (A_2 + 1))))
              abort ();
          main_tailrecurse_i_0 = J_2;
          main_tailrecurse_i_1 = K_2;
          main_tailrecurse_i_2 = L_2;
          main_tailrecurse_i_3 = M_2;
          goto main_tailrecurse_i_0;

      case 1:
          C_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          G_4 = __VERIFIER_nondet__Bool ();
          H_4 = __VERIFIER_nondet_int ();
          if (((H_4 <= -1000000000) || (H_4 >= 1000000000)))
              abort ();
          I_4 = __VERIFIER_nondet_int ();
          if (((I_4 <= -1000000000) || (I_4 >= 1000000000)))
              abort ();
          J_4 = __VERIFIER_nondet_int ();
          if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
              abort ();
          K_4 = __VERIFIER_nondet_int ();
          if (((K_4 <= -1000000000) || (K_4 >= 1000000000)))
              abort ();
          L_4 = __VERIFIER_nondet__Bool ();
          M_4 = __VERIFIER_nondet_int ();
          if (((M_4 <= -1000000000) || (M_4 >= 1000000000)))
              abort ();
          N_4 = __VERIFIER_nondet_int ();
          if (((N_4 <= -1000000000) || (N_4 >= 1000000000)))
              abort ();
          O_4 = __VERIFIER_nondet_int ();
          if (((O_4 <= -1000000000) || (O_4 >= 1000000000)))
              abort ();
          R_4 = __VERIFIER_nondet_int ();
          if (((R_4 <= -1000000000) || (R_4 >= 1000000000)))
              abort ();
          S_4 = __VERIFIER_nondet_int ();
          if (((S_4 <= -1000000000) || (S_4 >= 1000000000)))
              abort ();
          T_4 = __VERIFIER_nondet__Bool ();
          U_4 = __VERIFIER_nondet__Bool ();
          V_4 = __VERIFIER_nondet__Bool ();
          P_4 = main_tailrecurse_i_0;
          Q_4 = main_tailrecurse_i_1;
          B_4 = main_tailrecurse_i_2;
          A_4 = main_tailrecurse_i_3;
          if (!
              ((E_4 == (B_4 + -1)) && (!((2 <= B_4) == C_4))
               && ((!L_4) || (!G_4) || (F_4 == D_4)) && ((!L_4) || (!G_4)
                                                         || (H_4 == E_4))
               && ((!L_4) || (!G_4) || (I_4 == F_4)) && ((!L_4) || (!G_4)
                                                         || (J_4 == H_4))
               && ((!L_4) || (!G_4) || C_4) && ((!U_4) || (!L_4)
                                                || (K_4 == I_4)) && ((!U_4)
                                                                     || (!L_4)
                                                                     || (M_4
                                                                         ==
                                                                         J_4))
               && ((!U_4) || (!L_4) || (N_4 == M_4)) && ((!U_4) || (!L_4)
                                                         || (O_4 == K_4))
               && ((!L_4) || (L_4 && G_4)) && ((!U_4) || (R_4 == (N_4 + O_4)))
               && ((!U_4) || (S_4 == (P_4 + Q_4))) && ((!U_4)
                                                       || (T_4 ==
                                                           (R_4 == S_4)))
               && ((!U_4) || (U_4 && L_4)) && ((!U_4) || (!T_4)) && ((!V_4)
                                                                     || (V_4
                                                                         &&
                                                                         U_4))
               && V_4 && (D_4 == (A_4 + 1))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }

    // return expression

}

