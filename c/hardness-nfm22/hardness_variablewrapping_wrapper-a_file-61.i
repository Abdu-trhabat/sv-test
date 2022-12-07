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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {0, 0}, {0, 0}
};
double double_Array_0[1] = {
 32.5
};
float float_Array_0[2] = {
 255.5, 255.5
};
signed char signed_char_Array_0[1] = {
 0
};
unsigned char unsigned_char_Array_0[11] = {
 5, 100, 128, 64, 100, 8, 50, 8, 32, 64, 0
};
unsigned short int unsigned_short_int_Array_0[1] = {
 64
};
void initially(void) {
}
void step(void) {
 if (BOOL_unsigned_char_Array_0[0][0]) {
  unsigned_char_Array_0[4] = (unsigned_char_Array_0[3] + ((((unsigned_char_Array_0[0]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[0]) : (unsigned_char_Array_0[1]))));
 } else {
  unsigned_char_Array_0[4] = (((64 + unsigned_char_Array_0[8]) + (unsigned_char_Array_0[9] + unsigned_char_Array_0[6])) - (unsigned_char_Array_0[7] + unsigned_char_Array_0[10]));
 }
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0][0] || BOOL_unsigned_char_Array_0[0][1];
 if (BOOL_unsigned_char_Array_0[1][0] || stepLocal_0) {
  signed_char_Array_0[0] = unsigned_char_Array_0[9];
 }
 float_Array_0[0] = float_Array_0[1];
 unsigned_short_int_Array_0[0] = unsigned_char_Array_0[10];
 double_Array_0[0] = 0.010000000000000009;
 if (float_Array_0[0] < float_Array_0[0]) {
  BOOL_unsigned_char_Array_0[1][1] = (BOOL_unsigned_char_Array_0[0][1] || BOOL_unsigned_char_Array_0[1][0]);
 } else {
  if (float_Array_0[0] >= float_Array_0[0]) {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
  } else {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][0];
  }
 }
 if (double_Array_0[0] < ((((float_Array_0[0]) > (float_Array_0[0])) ? (float_Array_0[0]) : (float_Array_0[0])))) {
  unsigned_char_Array_0[5] = (unsigned_char_Array_0[2] - unsigned_char_Array_0[3]);
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[6] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[6] <= 63);
 unsigned_char_Array_0[7] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[7] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[7] <= 64);
 unsigned_char_Array_0[8] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[8] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[8] <= 63);
 unsigned_char_Array_0[9] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[9] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[9] <= 64);
 unsigned_char_Array_0[10] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[10] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[10] <= 63);
}
void updateLastVariables() {
}
int property() {
 return (((((((float_Array_0[0] < float_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][1] || BOOL_unsigned_char_Array_0[1][0]))) : ((float_Array_0[0] >= float_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][0])))) && ((double_Array_0[0] < ((((float_Array_0[0]) > (float_Array_0[0])) ? (float_Array_0[0]) : (float_Array_0[0])))) ? (unsigned_char_Array_0[5] == ((unsigned char) (unsigned_char_Array_0[2] - unsigned_char_Array_0[3]))) : 1)) && (BOOL_unsigned_char_Array_0[0][0] ? (unsigned_char_Array_0[4] == ((unsigned char) (unsigned_char_Array_0[3] + ((((unsigned_char_Array_0[0]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[0]) : (unsigned_char_Array_0[1])))))) : (unsigned_char_Array_0[4] == ((unsigned char) (((64 + unsigned_char_Array_0[8]) + (unsigned_char_Array_0[9] + unsigned_char_Array_0[6])) - (unsigned_char_Array_0[7] + unsigned_char_Array_0[10])))))) && ((BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[0][0] || BOOL_unsigned_char_Array_0[0][1])) ? (signed_char_Array_0[0] == ((signed char) unsigned_char_Array_0[9])) : 1)) && (float_Array_0[0] == ((float) float_Array_0[1]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[10]))) && (double_Array_0[0] == ((double) 0.010000000000000009))
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
