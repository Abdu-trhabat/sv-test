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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_3 = 0;
signed short int var_1_4 = -5;
signed char var_1_5 = -5;
signed short int var_1_6 = 2;
unsigned short int var_1_7 = 200;
signed short int var_1_8 = 16;
signed long int var_1_9 = -4;
signed short int var_1_10 = 10000;
signed short int var_1_11 = 64;
signed short int var_1_12 = 4;
double var_1_13 = 15.908;
double var_1_14 = 64.4;
double var_1_15 = 127.5;
double var_1_16 = 49.25;
double var_1_17 = 255.75;
unsigned long int var_1_18 = 10;
unsigned long int var_1_19 = 1374010732;
unsigned long int var_1_20 = 1342918348;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 1;
double var_1_26 = -0.8;
double var_1_27 = 99.4;
double var_1_28 = 127.1;
double var_1_29 = 128.25;
double var_1_30 = 0.0;
double var_1_31 = 25.7;
unsigned char var_1_32 = 50;
unsigned short int var_1_34 = 4;
unsigned short int var_1_35 = 49722;
signed char var_1_36 = 25;
signed char var_1_37 = -5;
signed char var_1_38 = -16;
unsigned long int last_1_var_1_18 = 10;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_3 = var_1_7;
 if (stepLocal_3 > var_1_9) {
  var_1_13 = (((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))));
 } else {
  var_1_13 = ((((((((99.8) > (var_1_16)) ? (99.8) : (var_1_16))) < 0 ) ? -((((99.8) > (var_1_16)) ? (99.8) : (var_1_16))) : ((((99.8) > (var_1_16)) ? (99.8) : (var_1_16))))) + ((((var_1_17) < (0.09999999999999998)) ? (var_1_17) : (0.09999999999999998))));
 }
 signed short int stepLocal_5 = var_1_12;
 unsigned char stepLocal_4 = var_1_23;
 if (stepLocal_5 < last_1_var_1_18) {
  var_1_18 = ((var_1_19 + var_1_20) - var_1_10);
 } else {
  if (var_1_21) {
   if (var_1_22 && stepLocal_4) {
    var_1_18 = var_1_12;
   } else {
    var_1_18 = var_1_10;
   }
  }
 }
 var_1_26 = (var_1_17 + (2.33 - var_1_27));
 if (var_1_18 < (var_1_11 + var_1_9)) {
  var_1_36 = ((((var_1_8) > (((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) > (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))))))) ? (var_1_8) : (((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) > (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))))))));
 }
 var_1_38 = var_1_8;
 if ((- 255.45f) < var_1_26) {
  var_1_1 = (var_1_3 + -16);
 }
 signed char stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = 2;
 if (stepLocal_1 >= (var_1_36 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) {
  if (var_1_3 <= stepLocal_0) {
   var_1_4 = var_1_5;
  } else {
   var_1_4 = var_1_3;
  }
 }
 unsigned long int stepLocal_8 = var_1_18 / var_1_19;
 signed long int stepLocal_7 = (((-25) < 0 ) ? -(-25) : (-25));
 unsigned long int stepLocal_6 = var_1_20;
 if (var_1_20 > stepLocal_8) {
  if (var_1_18 != stepLocal_6) {
   if (stepLocal_7 <= var_1_36) {
    var_1_28 = (var_1_27 - var_1_29);
   } else {
    var_1_28 = (((var_1_30 - var_1_31) + var_1_27) - var_1_29);
   }
  } else {
   var_1_28 = ((var_1_27 + var_1_30) - var_1_31);
  }
 } else {
  var_1_28 = var_1_27;
 }
 if (var_1_28 < (var_1_13 + (var_1_27 + var_1_15))) {
  if ((- var_1_13) >= var_1_30) {
   var_1_32 = var_1_8;
  } else {
   var_1_32 = 1;
  }
 } else {
  var_1_32 = var_1_8;
 }
 if (var_1_15 >= (var_1_28 * var_1_16)) {
  var_1_24 = (! var_1_25);
 }
 signed short int stepLocal_9 = var_1_4;
 if (var_1_24) {
  if (var_1_9 >= stepLocal_9) {
   var_1_34 = ((((((8 + var_1_12) + var_1_10)) < ((var_1_35 - var_1_8))) ? (((8 + var_1_12) + var_1_10)) : ((var_1_35 - var_1_8))));
  } else {
   var_1_34 = var_1_35;
  }
 }
 signed long int stepLocal_2 = (var_1_34 % var_1_7) >> var_1_8;
 if (stepLocal_2 > (var_1_32 / ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) {
  var_1_6 = (((10000 + var_1_10) - var_1_8) - (var_1_11 + var_1_12));
 } else {
  var_1_6 = ((((var_1_11) > (var_1_3)) ? (var_1_11) : (var_1_3)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 127);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65535);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 30);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 8191);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741824);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 2305843.009213691400e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 32767);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -126);
 assume_abort_if_not(var_1_37 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 return (((((((((((((- 255.45f) < var_1_26) ? (var_1_1 == ((signed char) (var_1_3 + -16))) : 1) && ((var_1_3 >= (var_1_36 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? ((var_1_3 <= 2) ? (var_1_4 == ((signed short int) var_1_5)) : (var_1_4 == ((signed short int) var_1_3))) : 1)) && ((((var_1_34 % var_1_7) >> var_1_8) > (var_1_32 / ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) ? (var_1_6 == ((signed short int) (((10000 + var_1_10) - var_1_8) - (var_1_11 + var_1_12)))) : (var_1_6 == ((signed short int) ((((var_1_11) > (var_1_3)) ? (var_1_11) : (var_1_3))))))) && ((var_1_7 > var_1_9) ? (var_1_13 == ((double) (((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))))))) : (var_1_13 == ((double) ((((((((99.8) > (var_1_16)) ? (99.8) : (var_1_16))) < 0 ) ? -((((99.8) > (var_1_16)) ? (99.8) : (var_1_16))) : ((((99.8) > (var_1_16)) ? (99.8) : (var_1_16))))) + ((((var_1_17) < (0.09999999999999998)) ? (var_1_17) : (0.09999999999999998)))))))) && ((var_1_12 < last_1_var_1_18) ? (var_1_18 == ((unsigned long int) ((var_1_19 + var_1_20) - var_1_10))) : (var_1_21 ? ((var_1_22 && var_1_23) ? (var_1_18 == ((unsigned long int) var_1_12)) : (var_1_18 == ((unsigned long int) var_1_10))) : 1))) && ((var_1_15 >= (var_1_28 * var_1_16)) ? (var_1_24 == ((unsigned char) (! var_1_25))) : 1)) && (var_1_26 == ((double) (var_1_17 + (2.33 - var_1_27))))) && ((var_1_20 > (var_1_18 / var_1_19)) ? ((var_1_18 != var_1_20) ? ((((((-25) < 0 ) ? -(-25) : (-25))) <= var_1_36) ? (var_1_28 == ((double) (var_1_27 - var_1_29))) : (var_1_28 == ((double) (((var_1_30 - var_1_31) + var_1_27) - var_1_29)))) : (var_1_28 == ((double) ((var_1_27 + var_1_30) - var_1_31)))) : (var_1_28 == ((double) var_1_27)))) && ((var_1_28 < (var_1_13 + (var_1_27 + var_1_15))) ? (((- var_1_13) >= var_1_30) ? (var_1_32 == ((unsigned char) var_1_8)) : (var_1_32 == ((unsigned char) 1))) : (var_1_32 == ((unsigned char) var_1_8)))) && (var_1_24 ? ((var_1_9 >= var_1_4) ? (var_1_34 == ((unsigned short int) ((((((8 + var_1_12) + var_1_10)) < ((var_1_35 - var_1_8))) ? (((8 + var_1_12) + var_1_10)) : ((var_1_35 - var_1_8)))))) : (var_1_34 == ((unsigned short int) var_1_35))) : 1)) && ((var_1_18 < (var_1_11 + var_1_9)) ? (var_1_36 == ((signed char) ((((var_1_8) > (((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) > (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))))))) ? (var_1_8) : (((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) > (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))))))))) : 1)) && (var_1_38 == ((signed char) var_1_8))
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
