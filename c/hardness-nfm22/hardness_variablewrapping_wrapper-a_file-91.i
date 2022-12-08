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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float float_Array_0[3] = {
 -0.25, 8.4, 49.25
};
signed short int signed_short_int_Array_0[5] = {
 100, -4, 128, 10, 1
};
unsigned long int unsigned_long_int_Array_0[2][3] = {
 {64, 10, 64}, {16, 64, 100000000}
};
void initially(void) {
}
void step(void) {
 if (float_Array_0[2] >= 50.4f) {
  unsigned_long_int_Array_0[1][2] = ((((unsigned_long_int_Array_0[0][2]) > (unsigned_long_int_Array_0[1][1])) ? (unsigned_long_int_Array_0[0][2]) : (unsigned_long_int_Array_0[1][1])));
 }
 if (unsigned_long_int_Array_0[0][2] == (unsigned_long_int_Array_0[1][2] * unsigned_long_int_Array_0[1][1])) {
  if (float_Array_0[2] >= (float_Array_0[1] + float_Array_0[0])) {
   signed_short_int_Array_0[4] = signed_short_int_Array_0[1];
  } else {
   signed_short_int_Array_0[4] = 32;
  }
 } else {
  signed_short_int_Array_0[4] = signed_short_int_Array_0[1];
 }
 if (! (unsigned_long_int_Array_0[1][1] < unsigned_long_int_Array_0[0][2])) {
  unsigned_long_int_Array_0[0][0] = ((((((((unsigned_long_int_Array_0[0][2]) < (unsigned_long_int_Array_0[1][1])) ? (unsigned_long_int_Array_0[0][2]) : (unsigned_long_int_Array_0[1][1])))) < (((((unsigned_long_int_Array_0[1][0]) > (unsigned_long_int_Array_0[0][1])) ? (unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[0][1]))))) ? (((((unsigned_long_int_Array_0[0][2]) < (unsigned_long_int_Array_0[1][1])) ? (unsigned_long_int_Array_0[0][2]) : (unsigned_long_int_Array_0[1][1])))) : (((((unsigned_long_int_Array_0[1][0]) > (unsigned_long_int_Array_0[0][1])) ? (unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[0][1]))))));
 } else {
  unsigned_long_int_Array_0[0][0] = ((((unsigned_long_int_Array_0[0][1]) > (unsigned_long_int_Array_0[1][0])) ? (unsigned_long_int_Array_0[0][1]) : (unsigned_long_int_Array_0[1][0])));
 }
 if (unsigned_long_int_Array_0[1][0] > unsigned_long_int_Array_0[0][0]) {
  if (63.1 >= float_Array_0[0]) {
   if (float_Array_0[0] >= float_Array_0[2]) {
    signed_short_int_Array_0[0] = (signed_short_int_Array_0[2] - signed_short_int_Array_0[3]);
   } else {
    signed_short_int_Array_0[0] = signed_short_int_Array_0[2];
   }
  }
 } else {
  signed_short_int_Array_0[0] = signed_short_int_Array_0[3];
 }
}
void updateVariables() {
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 32766);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967294);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967294);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967294);
 unsigned_long_int_Array_0[0][2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return ((((float_Array_0[2] >= 50.4f) ? (unsigned_long_int_Array_0[1][2] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][2]) > (unsigned_long_int_Array_0[1][1])) ? (unsigned_long_int_Array_0[0][2]) : (unsigned_long_int_Array_0[1][1]))))) : 1) && ((unsigned_long_int_Array_0[0][2] == (unsigned_long_int_Array_0[1][2] * unsigned_long_int_Array_0[1][1])) ? ((float_Array_0[2] >= (float_Array_0[1] + float_Array_0[0])) ? (signed_short_int_Array_0[4] == ((signed short int) signed_short_int_Array_0[1])) : (signed_short_int_Array_0[4] == ((signed short int) 32))) : (signed_short_int_Array_0[4] == ((signed short int) signed_short_int_Array_0[1])))) && ((! (unsigned_long_int_Array_0[1][1] < unsigned_long_int_Array_0[0][2])) ? (unsigned_long_int_Array_0[0][0] == ((unsigned long int) ((((((((unsigned_long_int_Array_0[0][2]) < (unsigned_long_int_Array_0[1][1])) ? (unsigned_long_int_Array_0[0][2]) : (unsigned_long_int_Array_0[1][1])))) < (((((unsigned_long_int_Array_0[1][0]) > (unsigned_long_int_Array_0[0][1])) ? (unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[0][1]))))) ? (((((unsigned_long_int_Array_0[0][2]) < (unsigned_long_int_Array_0[1][1])) ? (unsigned_long_int_Array_0[0][2]) : (unsigned_long_int_Array_0[1][1])))) : (((((unsigned_long_int_Array_0[1][0]) > (unsigned_long_int_Array_0[0][1])) ? (unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[0][1])))))))) : (unsigned_long_int_Array_0[0][0] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][1]) > (unsigned_long_int_Array_0[1][0])) ? (unsigned_long_int_Array_0[0][1]) : (unsigned_long_int_Array_0[1][0]))))))) && ((unsigned_long_int_Array_0[1][0] > unsigned_long_int_Array_0[0][0]) ? ((63.1 >= float_Array_0[0]) ? ((float_Array_0[0] >= float_Array_0[2]) ? (signed_short_int_Array_0[0] == ((signed short int) (signed_short_int_Array_0[2] - signed_short_int_Array_0[3]))) : (signed_short_int_Array_0[0] == ((signed short int) signed_short_int_Array_0[2]))) : 1) : (signed_short_int_Array_0[0] == ((signed short int) signed_short_int_Array_0[3])))
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
