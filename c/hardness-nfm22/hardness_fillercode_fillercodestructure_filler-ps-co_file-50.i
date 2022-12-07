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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -2;
float var_1_13 = 999.4;
float var_1_14 = 100.425;
float var_1_15 = 3.375;
float var_1_16 = 15.9;
signed short int var_1_17 = -10;
signed short int var_1_18 = 18060;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 256;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 200;
double var_1_33 = 31.625;
double var_1_35 = 7.5;
double var_1_36 = 15.75;
double var_1_37 = 15.375;
unsigned short int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
double var_1_44 = 128.5;
float var_1_45 = 1.85;
double var_1_46 = 1.5;
double var_1_47 = 99999999999.4;
unsigned char var_1_49 = 128;
void initially(void) {
}
void step(void) {
 var_1_31 = var_1_32;
 if (! var_1_30) {
  var_1_33 = ((((var_1_35) > ((var_1_36 - var_1_37))) ? (var_1_35) : ((var_1_36 - var_1_37))));
 }
 var_1_38 = ((((var_1_17) > (var_1_32)) ? (var_1_17) : (var_1_32)));
 if ((var_1_17 & (var_1_17 + 2u)) < (16u >> var_1_32)) {
  var_1_39 = ((var_1_40 && (var_1_41 && var_1_42)) && (! var_1_43));
 }
 if (var_1_36 <= var_1_35) {
  if (((((var_1_13 + var_1_37) < 0 ) ? -(var_1_13 + var_1_37) : (var_1_13 + var_1_37))) < var_1_36) {
   var_1_44 = ((((31.35) < (((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))))) ? (31.35) : (((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36))))));
  }
 } else {
  var_1_44 = var_1_36;
 }
 if ((var_1_13 * (var_1_46 - var_1_47)) < var_1_35) {
  if ((((((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9))) < 0 ) ? -((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9))) : ((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9))))) > ((((var_1_25) < ((256 + var_1_9))) ? (var_1_25) : ((256 + var_1_9))))) {
   var_1_45 = ((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35)));
  }
 } else {
  var_1_45 = (((((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_37)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_37))) < 0 ) ? -((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_37)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_37))) : ((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_37)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_37)))));
 }
 if (var_1_30 || (var_1_32 >= (var_1_9 & var_1_9))) {
  if (-2 > var_1_9) {
   var_1_49 = var_1_32;
  } else {
   var_1_49 = var_1_32;
  }
 }
 if (var_1_8) {
  var_1_13 = (((((var_1_14 + var_1_15)) < (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16))))) ? ((var_1_14 + var_1_15)) : (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16))))));
 }
 if (var_1_8) {
  var_1_25 = (var_1_26 + var_1_27);
 }
 var_1_29 = var_1_27;
 var_1_30 = var_1_8;
 if ((var_1_29 > var_1_25) && var_1_30) {
  var_1_9 = var_1_25;
 } else {
  var_1_9 = ((((var_1_25) > ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25))))) ? (var_1_25) : ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25))))));
 }
 var_1_17 = ((var_1_18 - 25) - var_1_25);
 signed long int stepLocal_2 = var_1_25 + var_1_17;
 if (((var_1_18 % var_1_21) & ((((1u) < 0 ) ? -(1u) : (1u)))) < stepLocal_2) {
  var_1_20 = (var_1_23 || var_1_24);
 } else {
  var_1_20 = var_1_7;
 }
 signed short int stepLocal_3 = var_1_9;
 if ((~ var_1_29) > stepLocal_3) {
  var_1_28 = (! var_1_7);
 } else {
  var_1_28 = (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7)));
 }
 signed long int stepLocal_1 = (((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25));
 unsigned char stepLocal_0 = var_1_25;
 if (stepLocal_1 <= (var_1_25 - var_1_25)) {
  if (stepLocal_0 < var_1_25) {
   if (var_1_20) {
    var_1_1 = var_1_7;
   } else {
    var_1_1 = var_1_8;
   }
  }
 } else {
  var_1_1 = 0;
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16382);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 4294967295);
 assume_abort_if_not(var_1_21 != 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return (((((((((((((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25))) <= (var_1_25 - var_1_25)) ? ((var_1_25 < var_1_25) ? (var_1_20 ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_8))) : 1) : (var_1_1 == ((unsigned char) 0))) && (((var_1_29 > var_1_25) && var_1_30) ? (var_1_9 == ((signed short int) var_1_25)) : (var_1_9 == ((signed short int) ((((var_1_25) > ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25))))) ? (var_1_25) : ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25)))))))))) && (var_1_8 ? (var_1_13 == ((float) (((((var_1_14 + var_1_15)) < (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16))))) ? ((var_1_14 + var_1_15)) : (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16)))))))) : 1)) && (var_1_17 == ((signed short int) ((var_1_18 - 25) - var_1_25)))) && ((((var_1_18 % var_1_21) & ((((1u) < 0 ) ? -(1u) : (1u)))) < (var_1_25 + var_1_17)) ? (var_1_20 == ((unsigned char) (var_1_23 || var_1_24))) : (var_1_20 == ((unsigned char) var_1_7)))) && (var_1_8 ? (var_1_25 == ((unsigned char) (var_1_26 + var_1_27))) : 1)) && (((~ var_1_29) > var_1_9) ? (var_1_28 == ((unsigned char) (! var_1_7))) : (var_1_28 == ((unsigned char) (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7))))))) && (var_1_29 == ((unsigned short int) var_1_27))) && (var_1_30 == ((unsigned char) var_1_8))
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
