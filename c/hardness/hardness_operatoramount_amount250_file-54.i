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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 1;
double var_1_3 = 64.4;
double var_1_4 = -0.625;
double var_1_5 = 255.6;
unsigned short int var_1_6 = 36750;
unsigned short int var_1_7 = 1;
unsigned short int var_1_8 = 64;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 2;
signed short int var_1_11 = -128;
signed short int var_1_12 = 5;
signed short int var_1_13 = -16;
signed short int var_1_14 = -64;
unsigned long int var_1_15 = 100000;
signed short int var_1_16 = 50;
signed short int var_1_17 = 32;
unsigned long int var_1_18 = 1000000000;
unsigned long int var_1_19 = 1000000000;
unsigned long int var_1_20 = 32;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 3488704484;
unsigned char var_1_23 = 0;
float var_1_24 = 1000000000.75;
unsigned long int var_1_25 = 1614694431;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 2;
unsigned char var_1_28 = 10;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 32;
signed char var_1_31 = -5;
signed char var_1_32 = 1;
signed char var_1_33 = -16;
signed char var_1_34 = 16;
signed char var_1_35 = 25;
signed char var_1_36 = 16;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 0;
unsigned short int var_1_39 = 64;
unsigned short int var_1_40 = 60876;
unsigned long int var_1_41 = 64;
unsigned long int var_1_42 = 100;
double var_1_43 = 2.3;
float var_1_44 = 9999.125;
unsigned char var_1_45 = 50;
float var_1_46 = 25.6;
float var_1_47 = 2.5;
float var_1_48 = 24.75;
float var_1_49 = 0.0;
float var_1_50 = 15.625;
signed short int var_1_51 = 128;
unsigned long int var_1_52 = 25;
unsigned char var_1_53 = 200;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 8;
unsigned long int var_1_57 = 128;
float var_1_58 = 0.0;
unsigned long int var_1_59 = 3635807131;
double var_1_60 = 16.5;
signed char var_1_61 = -32;
unsigned short int last_1_var_1_1 = 32;
unsigned long int last_1_var_1_42 = 100;
unsigned long int last_1_var_1_52 = 25;
unsigned char last_1_var_1_53 = 200;
double last_1_var_1_60 = 16.5;
void initially(void) {
}
void step(void) {
 if (var_1_21) {
  var_1_52 = last_1_var_1_53;
 }
 unsigned long int stepLocal_8 = var_1_8 - last_1_var_1_52;
 unsigned short int stepLocal_7 = var_1_6;
 if (var_1_21) {
  var_1_42 = 128u;
 } else {
  if (stepLocal_7 >= last_1_var_1_1) {
   var_1_42 = 0u;
  } else {
   if (((- last_1_var_1_60) / ((((var_1_24) > (var_1_43)) ? (var_1_24) : (var_1_43)))) > 0.775) {
    if ((((((var_1_6 - var_1_27)) < (last_1_var_1_53)) ? ((var_1_6 - var_1_27)) : (last_1_var_1_53))) <= stepLocal_8) {
     var_1_42 = ((((var_1_6) > (var_1_25)) ? (var_1_6) : (var_1_25)));
    } else {
     if (var_1_23) {
      var_1_42 = (var_1_22 - var_1_27);
     } else {
      var_1_42 = last_1_var_1_42;
     }
    }
   }
  }
 }
 unsigned char stepLocal_0 = ! (var_1_5 >= var_1_4);
 if (! ((- 9.9999999999925E11) >= var_1_3)) {
  if (var_1_3 >= var_1_4) {
   if (var_1_3 < 7.5) {
    if (var_1_2 && stepLocal_0) {
     var_1_1 = (var_1_6 - var_1_7);
    } else {
     var_1_1 = ((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))));
    }
   } else {
    var_1_1 = var_1_6;
   }
  } else {
   var_1_1 = var_1_9;
  }
 } else {
  var_1_1 = var_1_10;
 }
 if (var_1_8 > var_1_10) {
  if (var_1_2) {
   var_1_11 = (var_1_12 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))));
  } else {
   var_1_11 = var_1_12;
  }
 } else {
  var_1_11 = ((((var_1_13) < ((var_1_14 + -2))) ? (var_1_13) : ((var_1_14 + -2))));
 }
 signed long int stepLocal_1 = (var_1_12 - var_1_7) / ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 if (var_1_14 > stepLocal_1) {
  var_1_15 = ((((((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10)))) < (var_1_7)) ? (((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10)))) : (var_1_7)));
 } else {
  var_1_15 = (((var_1_18 + var_1_19) - 5u) + 200u);
 }
 if (var_1_21) {
  var_1_31 = (((((var_1_32 - var_1_27)) < (((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))))) ? ((var_1_32 - var_1_27)) : (((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))))));
 } else {
  var_1_31 = ((((((-4 + var_1_35) + var_1_36)) > (((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27))))) ? (((-4 + var_1_35) + var_1_36)) : (((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27))))));
 }
 unsigned long int stepLocal_6 = var_1_18 / var_1_6;
 if (stepLocal_6 >= ((((64u) < 0 ) ? -(64u) : (64u)))) {
  if (var_1_23) {
   var_1_39 = ((((((var_1_40 - var_1_30)) < (52932)) ? ((var_1_40 - var_1_30)) : (52932))) - var_1_38);
  }
 } else {
  var_1_39 = (var_1_7 + var_1_27);
 }
 if (var_1_21) {
  if ((var_1_35 / var_1_17) > (((((-10) > (var_1_30)) ? (-10) : (var_1_30))) / ((((var_1_27) > (var_1_16)) ? (var_1_27) : (var_1_16))))) {
   var_1_41 = (3724095905u - var_1_10);
  }
 } else {
  var_1_41 = (var_1_22 - 10u);
 }
 unsigned char stepLocal_13 = var_1_26;
 if (stepLocal_13 < (var_1_6 ^ var_1_10)) {
  var_1_60 = (var_1_47 - (var_1_50 + var_1_46));
 } else {
  var_1_60 = (2.4 - 9.2);
 }
 var_1_61 = 2;
 unsigned long int stepLocal_12 = var_1_42;
 if (var_1_43 == (((((var_1_50 + var_1_47)) < ((var_1_24 + var_1_48))) ? ((var_1_50 + var_1_47)) : ((var_1_24 + var_1_48))))) {
  var_1_57 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
 } else {
  if (var_1_6 < stepLocal_12) {
   if (((var_1_50 + var_1_47) - (var_1_58 - 256.2f)) <= var_1_60) {
    var_1_57 = (var_1_22 - ((var_1_18 + var_1_19) - var_1_6));
   } else {
    var_1_57 = ((var_1_59 - var_1_7) - var_1_52);
   }
  } else {
   var_1_57 = 1u;
  }
 }
 if (var_1_23) {
  if (((var_1_1 / var_1_26) / ((((var_1_45) < (var_1_17)) ? (var_1_45) : (var_1_17)))) <= ((~ var_1_6) * ((((var_1_14) > (var_1_16)) ? (var_1_14) : (var_1_16))))) {
   if (var_1_45 < var_1_57) {
    if (1 <= var_1_8) {
     var_1_44 = ((var_1_46 - (63.625f + var_1_47)) + var_1_48);
    }
   } else {
    var_1_44 = ((var_1_49 - (var_1_47 + var_1_50)) - var_1_46);
   }
  }
 } else {
  if (var_1_2) {
   var_1_44 = ((var_1_47 - var_1_46) + ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))));
  }
 }
 if (var_1_34 != (var_1_32 - var_1_27)) {
  var_1_51 = (var_1_35 + (var_1_30 - var_1_29));
 } else {
  if (var_1_40 >= var_1_57) {
   if (var_1_2) {
    var_1_51 = (((((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))) < 0 ) ? -((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))) : ((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11)))));
   } else {
    var_1_51 = (var_1_45 + (var_1_38 - var_1_42));
   }
  } else {
   var_1_51 = (var_1_45 + var_1_29);
  }
 }
 signed long int stepLocal_4 = var_1_10 % (var_1_26 - var_1_27);
 unsigned long int stepLocal_3 = var_1_18;
 unsigned char stepLocal_2 = var_1_2;
 if (stepLocal_2 && (((((var_1_51) > (var_1_6)) ? (var_1_51) : (var_1_6))) < var_1_14)) {
  if (var_1_2) {
   if (var_1_13 > stepLocal_3) {
    if (var_1_21) {
     if (var_1_5 >= var_1_4) {
      var_1_20 = ((((((((var_1_1) > (var_1_18)) ? (var_1_1) : (var_1_18)))) > ((var_1_8 + var_1_7))) ? (((((var_1_1) > (var_1_18)) ? (var_1_1) : (var_1_18)))) : ((var_1_8 + var_1_7))));
     }
    } else {
     var_1_20 = (var_1_22 - var_1_9);
    }
   }
  } else {
   if (! var_1_23) {
    if ((var_1_4 / var_1_24) > var_1_3) {
     var_1_20 = ((var_1_25 - var_1_19) + var_1_18);
    } else {
     var_1_20 = (var_1_10 + ((((var_1_1) > (1u)) ? (var_1_1) : (1u))));
    }
   } else {
    var_1_20 = var_1_22;
   }
  }
 } else {
  if (stepLocal_4 >= (~ var_1_14)) {
   var_1_20 = var_1_7;
  } else {
   var_1_20 = (var_1_10 + ((((var_1_26) < (var_1_1)) ? (var_1_26) : (var_1_1))));
  }
 }
 if ((var_1_57 ^ -64) < ((3595467207u - var_1_7) - (var_1_20 + var_1_27))) {
  var_1_28 = (var_1_27 + var_1_29);
 } else {
  var_1_28 = var_1_30;
 }
 unsigned long int stepLocal_5 = (var_1_20 % var_1_27) + var_1_29;
 if (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) >= stepLocal_5) {
  var_1_37 = ((((((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)))) < (var_1_38)) ? (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)))) : (var_1_38)));
 }
 unsigned long int stepLocal_11 = (((var_1_20) > (8)) ? (var_1_20) : (8));
 unsigned long int stepLocal_10 = ((((var_1_22) > (var_1_7)) ? (var_1_22) : (var_1_7))) / var_1_26;
 unsigned long int stepLocal_9 = var_1_15;
 if (var_1_1 > stepLocal_10) {
  if (stepLocal_11 < (var_1_34 + var_1_15)) {
   var_1_53 = (((((((((var_1_54 - var_1_29)) < (var_1_30)) ? ((var_1_54 - var_1_29)) : (var_1_30)))) > ((var_1_55 - var_1_27))) ? ((((((var_1_54 - var_1_29)) < (var_1_30)) ? ((var_1_54 - var_1_29)) : (var_1_30)))) : ((var_1_55 - var_1_27))));
  } else {
   var_1_53 = var_1_55;
  }
 } else {
  if (stepLocal_9 >= var_1_30) {
   var_1_53 = (var_1_29 + ((((var_1_27) > (var_1_56)) ? (var_1_27) : (var_1_56))));
  } else {
   if (var_1_23) {
    var_1_53 = (var_1_55 - var_1_29);
   } else {
    var_1_53 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32766);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -16383);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -32768);
 assume_abort_if_not(var_1_16 <= 32767);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32768);
 assume_abort_if_not(var_1_17 <= 32767);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 536870911);
 assume_abort_if_not(var_1_18 <= 1073741824);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 536870912);
 assume_abort_if_not(var_1_19 <= 1073741823);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 assume_abort_if_not(var_1_24 != 0.0F);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 255);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 126);
 assume_abort_if_not(var_1_27 != 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -1);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -127);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -31);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 49150);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 assume_abort_if_not(var_1_43 != 0.0F);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 255);
 assume_abort_if_not(var_1_45 != 0);
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 4611686.018427383000e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 127);
 assume_abort_if_not(var_1_55 <= 254);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 4611686.018427388000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 3221225470);
 assume_abort_if_not(var_1_59 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_60 = var_1_60;
}
int property(void) {
 return (((((((((((((((((! ((- 9.9999999999925E11) >= var_1_3)) ? ((var_1_3 >= var_1_4) ? ((var_1_3 < 7.5) ? ((var_1_2 && (! (var_1_5 >= var_1_4))) ? (var_1_1 == ((unsigned short int) (var_1_6 - var_1_7))) : (var_1_1 == ((unsigned short int) ((((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) > (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)))) : (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))))))) : (var_1_1 == ((unsigned short int) var_1_6))) : (var_1_1 == ((unsigned short int) var_1_9))) : (var_1_1 == ((unsigned short int) var_1_10))) && ((var_1_8 > var_1_10) ? (var_1_2 ? (var_1_11 == ((signed short int) (var_1_12 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) : (var_1_11 == ((signed short int) var_1_12))) : (var_1_11 == ((signed short int) ((((var_1_13) < ((var_1_14 + -2))) ? (var_1_13) : ((var_1_14 + -2)))))))) && ((var_1_14 > ((var_1_12 - var_1_7) / ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (var_1_15 == ((unsigned long int) ((((((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10)))) < (var_1_7)) ? (((((var_1_8) < (var_1_10)) ? (var_1_8) : (var_1_10)))) : (var_1_7))))) : (var_1_15 == ((unsigned long int) (((var_1_18 + var_1_19) - 5u) + 200u))))) && ((var_1_2 && (((((var_1_51) > (var_1_6)) ? (var_1_51) : (var_1_6))) < var_1_14)) ? (var_1_2 ? ((var_1_13 > var_1_18) ? (var_1_21 ? ((var_1_5 >= var_1_4) ? (var_1_20 == ((unsigned long int) ((((((((var_1_1) > (var_1_18)) ? (var_1_1) : (var_1_18)))) > ((var_1_8 + var_1_7))) ? (((((var_1_1) > (var_1_18)) ? (var_1_1) : (var_1_18)))) : ((var_1_8 + var_1_7)))))) : 1) : (var_1_20 == ((unsigned long int) (var_1_22 - var_1_9)))) : 1) : ((! var_1_23) ? (((var_1_4 / var_1_24) > var_1_3) ? (var_1_20 == ((unsigned long int) ((var_1_25 - var_1_19) + var_1_18))) : (var_1_20 == ((unsigned long int) (var_1_10 + ((((var_1_1) > (1u)) ? (var_1_1) : (1u))))))) : (var_1_20 == ((unsigned long int) var_1_22)))) : (((var_1_10 % (var_1_26 - var_1_27)) >= (~ var_1_14)) ? (var_1_20 == ((unsigned long int) var_1_7)) : (var_1_20 == ((unsigned long int) (var_1_10 + ((((var_1_26) < (var_1_1)) ? (var_1_26) : (var_1_1))))))))) && (((var_1_57 ^ -64) < ((3595467207u - var_1_7) - (var_1_20 + var_1_27))) ? (var_1_28 == ((unsigned char) (var_1_27 + var_1_29))) : (var_1_28 == ((unsigned char) var_1_30)))) && (var_1_21 ? (var_1_31 == ((signed char) (((((var_1_32 - var_1_27)) < (((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))))) ? ((var_1_32 - var_1_27)) : (((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)))))))) : (var_1_31 == ((signed char) ((((((-4 + var_1_35) + var_1_36)) > (((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27))))) ? (((-4 + var_1_35) + var_1_36)) : (((((var_1_32) > (var_1_27)) ? (var_1_32) : (var_1_27)))))))))) && ((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) >= ((var_1_20 % var_1_27) + var_1_29)) ? (var_1_37 == ((unsigned char) ((((((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)))) < (var_1_38)) ? (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)))) : (var_1_38))))) : 1)) && (((var_1_18 / var_1_6) >= ((((64u) < 0 ) ? -(64u) : (64u)))) ? (var_1_23 ? (var_1_39 == ((unsigned short int) ((((((var_1_40 - var_1_30)) < (52932)) ? ((var_1_40 - var_1_30)) : (52932))) - var_1_38))) : 1) : (var_1_39 == ((unsigned short int) (var_1_7 + var_1_27))))) && (var_1_21 ? (((var_1_35 / var_1_17) > (((((-10) > (var_1_30)) ? (-10) : (var_1_30))) / ((((var_1_27) > (var_1_16)) ? (var_1_27) : (var_1_16))))) ? (var_1_41 == ((unsigned long int) (3724095905u - var_1_10))) : 1) : (var_1_41 == ((unsigned long int) (var_1_22 - 10u))))) && (var_1_21 ? (var_1_42 == ((unsigned long int) 128u)) : ((var_1_6 >= last_1_var_1_1) ? (var_1_42 == ((unsigned long int) 0u)) : ((((- last_1_var_1_60) / ((((var_1_24) > (var_1_43)) ? (var_1_24) : (var_1_43)))) > 0.775) ? (((((((var_1_6 - var_1_27)) < (last_1_var_1_53)) ? ((var_1_6 - var_1_27)) : (last_1_var_1_53))) <= (var_1_8 - last_1_var_1_52)) ? (var_1_42 == ((unsigned long int) ((((var_1_6) > (var_1_25)) ? (var_1_6) : (var_1_25))))) : (var_1_23 ? (var_1_42 == ((unsigned long int) (var_1_22 - var_1_27))) : (var_1_42 == ((unsigned long int) last_1_var_1_42)))) : 1)))) && (var_1_23 ? ((((var_1_1 / var_1_26) / ((((var_1_45) < (var_1_17)) ? (var_1_45) : (var_1_17)))) <= ((~ var_1_6) * ((((var_1_14) > (var_1_16)) ? (var_1_14) : (var_1_16))))) ? ((var_1_45 < var_1_57) ? ((1 <= var_1_8) ? (var_1_44 == ((float) ((var_1_46 - (63.625f + var_1_47)) + var_1_48))) : 1) : (var_1_44 == ((float) ((var_1_49 - (var_1_47 + var_1_50)) - var_1_46)))) : 1) : (var_1_2 ? (var_1_44 == ((float) ((var_1_47 - var_1_46) + ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))))) : 1))) && ((var_1_34 != (var_1_32 - var_1_27)) ? (var_1_51 == ((signed short int) (var_1_35 + (var_1_30 - var_1_29)))) : ((var_1_40 >= var_1_57) ? (var_1_2 ? (var_1_51 == ((signed short int) (((((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))) < 0 ) ? -((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))) : ((((var_1_13) < (var_1_11)) ? (var_1_13) : (var_1_11))))))) : (var_1_51 == ((signed short int) (var_1_45 + (var_1_38 - var_1_42))))) : (var_1_51 == ((signed short int) (var_1_45 + var_1_29)))))) && (var_1_21 ? (var_1_52 == ((unsigned long int) last_1_var_1_53)) : 1)) && ((var_1_1 > (((((var_1_22) > (var_1_7)) ? (var_1_22) : (var_1_7))) / var_1_26)) ? ((((((var_1_20) > (8)) ? (var_1_20) : (8))) < (var_1_34 + var_1_15)) ? (var_1_53 == ((unsigned char) (((((((((var_1_54 - var_1_29)) < (var_1_30)) ? ((var_1_54 - var_1_29)) : (var_1_30)))) > ((var_1_55 - var_1_27))) ? ((((((var_1_54 - var_1_29)) < (var_1_30)) ? ((var_1_54 - var_1_29)) : (var_1_30)))) : ((var_1_55 - var_1_27)))))) : (var_1_53 == ((unsigned char) var_1_55))) : ((var_1_15 >= var_1_30) ? (var_1_53 == ((unsigned char) (var_1_29 + ((((var_1_27) > (var_1_56)) ? (var_1_27) : (var_1_56)))))) : (var_1_23 ? (var_1_53 == ((unsigned char) (var_1_55 - var_1_29))) : (var_1_53 == ((unsigned char) ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))))))) && ((var_1_43 == (((((var_1_50 + var_1_47)) < ((var_1_24 + var_1_48))) ? ((var_1_50 + var_1_47)) : ((var_1_24 + var_1_48))))) ? (var_1_57 == ((unsigned long int) ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) : ((var_1_6 < var_1_42) ? ((((var_1_50 + var_1_47) - (var_1_58 - 256.2f)) <= var_1_60) ? (var_1_57 == ((unsigned long int) (var_1_22 - ((var_1_18 + var_1_19) - var_1_6)))) : (var_1_57 == ((unsigned long int) ((var_1_59 - var_1_7) - var_1_52)))) : (var_1_57 == ((unsigned long int) 1u))))) && ((var_1_26 < (var_1_6 ^ var_1_10)) ? (var_1_60 == ((double) (var_1_47 - (var_1_50 + var_1_46)))) : (var_1_60 == ((double) (2.4 - 9.2))))) && (var_1_61 == ((signed char) 2))
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
