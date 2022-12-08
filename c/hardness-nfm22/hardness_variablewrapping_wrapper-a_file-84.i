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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
float float_Array_0[2] = {
 10000000000000.926, 1000000.6
};
signed short int signed_short_int_Array_0[3] = {
 -4, 128, 28020
};
unsigned char unsigned_char_Array_0[7] = {
 128, 0, 5, 8, 64, 25, 128
};
unsigned short int unsigned_short_int_Array_0[2] = {
 64, 27843
};
signed short int last_1_signed_short_int_Array_0_0_ = -4;
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_signed_short_int_Array_0_0_;
 if (stepLocal_0 != last_1_unsigned_short_int_Array_0_0_) {
  unsigned_char_Array_0[6] = (unsigned_char_Array_0[5] + ((((((((unsigned_char_Array_0[4]) < (unsigned_char_Array_0[3])) ? (unsigned_char_Array_0[4]) : (unsigned_char_Array_0[3])))) > (unsigned_char_Array_0[1])) ? (((((unsigned_char_Array_0[4]) < (unsigned_char_Array_0[3])) ? (unsigned_char_Array_0[4]) : (unsigned_char_Array_0[3])))) : (unsigned_char_Array_0[1]))));
 } else {
  unsigned_char_Array_0[6] = unsigned_char_Array_0[5];
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  unsigned_short_int_Array_0[0] = ((unsigned_short_int_Array_0[1] + 23103) - (32 + unsigned_char_Array_0[3]));
 }
 if (! (unsigned_char_Array_0[4] > unsigned_short_int_Array_0[1])) {
  signed_short_int_Array_0[1] = (32 - 8);
 } else {
  signed_short_int_Array_0[1] = (unsigned_char_Array_0[0] - unsigned_char_Array_0[5]);
 }
 float_Array_0[0] = float_Array_0[1];
 if (unsigned_char_Array_0[6] < signed_short_int_Array_0[1]) {
  if (((- 8) / (unsigned_char_Array_0[0] - unsigned_char_Array_0[2])) >= unsigned_char_Array_0[3]) {
   signed_short_int_Array_0[0] = (signed_short_int_Array_0[1] - (signed_short_int_Array_0[2] - unsigned_char_Array_0[2]));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= 16383);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 126);
 assume_abort_if_not(unsigned_char_Array_0[2] != 127);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 127);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 127);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}
void updateLastVariables() {
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}
int property() {
 return (((((last_1_signed_short_int_Array_0_0_ != last_1_unsigned_short_int_Array_0_0_) ? (unsigned_char_Array_0[6] == ((unsigned char) (unsigned_char_Array_0[5] + ((((((((unsigned_char_Array_0[4]) < (unsigned_char_Array_0[3])) ? (unsigned_char_Array_0[4]) : (unsigned_char_Array_0[3])))) > (unsigned_char_Array_0[1])) ? (((((unsigned_char_Array_0[4]) < (unsigned_char_Array_0[3])) ? (unsigned_char_Array_0[4]) : (unsigned_char_Array_0[3])))) : (unsigned_char_Array_0[1])))))) : (unsigned_char_Array_0[6] == ((unsigned char) unsigned_char_Array_0[5]))) && (BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[0] == ((unsigned short int) ((unsigned_short_int_Array_0[1] + 23103) - (32 + unsigned_char_Array_0[3])))) : 1)) && ((unsigned_char_Array_0[6] < signed_short_int_Array_0[1]) ? ((((- 8) / (unsigned_char_Array_0[0] - unsigned_char_Array_0[2])) >= unsigned_char_Array_0[3]) ? (signed_short_int_Array_0[0] == ((signed short int) (signed_short_int_Array_0[1] - (signed_short_int_Array_0[2] - unsigned_char_Array_0[2])))) : 1) : 1)) && ((! (unsigned_char_Array_0[4] > unsigned_short_int_Array_0[1])) ? (signed_short_int_Array_0[1] == ((signed short int) (32 - 8))) : (signed_short_int_Array_0[1] == ((signed short int) (unsigned_char_Array_0[0] - unsigned_char_Array_0[5]))))) && (float_Array_0[0] == ((float) float_Array_0[1]))
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
