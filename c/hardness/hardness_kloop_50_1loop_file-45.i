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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4550_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
signed short int last_1_var_1_14 = -1;
void initially(void) {
}
void step(void) {
 var_1_7 = (((((var_1_8 - last_1_var_1_14)) < (var_1_9)) ? ((var_1_8 - last_1_var_1_14)) : (var_1_9)));
 if (var_1_8 > var_1_9) {
  var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 } else {
  var_1_10 = (var_1_12 - (var_1_13 - 8));
 }
 if (var_1_2) {
  var_1_16 = (var_1_5 || var_1_17);
 }
 var_1_18 = var_1_8;
 signed long int stepLocal_0 = ~ var_1_7;
 if (var_1_16) {
  if (stepLocal_0 <= (var_1_18 + 100000000)) {
   if (! var_1_16) {
    var_1_1 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
   } else {
    var_1_1 = (var_1_7 + 32);
   }
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (! var_1_16) {
  if (var_1_16) {
   var_1_14 = ((32 + var_1_7) + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
  } else {
   var_1_14 = -50;
  }
 }
 signed short int stepLocal_2 = var_1_1;
 signed short int stepLocal_1 = var_1_14;
 if (stepLocal_2 <= var_1_18) {
  if (var_1_18 <= stepLocal_1) {
   var_1_6 = var_1_14;
  }
 }
 unsigned long int stepLocal_3 = var_1_18 * (var_1_6 + var_1_8);
 if (var_1_14 >= stepLocal_3) {
  var_1_15 = ((((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))));
 } else {
  var_1_15 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -126);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
}
int property(void) {
 return (((((((var_1_16 ? (((~ var_1_7) <= (var_1_18 + 100000000)) ? ((! var_1_16) ? (var_1_1 == ((signed short int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : (var_1_1 == ((signed short int) (var_1_7 + 32)))) : (var_1_1 == ((signed short int) var_1_7))) : (var_1_1 == ((signed short int) var_1_7))) && ((var_1_1 <= var_1_18) ? ((var_1_18 <= var_1_14) ? (var_1_6 == ((signed long int) var_1_14)) : 1) : 1)) && (var_1_7 == ((unsigned short int) (((((var_1_8 - last_1_var_1_14)) < (var_1_9)) ? ((var_1_8 - last_1_var_1_14)) : (var_1_9)))))) && ((var_1_8 > var_1_9) ? (var_1_10 == ((signed char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_10 == ((signed char) (var_1_12 - (var_1_13 - 8)))))) && ((! var_1_16) ? (var_1_16 ? (var_1_14 == ((signed short int) ((32 + var_1_7) + ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : (var_1_14 == ((signed short int) -50))) : 1)) && ((var_1_14 >= (var_1_18 * (var_1_6 + var_1_8))) ? (var_1_15 == ((signed char) ((((((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) < (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))))) : (var_1_15 == ((signed char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))))) && (var_1_2 ? (var_1_16 == ((unsigned char) (var_1_5 || var_1_17))) : 1)) && (var_1_18 == ((unsigned long int) var_1_8))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
