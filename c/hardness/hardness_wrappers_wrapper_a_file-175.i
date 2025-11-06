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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Wrapper_A.c", 13, "reach_error"); }
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
 0, 1
};
float float_Array_0[2] = {
 99999.9, 31.625
};
signed char signed_char_Array_0[3] = {
 -1, -5, -16
};
unsigned char unsigned_char_Array_0[2][3] = {
 {32, 128, 32}, {8, 64, 32}
};
unsigned short int unsigned_short_int_Array_0[1] = {
 1
};
unsigned char last_1_unsigned_char_Array_0_1__2_ = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = unsigned_char_Array_0[0][2];
 if (last_1_unsigned_char_Array_0_1__2_ > stepLocal_0) {
  unsigned_char_Array_0[1][2] = unsigned_char_Array_0[1][1];
 } else {
  unsigned_char_Array_0[1][2] = (unsigned_char_Array_0[0][1] - ((((unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]) < 0 ) ? -(unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]) : (unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]))));
 }
 float_Array_0[1] = float_Array_0[0];
 if ((((((unsigned_char_Array_0[1][2]) < (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][2]) : (unsigned_char_Array_0[0][0]))) + unsigned_char_Array_0[1][2]) > unsigned_char_Array_0[1][0]) {
  BOOL_unsigned_char_Array_0[0] = (! BOOL_unsigned_char_Array_0[1]);
 } else {
  BOOL_unsigned_char_Array_0[0] = 0;
 }
 if (((~ unsigned_char_Array_0[1][0]) >= unsigned_char_Array_0[0][0]) && BOOL_unsigned_char_Array_0[0]) {
  if (unsigned_short_int_Array_0[0] <= ((((200) > (8)) ? (200) : (8)))) {
   if (BOOL_unsigned_char_Array_0[0]) {
    signed_char_Array_0[0] = unsigned_char_Array_0[1][0];
   }
  } else {
   signed_char_Array_0[0] = (unsigned_char_Array_0[0][0] + signed_char_Array_0[1]);
  }
 } else {
  signed_char_Array_0[0] = (((((unsigned_char_Array_0[0][0] - unsigned_char_Array_0[1][0])) > (signed_char_Array_0[1])) ? ((unsigned_char_Array_0[0][0] - unsigned_char_Array_0[1][0])) : (signed_char_Array_0[1])));
 }
 signed_char_Array_0[2] = signed_char_Array_0[1];
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -63);
 assume_abort_if_not(signed_char_Array_0[1] <= 63);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 63);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 64);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 254);
 unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][2] <= 255);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
}
void updateLastVariables(void) {
 last_1_unsigned_char_Array_0_1__2_ = unsigned_char_Array_0[1][2];
}
int property(void) {
 return (((((last_1_unsigned_char_Array_0_1__2_ > unsigned_char_Array_0[0][2]) ? (unsigned_char_Array_0[1][2] == ((unsigned char) unsigned_char_Array_0[1][1])) : (unsigned_char_Array_0[1][2] == ((unsigned char) (unsigned_char_Array_0[0][1] - ((((unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]) < 0 ) ? -(unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]) : (unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]))))))) && (float_Array_0[1] == ((float) float_Array_0[0]))) && (((((((unsigned_char_Array_0[1][2]) < (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][2]) : (unsigned_char_Array_0[0][0]))) + unsigned_char_Array_0[1][2]) > unsigned_char_Array_0[1][0]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) 0)))) && ((((~ unsigned_char_Array_0[1][0]) >= unsigned_char_Array_0[0][0]) && BOOL_unsigned_char_Array_0[0]) ? ((unsigned_short_int_Array_0[0] <= ((((200) > (8)) ? (200) : (8)))) ? (BOOL_unsigned_char_Array_0[0] ? (signed_char_Array_0[0] == ((signed char) unsigned_char_Array_0[1][0])) : 1) : (signed_char_Array_0[0] == ((signed char) (unsigned_char_Array_0[0][0] + signed_char_Array_0[1])))) : (signed_char_Array_0[0] == ((signed char) (((((unsigned_char_Array_0[0][0] - unsigned_char_Array_0[1][0])) > (signed_char_Array_0[1])) ? ((unsigned_char_Array_0[0][0] - unsigned_char_Array_0[1][0])) : (signed_char_Array_0[1]))))))) && (signed_char_Array_0[2] == ((signed char) signed_char_Array_0[1]))
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
