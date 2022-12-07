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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
double double_Array_0[2][2] = {
 {-0.8, 1000000.875}, {49.25, 9.15}
};
float float_Array_0[1] = {
 -0.5
};
signed char signed_char_Array_0[5] = {
 32, -10, 16, 2, 2
};
signed long int signed_long_int_Array_0[2] = {
 1000000000, 32
};
unsigned long int unsigned_long_int_Array_0[2] = {
 8, 5
};
unsigned short int unsigned_short_int_Array_0[2] = {
 58996, 32
};
double last_1_double_Array_0_1__1_ = 9.15;
void initially(void) {
}
void step(void) {
 unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[0];
 float_Array_0[0] = double_Array_0[0][0];
 signed_char_Array_0[4] = signed_char_Array_0[0];
 BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];
 signed char stepLocal_1 = signed_char_Array_0[4];
 if ((- (unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[1])) >= stepLocal_1) {
  signed_char_Array_0[1] = (signed_char_Array_0[0] - ((((signed_char_Array_0[2]) > (signed_char_Array_0[3])) ? (signed_char_Array_0[2]) : (signed_char_Array_0[3]))));
 } else {
  signed_char_Array_0[1] = ((((signed_char_Array_0[0]) < (signed_char_Array_0[3])) ? (signed_char_Array_0[0]) : (signed_char_Array_0[3])));
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  signed_long_int_Array_0[1] = (signed_char_Array_0[0] - signed_char_Array_0[3]);
 } else {
  signed_long_int_Array_0[1] = (signed_char_Array_0[2] - ((signed_long_int_Array_0[0] - 4) + ((((unsigned_short_int_Array_0[1]) < 0 ) ? -(unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[1])))));
 }
 signed long int stepLocal_0 = signed_long_int_Array_0[1];
 if (stepLocal_0 < unsigned_long_int_Array_0[1]) {
  double_Array_0[1][1] = -0.5;
 } else {
  if ((- last_1_double_Array_0_1__1_) == (double_Array_0[0][1] - double_Array_0[1][0])) {
   double_Array_0[1][1] = double_Array_0[0][0];
  } else {
   double_Array_0[1][1] = double_Array_0[0][0];
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854765600e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854765600e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -1);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= 0);
 assume_abort_if_not(signed_char_Array_0[2] <= 126);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= 0);
 assume_abort_if_not(signed_char_Array_0[3] <= 126);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 536870911);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}
void updateLastVariables() {
 last_1_double_Array_0_1__1_ = double_Array_0[1][1];
}
int property() {
 return ((((((unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[0])) && ((signed_long_int_Array_0[1] < unsigned_long_int_Array_0[1]) ? (double_Array_0[1][1] == ((double) -0.5)) : (((- last_1_double_Array_0_1__1_) == (double_Array_0[0][1] - double_Array_0[1][0])) ? (double_Array_0[1][1] == ((double) double_Array_0[0][0])) : (double_Array_0[1][1] == ((double) double_Array_0[0][0]))))) && (((- (unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[1])) >= signed_char_Array_0[4]) ? (signed_char_Array_0[1] == ((signed char) (signed_char_Array_0[0] - ((((signed_char_Array_0[2]) > (signed_char_Array_0[3])) ? (signed_char_Array_0[2]) : (signed_char_Array_0[3])))))) : (signed_char_Array_0[1] == ((signed char) ((((signed_char_Array_0[0]) < (signed_char_Array_0[3])) ? (signed_char_Array_0[0]) : (signed_char_Array_0[3]))))))) && (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[1] == ((signed long int) (signed_char_Array_0[0] - signed_char_Array_0[3]))) : (signed_long_int_Array_0[1] == ((signed long int) (signed_char_Array_0[2] - ((signed_long_int_Array_0[0] - 4) + ((((unsigned_short_int_Array_0[1]) < 0 ) ? -(unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[1]))))))))) && (float_Array_0[0] == ((float) double_Array_0[0][0]))) && (signed_char_Array_0[4] == ((signed char) signed_char_Array_0[0]))) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))
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
