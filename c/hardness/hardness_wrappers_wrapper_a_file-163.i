// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 1
};
double double_Array_0[2] = {
 8.5, 16.2
};
signed long int signed_long_int_Array_0[2] = {
 -16, -2
};
signed short int signed_short_int_Array_0[2] = {
 64, 100
};
unsigned long int unsigned_long_int_Array_0[1] = {
 100000000
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {2, 4}, {55631, 500}
};
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 100000000;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = last_1_unsigned_long_int_Array_0_0_ / unsigned_short_int_Array_0[0][1];
 if (last_1_unsigned_long_int_Array_0_0_ >= stepLocal_0) {
  signed_long_int_Array_0[1] = last_1_unsigned_long_int_Array_0_0_;
 }
 signed long int stepLocal_3 = ((((unsigned_short_int_Array_0[0][1]) > (unsigned_short_int_Array_0[1][1])) ? (unsigned_short_int_Array_0[0][1]) : (unsigned_short_int_Array_0[1][1]))) * signed_long_int_Array_0[0];
 unsigned short int stepLocal_2 = unsigned_short_int_Array_0[0][0];
 unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[1];
 if (stepLocal_1 || BOOL_unsigned_char_Array_0[0]) {
  if (((((last_1_unsigned_long_int_Array_0_0_) > (signed_long_int_Array_0[1])) ? (last_1_unsigned_long_int_Array_0_0_) : (signed_long_int_Array_0[1]))) < stepLocal_3) {
   if (last_1_unsigned_long_int_Array_0_0_ >= stepLocal_2) {
    unsigned_long_int_Array_0[0] = unsigned_short_int_Array_0[0][1];
   }
  } else {
   unsigned_long_int_Array_0[0] = unsigned_short_int_Array_0[1][1];
  }
 } else {
  unsigned_long_int_Array_0[0] = last_1_unsigned_long_int_Array_0_0_;
 }
 signed long int stepLocal_6 = unsigned_short_int_Array_0[1][0] - signed_short_int_Array_0[0];
 unsigned short int stepLocal_5 = unsigned_short_int_Array_0[0][0];
 signed long int stepLocal_4 = (signed_short_int_Array_0[1] - signed_short_int_Array_0[0]) + unsigned_short_int_Array_0[0][1];
 if (stepLocal_4 == ((unsigned_short_int_Array_0[0][0] + unsigned_short_int_Array_0[1][1]) * 16)) {
  if (unsigned_short_int_Array_0[0][1] < stepLocal_6) {
   if (stepLocal_5 != signed_long_int_Array_0[0]) {
    double_Array_0[0] = double_Array_0[1];
   } else {
    double_Array_0[0] = 31.1;
   }
  } else {
   double_Array_0[0] = double_Array_0[1];
  }
 } else {
  double_Array_0[0] = double_Array_0[1];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65535);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] != 0);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65535);
}
void updateLastVariables(void) {
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property(void) {
 return (((last_1_unsigned_long_int_Array_0_0_ >= (last_1_unsigned_long_int_Array_0_0_ / unsigned_short_int_Array_0[0][1])) ? (signed_long_int_Array_0[1] == ((signed long int) last_1_unsigned_long_int_Array_0_0_)) : 1) && ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? ((((((last_1_unsigned_long_int_Array_0_0_) > (signed_long_int_Array_0[1])) ? (last_1_unsigned_long_int_Array_0_0_) : (signed_long_int_Array_0[1]))) < (((((unsigned_short_int_Array_0[0][1]) > (unsigned_short_int_Array_0[1][1])) ? (unsigned_short_int_Array_0[0][1]) : (unsigned_short_int_Array_0[1][1]))) * signed_long_int_Array_0[0])) ? ((last_1_unsigned_long_int_Array_0_0_ >= unsigned_short_int_Array_0[0][0]) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_short_int_Array_0[0][1])) : 1) : (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_short_int_Array_0[1][1]))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) last_1_unsigned_long_int_Array_0_0_)))) && ((((signed_short_int_Array_0[1] - signed_short_int_Array_0[0]) + unsigned_short_int_Array_0[0][1]) == ((unsigned_short_int_Array_0[0][0] + unsigned_short_int_Array_0[1][1]) * 16)) ? ((unsigned_short_int_Array_0[0][1] < (unsigned_short_int_Array_0[1][0] - signed_short_int_Array_0[0])) ? ((unsigned_short_int_Array_0[0][0] != signed_long_int_Array_0[0]) ? (double_Array_0[0] == ((double) double_Array_0[1])) : (double_Array_0[0] == ((double) 31.1))) : (double_Array_0[0] == ((double) double_Array_0[1]))) : (double_Array_0[0] == ((double) double_Array_0[1])))
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
