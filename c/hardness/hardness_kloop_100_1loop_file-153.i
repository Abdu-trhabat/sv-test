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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -8;
unsigned char var_1_2 = 1;
signed short int var_1_3 = -5;
signed short int var_1_4 = 25;
signed short int var_1_5 = -64;
signed short int var_1_6 = -32;
float var_1_7 = 25.4;
signed long int var_1_8 = 32;
signed long int var_1_9 = 8;
float var_1_10 = 8.125;
unsigned short int var_1_11 = 2;
unsigned short int var_1_13 = 2;
unsigned short int var_1_14 = 5;
unsigned short int var_1_15 = 10;
signed long int var_1_16 = 2;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 4;
signed long int var_1_22 = -1;
signed long int var_1_23 = 1419508776;
float var_1_24 = 100000000000000.7;
float var_1_25 = 0.4;
float var_1_26 = 24.2;
unsigned char var_1_27 = 16;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 16;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 1;
double var_1_32 = 7.6;
double var_1_33 = 4.6;
double var_1_34 = 5.4;
double var_1_35 = 5.55;
float var_1_39 = 32.15;
signed short int var_1_40 = 4;
unsigned char var_1_41 = 0;
unsigned long int var_1_42 = 64;
double var_1_43 = 9.4;
unsigned short int last_1_var_1_11 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = (((((64 + var_1_3)) < ((var_1_4 + ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) ? ((64 + var_1_3)) : ((var_1_4 + ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))));
 }
 unsigned char stepLocal_2 = var_1_2;
 if (stepLocal_2 && var_1_18) {
  var_1_17 = ((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_21) + 10);
 }
 if (! var_1_18) {
  var_1_22 = (var_1_15 - (var_1_23 - var_1_20));
 }
 if (var_1_2 || var_1_18) {
  var_1_24 = (var_1_25 - var_1_26);
 } else {
  if (var_1_2) {
   var_1_24 = var_1_10;
  }
 }
 if (var_1_18) {
  if (! (! var_1_2)) {
   if (var_1_21 == ((var_1_28 - var_1_29) - var_1_20)) {
    var_1_27 = ((((4) > ((var_1_30 - var_1_21))) ? (4) : ((var_1_30 - var_1_21))));
   }
  } else {
   var_1_27 = (var_1_29 + ((((var_1_19) < ((var_1_21 + var_1_31))) ? (var_1_19) : ((var_1_21 + var_1_31)))));
  }
 } else {
  var_1_27 = ((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)));
 }
 if (var_1_41) {
  var_1_40 = ((((-5) > (var_1_17)) ? (-5) : (var_1_17)));
 }
 signed long int stepLocal_6 = (var_1_9 & var_1_8) % var_1_28;
 signed long int stepLocal_5 = var_1_9;
 unsigned char stepLocal_4 = var_1_28;
 if (var_1_2) {
  if (var_1_30 < stepLocal_4) {
   if (stepLocal_6 >= var_1_22) {
    var_1_42 = ((((var_1_1) > (((((((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) < (var_1_19)) ? (((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) : (var_1_19))))) ? (var_1_1) : (((((((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) < (var_1_19)) ? (((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) : (var_1_19))))));
   }
  } else {
   var_1_42 = ((((3721222567u - var_1_29) < 0 ) ? -(3721222567u - var_1_29) : (3721222567u - var_1_29)));
  }
 } else {
  if (100000u > stepLocal_5) {
   var_1_42 = ((((var_1_28) < (var_1_21)) ? (var_1_28) : (var_1_21)));
  } else {
   var_1_42 = var_1_15;
  }
 }
 var_1_43 = var_1_34;
 unsigned char stepLocal_0 = (var_1_5 * var_1_22) < (var_1_8 - var_1_9);
 if (stepLocal_0 || var_1_2) {
  var_1_7 = var_1_10;
 }
 if (var_1_40 <= (var_1_3 + ((((last_1_var_1_11) < 0 ) ? -(last_1_var_1_11) : (last_1_var_1_11))))) {
  var_1_11 = ((var_1_40 + (var_1_13 + var_1_14)) + var_1_15);
 } else {
  var_1_11 = var_1_14;
 }
 signed long int stepLocal_1 = (var_1_6 | var_1_3) | var_1_8;
 if (var_1_5 >= stepLocal_1) {
  if (var_1_10 <= var_1_43) {
   var_1_16 = (16 - var_1_15);
  }
 } else {
  var_1_16 = var_1_5;
 }
 unsigned long int stepLocal_3 = (((4) > (var_1_42)) ? (4) : (var_1_42));
 if (! var_1_18) {
  var_1_32 = ((var_1_33 + var_1_34) + var_1_35);
 } else {
  if (var_1_17 > stepLocal_3) {
   var_1_32 = var_1_34;
  }
 }
 if (var_1_43 <= (var_1_26 - var_1_25)) {
  var_1_39 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -16383);
 assume_abort_if_not(var_1_3 <= 16383);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 8192);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 8191);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 63);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 63);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 191);
 assume_abort_if_not(var_1_28 <= 255);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 64);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 127);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -230584.3009213691400e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return ((((((((((((var_1_2 ? (var_1_1 == ((signed short int) (((((64 + var_1_3)) < ((var_1_4 + ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) ? ((64 + var_1_3)) : ((var_1_4 + ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))))))) : 1) && ((((var_1_5 * var_1_22) < (var_1_8 - var_1_9)) || var_1_2) ? (var_1_7 == ((float) var_1_10)) : 1)) && ((var_1_40 <= (var_1_3 + ((((last_1_var_1_11) < 0 ) ? -(last_1_var_1_11) : (last_1_var_1_11))))) ? (var_1_11 == ((unsigned short int) ((var_1_40 + (var_1_13 + var_1_14)) + var_1_15))) : (var_1_11 == ((unsigned short int) var_1_14)))) && ((var_1_5 >= ((var_1_6 | var_1_3) | var_1_8)) ? ((var_1_10 <= var_1_43) ? (var_1_16 == ((signed long int) (16 - var_1_15))) : 1) : (var_1_16 == ((signed long int) var_1_5)))) && ((var_1_2 && var_1_18) ? (var_1_17 == ((unsigned char) ((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_21) + 10))) : 1)) && ((! var_1_18) ? (var_1_22 == ((signed long int) (var_1_15 - (var_1_23 - var_1_20)))) : 1)) && ((var_1_2 || var_1_18) ? (var_1_24 == ((float) (var_1_25 - var_1_26))) : (var_1_2 ? (var_1_24 == ((float) var_1_10)) : 1))) && (var_1_18 ? ((! (! var_1_2)) ? ((var_1_21 == ((var_1_28 - var_1_29) - var_1_20)) ? (var_1_27 == ((unsigned char) ((((4) > ((var_1_30 - var_1_21))) ? (4) : ((var_1_30 - var_1_21)))))) : 1) : (var_1_27 == ((unsigned char) (var_1_29 + ((((var_1_19) < ((var_1_21 + var_1_31))) ? (var_1_19) : ((var_1_21 + var_1_31)))))))) : (var_1_27 == ((unsigned char) ((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31))))))) && ((! var_1_18) ? (var_1_32 == ((double) ((var_1_33 + var_1_34) + var_1_35))) : ((var_1_17 > ((((4) > (var_1_42)) ? (4) : (var_1_42)))) ? (var_1_32 == ((double) var_1_34)) : 1))) && ((var_1_43 <= (var_1_26 - var_1_25)) ? (var_1_39 == ((float) var_1_10)) : 1)) && (var_1_41 ? (var_1_40 == ((signed short int) ((((-5) > (var_1_17)) ? (-5) : (var_1_17))))) : 1)) && (var_1_2 ? ((var_1_30 < var_1_28) ? ((((var_1_9 & var_1_8) % var_1_28) >= var_1_22) ? (var_1_42 == ((unsigned long int) ((((var_1_1) > (((((((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) < (var_1_19)) ? (((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) : (var_1_19))))) ? (var_1_1) : (((((((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) < (var_1_19)) ? (((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22)))) : (var_1_19)))))))) : 1) : (var_1_42 == ((unsigned long int) ((((3721222567u - var_1_29) < 0 ) ? -(3721222567u - var_1_29) : (3721222567u - var_1_29)))))) : ((100000u > var_1_9) ? (var_1_42 == ((unsigned long int) ((((var_1_28) < (var_1_21)) ? (var_1_28) : (var_1_21))))) : (var_1_42 == ((unsigned long int) var_1_15))))) && (var_1_43 == ((double) var_1_34))
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
