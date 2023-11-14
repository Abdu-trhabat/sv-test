// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/sum_non_eq_false-unreach-call_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sum_non_eq_false-unreach-call_000_range.c", 13, "reach_error"); }



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
    _Bool B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    int A_4;
    int B_4;
    int C_4;
    _Bool D_4;
    int E_4;
    _Bool F_4;
    int G_4;
    int H_4;
    _Bool I_4;
    int J_4;
    int K_4;
    int L_4;
    int M_4;
    int N_4;
    _Bool O_4;
    _Bool P_4;
    _Bool Q_4;
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
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((J_4 <= -1000000000) || (J_4 >= 1000000000))
        || ((K_4 <= -1000000000) || (K_4 >= 1000000000))
        || ((L_4 <= -1000000000) || (L_4 >= 1000000000))
        || ((M_4 <= -1000000000) || (M_4 >= 1000000000))
        || ((N_4 <= -1000000000) || (N_4 >= 1000000000)))
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
               && (B_1 == (H_1 == 0))))
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
          A_2 = main_tailrecurse_i_2;
          B_2 = main_tailrecurse_i_3;
          if (!
              ((D_2 == (B_2 + 1)) && (E_2 == (A_2 + -1))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (L_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (M_2 == F_2))
               && ((!H_2) || (!G_2) || (!C_2)) && ((!G_2) || (H_2 && G_2))
               && G_2 && (C_2 == (E_2 == 0))))
              abort ();
          main_tailrecurse_i_0 = J_2;
          main_tailrecurse_i_1 = K_2;
          main_tailrecurse_i_2 = L_2;
          main_tailrecurse_i_3 = M_2;
          goto main_tailrecurse_i_0;

      case 1:
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
               && ((!I_3) || (G_3 == (D_3 + E_3))) && ((!I_3) || (B_3 && I_3))
               && ((!I_3) || H_3) && ((!J_3) || (J_3 && I_3)) && J_3
               && (A_3 == (E_3 == 0))))
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
          A_2 = main_tailrecurse_i_2;
          B_2 = main_tailrecurse_i_3;
          if (!
              ((D_2 == (B_2 + 1)) && (E_2 == (A_2 + -1))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (L_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (M_2 == F_2))
               && ((!H_2) || (!G_2) || (!C_2)) && ((!G_2) || (H_2 && G_2))
               && G_2 && (C_2 == (E_2 == 0))))
              abort ();
          main_tailrecurse_i_0 = J_2;
          main_tailrecurse_i_1 = K_2;
          main_tailrecurse_i_2 = L_2;
          main_tailrecurse_i_3 = M_2;
          goto main_tailrecurse_i_0;

      case 1:
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = __VERIFIER_nondet__Bool ();
          G_4 = __VERIFIER_nondet_int ();
          if (((G_4 <= -1000000000) || (G_4 >= 1000000000)))
              abort ();
          H_4 = __VERIFIER_nondet_int ();
          if (((H_4 <= -1000000000) || (H_4 >= 1000000000)))
              abort ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet_int ();
          if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
              abort ();
          M_4 = __VERIFIER_nondet_int ();
          if (((M_4 <= -1000000000) || (M_4 >= 1000000000)))
              abort ();
          N_4 = __VERIFIER_nondet_int ();
          if (((N_4 <= -1000000000) || (N_4 >= 1000000000)))
              abort ();
          O_4 = __VERIFIER_nondet__Bool ();
          P_4 = __VERIFIER_nondet__Bool ();
          Q_4 = __VERIFIER_nondet__Bool ();
          K_4 = main_tailrecurse_i_0;
          L_4 = main_tailrecurse_i_1;
          A_4 = main_tailrecurse_i_2;
          B_4 = main_tailrecurse_i_3;
          if (!
              ((C_4 == (A_4 + -1)) && (E_4 == (B_4 + 1))
               && ((!I_4) || (!F_4) || (G_4 == E_4)) && ((!I_4) || (!F_4)
                                                         || (H_4 == G_4))
               && ((!I_4) || (!F_4) || D_4) && ((!I_4) || (J_4 == H_4)
                                                || (!P_4)) && ((!I_4)
                                                               || (M_4 == J_4)
                                                               || (!P_4))
               && ((!P_4) || (O_4 == (M_4 == N_4))) && ((!P_4)
                                                        || (N_4 ==
                                                            (K_4 + L_4)))
               && ((!P_4) || (I_4 && P_4)) && ((!P_4) || O_4) && ((!Q_4)
                                                                  || (Q_4
                                                                      && P_4))
               && ((!I_4) || (I_4 && F_4)) && Q_4 && (D_4 == (C_4 == 0))))
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

