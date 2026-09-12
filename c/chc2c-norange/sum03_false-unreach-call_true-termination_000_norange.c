// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/sum03_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sum03_false-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    _Bool main_postcall_0;
    int main_postcall_1;
    int main_postcall_2;
    int main_entry_0;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    int G_1;
    _Bool H_1;
    _Bool I_1;
    int J_1;
    _Bool K_1;
    int L_1;
    int M_1;
    _Bool A_2;
    _Bool B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    _Bool G_2;
    _Bool H_2;
    _Bool I_2;
    _Bool J_2;
    _Bool K_2;
    int L_2;
    int M_2;
    _Bool N_2;
    int O_2;
    _Bool P_2;
    _Bool Q_2;
    int R_2;
    _Bool S_2;
    int T_2;
    int U_2;
    int A_3;
    int B_3;
    int C_3;
    _Bool D_3;
    _Bool E_3;
    _Bool F_3;
    _Bool G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool A_4;
    _Bool B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    _Bool I_4;
    _Bool J_4;
    _Bool K_4;
    _Bool L_4;
    _Bool M_4;
    _Bool N_4;
    _Bool O_4;
    _Bool P_4;
    _Bool Q_4;
    _Bool R_4;
    _Bool S_4;
    _Bool T_4;
    _Bool U_4;
    _Bool CHC_COMP_UNUSED_5;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    main_entry_0 = A_0;
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
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet_int ();
          K_1 = __VERIFIER_nondet__Bool ();
          L_1 = __VERIFIER_nondet_int ();
          M_1 = __VERIFIER_nondet_int ();
          C_1 = main_entry_0;
          if (!
              ((B_1 == C_1) && ((!I_1) || E_1 || (!D_1))
               && ((!I_1) || (!H_1) || (K_1 == F_1)) && ((!I_1) || (!H_1)
                                                         || (G_1 == 1))
               && ((!I_1) || (!H_1) || (J_1 == 2)) && ((!I_1) || (!H_1)
                                                       || (L_1 == G_1))
               && ((!I_1) || (!H_1) || (M_1 == J_1)) && ((!I_1) || (!H_1)
                                                         || (!F_1)) && ((!H_1)
                                                                        ||
                                                                        (I_1
                                                                         &&
                                                                         H_1))
               && ((!I_1) || (I_1 && D_1)) && H_1 && (A_1 == C_1)))
              abort ();
          main_postcall_0 = K_1;
          main_postcall_1 = L_1;
          main_postcall_2 = M_1;
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet__Bool ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet__Bool ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          N_2 = __VERIFIER_nondet__Bool ();
          O_2 = __VERIFIER_nondet_int ();
          P_2 = __VERIFIER_nondet__Bool ();
          Q_2 = __VERIFIER_nondet__Bool ();
          R_2 = __VERIFIER_nondet_int ();
          S_2 = __VERIFIER_nondet__Bool ();
          T_2 = __VERIFIER_nondet_int ();
          U_2 = __VERIFIER_nondet_int ();
          A_2 = main_postcall_0;
          E_2 = main_postcall_1;
          D_2 = main_postcall_2;
          if (!
              ((G_2 == (M_2 == F_2)) && (H_2 == (M_2 == 0))
               && (I_2 == (H_2 || G_2)) && (!(I_2 == K_2))
               && (C_2 == (D_2 + 2)) && (F_2 == (2 * L_2))
               && (L_2 == (E_2 + 1)) && (M_2 == (B_2 ? C_2 : D_2)) && ((!Q_2)
                                                                       ||
                                                                       (!P_2)
                                                                       || (N_2
                                                                           ==
                                                                           K_2))
               && ((!Q_2) || (!P_2) || (S_2 == N_2)) && ((!Q_2) || (!P_2)
                                                         || (O_2 == L_2))
               && ((!Q_2) || (!P_2) || (R_2 == M_2)) && ((!Q_2) || (!P_2)
                                                         || (T_2 == O_2))
               && ((!Q_2) || (!P_2) || (U_2 == R_2)) && ((!Q_2) || (!P_2)
                                                         || J_2) && ((!P_2)
                                                                     || (Q_2
                                                                         &&
                                                                         P_2))
               && (!A_2) && P_2 && (B_2 == ((!(10 <= E_2)) && (E_2 >= 0)))))
              abort ();
          main_postcall_0 = S_2;
          main_postcall_1 = T_2;
          main_postcall_2 = U_2;
          goto main_postcall_0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet__Bool ();
          G_3 = __VERIFIER_nondet__Bool ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          C_3 = main_entry_0;
          if (!
              ((B_3 == C_3) && ((!H_3) || (!E_3) || (G_3 == F_3))
               && ((!H_3) || (!E_3) || (!D_3)) && ((!H_3) || (!F_3) || (!E_3))
               && ((!H_3) || (H_3 && E_3)) && ((!H_3) || G_3) && ((!I_3)
                                                                  || (I_3
                                                                      && H_3))
               && I_3 && (A_3 == C_3)))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main_postcall_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet__Bool ();
          J_2 = __VERIFIER_nondet__Bool ();
          K_2 = __VERIFIER_nondet__Bool ();
          L_2 = __VERIFIER_nondet_int ();
          M_2 = __VERIFIER_nondet_int ();
          N_2 = __VERIFIER_nondet__Bool ();
          O_2 = __VERIFIER_nondet_int ();
          P_2 = __VERIFIER_nondet__Bool ();
          Q_2 = __VERIFIER_nondet__Bool ();
          R_2 = __VERIFIER_nondet_int ();
          S_2 = __VERIFIER_nondet__Bool ();
          T_2 = __VERIFIER_nondet_int ();
          U_2 = __VERIFIER_nondet_int ();
          A_2 = main_postcall_0;
          E_2 = main_postcall_1;
          D_2 = main_postcall_2;
          if (!
              ((G_2 == (M_2 == F_2)) && (H_2 == (M_2 == 0))
               && (I_2 == (H_2 || G_2)) && (!(I_2 == K_2))
               && (C_2 == (D_2 + 2)) && (F_2 == (2 * L_2))
               && (L_2 == (E_2 + 1)) && (M_2 == (B_2 ? C_2 : D_2)) && ((!Q_2)
                                                                       ||
                                                                       (!P_2)
                                                                       || (N_2
                                                                           ==
                                                                           K_2))
               && ((!Q_2) || (!P_2) || (S_2 == N_2)) && ((!Q_2) || (!P_2)
                                                         || (O_2 == L_2))
               && ((!Q_2) || (!P_2) || (R_2 == M_2)) && ((!Q_2) || (!P_2)
                                                         || (T_2 == O_2))
               && ((!Q_2) || (!P_2) || (U_2 == R_2)) && ((!Q_2) || (!P_2)
                                                         || J_2) && ((!P_2)
                                                                     || (Q_2
                                                                         &&
                                                                         P_2))
               && (!A_2) && P_2 && (B_2 == ((!(10 <= E_2)) && (E_2 >= 0)))))
              abort ();
          main_postcall_0 = S_2;
          main_postcall_1 = T_2;
          main_postcall_2 = U_2;
          goto main_postcall_0;

      case 1:
          B_4 = __VERIFIER_nondet__Bool ();
          C_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet_int ();
          G_4 = __VERIFIER_nondet_int ();
          H_4 = __VERIFIER_nondet_int ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet__Bool ();
          L_4 = __VERIFIER_nondet__Bool ();
          M_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet__Bool ();
          O_4 = __VERIFIER_nondet__Bool ();
          P_4 = __VERIFIER_nondet__Bool ();
          Q_4 = __VERIFIER_nondet__Bool ();
          R_4 = __VERIFIER_nondet__Bool ();
          S_4 = __VERIFIER_nondet__Bool ();
          T_4 = __VERIFIER_nondet__Bool ();
          U_4 = __VERIFIER_nondet__Bool ();
          A_4 = main_postcall_0;
          E_4 = main_postcall_1;
          D_4 = main_postcall_2;
          if (!
              ((I_4 == (H_4 == G_4)) && (J_4 == (H_4 == 0))
               && (K_4 == (J_4 || I_4)) && (!(K_4 == M_4))
               && (G_4 == (2 * F_4)) && (H_4 == (B_4 ? C_4 : D_4))
               && (C_4 == (D_4 + 2)) && (F_4 == (E_4 + 1)) && ((!Q_4)
                                                               || (!N_4)
                                                               || (O_4 ==
                                                                   M_4))
               && ((!Q_4) || (!N_4) || (P_4 == O_4)) && ((!Q_4) || (!N_4)
                                                         || (!L_4)) && ((!T_4)
                                                                        ||
                                                                        (!Q_4)
                                                                        ||
                                                                        (S_4
                                                                         ==
                                                                         R_4))
               && ((!T_4) || (!Q_4) || (R_4 == P_4)) && ((!Q_4)
                                                         || (Q_4 && N_4))
               && ((!T_4) || (T_4 && Q_4)) && ((!T_4) || S_4) && ((!U_4)
                                                                  || (U_4
                                                                      && T_4))
               && (!A_4) && U_4 && (B_4 == ((!(10 <= E_4)) && (E_4 >= 0)))))
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

