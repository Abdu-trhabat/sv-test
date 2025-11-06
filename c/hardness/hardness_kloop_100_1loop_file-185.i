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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 10;
double var_1_2 = 128.4;
double var_1_3 = 256.8;
signed short int var_1_4 = 100;
signed short int var_1_5 = 16;
signed short int var_1_6 = -256;
signed short int var_1_7 = 16;
unsigned char var_1_8 = 1;
double var_1_9 = 10.6;
double var_1_10 = 7.2;
double var_1_11 = 15.2;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 64;
unsigned char var_1_19 = 10;
unsigned long int var_1_20 = 5;
unsigned long int var_1_21 = 2;
signed short int var_1_22 = 5;
unsigned long int var_1_23 = 100000;
unsigned long int var_1_24 = 2427679849;
unsigned long int var_1_25 = 2427249392;
unsigned long int var_1_26 = 1000000000;
unsigned long int var_1_27 = 25;
unsigned char var_1_28 = 16;
unsigned char var_1_30 = 64;
signed char var_1_31 = -64;
signed char var_1_32 = 4;
signed char var_1_33 = -8;
signed char var_1_34 = 2;
signed char var_1_35 = 1;
signed char var_1_36 = -50;
signed char var_1_37 = -4;
unsigned short int var_1_38 = 64;
signed short int var_1_39 = 20994;
unsigned short int var_1_40 = 60210;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
signed char var_1_45 = 32;
unsigned short int last_1_var_1_38 = 64;
unsigned char last_1_var_1_42 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_9 - ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))) >= var_1_3) {
  var_1_8 = (last_1_var_1_42 || var_1_13);
 }
 var_1_42 = (! (! (var_1_8 && var_1_43)));
 if (-0.87 >= (- (var_1_2 + var_1_3))) {
  var_1_1 = ((((((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6)))) < (var_1_7)) ? (((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6)))) : (var_1_7)));
 }
 unsigned char stepLocal_0 = var_1_8;
 if (stepLocal_0 && var_1_13) {
  var_1_14 = ((((-200) > (var_1_4)) ? (-200) : (var_1_4)));
 }
 var_1_22 = var_1_5;
 var_1_23 = (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - (var_1_18 + (var_1_26 - var_1_16)));
 var_1_31 = (((((var_1_32) < ((var_1_33 + var_1_34))) ? (var_1_32) : ((var_1_33 + var_1_34)))) + ((((var_1_35) < (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))))) ? (var_1_35) : (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))))));
 if (var_1_10 > var_1_2) {
  var_1_38 = 5;
 } else {
  if (var_1_23 <= ((var_1_39 - last_1_var_1_38) << var_1_26)) {
   var_1_38 = (var_1_40 - var_1_17);
  } else {
   if ((var_1_1 <= var_1_14) || var_1_42) {
    var_1_38 = (var_1_16 + var_1_14);
   } else {
    var_1_38 = (48154 - var_1_30);
   }
  }
 }
 if (var_1_42) {
  if (var_1_33 < var_1_17) {
   var_1_44 = (! (! 1));
  }
 } else {
  var_1_44 = var_1_43;
 }
 if (var_1_30 <= (128 + var_1_18)) {
  if (var_1_21 > var_1_24) {
   if (var_1_37 < (var_1_39 / var_1_30)) {
    var_1_45 = 1;
   } else {
    var_1_45 = var_1_37;
   }
  } else {
   var_1_45 = var_1_32;
  }
 } else {
  var_1_45 = var_1_34;
 }
 signed short int stepLocal_1 = var_1_5;
 if (var_1_10 > var_1_2) {
  var_1_15 = (var_1_16 + (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - 16));
 } else {
  if ((var_1_23 * var_1_4) <= stepLocal_1) {
   var_1_15 = var_1_19;
  } else {
   var_1_15 = var_1_17;
  }
 }
 if (var_1_44) {
  var_1_20 = (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) + ((((var_1_21) > (8u)) ? (var_1_21) : (8u))));
 } else {
  var_1_20 = ((((var_1_22) < (var_1_17)) ? (var_1_22) : (var_1_17)));
 }
 unsigned char stepLocal_3 = var_1_42;
 unsigned char stepLocal_2 = var_1_44;
 if ((var_1_1 <= var_1_6) || stepLocal_2) {
  if (stepLocal_3 || (var_1_9 >= var_1_11)) {
   var_1_27 = var_1_25;
  }
 } else {
  var_1_27 = var_1_18;
 }
 signed long int stepLocal_4 = ~ var_1_18;
 if (stepLocal_4 <= (var_1_27 - var_1_21)) {
  if (! var_1_8) {
   var_1_28 = ((var_1_18 + var_1_30) - var_1_16);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32767);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32767);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 63);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 63);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 536870911);
 assume_abort_if_not(var_1_26 <= 1073741823);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 64);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -63);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -31);
 assume_abort_if_not(var_1_33 <= 32);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -31);
 assume_abort_if_not(var_1_34 <= 31);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -63);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_38 = var_1_38;
 last_1_var_1_42 = var_1_42;
}
int property(void) {
 return ((((((((((((((-0.87 >= (- (var_1_2 + var_1_3))) ? (var_1_1 == ((signed short int) ((((((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6)))) < (var_1_7)) ? (((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6)))) : (var_1_7))))) : 1) && (((var_1_9 - ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))) >= var_1_3) ? (var_1_8 == ((unsigned char) (last_1_var_1_42 || var_1_13))) : 1)) && ((var_1_8 && var_1_13) ? (var_1_14 == ((signed short int) ((((-200) > (var_1_4)) ? (-200) : (var_1_4))))) : 1)) && ((var_1_10 > var_1_2) ? (var_1_15 == ((unsigned char) (var_1_16 + (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - 16)))) : (((var_1_23 * var_1_4) <= var_1_5) ? (var_1_15 == ((unsigned char) var_1_19)) : (var_1_15 == ((unsigned char) var_1_17))))) && (var_1_44 ? (var_1_20 == ((unsigned long int) (((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) + ((((var_1_21) > (8u)) ? (var_1_21) : (8u)))))) : (var_1_20 == ((unsigned long int) ((((var_1_22) < (var_1_17)) ? (var_1_22) : (var_1_17))))))) && (var_1_22 == ((signed short int) var_1_5))) && (var_1_23 == ((unsigned long int) (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - (var_1_18 + (var_1_26 - var_1_16)))))) && (((var_1_1 <= var_1_6) || var_1_44) ? ((var_1_42 || (var_1_9 >= var_1_11)) ? (var_1_27 == ((unsigned long int) var_1_25)) : 1) : (var_1_27 == ((unsigned long int) var_1_18)))) && (((~ var_1_18) <= (var_1_27 - var_1_21)) ? ((! var_1_8) ? (var_1_28 == ((unsigned char) ((var_1_18 + var_1_30) - var_1_16))) : 1) : 1)) && (var_1_31 == ((signed char) (((((var_1_32) < ((var_1_33 + var_1_34))) ? (var_1_32) : ((var_1_33 + var_1_34)))) + ((((var_1_35) < (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))))) ? (var_1_35) : (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))))))))) && ((var_1_10 > var_1_2) ? (var_1_38 == ((unsigned short int) 5)) : ((var_1_23 <= ((var_1_39 - last_1_var_1_38) << var_1_26)) ? (var_1_38 == ((unsigned short int) (var_1_40 - var_1_17))) : (((var_1_1 <= var_1_14) || var_1_42) ? (var_1_38 == ((unsigned short int) (var_1_16 + var_1_14))) : (var_1_38 == ((unsigned short int) (48154 - var_1_30))))))) && (var_1_42 == ((unsigned char) (! (! (var_1_8 && var_1_43)))))) && (var_1_42 ? ((var_1_33 < var_1_17) ? (var_1_44 == ((unsigned char) (! (! 1)))) : 1) : (var_1_44 == ((unsigned char) var_1_43)))) && ((var_1_30 <= (128 + var_1_18)) ? ((var_1_21 > var_1_24) ? ((var_1_37 < (var_1_39 / var_1_30)) ? (var_1_45 == ((signed char) 1)) : (var_1_45 == ((signed char) var_1_37))) : (var_1_45 == ((signed char) var_1_32))) : (var_1_45 == ((signed char) var_1_34)))
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
