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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch62Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 32.2;
double var_1_4 = 10000000.9;
double var_1_5 = 32.46;
double var_1_6 = 10000.6;
unsigned long int var_1_7 = 128;
signed long int var_1_8 = 100000;
unsigned long int var_1_9 = 3574816166;
unsigned long int var_1_10 = 1286461316;
unsigned long int var_1_11 = 128;
double var_1_12 = -0.75;
double var_1_13 = 127.875;
double var_1_14 = 0.4;
double var_1_15 = 255.125;
double var_1_16 = 15.2;
unsigned short int var_1_17 = 5;
unsigned short int var_1_18 = 10;
signed short int var_1_19 = 16;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 128;
signed short int var_1_23 = 8;
signed short int var_1_24 = 32;
signed short int var_1_25 = 20308;
signed short int var_1_26 = 16;
signed short int var_1_27 = 8;
float var_1_28 = 15.1;
unsigned long int var_1_29 = 25;
unsigned char var_1_30 = 25;
unsigned char var_1_32 = 10;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 0;
signed long int var_1_37 = 1;
signed long int var_1_38 = 32;
signed long int var_1_39 = 1238027655;
signed long int var_1_40 = 8;
signed long int var_1_41 = 32;
double var_1_42 = 32.1;
double var_1_43 = 5.6;
double var_1_44 = 1.6;
signed char var_1_45 = 32;
double var_1_46 = 127.2;
signed char var_1_47 = 100;
signed char var_1_48 = -32;
signed char var_1_49 = -10;
signed char var_1_50 = -25;
signed char var_1_51 = 0;
signed char var_1_52 = 16;
unsigned long int var_1_53 = 256;
signed short int var_1_54 = -2;
double var_1_55 = 3.4;
double var_1_56 = 0.85;
float var_1_57 = 99999999999.4;
unsigned short int var_1_58 = 37769;
float var_1_59 = 0.75;
float var_1_60 = 3.5;
float var_1_61 = 31.5;
float var_1_62 = 15.05;
float var_1_63 = 3.2;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
signed long int var_1_68 = 256;
float var_1_69 = 255.5;
float var_1_70 = 0.0;
float var_1_71 = 0.0;
signed char var_1_72 = -100;
signed char var_1_73 = 2;
unsigned short int var_1_74 = 0;
unsigned char var_1_75 = 10;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 0;
unsigned long int var_1_78 = 10000;
double last_1_var_1_42 = 32.1;
double last_1_var_1_55 = 3.4;
float last_1_var_1_57 = 99999999999.4;
unsigned char last_1_var_1_65 = 1;
unsigned char last_1_var_1_76 = 1;
unsigned long int last_1_var_1_78 = 10000;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_18 = (var_1_48 + var_1_32) | var_1_35;
 if (var_1_38 <= stepLocal_18) {
  var_1_65 = (last_1_var_1_76 || var_1_66);
 } else {
  var_1_65 = (((var_1_5 != last_1_var_1_55) || var_1_66) && var_1_67);
 }
 if (var_1_65) {
  var_1_76 = var_1_77;
 } else {
  var_1_76 = var_1_66;
 }
 if (9.5f != var_1_44) {
  if ((last_1_var_1_42 / var_1_46) > last_1_var_1_57) {
   if (var_1_14 < (last_1_var_1_42 * (var_1_6 / var_1_46))) {
    var_1_53 = (((((var_1_51) < ((var_1_10 - var_1_35))) ? (var_1_51) : ((var_1_10 - var_1_35)))) + var_1_40);
   }
  }
 }
 unsigned long int stepLocal_10 = (((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9));
 if (last_1_var_1_78 < stepLocal_10) {
  if (! last_1_var_1_65) {
   var_1_42 = (((((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) < (var_1_15)) ? ((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) : (var_1_15)));
  } else {
   var_1_42 = var_1_4;
  }
 } else {
  var_1_42 = var_1_16;
 }
 if (((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6))) <= (var_1_13 - var_1_14)) {
  var_1_12 = (var_1_15 - var_1_16);
 } else {
  var_1_12 = (((((var_1_6 + var_1_5)) > (var_1_4)) ? ((var_1_6 + var_1_5)) : (var_1_4)));
 }
 unsigned char stepLocal_5 = var_1_20;
 signed short int stepLocal_4 = var_1_22;
 if (stepLocal_5 && var_1_21) {
  var_1_19 = (var_1_22 + ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))));
 } else {
  if ((8 + var_1_24) == stepLocal_4) {
   var_1_19 = ((var_1_25 - var_1_26) - var_1_27);
  }
 }
 if (var_1_76) {
  var_1_28 = (var_1_6 + var_1_5);
 }
 unsigned long int stepLocal_6 = var_1_11 ^ var_1_23;
 if (-64 >= stepLocal_6) {
  var_1_29 = ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25)));
 }
 var_1_43 = ((((((9.999999999999996E14) < (var_1_44)) ? (9.999999999999996E14) : (var_1_44))) + ((((100.6) < 0 ) ? -(100.6) : (100.6)))) - var_1_16);
 var_1_54 = (var_1_36 - (var_1_33 + var_1_32));
 if (var_1_6 <= var_1_46) {
  var_1_55 = ((((var_1_5) < (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4)))))))) ? (var_1_5) : (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4)))))))));
 } else {
  var_1_55 = (255.5 - (var_1_44 + var_1_56));
 }
 if (var_1_42 != var_1_60) {
  var_1_62 = (var_1_60 - var_1_44);
 } else {
  var_1_62 = (var_1_4 + var_1_5);
 }
 var_1_69 = (var_1_59 - ((var_1_70 + var_1_71) - var_1_56));
 if (((var_1_51 + var_1_73) - var_1_52) == var_1_33) {
  var_1_72 = (((((var_1_51) > (var_1_73)) ? (var_1_51) : (var_1_73))) + ((((var_1_50) < (8)) ? (var_1_50) : (8))));
 } else {
  if (var_1_11 != var_1_51) {
   var_1_72 = (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_50);
  } else {
   var_1_72 = var_1_47;
  }
 }
 if (var_1_65) {
  var_1_75 = var_1_73;
 } else {
  var_1_75 = var_1_34;
 }
 unsigned long int stepLocal_20 = var_1_53;
 if ((- 127.625) >= var_1_42) {
  if ((var_1_18 / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) < stepLocal_20) {
   if (var_1_65) {
    var_1_78 = var_1_58;
   } else {
    var_1_78 = var_1_39;
   }
  } else {
   var_1_78 = last_1_var_1_78;
  }
 } else {
  var_1_78 = var_1_8;
 }
 if (var_1_78 < (var_1_33 % var_1_58)) {
  var_1_74 = ((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52)));
 } else {
  var_1_74 = var_1_51;
 }
 unsigned long int stepLocal_9 = var_1_10;
 signed long int stepLocal_8 = 10;
 if (stepLocal_9 <= var_1_27) {
  var_1_37 = ((var_1_25 + ((((var_1_74) > (var_1_29)) ? (var_1_74) : (var_1_29)))) - var_1_33);
 } else {
  if (var_1_74 <= stepLocal_8) {
   var_1_37 = ((var_1_41 + var_1_36) - var_1_18);
  }
 }
 signed short int stepLocal_19 = var_1_22;
 if ((((((var_1_37) < (var_1_49)) ? (var_1_37) : (var_1_49))) / ((((var_1_35) > (var_1_58)) ? (var_1_35) : (var_1_58)))) <= stepLocal_19) {
  if (var_1_67) {
   var_1_68 = (((((var_1_25) > (var_1_36)) ? (var_1_25) : (var_1_36))) - (var_1_39 - 5));
  }
 }
 signed char stepLocal_13 = var_1_49;
 unsigned short int stepLocal_12 = var_1_74;
 unsigned long int stepLocal_11 = var_1_53;
 if (stepLocal_12 != (var_1_41 / var_1_35)) {
  if (stepLocal_13 > var_1_53) {
   if (stepLocal_11 < (var_1_58 - var_1_26)) {
    var_1_57 = (((((var_1_56) > (var_1_44)) ? (var_1_56) : (var_1_44))) - (((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))) + var_1_61));
   }
  }
 }
 signed long int stepLocal_2 = var_1_74 - var_1_8;
 signed long int stepLocal_1 = 32;
 if (stepLocal_1 > var_1_74) {
  if ((- var_1_68) != stepLocal_2) {
   var_1_7 = ((((((((5u) < (var_1_8)) ? (5u) : (var_1_8)))) < (var_1_68)) ? (((((5u) < (var_1_8)) ? (5u) : (var_1_8)))) : (var_1_68)));
  } else {
   var_1_7 = (var_1_9 - 32u);
  }
 } else {
  var_1_7 = ((((((((var_1_8) > ((var_1_68 + var_1_74))) ? (var_1_8) : ((var_1_68 + var_1_74))))) < ((var_1_9 - (var_1_10 - var_1_11)))) ? (((((var_1_8) > ((var_1_68 + var_1_74))) ? (var_1_8) : ((var_1_68 + var_1_74))))) : ((var_1_9 - (var_1_10 - var_1_11)))));
 }
 unsigned long int stepLocal_3 = (((8u) < (var_1_7)) ? (8u) : (var_1_7));
 if ((var_1_8 + var_1_10) < stepLocal_3) {
  var_1_17 = var_1_18;
 }
 if (var_1_76) {
  if (var_1_16 <= (var_1_14 / var_1_46)) {
   if (((var_1_7 + var_1_78) + var_1_68) >= var_1_41) {
    var_1_45 = var_1_47;
   }
  } else {
   if (((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35))) > var_1_8) {
    var_1_45 = var_1_47;
   } else {
    var_1_45 = (var_1_48 + 4);
   }
  }
 } else {
  if (var_1_76) {
   var_1_45 = ((((var_1_47) > ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50))) ? (var_1_47) : ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50))));
  } else {
   var_1_45 = ((2 + var_1_51) - var_1_52);
  }
 }
 unsigned char stepLocal_17 = var_1_43 < var_1_14;
 unsigned char stepLocal_16 = var_1_76;
 signed long int stepLocal_15 = var_1_23 / var_1_33;
 signed long int stepLocal_14 = var_1_39 + -32;
 if (var_1_65 || stepLocal_16) {
  if (var_1_61 >= (- var_1_57)) {
   var_1_63 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 } else {
  if (stepLocal_15 <= var_1_38) {
   if (stepLocal_17 || var_1_76) {
    var_1_63 = ((((var_1_6) > (var_1_44)) ? (var_1_6) : (var_1_44)));
   } else {
    var_1_63 = (var_1_56 - var_1_61);
   }
  } else {
   if (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) > stepLocal_14) {
    if (var_1_61 > var_1_56) {
     var_1_63 = (var_1_60 - var_1_61);
    }
   } else {
    var_1_63 = 7.25f;
   }
  }
 }
 unsigned long int stepLocal_0 = var_1_29;
 if (stepLocal_0 >= var_1_17) {
  var_1_1 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) < 0 ) ? -(((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) : (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6)));
 } else {
  var_1_1 = (var_1_4 + var_1_5);
 }
 unsigned char stepLocal_7 = var_1_76;
 if (stepLocal_7 && var_1_65) {
  if (var_1_4 == var_1_1) {
   var_1_30 = ((((((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) < ((var_1_35 - 32))) ? (((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) : ((var_1_35 - 32))));
  } else {
   var_1_30 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
  }
 } else {
  var_1_30 = (var_1_34 + var_1_36);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -16383);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -16383);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -16383);
 assume_abort_if_not(var_1_24 <= 16383);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 16382);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -1);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 1073741823);
 assume_abort_if_not(var_1_39 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 2147483646);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1073741823);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -127);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -63);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -63);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -63);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 63);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 126);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65535);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 1);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 2305843.009213691400e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 2305843.009213691400e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 63);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_42 = var_1_42;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
}
int property(void) {
 return ((((((((((((((((((((((((((var_1_29 >= var_1_17) ? (var_1_1 == ((double) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) < 0 ) ? -(((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) : (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6))))) : (var_1_1 == ((double) (var_1_4 + var_1_5)))) && ((32 > var_1_74) ? (((- var_1_68) != (var_1_74 - var_1_8)) ? (var_1_7 == ((unsigned long int) ((((((((5u) < (var_1_8)) ? (5u) : (var_1_8)))) < (var_1_68)) ? (((((5u) < (var_1_8)) ? (5u) : (var_1_8)))) : (var_1_68))))) : (var_1_7 == ((unsigned long int) (var_1_9 - 32u)))) : (var_1_7 == ((unsigned long int) ((((((((var_1_8) > ((var_1_68 + var_1_74))) ? (var_1_8) : ((var_1_68 + var_1_74))))) < ((var_1_9 - (var_1_10 - var_1_11)))) ? (((((var_1_8) > ((var_1_68 + var_1_74))) ? (var_1_8) : ((var_1_68 + var_1_74))))) : ((var_1_9 - (var_1_10 - var_1_11))))))))) && ((((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6))) <= (var_1_13 - var_1_14)) ? (var_1_12 == ((double) (var_1_15 - var_1_16))) : (var_1_12 == ((double) (((((var_1_6 + var_1_5)) > (var_1_4)) ? ((var_1_6 + var_1_5)) : (var_1_4))))))) && (((var_1_8 + var_1_10) < ((((8u) < (var_1_7)) ? (8u) : (var_1_7)))) ? (var_1_17 == ((unsigned short int) var_1_18)) : 1)) && ((var_1_20 && var_1_21) ? (var_1_19 == ((signed short int) (var_1_22 + ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))) : (((8 + var_1_24) == var_1_22) ? (var_1_19 == ((signed short int) ((var_1_25 - var_1_26) - var_1_27))) : 1))) && (var_1_76 ? (var_1_28 == ((float) (var_1_6 + var_1_5))) : 1)) && ((-64 >= (var_1_11 ^ var_1_23)) ? (var_1_29 == ((unsigned long int) ((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))))) : 1)) && ((var_1_76 && var_1_65) ? ((var_1_4 == var_1_1) ? (var_1_30 == ((unsigned char) ((((((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) < ((var_1_35 - 32))) ? (((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) : ((var_1_35 - 32)))))) : (var_1_30 == ((unsigned char) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) : (var_1_30 == ((unsigned char) (var_1_34 + var_1_36))))) && ((var_1_10 <= var_1_27) ? (var_1_37 == ((signed long int) ((var_1_25 + ((((var_1_74) > (var_1_29)) ? (var_1_74) : (var_1_29)))) - var_1_33))) : ((var_1_74 <= 10) ? (var_1_37 == ((signed long int) ((var_1_41 + var_1_36) - var_1_18))) : 1))) && ((last_1_var_1_78 < ((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9)))) ? ((! last_1_var_1_65) ? (var_1_42 == ((double) (((((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) < (var_1_15)) ? ((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) : (var_1_15))))) : (var_1_42 == ((double) var_1_4))) : (var_1_42 == ((double) var_1_16)))) && (var_1_43 == ((double) ((((((9.999999999999996E14) < (var_1_44)) ? (9.999999999999996E14) : (var_1_44))) + ((((100.6) < 0 ) ? -(100.6) : (100.6)))) - var_1_16)))) && (var_1_76 ? ((var_1_16 <= (var_1_14 / var_1_46)) ? ((((var_1_7 + var_1_78) + var_1_68) >= var_1_41) ? (var_1_45 == ((signed char) var_1_47)) : 1) : ((((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35))) > var_1_8) ? (var_1_45 == ((signed char) var_1_47)) : (var_1_45 == ((signed char) (var_1_48 + 4))))) : (var_1_76 ? (var_1_45 == ((signed char) ((((var_1_47) > ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50))) ? (var_1_47) : ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50)))))) : (var_1_45 == ((signed char) ((2 + var_1_51) - var_1_52)))))) && ((9.5f != var_1_44) ? (((last_1_var_1_42 / var_1_46) > last_1_var_1_57) ? ((var_1_14 < (last_1_var_1_42 * (var_1_6 / var_1_46))) ? (var_1_53 == ((unsigned long int) (((((var_1_51) < ((var_1_10 - var_1_35))) ? (var_1_51) : ((var_1_10 - var_1_35)))) + var_1_40))) : 1) : 1) : 1)) && (var_1_54 == ((signed short int) (var_1_36 - (var_1_33 + var_1_32))))) && ((var_1_6 <= var_1_46) ? (var_1_55 == ((double) ((((var_1_5) < (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4)))))))) ? (var_1_5) : (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))))))))) : (var_1_55 == ((double) (255.5 - (var_1_44 + var_1_56)))))) && ((var_1_74 != (var_1_41 / var_1_35)) ? ((var_1_49 > var_1_53) ? ((var_1_53 < (var_1_58 - var_1_26)) ? (var_1_57 == ((float) (((((var_1_56) > (var_1_44)) ? (var_1_56) : (var_1_44))) - (((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))) + var_1_61)))) : 1) : 1) : 1)) && ((var_1_42 != var_1_60) ? (var_1_62 == ((float) (var_1_60 - var_1_44))) : (var_1_62 == ((float) (var_1_4 + var_1_5))))) && ((var_1_65 || var_1_76) ? ((var_1_61 >= (- var_1_57)) ? (var_1_63 == ((float) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : 1) : (((var_1_23 / var_1_33) <= var_1_38) ? (((var_1_43 < var_1_14) || var_1_76) ? (var_1_63 == ((float) ((((var_1_6) > (var_1_44)) ? (var_1_6) : (var_1_44))))) : (var_1_63 == ((float) (var_1_56 - var_1_61)))) : ((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) > (var_1_39 + -32)) ? ((var_1_61 > var_1_56) ? (var_1_63 == ((float) (var_1_60 - var_1_61))) : 1) : (var_1_63 == ((float) 7.25f)))))) && ((var_1_38 <= ((var_1_48 + var_1_32) | var_1_35)) ? (var_1_65 == ((unsigned char) (last_1_var_1_76 || var_1_66))) : (var_1_65 == ((unsigned char) (((var_1_5 != last_1_var_1_55) || var_1_66) && var_1_67))))) && (((((((var_1_37) < (var_1_49)) ? (var_1_37) : (var_1_49))) / ((((var_1_35) > (var_1_58)) ? (var_1_35) : (var_1_58)))) <= var_1_22) ? (var_1_67 ? (var_1_68 == ((signed long int) (((((var_1_25) > (var_1_36)) ? (var_1_25) : (var_1_36))) - (var_1_39 - 5)))) : 1) : 1)) && (var_1_69 == ((float) (var_1_59 - ((var_1_70 + var_1_71) - var_1_56))))) && ((((var_1_51 + var_1_73) - var_1_52) == var_1_33) ? (var_1_72 == ((signed char) (((((var_1_51) > (var_1_73)) ? (var_1_51) : (var_1_73))) + ((((var_1_50) < (8)) ? (var_1_50) : (8)))))) : ((var_1_11 != var_1_51) ? (var_1_72 == ((signed char) (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_50))) : (var_1_72 == ((signed char) var_1_47))))) && ((var_1_78 < (var_1_33 % var_1_58)) ? (var_1_74 == ((unsigned short int) ((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) : (var_1_74 == ((unsigned short int) var_1_51)))) && (var_1_65 ? (var_1_75 == ((unsigned char) var_1_73)) : (var_1_75 == ((unsigned char) var_1_34)))) && (var_1_65 ? (var_1_76 == ((unsigned char) var_1_77)) : (var_1_76 == ((unsigned char) var_1_66)))) && (((- 127.625) >= var_1_42) ? (((var_1_18 / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) < var_1_53) ? (var_1_65 ? (var_1_78 == ((unsigned long int) var_1_58)) : (var_1_78 == ((unsigned long int) var_1_39))) : (var_1_78 == ((unsigned long int) last_1_var_1_78))) : (var_1_78 == ((unsigned long int) var_1_8)))
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
