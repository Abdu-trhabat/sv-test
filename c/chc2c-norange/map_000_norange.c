// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/map_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "map_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int map_unknown_2_0;
    int map_unknown_2_1;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;
    int B_2;
    int C_2;



    // main logic
    goto main_init;

  main_init:
    if (!((!(0 == C_1)) && (A_1 == 0) && (!((0 == C_1) == (B_1 == 0)))))
        abort ();
    map_unknown_2_0 = A_1;
    map_unknown_2_1 = B_1;
    A_0 = __VERIFIER_nondet_int ();
    B_0 = __VERIFIER_nondet_int ();
    C_0 = __VERIFIER_nondet_int ();
    E_0 = map_unknown_2_0;
    D_0 = map_unknown_2_1;
    if (!
        ((0 == C_0) && (D_0 == (B_0 + -1)) && (A_0 == (E_0 + 1))
         && (!((0 == C_0) == (B_0 == 0)))))
        abort ();
    map_unknown_2_0 = A_0;
    map_unknown_2_1 = B_0;
    goto map_unknown_2_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  map_unknown_2_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          B_2 = map_unknown_2_0;
          A_2 = map_unknown_2_1;
          if (!((0 == C_2) && (!((0 == C_2) == (B_2 == A_2)))))
              abort ();
          goto main_error;

      case 1:
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          E_0 = map_unknown_2_0;
          D_0 = map_unknown_2_1;
          if (!
              ((0 == C_0) && (D_0 == (B_0 + -1)) && (A_0 == (E_0 + 1))
               && (!((0 == C_0) == (B_0 == 0)))))
              abort ();
          map_unknown_2_0 = A_0;
          map_unknown_2_1 = B_0;
          goto map_unknown_2_0;

      default:
          abort ();
      }

    // return expression

}

