// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/sum01_bug02_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "sum01_bug02_false-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__lr_ph_0;
    int main__lr_ph_1;
    int main__lr_ph_2;
    int main__lr_ph_3;
    int main_entry_0;
    int A_0;
    int A_1;
    int B_1;
    _Bool C_1;
    _Bool D_1;
    int E_1;
    int F_1;
    _Bool G_1;
    _Bool H_1;
    int I_1;
    int J_1;
    int K_1;
    int L_1;
    int M_1;
    _Bool A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    _Bool F_2;
    int G_2;
    int H_2;
    int I_2;
    int J_2;
    int K_2;
    _Bool L_2;
    _Bool M_2;
    int N_2;
    int O_2;
    int P_2;
    int Q_2;
    int R_2;
    int A_3;
    int B_3;
    _Bool C_3;
    _Bool D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool K_3;
    _Bool L_3;
    _Bool M_3;
    _Bool N_3;
    _Bool O_3;
    _Bool A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    _Bool H_4;
    int I_4;
    _Bool J_4;
    int K_4;
    int L_4;
    _Bool M_4;
    int N_4;
    int O_4;
    int P_4;
    int Q_4;
    _Bool R_4;
    _Bool S_4;
    _Bool T_4;
    _Bool U_4;
    _Bool V_4;
    _Bool W_4;
    _Bool X_4;
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
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet_int ();
          J_1 = __VERIFIER_nondet_int ();
          K_1 = __VERIFIER_nondet_int ();
          L_1 = __VERIFIER_nondet_int ();
          M_1 = __VERIFIER_nondet_int ();
          B_1 = main_entry_0;
          if (!
              ((A_1 == B_1) && ((!H_1) || (!D_1) || (!C_1))
               && ((!H_1) || (!G_1) || (E_1 == 0)) && ((!H_1) || (!G_1)
                                                       || (F_1 == 1))
               && ((!H_1) || (!G_1) || (I_1 == 10)) && ((!H_1) || (!G_1)
                                                        || (K_1 == F_1))
               && ((!H_1) || (!G_1) || (L_1 == I_1)) && ((!H_1) || (!G_1)
                                                         || (M_1 == E_1))
               && ((!G_1) || (H_1 && G_1)) && ((!H_1) || (H_1 && C_1)) && G_1
               && (!((1 <= J_1) == D_1))))
              abort ();
          main__lr_ph_0 = J_1;
          main__lr_ph_1 = K_1;
          main__lr_ph_2 = L_1;
          main__lr_ph_3 = M_1;
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet_int ();
          H_2 = __VERIFIER_nondet_int ();
          I_2 = __VERIFIER_nondet_int ();
          J_2 = __VERIFIER_nondet_int ();
          K_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet__Bool ();
          M_2 = __VERIFIER_nondet__Bool ();
          N_2 = __VERIFIER_nondet_int ();
          P_2 = __VERIFIER_nondet_int ();
          Q_2 = __VERIFIER_nondet_int ();
          R_2 = __VERIFIER_nondet_int ();
          O_2 = main__lr_ph_0;
          E_2 = main__lr_ph_1;
          D_2 = main__lr_ph_2;
          C_2 = main__lr_ph_3;
          if (!
              ((!((O_2 <= E_2) == F_2)) && (B_2 == (C_2 + 2))
               && (H_2 == (E_2 + 1)) && (I_2 == (D_2 + -1))
               && (G_2 == (A_2 ? B_2 : C_2)) && ((!M_2) || (!L_2)
                                                 || (J_2 == G_2)) && ((!M_2)
                                                                      ||
                                                                      (!L_2)
                                                                      || (K_2
                                                                          ==
                                                                          H_2))
               && ((!M_2) || (!L_2) || (N_2 == I_2)) && ((!M_2) || (!L_2)
                                                         || (P_2 == K_2))
               && ((!M_2) || (!L_2) || (Q_2 == N_2)) && ((!M_2) || (!L_2)
                                                         || (R_2 == J_2))
               && ((!M_2) || (!L_2) || F_2) && ((!L_2) || (M_2 && L_2)) && L_2
               && (!((D_2 <= E_2) == A_2))))
              abort ();
          main__lr_ph_0 = O_2;
          main__lr_ph_1 = P_2;
          main__lr_ph_2 = Q_2;
          main__lr_ph_3 = R_2;
          goto main__lr_ph_0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          H_3 = __VERIFIER_nondet_int ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet__Bool ();
          O_3 = __VERIFIER_nondet__Bool ();
          B_3 = main_entry_0;
          if (!
              ((A_3 == B_3) && ((!N_3) || (!D_3) || (E_3 == 0))
               && ((!N_3) || (!D_3) || (H_3 == E_3)) && ((!N_3) || (!D_3)
                                                         || C_3) && ((!N_3)
                                                                     || (L_3
                                                                         ==
                                                                         (J_3
                                                                          ||
                                                                          I_3)))
               && ((!N_3) || (!(L_3 == M_3))) && ((!N_3)
                                                  || (I_3 == (H_3 == G_3)))
               && ((!N_3) || (J_3 == (H_3 == 0))) && ((!N_3)
                                                      || (G_3 == (2 * F_3)))
               && ((!N_3) || (N_3 && D_3)) && ((!N_3) || (!K_3)) && ((!N_3)
                                                                     || M_3)
               && ((!O_3) || (O_3 && N_3)) && O_3 && (!((1 <= F_3) == C_3))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main__lr_ph_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet_int ();
          H_2 = __VERIFIER_nondet_int ();
          I_2 = __VERIFIER_nondet_int ();
          J_2 = __VERIFIER_nondet_int ();
          K_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet__Bool ();
          M_2 = __VERIFIER_nondet__Bool ();
          N_2 = __VERIFIER_nondet_int ();
          P_2 = __VERIFIER_nondet_int ();
          Q_2 = __VERIFIER_nondet_int ();
          R_2 = __VERIFIER_nondet_int ();
          O_2 = main__lr_ph_0;
          E_2 = main__lr_ph_1;
          D_2 = main__lr_ph_2;
          C_2 = main__lr_ph_3;
          if (!
              ((!((O_2 <= E_2) == F_2)) && (B_2 == (C_2 + 2))
               && (H_2 == (E_2 + 1)) && (I_2 == (D_2 + -1))
               && (G_2 == (A_2 ? B_2 : C_2)) && ((!M_2) || (!L_2)
                                                 || (J_2 == G_2)) && ((!M_2)
                                                                      ||
                                                                      (!L_2)
                                                                      || (K_2
                                                                          ==
                                                                          H_2))
               && ((!M_2) || (!L_2) || (N_2 == I_2)) && ((!M_2) || (!L_2)
                                                         || (P_2 == K_2))
               && ((!M_2) || (!L_2) || (Q_2 == N_2)) && ((!M_2) || (!L_2)
                                                         || (R_2 == J_2))
               && ((!M_2) || (!L_2) || F_2) && ((!L_2) || (M_2 && L_2)) && L_2
               && (!((D_2 <= E_2) == A_2))))
              abort ();
          main__lr_ph_0 = O_2;
          main__lr_ph_1 = P_2;
          main__lr_ph_2 = Q_2;
          main__lr_ph_3 = R_2;
          goto main__lr_ph_0;

      case 1:
          A_4 = __VERIFIER_nondet__Bool ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet_int ();
          H_4 = __VERIFIER_nondet__Bool ();
          I_4 = __VERIFIER_nondet_int ();
          J_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet_int ();
          L_4 = __VERIFIER_nondet_int ();
          M_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet_int ();
          P_4 = __VERIFIER_nondet_int ();
          Q_4 = __VERIFIER_nondet_int ();
          R_4 = __VERIFIER_nondet__Bool ();
          S_4 = __VERIFIER_nondet__Bool ();
          T_4 = __VERIFIER_nondet__Bool ();
          U_4 = __VERIFIER_nondet__Bool ();
          V_4 = __VERIFIER_nondet__Bool ();
          W_4 = __VERIFIER_nondet__Bool ();
          X_4 = __VERIFIER_nondet__Bool ();
          O_4 = main__lr_ph_0;
          G_4 = main__lr_ph_1;
          E_4 = main__lr_ph_2;
          C_4 = main__lr_ph_3;
          if (!
              ((!((O_4 <= G_4) == H_4)) && (B_4 == (C_4 + 2))
               && (D_4 == (E_4 + -1)) && (F_4 == (G_4 + 1))
               && (I_4 == (A_4 ? B_4 : C_4)) && ((!M_4) || (!J_4)
                                                 || (K_4 == I_4)) && ((!M_4)
                                                                      ||
                                                                      (!J_4)
                                                                      || (L_4
                                                                          ==
                                                                          K_4))
               && ((!M_4) || (!J_4) || (!H_4)) && ((!W_4) || (!M_4)
                                                   || (N_4 == L_4)) && ((!W_4)
                                                                        ||
                                                                        (!M_4)
                                                                        ||
                                                                        (Q_4
                                                                         ==
                                                                         N_4))
               && ((!M_4) || (M_4 && J_4)) && ((!W_4)
                                               || (U_4 == (S_4 || R_4)))
               && ((!W_4) || (!(U_4 == V_4))) && ((!W_4)
                                                  || (R_4 == (Q_4 == P_4)))
               && ((!W_4) || (S_4 == (Q_4 == 0))) && ((!W_4)
                                                      || (P_4 == (2 * O_4)))
               && ((!W_4) || (W_4 && M_4)) && ((!W_4) || (!T_4)) && ((!W_4)
                                                                     || V_4)
               && ((!X_4) || (X_4 && W_4)) && X_4
               && (!((E_4 <= G_4) == A_4))))
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

