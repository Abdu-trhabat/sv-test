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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
 255.75, 4.35, 2.75
};
signed long int signed_long_int_Array_0[2][2] = {
 {0, 5}, {100000, 4}
};
signed short int signed_short_int_Array_0[1] = {
 8
};
unsigned char unsigned_char_Array_0[2] = {
 5, 64
};
unsigned short int unsigned_short_int_Array_0[2] = {
 1, 100
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = signed_long_int_Array_0[0][1];
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
 if (BOOL_unsigned_char_Array_0[1] || stepLocal_0) {
  signed_long_int_Array_0[1][1] = ((256 + signed_long_int_Array_0[0][1]) - ((((signed_long_int_Array_0[1][0]) < (signed_long_int_Array_0[0][0])) ? (signed_long_int_Array_0[1][0]) : (signed_long_int_Array_0[0][0]))));
 } else {
  if (stepLocal_1 <= signed_long_int_Array_0[0][0]) {
   signed_long_int_Array_0[1][1] = signed_long_int_Array_0[0][0];
  }
 }
 unsigned char stepLocal_3 = BOOL_unsigned_char_Array_0[1];
 signed long int stepLocal_2 = signed_long_int_Array_0[0][1];
 if (BOOL_unsigned_char_Array_0[0]) {
  if (signed_long_int_Array_0[1][1] >= stepLocal_2) {
   if (((signed_long_int_Array_0[1][0] + signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[0][0] * signed_long_int_Array_0[0][1])) && stepLocal_3) {
    unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[0];
   } else {
    unsigned_short_int_Array_0[1] = 5;
   }
  } else {
   unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[0];
  }
 }
 double_Array_0[0] = ((((double_Array_0[1]) > (double_Array_0[2])) ? (double_Array_0[1]) : (double_Array_0[2])));
 unsigned char stepLocal_5 = BOOL_unsigned_char_Array_0[0];
 signed long int stepLocal_4 = signed_long_int_Array_0[1][0];
 if ((signed_long_int_Array_0[0][1] * (unsigned_short_int_Array_0[1] / signed_short_int_Array_0[0])) >= stepLocal_4) {
  if (stepLocal_5 && (double_Array_0[0] < double_Array_0[1])) {
   unsigned_char_Array_0[0] = 5;
  } else {
   unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
  }
 } else {
  unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
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
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483646);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 1073741823);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
 assume_abort_if_not(signed_short_int_Array_0[0] != 0);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[1][1] == ((signed long int) ((256 + signed_long_int_Array_0[0][1]) - ((((signed_long_int_Array_0[1][0]) < (signed_long_int_Array_0[0][0])) ? (signed_long_int_Array_0[1][0]) : (signed_long_int_Array_0[0][0])))))) : ((signed_long_int_Array_0[0][1] <= signed_long_int_Array_0[0][0]) ? (signed_long_int_Array_0[1][1] == ((signed long int) signed_long_int_Array_0[0][0])) : 1)) && (BOOL_unsigned_char_Array_0[0] ? ((signed_long_int_Array_0[1][1] >= signed_long_int_Array_0[0][1]) ? ((((signed_long_int_Array_0[1][0] + signed_long_int_Array_0[1][1]) < (signed_long_int_Array_0[0][0] * signed_long_int_Array_0[0][1])) && BOOL_unsigned_char_Array_0[1]) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[0])) : (unsigned_short_int_Array_0[1] == ((unsigned short int) 5))) : (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[0]))) : 1)) && (double_Array_0[0] == ((double) ((((double_Array_0[1]) > (double_Array_0[2])) ? (double_Array_0[1]) : (double_Array_0[2])))))) && (((signed_long_int_Array_0[0][1] * (unsigned_short_int_Array_0[1] / signed_short_int_Array_0[0])) >= signed_long_int_Array_0[1][0]) ? ((BOOL_unsigned_char_Array_0[0] && (double_Array_0[0] < double_Array_0[1])) ? (unsigned_char_Array_0[0] == ((unsigned char) 5)) : (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))) : (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])))
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
