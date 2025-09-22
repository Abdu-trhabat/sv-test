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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_3 = 0;
signed short int var_1_4 = -5;
signed char var_1_5 = -5;
signed short int var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 0;
signed short int var_1_11 = 10000;
signed short int var_1_12 = 4;
signed short int var_1_13 = 8;
signed short int var_1_14 = 4;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 16;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 1;
signed short int var_1_20 = 200;
signed char var_1_21 = -4;
signed short int var_1_22 = 10;
unsigned char var_1_23 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 32;
unsigned char var_1_30 = 2;
unsigned long int var_1_31 = 16;
unsigned long int var_1_32 = 4274512326;
signed char var_1_33 = -10;
signed char var_1_34 = -1;
signed char var_1_35 = 2;
signed char var_1_36 = 5;
signed char var_1_37 = 4;
signed long int var_1_38 = 256;
signed long int var_1_39 = 1965639901;
signed short int var_1_40 = -200;
signed short int var_1_41 = 28954;
float var_1_42 = 256.25;
float var_1_43 = 16.35;
float var_1_44 = 200.25;
float var_1_45 = 100000000000.96;
signed short int var_1_46 = -16;
unsigned long int var_1_47 = 100;
unsigned long int var_1_48 = 2;
float var_1_49 = 255.4;
float var_1_50 = 24.75;
float var_1_51 = 1.3;
float var_1_52 = 500.6;
float var_1_53 = 0.0;
float var_1_54 = 128.25;
signed long int var_1_55 = 2;
signed char var_1_56 = 8;
signed char var_1_57 = 4;
signed char var_1_58 = 16;
signed char var_1_59 = -5;
signed long int var_1_60 = -4;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
signed long int var_1_63 = -64;
float var_1_64 = 3.2;
unsigned short int var_1_65 = 10;
float var_1_66 = 5.25;
float var_1_67 = 0.0;
signed short int last_1_var_1_4 = -5;
unsigned char last_1_var_1_23 = 0;
unsigned long int last_1_var_1_31 = 16;
signed long int last_1_var_1_38 = 256;
float last_1_var_1_49 = 255.4;
float last_1_var_1_66 = 5.25;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_12 = var_1_16 - last_1_var_1_4;
 if (last_1_var_1_4 == stepLocal_12) {
  var_1_61 = var_1_28;
 } else {
  var_1_61 = (var_1_28 || ((! last_1_var_1_23) && var_1_62));
 }
 unsigned long int stepLocal_9 = last_1_var_1_31;
 unsigned char stepLocal_8 = var_1_10 <= ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 unsigned char stepLocal_7 = var_1_9 && var_1_8;
 if (((((var_1_11) < (var_1_19)) ? (var_1_11) : (var_1_19))) >= stepLocal_9) {
  if (stepLocal_8 || (last_1_var_1_49 <= last_1_var_1_66)) {
   if (stepLocal_7 && var_1_26) {
    var_1_23 = (! var_1_27);
   } else {
    if (var_1_26) {
     var_1_23 = var_1_28;
    }
   }
  } else {
   var_1_23 = var_1_28;
  }
 }
 if (var_1_61) {
  var_1_40 = ((var_1_41 - (var_1_11 - var_1_36)) - var_1_14);
 } else {
  var_1_40 = var_1_11;
 }
 if (var_1_3 >= var_1_40) {
  if (((((10) < (var_1_10)) ? (10) : (var_1_10))) < (var_1_13 - var_1_14)) {
   var_1_15 = ((((var_1_16) < ((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_19))) ? (var_1_16) : ((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_19))));
  }
 } else {
  var_1_15 = var_1_16;
 }
 unsigned char stepLocal_6 = var_1_23;
 signed char stepLocal_5 = var_1_3;
 signed short int stepLocal_4 = var_1_13;
 if (stepLocal_5 > ((var_1_19 - 2) / ((((var_1_5) < (var_1_21)) ? (var_1_5) : (var_1_21))))) {
  if (stepLocal_6 || var_1_61) {
   var_1_20 = (var_1_10 - var_1_22);
  }
 } else {
  if ((var_1_11 / var_1_21) <= stepLocal_4) {
   var_1_20 = var_1_17;
  } else {
   var_1_20 = var_1_11;
  }
 }
 if (var_1_27) {
  var_1_30 = (var_1_19 + 1);
 }
 if (var_1_61 || var_1_23) {
  var_1_42 = ((((var_1_43) > (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) ? (var_1_43) : (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))));
 } else {
  if (var_1_11 > (var_1_35 - (var_1_17 + var_1_10))) {
   var_1_42 = ((((1.5f - var_1_45) < 0 ) ? -(1.5f - var_1_45) : (1.5f - var_1_45)));
  }
 }
 if ((63.25f - var_1_45) >= var_1_44) {
  var_1_47 = ((((50u) < (var_1_11)) ? (50u) : (var_1_11)));
 } else {
  var_1_47 = var_1_48;
 }
 if (var_1_61) {
  var_1_56 = (var_1_57 + ((var_1_58 - 16) + ((((var_1_59) > (10)) ? (var_1_59) : (10)))));
 }
 if (var_1_28) {
  var_1_65 = var_1_58;
 } else {
  var_1_65 = var_1_14;
 }
 if (var_1_23 || var_1_61) {
  var_1_7 = ((((((var_1_10 + 10) - 2)) > (var_1_30)) ? (((var_1_10 + 10) - 2)) : (var_1_30)));
 } else {
  if (var_1_10 <= -50) {
   if ((var_1_5 < var_1_30) && var_1_61) {
    var_1_7 = (var_1_10 + var_1_3);
   } else {
    var_1_7 = ((64 + (var_1_11 - var_1_12)) - var_1_10);
   }
  } else {
   var_1_7 = (((((((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10)))) > (var_1_11)) ? (((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10)))) : (var_1_11))) - (((((128 + var_1_13)) < (var_1_14)) ? ((128 + var_1_13)) : (var_1_14))));
  }
 }
 signed long int stepLocal_15 = (((var_1_35) > ((var_1_37 << var_1_59))) ? (var_1_35) : ((var_1_37 << var_1_59)));
 signed short int stepLocal_14 = var_1_22;
 signed short int stepLocal_13 = var_1_41;
 if (var_1_17 == stepLocal_15) {
  if (var_1_39 >= stepLocal_14) {
   var_1_63 = ((var_1_11 - var_1_14) + var_1_17);
  } else {
   if (! (var_1_61 || var_1_62)) {
    var_1_63 = (var_1_58 - var_1_30);
   } else {
    if ((var_1_32 | var_1_7) > stepLocal_13) {
     var_1_63 = (var_1_30 - var_1_41);
    } else {
     var_1_63 = (var_1_39 - var_1_19);
    }
   }
  }
 }
 signed long int stepLocal_3 = var_1_63;
 signed long int stepLocal_2 = var_1_3 + var_1_63;
 unsigned long int stepLocal_1 = 2u;
 signed char stepLocal_0 = var_1_3;
 if (stepLocal_0 >= (last_1_var_1_4 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) {
  if (stepLocal_2 <= var_1_5) {
   if (stepLocal_3 > ((last_1_var_1_4 * var_1_5) * var_1_3)) {
    if (stepLocal_1 <= var_1_63) {
     var_1_4 = var_1_5;
    } else {
     var_1_4 = 25;
    }
   } else {
    var_1_4 = var_1_5;
   }
  } else {
   var_1_4 = var_1_5;
  }
 }
 if (var_1_11 >= var_1_40) {
  var_1_31 = (var_1_32 - 1u);
 }
 if (var_1_7 >= (var_1_31 | -2)) {
  var_1_49 = var_1_44;
 } else {
  if (var_1_23) {
   var_1_49 = (var_1_50 + (((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52))) - (var_1_53 - var_1_54)));
  } else {
   var_1_49 = ((((((((var_1_53) > (var_1_44)) ? (var_1_53) : (var_1_44)))) < (var_1_51)) ? (((((var_1_53) > (var_1_44)) ? (var_1_53) : (var_1_44)))) : (var_1_51)));
  }
 }
 unsigned long int stepLocal_18 = var_1_32 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 if (var_1_27) {
  if (stepLocal_18 < var_1_63) {
   var_1_66 = (var_1_52 - (var_1_67 - var_1_51));
  } else {
   var_1_66 = var_1_45;
  }
 } else {
  var_1_66 = var_1_43;
 }
 if ((- 255.45f) < var_1_49) {
  var_1_1 = (var_1_3 + -16);
 }
 signed long int stepLocal_10 = (((var_1_22) < (var_1_14)) ? (var_1_22) : (var_1_14));
 if (((var_1_19 << var_1_5) * var_1_31) > stepLocal_10) {
  if (! var_1_28) {
   var_1_29 = (var_1_17 - var_1_16);
  }
 }
 if (var_1_61 || var_1_23) {
  var_1_38 = ((var_1_10 + (var_1_18 + var_1_19)) - (((((var_1_17 + var_1_22)) < ((var_1_39 - var_1_35))) ? ((var_1_17 + var_1_22)) : ((var_1_39 - var_1_35)))));
 } else {
  if (last_1_var_1_38 <= var_1_5) {
   var_1_38 = (var_1_65 + var_1_12);
  } else {
   var_1_38 = (((((100000 - 1)) > ((((((var_1_1) > (var_1_3)) ? (var_1_1) : (var_1_3))) + var_1_17))) ? ((100000 - 1)) : ((((((var_1_1) > (var_1_3)) ? (var_1_1) : (var_1_3))) + var_1_17))));
  }
 }
 if (var_1_61) {
  if (var_1_28) {
   var_1_46 = (var_1_63 + (10 - var_1_35));
  }
 } else {
  var_1_46 = ((((var_1_18) < (var_1_13)) ? (var_1_18) : (var_1_13)));
 }
 if (var_1_23) {
  var_1_55 = (var_1_38 + 16);
 }
 unsigned long int stepLocal_11 = (var_1_18 / var_1_17) * var_1_47;
 if (stepLocal_11 >= var_1_47) {
  var_1_60 = ((((var_1_10) > ((((((var_1_65 + var_1_29)) > ((var_1_4 + var_1_22))) ? ((var_1_65 + var_1_29)) : ((var_1_4 + var_1_22)))))) ? (var_1_10) : ((((((var_1_65 + var_1_29)) > ((var_1_4 + var_1_22))) ? ((var_1_65 + var_1_29)) : ((var_1_4 + var_1_22)))))));
 } else {
  var_1_60 = ((var_1_13 - var_1_17) + var_1_22);
 }
 signed long int stepLocal_17 = (((var_1_11 + var_1_41) < 0 ) ? -(var_1_11 + var_1_41) : (var_1_11 + var_1_41));
 unsigned long int stepLocal_16 = var_1_31;
 if ((var_1_19 - var_1_35) >= stepLocal_16) {
  if ((~ var_1_65) >= stepLocal_17) {
   if (((((0.75) < (var_1_44)) ? (0.75) : (var_1_44))) < var_1_51) {
    var_1_64 = (((((var_1_51 + var_1_54)) < ((var_1_45 - var_1_52))) ? ((var_1_51 + var_1_54)) : ((var_1_45 - var_1_52))));
   }
  } else {
   var_1_64 = 31.25f;
  }
 }
 if (var_1_31 <= var_1_38) {
  var_1_33 = var_1_3;
 } else {
  if (! var_1_27) {
   var_1_33 = (var_1_34 - (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))) + var_1_37));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 127);
 assume_abort_if_not(var_1_5 != 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 8191);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 8191);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -128);
 assume_abort_if_not(var_1_21 <= 127);
 assume_abort_if_not(var_1_21 != 0);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32766);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -1);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 1073741823);
 assume_abort_if_not(var_1_39 <= 2147483646);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 16382);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 2305843.009213691400e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= -63);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 32);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -31);
 assume_abort_if_not(var_1_59 <= 31);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 0);
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= 4611686.018427383000e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_4 = var_1_4;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_66 = var_1_66;
}
int property(void) {
 return (((((((((((((((((((((((((- 255.45f) < var_1_49) ? (var_1_1 == ((signed char) (var_1_3 + -16))) : 1) && ((var_1_3 >= (last_1_var_1_4 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (((var_1_3 + var_1_63) <= var_1_5) ? ((var_1_63 > ((last_1_var_1_4 * var_1_5) * var_1_3)) ? ((2u <= var_1_63) ? (var_1_4 == ((signed short int) var_1_5)) : (var_1_4 == ((signed short int) 25))) : (var_1_4 == ((signed short int) var_1_5))) : (var_1_4 == ((signed short int) var_1_5))) : 1)) && ((var_1_23 || var_1_61) ? (var_1_7 == ((signed short int) ((((((var_1_10 + 10) - 2)) > (var_1_30)) ? (((var_1_10 + 10) - 2)) : (var_1_30))))) : ((var_1_10 <= -50) ? (((var_1_5 < var_1_30) && var_1_61) ? (var_1_7 == ((signed short int) (var_1_10 + var_1_3))) : (var_1_7 == ((signed short int) ((64 + (var_1_11 - var_1_12)) - var_1_10)))) : (var_1_7 == ((signed short int) (((((((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10)))) > (var_1_11)) ? (((((var_1_12) < (var_1_10)) ? (var_1_12) : (var_1_10)))) : (var_1_11))) - (((((128 + var_1_13)) < (var_1_14)) ? ((128 + var_1_13)) : (var_1_14))))))))) && ((var_1_3 >= var_1_40) ? ((((((10) < (var_1_10)) ? (10) : (var_1_10))) < (var_1_13 - var_1_14)) ? (var_1_15 == ((unsigned char) ((((var_1_16) < ((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_19))) ? (var_1_16) : ((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_19)))))) : 1) : (var_1_15 == ((unsigned char) var_1_16)))) && ((var_1_3 > ((var_1_19 - 2) / ((((var_1_5) < (var_1_21)) ? (var_1_5) : (var_1_21))))) ? ((var_1_23 || var_1_61) ? (var_1_20 == ((signed short int) (var_1_10 - var_1_22))) : 1) : (((var_1_11 / var_1_21) <= var_1_13) ? (var_1_20 == ((signed short int) var_1_17)) : (var_1_20 == ((signed short int) var_1_11))))) && ((((((var_1_11) < (var_1_19)) ? (var_1_11) : (var_1_19))) >= last_1_var_1_31) ? (((var_1_10 <= ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) || (last_1_var_1_49 <= last_1_var_1_66)) ? (((var_1_9 && var_1_8) && var_1_26) ? (var_1_23 == ((unsigned char) (! var_1_27))) : (var_1_26 ? (var_1_23 == ((unsigned char) var_1_28)) : 1)) : (var_1_23 == ((unsigned char) var_1_28))) : 1)) && ((((var_1_19 << var_1_5) * var_1_31) > ((((var_1_22) < (var_1_14)) ? (var_1_22) : (var_1_14)))) ? ((! var_1_28) ? (var_1_29 == ((signed short int) (var_1_17 - var_1_16))) : 1) : 1)) && (var_1_27 ? (var_1_30 == ((unsigned char) (var_1_19 + 1))) : 1)) && ((var_1_11 >= var_1_40) ? (var_1_31 == ((unsigned long int) (var_1_32 - 1u))) : 1)) && ((var_1_31 <= var_1_38) ? (var_1_33 == ((signed char) var_1_3)) : ((! var_1_27) ? (var_1_33 == ((signed char) (var_1_34 - (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))) + var_1_37)))) : 1))) && ((var_1_61 || var_1_23) ? (var_1_38 == ((signed long int) ((var_1_10 + (var_1_18 + var_1_19)) - (((((var_1_17 + var_1_22)) < ((var_1_39 - var_1_35))) ? ((var_1_17 + var_1_22)) : ((var_1_39 - var_1_35))))))) : ((last_1_var_1_38 <= var_1_5) ? (var_1_38 == ((signed long int) (var_1_65 + var_1_12))) : (var_1_38 == ((signed long int) (((((100000 - 1)) > ((((((var_1_1) > (var_1_3)) ? (var_1_1) : (var_1_3))) + var_1_17))) ? ((100000 - 1)) : ((((((var_1_1) > (var_1_3)) ? (var_1_1) : (var_1_3))) + var_1_17))))))))) && (var_1_61 ? (var_1_40 == ((signed short int) ((var_1_41 - (var_1_11 - var_1_36)) - var_1_14))) : (var_1_40 == ((signed short int) var_1_11)))) && ((var_1_61 || var_1_23) ? (var_1_42 == ((float) ((((var_1_43) > (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) ? (var_1_43) : (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))))) : ((var_1_11 > (var_1_35 - (var_1_17 + var_1_10))) ? (var_1_42 == ((float) ((((1.5f - var_1_45) < 0 ) ? -(1.5f - var_1_45) : (1.5f - var_1_45))))) : 1))) && (var_1_61 ? (var_1_28 ? (var_1_46 == ((signed short int) (var_1_63 + (10 - var_1_35)))) : 1) : (var_1_46 == ((signed short int) ((((var_1_18) < (var_1_13)) ? (var_1_18) : (var_1_13))))))) && (((63.25f - var_1_45) >= var_1_44) ? (var_1_47 == ((unsigned long int) ((((50u) < (var_1_11)) ? (50u) : (var_1_11))))) : (var_1_47 == ((unsigned long int) var_1_48)))) && ((var_1_7 >= (var_1_31 | -2)) ? (var_1_49 == ((float) var_1_44)) : (var_1_23 ? (var_1_49 == ((float) (var_1_50 + (((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52))) - (var_1_53 - var_1_54))))) : (var_1_49 == ((float) ((((((((var_1_53) > (var_1_44)) ? (var_1_53) : (var_1_44)))) < (var_1_51)) ? (((((var_1_53) > (var_1_44)) ? (var_1_53) : (var_1_44)))) : (var_1_51)))))))) && (var_1_23 ? (var_1_55 == ((signed long int) (var_1_38 + 16))) : 1)) && (var_1_61 ? (var_1_56 == ((signed char) (var_1_57 + ((var_1_58 - 16) + ((((var_1_59) > (10)) ? (var_1_59) : (10))))))) : 1)) && ((((var_1_18 / var_1_17) * var_1_47) >= var_1_47) ? (var_1_60 == ((signed long int) ((((var_1_10) > ((((((var_1_65 + var_1_29)) > ((var_1_4 + var_1_22))) ? ((var_1_65 + var_1_29)) : ((var_1_4 + var_1_22)))))) ? (var_1_10) : ((((((var_1_65 + var_1_29)) > ((var_1_4 + var_1_22))) ? ((var_1_65 + var_1_29)) : ((var_1_4 + var_1_22))))))))) : (var_1_60 == ((signed long int) ((var_1_13 - var_1_17) + var_1_22))))) && ((last_1_var_1_4 == (var_1_16 - last_1_var_1_4)) ? (var_1_61 == ((unsigned char) var_1_28)) : (var_1_61 == ((unsigned char) (var_1_28 || ((! last_1_var_1_23) && var_1_62)))))) && ((var_1_17 == ((((var_1_35) > ((var_1_37 << var_1_59))) ? (var_1_35) : ((var_1_37 << var_1_59))))) ? ((var_1_39 >= var_1_22) ? (var_1_63 == ((signed long int) ((var_1_11 - var_1_14) + var_1_17))) : ((! (var_1_61 || var_1_62)) ? (var_1_63 == ((signed long int) (var_1_58 - var_1_30))) : (((var_1_32 | var_1_7) > var_1_41) ? (var_1_63 == ((signed long int) (var_1_30 - var_1_41))) : (var_1_63 == ((signed long int) (var_1_39 - var_1_19)))))) : 1)) && (((var_1_19 - var_1_35) >= var_1_31) ? (((~ var_1_65) >= ((((var_1_11 + var_1_41) < 0 ) ? -(var_1_11 + var_1_41) : (var_1_11 + var_1_41)))) ? ((((((0.75) < (var_1_44)) ? (0.75) : (var_1_44))) < var_1_51) ? (var_1_64 == ((float) (((((var_1_51 + var_1_54)) < ((var_1_45 - var_1_52))) ? ((var_1_51 + var_1_54)) : ((var_1_45 - var_1_52)))))) : 1) : (var_1_64 == ((float) 31.25f))) : 1)) && (var_1_28 ? (var_1_65 == ((unsigned short int) var_1_58)) : (var_1_65 == ((unsigned short int) var_1_14)))) && (var_1_27 ? (((var_1_32 / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) < var_1_63) ? (var_1_66 == ((float) (var_1_52 - (var_1_67 - var_1_51)))) : (var_1_66 == ((float) var_1_45))) : (var_1_66 == ((float) var_1_43)))
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
