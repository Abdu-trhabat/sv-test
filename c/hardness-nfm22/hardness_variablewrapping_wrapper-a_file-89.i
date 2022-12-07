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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[5] = {
 0, 0, 1, 0, 0
};
signed char signed_char_Array_0[3] = {
 -1, -1, -50
};
signed long int signed_long_int_Array_0[1] = {
 100
};
unsigned char unsigned_char_Array_0[1] = {
 4
};
unsigned short int unsigned_short_int_Array_0[2] = {
 16, 25
};
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 16;
unsigned short int last_1_unsigned_short_int_Array_0_1_ = 25;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_unsigned_short_int_Array_0_1_;
 if (last_1_unsigned_short_int_Array_0_0_ > stepLocal_0) {
  signed_char_Array_0[1] = (((((-4 + signed_char_Array_0[0])) < (signed_char_Array_0[2])) ? ((-4 + signed_char_Array_0[0])) : (signed_char_Array_0[2])));
 }
 unsigned_short_int_Array_0[0] = signed_char_Array_0[1];
 if ((unsigned_short_int_Array_0[0] / unsigned_char_Array_0[0]) >= unsigned_short_int_Array_0[0]) {
  BOOL_unsigned_char_Array_0[4] = (BOOL_unsigned_char_Array_0[3] && BOOL_unsigned_char_Array_0[2]);
 } else {
  BOOL_unsigned_char_Array_0[4] = (BOOL_unsigned_char_Array_0[3] && BOOL_unsigned_char_Array_0[0]);
 }
 signed_long_int_Array_0[0] = signed_char_Array_0[2];
 unsigned_short_int_Array_0[1] = unsigned_char_Array_0[0];
 if ((signed_long_int_Array_0[0] / unsigned_char_Array_0[0]) > signed_char_Array_0[2]) {
  if (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[4]) {
   if (signed_char_Array_0[1] < unsigned_short_int_Array_0[0]) {
    if (unsigned_char_Array_0[0] <= (8 ^ signed_char_Array_0[1])) {
     BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[3];
    } else {
     BOOL_unsigned_char_Array_0[1] = (BOOL_unsigned_char_Array_0[3] && (! BOOL_unsigned_char_Array_0[0]));
    }
   } else {
    BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[0];
   }
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -63);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -127);
 assume_abort_if_not(signed_char_Array_0[2] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[0] != 0);
}
void updateLastVariables() {
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
 last_1_unsigned_short_int_Array_0_1_ = unsigned_short_int_Array_0[1];
}
int property() {
 return (((((((unsigned_short_int_Array_0[0] / unsigned_char_Array_0[0]) >= unsigned_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (BOOL_unsigned_char_Array_0[3] && BOOL_unsigned_char_Array_0[2]))) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (BOOL_unsigned_char_Array_0[3] && BOOL_unsigned_char_Array_0[0])))) && ((last_1_unsigned_short_int_Array_0_0_ > last_1_unsigned_short_int_Array_0_1_) ? (signed_char_Array_0[1] == ((signed char) (((((-4 + signed_char_Array_0[0])) < (signed_char_Array_0[2])) ? ((-4 + signed_char_Array_0[0])) : (signed_char_Array_0[2]))))) : 1)) && (((signed_long_int_Array_0[0] / unsigned_char_Array_0[0]) > signed_char_Array_0[2]) ? ((BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[4]) ? ((signed_char_Array_0[1] < unsigned_short_int_Array_0[0]) ? ((unsigned_char_Array_0[0] <= (8 ^ signed_char_Array_0[1])) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[3])) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (BOOL_unsigned_char_Array_0[3] && (! BOOL_unsigned_char_Array_0[0]))))) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[0]))) : 1) : 1)) && (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[2]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) signed_char_Array_0[1]))) && (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_char_Array_0[0]))
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
