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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
double double_Array_0[3] = {
 15.4, 15.6, 32.2
};
float float_Array_0[2] = {
 5.75, 8.6
};
signed short int signed_short_int_Array_0[1] = {
 256
};
unsigned short int unsigned_short_int_Array_0[1] = {
 32
};
unsigned char last_1_BOOL_unsigned_char_Array_0_1_ = 0;
signed short int last_1_signed_short_int_Array_0_0_ = 256;
void initially(void) {
}
void step(void) {
 if ((last_1_signed_short_int_Array_0_0_ + ((((last_1_signed_short_int_Array_0_0_) > (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_)))) < (last_1_signed_short_int_Array_0_0_ * last_1_signed_short_int_Array_0_0_)) {
  if (last_1_signed_short_int_Array_0_0_ < (last_1_signed_short_int_Array_0_0_ - last_1_signed_short_int_Array_0_0_)) {
   if (last_1_signed_short_int_Array_0_0_ != (((((((last_1_signed_short_int_Array_0_0_) < (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))) < 0 ) ? -((((last_1_signed_short_int_Array_0_0_) < (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))) : ((((last_1_signed_short_int_Array_0_0_) < (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_)))))) {
    unsigned_short_int_Array_0[0] = last_1_signed_short_int_Array_0_0_;
   }
  }
 } else {
  unsigned_short_int_Array_0[0] = last_1_signed_short_int_Array_0_0_;
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  if ((float_Array_0[0] - float_Array_0[1]) >= ((double_Array_0[1] + double_Array_0[2]) + double_Array_0[0])) {
   signed_short_int_Array_0[0] = ((((unsigned_short_int_Array_0[0]) > (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0])));
  } else {
   signed_short_int_Array_0[0] = unsigned_short_int_Array_0[0];
  }
 }
 if (((((double_Array_0[1]) < (double_Array_0[0])) ? (double_Array_0[1]) : (double_Array_0[0]))) <= double_Array_0[2]) {
  if (last_1_BOOL_unsigned_char_Array_0_1_ && (unsigned_short_int_Array_0[0] >= unsigned_short_int_Array_0[0])) {
   BOOL_unsigned_char_Array_0[1] = 0;
  }
 } else {
  BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[0];
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -922337.2036854776000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_BOOL_unsigned_char_Array_0_1_ = BOOL_unsigned_char_Array_0[1];
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}
int property() {
 return ((((last_1_signed_short_int_Array_0_0_ + ((((last_1_signed_short_int_Array_0_0_) > (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_)))) < (last_1_signed_short_int_Array_0_0_ * last_1_signed_short_int_Array_0_0_)) ? ((last_1_signed_short_int_Array_0_0_ < (last_1_signed_short_int_Array_0_0_ - last_1_signed_short_int_Array_0_0_)) ? ((last_1_signed_short_int_Array_0_0_ != (((((((last_1_signed_short_int_Array_0_0_) < (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))) < 0 ) ? -((((last_1_signed_short_int_Array_0_0_) < (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))) : ((((last_1_signed_short_int_Array_0_0_) < (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_short_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_)))))) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) last_1_signed_short_int_Array_0_0_)) : 1) : 1) : (unsigned_short_int_Array_0[0] == ((unsigned short int) last_1_signed_short_int_Array_0_0_))) && ((((((double_Array_0[1]) < (double_Array_0[0])) ? (double_Array_0[1]) : (double_Array_0[0]))) <= double_Array_0[2]) ? ((last_1_BOOL_unsigned_char_Array_0_1_ && (unsigned_short_int_Array_0[0] >= unsigned_short_int_Array_0[0])) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) 0)) : 1) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[0])))) && (BOOL_unsigned_char_Array_0[0] ? (((float_Array_0[0] - float_Array_0[1]) >= ((double_Array_0[1] + double_Array_0[2]) + double_Array_0[0])) ? (signed_short_int_Array_0[0] == ((signed short int) ((((unsigned_short_int_Array_0[0]) > (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[0]) : (unsigned_short_int_Array_0[0]))))) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[0]))) : 1)
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
