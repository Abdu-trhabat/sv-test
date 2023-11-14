// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/35.c_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "35.c_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int h6_0;
    int h6_1;
    int h6_2;
    int h6_3;
    int h8_0;
    int h8_1;
    int h8_2;
    int h8_3;
    int h11_0;
    int h11_1;
    int h11_2;
    int h11_3;
    int h17_0;
    int h17_1;
    int h17_2;
    int h17_3;
    int h9_0;
    int h9_1;
    int h9_2;
    int h9_3;
    int h7_0;
    int h7_1;
    int h7_2;
    int h7_3;
    int h14_0;
    int h14_1;
    int h14_2;
    int h14_3;
    int h4_0;
    int h4_1;
    int h4_2;
    int h4_3;
    int h5_0;
    int h5_1;
    int h5_2;
    int h5_3;
    int h10_0;
    int h10_1;
    int h10_2;
    int h10_3;
    int h12_0;
    int h12_1;
    int h12_2;
    int h12_3;
    int h3_0;
    int h3_1;
    int h3_2;
    int h3_3;
    int h2_0;
    int h2_1;
    int h2_2;
    int h2_3;
    int h13_0;
    int h13_1;
    int h13_2;
    int h13_3;
    int h1_0;
    int h1_1;
    int h1_2;
    int h1_3;
    int A_0;
    int B_0;
    int v_2_0;
    int v_3_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int A_14;
    int B_14;
    int C_14;
    int D_14;
    int A_15;
    int B_15;
    int C_15;
    int D_15;
    int A_17;
    int B_17;
    int C_17;
    int D_17;



    // main logic
    goto main_init;

  main_init:
    if (!((v_2_0 == A_0) && (v_3_0 == B_0)))
        abort ();
    h1_0 = A_0;
    h1_1 = B_0;
    h1_2 = v_2_0;
    h1_3 = v_3_0;
    D_1 = __VERIFIER_nondet_int ();
    A_1 = h1_0;
    B_1 = h1_1;
    C_1 = h1_2;
    E_1 = h1_3;
    if (!(D_1 == 0))
        abort ();
    h2_0 = A_1;
    h2_1 = B_1;
    h2_2 = C_1;
    h2_3 = D_1;
    A_2 = h2_0;
    B_2 = h2_1;
    C_2 = h2_2;
    D_2 = h2_3;
    if (!1)
        abort ();
    h3_0 = A_2;
    h3_1 = B_2;
    h3_2 = C_2;
    h3_3 = D_2;
    A_3 = h3_0;
    B_3 = h3_1;
    C_3 = h3_2;
    D_3 = h3_3;
    if (!1)
        abort ();
    h4_0 = A_3;
    h4_1 = B_3;
    h4_2 = C_3;
    h4_3 = D_3;
    A_4 = h4_0;
    B_4 = h4_1;
    C_4 = h4_2;
    D_4 = h4_3;
    if (!1)
        abort ();
    h5_0 = A_4;
    h5_1 = B_4;
    h5_2 = C_4;
    h5_3 = D_4;
    A_6 = h5_0;
    B_6 = h5_1;
    C_6 = h5_2;
    D_6 = h5_3;
    if (!1)
        abort ();
    h6_0 = A_6;
    h6_1 = B_6;
    h6_2 = C_6;
    h6_3 = D_6;
    goto h6;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  h6:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_9 = h6_0;
          B_9 = h6_1;
          C_9 = h6_2;
          D_9 = h6_3;
          if (!((C_9 + (-1 * D_9)) <= 0))
              abort ();
          h9_0 = A_9;
          h9_1 = B_9;
          h9_2 = C_9;
          h9_3 = D_9;
          A_10 = h9_0;
          B_10 = h9_1;
          C_10 = h9_2;
          D_10 = h9_3;
          if (!1)
              abort ();
          h10_0 = A_10;
          h10_1 = B_10;
          h10_2 = C_10;
          h10_3 = D_10;
          A_11 = h10_0;
          B_11 = h10_1;
          C_11 = h10_2;
          D_11 = h10_3;
          if (!1)
              abort ();
          h11_0 = A_11;
          h11_1 = B_11;
          h11_2 = C_11;
          h11_3 = D_11;
          A_12 = h11_0;
          B_12 = h11_1;
          C_12 = h11_2;
          D_12 = h11_3;
          if (!1)
              abort ();
          h12_0 = A_12;
          h12_1 = B_12;
          h12_2 = C_12;
          h12_3 = D_12;
          A_13 = h12_0;
          B_13 = h12_1;
          C_13 = h12_2;
          D_13 = h12_3;
          if (!(C_13 >= 1))
              abort ();
          h13_0 = A_13;
          h13_1 = B_13;
          h13_2 = C_13;
          h13_3 = D_13;
          A_14 = h13_0;
          B_14 = h13_1;
          C_14 = h13_2;
          D_14 = h13_3;
          if (!1)
              abort ();
          h14_0 = A_14;
          h14_1 = B_14;
          h14_2 = C_14;
          h14_3 = D_14;
          A_15 = h14_0;
          B_15 = h14_1;
          C_15 = h14_2;
          D_15 = h14_3;
          if (!((C_15 + (-1 * D_15)) >= 1))
              abort ();
          h17_0 = A_15;
          h17_1 = B_15;
          h17_2 = C_15;
          h17_3 = D_15;
          A_17 = h17_0;
          B_17 = h17_1;
          C_17 = h17_2;
          D_17 = h17_3;
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_7 = h6_0;
          B_7 = h6_1;
          C_7 = h6_2;
          D_7 = h6_3;
          if (!((C_7 + (-1 * D_7)) >= 1))
              abort ();
          h7_0 = A_7;
          h7_1 = B_7;
          h7_2 = C_7;
          h7_3 = D_7;
          D_8 = __VERIFIER_nondet_int ();
          A_8 = h7_0;
          B_8 = h7_1;
          C_8 = h7_2;
          E_8 = h7_3;
          if (!(E_8 == (D_8 + -1)))
              abort ();
          h8_0 = A_8;
          h8_1 = B_8;
          h8_2 = C_8;
          h8_3 = D_8;
          A_5 = h8_0;
          B_5 = h8_1;
          C_5 = h8_2;
          D_5 = h8_3;
          if (!1)
              abort ();
          h5_0 = A_5;
          h5_1 = B_5;
          h5_2 = C_5;
          h5_3 = D_5;
          A_6 = h5_0;
          B_6 = h5_1;
          C_6 = h5_2;
          D_6 = h5_3;
          if (!1)
              abort ();
          h6_0 = A_6;
          h6_1 = B_6;
          h6_2 = C_6;
          h6_3 = D_6;
          goto h6;

      default:
          abort ();
      }
  h18:
    goto h18;

    // return expression

}

