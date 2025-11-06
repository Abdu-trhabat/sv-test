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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 10000.2;
unsigned short int var_1_2 = 256;
unsigned short int var_1_3 = 128;
double var_1_5 = 200.125;
double var_1_6 = 10000.75;
double var_1_7 = 25.8;
unsigned short int var_1_8 = 2;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 26765;
unsigned short int var_1_11 = 5;
unsigned short int var_1_12 = 23687;
unsigned short int var_1_13 = 50;
double var_1_14 = 255.6;
double var_1_15 = 63.975;
signed char var_1_16 = 0;
double var_1_17 = 128.75;
double var_1_18 = 127.6;
unsigned long int var_1_19 = 8;
unsigned short int var_1_20 = 34090;
unsigned long int var_1_21 = 128;
unsigned short int var_1_22 = 16;
unsigned char var_1_23 = 1;
unsigned short int var_1_24 = 59097;
float var_1_25 = 1.78;
signed short int var_1_26 = 1;
signed short int var_1_27 = 30633;
signed char var_1_28 = 50;
signed char var_1_29 = 4;
signed char var_1_30 = 10;
float var_1_31 = 15.8;
double var_1_32 = 7.8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_9;
 if (stepLocal_1 || (! (var_1_7 > var_1_5))) {
  var_1_8 = (((var_1_10 - var_1_11) + var_1_12) - var_1_13);
 } else {
  if (var_1_5 > ((((var_1_6) > (16.15)) ? (var_1_6) : (16.15)))) {
   var_1_8 = var_1_10;
  } else {
   var_1_8 = var_1_11;
  }
 }
 var_1_14 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 signed long int stepLocal_3 = var_1_16 - 2;
 signed long int stepLocal_2 = (((var_1_13) < (var_1_8)) ? (var_1_13) : (var_1_8));
 if (stepLocal_3 == var_1_11) {
  var_1_15 = (var_1_6 + ((((var_1_17 - 8.5) < 0 ) ? -(var_1_17 - 8.5) : (var_1_17 - 8.5))));
 } else {
  if (var_1_12 < stepLocal_2) {
   var_1_15 = (((((var_1_17) > (31.4)) ? (var_1_17) : (31.4))) - var_1_18);
  } else {
   var_1_15 = var_1_17;
  }
 }
 if ((var_1_10 + (10 + var_1_11)) >= var_1_12) {
  if (var_1_9 && var_1_23) {
   var_1_22 = (var_1_24 - var_1_11);
  }
 } else {
  var_1_22 = 50;
 }
 unsigned char stepLocal_7 = var_1_22 >= var_1_12;
 if (var_1_5 <= var_1_14) {
  var_1_26 = (8 - (var_1_27 - 500));
 } else {
  if (stepLocal_7 || var_1_9) {
   var_1_26 = var_1_16;
  } else {
   var_1_26 = var_1_11;
  }
 }
 if (var_1_2 > var_1_8) {
  var_1_31 = 128.75f;
 }
 if (((var_1_18 - var_1_17) * var_1_15) < (var_1_6 + (var_1_5 + var_1_7))) {
  var_1_32 = (var_1_7 + (127.5 + var_1_5));
 } else {
  var_1_32 = var_1_18;
 }
 signed long int stepLocal_5 = var_1_20 - var_1_10;
 unsigned short int stepLocal_4 = var_1_3;
 if (var_1_13 <= stepLocal_5) {
  if (stepLocal_4 >= (var_1_11 | ((((var_1_22) > (var_1_13)) ? (var_1_22) : (var_1_13))))) {
   var_1_19 = ((((var_1_11) > (var_1_20)) ? (var_1_11) : (var_1_20)));
  } else {
   var_1_19 = var_1_20;
  }
 } else {
  var_1_19 = var_1_21;
 }
 unsigned long int stepLocal_6 = ((((var_1_19) < (var_1_10)) ? (var_1_19) : (var_1_10))) + var_1_12;
 if (var_1_9) {
  if (1 >= stepLocal_6) {
   if (var_1_23) {
    var_1_25 = var_1_5;
   } else {
    var_1_25 = 25.5f;
   }
  } else {
   var_1_25 = var_1_7;
  }
 }
 if (var_1_19 > -2) {
  var_1_28 = (var_1_29 + var_1_30);
 } else {
  if (var_1_12 >= var_1_19) {
   if ((var_1_29 * var_1_3) < var_1_11) {
    var_1_28 = var_1_30;
   } else {
    var_1_28 = 5;
   }
  } else {
   var_1_28 = var_1_30;
  }
 }
 signed long int stepLocal_0 = var_1_22 / var_1_3;
 if (stepLocal_0 != var_1_19) {
  var_1_1 = ((var_1_5 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) + var_1_7);
 } else {
  var_1_1 = var_1_7;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -230584.3009213691400e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691400e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 24575);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 8192);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16384);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65535);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 4294967294);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 32767);
 assume_abort_if_not(var_1_24 <= 65534);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 16383);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -63);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -63);
 assume_abort_if_not(var_1_30 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((var_1_22 / var_1_3) != var_1_19) ? (var_1_1 == ((double) ((var_1_5 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) + var_1_7))) : (var_1_1 == ((double) var_1_7))) && ((var_1_9 || (! (var_1_7 > var_1_5))) ? (var_1_8 == ((unsigned short int) (((var_1_10 - var_1_11) + var_1_12) - var_1_13))) : ((var_1_5 > ((((var_1_6) > (16.15)) ? (var_1_6) : (16.15)))) ? (var_1_8 == ((unsigned short int) var_1_10)) : (var_1_8 == ((unsigned short int) var_1_11))))) && (var_1_14 == ((double) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) && (((var_1_16 - 2) == var_1_11) ? (var_1_15 == ((double) (var_1_6 + ((((var_1_17 - 8.5) < 0 ) ? -(var_1_17 - 8.5) : (var_1_17 - 8.5)))))) : ((var_1_12 < ((((var_1_13) < (var_1_8)) ? (var_1_13) : (var_1_8)))) ? (var_1_15 == ((double) (((((var_1_17) > (31.4)) ? (var_1_17) : (31.4))) - var_1_18))) : (var_1_15 == ((double) var_1_17))))) && ((var_1_13 <= (var_1_20 - var_1_10)) ? ((var_1_3 >= (var_1_11 | ((((var_1_22) > (var_1_13)) ? (var_1_22) : (var_1_13))))) ? (var_1_19 == ((unsigned long int) ((((var_1_11) > (var_1_20)) ? (var_1_11) : (var_1_20))))) : (var_1_19 == ((unsigned long int) var_1_20))) : (var_1_19 == ((unsigned long int) var_1_21)))) && (((var_1_10 + (10 + var_1_11)) >= var_1_12) ? ((var_1_9 && var_1_23) ? (var_1_22 == ((unsigned short int) (var_1_24 - var_1_11))) : 1) : (var_1_22 == ((unsigned short int) 50)))) && (var_1_9 ? ((1 >= (((((var_1_19) < (var_1_10)) ? (var_1_19) : (var_1_10))) + var_1_12)) ? (var_1_23 ? (var_1_25 == ((float) var_1_5)) : (var_1_25 == ((float) 25.5f))) : (var_1_25 == ((float) var_1_7))) : 1)) && ((var_1_5 <= var_1_14) ? (var_1_26 == ((signed short int) (8 - (var_1_27 - 500)))) : (((var_1_22 >= var_1_12) || var_1_9) ? (var_1_26 == ((signed short int) var_1_16)) : (var_1_26 == ((signed short int) var_1_11))))) && ((var_1_19 > -2) ? (var_1_28 == ((signed char) (var_1_29 + var_1_30))) : ((var_1_12 >= var_1_19) ? (((var_1_29 * var_1_3) < var_1_11) ? (var_1_28 == ((signed char) var_1_30)) : (var_1_28 == ((signed char) 5))) : (var_1_28 == ((signed char) var_1_30))))) && ((var_1_2 > var_1_8) ? (var_1_31 == ((float) 128.75f)) : 1)) && ((((var_1_18 - var_1_17) * var_1_15) < (var_1_6 + (var_1_5 + var_1_7))) ? (var_1_32 == ((double) (var_1_7 + (127.5 + var_1_5)))) : (var_1_32 == ((double) var_1_18)))
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
