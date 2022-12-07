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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
double double_Array_0[5] = {
 24.8, 0.8, 127.625, 128.75, 1.5
};
signed char signed_char_Array_0[2] = {
 5, 64
};
signed short int signed_short_int_Array_0[1] = {
 -128
};
unsigned char unsigned_char_Array_0[1] = {
 4
};
unsigned short int unsigned_short_int_Array_0[2] = {
 25, 128
};
unsigned short int last_1_unsigned_short_int_Array_0_1_ = 128;
void initially(void) {
}
void step(void) {
 signed_short_int_Array_0[0] = 200;
 signed_char_Array_0[1] = signed_char_Array_0[0];
 double_Array_0[4] = double_Array_0[1];
 signed long int stepLocal_0 = unsigned_short_int_Array_0[0] / unsigned_char_Array_0[0];
 if (BOOL_unsigned_char_Array_0[0]) {
  unsigned_short_int_Array_0[1] = (((((((unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0]))) < 0 ) ? -((((unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0]))) : ((((unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0])))));
 } else {
  if (stepLocal_0 >= (((((last_1_unsigned_short_int_Array_0_1_ * signed_char_Array_0[1])) < ((~ last_1_unsigned_short_int_Array_0_1_))) ? ((last_1_unsigned_short_int_Array_0_1_ * signed_char_Array_0[1])) : ((~ last_1_unsigned_short_int_Array_0_1_))))) {
   unsigned_short_int_Array_0[1] = unsigned_char_Array_0[0];
  } else {
   unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[0];
  }
 }
 signed long int stepLocal_2 = unsigned_short_int_Array_0[0] + unsigned_short_int_Array_0[1];
 signed long int stepLocal_1 = signed_short_int_Array_0[0] ^ signed_char_Array_0[1];
 if (signed_char_Array_0[1] <= stepLocal_2) {
  if (unsigned_short_int_Array_0[1] == stepLocal_1) {
   double_Array_0[2] = (((((double_Array_0[1]) < 0 ) ? -(double_Array_0[1]) : (double_Array_0[1]))) + double_Array_0[3]);
  } else {
   double_Array_0[2] = double_Array_0[3];
  }
 } else {
  double_Array_0[2] = double_Array_0[1];
 }
 if (signed_char_Array_0[1] > signed_char_Array_0[1]) {
  double_Array_0[0] = ((((double_Array_0[3]) < (double_Array_0[1])) ? (double_Array_0[3]) : (double_Array_0[1])));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -461168.6018427382800e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427382800e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -461168.6018427382800e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427382800e+12F && double_Array_0[3] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[0] != 0);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}
void updateLastVariables() {
 last_1_unsigned_short_int_Array_0_1_ = unsigned_short_int_Array_0[1];
}
int property() {
 return (((((BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (((((((unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0]))) < 0 ) ? -((((unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0]))) : ((((unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0]))))))) : (((unsigned_short_int_Array_0[0] / unsigned_char_Array_0[0]) >= (((((last_1_unsigned_short_int_Array_0_1_ * signed_char_Array_0[1])) < ((~ last_1_unsigned_short_int_Array_0_1_))) ? ((last_1_unsigned_short_int_Array_0_1_ * signed_char_Array_0[1])) : ((~ last_1_unsigned_short_int_Array_0_1_))))) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_char_Array_0[0])) : (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[0])))) && ((signed_char_Array_0[1] <= (unsigned_short_int_Array_0[0] + unsigned_short_int_Array_0[1])) ? ((unsigned_short_int_Array_0[1] == (signed_short_int_Array_0[0] ^ signed_char_Array_0[1])) ? (double_Array_0[2] == ((double) (((((double_Array_0[1]) < 0 ) ? -(double_Array_0[1]) : (double_Array_0[1]))) + double_Array_0[3]))) : (double_Array_0[2] == ((double) double_Array_0[3]))) : (double_Array_0[2] == ((double) double_Array_0[1])))) && ((signed_char_Array_0[1] > signed_char_Array_0[1]) ? (double_Array_0[0] == ((double) ((((double_Array_0[3]) < (double_Array_0[1])) ? (double_Array_0[3]) : (double_Array_0[1]))))) : 1)) && (signed_short_int_Array_0[0] == ((signed short int) 200))) && (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[0]))) && (double_Array_0[4] == ((double) double_Array_0[1]))
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
