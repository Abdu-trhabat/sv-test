// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/002-horn_004.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "002-horn_004_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int A_11;
    int B_11;
    int C_11;
    int D_11;

    if (((A_11 <= -1000000000) || (A_11 >= 1000000000))
        || ((B_11 <= -1000000000) || (B_11 >= 1000000000))
        || ((C_11 <= -1000000000) || (C_11 >= 1000000000))
        || ((D_11 <= -1000000000) || (D_11 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((D_11 == C_11) && (!(C_11 == 0)) && (C_11 == 1)
         && (!(A_11 == (B_11 + 1))) && (A_11 == B_11) && (D_11 == 0)))
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC__f:
    goto REC__f;
  REC_f_:
    goto REC_f_;
  REC_f_f:
    goto REC_f_f;

    // return expression

}

