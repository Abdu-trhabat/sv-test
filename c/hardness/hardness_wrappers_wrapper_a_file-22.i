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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
float float_Array_0[2][2] = {
 {64.2, 128.75}, {7.6, 5.9}
};
signed short int signed_short_int_Array_0[1] = {
 -5
};
unsigned char unsigned_char_Array_0[2] = {
 25, 5
};
unsigned long int unsigned_long_int_Array_0[2] = {
 3135928546, 8
};
unsigned short int unsigned_short_int_Array_0[2] = {
 44772, 256
};
void initially(void) {
}
void step(void) {
 if (unsigned_char_Array_0[1] == unsigned_char_Array_0[0]) {
  signed_short_int_Array_0[0] = (unsigned_char_Array_0[1] + -16);
 } else {
  if (BOOL_unsigned_char_Array_0[0]) {
   signed_short_int_Array_0[0] = unsigned_char_Array_0[0];
  }
 }
 signed short int stepLocal_0 = signed_short_int_Array_0[0];
 if (BOOL_unsigned_char_Array_0[0]) {
  unsigned_short_int_Array_0[1] = unsigned_char_Array_0[1];
 } else {
  if (unsigned_char_Array_0[1] <= stepLocal_0) {
   unsigned_short_int_Array_0[1] = ((((unsigned_char_Array_0[0]) > ((unsigned_short_int_Array_0[0] - 8))) ? (unsigned_char_Array_0[0]) : ((unsigned_short_int_Array_0[0] - 8))));
  }
 }
 unsigned short int stepLocal_1 = unsigned_short_int_Array_0[1];
 if (stepLocal_1 >= (unsigned_char_Array_0[1] & unsigned_char_Array_0[0])) {
  unsigned_long_int_Array_0[1] = ((((((((((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) < (unsigned_short_int_Array_0[0])) ? (((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) : (unsigned_short_int_Array_0[0])))) < ((unsigned_long_int_Array_0[0] - unsigned_short_int_Array_0[1]))) ? (((((((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) < (unsigned_short_int_Array_0[0])) ? (((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) : (unsigned_short_int_Array_0[0])))) : ((unsigned_long_int_Array_0[0] - unsigned_short_int_Array_0[1]))));
 } else {
  if (5.7 < float_Array_0[0][0]) {
   unsigned_long_int_Array_0[1] = unsigned_short_int_Array_0[1];
  } else {
   unsigned_long_int_Array_0[1] = unsigned_char_Array_0[0];
  }
 }
 if (unsigned_long_int_Array_0[1] < unsigned_short_int_Array_0[1]) {
  float_Array_0[1][1] = (((10.25f + float_Array_0[1][0]) + float_Array_0[0][0]) + float_Array_0[0][1]);
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -230584.3009213691400e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 2305843.009213691400e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -115292.1504606845700e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 1152921.504606845700e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -461168.6018427383000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427383000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((unsigned_char_Array_0[1] == unsigned_char_Array_0[0]) ? (signed_short_int_Array_0[0] == ((signed short int) (unsigned_char_Array_0[1] + -16))) : (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[0])) : 1)) && (BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_char_Array_0[1])) : ((unsigned_char_Array_0[1] <= signed_short_int_Array_0[0]) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) ((((unsigned_char_Array_0[0]) > ((unsigned_short_int_Array_0[0] - 8))) ? (unsigned_char_Array_0[0]) : ((unsigned_short_int_Array_0[0] - 8)))))) : 1))) && ((unsigned_long_int_Array_0[1] < unsigned_short_int_Array_0[1]) ? (float_Array_0[1][1] == ((float) (((10.25f + float_Array_0[1][0]) + float_Array_0[0][0]) + float_Array_0[0][1]))) : 1)) && ((unsigned_short_int_Array_0[1] >= (unsigned_char_Array_0[1] & unsigned_char_Array_0[0])) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) ((((((((((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) < (unsigned_short_int_Array_0[0])) ? (((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) : (unsigned_short_int_Array_0[0])))) < ((unsigned_long_int_Array_0[0] - unsigned_short_int_Array_0[1]))) ? (((((((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) < (unsigned_short_int_Array_0[0])) ? (((((50u) < (unsigned_char_Array_0[0])) ? (50u) : (unsigned_char_Array_0[0])))) : (unsigned_short_int_Array_0[0])))) : ((unsigned_long_int_Array_0[0] - unsigned_short_int_Array_0[1])))))) : ((5.7 < float_Array_0[0][0]) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_short_int_Array_0[1])) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_char_Array_0[0]))))
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
