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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
 {0, 1, 1}, {0, 0, 0}
};
double double_Array_0[3] = {
 2.75, 4.575, 128.5
};
float float_Array_0[1] = {
 99999.25
};
signed char signed_char_Array_0[2] = {
 1, 50
};
signed long int signed_long_int_Array_0[2] = {
 128, -1000000000
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {100, 8}, {1000, 8}
};
unsigned char last_1_BOOL_unsigned_char_Array_0_0__2_ = 1;
void initially(void) {
}
void step(void) {
 if (! last_1_BOOL_unsigned_char_Array_0_0__2_) {
  unsigned_short_int_Array_0[1][1] = ((((unsigned_short_int_Array_0[0][1]) < (unsigned_short_int_Array_0[1][0])) ? (unsigned_short_int_Array_0[0][1]) : (unsigned_short_int_Array_0[1][0])));
 } else {
  unsigned_short_int_Array_0[1][1] = unsigned_short_int_Array_0[1][0];
 }
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[1][1];
 if (BOOL_unsigned_char_Array_0[1][2]) {
  if (stepLocal_0 && ((unsigned_short_int_Array_0[0][1] >= 16) || BOOL_unsigned_char_Array_0[0][1])) {
   if (BOOL_unsigned_char_Array_0[1][1]) {
    BOOL_unsigned_char_Array_0[0][2] = ((unsigned_short_int_Array_0[1][1] < unsigned_short_int_Array_0[0][0]) && BOOL_unsigned_char_Array_0[0][0]);
   } else {
    BOOL_unsigned_char_Array_0[0][2] = BOOL_unsigned_char_Array_0[1][0];
   }
  }
 }
 signed_long_int_Array_0[1] = unsigned_short_int_Array_0[1][1];
 float_Array_0[0] = double_Array_0[0];
 signed_char_Array_0[0] = signed_char_Array_0[1];
 if (((((signed_long_int_Array_0[1]) < 0 ) ? -(signed_long_int_Array_0[1]) : (signed_long_int_Array_0[1]))) > unsigned_short_int_Array_0[1][1]) {
  if ((signed_long_int_Array_0[1] / -5) >= ((unsigned_short_int_Array_0[1][0] + unsigned_short_int_Array_0[1][1]) - ((((signed_long_int_Array_0[0]) < (unsigned_short_int_Array_0[0][1])) ? (signed_long_int_Array_0[0]) : (unsigned_short_int_Array_0[0][1]))))) {
   double_Array_0[1] = (double_Array_0[0] + double_Array_0[2]);
  } else {
   double_Array_0[1] = double_Array_0[2];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -461168.6018427383000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -461168.6018427383000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_0__2_ = BOOL_unsigned_char_Array_0[0][2];
}
int property(void) {
 return ((((((! last_1_BOOL_unsigned_char_Array_0_0__2_) ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) ((((unsigned_short_int_Array_0[0][1]) < (unsigned_short_int_Array_0[1][0])) ? (unsigned_short_int_Array_0[0][1]) : (unsigned_short_int_Array_0[1][0]))))) : (unsigned_short_int_Array_0[1][1] == ((unsigned short int) unsigned_short_int_Array_0[1][0]))) && (BOOL_unsigned_char_Array_0[1][2] ? ((BOOL_unsigned_char_Array_0[1][1] && ((unsigned_short_int_Array_0[0][1] >= 16) || BOOL_unsigned_char_Array_0[0][1])) ? (BOOL_unsigned_char_Array_0[1][1] ? (BOOL_unsigned_char_Array_0[0][2] == ((unsigned char) ((unsigned_short_int_Array_0[1][1] < unsigned_short_int_Array_0[0][0]) && BOOL_unsigned_char_Array_0[0][0]))) : (BOOL_unsigned_char_Array_0[0][2] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0]))) : 1) : 1)) && ((((((signed_long_int_Array_0[1]) < 0 ) ? -(signed_long_int_Array_0[1]) : (signed_long_int_Array_0[1]))) > unsigned_short_int_Array_0[1][1]) ? (((signed_long_int_Array_0[1] / -5) >= ((unsigned_short_int_Array_0[1][0] + unsigned_short_int_Array_0[1][1]) - ((((signed_long_int_Array_0[0]) < (unsigned_short_int_Array_0[0][1])) ? (signed_long_int_Array_0[0]) : (unsigned_short_int_Array_0[0][1]))))) ? (double_Array_0[1] == ((double) (double_Array_0[0] + double_Array_0[2]))) : (double_Array_0[1] == ((double) double_Array_0[2]))) : 1)) && (signed_long_int_Array_0[1] == ((signed long int) unsigned_short_int_Array_0[1][1]))) && (float_Array_0[0] == ((float) double_Array_0[0]))) && (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[1]))
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
