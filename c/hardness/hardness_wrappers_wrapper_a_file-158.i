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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Wrapper_A.c", 13, "reach_error"); }
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
 0, 0
};
double double_Array_0[2] = {
 9.3, 15.5
};
signed long int signed_long_int_Array_0[1] = {
 -10000
};
unsigned char unsigned_char_Array_0[11] = {
 32, 2, 2, 128, 16, 32, 100, 32, 64, 0, 64
};
unsigned short int unsigned_short_int_Array_0[1] = {
 32
};
void initially(void) {
}
void step(void) {
 if (double_Array_0[1] >= double_Array_0[0]) {
  unsigned_char_Array_0[10] = ((((unsigned_char_Array_0[9]) < (unsigned_char_Array_0[8])) ? (unsigned_char_Array_0[9]) : (unsigned_char_Array_0[8])));
 } else {
  unsigned_char_Array_0[10] = unsigned_char_Array_0[8];
 }
 if (! BOOL_unsigned_char_Array_0[1]) {
  signed_long_int_Array_0[0] = unsigned_char_Array_0[8];
 }
 if (BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) {
  unsigned_char_Array_0[2] = (unsigned_char_Array_0[3] - unsigned_char_Array_0[4]);
 } else {
  if (-1000000000 < unsigned_char_Array_0[9]) {
   unsigned_char_Array_0[2] = (128 - ((unsigned_char_Array_0[0] + 50) - (32 - unsigned_char_Array_0[1])));
  } else {
   unsigned_char_Array_0[2] = ((unsigned_char_Array_0[6] + (unsigned_char_Array_0[7] + unsigned_char_Array_0[5])) - unsigned_char_Array_0[0]);
  }
 }
 signed long int stepLocal_1 = signed_long_int_Array_0[0];
 signed long int stepLocal_0 = -5;
 if (BOOL_unsigned_char_Array_0[1]) {
  if (unsigned_char_Array_0[6] <= stepLocal_1) {
   unsigned_short_int_Array_0[0] = ((((unsigned_char_Array_0[3]) > (signed_long_int_Array_0[0])) ? (unsigned_char_Array_0[3]) : (signed_long_int_Array_0[0])));
  } else {
   if (stepLocal_0 > unsigned_char_Array_0[1]) {
    unsigned_short_int_Array_0[0] = unsigned_char_Array_0[9];
   }
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 31);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 64);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 31);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 254);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 127);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 63);
 unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[6] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[6] <= 127);
 unsigned_char_Array_0[7] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[7] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[7] <= 64);
 unsigned_char_Array_0[8] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[8] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[8] <= 254);
 unsigned_char_Array_0[9] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[9] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[9] <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((double_Array_0[1] >= double_Array_0[0]) ? (unsigned_char_Array_0[10] == ((unsigned char) ((((unsigned_char_Array_0[9]) < (unsigned_char_Array_0[8])) ? (unsigned_char_Array_0[9]) : (unsigned_char_Array_0[8]))))) : (unsigned_char_Array_0[10] == ((unsigned char) unsigned_char_Array_0[8]))) && ((! BOOL_unsigned_char_Array_0[1]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[8])) : 1)) && ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? (unsigned_char_Array_0[2] == ((unsigned char) (unsigned_char_Array_0[3] - unsigned_char_Array_0[4]))) : ((-1000000000 < unsigned_char_Array_0[9]) ? (unsigned_char_Array_0[2] == ((unsigned char) (128 - ((unsigned_char_Array_0[0] + 50) - (32 - unsigned_char_Array_0[1]))))) : (unsigned_char_Array_0[2] == ((unsigned char) ((unsigned_char_Array_0[6] + (unsigned_char_Array_0[7] + unsigned_char_Array_0[5])) - unsigned_char_Array_0[0])))))) && (BOOL_unsigned_char_Array_0[1] ? ((unsigned_char_Array_0[6] <= signed_long_int_Array_0[0]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) ((((unsigned_char_Array_0[3]) > (signed_long_int_Array_0[0])) ? (unsigned_char_Array_0[3]) : (signed_long_int_Array_0[0]))))) : ((-5 > unsigned_char_Array_0[1]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[9])) : 1)) : 1)
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
