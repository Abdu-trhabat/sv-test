// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/011c-horn_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "011c-horn_002_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int A_24;
    int B_24;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((A_24 == B_24) && (!(B_24 >= 2)) && (!(A_24 >= 1)) && (B_24 <= 1)
         && (!(A_24 <= -1)) && (!(A_24 == 0))))
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f_:
    goto REC_f_;
  REC_f_f:
    goto REC_f_f;
  REC__f:
    goto REC__f;

    // return expression

}

