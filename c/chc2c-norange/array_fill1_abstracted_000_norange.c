// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/array_fill1_abstracted_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "array_fill1_abstracted_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int write_0;
    int write_1;
    int write_2;
    int write_3;
    int end_0;
    int end_1;
    int end_2;
    int loop_0;
    int loop_1;
    int loop_2;
    int loop_3;
    int incr_0;
    int incr_1;
    int incr_2;
    int incr_3;
    int A_0;
    int B_0;
    int C_0;
    int v_3_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int v_4_3;
    int v_5_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int A_6;
    int B_6;
    int C_6;



    // main logic
    goto main_init;

  main_init:
    if (!((!(A_0 <= B_0)) && (0 <= B_0) && (0 == v_3_0)))
        abort ();
    loop_0 = A_0;
    loop_1 = v_3_0;
    loop_2 = B_0;
    loop_3 = C_0;
    goto loop;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  write:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = write_0;
          B_2 = write_1;
          C_2 = write_2;
          D_2 = write_3;
          if (!(!(B_2 == C_2)))
              abort ();
          incr_0 = A_2;
          incr_1 = B_2;
          incr_2 = C_2;
          incr_3 = D_2;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = incr_0;
          C_4 = incr_1;
          D_4 = incr_2;
          E_4 = incr_3;
          if (!(A_4 == (C_4 + 1)))
              abort ();
          loop_0 = B_4;
          loop_1 = A_4;
          loop_2 = D_4;
          loop_3 = E_4;
          goto loop;

      case 1:
          v_4_3 = __VERIFIER_nondet_int ();
          v_5_3 = __VERIFIER_nondet_int ();
          A_3 = write_0;
          B_3 = write_1;
          C_3 = write_2;
          D_3 = write_3;
          if (!((v_4_3 == B_3) && (42 == v_5_3)))
              abort ();
          incr_0 = A_3;
          incr_1 = B_3;
          incr_2 = v_4_3;
          incr_3 = v_5_3;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = incr_0;
          C_4 = incr_1;
          D_4 = incr_2;
          E_4 = incr_3;
          if (!(A_4 == (C_4 + 1)))
              abort ();
          loop_0 = B_4;
          loop_1 = A_4;
          loop_2 = D_4;
          loop_3 = E_4;
          goto loop;

      default:
          abort ();
      }
  loop:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = loop_0;
          B_1 = loop_1;
          C_1 = loop_2;
          D_1 = loop_3;
          if (!(!(A_1 <= B_1)))
              abort ();
          write_0 = A_1;
          write_1 = B_1;
          write_2 = C_1;
          write_3 = D_1;
          goto write;

      case 1:
          A_5 = loop_0;
          B_5 = loop_1;
          C_5 = loop_2;
          D_5 = loop_3;
          if (!(B_5 >= A_5))
              abort ();
          end_0 = A_5;
          end_1 = C_5;
          end_2 = D_5;
          A_6 = end_0;
          B_6 = end_1;
          C_6 = end_2;
          if (!((B_6 >= 0) && (!(A_6 <= B_6)) && (!(C_6 == 42))))
              abort ();
          goto main_error;

      default:
          abort ();
      }

    // return expression

}

