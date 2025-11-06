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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {0, 0}, {0, 1}
};
float float_Array_0[2] = {
 1000.2, 1000000000000000.4
};
signed short int signed_short_int_Array_0[2] = {
 -2, 128
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {10, 256}, {4, 4}
};
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 1;
void initially(void) {
}
void step(void) {
 if (float_Array_0[1] >= 64.5f) {
  if (float_Array_0[1] >= float_Array_0[0]) {
   unsigned_short_int_Array_0[1][1] = (((((((unsigned_short_int_Array_0[0][1]) > (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))) ? (unsigned_short_int_Array_0[0][1]) : (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0])))))) < 0 ) ? -((((unsigned_short_int_Array_0[0][1]) > (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))) ? (unsigned_short_int_Array_0[0][1]) : (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0])))))) : ((((unsigned_short_int_Array_0[0][1]) > (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))) ? (unsigned_short_int_Array_0[0][1]) : (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))))));
  } else {
   if (last_1_BOOL_unsigned_char_Array_0_1__1_) {
    unsigned_short_int_Array_0[1][1] = unsigned_short_int_Array_0[1][0];
   } else {
    unsigned_short_int_Array_0[1][1] = unsigned_short_int_Array_0[0][0];
   }
  }
 } else {
  unsigned_short_int_Array_0[1][1] = 50;
 }
 signed_short_int_Array_0[1] = ((((signed_short_int_Array_0[0]) < 0 ) ? -(signed_short_int_Array_0[0]) : (signed_short_int_Array_0[0])));
 if ((- 16) <= signed_short_int_Array_0[0]) {
  BOOL_unsigned_char_Array_0[0][1] = (! (! (! BOOL_unsigned_char_Array_0[0][0])));
 } else {
  BOOL_unsigned_char_Array_0[0][1] = (BOOL_unsigned_char_Array_0[0][0] && BOOL_unsigned_char_Array_0[1][0]);
 }
 if (! BOOL_unsigned_char_Array_0[1][0]) {
  if (unsigned_short_int_Array_0[0][1] >= ((((unsigned_short_int_Array_0[0][0]) < (unsigned_short_int_Array_0[1][1])) ? (unsigned_short_int_Array_0[0][0]) : (unsigned_short_int_Array_0[1][1])))) {
   BOOL_unsigned_char_Array_0[1][1] = (BOOL_unsigned_char_Array_0[0][1] && BOOL_unsigned_char_Array_0[1][0]);
  } else {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32766);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65534);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
}
int property(void) {
 return ((((float_Array_0[1] >= 64.5f) ? ((float_Array_0[1] >= float_Array_0[0]) ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) (((((((unsigned_short_int_Array_0[0][1]) > (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))) ? (unsigned_short_int_Array_0[0][1]) : (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0])))))) < 0 ) ? -((((unsigned_short_int_Array_0[0][1]) > (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))) ? (unsigned_short_int_Array_0[0][1]) : (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0])))))) : ((((unsigned_short_int_Array_0[0][1]) > (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0]))))) ? (unsigned_short_int_Array_0[0][1]) : (((((unsigned_short_int_Array_0[1][0]) > (unsigned_short_int_Array_0[0][0])) ? (unsigned_short_int_Array_0[1][0]) : (unsigned_short_int_Array_0[0][0])))))))))) : (last_1_BOOL_unsigned_char_Array_0_1__1_ ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) unsigned_short_int_Array_0[1][0])) : (unsigned_short_int_Array_0[1][1] == ((unsigned short int) unsigned_short_int_Array_0[0][0])))) : (unsigned_short_int_Array_0[1][1] == ((unsigned short int) 50))) && (signed_short_int_Array_0[1] == ((signed short int) ((((signed_short_int_Array_0[0]) < 0 ) ? -(signed_short_int_Array_0[0]) : (signed_short_int_Array_0[0])))))) && (((- 16) <= signed_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (! (! (! BOOL_unsigned_char_Array_0[0][0]))))) : (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][0] && BOOL_unsigned_char_Array_0[1][0]))))) && ((! BOOL_unsigned_char_Array_0[1][0]) ? ((unsigned_short_int_Array_0[0][1] >= ((((unsigned_short_int_Array_0[0][0]) < (unsigned_short_int_Array_0[1][1])) ? (unsigned_short_int_Array_0[0][0]) : (unsigned_short_int_Array_0[1][1])))) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][1] && BOOL_unsigned_char_Array_0[1][0]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0]))) : 1)
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
