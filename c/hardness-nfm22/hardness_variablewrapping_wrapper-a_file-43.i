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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
float float_Array_0[2][2] = {
 {0.2, 64.8}, {64.4, 4.5}
};
signed char signed_char_Array_0[2] = {
 0, -50
};
signed short int signed_short_int_Array_0[5] = {
 50, 1, 8, 10000, 64
};
unsigned char unsigned_char_Array_0[2] = {
 2, 100
};
unsigned short int unsigned_short_int_Array_0[3] = {
 23647, 32, 128
};
void initially(void) {
}
void step(void) {
 signed_char_Array_0[0] = signed_char_Array_0[1];
 BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];
 signed char stepLocal_1 = signed_char_Array_0[0];
 signed long int stepLocal_0 = signed_short_int_Array_0[0] / signed_short_int_Array_0[3];
 if (stepLocal_1 > (signed_short_int_Array_0[1] << signed_short_int_Array_0[2])) {
  if (stepLocal_0 > -25) {
   unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
  } else {
   unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
  }
 }
 signed long int stepLocal_2 = signed_short_int_Array_0[3] ^ signed_char_Array_0[0];
 if (unsigned_char_Array_0[1] >= stepLocal_2) {
  unsigned_short_int_Array_0[2] = (unsigned_char_Array_0[1] + (unsigned_short_int_Array_0[0] - unsigned_char_Array_0[0]));
 }
 if (float_Array_0[1][1] != ((((float_Array_0[0][1]) > ((float_Array_0[1][0] - float_Array_0[0][0]))) ? (float_Array_0[0][1]) : ((float_Array_0[1][0] - float_Array_0[0][0]))))) {
  if (BOOL_unsigned_char_Array_0[0]) {
   signed_short_int_Array_0[4] = (((signed_short_int_Array_0[3] - 32) + (unsigned_char_Array_0[0] + unsigned_char_Array_0[0])) - unsigned_char_Array_0[0]);
  }
 } else {
  if (BOOL_unsigned_char_Array_0[0]) {
   signed_short_int_Array_0[4] = signed_char_Array_0[0];
  } else {
   signed_short_int_Array_0[4] = unsigned_char_Array_0[0];
  }
 }
 unsigned_short_int_Array_0[1] = signed_short_int_Array_0[4];
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 8191);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 8192);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= 8191);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
}
void updateLastVariables() {
}
int property() {
 return ((((((float_Array_0[1][1] != ((((float_Array_0[0][1]) > ((float_Array_0[1][0] - float_Array_0[0][0]))) ? (float_Array_0[0][1]) : ((float_Array_0[1][0] - float_Array_0[0][0]))))) ? (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[4] == ((signed short int) (((signed_short_int_Array_0[3] - 32) + (unsigned_char_Array_0[0] + unsigned_char_Array_0[0])) - unsigned_char_Array_0[0]))) : 1) : (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[4] == ((signed short int) signed_char_Array_0[0])) : (signed_short_int_Array_0[4] == ((signed short int) unsigned_char_Array_0[0])))) && ((signed_char_Array_0[0] > (signed_short_int_Array_0[1] << signed_short_int_Array_0[2])) ? (((signed_short_int_Array_0[0] / signed_short_int_Array_0[3]) > -25) ? (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])) : (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))) : 1)) && ((unsigned_char_Array_0[1] >= (signed_short_int_Array_0[3] ^ signed_char_Array_0[0])) ? (unsigned_short_int_Array_0[2] == ((unsigned short int) (unsigned_char_Array_0[1] + (unsigned_short_int_Array_0[0] - unsigned_char_Array_0[0])))) : 1)) && (unsigned_short_int_Array_0[1] == ((unsigned short int) signed_short_int_Array_0[4]))) && (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[1]))) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))
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
