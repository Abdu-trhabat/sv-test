// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/trex01_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "trex01_false-unreach-call_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__lr_ph_0;
    int main__lr_ph_1;
    int main_entry_0;
    int main_entry_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    _Bool C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    _Bool H_1;
    _Bool I_1;
    _Bool J_1;
    _Bool K_1;
    int L_1;
    int M_1;
    int N_1;
    int A_2;
    _Bool B_2;
    int C_2;
    _Bool D_2;
    _Bool E_2;
    int F_2;
    int G_2;
    int H_2;
    int A_3;
    int B_3;
    _Bool C_3;
    int D_3;
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
    _Bool P_3;
    int A_4;
    int B_4;
    _Bool C_4;
    int D_4;
    _Bool E_4;
    int F_4;
    int G_4;
    _Bool H_4;
    _Bool I_4;
    _Bool J_4;
    _Bool K_4;
    _Bool L_4;
    _Bool M_4;
    _Bool N_4;
    _Bool O_4;
    _Bool CHC_COMP_UNUSED_5;

    if (((main__lr_ph_0 <= -1000000000) || (main__lr_ph_0 >= 1000000000))
        || ((main__lr_ph_1 <= -1000000000) || (main__lr_ph_1 >= 1000000000))
        || ((main_entry_0 <= -1000000000) || (main_entry_0 >= 1000000000))
        || ((main_entry_1 <= -1000000000) || (main_entry_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((M_1 <= -1000000000) || (M_1 >= 1000000000))
        || ((N_1 <= -1000000000) || (N_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000)))
        abort ();

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
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
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
          H_3 = __VERIFIER_nondet_int ();
          if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
              abort ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet__Bool ();
          O_3 = __VERIFIER_nondet__Bool ();
          P_3 = __VERIFIER_nondet__Bool ();
          B_3 = main_entry_0;
          G_3 = main_entry_1;
          if (!
              ((A_3 == B_3) && (E_3 == G_3) && (D_3 == G_3) && (F_3 == G_3)
               && ((!J_3) || (M_3 == K_3) || (!O_3)) && ((!J_3) || (!I_3)
                                                         || (!O_3)) && ((!J_3)
                                                                        ||
                                                                        (!O_3)
                                                                        ||
                                                                        (!K_3))
               && ((!O_3) || (!(M_3 == N_3))) && ((!O_3) || (J_3 && O_3))
               && ((!O_3) || N_3) && ((!P_3) || (P_3 && O_3)) && ((!L_3)
                                                                  || (!O_3))
               && (!C_3) && P_3 && (!((H_3 <= 1) == I_3))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet__Bool ();
          L_1 = __VERIFIER_nondet_int ();
          if (((L_1 <= -1000000000) || (L_1 >= 1000000000)))
              abort ();
          M_1 = __VERIFIER_nondet_int ();
          if (((M_1 <= -1000000000) || (M_1 >= 1000000000)))
              abort ();
          N_1 = __VERIFIER_nondet_int ();
          if (((N_1 <= -1000000000) || (N_1 >= 1000000000)))
              abort ();
          B_1 = main_entry_0;
          G_1 = main_entry_1;
          if (!
              ((A_1 == B_1) && (D_1 == G_1) && (E_1 == G_1) && (F_1 == G_1)
               && ((!H_1) || (!K_1) || I_1) && ((!K_1) || (!J_1)
                                                || (L_1 == 1)) && ((!K_1)
                                                                   || (!J_1)
                                                                   || (M_1 ==
                                                                       L_1))
               && ((!J_1) || (K_1 && J_1)) && ((!K_1) || (K_1 && H_1))
               && (!C_1) && J_1 && (!((N_1 <= 1) == I_1))))
              abort ();
          main__lr_ph_0 = M_1;
          main__lr_ph_1 = N_1;
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          A_2 = main__lr_ph_0;
          H_2 = main__lr_ph_1;
          if (!
              ((C_2 == (2 * A_2)) && ((!E_2) || (!D_2) || (F_2 == C_2))
               && ((!E_2) || (!D_2) || (G_2 == F_2)) && ((!E_2) || (!D_2)
                                                         || B_2) && ((!D_2)
                                                                     || (E_2
                                                                         &&
                                                                         D_2))
               && D_2 && (!((H_2 <= C_2) == B_2))))
              abort ();
          main__lr_ph_0 = G_2;
          main__lr_ph_1 = H_2;
          goto main__lr_ph_0;

      default:
          abort ();
      }
  main__lr_ph_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          E_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          G_4 = __VERIFIER_nondet_int ();
          if (((G_4 <= -1000000000) || (G_4 >= 1000000000)))
              abort ();
          H_4 = __VERIFIER_nondet__Bool ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet__Bool ();
          L_4 = __VERIFIER_nondet__Bool ();
          M_4 = __VERIFIER_nondet__Bool ();
          N_4 = __VERIFIER_nondet__Bool ();
          O_4 = __VERIFIER_nondet__Bool ();
          A_4 = main__lr_ph_0;
          B_4 = main__lr_ph_1;
          if (!
              ((D_4 == (2 * A_4)) && ((!I_4) || (!E_4) || (F_4 == D_4))
               && ((!I_4) || (!E_4) || (G_4 == F_4)) && ((!I_4) || (!E_4)
                                                         || (!C_4)) && ((!I_4)
                                                                        ||
                                                                        (!N_4)
                                                                        ||
                                                                        (J_4
                                                                         ==
                                                                         H_4))
               && ((!I_4) || (L_4 == J_4) || (!N_4)) && ((!N_4)
                                                         || (!(L_4 == M_4)))
               && ((!N_4) || (I_4 && N_4)) && ((!N_4) || M_4) && ((!O_4)
                                                                  || (O_4
                                                                      && N_4))
               && ((!I_4) || (!((G_4 <= 1) == H_4))) && ((!I_4)
                                                         || (I_4 && E_4))
               && ((!K_4) || (!N_4)) && O_4 && (!((B_4 <= D_4) == C_4))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          A_2 = main__lr_ph_0;
          H_2 = main__lr_ph_1;
          if (!
              ((C_2 == (2 * A_2)) && ((!E_2) || (!D_2) || (F_2 == C_2))
               && ((!E_2) || (!D_2) || (G_2 == F_2)) && ((!E_2) || (!D_2)
                                                         || B_2) && ((!D_2)
                                                                     || (E_2
                                                                         &&
                                                                         D_2))
               && D_2 && (!((H_2 <= C_2) == B_2))))
              abort ();
          main__lr_ph_0 = G_2;
          main__lr_ph_1 = H_2;
          goto main__lr_ph_0;

      default:
          abort ();
      }

    // return expression

}

