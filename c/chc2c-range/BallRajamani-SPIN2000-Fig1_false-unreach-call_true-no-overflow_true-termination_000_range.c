// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/BallRajamani-SPIN2000-Fig1_false-unreach-call_true-no-overflow_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "BallRajamani-SPIN2000-Fig1_false-unreach-call_true-no-overflow_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    _Bool main_tailrecurse_i3_0;
    int main_tailrecurse_i3_1;
    int main_tailrecurse_i3_2;
    _Bool main_tailrecurse_i_0;
    int main_tailrecurse_i_1;
    int main_tailrecurse_i_2;
    int main_tailrecurse_i_3;
    int main_tailrecurse_i_4;
    int A_1;
    _Bool B_1;
    _Bool C_1;
    int D_1;
    _Bool E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    _Bool A_2;
    int B_2;
    int C_2;
    int D_2;
    _Bool E_2;
    _Bool F_2;
    int G_2;
    _Bool H_2;
    int I_2;
    int J_2;
    int K_2;
    int L_2;
    int A_3;
    int B_3;
    _Bool C_3;
    _Bool D_3;
    int E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    int J_3;
    _Bool K_3;
    int L_3;
    int M_3;
    _Bool A_4;
    int B_4;
    int C_4;
    int D_4;
    _Bool E_4;
    _Bool F_4;
    int G_4;
    _Bool H_4;
    int I_4;
    int J_4;
    int A_5;
    int B_5;
    _Bool C_5;
    _Bool D_5;
    _Bool E_5;
    _Bool F_5;
    _Bool G_5;
    _Bool CHC_COMP_UNUSED_6;

    if (((main_tailrecurse_i3_1 <= -1000000000)
         || (main_tailrecurse_i3_1 >= 1000000000))
        || ((main_tailrecurse_i3_2 <= -1000000000)
            || (main_tailrecurse_i3_2 >= 1000000000))
        || ((main_tailrecurse_i_1 <= -1000000000)
            || (main_tailrecurse_i_1 >= 1000000000))
        || ((main_tailrecurse_i_2 <= -1000000000)
            || (main_tailrecurse_i_2 >= 1000000000))
        || ((main_tailrecurse_i_3 <= -1000000000)
            || (main_tailrecurse_i_3 >= 1000000000))
        || ((main_tailrecurse_i_4 <= -1000000000)
            || (main_tailrecurse_i_4 >= 1000000000)) || ((A_1 <= -1000000000)
                                                         || (A_1 >=
                                                             1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((J_3 <= -1000000000) || (J_3 >= 1000000000))
        || ((L_3 <= -1000000000) || (L_3 >= 1000000000))
        || ((M_3 <= -1000000000) || (M_3 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((I_4 <= -1000000000) || (I_4 >= 1000000000))
        || ((J_4 <= -1000000000) || (J_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_1 = __VERIFIER_nondet_int ();
    if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
        abort ();
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
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
    if (!
        ((G_1 == (E_1 ? 1 : 0)) && ((!C_1) || (!B_1) || (A_1 == F_1))
         && ((!C_1) || (!B_1) || (D_1 == G_1)) && ((!C_1) || (!B_1)
                                                   || (H_1 == A_1)) && ((!C_1)
                                                                        ||
                                                                        (!B_1)
                                                                        ||
                                                                        (I_1
                                                                         ==
                                                                         D_1))
         && ((!B_1) || (C_1 && B_1)) && B_1 && (E_1 == (F_1 == 0))))
        abort ();
    main_tailrecurse_i_0 = E_1;
    main_tailrecurse_i_1 = F_1;
    main_tailrecurse_i_2 = G_1;
    main_tailrecurse_i_3 = H_1;
    main_tailrecurse_i_4 = I_1;
    A_2 = __VERIFIER_nondet__Bool ();
    D_2 = __VERIFIER_nondet_int ();
    if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
        abort ();
    E_2 = __VERIFIER_nondet__Bool ();
    F_2 = __VERIFIER_nondet__Bool ();
    G_2 = __VERIFIER_nondet_int ();
    if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
        abort ();
    K_2 = __VERIFIER_nondet_int ();
    if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
        abort ();
    L_2 = __VERIFIER_nondet_int ();
    if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
        abort ();
    H_2 = main_tailrecurse_i_0;
    I_2 = main_tailrecurse_i_1;
    J_2 = main_tailrecurse_i_2;
    C_2 = main_tailrecurse_i_3;
    B_2 = main_tailrecurse_i_4;
    if (!
        (((!F_2) || (!E_2) || (D_2 == B_2))
         && ((!F_2) || (!E_2) || (G_2 == C_2)) && ((!F_2) || (!E_2)
                                                   || (K_2 == D_2)) && ((!F_2)
                                                                        ||
                                                                        (!E_2)
                                                                        ||
                                                                        (L_2
                                                                         ==
                                                                         G_2))
         && ((!F_2) || (!E_2) || (!A_2)) && ((!E_2) || (F_2 && E_2)) && E_2
         && (A_2 == (C_2 == 0))))
        abort ();
    main_tailrecurse_i_0 = H_2;
    main_tailrecurse_i_1 = I_2;
    main_tailrecurse_i_2 = J_2;
    main_tailrecurse_i_3 = K_2;
    main_tailrecurse_i_4 = L_2;
    goto main_tailrecurse_i_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_tailrecurse_i_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet__Bool ();
          G_3 = __VERIFIER_nondet_int ();
          if (((G_3 <= -1000000000) || (G_3 >= 1000000000)))
              abort ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet_int ();
          if (((J_3 <= -1000000000) || (J_3 >= 1000000000)))
              abort ();
          L_3 = __VERIFIER_nondet_int ();
          if (((L_3 <= -1000000000) || (L_3 >= 1000000000)))
              abort ();
          M_3 = __VERIFIER_nondet_int ();
          if (((M_3 <= -1000000000) || (M_3 >= 1000000000)))
              abort ();
          K_3 = main_tailrecurse_i_0;
          E_3 = main_tailrecurse_i_1;
          F_3 = main_tailrecurse_i_2;
          B_3 = main_tailrecurse_i_3;
          A_3 = main_tailrecurse_i_4;
          if (!
              ((D_3 || (!I_3) || (!C_3)) && ((!I_3) || (!H_3) || (G_3 == E_3))
               && ((!I_3) || (!H_3) || (J_3 == F_3)) && ((!I_3) || (!H_3)
                                                         || (L_3 == G_3))
               && ((!I_3) || (!H_3) || (M_3 == J_3)) && ((!H_3)
                                                         || (I_3 && H_3))
               && ((!I_3) || (I_3 && C_3)) && H_3 && (D_3 == (B_3 == 0))))
              abort ();
          main_tailrecurse_i3_0 = K_3;
          main_tailrecurse_i3_1 = L_3;
          main_tailrecurse_i3_2 = M_3;
          A_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet__Bool ();
          G_4 = __VERIFIER_nondet_int ();
          if (((G_4 <= -1000000000) || (G_4 >= 1000000000)))
              abort ();
          I_4 = __VERIFIER_nondet_int ();
          if (((I_4 <= -1000000000) || (I_4 >= 1000000000)))
              abort ();
          J_4 = __VERIFIER_nondet_int ();
          if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
              abort ();
          H_4 = main_tailrecurse_i3_0;
          C_4 = main_tailrecurse_i3_1;
          B_4 = main_tailrecurse_i3_2;
          if (!
              (((!F_4) || (!E_4) || (D_4 == B_4))
               && ((!F_4) || (!E_4) || (G_4 == C_4)) && ((!F_4) || (!E_4)
                                                         || (I_4 == D_4))
               && ((!F_4) || (!E_4) || (J_4 == G_4)) && ((!F_4) || (!E_4)
                                                         || (!A_4)) && ((!E_4)
                                                                        ||
                                                                        (F_4
                                                                         &&
                                                                         E_4))
               && E_4 && (A_4 == (C_4 == 0))))
              abort ();
          main_tailrecurse_i3_0 = H_4;
          main_tailrecurse_i3_1 = I_4;
          main_tailrecurse_i3_2 = J_4;
          goto main_tailrecurse_i3_1;

      case 1:
          A_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          L_2 = __VERIFIER_nondet_int ();
          if (((L_2 <= -1000000000) || (L_2 >= 1000000000)))
              abort ();
          H_2 = main_tailrecurse_i_0;
          I_2 = main_tailrecurse_i_1;
          J_2 = main_tailrecurse_i_2;
          C_2 = main_tailrecurse_i_3;
          B_2 = main_tailrecurse_i_4;
          if (!
              (((!F_2) || (!E_2) || (D_2 == B_2))
               && ((!F_2) || (!E_2) || (G_2 == C_2)) && ((!F_2) || (!E_2)
                                                         || (K_2 == D_2))
               && ((!F_2) || (!E_2) || (L_2 == G_2)) && ((!F_2) || (!E_2)
                                                         || (!A_2)) && ((!E_2)
                                                                        ||
                                                                        (F_2
                                                                         &&
                                                                         E_2))
               && E_2 && (A_2 == (C_2 == 0))))
              abort ();
          main_tailrecurse_i_0 = H_2;
          main_tailrecurse_i_1 = I_2;
          main_tailrecurse_i_2 = J_2;
          main_tailrecurse_i_3 = K_2;
          main_tailrecurse_i_4 = L_2;
          goto main_tailrecurse_i_0;

      default:
          abort ();
      }
  main_tailrecurse_i3_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_5 = __VERIFIER_nondet__Bool ();
          D_5 = __VERIFIER_nondet__Bool ();
          F_5 = __VERIFIER_nondet__Bool ();
          G_5 = __VERIFIER_nondet__Bool ();
          E_5 = main_tailrecurse_i3_0;
          B_5 = main_tailrecurse_i3_1;
          A_5 = main_tailrecurse_i3_2;
          if (!
              (((!F_5) || (!C_5) || D_5) && ((!F_5) || (F_5 && C_5))
               && ((!F_5) || (!E_5)) && ((!G_5) || (G_5 && F_5)) && G_5
               && (D_5 == (B_5 == 0))))
              abort ();
          CHC_COMP_UNUSED_6 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet__Bool ();
          G_4 = __VERIFIER_nondet_int ();
          if (((G_4 <= -1000000000) || (G_4 >= 1000000000)))
              abort ();
          I_4 = __VERIFIER_nondet_int ();
          if (((I_4 <= -1000000000) || (I_4 >= 1000000000)))
              abort ();
          J_4 = __VERIFIER_nondet_int ();
          if (((J_4 <= -1000000000) || (J_4 >= 1000000000)))
              abort ();
          H_4 = main_tailrecurse_i3_0;
          C_4 = main_tailrecurse_i3_1;
          B_4 = main_tailrecurse_i3_2;
          if (!
              (((!F_4) || (!E_4) || (D_4 == B_4))
               && ((!F_4) || (!E_4) || (G_4 == C_4)) && ((!F_4) || (!E_4)
                                                         || (I_4 == D_4))
               && ((!F_4) || (!E_4) || (J_4 == G_4)) && ((!F_4) || (!E_4)
                                                         || (!A_4)) && ((!E_4)
                                                                        ||
                                                                        (F_4
                                                                         &&
                                                                         E_4))
               && E_4 && (A_4 == (C_4 == 0))))
              abort ();
          main_tailrecurse_i3_0 = H_4;
          main_tailrecurse_i3_1 = I_4;
          main_tailrecurse_i3_2 = J_4;
          goto main_tailrecurse_i3_1;

      default:
          abort ();
      }

    // return expression

}

