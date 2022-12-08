// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
signed short int var_1_6 = -1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = -128;
signed char var_1_12 = 10;
signed char var_1_13 = -64;
signed char var_1_14 = 1;
signed char var_1_15 = -25;
unsigned short int var_1_16 = 256;
signed char var_1_18 = 4;
float var_1_19 = 100.5;
float var_1_20 = 4.5;
signed char var_1_21 = 0;
signed char var_1_22 = 64;
signed char var_1_23 = 2;
signed char var_1_24 = 4;
unsigned long int var_1_25 = 8;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 5;
signed short int var_1_29 = 32;
signed long int var_1_30 = 1;
signed long int var_1_31 = 0;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 2;
unsigned char var_1_36 = 200;
unsigned char var_1_37 = 32;
double var_1_38 = 10.3;
signed short int var_1_39 = -256;
signed short int last_1_var_1_6 = -1;
signed char last_1_var_1_9 = -128;
unsigned short int last_1_var_1_16 = 256;
signed char last_1_var_1_18 = 4;
float last_1_var_1_19 = 100.5;
unsigned long int last_1_var_1_25 = 8;
unsigned char last_1_var_1_27 = 50;
signed short int last_1_var_1_29 = 32;
unsigned char last_1_var_1_33 = 2;
unsigned char last_1_var_1_35 = 2;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = 50 * last_1_var_1_29;
 if ((last_1_var_1_16 | last_1_var_1_9) >= stepLocal_0) {
  var_1_1 = ((((last_1_var_1_9) < (((((last_1_var_1_16) > (last_1_var_1_33)) ? (last_1_var_1_16) : (last_1_var_1_33))))) ? (last_1_var_1_9) : (((((last_1_var_1_16) > (last_1_var_1_33)) ? (last_1_var_1_16) : (last_1_var_1_33))))));
 }
 if ((last_1_var_1_19 + last_1_var_1_19) > 200.875f) {
  if (last_1_var_1_25 > last_1_var_1_18) {
   var_1_9 = ((((var_1_12) > (((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) ? (var_1_12) : (((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))));
  } else {
   var_1_9 = ((((((((-32) < (100)) ? (-32) : (100)))) > (var_1_13)) ? (((((-32) < (100)) ? (-32) : (100)))) : (var_1_13)));
  }
 }
 signed long int stepLocal_4 = last_1_var_1_9;
 signed long int stepLocal_3 = var_1_24 % var_1_34;
 if (last_1_var_1_16 <= stepLocal_4) {
  var_1_33 = (var_1_34 - var_1_28);
 } else {
  if (stepLocal_3 >= last_1_var_1_27) {
   if (var_1_7) {
    var_1_33 = (((((((((var_1_28) > (var_1_23)) ? (var_1_28) : (var_1_23)))) > ((64 - var_1_30))) ? (((((var_1_28) > (var_1_23)) ? (var_1_28) : (var_1_23)))) : ((64 - var_1_30)))) + 1);
   } else {
    var_1_33 = var_1_28;
   }
  }
 }
 var_1_19 = var_1_20;
 var_1_21 = ((((var_1_12) < ((var_1_22 - (var_1_23 + var_1_24)))) ? (var_1_12) : ((var_1_22 - (var_1_23 + var_1_24)))));
 var_1_27 = ((((((var_1_24 + 50)) > (var_1_23)) ? ((var_1_24 + 50)) : (var_1_23))) + var_1_28);
 var_1_38 = var_1_20;
 var_1_39 = 128;
 unsigned char stepLocal_2 = var_1_7;
 if (var_1_38 <= ((((var_1_38) > (var_1_19)) ? (var_1_38) : (var_1_19)))) {
  if ((! (var_1_27 < var_1_27)) && stepLocal_2) {
   var_1_25 = var_1_1;
  }
 } else {
  var_1_25 = 2u;
 }
 if (var_1_7) {
  if (! var_1_8) {
   var_1_16 = ((((var_1_27 + var_1_27) < 0 ) ? -(var_1_27 + var_1_27) : (var_1_27 + var_1_27)));
  } else {
   var_1_16 = var_1_33;
  }
 } else {
  var_1_16 = var_1_9;
 }
 signed long int stepLocal_5 = var_1_30 + var_1_39;
 if ((var_1_25 - last_1_var_1_35) <= stepLocal_5) {
  if (var_1_7) {
   var_1_35 = var_1_28;
  } else {
   var_1_35 = ((var_1_36 - (var_1_37 - var_1_30)) - ((((var_1_28) < (var_1_24)) ? (var_1_28) : (var_1_24))));
  }
 }
 unsigned short int stepLocal_1 = var_1_1;
 if (stepLocal_1 <= var_1_35) {
  var_1_18 = (((((((((4) < 0 ) ? -(4) : (4)))) < (var_1_15)) ? (((((4) < 0 ) ? -(4) : (4)))) : (var_1_15))) + var_1_14);
 } else {
  var_1_18 = var_1_13;
 }
 if ((var_1_35 << ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) >= var_1_18) {
  if (var_1_35 != ((((-64) > (var_1_23)) ? (-64) : (var_1_23)))) {
   var_1_29 = (((((50 + var_1_23) - var_1_33) < 0 ) ? -((50 + var_1_23) - var_1_33) : ((50 + var_1_23) - var_1_33)));
  }
 } else {
  var_1_29 = (var_1_28 - var_1_30);
 }
 if (var_1_21 > var_1_29) {
  var_1_6 = (var_1_21 - last_1_var_1_6);
 } else {
  if (var_1_7 && var_1_8) {
   var_1_6 = last_1_var_1_6;
  } else {
   var_1_6 = -2;
  }
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 190);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 31);
 assume_abort_if_not(var_1_37 <= 63);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_35 = var_1_35;
}
int property() {
 return (((((((((((((((last_1_var_1_16 | last_1_var_1_9) >= (50 * last_1_var_1_29)) ? (var_1_1 == ((unsigned short int) ((((last_1_var_1_9) < (((((last_1_var_1_16) > (last_1_var_1_33)) ? (last_1_var_1_16) : (last_1_var_1_33))))) ? (last_1_var_1_9) : (((((last_1_var_1_16) > (last_1_var_1_33)) ? (last_1_var_1_16) : (last_1_var_1_33)))))))) : 1) && ((var_1_21 > var_1_29) ? (var_1_6 == ((signed short int) (var_1_21 - last_1_var_1_6))) : ((var_1_7 && var_1_8) ? (var_1_6 == ((signed short int) last_1_var_1_6)) : (var_1_6 == ((signed short int) -2))))) && (((last_1_var_1_19 + last_1_var_1_19) > 200.875f) ? ((last_1_var_1_25 > last_1_var_1_18) ? (var_1_9 == ((signed char) ((((var_1_12) > (((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) ? (var_1_12) : (((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))))))))) : (var_1_9 == ((signed char) ((((((((-32) < (100)) ? (-32) : (100)))) > (var_1_13)) ? (((((-32) < (100)) ? (-32) : (100)))) : (var_1_13)))))) : 1)) && (var_1_7 ? ((! var_1_8) ? (var_1_16 == ((unsigned short int) ((((var_1_27 + var_1_27) < 0 ) ? -(var_1_27 + var_1_27) : (var_1_27 + var_1_27))))) : (var_1_16 == ((unsigned short int) var_1_33))) : (var_1_16 == ((unsigned short int) var_1_9)))) && ((var_1_1 <= var_1_35) ? (var_1_18 == ((signed char) (((((((((4) < 0 ) ? -(4) : (4)))) < (var_1_15)) ? (((((4) < 0 ) ? -(4) : (4)))) : (var_1_15))) + var_1_14))) : (var_1_18 == ((signed char) var_1_13)))) && (var_1_19 == ((float) var_1_20))) && (var_1_21 == ((signed char) ((((var_1_12) < ((var_1_22 - (var_1_23 + var_1_24)))) ? (var_1_12) : ((var_1_22 - (var_1_23 + var_1_24)))))))) && ((var_1_38 <= ((((var_1_38) > (var_1_19)) ? (var_1_38) : (var_1_19)))) ? (((! (var_1_27 < var_1_27)) && var_1_7) ? (var_1_25 == ((unsigned long int) var_1_1)) : 1) : (var_1_25 == ((unsigned long int) 2u)))) && (var_1_27 == ((unsigned char) ((((((var_1_24 + 50)) > (var_1_23)) ? ((var_1_24 + 50)) : (var_1_23))) + var_1_28)))) && (((var_1_35 << ((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) >= var_1_18) ? ((var_1_35 != ((((-64) > (var_1_23)) ? (-64) : (var_1_23)))) ? (var_1_29 == ((signed short int) (((((50 + var_1_23) - var_1_33) < 0 ) ? -((50 + var_1_23) - var_1_33) : ((50 + var_1_23) - var_1_33))))) : 1) : (var_1_29 == ((signed short int) (var_1_28 - var_1_30))))) && ((last_1_var_1_16 <= last_1_var_1_9) ? (var_1_33 == ((unsigned char) (var_1_34 - var_1_28))) : (((var_1_24 % var_1_34) >= last_1_var_1_27) ? (var_1_7 ? (var_1_33 == ((unsigned char) (((((((((var_1_28) > (var_1_23)) ? (var_1_28) : (var_1_23)))) > ((64 - var_1_30))) ? (((((var_1_28) > (var_1_23)) ? (var_1_28) : (var_1_23)))) : ((64 - var_1_30)))) + 1))) : (var_1_33 == ((unsigned char) var_1_28))) : 1))) && (((var_1_25 - last_1_var_1_35) <= (var_1_30 + var_1_39)) ? (var_1_7 ? (var_1_35 == ((unsigned char) var_1_28)) : (var_1_35 == ((unsigned char) ((var_1_36 - (var_1_37 - var_1_30)) - ((((var_1_28) < (var_1_24)) ? (var_1_28) : (var_1_24))))))) : 1)) && (var_1_38 == ((double) var_1_20))) && (var_1_39 == ((signed short int) 128))
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
