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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed long int var_1_2 = 50;
signed long int var_1_3 = 256;
signed long int var_1_4 = 16;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
float var_1_7 = 99.5;
signed long int var_1_8 = 5;
float var_1_9 = 499.6;
unsigned char var_1_10 = 0;
unsigned short int var_1_11 = 2;
unsigned char var_1_12 = 1;
float var_1_13 = 256.45;
float var_1_14 = 0.0;
float var_1_15 = 31.8;
float var_1_16 = 100.5;
float var_1_17 = 9.4;
float var_1_18 = 15.6;
signed short int var_1_19 = -8;
signed short int var_1_20 = -1;
signed short int var_1_21 = 0;
signed short int var_1_22 = 256;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned short int var_1_27 = 32;
unsigned short int var_1_28 = 5;
unsigned short int var_1_29 = 35950;
float var_1_30 = 127.5;
signed short int var_1_31 = 32;
double var_1_33 = 1.625;
double var_1_35 = 127.5;
double var_1_36 = 100000000000.25;
unsigned char var_1_37 = 100;
unsigned long int var_1_38 = 2;
unsigned long int var_1_39 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = 1;
 if (stepLocal_0 < (var_1_2 - (var_1_3 + var_1_4))) {
  var_1_1 = (! (var_1_5 || var_1_6));
 }
 signed long int stepLocal_1 = (var_1_3 - var_1_8) + var_1_2;
 if (var_1_4 > stepLocal_1) {
  if (! var_1_5) {
   var_1_7 = var_1_9;
  }
 } else {
  var_1_7 = var_1_9;
 }
 signed long int stepLocal_5 = var_1_4;
 if (stepLocal_5 <= (((((var_1_8 - var_1_3)) > (var_1_2)) ? ((var_1_8 - var_1_3)) : (var_1_2)))) {
  var_1_19 = (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))));
 } else {
  var_1_19 = (var_1_21 - var_1_22);
 }
 if ((var_1_4 / var_1_11) == (var_1_8 / var_1_24)) {
  var_1_23 = ((var_1_18 != var_1_17) && var_1_6);
 }
 if (256 > (var_1_3 / var_1_11)) {
  if (var_1_12) {
   var_1_25 = var_1_26;
  }
 }
 signed long int stepLocal_6 = var_1_21 / var_1_11;
 if (((((- var_1_9) < 0 ) ? -(- var_1_9) : (- var_1_9))) < (var_1_17 / 256.5f)) {
  if (127.2 <= (- var_1_18)) {
   var_1_27 = (var_1_28 + var_1_22);
  } else {
   if (var_1_24 <= stepLocal_6) {
    var_1_27 = (var_1_29 - var_1_28);
   } else {
    var_1_27 = var_1_22;
   }
  }
 } else {
  var_1_27 = var_1_28;
 }
 if (var_1_15 > var_1_17) {
  var_1_30 = ((((var_1_16) > (var_1_14)) ? (var_1_16) : (var_1_14)));
 } else {
  var_1_30 = (var_1_14 + var_1_15);
 }
 signed long int stepLocal_7 = var_1_3 * var_1_27;
 if (var_1_29 >= stepLocal_7) {
  var_1_31 = var_1_22;
 }
 var_1_37 = 4;
 var_1_38 = var_1_4;
 var_1_39 = var_1_29;
 signed long int stepLocal_2 = -1;
 if ((var_1_4 / (var_1_11 + 50)) > stepLocal_2) {
  var_1_10 = (var_1_23 && var_1_5);
 } else {
  var_1_10 = var_1_12;
 }
 signed long int stepLocal_4 = var_1_8;
 signed long int stepLocal_3 = (var_1_3 / -200) & var_1_8;
 if (var_1_6) {
  var_1_13 = var_1_9;
 } else {
  if ((var_1_2 - var_1_11) < stepLocal_3) {
   if (var_1_9 == (var_1_30 + 15.8f)) {
    if ((100u % var_1_11) <= stepLocal_4) {
     var_1_13 = ((((((var_1_14 + 255.56f) + var_1_15)) > ((var_1_16 + (var_1_17 + var_1_18)))) ? (((var_1_14 + 255.56f) + var_1_15)) : ((var_1_16 + (var_1_17 + var_1_18)))));
    }
   } else {
    var_1_13 = var_1_17;
   }
  } else {
   var_1_13 = var_1_16;
  }
 }
 if (var_1_17 == var_1_13) {
  var_1_33 = (var_1_35 - var_1_36);
 } else {
  var_1_33 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1073741824);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 32768);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -32766);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 32766);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32766);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 assume_abort_if_not(var_1_24 != 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((((1 < (var_1_2 - (var_1_3 + var_1_4))) ? (var_1_1 == ((unsigned char) (! (var_1_5 || var_1_6)))) : 1) && ((var_1_4 > ((var_1_3 - var_1_8) + var_1_2)) ? ((! var_1_5) ? (var_1_7 == ((float) var_1_9)) : 1) : (var_1_7 == ((float) var_1_9)))) && (((var_1_4 / (var_1_11 + 50)) > -1) ? (var_1_10 == ((unsigned char) (var_1_23 && var_1_5))) : (var_1_10 == ((unsigned char) var_1_12)))) && (var_1_6 ? (var_1_13 == ((float) var_1_9)) : (((var_1_2 - var_1_11) < ((var_1_3 / -200) & var_1_8)) ? ((var_1_9 == (var_1_30 + 15.8f)) ? (((100u % var_1_11) <= var_1_8) ? (var_1_13 == ((float) ((((((var_1_14 + 255.56f) + var_1_15)) > ((var_1_16 + (var_1_17 + var_1_18)))) ? (((var_1_14 + 255.56f) + var_1_15)) : ((var_1_16 + (var_1_17 + var_1_18))))))) : 1) : (var_1_13 == ((float) var_1_17))) : (var_1_13 == ((float) var_1_16))))) && ((var_1_4 <= (((((var_1_8 - var_1_3)) > (var_1_2)) ? ((var_1_8 - var_1_3)) : (var_1_2)))) ? (var_1_19 == ((signed short int) (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) : (var_1_19 == ((signed short int) (var_1_21 - var_1_22))))) && (((var_1_4 / var_1_11) == (var_1_8 / var_1_24)) ? (var_1_23 == ((unsigned char) ((var_1_18 != var_1_17) && var_1_6))) : 1)) && ((256 > (var_1_3 / var_1_11)) ? (var_1_12 ? (var_1_25 == ((unsigned char) var_1_26)) : 1) : 1)) && ((((((- var_1_9) < 0 ) ? -(- var_1_9) : (- var_1_9))) < (var_1_17 / 256.5f)) ? ((127.2 <= (- var_1_18)) ? (var_1_27 == ((unsigned short int) (var_1_28 + var_1_22))) : ((var_1_24 <= (var_1_21 / var_1_11)) ? (var_1_27 == ((unsigned short int) (var_1_29 - var_1_28))) : (var_1_27 == ((unsigned short int) var_1_22)))) : (var_1_27 == ((unsigned short int) var_1_28)))) && ((var_1_15 > var_1_17) ? (var_1_30 == ((float) ((((var_1_16) > (var_1_14)) ? (var_1_16) : (var_1_14))))) : (var_1_30 == ((float) (var_1_14 + var_1_15))))) && ((var_1_29 >= (var_1_3 * var_1_27)) ? (var_1_31 == ((signed short int) var_1_22)) : 1)) && ((var_1_17 == var_1_13) ? (var_1_33 == ((double) (var_1_35 - var_1_36))) : (var_1_33 == ((double) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))))) && (var_1_37 == ((unsigned char) 4))) && (var_1_38 == ((unsigned long int) var_1_4))) && (var_1_39 == ((unsigned long int) var_1_29))
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
