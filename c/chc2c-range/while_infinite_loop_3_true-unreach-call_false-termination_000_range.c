// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/while_infinite_loop_3_true-unreach-call_false-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "while_infinite_loop_3_true-unreach-call_false-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool A_3;
    _Bool B_3;
    _Bool C_3;
    _Bool D_3;
    _Bool A_4;
    _Bool B_4;
    _Bool C_4;
    _Bool D_4;
    _Bool E_4;
    _Bool CHC_COMP_UNUSED_5;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    goto main_entry;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_entry:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet__Bool ();
          B_3 = __VERIFIER_nondet__Bool ();
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet__Bool ();
          if (!
              (((!C_3) || (C_3 && A_3)) && ((!D_3) || (D_3 && C_3)) && (!C_3)
               && D_3 && ((!C_3) || (!B_3) || (!A_3))))
              abort ();
          CHC_COMP_UNUSED_5 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet__Bool ();
          B_1 = __VERIFIER_nondet__Bool ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          if (!
              (((!C_1) || (C_1 && A_1)) && ((!D_1) || (D_1 && C_1)) && D_1
               && ((!C_1) || B_1 || (!A_1))))
              abort ();
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          if (!(((!A_2) || (B_2 && A_2)) && A_2 && ((!B_2) || C_2 || (!A_2))))
              abort ();
          goto main_postcall_0;

      default:
          abort ();
      }
  main_postcall_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
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

      case 1:
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          if (!(((!A_2) || (B_2 && A_2)) && A_2 && ((!B_2) || C_2 || (!A_2))))
              abort ();
          goto main_postcall_0;

      default:
          abort ();
      }

    // return expression

}

