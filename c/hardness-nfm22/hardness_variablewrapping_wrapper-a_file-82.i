// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
double double_Array_0[2] = {
 3.75, 255.5
};
float float_Array_0[3] = {
 255.5, 63.5, 128.75
};
unsigned char unsigned_char_Array_0[2][2][2] = {
 {{2, 0}, {128, 10}}, {{25, 5}, {16, 32}}
};
unsigned char last_1_unsigned_char_Array_0_0__0__0_ = 2;
unsigned char last_1_unsigned_char_Array_0_0__0__1_ = 0;
unsigned char last_1_unsigned_char_Array_0_1__1__1_ = 32;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_unsigned_char_Array_0_0__0__1_ | last_1_unsigned_char_Array_0_0__0__0_;
 if ((last_1_unsigned_char_Array_0_1__1__1_ / -2) >= stepLocal_0) {
  unsigned_char_Array_0[1][1][1] = ((((unsigned_char_Array_0[1][0][0]) < 0 ) ? -(unsigned_char_Array_0[1][0][0]) : (unsigned_char_Array_0[1][0][0])));
 } else {
  unsigned_char_Array_0[1][1][1] = (unsigned_char_Array_0[0][1][0] - ((((unsigned_char_Array_0[1][1][0]) < 0 ) ? -(unsigned_char_Array_0[1][1][0]) : (unsigned_char_Array_0[1][1][0]))));
 }
 if (! BOOL_unsigned_char_Array_0[0]) {
  if (BOOL_unsigned_char_Array_0[0]) {
   float_Array_0[2] = ((((float_Array_0[1]) > (float_Array_0[0])) ? (float_Array_0[1]) : (float_Array_0[0])));
  }
 }
 double_Array_0[0] = float_Array_0[0];
 unsigned_char_Array_0[0][0][1] = unsigned_char_Array_0[1][0][0];
 double_Array_0[1] = float_Array_0[1];
 unsigned char stepLocal_1 = unsigned_char_Array_0[1][0][0];
 if ((unsigned_char_Array_0[1][1][1] + unsigned_char_Array_0[1][1][0]) >= stepLocal_1) {
  if (((((float_Array_0[0]) > ((float_Array_0[2] * float_Array_0[1]))) ? (float_Array_0[0]) : ((float_Array_0[2] * float_Array_0[1])))) <= float_Array_0[2]) {
   unsigned_char_Array_0[0][0][0] = ((((unsigned_char_Array_0[1][1][0]) > (unsigned_char_Array_0[1][0][1])) ? (unsigned_char_Array_0[1][1][0]) : (unsigned_char_Array_0[1][0][1])));
  } else {
   if (BOOL_unsigned_char_Array_0[0]) {
    unsigned_char_Array_0[0][0][0] = (unsigned_char_Array_0[1][1][0] + unsigned_char_Array_0[0][1][1]);
   }
  }
 } else {
  unsigned_char_Array_0[0][0][0] = unsigned_char_Array_0[1][0][0];
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854765600e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 unsigned_char_Array_0[1][0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0][0] <= 254);
 unsigned_char_Array_0[0][1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1][0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0][1][0] <= 254);
 unsigned_char_Array_0[1][1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1][0] <= 127);
 unsigned_char_Array_0[1][0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0][1] <= 254);
 unsigned_char_Array_0[0][1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1][1] <= 127);
}
void updateLastVariables() {
 last_1_unsigned_char_Array_0_0__0__0_ = unsigned_char_Array_0[0][0][0];
 last_1_unsigned_char_Array_0_0__0__1_ = unsigned_char_Array_0[0][0][1];
 last_1_unsigned_char_Array_0_1__1__1_ = unsigned_char_Array_0[1][1][1];
}
int property() {
 return ((((((! BOOL_unsigned_char_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[2] == ((float) ((((float_Array_0[1]) > (float_Array_0[0])) ? (float_Array_0[1]) : (float_Array_0[0]))))) : 1) : 1) && (((last_1_unsigned_char_Array_0_1__1__1_ / -2) >= (last_1_unsigned_char_Array_0_0__0__1_ | last_1_unsigned_char_Array_0_0__0__0_)) ? (unsigned_char_Array_0[1][1][1] == ((unsigned char) ((((unsigned_char_Array_0[1][0][0]) < 0 ) ? -(unsigned_char_Array_0[1][0][0]) : (unsigned_char_Array_0[1][0][0]))))) : (unsigned_char_Array_0[1][1][1] == ((unsigned char) (unsigned_char_Array_0[0][1][0] - ((((unsigned_char_Array_0[1][1][0]) < 0 ) ? -(unsigned_char_Array_0[1][1][0]) : (unsigned_char_Array_0[1][1][0])))))))) && (((unsigned_char_Array_0[1][1][1] + unsigned_char_Array_0[1][1][0]) >= unsigned_char_Array_0[1][0][0]) ? ((((((float_Array_0[0]) > ((float_Array_0[2] * float_Array_0[1]))) ? (float_Array_0[0]) : ((float_Array_0[2] * float_Array_0[1])))) <= float_Array_0[2]) ? (unsigned_char_Array_0[0][0][0] == ((unsigned char) ((((unsigned_char_Array_0[1][1][0]) > (unsigned_char_Array_0[1][0][1])) ? (unsigned_char_Array_0[1][1][0]) : (unsigned_char_Array_0[1][0][1]))))) : (BOOL_unsigned_char_Array_0[0] ? (unsigned_char_Array_0[0][0][0] == ((unsigned char) (unsigned_char_Array_0[1][1][0] + unsigned_char_Array_0[0][1][1]))) : 1)) : (unsigned_char_Array_0[0][0][0] == ((unsigned char) unsigned_char_Array_0[1][0][0])))) && (double_Array_0[0] == ((double) float_Array_0[0]))) && (unsigned_char_Array_0[0][0][1] == ((unsigned char) unsigned_char_Array_0[1][0][0]))) && (double_Array_0[1] == ((double) float_Array_0[1]))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
