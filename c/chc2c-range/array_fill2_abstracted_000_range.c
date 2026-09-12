// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/array_fill2_abstracted_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "array_fill2_abstracted_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int loopi_0;
    int loopi_1;
    int loopi_2;
    int loopi_3;
    int loopi_4;
    int loopi_5;
    int init_0;
    int init_1;
    int init_2;
    int init_3;
    int init_4;
    int write_0;
    int write_1;
    int write_2;
    int write_3;
    int write_4;
    int write_5;
    int write_6;
    int end_0;
    int end_1;
    int end_2;
    int end_3;
    int end_4;
    int loopj_0;
    int loopj_1;
    int loopj_2;
    int loopj_3;
    int loopj_4;
    int loopj_5;
    int loopj_6;
    int incrj_0;
    int incrj_1;
    int incrj_2;
    int incrj_3;
    int incrj_4;
    int incrj_5;
    int incrj_6;
    int incri_0;
    int incri_1;
    int incri_2;
    int incri_3;
    int incri_4;
    int incri_5;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int v_5_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int v_6_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int v_5_7;
    int v_6_7;
    int v_7_7;
    int v_8_7;
    int v_9_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;

    if (((loopi_0 <= -1000000000) || (loopi_0 >= 1000000000))
        || ((loopi_1 <= -1000000000) || (loopi_1 >= 1000000000))
        || ((loopi_2 <= -1000000000) || (loopi_2 >= 1000000000))
        || ((loopi_3 <= -1000000000) || (loopi_3 >= 1000000000))
        || ((loopi_4 <= -1000000000) || (loopi_4 >= 1000000000))
        || ((loopi_5 <= -1000000000) || (loopi_5 >= 1000000000))
        || ((init_0 <= -1000000000) || (init_0 >= 1000000000))
        || ((init_1 <= -1000000000) || (init_1 >= 1000000000))
        || ((init_2 <= -1000000000) || (init_2 >= 1000000000))
        || ((init_3 <= -1000000000) || (init_3 >= 1000000000))
        || ((init_4 <= -1000000000) || (init_4 >= 1000000000))
        || ((write_0 <= -1000000000) || (write_0 >= 1000000000))
        || ((write_1 <= -1000000000) || (write_1 >= 1000000000))
        || ((write_2 <= -1000000000) || (write_2 >= 1000000000))
        || ((write_3 <= -1000000000) || (write_3 >= 1000000000))
        || ((write_4 <= -1000000000) || (write_4 >= 1000000000))
        || ((write_5 <= -1000000000) || (write_5 >= 1000000000))
        || ((write_6 <= -1000000000) || (write_6 >= 1000000000))
        || ((end_0 <= -1000000000) || (end_0 >= 1000000000))
        || ((end_1 <= -1000000000) || (end_1 >= 1000000000))
        || ((end_2 <= -1000000000) || (end_2 >= 1000000000))
        || ((end_3 <= -1000000000) || (end_3 >= 1000000000))
        || ((end_4 <= -1000000000) || (end_4 >= 1000000000))
        || ((loopj_0 <= -1000000000) || (loopj_0 >= 1000000000))
        || ((loopj_1 <= -1000000000) || (loopj_1 >= 1000000000))
        || ((loopj_2 <= -1000000000) || (loopj_2 >= 1000000000))
        || ((loopj_3 <= -1000000000) || (loopj_3 >= 1000000000))
        || ((loopj_4 <= -1000000000) || (loopj_4 >= 1000000000))
        || ((loopj_5 <= -1000000000) || (loopj_5 >= 1000000000))
        || ((loopj_6 <= -1000000000) || (loopj_6 >= 1000000000))
        || ((incrj_0 <= -1000000000) || (incrj_0 >= 1000000000))
        || ((incrj_1 <= -1000000000) || (incrj_1 >= 1000000000))
        || ((incrj_2 <= -1000000000) || (incrj_2 >= 1000000000))
        || ((incrj_3 <= -1000000000) || (incrj_3 >= 1000000000))
        || ((incrj_4 <= -1000000000) || (incrj_4 >= 1000000000))
        || ((incrj_5 <= -1000000000) || (incrj_5 >= 1000000000))
        || ((incrj_6 <= -1000000000) || (incrj_6 >= 1000000000))
        || ((incri_0 <= -1000000000) || (incri_0 >= 1000000000))
        || ((incri_1 <= -1000000000) || (incri_1 >= 1000000000))
        || ((incri_2 <= -1000000000) || (incri_2 >= 1000000000))
        || ((incri_3 <= -1000000000) || (incri_3 >= 1000000000))
        || ((incri_4 <= -1000000000) || (incri_4 >= 1000000000))
        || ((incri_5 <= -1000000000) || (incri_5 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((v_6_2 <= -1000000000) || (v_6_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((G_6 <= -1000000000) || (G_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((v_5_7 <= -1000000000) || (v_5_7 >= 1000000000))
        || ((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000))
        || ((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000))
        || ((v_8_7 <= -1000000000) || (v_8_7 >= 1000000000))
        || ((v_9_7 <= -1000000000) || (v_9_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((H_8 <= -1000000000) || (H_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000))
        || ((F_9 <= -1000000000) || (F_9 >= 1000000000))
        || ((G_9 <= -1000000000) || (G_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000))
        || ((D_10 <= -1000000000) || (D_10 >= 1000000000))
        || ((E_10 <= -1000000000) || (E_10 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((0 <= C_0) && (!(B_0 <= D_0)) && (!(A_0 <= C_0)) && (0 <= D_0)))
        abort ();
    init_0 = A_0;
    init_1 = B_0;
    init_2 = C_0;
    init_3 = D_0;
    init_4 = E_0;
    v_5_1 = __VERIFIER_nondet_int ();
    if (((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000)))
        abort ();
    A_1 = init_0;
    B_1 = init_1;
    C_1 = init_2;
    D_1 = init_3;
    E_1 = init_4;
    if (!(0 == v_5_1))
        abort ();
    loopi_0 = A_1;
    loopi_1 = B_1;
    loopi_2 = v_5_1;
    loopi_3 = C_1;
    loopi_4 = D_1;
    loopi_5 = E_1;
    goto loopi;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  loopi:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_6_2 = __VERIFIER_nondet_int ();
          if (((v_6_2 <= -1000000000) || (v_6_2 >= 1000000000)))
              abort ();
          A_2 = loopi_0;
          B_2 = loopi_1;
          C_2 = loopi_2;
          D_2 = loopi_3;
          E_2 = loopi_4;
          F_2 = loopi_5;
          if (!((!(A_2 <= C_2)) && (0 == v_6_2)))
              abort ();
          loopj_0 = A_2;
          loopj_1 = B_2;
          loopj_2 = C_2;
          loopj_3 = v_6_2;
          loopj_4 = D_2;
          loopj_5 = E_2;
          loopj_6 = F_2;
          goto loopj;

      case 1:
          A_3 = loopi_0;
          B_3 = loopi_1;
          C_3 = loopi_2;
          D_3 = loopi_3;
          E_3 = loopi_4;
          F_3 = loopi_5;
          if (!(C_3 >= A_3))
              abort ();
          end_0 = A_3;
          end_1 = B_3;
          end_2 = D_3;
          end_3 = E_3;
          end_4 = F_3;
          A_10 = end_0;
          B_10 = end_1;
          C_10 = end_2;
          D_10 = end_3;
          E_10 = end_4;
          if (!(!(E_10 == 42)))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  write:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = write_0;
          B_6 = write_1;
          C_6 = write_2;
          D_6 = write_3;
          E_6 = write_4;
          F_6 = write_5;
          G_6 = write_6;
          if (!((!(C_6 == E_6)) || (!(D_6 == F_6))))
              abort ();
          incrj_0 = A_6;
          incrj_1 = B_6;
          incrj_2 = C_6;
          incrj_3 = D_6;
          incrj_4 = E_6;
          incrj_5 = F_6;
          incrj_6 = G_6;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = incrj_0;
          C_8 = incrj_1;
          D_8 = incrj_2;
          E_8 = incrj_3;
          F_8 = incrj_4;
          G_8 = incrj_5;
          H_8 = incrj_6;
          if (!(A_8 == (E_8 + 1)))
              abort ();
          loopj_0 = B_8;
          loopj_1 = C_8;
          loopj_2 = D_8;
          loopj_3 = A_8;
          loopj_4 = F_8;
          loopj_5 = G_8;
          loopj_6 = H_8;
          goto loopj;

      case 1:
          v_9_7 = __VERIFIER_nondet_int ();
          if (((v_9_7 <= -1000000000) || (v_9_7 >= 1000000000)))
              abort ();
          v_8_7 = __VERIFIER_nondet_int ();
          if (((v_8_7 <= -1000000000) || (v_8_7 >= 1000000000)))
              abort ();
          v_7_7 = __VERIFIER_nondet_int ();
          if (((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000)))
              abort ();
          A_7 = write_0;
          B_7 = write_1;
          C_7 = write_2;
          D_7 = write_3;
          v_5_7 = write_4;
          v_6_7 = write_5;
          E_7 = write_6;
          if (!
              ((v_5_7 == C_7) && (v_6_7 == D_7) && (v_7_7 == C_7)
               && (v_8_7 == D_7) && (42 == v_9_7)))
              abort ();
          incrj_0 = A_7;
          incrj_1 = B_7;
          incrj_2 = C_7;
          incrj_3 = D_7;
          incrj_4 = v_7_7;
          incrj_5 = v_8_7;
          incrj_6 = v_9_7;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = incrj_0;
          C_8 = incrj_1;
          D_8 = incrj_2;
          E_8 = incrj_3;
          F_8 = incrj_4;
          G_8 = incrj_5;
          H_8 = incrj_6;
          if (!(A_8 == (E_8 + 1)))
              abort ();
          loopj_0 = B_8;
          loopj_1 = C_8;
          loopj_2 = D_8;
          loopj_3 = A_8;
          loopj_4 = F_8;
          loopj_5 = G_8;
          loopj_6 = H_8;
          goto loopj;

      default:
          abort ();
      }
  loopj:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = loopj_0;
          B_4 = loopj_1;
          C_4 = loopj_2;
          D_4 = loopj_3;
          E_4 = loopj_4;
          F_4 = loopj_5;
          G_4 = loopj_6;
          if (!(!(B_4 <= D_4)))
              abort ();
          write_0 = A_4;
          write_1 = B_4;
          write_2 = C_4;
          write_3 = D_4;
          write_4 = E_4;
          write_5 = F_4;
          write_6 = G_4;
          goto write;

      case 1:
          A_5 = loopj_0;
          B_5 = loopj_1;
          C_5 = loopj_2;
          D_5 = loopj_3;
          E_5 = loopj_4;
          F_5 = loopj_5;
          G_5 = loopj_6;
          if (!(D_5 >= B_5))
              abort ();
          incri_0 = A_5;
          incri_1 = B_5;
          incri_2 = C_5;
          incri_3 = E_5;
          incri_4 = F_5;
          incri_5 = G_5;
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = incri_0;
          C_9 = incri_1;
          D_9 = incri_2;
          E_9 = incri_3;
          F_9 = incri_4;
          G_9 = incri_5;
          if (!(A_9 == (D_9 + 1)))
              abort ();
          loopi_0 = B_9;
          loopi_1 = C_9;
          loopi_2 = A_9;
          loopi_3 = E_9;
          loopi_4 = F_9;
          loopi_5 = G_9;
          goto loopi;

      default:
          abort ();
      }

    // return expression

}

