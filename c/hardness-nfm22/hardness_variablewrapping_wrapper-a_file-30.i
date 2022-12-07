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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
float float_Array_0[5] = {
 127.8, 32.5, 256.6, 999.25, 1000000000.5
};
signed long int signed_long_int_Array_0[1] = {
 0
};
signed short int signed_short_int_Array_0[2] = {
 -32, 8
};
unsigned char unsigned_char_Array_0[2][2] = {
 {2, 128}, {10, 64}
};
signed long int last_1_signed_long_int_Array_0_0_ = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (last_1_signed_long_int_Array_0_0_ / signed_short_int_Array_0[1]) % signed_short_int_Array_0[0];
 if (BOOL_unsigned_char_Array_0[0]) {
  if (last_1_signed_long_int_Array_0_0_ > stepLocal_0) {
   unsigned_char_Array_0[1][1] = ((((((((unsigned_char_Array_0[0][1]) < (unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][0])))) > (unsigned_char_Array_0[0][0])) ? (((((unsigned_char_Array_0[0][1]) < (unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][0])))) : (unsigned_char_Array_0[0][0])));
  }
 } else {
  unsigned_char_Array_0[1][1] = unsigned_char_Array_0[0][0];
 }
 unsigned char stepLocal_2 = unsigned_char_Array_0[1][1];
 signed long int stepLocal_1 = unsigned_char_Array_0[1][1] + unsigned_char_Array_0[1][1];
 if (stepLocal_1 < signed_short_int_Array_0[0]) {
  if (BOOL_unsigned_char_Array_0[0]) {
   if (signed_short_int_Array_0[1] > stepLocal_2) {
    signed_long_int_Array_0[0] = unsigned_char_Array_0[1][1];
   }
  } else {
   signed_long_int_Array_0[0] = unsigned_char_Array_0[1][0];
  }
 } else {
  signed_long_int_Array_0[0] = unsigned_char_Array_0[0][0];
 }
 unsigned char stepLocal_4 = unsigned_char_Array_0[1][1];
 signed long int stepLocal_3 = (unsigned_char_Array_0[0][0] / signed_short_int_Array_0[1]) << signed_short_int_Array_0[0];
 if (stepLocal_4 > signed_long_int_Array_0[0]) {
  if (unsigned_char_Array_0[1][1] <= stepLocal_3) {
   float_Array_0[1] = (float_Array_0[0] + float_Array_0[3]);
  }
 } else {
  float_Array_0[1] = (((((float_Array_0[0]) < 0 ) ? -(float_Array_0[0]) : (float_Array_0[0]))) - float_Array_0[4]);
 }
 float_Array_0[2] = float_Array_0[4];
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427382800e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427382800e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= -461168.6018427382800e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 4611686.018427382800e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854765600e+12F && float_Array_0[4] >= 1.0e-20F ));
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
 assume_abort_if_not(signed_short_int_Array_0[0] != 0);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
 assume_abort_if_not(signed_short_int_Array_0[1] != 0);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 254);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
}
void updateLastVariables() {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}
int property() {
 return (((BOOL_unsigned_char_Array_0[0] ? ((last_1_signed_long_int_Array_0_0_ > ((last_1_signed_long_int_Array_0_0_ / signed_short_int_Array_0[1]) % signed_short_int_Array_0[0])) ? (unsigned_char_Array_0[1][1] == ((unsigned char) ((((((((unsigned_char_Array_0[0][1]) < (unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][0])))) > (unsigned_char_Array_0[0][0])) ? (((((unsigned_char_Array_0[0][1]) < (unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][0])))) : (unsigned_char_Array_0[0][0]))))) : 1) : (unsigned_char_Array_0[1][1] == ((unsigned char) unsigned_char_Array_0[0][0]))) && (((unsigned_char_Array_0[1][1] + unsigned_char_Array_0[1][1]) < signed_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? ((signed_short_int_Array_0[1] > unsigned_char_Array_0[1][1]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1][1])) : 1) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1][0]))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[0][0])))) && ((unsigned_char_Array_0[1][1] > signed_long_int_Array_0[0]) ? ((unsigned_char_Array_0[1][1] <= ((unsigned_char_Array_0[0][0] / signed_short_int_Array_0[1]) << signed_short_int_Array_0[0])) ? (float_Array_0[1] == ((float) (float_Array_0[0] + float_Array_0[3]))) : 1) : (float_Array_0[1] == ((float) (((((float_Array_0[0]) < 0 ) ? -(float_Array_0[0]) : (float_Array_0[0]))) - float_Array_0[4]))))) && (float_Array_0[2] == ((float) float_Array_0[4]))
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
