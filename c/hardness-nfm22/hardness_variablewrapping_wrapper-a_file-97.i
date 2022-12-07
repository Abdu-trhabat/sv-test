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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 1, 0
};
float float_Array_0[2] = {
 32.5, 127.4
};
signed char signed_char_Array_0[3] = {
 16, 100, -1
};
signed short int signed_short_int_Array_0[5] = {
 100, 20113, 128, 32, 16
};
unsigned short int unsigned_short_int_Array_0[2] = {
 10, 256
};
void initially(void) {
}
void step(void) {
 unsigned_short_int_Array_0[0] = unsigned_short_int_Array_0[1];
 float_Array_0[0] = float_Array_0[1];
 signed_short_int_Array_0[2] = signed_char_Array_0[0];
 if (127.5f > float_Array_0[0]) {
  BOOL_unsigned_char_Array_0[0] = (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]);
 } else {
  BOOL_unsigned_char_Array_0[0] = ((float_Array_0[0] >= float_Array_0[0]) || BOOL_unsigned_char_Array_0[2]);
 }
 if (unsigned_short_int_Array_0[0] == signed_short_int_Array_0[3]) {
  signed_char_Array_0[1] = (signed_char_Array_0[2] + (signed_char_Array_0[0] + -25));
 } else {
  if (((32 * -25) | signed_short_int_Array_0[2]) >= signed_char_Array_0[2]) {
   if (BOOL_unsigned_char_Array_0[0]) {
    signed_char_Array_0[1] = signed_char_Array_0[0];
   }
  }
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  if (signed_char_Array_0[1] > signed_short_int_Array_0[2]) {
   if (BOOL_unsigned_char_Array_0[0]) {
    signed_short_int_Array_0[4] = (signed_short_int_Array_0[3] - (signed_short_int_Array_0[1] - signed_short_int_Array_0[0]));
   } else {
    signed_short_int_Array_0[4] = unsigned_short_int_Array_0[0];
   }
  } else {
   signed_short_int_Array_0[4] = 8;
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -31);
 assume_abort_if_not(signed_char_Array_0[0] <= 32);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -63);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= 16383);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 32766);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables() {
}
int property() {
 return (((((BOOL_unsigned_char_Array_0[0] ? ((signed_char_Array_0[1] > signed_short_int_Array_0[2]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[4] == ((signed short int) (signed_short_int_Array_0[3] - (signed_short_int_Array_0[1] - signed_short_int_Array_0[0])))) : (signed_short_int_Array_0[4] == ((signed short int) unsigned_short_int_Array_0[0]))) : (signed_short_int_Array_0[4] == ((signed short int) 8))) : 1) && ((unsigned_short_int_Array_0[0] == signed_short_int_Array_0[3]) ? (signed_char_Array_0[1] == ((signed char) (signed_char_Array_0[2] + (signed_char_Array_0[0] + -25)))) : ((((32 * -25) | signed_short_int_Array_0[2]) >= signed_char_Array_0[2]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[0])) : 1) : 1))) && ((127.5f > float_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) ((float_Array_0[0] >= float_Array_0[0]) || BOOL_unsigned_char_Array_0[2]))))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_short_int_Array_0[1]))) && (float_Array_0[0] == ((float) float_Array_0[1]))) && (signed_short_int_Array_0[2] == ((signed short int) signed_char_Array_0[0]))
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
