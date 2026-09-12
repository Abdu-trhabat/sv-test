// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/nec20_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nec20_false-unreach-call_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_entry_0;
    int main__bb_0;
    int main__bb_1;
    int main__bb_2;
    int A_0;
    int A_1;
    int B_1;
    _Bool C_1;
    int D_1;
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
    int C_3;
    int D_3;
    _Bool E_3;
    int F_3;
    _Bool G_3;
    int H_3;
    int I_3;
    _Bool J_3;
    _Bool K_3;
    _Bool L_3;
    _Bool M_3;
    _Bool N_3;
    _Bool CHC_COMP_UNUSED_4;

    if (((main_entry_0 <= -1000000000) || (main_entry_0 >= 1000000000))
        || ((main__bb_0 <= -1000000000) || (main__bb_0 >= 1000000000))
        || ((main__bb_1 <= -1000000000) || (main__bb_1 >= 1000000000))
        || ((main__bb_2 <= -1000000000) || (main__bb_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((L_2 <= -1000000000) || (L_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((I_3 <= -1000000000) || (I_3 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    main_entry_0 = A_0;
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
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet__Bool ();
    H_1 = __VERIFIER_nondet_int ();
    if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
        abort ();
    I_1 = __VERIFIER_nondet_int ();
    if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
        abort ();
    J_1 = __VERIFIER_nondet_int ();
    if (((J_1 <= -1000000000) || (J_1 >= 1000000000)))
        abort ();
    K_1 = __VERIFIER_nondet_int ();
    if (((K_1 <= -1000000000) || (K_1 >= 1000000000)))
        abort ();
    B_1 = main_entry_0;
    if (!
        ((K_1 == (C_1 ? 0 : 1023)) && ((!G_1) || (!F_1) || (E_1 == D_1))
         && ((!G_1) || (!F_1) || (H_1 == 0)) && ((!G_1) || (!F_1)
                                                 || (I_1 == H_1)) && ((!G_1)
                                                                      ||
                                                                      (!F_1)
                                                                      || (J_1
                                                                          ==
                                                                          E_1))
         && ((!F_1) || (G_1 && F_1)) && F_1 && (A_1 == B_1)))
        abort ();
    main__bb_0 = I_1;
    main__bb_1 = J_1;
    main__bb_2 = K_1;
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
    J_2 = __VERIFIER_nondet_int ();
    if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
        abort ();
    K_2 = __VERIFIER_nondet_int ();
    if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
        abort ();
    B_2 = main__bb_0;
    A_2 = main__bb_1;
    L_2 = main__bb_2;
    if (!
        ((D_2 == (A_2 + 2)) && (E_2 == (B_2 + 1))
         && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                   || (I_2 == E_2)) && ((!H_2)
                                                                        ||
                                                                        (!G_2)
                                                                        ||
                                                                        (J_2
                                                                         ==
                                                                         I_2))
         && ((!H_2) || (!G_2) || (K_2 == F_2)) && ((!H_2) || (!G_2) || C_2)
         && ((!G_2) || (H_2 && G_2)) && G_2 && (!((L_2 <= B_2) == C_2))))
        abort ();
    main__bb_0 = J_2;
    main__bb_1 = K_2;
    main__bb_2 = L_2;
    goto main__bb_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main__bb_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          G_3 = __VERIFIER_nondet__Bool ();
          H_3 = __VERIFIER_nondet_int ();
          if (((H_3 <= -1000000000) || (H_3 >= 1000000000)))
              abort ();
          I_3 = __VERIFIER_nondet_int ();
          if (((I_3 <= -1000000000) || (I_3 >= 1000000000)))
              abort ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet__Bool ();
          C_3 = main__bb_0;
          B_3 = main__bb_1;
          D_3 = main__bb_2;
          if (!
              ((A_3 == (C_3 + 1)) && (F_3 == (B_3 + 2))
               && ((!M_3) || (!G_3) || (I_3 == H_3)) && ((!M_3) || (!G_3)
                                                         || (H_3 == F_3))
               && ((!M_3) || (!E_3) || (!G_3)) && ((!M_3)
                                                   ||
                                                   (!((1025 <= I_3) == K_3)))
               && ((!M_3) || (!(K_3 == L_3))) && ((!M_3) || (M_3 && G_3))
               && ((!M_3) || L_3) && ((!N_3) || (N_3 && M_3)) && ((!M_3)
                                                                  || (!J_3))
               && N_3 && (!((D_3 <= C_3) == E_3))))
              abort ();
          CHC_COMP_UNUSED_4 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
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
          J_2 = __VERIFIER_nondet_int ();
          if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
              abort ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          B_2 = main__bb_0;
          A_2 = main__bb_1;
          L_2 = main__bb_2;
          if (!
              ((D_2 == (A_2 + 2)) && (E_2 == (B_2 + 1))
               && ((!H_2) || (!G_2) || (F_2 == D_2)) && ((!H_2) || (!G_2)
                                                         || (I_2 == E_2))
               && ((!H_2) || (!G_2) || (J_2 == I_2)) && ((!H_2) || (!G_2)
                                                         || (K_2 == F_2))
               && ((!H_2) || (!G_2) || C_2) && ((!G_2) || (H_2 && G_2)) && G_2
               && (!((L_2 <= B_2) == C_2))))
              abort ();
          main__bb_0 = J_2;
          main__bb_1 = K_2;
          main__bb_2 = L_2;
          goto main__bb_0;

      default:
          abort ();
      }

    // return expression

}

