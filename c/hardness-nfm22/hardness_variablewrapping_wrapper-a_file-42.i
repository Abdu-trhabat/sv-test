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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
 {1, 0, 0}, {0, 0, 0}
};
float float_Array_0[2] = {
 16.5, 127.25
};
signed long int signed_long_int_Array_0[1] = {
 -1
};
unsigned char unsigned_char_Array_0[2] = {
 4, 5
};
void initially(void) {
}
void step(void) {
 unsigned_char_Array_0[1] = (unsigned_char_Array_0[0] + 100);
 float_Array_0[0] = ((((float_Array_0[1]) < (64.15f)) ? (float_Array_0[1]) : (64.15f)));
 if (unsigned_char_Array_0[1] > unsigned_char_Array_0[1]) {
  signed_long_int_Array_0[0] = (((((unsigned_char_Array_0[1]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))) - 10);
 } else {
  signed_long_int_Array_0[0] = (((((unsigned_char_Array_0[1] - unsigned_char_Array_0[1])) > ((unsigned_char_Array_0[1] - unsigned_char_Array_0[1]))) ? ((unsigned_char_Array_0[1] - unsigned_char_Array_0[1])) : ((unsigned_char_Array_0[1] - unsigned_char_Array_0[1]))));
 }
 if (float_Array_0[1] <= float_Array_0[0]) {
  if (signed_long_int_Array_0[0] != unsigned_char_Array_0[1]) {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][2];
  }
 } else {
  if (unsigned_char_Array_0[1] <= 1000000) {
   BOOL_unsigned_char_Array_0[1][1] = 0;
  } else {
   BOOL_unsigned_char_Array_0[1][1] = 0;
  }
 }
 if ((- float_Array_0[0]) > float_Array_0[1]) {
  BOOL_unsigned_char_Array_0[0][0] = (BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[1][1] && (BOOL_unsigned_char_Array_0[0][2] || BOOL_unsigned_char_Array_0[0][1])));
 } else {
  BOOL_unsigned_char_Array_0[0][0] = ((signed_long_int_Array_0[0] <= unsigned_char_Array_0[0]) && BOOL_unsigned_char_Array_0[0][1]);
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 BOOL_unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] <= 0);
 BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 0);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
}
void updateLastVariables() {
}
int property() {
 return (((((unsigned_char_Array_0[1] > unsigned_char_Array_0[1]) ? (signed_long_int_Array_0[0] == ((signed long int) (((((unsigned_char_Array_0[1]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))) - 10))) : (signed_long_int_Array_0[0] == ((signed long int) (((((unsigned_char_Array_0[1] - unsigned_char_Array_0[1])) > ((unsigned_char_Array_0[1] - unsigned_char_Array_0[1]))) ? ((unsigned_char_Array_0[1] - unsigned_char_Array_0[1])) : ((unsigned_char_Array_0[1] - unsigned_char_Array_0[1]))))))) && (unsigned_char_Array_0[1] == ((unsigned char) (unsigned_char_Array_0[0] + 100)))) && (float_Array_0[0] == ((float) ((((float_Array_0[1]) < (64.15f)) ? (float_Array_0[1]) : (64.15f)))))) && (((- float_Array_0[0]) > float_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[1][1] && (BOOL_unsigned_char_Array_0[0][2] || BOOL_unsigned_char_Array_0[0][1]))))) : (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) ((signed_long_int_Array_0[0] <= unsigned_char_Array_0[0]) && BOOL_unsigned_char_Array_0[0][1]))))) && ((float_Array_0[1] <= float_Array_0[0]) ? ((signed_long_int_Array_0[0] != unsigned_char_Array_0[1]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][2])) : 1) : ((unsigned_char_Array_0[1] <= 1000000) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) 0)) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) 0))))
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
