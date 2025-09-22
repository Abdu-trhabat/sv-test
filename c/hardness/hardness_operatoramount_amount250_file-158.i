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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
unsigned short int var_1_6 = 2;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
double var_1_11 = 16.5;
double var_1_12 = 8.5;
double var_1_13 = 0.0;
double var_1_14 = 1.625;
signed long int var_1_15 = -2;
unsigned long int var_1_16 = 3182169038;
signed long int var_1_17 = -16;
signed long int var_1_18 = -128;
signed long int var_1_19 = -4;
signed long int var_1_20 = -2;
unsigned char var_1_21 = 0;
double var_1_22 = 1000000000000.75;
unsigned char var_1_23 = 0;
signed short int var_1_24 = 5;
signed short int var_1_25 = 64;
signed short int var_1_26 = 256;
signed short int var_1_27 = -64;
signed short int var_1_29 = 10;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 32;
unsigned short int var_1_35 = 256;
unsigned short int var_1_36 = 28263;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 0;
unsigned long int var_1_39 = 3277255022;
unsigned long int var_1_40 = 1532284181;
unsigned long int var_1_41 = 1542199227;
signed char var_1_42 = 64;
signed char var_1_43 = 100;
signed char var_1_44 = 32;
signed char var_1_45 = -2;
double var_1_46 = 128.6;
unsigned long int var_1_47 = 25;
double var_1_48 = 1000000000000000.2;
signed short int var_1_49 = 0;
signed short int var_1_50 = 1;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 1;
signed short int var_1_53 = -50;
unsigned long int var_1_54 = 1;
float var_1_55 = 500.5;
float var_1_56 = 63.625;
float var_1_57 = 999999999999999.2;
float var_1_58 = 15.75;
unsigned long int var_1_59 = 10000000;
unsigned long int var_1_60 = 10000;
unsigned short int var_1_61 = 64;
unsigned short int var_1_62 = 0;
signed long int var_1_63 = -100000000;
unsigned short int var_1_64 = 38513;
signed long int last_1_var_1_15 = -2;
signed long int last_1_var_1_20 = -2;
unsigned char last_1_var_1_21 = 0;
signed short int last_1_var_1_24 = 5;
unsigned long int last_1_var_1_38 = 0;
unsigned long int last_1_var_1_47 = 25;
unsigned long int last_1_var_1_54 = 1;
unsigned long int last_1_var_1_59 = 10000000;
unsigned short int last_1_var_1_62 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_4 = var_1_6 - (last_1_var_1_47 + 256);
 if (var_1_18 <= stepLocal_4) {
  if (var_1_10) {
   var_1_20 = ((((var_1_17) < (var_1_6)) ? (var_1_17) : (var_1_6)));
  } else {
   var_1_20 = last_1_var_1_47;
  }
 }
 if (var_1_20 < var_1_17) {
  var_1_47 = var_1_20;
 } else {
  if (var_1_12 > 499.8) {
   var_1_47 = (var_1_36 + ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))));
  }
 }
 unsigned long int stepLocal_3 = last_1_var_1_47;
 unsigned short int stepLocal_2 = var_1_6;
 unsigned long int stepLocal_1 = last_1_var_1_59;
 unsigned long int stepLocal_0 = last_1_var_1_47;
 if (last_1_var_1_21) {
  if (128u < stepLocal_1) {
   var_1_1 = (! var_1_4);
  } else {
   if (((- last_1_var_1_59) + (last_1_var_1_62 % var_1_6)) < stepLocal_3) {
    var_1_1 = (var_1_4 || (! var_1_8));
   } else {
    if (stepLocal_0 > (- last_1_var_1_59)) {
     var_1_1 = (var_1_8 || (var_1_4 && var_1_9));
    } else {
     var_1_1 = var_1_4;
    }
   }
  }
 } else {
  if (last_1_var_1_47 >= stepLocal_2) {
   var_1_1 = (var_1_4 && var_1_10);
  } else {
   var_1_1 = (! (var_1_9 || var_1_8));
  }
 }
 if (var_1_25 >= (last_1_var_1_38 ^ -4)) {
  if (((var_1_44 + last_1_var_1_38) / var_1_6) <= var_1_32) {
   var_1_54 = ((((var_1_6) > (last_1_var_1_24)) ? (var_1_6) : (last_1_var_1_24)));
  } else {
   var_1_54 = ((var_1_40 - last_1_var_1_15) + 128u);
  }
 }
 unsigned long int stepLocal_6 = last_1_var_1_47 * var_1_18;
 unsigned short int stepLocal_5 = var_1_6;
 if ((var_1_34 & last_1_var_1_54) > stepLocal_5) {
  var_1_38 = (var_1_39 - (var_1_40 - var_1_34));
 } else {
  if (stepLocal_6 < -32) {
   var_1_38 = (((((last_1_var_1_47) < ((var_1_32 + last_1_var_1_38))) ? (last_1_var_1_47) : ((var_1_32 + last_1_var_1_38)))) + var_1_6);
  } else {
   var_1_38 = ((((((var_1_41 - var_1_36)) < (last_1_var_1_20)) ? ((var_1_41 - var_1_36)) : (last_1_var_1_20))) + 500u);
  }
 }
 var_1_35 = (((((((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) < (var_1_34)) ? (((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) : (var_1_34))) + (var_1_36 - var_1_33));
 signed long int stepLocal_11 = var_1_64 - (var_1_36 - var_1_50);
 unsigned long int stepLocal_10 = var_1_38 / var_1_41;
 if (var_1_35 >= stepLocal_11) {
  if (var_1_19 <= stepLocal_10) {
   var_1_63 = (100 + var_1_17);
  } else {
   var_1_63 = -16;
  }
 }
 var_1_31 = (var_1_32 - (var_1_33 + var_1_34));
 if ((var_1_40 ^ var_1_25) < 200u) {
  var_1_53 = (var_1_33 + (var_1_49 - var_1_63));
 } else {
  var_1_53 = var_1_50;
 }
 signed long int stepLocal_8 = var_1_63;
 unsigned long int stepLocal_7 = var_1_39;
 if (stepLocal_7 < var_1_54) {
  var_1_46 = ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)));
 } else {
  if (var_1_23) {
   var_1_46 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
  } else {
   if (stepLocal_8 >= var_1_44) {
    var_1_46 = (var_1_13 - var_1_14);
   }
  }
 }
 if (var_1_33 <= (var_1_27 << ((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))))) {
  if (((var_1_22 + var_1_46) + var_1_14) <= 63.5) {
   var_1_48 = ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)));
  }
 }
 if ((var_1_13 + var_1_14) > var_1_48) {
  var_1_55 = (((((((((var_1_13 + var_1_14)) < (var_1_56)) ? ((var_1_13 + var_1_14)) : (var_1_56)))) < ((var_1_57 + var_1_58))) ? ((((((var_1_13 + var_1_14)) < (var_1_56)) ? ((var_1_13 + var_1_14)) : (var_1_56)))) : ((var_1_57 + var_1_58))));
 }
 if ((var_1_48 / ((((var_1_13) > (var_1_22)) ? (var_1_13) : (var_1_22)))) < var_1_12) {
  if (var_1_8) {
   var_1_21 = var_1_9;
  } else {
   var_1_21 = ((var_1_19 > ((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) || (! (var_1_9 || var_1_23)));
  }
 } else {
  var_1_21 = var_1_10;
 }
 if (! (var_1_16 <= var_1_6)) {
  var_1_30 = (((var_1_12 < var_1_13) && (var_1_38 <= var_1_16)) && (! var_1_10));
 } else {
  if (var_1_9) {
   if (! var_1_21) {
    if (var_1_10) {
     var_1_30 = var_1_4;
    } else {
     var_1_30 = 0;
    }
   } else {
    var_1_30 = var_1_4;
   }
  } else {
   var_1_30 = var_1_8;
  }
 }
 if (var_1_30) {
  var_1_37 = (((var_1_12 == var_1_13) || var_1_4) && var_1_10);
 }
 if (var_1_30) {
  var_1_62 = var_1_33;
 } else {
  var_1_62 = var_1_50;
 }
 if (var_1_30) {
  var_1_42 = (((((((((var_1_34) < (var_1_33)) ? (var_1_34) : (var_1_33))) - (var_1_43 - var_1_44))) < (var_1_45)) ? ((((((var_1_34) < (var_1_33)) ? (var_1_34) : (var_1_33))) - (var_1_43 - var_1_44))) : (var_1_45)));
 }
 if (var_1_37) {
  var_1_11 = var_1_12;
 } else {
  var_1_11 = ((8.211064086987161E18 - (var_1_13 - var_1_14)) - 49.5);
 }
 if ((var_1_16 - var_1_62) == ((var_1_54 + 100u) * var_1_6)) {
  if (var_1_21) {
   var_1_15 = 5;
  } else {
   var_1_15 = ((var_1_62 + (var_1_6 + var_1_17)) + (var_1_18 + ((((-256) < (var_1_19)) ? (-256) : (var_1_19)))));
  }
 }
 signed long int stepLocal_9 = var_1_20;
 if (var_1_22 < (var_1_12 / ((((5.65) < (var_1_13)) ? (5.65) : (var_1_13))))) {
  if (var_1_17 < stepLocal_9) {
   var_1_51 = ((var_1_44 > var_1_38) || (! var_1_8));
  } else {
   if (200.9f >= var_1_11) {
    var_1_51 = (! var_1_10);
   } else {
    var_1_51 = (! (var_1_4 && (var_1_10 && var_1_52)));
   }
  }
 } else {
  if (! var_1_4) {
   var_1_51 = (! var_1_10);
  }
 }
 if (((((var_1_11) > (99.75f)) ? (var_1_11) : (99.75f))) >= var_1_12) {
  var_1_61 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 } else {
  var_1_61 = var_1_50;
 }
 if ((var_1_36 * (var_1_47 + last_1_var_1_59)) <= var_1_44) {
  if (var_1_15 < var_1_47) {
   var_1_59 = ((((((((var_1_15) < (var_1_60)) ? (var_1_15) : (var_1_60)))) < (var_1_15)) ? (((((var_1_15) < (var_1_60)) ? (var_1_15) : (var_1_60)))) : (var_1_15)));
  } else {
   var_1_59 = ((((32u) < (var_1_39)) ? (32u) : (var_1_39)));
  }
 } else {
  if (var_1_8) {
   var_1_59 = ((((((((var_1_15) > (var_1_47)) ? (var_1_15) : (var_1_47)))) < (var_1_15)) ? (((((var_1_15) > (var_1_47)) ? (var_1_15) : (var_1_47)))) : (var_1_15)));
  } else {
   if (var_1_1 && var_1_4) {
    if (var_1_25 >= -2) {
     var_1_59 = (((((var_1_44) < (var_1_15)) ? (var_1_44) : (var_1_15))) + var_1_36);
    }
   }
  }
 }
 if (var_1_23 && var_1_4) {
  var_1_24 = (var_1_25 + ((((2) < ((var_1_26 + var_1_27))) ? (2) : ((var_1_26 + var_1_27)))));
 } else {
  if (! var_1_51) {
   var_1_24 = (((((var_1_26 + (var_1_27 + var_1_29))) < (-5)) ? ((var_1_26 + (var_1_27 + var_1_29))) : (-5)));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 assume_abort_if_not(var_1_6 != 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 2305843.009213691400e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967295);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -268435455);
 assume_abort_if_not(var_1_17 <= 268435455);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -536870911);
 assume_abort_if_not(var_1_18 <= 536870912);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -536870911);
 assume_abort_if_not(var_1_19 <= 536870911);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 assume_abort_if_not(var_1_22 != 0.0F);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -16383);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -8191);
 assume_abort_if_not(var_1_26 <= 8192);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -8191);
 assume_abort_if_not(var_1_27 <= 8191);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -8191);
 assume_abort_if_not(var_1_29 <= 8191);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 127);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 64);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 16383);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741823);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 63);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -922337.2036854766000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -461168.6018427383000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -461168.6018427383000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_64 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_64 >= 32767);
 assume_abort_if_not(var_1_64 <= 65535);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_62 = var_1_62;
}
int property(void) {
 return ((((((((((((((((((((((last_1_var_1_21 ? ((128u < last_1_var_1_59) ? (var_1_1 == ((unsigned char) (! var_1_4))) : ((((- last_1_var_1_59) + (last_1_var_1_62 % var_1_6)) < last_1_var_1_47) ? (var_1_1 == ((unsigned char) (var_1_4 || (! var_1_8)))) : ((last_1_var_1_47 > (- last_1_var_1_59)) ? (var_1_1 == ((unsigned char) (var_1_8 || (var_1_4 && var_1_9)))) : (var_1_1 == ((unsigned char) var_1_4))))) : ((last_1_var_1_47 >= var_1_6) ? (var_1_1 == ((unsigned char) (var_1_4 && var_1_10))) : (var_1_1 == ((unsigned char) (! (var_1_9 || var_1_8)))))) && (var_1_37 ? (var_1_11 == ((double) var_1_12)) : (var_1_11 == ((double) ((8.211064086987161E18 - (var_1_13 - var_1_14)) - 49.5))))) && (((var_1_16 - var_1_62) == ((var_1_54 + 100u) * var_1_6)) ? (var_1_21 ? (var_1_15 == ((signed long int) 5)) : (var_1_15 == ((signed long int) ((var_1_62 + (var_1_6 + var_1_17)) + (var_1_18 + ((((-256) < (var_1_19)) ? (-256) : (var_1_19)))))))) : 1)) && ((var_1_18 <= (var_1_6 - (last_1_var_1_47 + 256))) ? (var_1_10 ? (var_1_20 == ((signed long int) ((((var_1_17) < (var_1_6)) ? (var_1_17) : (var_1_6))))) : (var_1_20 == ((signed long int) last_1_var_1_47))) : 1)) && (((var_1_48 / ((((var_1_13) > (var_1_22)) ? (var_1_13) : (var_1_22)))) < var_1_12) ? (var_1_8 ? (var_1_21 == ((unsigned char) var_1_9)) : (var_1_21 == ((unsigned char) ((var_1_19 > ((((var_1_47) < (var_1_6)) ? (var_1_47) : (var_1_6)))) || (! (var_1_9 || var_1_23)))))) : (var_1_21 == ((unsigned char) var_1_10)))) && ((var_1_23 && var_1_4) ? (var_1_24 == ((signed short int) (var_1_25 + ((((2) < ((var_1_26 + var_1_27))) ? (2) : ((var_1_26 + var_1_27))))))) : ((! var_1_51) ? (var_1_24 == ((signed short int) (((((var_1_26 + (var_1_27 + var_1_29))) < (-5)) ? ((var_1_26 + (var_1_27 + var_1_29))) : (-5))))) : 1))) && ((! (var_1_16 <= var_1_6)) ? (var_1_30 == ((unsigned char) (((var_1_12 < var_1_13) && (var_1_38 <= var_1_16)) && (! var_1_10)))) : (var_1_9 ? ((! var_1_21) ? (var_1_10 ? (var_1_30 == ((unsigned char) var_1_4)) : (var_1_30 == ((unsigned char) 0))) : (var_1_30 == ((unsigned char) var_1_4))) : (var_1_30 == ((unsigned char) var_1_8))))) && (var_1_31 == ((unsigned char) (var_1_32 - (var_1_33 + var_1_34))))) && (var_1_35 == ((unsigned short int) (((((((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) < (var_1_34)) ? (((((var_1_32) < (var_1_38)) ? (var_1_32) : (var_1_38)))) : (var_1_34))) + (var_1_36 - var_1_33))))) && (var_1_30 ? (var_1_37 == ((unsigned char) (((var_1_12 == var_1_13) || var_1_4) && var_1_10))) : 1)) && (((var_1_34 & last_1_var_1_54) > var_1_6) ? (var_1_38 == ((unsigned long int) (var_1_39 - (var_1_40 - var_1_34)))) : (((last_1_var_1_47 * var_1_18) < -32) ? (var_1_38 == ((unsigned long int) (((((last_1_var_1_47) < ((var_1_32 + last_1_var_1_38))) ? (last_1_var_1_47) : ((var_1_32 + last_1_var_1_38)))) + var_1_6))) : (var_1_38 == ((unsigned long int) ((((((var_1_41 - var_1_36)) < (last_1_var_1_20)) ? ((var_1_41 - var_1_36)) : (last_1_var_1_20))) + 500u)))))) && (var_1_30 ? (var_1_42 == ((signed char) (((((((((var_1_34) < (var_1_33)) ? (var_1_34) : (var_1_33))) - (var_1_43 - var_1_44))) < (var_1_45)) ? ((((((var_1_34) < (var_1_33)) ? (var_1_34) : (var_1_33))) - (var_1_43 - var_1_44))) : (var_1_45))))) : 1)) && ((var_1_39 < var_1_54) ? (var_1_46 == ((double) ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) : (var_1_23 ? (var_1_46 == ((double) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : ((var_1_63 >= var_1_44) ? (var_1_46 == ((double) (var_1_13 - var_1_14))) : 1)))) && ((var_1_20 < var_1_17) ? (var_1_47 == ((unsigned long int) var_1_20)) : ((var_1_12 > 499.8) ? (var_1_47 == ((unsigned long int) (var_1_36 + ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) : 1))) && ((var_1_33 <= (var_1_27 << ((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))))) ? ((((var_1_22 + var_1_46) + var_1_14) <= 63.5) ? (var_1_48 == ((double) ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) : 1) : 1)) && ((var_1_22 < (var_1_12 / ((((5.65) < (var_1_13)) ? (5.65) : (var_1_13))))) ? ((var_1_17 < var_1_20) ? (var_1_51 == ((unsigned char) ((var_1_44 > var_1_38) || (! var_1_8)))) : ((200.9f >= var_1_11) ? (var_1_51 == ((unsigned char) (! var_1_10))) : (var_1_51 == ((unsigned char) (! (var_1_4 && (var_1_10 && var_1_52))))))) : ((! var_1_4) ? (var_1_51 == ((unsigned char) (! var_1_10))) : 1))) && (((var_1_40 ^ var_1_25) < 200u) ? (var_1_53 == ((signed short int) (var_1_33 + (var_1_49 - var_1_63)))) : (var_1_53 == ((signed short int) var_1_50)))) && ((var_1_25 >= (last_1_var_1_38 ^ -4)) ? ((((var_1_44 + last_1_var_1_38) / var_1_6) <= var_1_32) ? (var_1_54 == ((unsigned long int) ((((var_1_6) > (last_1_var_1_24)) ? (var_1_6) : (last_1_var_1_24))))) : (var_1_54 == ((unsigned long int) ((var_1_40 - last_1_var_1_15) + 128u)))) : 1)) && (((var_1_13 + var_1_14) > var_1_48) ? (var_1_55 == ((float) (((((((((var_1_13 + var_1_14)) < (var_1_56)) ? ((var_1_13 + var_1_14)) : (var_1_56)))) < ((var_1_57 + var_1_58))) ? ((((((var_1_13 + var_1_14)) < (var_1_56)) ? ((var_1_13 + var_1_14)) : (var_1_56)))) : ((var_1_57 + var_1_58)))))) : 1)) && (((var_1_36 * (var_1_47 + last_1_var_1_59)) <= var_1_44) ? ((var_1_15 < var_1_47) ? (var_1_59 == ((unsigned long int) ((((((((var_1_15) < (var_1_60)) ? (var_1_15) : (var_1_60)))) < (var_1_15)) ? (((((var_1_15) < (var_1_60)) ? (var_1_15) : (var_1_60)))) : (var_1_15))))) : (var_1_59 == ((unsigned long int) ((((32u) < (var_1_39)) ? (32u) : (var_1_39)))))) : (var_1_8 ? (var_1_59 == ((unsigned long int) ((((((((var_1_15) > (var_1_47)) ? (var_1_15) : (var_1_47)))) < (var_1_15)) ? (((((var_1_15) > (var_1_47)) ? (var_1_15) : (var_1_47)))) : (var_1_15))))) : ((var_1_1 && var_1_4) ? ((var_1_25 >= -2) ? (var_1_59 == ((unsigned long int) (((((var_1_44) < (var_1_15)) ? (var_1_44) : (var_1_15))) + var_1_36))) : 1) : 1)))) && ((((((var_1_11) > (99.75f)) ? (var_1_11) : (99.75f))) >= var_1_12) ? (var_1_61 == ((unsigned short int) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : (var_1_61 == ((unsigned short int) var_1_50)))) && (var_1_30 ? (var_1_62 == ((unsigned short int) var_1_33)) : (var_1_62 == ((unsigned short int) var_1_50)))) && ((var_1_35 >= (var_1_64 - (var_1_36 - var_1_50))) ? ((var_1_19 <= (var_1_38 / var_1_41)) ? (var_1_63 == ((signed long int) (100 + var_1_17))) : (var_1_63 == ((signed long int) -16))) : 1)
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
