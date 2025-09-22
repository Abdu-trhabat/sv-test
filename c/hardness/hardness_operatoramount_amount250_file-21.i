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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 1000000000;
signed long int var_1_7 = 2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 100;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 64;
unsigned long int var_1_12 = 256;
signed short int var_1_13 = 256;
float var_1_14 = 5.75;
float var_1_15 = 8.6;
signed short int var_1_16 = 256;
signed short int var_1_17 = 500;
signed short int var_1_18 = 50;
signed short int var_1_19 = 5;
signed short int var_1_20 = 5;
signed short int var_1_21 = 10;
signed long int var_1_22 = -256;
signed long int var_1_23 = 2121421491;
unsigned char var_1_24 = 100;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 4;
unsigned char var_1_28 = 50;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 10;
unsigned long int var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
float var_1_36 = 0.25;
float var_1_38 = 255.5;
unsigned char var_1_39 = 32;
float var_1_40 = 16.75;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 0;
unsigned short int var_1_44 = 4;
double var_1_45 = 7.4;
double var_1_46 = 99999999999999.8;
double var_1_47 = 256.5;
double var_1_48 = -0.75;
signed short int var_1_49 = 4;
unsigned char var_1_50 = 1;
unsigned long int var_1_51 = 1;
unsigned long int var_1_52 = 0;
unsigned short int var_1_53 = 16;
signed char var_1_54 = 0;
signed char var_1_55 = 5;
unsigned long int var_1_56 = 16;
unsigned long int var_1_58 = 16;
float var_1_59 = 1.2;
double var_1_60 = 10000000000.4;
unsigned short int var_1_63 = 256;
unsigned char var_1_64 = 1;
unsigned short int var_1_65 = 0;
signed long int last_1_var_1_1 = 4;
unsigned char last_1_var_1_50 = 1;
unsigned short int last_1_var_1_53 = 16;
unsigned long int last_1_var_1_58 = 16;
double last_1_var_1_60 = 10000000000.4;
unsigned char last_1_var_1_64 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_64) {
  var_1_53 = ((((var_1_52) > ((last_1_var_1_53 + 2))) ? (var_1_52) : ((last_1_var_1_53 + 2))));
 }
 if (1 == (var_1_28 << var_1_6)) {
  if (last_1_var_1_50) {
   var_1_31 = (var_1_32 + ((var_1_18 + var_1_29) + var_1_11));
  } else {
   var_1_31 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  }
 } else {
  if ((var_1_21 + var_1_8) >= var_1_18) {
   if ((var_1_8 + ((((var_1_19) < (var_1_26)) ? (var_1_19) : (var_1_26)))) == last_1_var_1_58) {
    var_1_31 = var_1_18;
   }
  }
 }
 signed long int stepLocal_1 = var_1_6 / var_1_5;
 signed long int stepLocal_0 = last_1_var_1_1;
 if (last_1_var_1_1 >= stepLocal_1) {
  if (stepLocal_0 > var_1_7) {
   var_1_9 = (3867474704u - ((var_1_11 + var_1_12) + var_1_7));
  }
 }
 signed short int stepLocal_11 = var_1_18;
 unsigned char stepLocal_10 = var_1_29;
 signed long int stepLocal_9 = var_1_7;
 unsigned char stepLocal_8 = var_1_28;
 if (stepLocal_10 < var_1_11) {
  if (stepLocal_9 == ((((var_1_32) < ((var_1_42 / var_1_41))) ? (var_1_32) : ((var_1_42 / var_1_41))))) {
   var_1_43 = (! var_1_10);
  }
 } else {
  if (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) >= stepLocal_11) {
   if (stepLocal_8 > var_1_9) {
    var_1_43 = var_1_35;
   } else {
    var_1_43 = var_1_10;
   }
  }
 }
 if (var_1_43) {
  var_1_49 = (((((50) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (50) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) - var_1_26);
 } else {
  var_1_49 = var_1_9;
 }
 signed long int stepLocal_4 = var_1_6;
 signed short int stepLocal_3 = var_1_19;
 unsigned long int stepLocal_2 = 128u + var_1_12;
 if (stepLocal_2 > (var_1_16 / var_1_6)) {
  if ((var_1_8 * ((((var_1_5) > (var_1_18)) ? (var_1_5) : (var_1_18)))) < stepLocal_3) {
   var_1_22 = (var_1_16 + ((((var_1_12) > (-256)) ? (var_1_12) : (-256))));
  } else {
   if (stepLocal_4 < var_1_5) {
    var_1_22 = (var_1_17 - (var_1_23 - var_1_11));
   } else {
    var_1_22 = var_1_19;
   }
  }
 } else {
  var_1_22 = var_1_8;
 }
 unsigned long int stepLocal_5 = var_1_31;
 if (var_1_8 < stepLocal_5) {
  var_1_24 = (((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) - (((((var_1_27) < (16)) ? (var_1_27) : (16))) + (var_1_28 - var_1_29)));
 }
 var_1_30 = (! var_1_10);
 if (var_1_43) {
  var_1_63 = var_1_29;
 } else {
  var_1_63 = var_1_18;
 }
 var_1_65 = var_1_18;
 if ((10 / var_1_25) < var_1_65) {
  var_1_58 = (((((var_1_18 + (1284334790u - var_1_52))) < (var_1_53)) ? ((var_1_18 + (1284334790u - var_1_52))) : (var_1_53)));
 }
 unsigned long int stepLocal_19 = var_1_9;
 if ((var_1_49 + (- var_1_31)) == stepLocal_19) {
  var_1_59 = ((((((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48)))) > (var_1_38)) ? (((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48)))) : (var_1_38)));
 } else {
  var_1_59 = var_1_38;
 }
 if (var_1_59 >= var_1_14) {
  var_1_33 = ((var_1_10 || (! var_1_34)) && var_1_35);
 }
 unsigned long int stepLocal_18 = ((((var_1_31) > (var_1_22)) ? (var_1_31) : (var_1_22))) * var_1_17;
 if (stepLocal_18 != var_1_32) {
  var_1_56 = (var_1_16 + ((((1u) > (var_1_9)) ? (1u) : (var_1_9))));
 }
 unsigned long int stepLocal_21 = var_1_58;
 signed long int stepLocal_20 = 1;
 if ((var_1_5 & var_1_20) <= stepLocal_20) {
  if (stepLocal_21 <= ((((((((var_1_53) < (var_1_56)) ? (var_1_53) : (var_1_56)))) < (-2)) ? (((((var_1_53) < (var_1_56)) ? (var_1_53) : (var_1_56)))) : (-2)))) {
   var_1_64 = (var_1_33 && (var_1_34 || var_1_10));
  } else {
   var_1_64 = (! var_1_34);
  }
 } else {
  var_1_64 = var_1_35;
 }
 if (! var_1_64) {
  var_1_45 = ((((var_1_38) < (24.1)) ? (var_1_38) : (24.1)));
 } else {
  var_1_45 = ((((((var_1_46 - var_1_47)) > (var_1_38)) ? ((var_1_46 - var_1_47)) : (var_1_38))) + var_1_48);
 }
 if (((var_1_48 + 128.8f) * last_1_var_1_60) != var_1_45) {
  var_1_60 = 127.875;
 }
 signed long int stepLocal_17 = 4 + var_1_20;
 signed long int stepLocal_16 = var_1_17 << (var_1_51 - var_1_52);
 if (var_1_27 >= stepLocal_17) {
  if (var_1_47 <= var_1_60) {
   if (var_1_16 != stepLocal_16) {
    var_1_50 = (var_1_34 || var_1_10);
   }
  }
 }
 if (((((var_1_60) < (var_1_59)) ? (var_1_60) : (var_1_59))) > var_1_59) {
  var_1_1 = (((var_1_5 + var_1_6) - var_1_7) - var_1_8);
 } else {
  var_1_1 = (var_1_5 - 2);
 }
 signed long int stepLocal_6 = var_1_1 / ((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23)));
 if ((var_1_63 / var_1_25) >= stepLocal_6) {
  var_1_36 = (var_1_38 + 200.75f);
 }
 unsigned long int stepLocal_7 = var_1_9;
 if (stepLocal_7 == ((((10u) < ((var_1_26 / var_1_5))) ? (10u) : ((var_1_26 / var_1_5))))) {
  if (var_1_36 == (var_1_38 * (- var_1_14))) {
   var_1_39 = ((((var_1_26) < ((var_1_28 + var_1_27))) ? (var_1_26) : ((var_1_28 + var_1_27))));
  } else {
   if (var_1_59 >= var_1_38) {
    var_1_39 = var_1_26;
   } else {
    var_1_39 = (((((var_1_29 + var_1_28)) < (var_1_25)) ? ((var_1_29 + var_1_28)) : (var_1_25)));
   }
  }
 } else {
  if (((- var_1_36) / var_1_40) != var_1_59) {
   var_1_39 = ((var_1_41 + (var_1_42 - var_1_29)) - var_1_28);
  }
 }
 unsigned long int stepLocal_15 = var_1_27 - ((((var_1_12) < (var_1_32)) ? (var_1_12) : (var_1_32)));
 signed long int stepLocal_14 = ((((var_1_39 * var_1_6)) < (var_1_18)) ? ((var_1_39 * var_1_6)) : (var_1_18));
 signed long int stepLocal_13 = var_1_7 << var_1_27;
 unsigned long int stepLocal_12 = var_1_11;
 if (((((var_1_26) > (var_1_5)) ? (var_1_26) : (var_1_5))) >= stepLocal_13) {
  if (((var_1_39 * var_1_25) / var_1_42) < stepLocal_15) {
   if (var_1_38 == var_1_36) {
    var_1_44 = (var_1_39 + var_1_25);
   }
  } else {
   var_1_44 = var_1_16;
  }
 } else {
  if (stepLocal_12 >= ((var_1_27 + 2u) << var_1_20)) {
   if (var_1_25 != stepLocal_14) {
    var_1_44 = (var_1_16 + (((((var_1_53 + 256)) > ((var_1_25 + var_1_17))) ? ((var_1_53 + 256)) : ((var_1_25 + var_1_17)))));
   } else {
    var_1_44 = var_1_18;
   }
  } else {
   var_1_44 = ((var_1_17 + var_1_39) + var_1_18);
  }
 }
 if (var_1_40 <= var_1_60) {
  var_1_54 = (((((var_1_52) < ((var_1_29 + var_1_28))) ? (var_1_52) : ((var_1_29 + var_1_28)))) - var_1_26);
 } else {
  var_1_54 = ((var_1_29 + (10 + var_1_55)) - (var_1_52 + 16));
 }
 if (var_1_10) {
  if ((var_1_14 - var_1_15) >= ((var_1_60 + var_1_36) + var_1_60)) {
   var_1_13 = ((((((var_1_16 + var_1_17) - var_1_18)) > (var_1_19)) ? (((var_1_16 + var_1_17) - var_1_18)) : (var_1_19)));
  } else {
   var_1_13 = (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + (((((var_1_20 + var_1_21)) > (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? ((var_1_20 + var_1_21)) : (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))));
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 536870911);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 536870911);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 536870912);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 536870912);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -8191);
 assume_abort_if_not(var_1_20 <= 8192);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -8191);
 assume_abort_if_not(var_1_21 <= 8191);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 190);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 64);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 31);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 31);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 assume_abort_if_not(var_1_40 != 0.0F);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 63);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 95);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -461168.6018427383000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_60) < (var_1_59)) ? (var_1_60) : (var_1_59))) > var_1_59) ? (var_1_1 == ((signed long int) (((var_1_5 + var_1_6) - var_1_7) - var_1_8))) : (var_1_1 == ((signed long int) (var_1_5 - 2)))) && ((last_1_var_1_1 >= (var_1_6 / var_1_5)) ? ((last_1_var_1_1 > var_1_7) ? (var_1_9 == ((unsigned long int) (3867474704u - ((var_1_11 + var_1_12) + var_1_7)))) : 1) : 1)) && (var_1_10 ? (((var_1_14 - var_1_15) >= ((var_1_60 + var_1_36) + var_1_60)) ? (var_1_13 == ((signed short int) ((((((var_1_16 + var_1_17) - var_1_18)) > (var_1_19)) ? (((var_1_16 + var_1_17) - var_1_18)) : (var_1_19))))) : (var_1_13 == ((signed short int) (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) + (((((var_1_20 + var_1_21)) > (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? ((var_1_20 + var_1_21)) : (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))))) : 1)) && (((128u + var_1_12) > (var_1_16 / var_1_6)) ? (((var_1_8 * ((((var_1_5) > (var_1_18)) ? (var_1_5) : (var_1_18)))) < var_1_19) ? (var_1_22 == ((signed long int) (var_1_16 + ((((var_1_12) > (-256)) ? (var_1_12) : (-256)))))) : ((var_1_6 < var_1_5) ? (var_1_22 == ((signed long int) (var_1_17 - (var_1_23 - var_1_11)))) : (var_1_22 == ((signed long int) var_1_19)))) : (var_1_22 == ((signed long int) var_1_8)))) && ((var_1_8 < var_1_31) ? (var_1_24 == ((unsigned char) (((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))) - (((((var_1_27) < (16)) ? (var_1_27) : (16))) + (var_1_28 - var_1_29))))) : 1)) && (var_1_30 == ((unsigned char) (! var_1_10)))) && ((1 == (var_1_28 << var_1_6)) ? (last_1_var_1_50 ? (var_1_31 == ((unsigned long int) (var_1_32 + ((var_1_18 + var_1_29) + var_1_11)))) : (var_1_31 == ((unsigned long int) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))) : (((var_1_21 + var_1_8) >= var_1_18) ? (((var_1_8 + ((((var_1_19) < (var_1_26)) ? (var_1_19) : (var_1_26)))) == last_1_var_1_58) ? (var_1_31 == ((unsigned long int) var_1_18)) : 1) : 1))) && ((var_1_59 >= var_1_14) ? (var_1_33 == ((unsigned char) ((var_1_10 || (! var_1_34)) && var_1_35))) : 1)) && (((var_1_63 / var_1_25) >= (var_1_1 / ((((var_1_5) < (var_1_23)) ? (var_1_5) : (var_1_23))))) ? (var_1_36 == ((float) (var_1_38 + 200.75f))) : 1)) && ((var_1_9 == ((((10u) < ((var_1_26 / var_1_5))) ? (10u) : ((var_1_26 / var_1_5))))) ? ((var_1_36 == (var_1_38 * (- var_1_14))) ? (var_1_39 == ((unsigned char) ((((var_1_26) < ((var_1_28 + var_1_27))) ? (var_1_26) : ((var_1_28 + var_1_27)))))) : ((var_1_59 >= var_1_38) ? (var_1_39 == ((unsigned char) var_1_26)) : (var_1_39 == ((unsigned char) (((((var_1_29 + var_1_28)) < (var_1_25)) ? ((var_1_29 + var_1_28)) : (var_1_25))))))) : ((((- var_1_36) / var_1_40) != var_1_59) ? (var_1_39 == ((unsigned char) ((var_1_41 + (var_1_42 - var_1_29)) - var_1_28))) : 1))) && ((var_1_29 < var_1_11) ? ((var_1_7 == ((((var_1_32) < ((var_1_42 / var_1_41))) ? (var_1_32) : ((var_1_42 / var_1_41))))) ? (var_1_43 == ((unsigned char) (! var_1_10))) : 1) : ((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) >= var_1_18) ? ((var_1_28 > var_1_9) ? (var_1_43 == ((unsigned char) var_1_35)) : (var_1_43 == ((unsigned char) var_1_10))) : 1))) && ((((((var_1_26) > (var_1_5)) ? (var_1_26) : (var_1_5))) >= (var_1_7 << var_1_27)) ? ((((var_1_39 * var_1_25) / var_1_42) < (var_1_27 - ((((var_1_12) < (var_1_32)) ? (var_1_12) : (var_1_32))))) ? ((var_1_38 == var_1_36) ? (var_1_44 == ((unsigned short int) (var_1_39 + var_1_25))) : 1) : (var_1_44 == ((unsigned short int) var_1_16))) : ((var_1_11 >= ((var_1_27 + 2u) << var_1_20)) ? ((var_1_25 != (((((var_1_39 * var_1_6)) < (var_1_18)) ? ((var_1_39 * var_1_6)) : (var_1_18)))) ? (var_1_44 == ((unsigned short int) (var_1_16 + (((((var_1_53 + 256)) > ((var_1_25 + var_1_17))) ? ((var_1_53 + 256)) : ((var_1_25 + var_1_17))))))) : (var_1_44 == ((unsigned short int) var_1_18))) : (var_1_44 == ((unsigned short int) ((var_1_17 + var_1_39) + var_1_18)))))) && ((! var_1_64) ? (var_1_45 == ((double) ((((var_1_38) < (24.1)) ? (var_1_38) : (24.1))))) : (var_1_45 == ((double) ((((((var_1_46 - var_1_47)) > (var_1_38)) ? ((var_1_46 - var_1_47)) : (var_1_38))) + var_1_48))))) && (var_1_43 ? (var_1_49 == ((signed short int) (((((50) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (50) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) - var_1_26))) : (var_1_49 == ((signed short int) var_1_9)))) && ((var_1_27 >= (4 + var_1_20)) ? ((var_1_47 <= var_1_60) ? ((var_1_16 != (var_1_17 << (var_1_51 - var_1_52))) ? (var_1_50 == ((unsigned char) (var_1_34 || var_1_10))) : 1) : 1) : 1)) && (last_1_var_1_64 ? (var_1_53 == ((unsigned short int) ((((var_1_52) > ((last_1_var_1_53 + 2))) ? (var_1_52) : ((last_1_var_1_53 + 2)))))) : 1)) && ((var_1_40 <= var_1_60) ? (var_1_54 == ((signed char) (((((var_1_52) < ((var_1_29 + var_1_28))) ? (var_1_52) : ((var_1_29 + var_1_28)))) - var_1_26))) : (var_1_54 == ((signed char) ((var_1_29 + (10 + var_1_55)) - (var_1_52 + 16)))))) && (((((((var_1_31) > (var_1_22)) ? (var_1_31) : (var_1_22))) * var_1_17) != var_1_32) ? (var_1_56 == ((unsigned long int) (var_1_16 + ((((1u) > (var_1_9)) ? (1u) : (var_1_9)))))) : 1)) && (((10 / var_1_25) < var_1_65) ? (var_1_58 == ((unsigned long int) (((((var_1_18 + (1284334790u - var_1_52))) < (var_1_53)) ? ((var_1_18 + (1284334790u - var_1_52))) : (var_1_53))))) : 1)) && (((var_1_49 + (- var_1_31)) == var_1_9) ? (var_1_59 == ((float) ((((((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48)))) > (var_1_38)) ? (((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48)))) : (var_1_38))))) : (var_1_59 == ((float) var_1_38)))) && ((((var_1_48 + 128.8f) * last_1_var_1_60) != var_1_45) ? (var_1_60 == ((double) 127.875)) : 1)) && (var_1_43 ? (var_1_63 == ((unsigned short int) var_1_29)) : (var_1_63 == ((unsigned short int) var_1_18)))) && (((var_1_5 & var_1_20) <= 1) ? ((var_1_58 <= ((((((((var_1_53) < (var_1_56)) ? (var_1_53) : (var_1_56)))) < (-2)) ? (((((var_1_53) < (var_1_56)) ? (var_1_53) : (var_1_56)))) : (-2)))) ? (var_1_64 == ((unsigned char) (var_1_33 && (var_1_34 || var_1_10)))) : (var_1_64 == ((unsigned char) (! var_1_34)))) : (var_1_64 == ((unsigned char) var_1_35)))) && (var_1_65 == ((unsigned short int) var_1_18))
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
