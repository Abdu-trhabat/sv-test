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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 45160;
signed long int var_1_12 = -4;
double var_1_13 = 9.1;
double var_1_15 = 7.5;
signed long int var_1_16 = 1000000000;
signed long int var_1_17 = -16;
unsigned long int var_1_18 = 5;
signed long int var_1_19 = 4;
signed char var_1_20 = 5;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned long int var_1_24 = 25;
unsigned long int var_1_25 = 2948939844;
double var_1_26 = 256.75;
double var_1_27 = 7.125;
double var_1_28 = 999999.6;
double var_1_29 = 99.2;
unsigned char var_1_30 = 2;
signed long int var_1_31 = 4;
unsigned short int last_1_var_1_9 = 0;
unsigned short int last_1_var_1_10 = 8;
signed long int last_1_var_1_12 = -4;
unsigned long int last_1_var_1_18 = 5;
unsigned char last_1_var_1_23 = 0;
unsigned long int last_1_var_1_24 = 25;
double last_1_var_1_26 = 256.75;
signed long int last_1_var_1_31 = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = (var_1_16 + var_1_11) >> ((((2) < (var_1_20)) ? (2) : (var_1_20)));
 unsigned long int stepLocal_3 = last_1_var_1_24;
 unsigned long int stepLocal_2 = last_1_var_1_24;
 if (last_1_var_1_12 <= stepLocal_2) {
  var_1_18 = ((3528429073u - var_1_16) - last_1_var_1_18);
 } else {
  if ((((((last_1_var_1_18 + last_1_var_1_9)) < (var_1_11)) ? ((last_1_var_1_18 + last_1_var_1_9)) : (var_1_11))) != stepLocal_3) {
   if ((((((last_1_var_1_18 >> var_1_19)) > (last_1_var_1_24)) ? ((last_1_var_1_18 >> var_1_19)) : (last_1_var_1_24))) < stepLocal_4) {
    if (var_1_15 != last_1_var_1_26) {
     var_1_18 = var_1_20;
    } else {
     var_1_18 = last_1_var_1_12;
    }
   } else {
    var_1_18 = last_1_var_1_12;
   }
  } else {
   var_1_18 = last_1_var_1_12;
  }
 }
 signed long int stepLocal_8 = var_1_17;
 if (var_1_7) {
  if (stepLocal_8 >= var_1_18) {
   var_1_26 = ((1.0000000000000005E15 + var_1_27) - var_1_28);
  }
 } else {
  var_1_26 = ((((var_1_27 + var_1_29) < 0 ) ? -(var_1_27 + var_1_29) : (var_1_27 + var_1_29)));
 }
 signed long int stepLocal_0 = -128;
 if (last_1_var_1_12 < stepLocal_0) {
  var_1_9 = (last_1_var_1_23 + last_1_var_1_12);
 }
 if ((var_1_13 - 1.5) > (last_1_var_1_26 / var_1_15)) {
  if (var_1_13 > 15.5) {
   var_1_12 = ((last_1_var_1_24 - (var_1_16 - last_1_var_1_23)) + (last_1_var_1_31 + last_1_var_1_18));
  } else {
   var_1_12 = last_1_var_1_23;
  }
 } else {
  var_1_12 = var_1_17;
 }
 unsigned char stepLocal_7 = var_1_11 == last_1_var_1_10;
 signed long int stepLocal_6 = var_1_19;
 if (stepLocal_7 && var_1_7) {
  if (stepLocal_6 < var_1_16) {
   var_1_24 = (((((var_1_25 - last_1_var_1_31)) < (last_1_var_1_10)) ? ((var_1_25 - last_1_var_1_31)) : (last_1_var_1_10)));
  }
 } else {
  var_1_24 = var_1_20;
 }
 signed long int stepLocal_5 = var_1_12;
 if (stepLocal_5 >= var_1_24) {
  var_1_21 = ((((((((var_1_19 + var_1_20) < 0 ) ? -(var_1_19 + var_1_20) : (var_1_19 + var_1_20)))) > (var_1_22)) ? (((((var_1_19 + var_1_20) < 0 ) ? -(var_1_19 + var_1_20) : (var_1_19 + var_1_20)))) : (var_1_22)));
 }
 var_1_30 = (128 - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))));
 if (var_1_9 <= var_1_30) {
  if ((var_1_9 ^ (var_1_30 ^ var_1_9)) < var_1_24) {
   var_1_1 = (var_1_6 || var_1_7);
  } else {
   if (var_1_6) {
    var_1_1 = var_1_8;
   } else {
    var_1_1 = 1;
   }
  }
 }
 unsigned char stepLocal_9 = var_1_6;
 if (var_1_1) {
  if (((last_1_var_1_31 >= var_1_9) && var_1_7) && stepLocal_9) {
   var_1_31 = var_1_24;
  } else {
   var_1_31 = var_1_16;
  }
 } else {
  var_1_31 = 128;
 }
 if (((var_1_31 / -32) | var_1_16) >= var_1_12) {
  if (var_1_15 != var_1_13) {
   var_1_23 = var_1_19;
  } else {
   var_1_23 = var_1_22;
  }
 } else {
  var_1_23 = var_1_19;
 }
 signed long int stepLocal_1 = var_1_31;
 if (! (var_1_9 > var_1_21)) {
  if (stepLocal_1 >= var_1_21) {
   var_1_10 = (var_1_11 - 10000);
  } else {
   var_1_10 = 16;
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 536870911);
 assume_abort_if_not(var_1_16 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483647);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 15);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 30);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_31 = var_1_31;
}
int property(void) {
 return (((((((((((var_1_9 <= var_1_30) ? (((var_1_9 ^ (var_1_30 ^ var_1_9)) < var_1_24) ? (var_1_1 == ((unsigned char) (var_1_6 || var_1_7))) : (var_1_6 ? (var_1_1 == ((unsigned char) var_1_8)) : (var_1_1 == ((unsigned char) 1)))) : 1) && ((last_1_var_1_12 < -128) ? (var_1_9 == ((unsigned short int) (last_1_var_1_23 + last_1_var_1_12))) : 1)) && ((! (var_1_9 > var_1_21)) ? ((var_1_31 >= var_1_21) ? (var_1_10 == ((unsigned short int) (var_1_11 - 10000))) : (var_1_10 == ((unsigned short int) 16))) : 1)) && (((var_1_13 - 1.5) > (last_1_var_1_26 / var_1_15)) ? ((var_1_13 > 15.5) ? (var_1_12 == ((signed long int) ((last_1_var_1_24 - (var_1_16 - last_1_var_1_23)) + (last_1_var_1_31 + last_1_var_1_18)))) : (var_1_12 == ((signed long int) last_1_var_1_23))) : (var_1_12 == ((signed long int) var_1_17)))) && ((last_1_var_1_12 <= last_1_var_1_24) ? (var_1_18 == ((unsigned long int) ((3528429073u - var_1_16) - last_1_var_1_18))) : (((((((last_1_var_1_18 + last_1_var_1_9)) < (var_1_11)) ? ((last_1_var_1_18 + last_1_var_1_9)) : (var_1_11))) != last_1_var_1_24) ? (((((((last_1_var_1_18 >> var_1_19)) > (last_1_var_1_24)) ? ((last_1_var_1_18 >> var_1_19)) : (last_1_var_1_24))) < ((var_1_16 + var_1_11) >> ((((2) < (var_1_20)) ? (2) : (var_1_20))))) ? ((var_1_15 != last_1_var_1_26) ? (var_1_18 == ((unsigned long int) var_1_20)) : (var_1_18 == ((unsigned long int) last_1_var_1_12))) : (var_1_18 == ((unsigned long int) last_1_var_1_12))) : (var_1_18 == ((unsigned long int) last_1_var_1_12))))) && ((var_1_12 >= var_1_24) ? (var_1_21 == ((unsigned char) ((((((((var_1_19 + var_1_20) < 0 ) ? -(var_1_19 + var_1_20) : (var_1_19 + var_1_20)))) > (var_1_22)) ? (((((var_1_19 + var_1_20) < 0 ) ? -(var_1_19 + var_1_20) : (var_1_19 + var_1_20)))) : (var_1_22))))) : 1)) && ((((var_1_31 / -32) | var_1_16) >= var_1_12) ? ((var_1_15 != var_1_13) ? (var_1_23 == ((unsigned char) var_1_19)) : (var_1_23 == ((unsigned char) var_1_22))) : (var_1_23 == ((unsigned char) var_1_19)))) && (((var_1_11 == last_1_var_1_10) && var_1_7) ? ((var_1_19 < var_1_16) ? (var_1_24 == ((unsigned long int) (((((var_1_25 - last_1_var_1_31)) < (last_1_var_1_10)) ? ((var_1_25 - last_1_var_1_31)) : (last_1_var_1_10))))) : 1) : (var_1_24 == ((unsigned long int) var_1_20)))) && (var_1_7 ? ((var_1_17 >= var_1_18) ? (var_1_26 == ((double) ((1.0000000000000005E15 + var_1_27) - var_1_28))) : 1) : (var_1_26 == ((double) ((((var_1_27 + var_1_29) < 0 ) ? -(var_1_27 + var_1_29) : (var_1_27 + var_1_29))))))) && (var_1_30 == ((unsigned char) (128 - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))) && (var_1_1 ? ((((last_1_var_1_31 >= var_1_9) && var_1_7) && var_1_6) ? (var_1_31 == ((signed long int) var_1_24)) : (var_1_31 == ((signed long int) var_1_16))) : (var_1_31 == ((signed long int) 128)))
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
