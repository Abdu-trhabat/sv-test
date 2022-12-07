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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 0, 0
};
float float_Array_0[1] = {
 63.5
};
signed char signed_char_Array_0[2][2][2] = {
 {{32, -4}, {32, -64}}, {{64, 16}, {4, 50}}
};
signed long int signed_long_int_Array_0[1] = {
 1
};
signed char last_1_signed_char_Array_0_1__0__0_ = 64;
signed char last_1_signed_char_Array_0_0__1__1_ = -64;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
 if (! (last_1_signed_char_Array_0_0__1__1_ >= last_1_signed_char_Array_0_1__0__0_)) {
  if ((BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]) && stepLocal_0) {
   signed_long_int_Array_0[0] = ((((last_1_signed_char_Array_0_1__0__0_) < (last_1_signed_char_Array_0_0__1__1_)) ? (last_1_signed_char_Array_0_1__0__0_) : (last_1_signed_char_Array_0_0__1__1_)));
  } else {
   signed_long_int_Array_0[0] = last_1_signed_char_Array_0_0__1__1_;
  }
 } else {
  signed_long_int_Array_0[0] = last_1_signed_char_Array_0_0__1__1_;
 }
 signed long int stepLocal_3 = (signed_char_Array_0[1][1][1] + signed_char_Array_0[1][0][1]) - ((((64) > (signed_char_Array_0[0][1][0])) ? (64) : (signed_char_Array_0[0][1][0])));
 if (signed_char_Array_0[0][0][0] < stepLocal_3) {
  signed_char_Array_0[0][1][1] = ((64 - signed_char_Array_0[1][0][1]) - signed_char_Array_0[0][1][0]);
 } else {
  signed_char_Array_0[0][1][1] = ((((signed_char_Array_0[1][1][0]) < (signed_char_Array_0[0][0][1])) ? (signed_char_Array_0[1][1][0]) : (signed_char_Array_0[0][0][1])));
 }
 float_Array_0[0] = 128.91f;
 unsigned char stepLocal_2 = signed_char_Array_0[0][1][1] == signed_long_int_Array_0[0];
 unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[1];
 if (stepLocal_1 && BOOL_unsigned_char_Array_0[2]) {
  if (BOOL_unsigned_char_Array_0[0] || stepLocal_2) {
   signed_char_Array_0[1][0][0] = ((((signed_char_Array_0[1][1][0]) < (signed_char_Array_0[0][0][1])) ? (signed_char_Array_0[1][1][0]) : (signed_char_Array_0[0][0][1])));
  }
 } else {
  signed_char_Array_0[1][0][0] = (signed_char_Array_0[0][0][0] - signed_char_Array_0[0][1][0]);
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 signed_char_Array_0[0][0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0][0] >= -1);
 assume_abort_if_not(signed_char_Array_0[0][0][0] <= 126);
 signed_char_Array_0[0][1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0][1][0] <= 126);
 signed_char_Array_0[1][1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1][0] >= -127);
 assume_abort_if_not(signed_char_Array_0[1][1][0] <= 126);
 signed_char_Array_0[0][0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0][1] >= -127);
 assume_abort_if_not(signed_char_Array_0[0][0][1] <= 126);
 signed_char_Array_0[1][0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][0][1] <= 63);
 signed_char_Array_0[1][1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][1][1] <= 64);
}
void updateLastVariables() {
 last_1_signed_char_Array_0_1__0__0_ = signed_char_Array_0[1][0][0];
 last_1_signed_char_Array_0_0__1__1_ = signed_char_Array_0[0][1][1];
}
int property() {
 return ((((! (last_1_signed_char_Array_0_0__1__1_ >= last_1_signed_char_Array_0_1__0__0_)) ? (((BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]) && BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) ((((last_1_signed_char_Array_0_1__0__0_) < (last_1_signed_char_Array_0_0__1__1_)) ? (last_1_signed_char_Array_0_1__0__0_) : (last_1_signed_char_Array_0_0__1__1_))))) : (signed_long_int_Array_0[0] == ((signed long int) last_1_signed_char_Array_0_0__1__1_))) : (signed_long_int_Array_0[0] == ((signed long int) last_1_signed_char_Array_0_0__1__1_))) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[2]) ? ((BOOL_unsigned_char_Array_0[0] || (signed_char_Array_0[0][1][1] == signed_long_int_Array_0[0])) ? (signed_char_Array_0[1][0][0] == ((signed char) ((((signed_char_Array_0[1][1][0]) < (signed_char_Array_0[0][0][1])) ? (signed_char_Array_0[1][1][0]) : (signed_char_Array_0[0][0][1]))))) : 1) : (signed_char_Array_0[1][0][0] == ((signed char) (signed_char_Array_0[0][0][0] - signed_char_Array_0[0][1][0]))))) && ((signed_char_Array_0[0][0][0] < ((signed_char_Array_0[1][1][1] + signed_char_Array_0[1][0][1]) - ((((64) > (signed_char_Array_0[0][1][0])) ? (64) : (signed_char_Array_0[0][1][0]))))) ? (signed_char_Array_0[0][1][1] == ((signed char) ((64 - signed_char_Array_0[1][0][1]) - signed_char_Array_0[0][1][0]))) : (signed_char_Array_0[0][1][1] == ((signed char) ((((signed_char_Array_0[1][1][0]) < (signed_char_Array_0[0][0][1])) ? (signed_char_Array_0[1][1][0]) : (signed_char_Array_0[0][0][1]))))))) && (float_Array_0[0] == ((float) 128.91f))
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
