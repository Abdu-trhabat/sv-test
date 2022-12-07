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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
float float_Array_0[3] = {
 9.125, 50.5, -0.6
};
unsigned short int unsigned_short_int_Array_0[2][3] = {
 {8, 32, 200}, {1, 56955, 10}
};
unsigned short int last_1_unsigned_short_int_Array_0_0__0_ = 8;
unsigned short int last_1_unsigned_short_int_Array_0_1__2_ = 10;
void initially(void) {
}
void step(void) {
 if (last_1_unsigned_short_int_Array_0_0__0_ <= (last_1_unsigned_short_int_Array_0_0__0_ * last_1_unsigned_short_int_Array_0_1__2_)) {
  unsigned_short_int_Array_0[1][2] = ((((unsigned_short_int_Array_0[0][2]) > ((((((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) > (unsigned_short_int_Array_0[1][0])) ? ((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) : (unsigned_short_int_Array_0[1][0]))))) ? (unsigned_short_int_Array_0[0][2]) : ((((((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) > (unsigned_short_int_Array_0[1][0])) ? ((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) : (unsigned_short_int_Array_0[1][0]))))));
 }
 if (BOOL_unsigned_char_Array_0[0] || (unsigned_short_int_Array_0[1][1] == unsigned_short_int_Array_0[1][0])) {
  if (unsigned_short_int_Array_0[1][1] <= (((((0) < (unsigned_short_int_Array_0[1][2])) ? (0) : (unsigned_short_int_Array_0[1][2]))) << unsigned_short_int_Array_0[1][2])) {
   if (BOOL_unsigned_char_Array_0[0] && (unsigned_short_int_Array_0[1][2] == (unsigned_short_int_Array_0[1][1] * unsigned_short_int_Array_0[0][2]))) {
    unsigned_short_int_Array_0[0][0] = unsigned_short_int_Array_0[0][2];
   } else {
    unsigned_short_int_Array_0[0][0] = unsigned_short_int_Array_0[0][2];
   }
  } else {
   unsigned_short_int_Array_0[0][0] = 2;
  }
 } else {
  unsigned_short_int_Array_0[0][0] = unsigned_short_int_Array_0[1][1];
 }
 if (unsigned_short_int_Array_0[0][1] != unsigned_short_int_Array_0[1][1]) {
  if (unsigned_short_int_Array_0[0][1] <= unsigned_short_int_Array_0[0][0]) {
   float_Array_0[2] = ((((float_Array_0[0]) > (float_Array_0[1])) ? (float_Array_0[0]) : (float_Array_0[1])));
  } else {
   float_Array_0[2] = float_Array_0[0];
  }
 } else {
  float_Array_0[2] = float_Array_0[0];
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
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65534);
 unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 65534);
}
void updateLastVariables() {
 last_1_unsigned_short_int_Array_0_0__0_ = unsigned_short_int_Array_0[0][0];
 last_1_unsigned_short_int_Array_0_1__2_ = unsigned_short_int_Array_0[1][2];
}
int property() {
 return (((last_1_unsigned_short_int_Array_0_0__0_ <= (last_1_unsigned_short_int_Array_0_0__0_ * last_1_unsigned_short_int_Array_0_1__2_)) ? (unsigned_short_int_Array_0[1][2] == ((unsigned short int) ((((unsigned_short_int_Array_0[0][2]) > ((((((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) > (unsigned_short_int_Array_0[1][0])) ? ((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) : (unsigned_short_int_Array_0[1][0]))))) ? (unsigned_short_int_Array_0[0][2]) : ((((((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) > (unsigned_short_int_Array_0[1][0])) ? ((unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[0][1])) : (unsigned_short_int_Array_0[1][0])))))))) : 1) && ((BOOL_unsigned_char_Array_0[0] || (unsigned_short_int_Array_0[1][1] == unsigned_short_int_Array_0[1][0])) ? ((unsigned_short_int_Array_0[1][1] <= (((((0) < (unsigned_short_int_Array_0[1][2])) ? (0) : (unsigned_short_int_Array_0[1][2]))) << unsigned_short_int_Array_0[1][2])) ? ((BOOL_unsigned_char_Array_0[0] && (unsigned_short_int_Array_0[1][2] == (unsigned_short_int_Array_0[1][1] * unsigned_short_int_Array_0[0][2]))) ? (unsigned_short_int_Array_0[0][0] == ((unsigned short int) unsigned_short_int_Array_0[0][2])) : (unsigned_short_int_Array_0[0][0] == ((unsigned short int) unsigned_short_int_Array_0[0][2]))) : (unsigned_short_int_Array_0[0][0] == ((unsigned short int) 2))) : (unsigned_short_int_Array_0[0][0] == ((unsigned short int) unsigned_short_int_Array_0[1][1])))) && ((unsigned_short_int_Array_0[0][1] != unsigned_short_int_Array_0[1][1]) ? ((unsigned_short_int_Array_0[0][1] <= unsigned_short_int_Array_0[0][0]) ? (float_Array_0[2] == ((float) ((((float_Array_0[0]) > (float_Array_0[1])) ? (float_Array_0[0]) : (float_Array_0[1]))))) : (float_Array_0[2] == ((float) float_Array_0[0]))) : (float_Array_0[2] == ((float) float_Array_0[0])))
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
