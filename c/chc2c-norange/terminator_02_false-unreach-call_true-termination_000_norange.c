// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/terminator_02_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "terminator_02_false-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



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
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    _Bool H_1;
    int I_1;
    int J_1;
    int K_1;
    _Bool L_1;
    _Bool M_1;
    int N_1;
    int O_1;
    int P_1;
    int Q_1;
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
    _Bool N_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    _Bool H_4;
    _Bool I_4;
    _Bool J_4;
    _Bool K_4;
    _Bool L_4;
    _Bool M_4;
    int N_4;
    int O_4;
    _Bool P_4;
    _Bool Q_4;
    _Bool R_4;
    _Bool S_4;
    _Bool T_4;
    _Bool U_4;
    _Bool V_4;
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
          N_3 = __VERIFIER_nondet__Bool ();
          A_3 = main_entry_0;
          E_3 = main_entry_1;
          if (!
              ((!((G_3 <= 100) == I_3)) && (K_3 == (I_3 && H_3))
               && (B_3 == E_3) && (C_3 == E_3) && (D_3 == E_3) && ((!J_3)
                                                                   || (!K_3)
                                                                   || (!M_3))
               && ((!M_3) || (M_3 && J_3)) && ((!M_3) || (!L_3)) && ((!N_3)
                                                                     || (N_3
                                                                         &&
                                                                         M_3))
               && N_3 && (!((100 <= F_3) == H_3))))
              abort ();
          CHC_COMP_UNUSED_7 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet_int ();
          J_1 = __VERIFIER_nondet_int ();
          K_1 = __VERIFIER_nondet_int ();
          L_1 = __VERIFIER_nondet__Bool ();
          M_1 = __VERIFIER_nondet__Bool ();
          N_1 = __VERIFIER_nondet_int ();
          O_1 = __VERIFIER_nondet_int ();
          P_1 = __VERIFIER_nondet_int ();
          Q_1 = main_entry_0;
          D_1 = main_entry_1;
          if (!
              ((!((I_1 <= 100) == F_1)) && (H_1 == (F_1 && E_1))
               && (A_1 == D_1) && (B_1 == D_1) && (C_1 == D_1) && ((!G_1)
                                                                   || (!M_1)
                                                                   || H_1)
               && ((!M_1) || (!L_1) || (K_1 == I_1)) && ((!M_1) || (!L_1)
                                                         || (N_1 == J_1))
               && ((!M_1) || (!L_1) || (O_1 == K_1)) && ((!M_1) || (!L_1)
                                                         || (P_1 == N_1))
               && ((!L_1) || (M_1 && L_1)) && ((!M_1) || (M_1 && G_1)) && L_1
               && (!((100 <= J_1) == E_1))))
              abort ();
          main__lr_ph_split_us_0 = O_1;
          main__lr_ph_split_us_1 = P_1;
          main__lr_ph_split_us_2 = Q_1;
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
              (((!B_6) || (!H_6) || C_6) && ((!H_6) || (!G_6) || (I_6 == F_6))
               && ((!H_6) || (!G_6) || (J_6 == I_6)) && ((!H_6) || (!G_6)
                                                         || E_6) && ((!G_6)
                                                                     || (H_6
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

      default:
          abort ();
      }
  main__bb_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          C_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet_int ();
          G_4 = __VERIFIER_nondet_int ();
          H_4 = __VERIFIER_nondet__Bool ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet__Bool ();
          L_4 = __VERIFIER_nondet__Bool ();
          M_4 = __VERIFIER_nondet__Bool ();
          O_4 = __VERIFIER_nondet_int ();
          P_4 = __VERIFIER_nondet__Bool ();
          Q_4 = __VERIFIER_nondet__Bool ();
          R_4 = __VERIFIER_nondet__Bool ();
          S_4 = __VERIFIER_nondet__Bool ();
          T_4 = __VERIFIER_nondet__Bool ();
          U_4 = __VERIFIER_nondet__Bool ();
          V_4 = __VERIFIER_nondet__Bool ();
          N_4 = main__bb_0;
          E_4 = main__bb_1;
          B_4 = main__bb_2;
          if (!
              (((!L_4) || (!J_4) || (C_4 == N_4))
               && ((!L_4) || (!J_4) || (F_4 == C_4)) && ((!L_4) || M_4
                                                         || (!P_4)) && ((!M_4)
                                                                        ||
                                                                        (!L_4)
                                                                        ||
                                                                        (!J_4))
               && ((!S_4) || (!Q_4) || (!P_4)) && ((!R_4) || (!K_4) || (!J_4))
               && ((U_4 && R_4) || (!U_4) || (U_4 && S_4)) && ((!P_4)
                                                               ||
                                                               (!((100 <=
                                                                   O_4) ==
                                                                  Q_4)))
               && ((!P_4) || (O_4 == (N_4 + 1))) && ((!P_4) || (L_4 && P_4))
               && ((!S_4) || (S_4 && P_4)) && ((!J_4)
                                               || (!((101 <= F_4) == H_4)))
               && ((!J_4) || (!((G_4 <= 100) == I_4))) && ((!J_4)
                                                           || (K_4 ==
                                                               (I_4 && H_4)))
               && ((!J_4) || (D_4 == (F_4 + -1))) && ((!J_4)
                                                      || (G_4 == (E_4 + -1)))
               && ((!J_4) || (L_4 && J_4)) && ((!R_4) || (R_4 && J_4))
               && ((!U_4) || (!T_4)) && ((!V_4) || (V_4 && U_4)) && V_4
               && (A_4 == B_4)))
              abort ();
          CHC_COMP_UNUSED_7 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
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
              (((!B_6) || (!H_6) || C_6) && ((!H_6) || (!G_6) || (I_6 == F_6))
               && ((!H_6) || (!G_6) || (J_6 == I_6)) && ((!H_6) || (!G_6)
                                                         || E_6) && ((!G_6)
                                                                     || (H_6
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
              (((!O_2) || (!D_2) || (G_2 == E_2))
               && ((!O_2) || (!D_2) || (E_2 == C_2)) && ((!O_2) || (!D_2)
                                                         || (!B_2)) && ((!O_2)
                                                                        ||
                                                                        (!N_2)
                                                                        ||
                                                                        (M_2
                                                                         ==
                                                                         K_2))
               && ((!O_2) || (!N_2) || (P_2 == L_2)) && ((!O_2) || (!N_2)
                                                         || (Q_2 == M_2))
               && ((!O_2) || (!N_2) || (R_2 == P_2)) && ((!O_2) || (!N_2)
                                                         || J_2) && ((!N_2)
                                                                     || (O_2
                                                                         &&
                                                                         N_2))
               && ((!O_2) || (!((101 <= G_2) == H_2))) && ((!O_2)
                                                           ||
                                                           (!((K_2 <= 100) ==
                                                              I_2)))
               && ((!O_2) || (J_2 == (I_2 && H_2))) && ((!O_2)
                                                        || (K_2 ==
                                                            (F_2 + -1)))
               && ((!O_2) || (L_2 == (G_2 + -1))) && ((!O_2) || (O_2 && D_2))
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
              (((!B_6) || (!H_6) || C_6) && ((!H_6) || (!G_6) || (I_6 == F_6))
               && ((!H_6) || (!G_6) || (J_6 == I_6)) && ((!H_6) || (!G_6)
                                                         || E_6) && ((!G_6)
                                                                     || (H_6
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

      default:
          abort ();
      }

    // return expression

}

