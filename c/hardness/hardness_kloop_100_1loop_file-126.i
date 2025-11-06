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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 0;
signed char var_1_4 = -2;
signed char var_1_5 = -8;
float var_1_6 = 0.6;
float var_1_7 = 4.9;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
signed short int var_1_10 = -64;
signed short int var_1_11 = 32;
double var_1_12 = -0.5;
double var_1_13 = 0.625;
double var_1_14 = 31.75;
unsigned long int var_1_15 = 25;
unsigned long int var_1_16 = 8;
unsigned long int var_1_17 = 4;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 2;
signed short int var_1_20 = -5;
double var_1_21 = 5.625;
unsigned long int var_1_22 = 2;
unsigned char var_1_23 = 100;
unsigned short int var_1_24 = 100;
unsigned char var_1_25 = 100;
signed long int var_1_26 = -1000000;
signed long int var_1_27 = -64;
float var_1_28 = 7.8;
signed short int var_1_29 = 2;
signed short int var_1_30 = -10;
signed long int var_1_31 = 10;
unsigned long int var_1_33 = 50;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 1;
unsigned short int var_1_36 = 4;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 5;
signed long int var_1_40 = -256;
double var_1_41 = 0.4;
unsigned char last_1_var_1_8 = 0;
signed short int last_1_var_1_20 = -5;
unsigned char last_1_var_1_23 = 100;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_9 = last_1_var_1_23 & (var_1_22 * last_1_var_1_20);
 if ((var_1_25 >> ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) > stepLocal_9) {
  var_1_34 = ((! var_1_37) || (var_1_9 || var_1_38));
 } else {
  var_1_34 = (last_1_var_1_8 || (! (last_1_var_1_8 && var_1_38)));
 }
 unsigned char stepLocal_2 = ! var_1_34;
 signed char stepLocal_1 = var_1_5;
 if (stepLocal_2 && var_1_34) {
  if (var_1_34) {
   if (stepLocal_1 <= var_1_4) {
    var_1_8 = 0;
   }
  }
 } else {
  var_1_8 = var_1_9;
 }
 unsigned char stepLocal_7 = var_1_34;
 if (stepLocal_7 && var_1_9) {
  var_1_29 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 } else {
  var_1_29 = var_1_30;
 }
 unsigned long int stepLocal_4 = var_1_18;
 if (8u > stepLocal_4) {
  var_1_20 = ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4)));
 } else {
  var_1_20 = ((((var_1_29) > ((var_1_5 + var_1_4))) ? (var_1_29) : ((var_1_5 + var_1_4))));
 }
 if (var_1_8 || var_1_34) {
  var_1_1 = (((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) < 0 ) ? -((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) : ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))));
 }
 signed char stepLocal_0 = var_1_5;
 if (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) > stepLocal_0) {
  var_1_6 = var_1_7;
 }
 if (var_1_9) {
  var_1_12 = ((127.4 + ((((0.19999999999999996) < (var_1_13)) ? (0.19999999999999996) : (var_1_13)))) + var_1_14);
 }
 var_1_15 = (var_1_16 + ((((var_1_17) < (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_17) : (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)))))));
 unsigned long int stepLocal_5 = var_1_15;
 if (stepLocal_5 != var_1_22) {
  if (var_1_13 >= var_1_12) {
   var_1_21 = var_1_14;
  }
 } else {
  var_1_21 = ((((var_1_14) < (128.8)) ? (var_1_14) : (128.8)));
 }
 signed long int stepLocal_6 = 36842 - var_1_24;
 if (stepLocal_6 > (var_1_16 - var_1_18)) {
  if (var_1_14 < 31.8) {
   var_1_23 = var_1_25;
  }
 } else {
  var_1_23 = var_1_25;
 }
 var_1_26 = ((((((((var_1_4) > (var_1_1)) ? (var_1_4) : (var_1_1)))) < (var_1_27)) ? (((((var_1_4) > (var_1_1)) ? (var_1_4) : (var_1_1)))) : (var_1_27)));
 var_1_28 = var_1_13;
 signed long int stepLocal_11 = -8;
 unsigned long int stepLocal_10 = - (var_1_17 & var_1_19);
 if (var_1_36 <= stepLocal_10) {
  if (stepLocal_11 > (var_1_16 / var_1_40)) {
   var_1_39 = (var_1_35 + var_1_36);
  }
 } else {
  var_1_39 = var_1_25;
 }
 var_1_41 = var_1_7;
 unsigned long int stepLocal_3 = var_1_15 * var_1_5;
 if (stepLocal_3 < var_1_4) {
  var_1_10 = ((((var_1_15) > ((var_1_11 - 5))) ? (var_1_15) : ((var_1_11 - 5))));
 } else {
  var_1_10 = var_1_11;
 }
 unsigned long int stepLocal_8 = var_1_16;
 if (var_1_6 >= var_1_41) {
  var_1_31 = ((((var_1_25 + ((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))) < 0 ) ? -(var_1_25 + ((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))) : (var_1_25 + ((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))));
 } else {
  if (stepLocal_8 < (var_1_18 / var_1_33)) {
   var_1_31 = -2;
  } else {
   var_1_31 = var_1_29;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -126);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -126);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483647);
 assume_abort_if_not(var_1_27 <= 2147483646);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 assume_abort_if_not(var_1_33 != 0);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 7);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 7);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483648);
 assume_abort_if_not(var_1_40 <= 2147483647);
 assume_abort_if_not(var_1_40 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
}
int property(void) {
 return ((((((((((((((((var_1_8 || var_1_34) ? (var_1_1 == ((signed char) (((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) < 0 ) ? -((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) : ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))))) : 1) && ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) > var_1_5) ? (var_1_6 == ((float) var_1_7)) : 1)) && (((! var_1_34) && var_1_34) ? (var_1_34 ? ((var_1_5 <= var_1_4) ? (var_1_8 == ((unsigned char) 0)) : 1) : 1) : (var_1_8 == ((unsigned char) var_1_9)))) && (((var_1_15 * var_1_5) < var_1_4) ? (var_1_10 == ((signed short int) ((((var_1_15) > ((var_1_11 - 5))) ? (var_1_15) : ((var_1_11 - 5)))))) : (var_1_10 == ((signed short int) var_1_11)))) && (var_1_9 ? (var_1_12 == ((double) ((127.4 + ((((0.19999999999999996) < (var_1_13)) ? (0.19999999999999996) : (var_1_13)))) + var_1_14))) : 1)) && (var_1_15 == ((unsigned long int) (var_1_16 + ((((var_1_17) < (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_17) : (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)))))))))) && ((8u > var_1_18) ? (var_1_20 == ((signed short int) ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) : (var_1_20 == ((signed short int) ((((var_1_29) > ((var_1_5 + var_1_4))) ? (var_1_29) : ((var_1_5 + var_1_4)))))))) && ((var_1_15 != var_1_22) ? ((var_1_13 >= var_1_12) ? (var_1_21 == ((double) var_1_14)) : 1) : (var_1_21 == ((double) ((((var_1_14) < (128.8)) ? (var_1_14) : (128.8))))))) && (((36842 - var_1_24) > (var_1_16 - var_1_18)) ? ((var_1_14 < 31.8) ? (var_1_23 == ((unsigned char) var_1_25)) : 1) : (var_1_23 == ((unsigned char) var_1_25)))) && (var_1_26 == ((signed long int) ((((((((var_1_4) > (var_1_1)) ? (var_1_4) : (var_1_1)))) < (var_1_27)) ? (((((var_1_4) > (var_1_1)) ? (var_1_4) : (var_1_1)))) : (var_1_27)))))) && (var_1_28 == ((float) var_1_13))) && ((var_1_34 && var_1_9) ? (var_1_29 == ((signed short int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_29 == ((signed short int) var_1_30)))) && ((var_1_6 >= var_1_41) ? (var_1_31 == ((signed long int) ((((var_1_25 + ((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))) < 0 ) ? -(var_1_25 + ((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))) : (var_1_25 + ((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))))))) : ((var_1_16 < (var_1_18 / var_1_33)) ? (var_1_31 == ((signed long int) -2)) : (var_1_31 == ((signed long int) var_1_29))))) && (((var_1_25 >> ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) > (last_1_var_1_23 & (var_1_22 * last_1_var_1_20))) ? (var_1_34 == ((unsigned char) ((! var_1_37) || (var_1_9 || var_1_38)))) : (var_1_34 == ((unsigned char) (last_1_var_1_8 || (! (last_1_var_1_8 && var_1_38))))))) && ((var_1_36 <= (- (var_1_17 & var_1_19))) ? ((-8 > (var_1_16 / var_1_40)) ? (var_1_39 == ((unsigned char) (var_1_35 + var_1_36))) : 1) : (var_1_39 == ((unsigned char) var_1_25)))) && (var_1_41 == ((double) var_1_7))
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
