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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
double double_Array_0[3] = {
 128.5, 0.0, 127.875
};
float float_Array_0[3] = {
 100.55, 4.75, 128.75
};
signed long int signed_long_int_Array_0[1] = {
 -200
};
unsigned char unsigned_char_Array_0[2] = {
 16, 1
};
void initially(void) {
}
void step(void) {
 if (0.8f > (- float_Array_0[1])) {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
 }
 unsigned char stepLocal_1 = unsigned_char_Array_0[1] > unsigned_char_Array_0[1];
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
 if (BOOL_unsigned_char_Array_0[1] && stepLocal_0) {
  if (BOOL_unsigned_char_Array_0[1] && stepLocal_1) {
   signed_long_int_Array_0[0] = (unsigned_char_Array_0[1] - unsigned_char_Array_0[1]);
  } else {
   signed_long_int_Array_0[0] = ((unsigned_char_Array_0[1] + 5) - unsigned_char_Array_0[1]);
  }
 }
 if (BOOL_unsigned_char_Array_0[1]) {
  float_Array_0[0] = (float_Array_0[1] - float_Array_0[2]);
 } else {
  if (signed_long_int_Array_0[0] < unsigned_char_Array_0[1]) {
   float_Array_0[0] = ((((float_Array_0[2]) > (float_Array_0[1])) ? (float_Array_0[2]) : (float_Array_0[1])));
  } else {
   float_Array_0[0] = float_Array_0[1];
  }
 }
 signed long int stepLocal_2 = signed_long_int_Array_0[0];
 if (stepLocal_2 <= ((((8u) < 0 ) ? -(8u) : (8u)))) {
  double_Array_0[0] = (float_Array_0[1] - 99.5);
 } else {
  double_Array_0[0] = ((double_Array_0[1] - double_Array_0[2]) - float_Array_0[2]);
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 4611686.018427382800e+12F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427382800e+12F && double_Array_0[2] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854765600e+12F && float_Array_0[2] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables() {
}
int property() {
 return ((((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? ((BOOL_unsigned_char_Array_0[1] && (unsigned_char_Array_0[1] > unsigned_char_Array_0[1])) ? (signed_long_int_Array_0[0] == ((signed long int) (unsigned_char_Array_0[1] - unsigned_char_Array_0[1]))) : (signed_long_int_Array_0[0] == ((signed long int) ((unsigned_char_Array_0[1] + 5) - unsigned_char_Array_0[1])))) : 1) && (BOOL_unsigned_char_Array_0[1] ? (float_Array_0[0] == ((float) (float_Array_0[1] - float_Array_0[2]))) : ((signed_long_int_Array_0[0] < unsigned_char_Array_0[1]) ? (float_Array_0[0] == ((float) ((((float_Array_0[2]) > (float_Array_0[1])) ? (float_Array_0[2]) : (float_Array_0[1]))))) : (float_Array_0[0] == ((float) float_Array_0[1]))))) && ((signed_long_int_Array_0[0] <= ((((8u) < 0 ) ? -(8u) : (8u)))) ? (double_Array_0[0] == ((double) (float_Array_0[1] - 99.5))) : (double_Array_0[0] == ((double) ((double_Array_0[1] - double_Array_0[2]) - float_Array_0[2]))))) && ((0.8f > (- float_Array_0[1])) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : 1)
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
