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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
double double_Array_0[7] = {
 9.4, 4.5, 3.5, 49.6, 7.5, 16.2, 10000000.8
};
float float_Array_0[1] = {
 128.4
};
signed short int signed_short_int_Array_0[3] = {
 128, 128, -10
};
unsigned char unsigned_char_Array_0[2] = {
 2, 16
};
unsigned long int unsigned_long_int_Array_0[1] = {
 100
};
unsigned char last_1_unsigned_char_Array_0_1_ = 16;
void initially(void) {
}
void step(void) {
 unsigned_long_int_Array_0[0] = last_1_unsigned_char_Array_0_1_;
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[0];
 signed short int stepLocal_0 = signed_short_int_Array_0[0];
 if (stepLocal_0 >= signed_short_int_Array_0[1]) {
  if ((signed_short_int_Array_0[0] + last_1_unsigned_char_Array_0_1_) >= stepLocal_1) {
   unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
  } else {
   unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
  }
 }
 if (BOOL_unsigned_char_Array_0[1]) {
  double_Array_0[6] = (double_Array_0[5] + ((((double_Array_0[4]) < ((49.5 + double_Array_0[3]))) ? (double_Array_0[4]) : ((49.5 + double_Array_0[3])))));
 }
 if ((- (double_Array_0[1] - double_Array_0[0])) <= double_Array_0[5]) {
  signed_short_int_Array_0[2] = ((8 + unsigned_char_Array_0[1]) - unsigned_char_Array_0[1]);
 } else {
  if (BOOL_unsigned_char_Array_0[1]) {
   if (BOOL_unsigned_char_Array_0[0]) {
    signed_short_int_Array_0[2] = unsigned_char_Array_0[1];
   }
  } else {
   signed_short_int_Array_0[2] = unsigned_char_Array_0[1];
  }
 }
 if (double_Array_0[1] < (double_Array_0[0] - double_Array_0[2])) {
  float_Array_0[0] = ((((double_Array_0[4]) > (((((((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) > (double_Array_0[5])) ? (((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) : (double_Array_0[5]))))) ? (double_Array_0[4]) : (((((((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) > (double_Array_0[5])) ? (((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) : (double_Array_0[5]))))));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -230584.3009213691390e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 2305843.009213691390e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -461168.6018427382800e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427382800e+12F && double_Array_0[4] >= 1.0e-20F ));
 double_Array_0[5] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[5] >= -461168.6018427382800e+13F && double_Array_0[5] <= -1.0e-20F) || (double_Array_0[5] <= 4611686.018427382800e+12F && double_Array_0[5] >= 1.0e-20F ));
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables() {
 last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}
int property() {
 return ((((BOOL_unsigned_char_Array_0[1] ? (double_Array_0[6] == ((double) (double_Array_0[5] + ((((double_Array_0[4]) < ((49.5 + double_Array_0[3]))) ? (double_Array_0[4]) : ((49.5 + double_Array_0[3]))))))) : 1) && (((- (double_Array_0[1] - double_Array_0[0])) <= double_Array_0[5]) ? (signed_short_int_Array_0[2] == ((signed short int) ((8 + unsigned_char_Array_0[1]) - unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[1] ? (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[2] == ((signed short int) unsigned_char_Array_0[1])) : 1) : (signed_short_int_Array_0[2] == ((signed short int) unsigned_char_Array_0[1]))))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) last_1_unsigned_char_Array_0_1_))) && ((double_Array_0[1] < (double_Array_0[0] - double_Array_0[2])) ? (float_Array_0[0] == ((float) ((((double_Array_0[4]) > (((((((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) > (double_Array_0[5])) ? (((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) : (double_Array_0[5]))))) ? (double_Array_0[4]) : (((((((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) > (double_Array_0[5])) ? (((((127.4f) > (double_Array_0[3])) ? (127.4f) : (double_Array_0[3])))) : (double_Array_0[5])))))))) : 1)) && ((signed_short_int_Array_0[0] >= signed_short_int_Array_0[1]) ? (((signed_short_int_Array_0[0] + last_1_unsigned_char_Array_0_1_) >= unsigned_long_int_Array_0[0]) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0]))) : 1)
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
