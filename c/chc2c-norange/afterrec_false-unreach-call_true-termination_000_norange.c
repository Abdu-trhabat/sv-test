// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/afterrec_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "afterrec_false-unreach-call_true-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_f_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    int D_1;
    int E_1;
    _Bool A_2;
    int B_2;
    _Bool C_2;
    int D_2;
    _Bool E_2;
    _Bool F_2;
    int G_2;
    int H_2;
    _Bool A_3;
    int B_3;
    _Bool C_3;
    int D_3;
    _Bool E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool CHC_COMP_UNUSED_4;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_1 = __VERIFIER_nondet__Bool ();
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet_int ();
    E_1 = __VERIFIER_nondet_int ();
    if (!
        (((!C_1) || (!B_1) || (E_1 == D_1)) && ((!B_1) || (C_1 && B_1))
         && (!A_1) && B_1 && ((!C_1) || (!B_1) || (D_1 == 4))))
        abort ();
    main_f_0 = E_1;
    A_2 = __VERIFIER_nondet__Bool ();
    C_2 = __VERIFIER_nondet__Bool ();
    D_2 = __VERIFIER_nondet_int ();
    E_2 = __VERIFIER_nondet__Bool ();
    F_2 = __VERIFIER_nondet__Bool ();
    G_2 = __VERIFIER_nondet_int ();
    H_2 = __VERIFIER_nondet_int ();
    B_2 = main_f_0;
    if (!
        ((D_2 == (B_2 + -1)) && ((!F_2) || (!E_2) || (G_2 == D_2))
         && ((!F_2) || (!E_2) || (H_2 == G_2)) && ((!F_2) || (!E_2) || (!C_2))
         && ((!E_2) || (F_2 && E_2)) && (!A_2) && E_2
         && (!((3 <= B_2) == A_2))))
        abort ();
    main_f_0 = H_2;
    goto main_f_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_f_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet__Bool ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          D_3 = main_f_0;
          if (!
              ((B_3 == (D_3 + -1)) && ((!E_3) || (G_3 == F_3) || (!I_3))
               && ((!E_3) || (F_3 == D_3) || (!I_3)) && ((!E_3) || C_3
                                                         || (!I_3)) && ((!I_3)
                                                                        ||
                                                                        (!((4
                                                                            <=
                                                                            G_3)
                                                                           ==
                                                                           H_3)))
               && ((!I_3) || (E_3 && I_3)) && ((!J_3) || (J_3 && I_3)) && (H_3
                                                                           ||
                                                                           (!I_3))
               && (!A_3) && J_3 && (!((3 <= D_3) == A_3))))
              abort ();
          CHC_COMP_UNUSED_4 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet_int ();
          H_2 = __VERIFIER_nondet_int ();
          B_2 = main_f_0;
          if (!
              ((D_2 == (B_2 + -1)) && ((!F_2) || (!E_2) || (G_2 == D_2))
               && ((!F_2) || (!E_2) || (H_2 == G_2)) && ((!F_2) || (!E_2)
                                                         || (!C_2)) && ((!E_2)
                                                                        ||
                                                                        (F_2
                                                                         &&
                                                                         E_2))
               && (!A_2) && E_2 && (!((3 <= B_2) == A_2))))
              abort ();
          main_f_0 = H_2;
          goto main_f_0;

      default:
          abort ();
      }

    // return expression

}

