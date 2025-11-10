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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 1
};
signed short int signed_short_int_Array_0[2] = {
 100, -8
};
unsigned char unsigned_char_Array_0[5] = {
 64, 4, 1, 0, 10
};
unsigned long int unsigned_long_int_Array_0[1] = {
 8
};
unsigned short int unsigned_short_int_Array_0[1] = {
 0
};
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = - last_1_unsigned_long_int_Array_0_0_;
 if (stepLocal_0 <= last_1_unsigned_long_int_Array_0_0_) {
  if (! BOOL_unsigned_char_Array_0[2]) {
   signed_short_int_Array_0[1] = ((((1 - signed_short_int_Array_0[0]) < 0 ) ? -(1 - signed_short_int_Array_0[0]) : (1 - signed_short_int_Array_0[0])));
  }
 } else {
  signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
 }
 signed short int stepLocal_2 = signed_short_int_Array_0[1];
 unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[2];
 if (stepLocal_1 && (! BOOL_unsigned_char_Array_0[1])) {
  unsigned_char_Array_0[4] = unsigned_char_Array_0[1];
 } else {
  if (stepLocal_2 != unsigned_short_int_Array_0[0]) {
   unsigned_char_Array_0[4] = ((((unsigned_char_Array_0[1]) < (((unsigned_char_Array_0[0] - unsigned_char_Array_0[2]) + unsigned_char_Array_0[3]))) ? (unsigned_char_Array_0[1]) : (((unsigned_char_Array_0[0] - unsigned_char_Array_0[2]) + unsigned_char_Array_0[3]))));
  } else {
   unsigned_char_Array_0[4] = unsigned_char_Array_0[3];
  }
 }
 unsigned char stepLocal_4 = BOOL_unsigned_char_Array_0[0];
 signed short int stepLocal_3 = signed_short_int_Array_0[0];
 if (BOOL_unsigned_char_Array_0[2]) {
  if (BOOL_unsigned_char_Array_0[1] && stepLocal_4) {
   unsigned_long_int_Array_0[0] = (((((((unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) : (unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]))) < 0 ) ? -((((unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) : (unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]))) : ((((unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) : (unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0])))));
  }
 } else {
  if (stepLocal_3 > unsigned_char_Array_0[0]) {
   unsigned_long_int_Array_0[0] = unsigned_char_Array_0[4];
  } else {
   unsigned_long_int_Array_0[0] = unsigned_char_Array_0[2];
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
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 63);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
}
void updateLastVariables(void) {
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property(void) {
 return ((((- last_1_unsigned_long_int_Array_0_0_) <= last_1_unsigned_long_int_Array_0_0_) ? ((! BOOL_unsigned_char_Array_0[2]) ? (signed_short_int_Array_0[1] == ((signed short int) ((((1 - signed_short_int_Array_0[0]) < 0 ) ? -(1 - signed_short_int_Array_0[0]) : (1 - signed_short_int_Array_0[0]))))) : 1) : (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0]))) && ((BOOL_unsigned_char_Array_0[2] && (! BOOL_unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[4] == ((unsigned char) unsigned_char_Array_0[1])) : ((signed_short_int_Array_0[1] != unsigned_short_int_Array_0[0]) ? (unsigned_char_Array_0[4] == ((unsigned char) ((((unsigned_char_Array_0[1]) < (((unsigned_char_Array_0[0] - unsigned_char_Array_0[2]) + unsigned_char_Array_0[3]))) ? (unsigned_char_Array_0[1]) : (((unsigned_char_Array_0[0] - unsigned_char_Array_0[2]) + unsigned_char_Array_0[3])))))) : (unsigned_char_Array_0[4] == ((unsigned char) unsigned_char_Array_0[3]))))) && (BOOL_unsigned_char_Array_0[2] ? ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) (((((((unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) : (unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]))) < 0 ) ? -((((unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) : (unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]))) : ((((unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]) : (unsigned_char_Array_0[4] + unsigned_short_int_Array_0[0]))))))) : 1) : ((signed_short_int_Array_0[0] > unsigned_char_Array_0[0]) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[4])) : (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[2]))))
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
