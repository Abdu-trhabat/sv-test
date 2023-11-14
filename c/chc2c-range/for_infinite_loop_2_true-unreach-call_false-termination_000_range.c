// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/for_infinite_loop_2_true-unreach-call_false-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "for_infinite_loop_2_true-unreach-call_false-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_entry_0;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    _Bool H_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    int A_3;
    int B_3;
    int C_3;
    _Bool D_3;
    _Bool E_3;
    _Bool F_3;
    _Bool G_3;
    _Bool H_3;
    _Bool A_4;
    _Bool B_4;
    _Bool C_4;
    _Bool D_4;
    _Bool E_4;
    _Bool CHC_COMP_UNUSED_5;

    if (((main_entry_0 <= -1000000000) || (main_entry_0 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000)))
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
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          B_1 = main_entry_0;
          if (!
              ((A_1 == B_1) && ((!G_1) || F_1 || (!E_1))
               && ((!G_1) || (G_1 && E_1)) && ((!H_1) || (H_1 && G_1)) && D_1
               && H_1 && (!((C_1 <= 0) == D_1))))
              abort ();
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          if (!(((!A_2) || (B_2 && A_2)) && A_2 && ((!B_2) || C_2 || (!A_2))))
              abort ();
          goto main_postcall_0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet__Bool ();
          G_3 = __VERIFIER_nondet__Bool ();
          H_3 = __VERIFIER_nondet__Bool ();
          B_3 = main_entry_0;
          if (!
              ((A_3 == B_3) && ((!G_3) || (!F_3) || (!E_3))
               && ((!G_3) || (G_3 && E_3)) && ((!H_3) || (H_3 && G_3)) && D_3
               && (!G_3) && H_3 && (!((C_3 <= 0) == D_3))))
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
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          if (!(((!A_2) || (B_2 && A_2)) && A_2 && ((!B_2) || C_2 || (!A_2))))
              abort ();
          goto main_postcall_0;

      case 1:
          A_4 = __VERIFIER_nondet__Bool ();
          B_4 = __VERIFIER_nondet__Bool ();
          C_4 = __VERIFIER_nondet__Bool ();
          D_4 = __VERIFIER_nondet__Bool ();
          E_4 = __VERIFIER_nondet__Bool ();
          if (!
              (((!C_4) || (C_4 && A_4)) && ((!D_4) || (D_4 && C_4))
               && ((!E_4) || (E_4 && D_4)) && (!D_4) && E_4 && ((!C_4)
                                                                || (!B_4)
                                                                || (!A_4))))
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

