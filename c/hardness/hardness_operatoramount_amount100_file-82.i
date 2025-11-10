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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 16;
float var_1_6 = 9.1;
unsigned short int var_1_7 = 16;
unsigned short int var_1_8 = 4;
float var_1_9 = 1.4;
float var_1_10 = 9.7;
float var_1_11 = 16.25;
float var_1_12 = 3.5;
signed char var_1_14 = -64;
signed long int var_1_15 = -10;
signed char var_1_16 = -1;
signed char var_1_17 = 0;
float var_1_18 = 8.25;
float var_1_19 = 0.0;
float var_1_20 = 0.0;
unsigned long int var_1_21 = 0;
signed long int var_1_22 = 1;
float var_1_23 = 256.3;
float var_1_24 = 9.75;
float var_1_25 = 4.5;
float var_1_26 = 24.8;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
double var_1_30 = 63.8;
signed long int var_1_31 = 1;
unsigned long int var_1_33 = 16;
unsigned long int var_1_34 = 3896233473;
unsigned long int var_1_35 = 2380878222;
signed short int var_1_36 = -1;
float var_1_37 = 15.8;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float last_1_var_1_9 = 1.4;
float last_1_var_1_18 = 8.25;
unsigned long int last_1_var_1_21 = 0;
signed long int last_1_var_1_22 = 1;
unsigned char last_1_var_1_27 = 0;
unsigned long int last_1_var_1_33 = 16;
unsigned char last_1_var_1_38 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_6 = last_1_var_1_38;
 if (stepLocal_6 || var_1_29) {
  var_1_33 = (((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) - ((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22))));
 }
 unsigned char stepLocal_0 = last_1_var_1_18 >= last_1_var_1_9;
 if (last_1_var_1_27) {
  if ((last_1_var_1_33 <= last_1_var_1_21) || stepLocal_0) {
   var_1_1 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
  } else {
   var_1_1 = 25;
  }
 } else {
  var_1_1 = var_1_7;
 }
 signed long int stepLocal_3 = var_1_15;
 if (stepLocal_3 > (var_1_7 / 128)) {
  var_1_21 = (var_1_7 + var_1_1);
 }
 unsigned short int stepLocal_2 = var_1_8;
 unsigned short int stepLocal_1 = var_1_1;
 if (var_1_16 < stepLocal_2) {
  if (last_1_var_1_18 == var_1_6) {
   if (var_1_8 == stepLocal_1) {
    var_1_18 = ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11)));
   }
  } else {
   var_1_18 = ((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_11) - var_1_12);
  }
 }
 if ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) / ((((var_1_15) < (4)) ? (var_1_15) : (4)))) > (var_1_1 + var_1_7)) {
  var_1_14 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 } else {
  var_1_14 = var_1_16;
 }
 var_1_23 = (var_1_11 + (((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) + var_1_26));
 if (1.000000000000075E13f > var_1_11) {
  var_1_27 = (var_1_28 && var_1_29);
 }
 if (var_1_20 > (var_1_19 / var_1_37)) {
  var_1_36 = var_1_16;
 } else {
  var_1_36 = (((((((10) < (var_1_16)) ? (10) : (var_1_16))) < 0 ) ? -((((10) < (var_1_16)) ? (10) : (var_1_16))) : ((((10) < (var_1_16)) ? (10) : (var_1_16)))));
 }
 if (var_1_19 > var_1_26) {
  var_1_38 = ((var_1_29 && var_1_28) && var_1_39);
 }
 if ((1.75f / ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))) > var_1_12) {
  var_1_22 = ((((((((var_1_1) > (((((var_1_33) > (1)) ? (var_1_33) : (1))))) ? (var_1_1) : (((((var_1_33) > (1)) ? (var_1_33) : (1))))))) < (var_1_16)) ? (((((var_1_1) > (((((var_1_33) > (1)) ? (var_1_33) : (1))))) ? (var_1_1) : (((((var_1_33) > (1)) ? (var_1_33) : (1))))))) : (var_1_16)));
 } else {
  var_1_22 = (var_1_21 - 8);
 }
 if (var_1_27) {
  var_1_9 = (var_1_10 - (((((8.321555146747742E18f - var_1_11)) < (var_1_12)) ? ((8.321555146747742E18f - var_1_11)) : (var_1_12))));
 } else {
  if (! var_1_27) {
   var_1_9 = var_1_10;
  } else {
   var_1_9 = var_1_11;
  }
 }
 signed long int stepLocal_4 = 4;
 if (stepLocal_4 >= var_1_22) {
  var_1_30 = ((((var_1_26) < (((((var_1_20) < (var_1_24)) ? (var_1_20) : (var_1_24))))) ? (var_1_26) : (((((var_1_20) < (var_1_24)) ? (var_1_20) : (var_1_24))))));
 } else {
  var_1_30 = var_1_25;
 }
 signed long int stepLocal_5 = var_1_22;
 if (var_1_12 != var_1_30) {
  if (var_1_21 < stepLocal_5) {
   var_1_31 = ((((var_1_16) > ((var_1_7 + (var_1_21 + var_1_33)))) ? (var_1_16) : ((var_1_7 + (var_1_21 + var_1_33)))));
  }
 } else {
  if (! var_1_27) {
   var_1_31 = (((((var_1_17) < (var_1_8)) ? (var_1_17) : (var_1_8))) + var_1_33);
  } else {
   var_1_31 = var_1_7;
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -230584.3009213691400e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -230584.3009213691400e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -230584.3009213691400e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_38 = var_1_38;
}
int property(void) {
 return ((((((((((((last_1_var_1_27 ? (((last_1_var_1_33 <= last_1_var_1_21) || (last_1_var_1_18 >= last_1_var_1_9)) ? (var_1_1 == ((unsigned short int) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) : (var_1_1 == ((unsigned short int) 25))) : (var_1_1 == ((unsigned short int) var_1_7))) && (var_1_27 ? (var_1_9 == ((float) (var_1_10 - (((((8.321555146747742E18f - var_1_11)) < (var_1_12)) ? ((8.321555146747742E18f - var_1_11)) : (var_1_12)))))) : ((! var_1_27) ? (var_1_9 == ((float) var_1_10)) : (var_1_9 == ((float) var_1_11))))) && (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) / ((((var_1_15) < (4)) ? (var_1_15) : (4)))) > (var_1_1 + var_1_7)) ? (var_1_14 == ((signed char) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_14 == ((signed char) var_1_16)))) && ((var_1_16 < var_1_8) ? ((last_1_var_1_18 == var_1_6) ? ((var_1_8 == var_1_1) ? (var_1_18 == ((float) ((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))))) : 1) : (var_1_18 == ((float) ((((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))) - var_1_11) - var_1_12)))) : 1)) && ((var_1_15 > (var_1_7 / 128)) ? (var_1_21 == ((unsigned long int) (var_1_7 + var_1_1))) : 1)) && (((1.75f / ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))) > var_1_12) ? (var_1_22 == ((signed long int) ((((((((var_1_1) > (((((var_1_33) > (1)) ? (var_1_33) : (1))))) ? (var_1_1) : (((((var_1_33) > (1)) ? (var_1_33) : (1))))))) < (var_1_16)) ? (((((var_1_1) > (((((var_1_33) > (1)) ? (var_1_33) : (1))))) ? (var_1_1) : (((((var_1_33) > (1)) ? (var_1_33) : (1))))))) : (var_1_16))))) : (var_1_22 == ((signed long int) (var_1_21 - 8))))) && (var_1_23 == ((float) (var_1_11 + (((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) + var_1_26))))) && ((1.000000000000075E13f > var_1_11) ? (var_1_27 == ((unsigned char) (var_1_28 && var_1_29))) : 1)) && ((4 >= var_1_22) ? (var_1_30 == ((double) ((((var_1_26) < (((((var_1_20) < (var_1_24)) ? (var_1_20) : (var_1_24))))) ? (var_1_26) : (((((var_1_20) < (var_1_24)) ? (var_1_20) : (var_1_24)))))))) : (var_1_30 == ((double) var_1_25)))) && ((var_1_12 != var_1_30) ? ((var_1_21 < var_1_22) ? (var_1_31 == ((signed long int) ((((var_1_16) > ((var_1_7 + (var_1_21 + var_1_33)))) ? (var_1_16) : ((var_1_7 + (var_1_21 + var_1_33))))))) : 1) : ((! var_1_27) ? (var_1_31 == ((signed long int) (((((var_1_17) < (var_1_8)) ? (var_1_17) : (var_1_8))) + var_1_33))) : (var_1_31 == ((signed long int) var_1_7))))) && ((last_1_var_1_38 || var_1_29) ? (var_1_33 == ((unsigned long int) (((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) - ((((last_1_var_1_22) < 0 ) ? -(last_1_var_1_22) : (last_1_var_1_22)))))) : 1)) && ((var_1_20 > (var_1_19 / var_1_37)) ? (var_1_36 == ((signed short int) var_1_16)) : (var_1_36 == ((signed short int) (((((((10) < (var_1_16)) ? (10) : (var_1_16))) < 0 ) ? -((((10) < (var_1_16)) ? (10) : (var_1_16))) : ((((10) < (var_1_16)) ? (10) : (var_1_16))))))))) && ((var_1_19 > var_1_26) ? (var_1_38 == ((unsigned char) ((var_1_29 && var_1_28) && var_1_39))) : 1)
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
