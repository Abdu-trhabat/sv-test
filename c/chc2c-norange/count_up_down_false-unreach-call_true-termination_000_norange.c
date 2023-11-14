// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/count_up_down_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "count_up_down_false-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_entry_0;
    int main__lr_ph_0;
    int main__lr_ph_1;
    int main__lr_ph_2;
    int A_0;
    int A_1;
    int B_1;
    _Bool C_1;
    _Bool D_1;
    int E_1;
    _Bool F_1;
    _Bool G_1;
    int H_1;
    int I_1;
    int J_1;
    int K_1;
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
    int A_3;
    int B_3;
    _Bool C_3;
    _Bool D_3;
    int E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool K_3;
    _Bool L_3;
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
    _Bool M_4;
    _Bool N_4;
    _Bool O_4;
    _Bool P_4;
    _Bool Q_4;
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
          A_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          B_3 = main_entry_0;
          if (!
              ((A_3 == B_3) && ((!D_3) || (!K_3) || (E_3 == 0))
               && ((!D_3) || (!K_3) || (F_3 == E_3)) && ((!D_3) || (!K_3)
                                                         || C_3) && ((!K_3)
                                                                     ||
                                                                     (!((F_3
                                                                         ==
                                                                         G_3)
                                                                        ==
                                                                        I_3)))
               && ((!K_3) || (!(I_3 == J_3))) && ((!K_3) || (D_3 && K_3))
               && ((!K_3) || J_3) && ((!L_3) || (L_3 && K_3)) && ((!K_3)
                                                                  || (!H_3))
               && L_3 && (C_3 == (G_3 == 0))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          J_1 = __VERIFIER_nondet_int ();
          K_1 = __VERIFIER_nondet_int ();
          B_1 = main_entry_0;
          if (!
              ((A_1 == B_1) && ((!G_1) || (!D_1) || (!C_1))
               && ((!G_1) || (!F_1) || (E_1 == 0)) && ((!G_1) || (!F_1)
                                                       || (H_1 == I_1))
               && ((!G_1) || (!F_1) || (J_1 == H_1)) && ((!G_1) || (!F_1)
                                                         || (K_1 == E_1))
               && ((!F_1) || (G_1 && F_1)) && ((!G_1) || (G_1 && C_1)) && F_1
               && (D_1 == (I_1 == 0))))
              abort ();
          main__lr_ph_0 = I_1;
          main__lr_ph_1 = J_1;
          main__lr_ph_2 = K_1;
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet_int ();
          K_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          J_2 = main__lr_ph_0;
          A_2 = main__lr_ph_1;
          B_2 = main__lr_ph_2;
          if (!
              ((D_2 == (B_2 + 1)) && (E_2 == (A_2 + -1))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (K_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (L_2 == F_2))
               && ((!H_2) || (!G_2) || (!C_2)) && ((!G_2) || (H_2 && G_2))
               && G_2 && (C_2 == (E_2 == 0))))
              abort ();
          main__lr_ph_0 = J_2;
          main__lr_ph_1 = K_2;
          main__lr_ph_2 = L_2;
          goto main__lr_ph_0;

      default:
          abort ();
      }
  main__lr_ph_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet__Bool ();
          G_4 = __VERIFIER_nondet_int ();
          H_4 = __VERIFIER_nondet_int ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet_int ();
          K_4 = __VERIFIER_nondet_int ();
          M_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet__Bool ();
          O_4 = __VERIFIER_nondet__Bool ();
          P_4 = __VERIFIER_nondet__Bool ();
          Q_4 = __VERIFIER_nondet__Bool ();
          L_4 = main__lr_ph_0;
          A_4 = main__lr_ph_1;
          B_4 = main__lr_ph_2;
          if (!
              ((C_4 == (A_4 + -1)) && (E_4 == (B_4 + 1))
               && ((!I_4) || (!F_4) || (G_4 == E_4)) && ((!I_4) || (!F_4)
                                                         || (H_4 == G_4))
               && ((!I_4) || (!F_4) || D_4) && ((!I_4) || (!P_4)
                                                || (J_4 == H_4)) && ((!I_4)
                                                                     || (!P_4)
                                                                     || (K_4
                                                                         ==
                                                                         J_4))
               && ((!P_4) || (!((K_4 == L_4) == N_4))) && ((!P_4)
                                                           || (!(N_4 == O_4)))
               && ((!P_4) || (I_4 && P_4)) && ((!P_4) || O_4) && ((!Q_4)
                                                                  || (Q_4
                                                                      && P_4))
               && ((!I_4) || (I_4 && F_4)) && ((!P_4) || (!M_4)) && Q_4
               && (D_4 == (C_4 == 0))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet__Bool ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet_int ();
          K_2 = __VERIFIER_nondet_int ();
          L_2 = __VERIFIER_nondet_int ();
          J_2 = main__lr_ph_0;
          A_2 = main__lr_ph_1;
          B_2 = main__lr_ph_2;
          if (!
              ((D_2 == (B_2 + 1)) && (E_2 == (A_2 + -1))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (K_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (L_2 == F_2))
               && ((!H_2) || (!G_2) || (!C_2)) && ((!G_2) || (H_2 && G_2))
               && G_2 && (C_2 == (E_2 == 0))))
              abort ();
          main__lr_ph_0 = J_2;
          main__lr_ph_1 = K_2;
          main__lr_ph_2 = L_2;
          goto main__lr_ph_0;

      default:
          abort ();
      }

    // return expression

}

