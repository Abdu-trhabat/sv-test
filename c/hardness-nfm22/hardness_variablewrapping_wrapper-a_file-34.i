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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
 {0, 1, 1}, {0, 0, 1}
};
double double_Array_0[2] = {
 10.6, 16.6
};
signed char signed_char_Array_0[5] = {
 10, 4, 64, -4, 32
};
unsigned char unsigned_char_Array_0[3] = {
 64, 100, 100
};
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 0;
void initially(void) {
}
void step(void) {
 if (last_1_BOOL_unsigned_char_Array_0_1__1_) {
  if (last_1_BOOL_unsigned_char_Array_0_1__1_) {
   double_Array_0[1] = ((((double_Array_0[0]) < 0 ) ? -(double_Array_0[0]) : (double_Array_0[0])));
  }
 }
 if (double_Array_0[1] >= (- (double_Array_0[0] * double_Array_0[1]))) {
  signed_char_Array_0[2] = signed_char_Array_0[4];
 }
 if (BOOL_unsigned_char_Array_0[0][2] || (256 >= (signed_char_Array_0[2] + 4))) {
  BOOL_unsigned_char_Array_0[1][1] = ((BOOL_unsigned_char_Array_0[1][2] || BOOL_unsigned_char_Array_0[0][2]) || BOOL_unsigned_char_Array_0[0][1]);
 } else {
  BOOL_unsigned_char_Array_0[1][1] = (! (! (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][0])));
 }
 signed long int stepLocal_1 = (unsigned_char_Array_0[2] + unsigned_char_Array_0[0]) - ((((unsigned_char_Array_0[1]) < (1)) ? (unsigned_char_Array_0[1]) : (1)));
 signed char stepLocal_0 = signed_char_Array_0[2];
 if (-10 >= stepLocal_0) {
  if (stepLocal_1 > (~ signed_char_Array_0[2])) {
   signed_char_Array_0[0] = (signed_char_Array_0[3] + signed_char_Array_0[4]);
  } else {
   signed_char_Array_0[0] = signed_char_Array_0[1];
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 BOOL_unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] <= 1);
 BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -63);
 assume_abort_if_not(signed_char_Array_0[3] <= 63);
 signed_char_Array_0[4] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[4] >= -63);
 assume_abort_if_not(signed_char_Array_0[4] <= 63);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 64);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 128);
}
void updateLastVariables() {
 last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
}
int property() {
 return (((last_1_BOOL_unsigned_char_Array_0_1__1_ ? (last_1_BOOL_unsigned_char_Array_0_1__1_ ? (double_Array_0[1] == ((double) ((((double_Array_0[0]) < 0 ) ? -(double_Array_0[0]) : (double_Array_0[0]))))) : 1) : 1) && ((BOOL_unsigned_char_Array_0[0][2] || (256 >= (signed_char_Array_0[2] + 4))) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) ((BOOL_unsigned_char_Array_0[1][2] || BOOL_unsigned_char_Array_0[0][2]) || BOOL_unsigned_char_Array_0[0][1]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (! (! (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][0]))))))) && ((-10 >= signed_char_Array_0[2]) ? ((((unsigned_char_Array_0[2] + unsigned_char_Array_0[0]) - ((((unsigned_char_Array_0[1]) < (1)) ? (unsigned_char_Array_0[1]) : (1)))) > (~ signed_char_Array_0[2])) ? (signed_char_Array_0[0] == ((signed char) (signed_char_Array_0[3] + signed_char_Array_0[4]))) : (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[1]))) : 1)) && ((double_Array_0[1] >= (- (double_Array_0[0] * double_Array_0[1]))) ? (signed_char_Array_0[2] == ((signed char) signed_char_Array_0[4])) : 1)
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
