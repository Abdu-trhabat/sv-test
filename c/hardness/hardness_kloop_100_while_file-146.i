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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146100_while.c", 13, "reach_error"); }
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
signed long int var_1_3 = 32;
signed long int var_1_4 = 100;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
signed char var_1_10 = 64;
signed char var_1_11 = 5;
signed char var_1_12 = 4;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 16;
signed long int var_1_18 = 8;
unsigned char var_1_19 = 16;
unsigned char var_1_20 = 200;
unsigned short int var_1_21 = 256;
signed long int var_1_22 = -100000;
signed short int var_1_23 = 32;
double var_1_24 = 128.6;
double var_1_25 = 31.75;
double var_1_26 = 0.0;
double var_1_27 = 3.75;
double var_1_28 = 5.4;
unsigned char var_1_29 = 50;
unsigned char var_1_31 = 128;
unsigned char last_1_var_1_1 = 1;
signed char last_1_var_1_9 = 1;
unsigned short int last_1_var_1_21 = 256;
signed long int last_1_var_1_22 = -100000;
signed short int last_1_var_1_23 = 32;
unsigned char last_1_var_1_29 = 50;
void initially(void) {
}
void step(void) {
 if (((((-2) < 0 ) ? -(-2) : (-2))) == ((((last_1_var_1_21) > (last_1_var_1_9)) ? (last_1_var_1_21) : (last_1_var_1_9)))) {
  if (-32 <= var_1_3) {
   if (var_1_14) {
    var_1_23 = last_1_var_1_9;
   } else {
    var_1_23 = (((((var_1_10) < (last_1_var_1_21)) ? (var_1_10) : (last_1_var_1_21))) - last_1_var_1_29);
   }
  } else {
   var_1_23 = (last_1_var_1_29 + 100);
  }
 } else {
  if ((last_1_var_1_22 * 128) > (var_1_11 << var_1_10)) {
   var_1_23 = var_1_12;
  }
 }
 if (! (last_1_var_1_21 >= (var_1_20 + var_1_4))) {
  if (! last_1_var_1_1) {
   var_1_22 = last_1_var_1_21;
  }
 } else {
  var_1_22 = last_1_var_1_23;
 }
 signed long int stepLocal_1 = var_1_3 - var_1_4;
 signed long int stepLocal_0 = var_1_22 / var_1_5;
 if (var_1_22 == stepLocal_1) {
  if (stepLocal_0 <= var_1_3) {
   var_1_1 = (var_1_6 && (var_1_7 && var_1_8));
  } else {
   var_1_1 = (! var_1_6);
  }
 } else {
  var_1_1 = var_1_8;
 }
 if (var_1_7) {
  var_1_9 = ((var_1_10 - var_1_11) - var_1_12);
 } else {
  var_1_9 = ((((5) < 0 ) ? -(5) : (5)));
 }
 if (var_1_14) {
  var_1_15 = (! var_1_16);
 }
 if (! (var_1_10 >= var_1_12)) {
  if (((((var_1_22) > (var_1_3)) ? (var_1_22) : (var_1_3))) <= (var_1_4 % var_1_10)) {
   var_1_17 = var_1_12;
  } else {
   if (var_1_10 >= var_1_11) {
    if (var_1_5 == (var_1_3 - var_1_18)) {
     var_1_17 = var_1_12;
    } else {
     var_1_17 = var_1_10;
    }
   } else {
    var_1_17 = var_1_12;
   }
  }
 }
 var_1_19 = ((var_1_20 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) - ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
 if ((var_1_10 * var_1_12) >= var_1_19) {
  var_1_21 = (256 + var_1_12);
 }
 if (! var_1_6) {
  var_1_24 = (var_1_25 - (var_1_26 - 16.5));
 } else {
  var_1_24 = (var_1_27 + var_1_28);
 }
 if (! (var_1_5 <= var_1_21)) {
  var_1_13 = var_1_14;
 } else {
  var_1_13 = var_1_8;
 }
 signed short int stepLocal_4 = var_1_23;
 unsigned short int stepLocal_3 = var_1_21;
 unsigned char stepLocal_2 = var_1_15;
 if (stepLocal_2 && var_1_13) {
  if (! var_1_6) {
   if (stepLocal_4 < var_1_21) {
    if (var_1_15) {
     var_1_29 = ((((var_1_11) < (((((var_1_20) < ((var_1_31 - var_1_10))) ? (var_1_20) : ((var_1_31 - var_1_10)))))) ? (var_1_11) : (((((var_1_20) < ((var_1_31 - var_1_10))) ? (var_1_20) : ((var_1_31 - var_1_10)))))));
    } else {
     if (stepLocal_3 == (16 << var_1_22)) {
      var_1_29 = var_1_20;
     }
    }
   } else {
    var_1_29 = var_1_10;
   }
  } else {
   var_1_29 = var_1_20;
  }
 } else {
  var_1_29 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 62);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 190);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 4611686.018427383000e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 127);
 assume_abort_if_not(var_1_31 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_29 = var_1_29;
}
int property(void) {
 return (((((((((((var_1_22 == (var_1_3 - var_1_4)) ? (((var_1_22 / var_1_5) <= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_6 && (var_1_7 && var_1_8)))) : (var_1_1 == ((unsigned char) (! var_1_6)))) : (var_1_1 == ((unsigned char) var_1_8))) && (var_1_7 ? (var_1_9 == ((signed char) ((var_1_10 - var_1_11) - var_1_12))) : (var_1_9 == ((signed char) ((((5) < 0 ) ? -(5) : (5))))))) && ((! (var_1_5 <= var_1_21)) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_8)))) && (var_1_14 ? (var_1_15 == ((unsigned char) (! var_1_16))) : 1)) && ((! (var_1_10 >= var_1_12)) ? ((((((var_1_22) > (var_1_3)) ? (var_1_22) : (var_1_3))) <= (var_1_4 % var_1_10)) ? (var_1_17 == ((unsigned char) var_1_12)) : ((var_1_10 >= var_1_11) ? ((var_1_5 == (var_1_3 - var_1_18)) ? (var_1_17 == ((unsigned char) var_1_12)) : (var_1_17 == ((unsigned char) var_1_10))) : (var_1_17 == ((unsigned char) var_1_12)))) : 1)) && (var_1_19 == ((unsigned char) ((var_1_20 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) - ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))) && (((var_1_10 * var_1_12) >= var_1_19) ? (var_1_21 == ((unsigned short int) (256 + var_1_12))) : 1)) && ((! (last_1_var_1_21 >= (var_1_20 + var_1_4))) ? ((! last_1_var_1_1) ? (var_1_22 == ((signed long int) last_1_var_1_21)) : 1) : (var_1_22 == ((signed long int) last_1_var_1_23)))) && ((((((-2) < 0 ) ? -(-2) : (-2))) == ((((last_1_var_1_21) > (last_1_var_1_9)) ? (last_1_var_1_21) : (last_1_var_1_9)))) ? ((-32 <= var_1_3) ? (var_1_14 ? (var_1_23 == ((signed short int) last_1_var_1_9)) : (var_1_23 == ((signed short int) (((((var_1_10) < (last_1_var_1_21)) ? (var_1_10) : (last_1_var_1_21))) - last_1_var_1_29)))) : (var_1_23 == ((signed short int) (last_1_var_1_29 + 100)))) : (((last_1_var_1_22 * 128) > (var_1_11 << var_1_10)) ? (var_1_23 == ((signed short int) var_1_12)) : 1))) && ((! var_1_6) ? (var_1_24 == ((double) (var_1_25 - (var_1_26 - 16.5)))) : (var_1_24 == ((double) (var_1_27 + var_1_28))))) && ((var_1_15 && var_1_13) ? ((! var_1_6) ? ((var_1_23 < var_1_21) ? (var_1_15 ? (var_1_29 == ((unsigned char) ((((var_1_11) < (((((var_1_20) < ((var_1_31 - var_1_10))) ? (var_1_20) : ((var_1_31 - var_1_10)))))) ? (var_1_11) : (((((var_1_20) < ((var_1_31 - var_1_10))) ? (var_1_20) : ((var_1_31 - var_1_10))))))))) : ((var_1_21 == (16 << var_1_22)) ? (var_1_29 == ((unsigned char) var_1_20)) : 1)) : (var_1_29 == ((unsigned char) var_1_10))) : (var_1_29 == ((unsigned char) var_1_20))) : (var_1_29 == ((unsigned char) var_1_12)))
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
