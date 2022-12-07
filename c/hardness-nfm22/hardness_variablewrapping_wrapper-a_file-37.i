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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float float_Array_0[1] = {
 25.1
};
signed char signed_char_Array_0[5] = {
 25, 16, -10, -25, 0
};
signed long int signed_long_int_Array_0[2] = {
 -128, 256
};
signed short int signed_short_int_Array_0[1] = {
 -16
};
unsigned char unsigned_char_Array_0[2] = {
 16, 8
};
unsigned long int unsigned_long_int_Array_0[1] = {
 2531521428
};
unsigned short int unsigned_short_int_Array_0[2] = {
 100, 59049
};
void initially(void) {
}
void step(void) {
 signed_long_int_Array_0[0] = signed_char_Array_0[1];
 signed_short_int_Array_0[0] = signed_long_int_Array_0[0];
 signed long int stepLocal_0 = (((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0]));
 if (unsigned_short_int_Array_0[1] <= stepLocal_0) {
  signed_char_Array_0[3] = ((signed_char_Array_0[1] - (1 + signed_char_Array_0[0])) + signed_char_Array_0[2]);
 } else {
  signed_char_Array_0[3] = signed_char_Array_0[2];
 }
 signed_long_int_Array_0[1] = signed_short_int_Array_0[0];
 if (((unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0]) ^ (signed_long_int_Array_0[1] * signed_short_int_Array_0[0])) <= -64) {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
 } else {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
 }
 unsigned char stepLocal_1 = unsigned_char_Array_0[1];
 if (2.75f > float_Array_0[0]) {
  signed_char_Array_0[4] = (signed_char_Array_0[2] + signed_char_Array_0[1]);
 } else {
  if ((unsigned_long_int_Array_0[0] - ((((signed_long_int_Array_0[0]) > (signed_char_Array_0[1])) ? (signed_long_int_Array_0[0]) : (signed_char_Array_0[1])))) > stepLocal_1) {
   signed_char_Array_0[4] = ((((((((signed_char_Array_0[1]) < ((1 + 5))) ? (signed_char_Array_0[1]) : ((1 + 5))))) < (signed_char_Array_0[2])) ? (((((signed_char_Array_0[1]) < ((1 + 5))) ? (signed_char_Array_0[1]) : ((1 + 5))))) : (signed_char_Array_0[2])));
  }
 }
}
void updateVariables() {
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 31);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -63);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
}
void updateLastVariables() {
}
int property() {
 return ((((((((unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0]) ^ (signed_long_int_Array_0[1] * signed_short_int_Array_0[0])) <= -64) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0]))) && ((unsigned_short_int_Array_0[1] <= ((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0])))) ? (signed_char_Array_0[3] == ((signed char) ((signed_char_Array_0[1] - (1 + signed_char_Array_0[0])) + signed_char_Array_0[2]))) : (signed_char_Array_0[3] == ((signed char) signed_char_Array_0[2])))) && ((2.75f > float_Array_0[0]) ? (signed_char_Array_0[4] == ((signed char) (signed_char_Array_0[2] + signed_char_Array_0[1]))) : (((unsigned_long_int_Array_0[0] - ((((signed_long_int_Array_0[0]) > (signed_char_Array_0[1])) ? (signed_long_int_Array_0[0]) : (signed_char_Array_0[1])))) > unsigned_char_Array_0[1]) ? (signed_char_Array_0[4] == ((signed char) ((((((((signed_char_Array_0[1]) < ((1 + 5))) ? (signed_char_Array_0[1]) : ((1 + 5))))) < (signed_char_Array_0[2])) ? (((((signed_char_Array_0[1]) < ((1 + 5))) ? (signed_char_Array_0[1]) : ((1 + 5))))) : (signed_char_Array_0[2]))))) : 1))) && (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[1]))) && (signed_long_int_Array_0[1] == ((signed long int) signed_short_int_Array_0[0]))) && (signed_short_int_Array_0[0] == ((signed short int) signed_long_int_Array_0[0]))
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
