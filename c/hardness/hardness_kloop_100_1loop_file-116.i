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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
unsigned char var_1_2 = 1;
signed char var_1_3 = 100;
signed long int var_1_5 = 128;
signed long int var_1_6 = -64;
unsigned short int var_1_7 = 100;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 100;
unsigned short int var_1_10 = 0;
unsigned short int var_1_11 = 0;
double var_1_12 = 127.125;
double var_1_14 = 128.7;
double var_1_15 = 256.3;
float var_1_16 = 99.5;
signed short int var_1_17 = -8;
signed short int var_1_18 = 8;
signed short int var_1_19 = -32;
signed short int var_1_20 = 256;
unsigned short int var_1_21 = 1;
unsigned short int var_1_22 = 26889;
unsigned short int var_1_23 = 256;
unsigned short int var_1_24 = 1;
unsigned short int var_1_25 = 4;
float var_1_26 = 15.5;
float var_1_27 = 10.25;
unsigned short int var_1_28 = 16;
float var_1_29 = 4.5;
unsigned short int var_1_30 = 64;
unsigned char var_1_31 = 1;
unsigned long int var_1_32 = 128;
signed short int var_1_33 = 500;
unsigned short int var_1_34 = 35100;
signed char var_1_35 = 2;
signed short int var_1_36 = 30171;
signed short int var_1_37 = 25;
unsigned short int last_1_var_1_7 = 100;
double last_1_var_1_12 = 127.125;
unsigned short int last_1_var_1_21 = 1;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_5 = var_1_8;
 if (((((- last_1_var_1_12) < 0 ) ? -(- last_1_var_1_12) : (- last_1_var_1_12))) > (((((var_1_15 * var_1_26)) > ((last_1_var_1_12 / var_1_27))) ? ((var_1_15 * var_1_26)) : ((last_1_var_1_12 / var_1_27))))) {
  var_1_32 = (((((var_1_11) < (last_1_var_1_21)) ? (var_1_11) : (last_1_var_1_21))) + var_1_10);
 } else {
  if (stepLocal_5 >= var_1_24) {
   var_1_32 = var_1_8;
  } else {
   var_1_32 = last_1_var_1_7;
  }
 }
 if (var_1_2 || (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) <= var_1_32)) {
  var_1_1 = ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)));
 } else {
  var_1_1 = (var_1_3 + var_1_6);
 }
 signed long int stepLocal_0 = var_1_1;
 if (stepLocal_0 >= ((var_1_9 + var_1_6) * var_1_32)) {
  var_1_12 = (var_1_14 + var_1_15);
 } else {
  var_1_12 = var_1_14;
 }
 var_1_7 = (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) + ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))));
 unsigned long int stepLocal_1 = var_1_32;
 if (stepLocal_1 < var_1_6) {
  var_1_16 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 }
 if (var_1_15 >= var_1_14) {
  var_1_17 = var_1_3;
 } else {
  var_1_17 = ((((var_1_3) < ((var_1_18 + (var_1_19 + var_1_20)))) ? (var_1_3) : ((var_1_18 + (var_1_19 + var_1_20)))));
 }
 if (var_1_2) {
  var_1_21 = var_1_8;
 } else {
  if ((- var_1_18) >= var_1_7) {
   var_1_21 = var_1_11;
  } else {
   var_1_21 = (45247 - ((var_1_22 - var_1_23) - var_1_24));
  }
 }
 signed long int stepLocal_2 = var_1_10 + var_1_22;
 if (5.25f < (var_1_14 / ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))))) {
  var_1_25 = ((((var_1_24) < (var_1_10)) ? (var_1_24) : (var_1_10)));
 } else {
  if (stepLocal_2 <= var_1_5) {
   var_1_25 = var_1_10;
  }
 }
 signed long int stepLocal_4 = (((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6));
 signed short int stepLocal_3 = var_1_18;
 if (var_1_26 <= (var_1_29 - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) {
  if (2 <= stepLocal_4) {
   if (var_1_3 >= stepLocal_3) {
    var_1_28 = 25;
   } else {
    var_1_28 = var_1_24;
   }
  } else {
   var_1_28 = var_1_11;
  }
 } else {
  var_1_28 = var_1_24;
 }
 if (var_1_12 <= ((((var_1_26) > (var_1_16)) ? (var_1_26) : (var_1_16)))) {
  if (var_1_15 <= var_1_29) {
   var_1_30 = ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11)));
  } else {
   var_1_30 = (var_1_24 + (var_1_23 + 10));
  }
 } else {
  if (var_1_31) {
   var_1_30 = var_1_8;
  }
 }
 signed long int stepLocal_6 = var_1_8 >> var_1_35;
 if ((var_1_34 - (var_1_22 - var_1_23)) == stepLocal_6) {
  var_1_33 = ((var_1_23 + var_1_24) - (((((var_1_36 - var_1_35)) < (var_1_37)) ? ((var_1_36 - var_1_35)) : (var_1_37))));
 } else {
  var_1_33 = var_1_35;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -127);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483647);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -16383);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -8191);
 assume_abort_if_not(var_1_19 <= 8192);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -8191);
 assume_abort_if_not(var_1_20 <= 8191);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 24575);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 8192);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 16383);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 assume_abort_if_not(var_1_27 != 0.0F);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65535);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 15);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 16383);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 return (((((((((((var_1_2 || (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) <= var_1_32)) ? (var_1_1 == ((signed long int) ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5))))) : (var_1_1 == ((signed long int) (var_1_3 + var_1_6)))) && (var_1_7 == ((unsigned short int) (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) + ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))))) && ((var_1_1 >= ((var_1_9 + var_1_6) * var_1_32)) ? (var_1_12 == ((double) (var_1_14 + var_1_15))) : (var_1_12 == ((double) var_1_14)))) && ((var_1_32 < var_1_6) ? (var_1_16 == ((float) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : 1)) && ((var_1_15 >= var_1_14) ? (var_1_17 == ((signed short int) var_1_3)) : (var_1_17 == ((signed short int) ((((var_1_3) < ((var_1_18 + (var_1_19 + var_1_20)))) ? (var_1_3) : ((var_1_18 + (var_1_19 + var_1_20))))))))) && (var_1_2 ? (var_1_21 == ((unsigned short int) var_1_8)) : (((- var_1_18) >= var_1_7) ? (var_1_21 == ((unsigned short int) var_1_11)) : (var_1_21 == ((unsigned short int) (45247 - ((var_1_22 - var_1_23) - var_1_24))))))) && ((5.25f < (var_1_14 / ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))))) ? (var_1_25 == ((unsigned short int) ((((var_1_24) < (var_1_10)) ? (var_1_24) : (var_1_10))))) : (((var_1_10 + var_1_22) <= var_1_5) ? (var_1_25 == ((unsigned short int) var_1_10)) : 1))) && ((var_1_26 <= (var_1_29 - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? ((2 <= ((((var_1_7) > (var_1_6)) ? (var_1_7) : (var_1_6)))) ? ((var_1_3 >= var_1_18) ? (var_1_28 == ((unsigned short int) 25)) : (var_1_28 == ((unsigned short int) var_1_24))) : (var_1_28 == ((unsigned short int) var_1_11))) : (var_1_28 == ((unsigned short int) var_1_24)))) && ((var_1_12 <= ((((var_1_26) > (var_1_16)) ? (var_1_26) : (var_1_16)))) ? ((var_1_15 <= var_1_29) ? (var_1_30 == ((unsigned short int) ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11))))) : (var_1_30 == ((unsigned short int) (var_1_24 + (var_1_23 + 10))))) : (var_1_31 ? (var_1_30 == ((unsigned short int) var_1_8)) : 1))) && ((((((- last_1_var_1_12) < 0 ) ? -(- last_1_var_1_12) : (- last_1_var_1_12))) > (((((var_1_15 * var_1_26)) > ((last_1_var_1_12 / var_1_27))) ? ((var_1_15 * var_1_26)) : ((last_1_var_1_12 / var_1_27))))) ? (var_1_32 == ((unsigned long int) (((((var_1_11) < (last_1_var_1_21)) ? (var_1_11) : (last_1_var_1_21))) + var_1_10))) : ((var_1_8 >= var_1_24) ? (var_1_32 == ((unsigned long int) var_1_8)) : (var_1_32 == ((unsigned long int) last_1_var_1_7))))) && (((var_1_34 - (var_1_22 - var_1_23)) == (var_1_8 >> var_1_35)) ? (var_1_33 == ((signed short int) ((var_1_23 + var_1_24) - (((((var_1_36 - var_1_35)) < (var_1_37)) ? ((var_1_36 - var_1_35)) : (var_1_37)))))) : (var_1_33 == ((signed short int) var_1_35)))
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
