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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch35Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 1}, {0, 1}
};
float float_Array_0[3] = {
 -0.6, 255.1, 4.8
};
signed char signed_char_Array_0[2][2] = {
 {10, -2}, {5, -1}
};
signed short int signed_short_int_Array_0[1] = {
 -10
};
unsigned char unsigned_char_Array_0[3] = {
 5, 5, 64
};
unsigned char last_1_unsigned_char_Array_0_1_ = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = ~ last_1_unsigned_char_Array_0_1_;
 if (last_1_unsigned_char_Array_0_1_ >= stepLocal_0) {
  float_Array_0[2] = (float_Array_0[1] + float_Array_0[0]);
 }
 unsigned char stepLocal_1 = (float_Array_0[2] * float_Array_0[0]) >= float_Array_0[1];
 if (BOOL_unsigned_char_Array_0[0][1] && stepLocal_1) {
  unsigned_char_Array_0[1] = (2 + ((unsigned_char_Array_0[2] - unsigned_char_Array_0[0]) + 32));
 } else {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[2];
 }
 if (BOOL_unsigned_char_Array_0[0][0]) {
  BOOL_unsigned_char_Array_0[1][1] = (! BOOL_unsigned_char_Array_0[1][0]);
 } else {
  BOOL_unsigned_char_Array_0[1][1] = (! BOOL_unsigned_char_Array_0[0][1]);
 }
 if (BOOL_unsigned_char_Array_0[1][1]) {
  signed_char_Array_0[0][1] = ((signed_char_Array_0[0][0] + ((((10) < (signed_char_Array_0[1][0])) ? (10) : (signed_char_Array_0[1][0])))) + signed_char_Array_0[1][1]);
 }
 if (BOOL_unsigned_char_Array_0[1][1]) {
  if (BOOL_unsigned_char_Array_0[1][1]) {
   signed_short_int_Array_0[0] = (signed_char_Array_0[0][1] + signed_char_Array_0[0][1]);
  } else {
   signed_short_int_Array_0[0] = (signed_char_Array_0[0][1] + signed_char_Array_0[0][1]);
  }
 } else {
  signed_short_int_Array_0[0] = signed_char_Array_0[0][1];
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427382800e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427382800e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -461168.6018427382800e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427382800e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -31);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 32);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= -31);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 31);
 signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1] >= -63);
 assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 32);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 64);
}
void updateLastVariables() {
 last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}
int property() {
 return (((((last_1_unsigned_char_Array_0_1_ >= (~ last_1_unsigned_char_Array_0_1_)) ? (float_Array_0[2] == ((float) (float_Array_0[1] + float_Array_0[0]))) : 1) && (BOOL_unsigned_char_Array_0[1][1] ? (BOOL_unsigned_char_Array_0[1][1] ? (signed_short_int_Array_0[0] == ((signed short int) (signed_char_Array_0[0][1] + signed_char_Array_0[0][1]))) : (signed_short_int_Array_0[0] == ((signed short int) (signed_char_Array_0[0][1] + signed_char_Array_0[0][1])))) : (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[0][1])))) && (BOOL_unsigned_char_Array_0[1][1] ? (signed_char_Array_0[0][1] == ((signed char) ((signed_char_Array_0[0][0] + ((((10) < (signed_char_Array_0[1][0])) ? (10) : (signed_char_Array_0[1][0])))) + signed_char_Array_0[1][1]))) : 1)) && (BOOL_unsigned_char_Array_0[0][0] ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1][0]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0][1]))))) && ((BOOL_unsigned_char_Array_0[0][1] && ((float_Array_0[2] * float_Array_0[0]) >= float_Array_0[1])) ? (unsigned_char_Array_0[1] == ((unsigned char) (2 + ((unsigned_char_Array_0[2] - unsigned_char_Array_0[0]) + 32)))) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[2])))
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
