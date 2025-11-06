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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 27042;
unsigned short int var_1_6 = 4;
unsigned short int var_1_7 = 22915;
unsigned short int var_1_8 = 5;
unsigned long int var_1_9 = 0;
signed char var_1_10 = -1;
signed char var_1_11 = 50;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 200;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 50;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
double var_1_23 = 64.8;
double var_1_24 = 5.4;
double var_1_25 = 15.3;
signed char var_1_26 = 0;
signed char var_1_27 = 100;
signed char var_1_28 = 5;
signed char var_1_29 = 2;
signed char var_1_30 = 32;
double var_1_31 = 63.2;
unsigned long int var_1_32 = 1;
unsigned char var_1_34 = 1;
signed long int var_1_35 = 1464376768;
signed short int var_1_36 = 8;
signed short int var_1_37 = 10;
unsigned char var_1_38 = 4;
unsigned short int var_1_39 = 10;
unsigned short int var_1_40 = 56535;
unsigned short int var_1_41 = 16;
unsigned char last_1_var_1_20 = 1;
double last_1_var_1_23 = 64.8;
unsigned short int last_1_var_1_41 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_10 - var_1_11;
 if (stepLocal_0 != var_1_8) {
  var_1_9 = last_1_var_1_41;
 } else {
  if ((25.8f + last_1_var_1_23) >= last_1_var_1_23) {
   var_1_9 = (last_1_var_1_41 + var_1_5);
  }
 }
 unsigned long int stepLocal_5 = var_1_5 | var_1_9;
 unsigned char stepLocal_4 = var_1_16;
 unsigned short int stepLocal_3 = var_1_7;
 if (var_1_15 >= stepLocal_4) {
  if (stepLocal_3 < var_1_11) {
   if (var_1_7 != stepLocal_5) {
    var_1_23 = (var_1_24 + var_1_25);
   }
  }
 }
 if (last_1_var_1_20) {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  var_1_1 = (((var_1_5 - var_1_6) + var_1_7) - var_1_8);
 }
 unsigned char stepLocal_1 = 5 < var_1_9;
 if (stepLocal_1 && (var_1_4 < var_1_8)) {
  var_1_14 = (((((var_1_15 - var_1_16) - (var_1_17 - var_1_18)) < 0 ) ? -((var_1_15 - var_1_16) - (var_1_17 - var_1_18)) : ((var_1_15 - var_1_16) - (var_1_17 - var_1_18))));
 }
 if ((var_1_15 | var_1_7) < var_1_3) {
  var_1_19 = 1;
 }
 if (var_1_16 >= (var_1_3 * 128)) {
  if (var_1_18 >= (var_1_17 & var_1_5)) {
   if (var_1_21) {
    var_1_26 = ((var_1_27 - (var_1_28 + var_1_29)) - var_1_18);
   } else {
    var_1_26 = var_1_30;
   }
  } else {
   var_1_26 = var_1_16;
  }
 } else {
  var_1_26 = var_1_18;
 }
 var_1_31 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
 signed long int stepLocal_7 = (((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17));
 unsigned long int stepLocal_6 = (var_1_9 + var_1_29) * var_1_8;
 if (stepLocal_7 <= ((var_1_35 - var_1_27) >> (var_1_36 + var_1_37))) {
  if (stepLocal_6 > var_1_6) {
   var_1_34 = ((((var_1_17) > (var_1_15)) ? (var_1_17) : (var_1_15)));
  }
 } else {
  var_1_34 = var_1_28;
 }
 var_1_38 = (((((var_1_17 + var_1_18)) > (var_1_28)) ? ((var_1_17 + var_1_18)) : (var_1_28)));
 unsigned long int stepLocal_8 = var_1_9;
 if (stepLocal_8 > var_1_38) {
  if (var_1_22) {
   if (var_1_23 == var_1_31) {
    var_1_39 = ((28228 + (32533 - var_1_16)) - var_1_7);
   } else {
    var_1_39 = ((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) < (((var_1_40 - var_1_37) - var_1_7))) ? (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) : (((var_1_40 - var_1_37) - var_1_7))));
   }
  } else {
   var_1_39 = (((((var_1_37) < (var_1_19)) ? (var_1_37) : (var_1_19))) + var_1_8);
  }
 } else {
  var_1_39 = var_1_28;
 }
 var_1_41 = var_1_28;
 unsigned char stepLocal_2 = var_1_34;
 if (stepLocal_2 > var_1_1) {
  var_1_20 = (var_1_21 || var_1_22);
 }
 if (var_1_23 < (- var_1_31)) {
  var_1_32 = var_1_3;
 } else {
  var_1_32 = (((((var_1_4) > (256u)) ? (var_1_4) : (256u))) + var_1_39);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 24575);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 8192);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 16384);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 190);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 63);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 62);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 32);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 31);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 1073741823);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 15);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 15);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 49150);
 assume_abort_if_not(var_1_40 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_41 = var_1_41;
}
int property(void) {
 return ((((((((((((last_1_var_1_20 ? (var_1_1 == ((unsigned short int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : (var_1_1 == ((unsigned short int) (((var_1_5 - var_1_6) + var_1_7) - var_1_8)))) && (((var_1_10 - var_1_11) != var_1_8) ? (var_1_9 == ((unsigned long int) last_1_var_1_41)) : (((25.8f + last_1_var_1_23) >= last_1_var_1_23) ? (var_1_9 == ((unsigned long int) (last_1_var_1_41 + var_1_5))) : 1))) && (((5 < var_1_9) && (var_1_4 < var_1_8)) ? (var_1_14 == ((unsigned char) (((((var_1_15 - var_1_16) - (var_1_17 - var_1_18)) < 0 ) ? -((var_1_15 - var_1_16) - (var_1_17 - var_1_18)) : ((var_1_15 - var_1_16) - (var_1_17 - var_1_18)))))) : 1)) && (((var_1_15 | var_1_7) < var_1_3) ? (var_1_19 == ((unsigned char) 1)) : 1)) && ((var_1_34 > var_1_1) ? (var_1_20 == ((unsigned char) (var_1_21 || var_1_22))) : 1)) && ((var_1_15 >= var_1_16) ? ((var_1_7 < var_1_11) ? ((var_1_7 != (var_1_5 | var_1_9)) ? (var_1_23 == ((double) (var_1_24 + var_1_25))) : 1) : 1) : 1)) && ((var_1_16 >= (var_1_3 * 128)) ? ((var_1_18 >= (var_1_17 & var_1_5)) ? (var_1_21 ? (var_1_26 == ((signed char) ((var_1_27 - (var_1_28 + var_1_29)) - var_1_18))) : (var_1_26 == ((signed char) var_1_30))) : (var_1_26 == ((signed char) var_1_16))) : (var_1_26 == ((signed char) var_1_18)))) && (var_1_31 == ((double) ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) && ((var_1_23 < (- var_1_31)) ? (var_1_32 == ((unsigned long int) var_1_3)) : (var_1_32 == ((unsigned long int) (((((var_1_4) > (256u)) ? (var_1_4) : (256u))) + var_1_39))))) && ((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) <= ((var_1_35 - var_1_27) >> (var_1_36 + var_1_37))) ? ((((var_1_9 + var_1_29) * var_1_8) > var_1_6) ? (var_1_34 == ((unsigned char) ((((var_1_17) > (var_1_15)) ? (var_1_17) : (var_1_15))))) : 1) : (var_1_34 == ((unsigned char) var_1_28)))) && (var_1_38 == ((unsigned char) (((((var_1_17 + var_1_18)) > (var_1_28)) ? ((var_1_17 + var_1_18)) : (var_1_28)))))) && ((var_1_9 > var_1_38) ? (var_1_22 ? ((var_1_23 == var_1_31) ? (var_1_39 == ((unsigned short int) ((28228 + (32533 - var_1_16)) - var_1_7))) : (var_1_39 == ((unsigned short int) ((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) < (((var_1_40 - var_1_37) - var_1_7))) ? (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) : (((var_1_40 - var_1_37) - var_1_7))))))) : (var_1_39 == ((unsigned short int) (((((var_1_37) < (var_1_19)) ? (var_1_37) : (var_1_19))) + var_1_8)))) : (var_1_39 == ((unsigned short int) var_1_28)))) && (var_1_41 == ((unsigned short int) var_1_28))
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
