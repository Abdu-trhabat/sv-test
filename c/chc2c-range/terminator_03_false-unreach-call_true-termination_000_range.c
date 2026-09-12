// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/terminator_03_false-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "terminator_03_false-unreach-call_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__preheader_0;
    int main__preheader_1;
    int main_entry_0;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    _Bool D_1;
    _Bool E_1;
    int F_1;
    _Bool G_1;
    _Bool H_1;
    int I_1;
    int J_1;
    int K_1;
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
    int C_3;
    int D_3;
    _Bool E_3;
    _Bool F_3;
    _Bool G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool K_3;
    _Bool L_3;
    int A_4;
    int B_4;
    _Bool C_4;
    _Bool D_4;
    int E_4;
    _Bool F_4;
    _Bool G_4;
    _Bool H_4;
    _Bool I_4;
    _Bool J_4;
    _Bool K_4;
    _Bool L_4;
    _Bool M_4;
    _Bool CHC_COMP_UNUSED_5;

    if (((main__preheader_0 <= -1000000000)
         || (main__preheader_0 >= 1000000000))
        || ((main__preheader_1 <= -1000000000)
            || (main__preheader_1 >= 1000000000))
        || ((main_entry_0 <= -1000000000) || (main_entry_0 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000)))
        abort ();

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
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet_int ();
          if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
              abort ();
          J_1 = __VERIFIER_nondet_int ();
          if (((J_1 <= -1000000000) || (J_1 >= 1000000000)))
              abort ();
          K_1 = __VERIFIER_nondet_int ();
          if (((K_1 <= -1000000000) || (K_1 >= 1000000000)))
              abort ();
          C_1 = main_entry_0;
          if (!
              ((A_1 == C_1) && (B_1 == C_1) && ((!H_1) || E_1 || (!D_1))
               && ((!H_1) || (!G_1) || (I_1 == F_1)) && ((!H_1) || (!G_1)
                                                         || (K_1 == I_1))
               && ((!G_1) || (H_1 && G_1)) && ((!H_1) || (H_1 && D_1)) && G_1
               && (!((J_1 <= 0) == E_1))))
              abort ();
          main__preheader_0 = J_1;
          main__preheader_1 = K_1;
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          G_2 = main__preheader_0;
          A_2 = main__preheader_1;
          if (!
              ((C_2 == (A_2 + G_2)) && ((!E_2) || (!D_2) || (F_2 == C_2))
               && ((!E_2) || (!D_2) || (H_2 == F_2)) && ((!E_2) || (!D_2)
                                                         || B_2) && ((!D_2)
                                                                     || (E_2
                                                                         &&
                                                                         D_2))
               && D_2 && (!((100 <= A_2) == B_2))))
              abort ();
          main__preheader_0 = G_2;
          main__preheader_1 = H_2;
          goto main__preheader_0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet__Bool ();
          G_3 = __VERIFIER_nondet__Bool ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          C_3 = main_entry_0;
          if (!
              ((A_3 == C_3) && (B_3 == C_3)
               && ((I_3 == G_3) || (!K_3) || (!F_3)) && (G_3 || (!K_3)
                                                         || (!F_3)) && ((!E_3)
                                                                        ||
                                                                        (!K_3)
                                                                        ||
                                                                        (!F_3))
               && ((!K_3) || (!(I_3 == J_3))) && ((!K_3) || (F_3 && K_3))
               && ((!K_3) || J_3) && ((!L_3) || (L_3 && K_3)) && ((!H_3)
                                                                  || (!K_3))
               && L_3 && (!((D_3 <= 0) == E_3))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main__preheader_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          G_2 = main__preheader_0;
          A_2 = main__preheader_1;
          if (!
              ((C_2 == (A_2 + G_2)) && ((!E_2) || (!D_2) || (F_2 == C_2))
               && ((!E_2) || (!D_2) || (H_2 == F_2)) && ((!E_2) || (!D_2)
                                                         || B_2) && ((!D_2)
                                                                     || (E_2
                                                                         &&
                                                                         D_2))
               && D_2 && (!((100 <= A_2) == B_2))))
              abort ();
          main__preheader_0 = G_2;
          main__preheader_1 = H_2;
          goto main__preheader_0;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet__Bool ();
          F_4 = __VERIFIER_nondet__Bool ();
          G_4 = __VERIFIER_nondet__Bool ();
          H_4 = __VERIFIER_nondet__Bool ();
          I_4 = __VERIFIER_nondet__Bool ();
          J_4 = __VERIFIER_nondet__Bool ();
          K_4 = __VERIFIER_nondet__Bool ();
          L_4 = __VERIFIER_nondet__Bool ();
          M_4 = __VERIFIER_nondet__Bool ();
          E_4 = main__preheader_0;
          B_4 = main__preheader_1;
          if (!
              ((A_4 == (B_4 + E_4)) && ((!G_4) || (!D_4) || (!C_4))
               && ((!L_4) || (H_4 == F_4) || (!G_4)) && ((J_4 == H_4)
                                                         || (!L_4) || (!G_4))
               && ((!L_4) || (!(J_4 == K_4))) && ((!L_4) || (G_4 && L_4))
               && ((!L_4) || K_4) && ((!M_4) || (M_4 && L_4)) && ((!G_4)
                                                                  ||
                                                                  (!((1 <=
                                                                      E_4) ==
                                                                     F_4)))
               && ((!G_4) || (G_4 && C_4)) && ((!I_4) || (!L_4)) && M_4
               && (!((100 <= B_4) == D_4))))
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

