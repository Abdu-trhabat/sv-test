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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 8;
double var_1_2 = 31.3;
double var_1_3 = 49.8;
double var_1_4 = 5.6;
double var_1_5 = 15.1;
signed short int var_1_6 = 8;
signed short int var_1_7 = 30429;
signed short int var_1_8 = 16;
signed short int var_1_9 = 16;
signed short int var_1_10 = 8;
signed short int var_1_11 = 4;
signed short int var_1_12 = -32;
double var_1_13 = 1.5;
double var_1_14 = 999999.875;
signed short int var_1_15 = 26788;
unsigned long int var_1_16 = 16;
unsigned char var_1_17 = 1;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 64;
double var_1_23 = 4.25;
double var_1_24 = 255.8;
double var_1_25 = 15.75;
double var_1_26 = 100.5;
double var_1_27 = 500.25;
double var_1_28 = 3.5;
unsigned short int var_1_29 = 5;
unsigned short int var_1_30 = 21757;
double var_1_31 = 0.32499999999999996;
double var_1_32 = 255.5;
double var_1_33 = 64.15;
signed short int var_1_34 = 256;
float var_1_36 = 31.2;
float var_1_37 = 31.8;
unsigned char var_1_38 = 32;
unsigned char var_1_40 = 8;
signed short int var_1_41 = -32;
signed short int var_1_43 = -500;
unsigned char var_1_44 = 64;
unsigned char var_1_47 = 32;
unsigned char var_1_48 = 0;
float var_1_49 = 50.75;
float var_1_50 = 0.0;
float var_1_51 = 0.19999999999999996;
float var_1_52 = 1.2;
float var_1_53 = 5.5;
float var_1_54 = 9999999999999.5;
unsigned char var_1_55 = 4;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 1;
unsigned short int var_1_59 = 16;
signed char var_1_60 = -4;
unsigned char var_1_61 = 0;
float var_1_62 = 2.6;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 0;
unsigned long int var_1_68 = 256;
signed long int var_1_69 = -8;
unsigned short int var_1_70 = 32;
unsigned long int var_1_71 = 200;
float var_1_72 = 200.5;
unsigned char var_1_73 = 0;
unsigned char var_1_75 = 0;
float var_1_76 = 1.68;
float var_1_77 = 64.875;
unsigned char var_1_78 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_2 / var_1_3) > ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) {
  var_1_1 = (((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8)))) - var_1_9);
 } else {
  var_1_1 = (-256 + (var_1_10 + var_1_11));
 }
 signed long int stepLocal_0 = (var_1_8 - var_1_7) * var_1_11;
 if (var_1_15 <= stepLocal_0) {
  var_1_16 = var_1_15;
 }
 if (var_1_15 == (128 / var_1_7)) {
  var_1_29 = ((var_1_15 + var_1_30) - var_1_7);
 }
 var_1_36 = ((((49.75f) > (var_1_37)) ? (49.75f) : (var_1_37)));
 if ((var_1_48 & var_1_1) >= var_1_47) {
  var_1_49 = ((var_1_50 - var_1_51) - var_1_33);
 } else {
  if ((~ var_1_16) >= (- ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) {
   var_1_49 = (((var_1_52 + var_1_53) + var_1_27) + (256.6f + var_1_54));
  }
 }
 if (var_1_25 != var_1_24) {
  var_1_55 = (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - ((((var_1_47) > (50)) ? (var_1_47) : (50))));
 } else {
  var_1_55 = ((((var_1_20 - var_1_21) < 0 ) ? -(var_1_20 - var_1_21) : (var_1_20 - var_1_21)));
 }
 var_1_56 = (var_1_57 && var_1_58);
 if (var_1_56) {
  var_1_59 = (((((5 + var_1_40)) > (var_1_22)) ? ((5 + var_1_40)) : (var_1_22)));
 }
 if ((var_1_32 - var_1_33) <= var_1_14) {
  var_1_61 = var_1_58;
 }
 if (var_1_64) {
  var_1_70 = var_1_15;
 }
 var_1_71 = var_1_1;
 var_1_76 = var_1_27;
 var_1_77 = var_1_28;
 var_1_78 = var_1_67;
 if ((var_1_22 + 5) < (var_1_71 + var_1_15)) {
  var_1_31 = (((((var_1_32) > (var_1_24)) ? (var_1_32) : (var_1_24))) - var_1_33);
 } else {
  if (var_1_28 >= var_1_13) {
   var_1_31 = ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)));
  }
 }
 signed short int stepLocal_3 = var_1_15;
 if (var_1_32 >= ((var_1_14 - var_1_33) * var_1_31)) {
  var_1_41 = var_1_20;
 } else {
  if (stepLocal_3 <= var_1_9) {
   var_1_41 = (var_1_8 + (var_1_43 + var_1_21));
  }
 }
 if (var_1_47 != var_1_71) {
  var_1_60 = 4;
 }
 if (var_1_78) {
  var_1_73 = (var_1_78 || var_1_64);
 } else {
  var_1_73 = (var_1_67 && (var_1_75 || (! var_1_57)));
 }
 signed long int stepLocal_1 = var_1_22 % var_1_15;
 if (var_1_78) {
  if ((var_1_14 + var_1_31) < (var_1_13 - (0.1 + var_1_24))) {
   var_1_23 = ((((var_1_24) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_24) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
  } else {
   if (var_1_16 < stepLocal_1) {
    var_1_23 = (((((var_1_26) > ((var_1_27 + 16.5))) ? (var_1_26) : ((var_1_27 + 16.5)))) + var_1_28);
   } else {
    if (var_1_56) {
     var_1_23 = var_1_25;
    }
   }
  }
 }
 signed short int stepLocal_2 = var_1_1;
 if (stepLocal_2 <= var_1_7) {
  if (var_1_23 == ((((0.95f) > (((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26))))) ? (0.95f) : (((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26))))))) {
   if (var_1_78) {
    var_1_38 = ((((((((var_1_20 - var_1_21)) > (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22))) < 0 ) ? -(((((var_1_20 - var_1_21)) > (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22))) : (((((var_1_20 - var_1_21)) > (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22)))));
   } else {
    var_1_38 = (var_1_22 + ((((var_1_21) < (var_1_40)) ? (var_1_21) : (var_1_40))));
   }
  } else {
   var_1_38 = var_1_20;
  }
 } else {
  var_1_38 = var_1_20;
 }
 if ((var_1_23 * var_1_3) >= ((var_1_31 + var_1_23) + (var_1_13 - var_1_14))) {
  if (var_1_70 > (var_1_9 - var_1_7)) {
   var_1_12 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  } else {
   var_1_12 = (var_1_9 - (var_1_15 - var_1_8));
  }
 }
 unsigned char stepLocal_5 = var_1_61 || var_1_56;
 signed short int stepLocal_4 = var_1_12;
 if (var_1_26 < var_1_3) {
  if (var_1_13 < var_1_23) {
   var_1_44 = ((((25) < (var_1_40)) ? (25) : (var_1_40)));
  } else {
   if (var_1_56) {
    var_1_44 = (var_1_20 - var_1_22);
   } else {
    if (var_1_61 && stepLocal_5) {
     var_1_44 = (var_1_40 + var_1_21);
    }
   }
  }
 } else {
  if (var_1_56) {
   if (stepLocal_4 >= (var_1_16 / var_1_7)) {
    var_1_44 = (var_1_20 - var_1_22);
   }
  } else {
   var_1_44 = ((var_1_20 - (var_1_47 - var_1_48)) - var_1_40);
  }
 }
 if (var_1_23 > var_1_37) {
  if (var_1_58) {
   var_1_68 = ((((var_1_47) < (var_1_44)) ? (var_1_47) : (var_1_44)));
  } else {
   var_1_68 = (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) + var_1_20);
  }
 }
 if ((var_1_61 || (var_1_7 == var_1_68)) && var_1_78) {
  var_1_17 = ((var_1_20 - var_1_21) - var_1_22);
 }
 unsigned short int stepLocal_7 = var_1_30;
 unsigned char stepLocal_6 = var_1_15 >= var_1_48;
 if (stepLocal_7 <= var_1_68) {
  if (stepLocal_6 || var_1_61) {
   var_1_63 = ((var_1_57 && var_1_58) && ((var_1_64 && var_1_65) && var_1_66));
  } else {
   var_1_63 = ((var_1_64 && var_1_67) || (! var_1_58));
  }
 } else {
  var_1_63 = var_1_57;
 }
 if (var_1_63) {
  var_1_72 = var_1_25;
 }
 if (var_1_63 && ((var_1_56 || var_1_63) || (var_1_21 <= var_1_7))) {
  var_1_34 = (var_1_8 + (var_1_21 + var_1_20));
 } else {
  if (var_1_56 || var_1_63) {
   if ((- var_1_27) > (128.75 / var_1_3)) {
    var_1_34 = var_1_9;
   } else {
    var_1_34 = var_1_20;
   }
  }
 }
 if (var_1_66) {
  var_1_69 = (var_1_29 - var_1_30);
 } else {
  if (-8 >= var_1_7) {
   if (var_1_70 == (var_1_20 - (var_1_21 + var_1_47))) {
    var_1_69 = (((((16 - var_1_21)) > ((var_1_20 - var_1_8))) ? ((16 - var_1_21)) : ((var_1_20 - var_1_8))));
   } else {
    if (-128 < var_1_70) {
     var_1_69 = (((((var_1_34 + var_1_70)) > (var_1_40)) ? ((var_1_34 + var_1_70)) : (var_1_40)));
    } else {
     var_1_69 = 4;
    }
   }
  }
 }
 if (var_1_31 <= var_1_54) {
  if (var_1_69 > ((((var_1_16) > ((var_1_30 << var_1_6))) ? (var_1_16) : ((var_1_30 << var_1_6))))) {
   var_1_62 = (var_1_51 - ((((var_1_50) < (var_1_33)) ? (var_1_50) : (var_1_33))));
  }
 } else {
  var_1_62 = (((((0.8f - ((((var_1_51) < (var_1_32)) ? (var_1_51) : (var_1_32))))) < (((((var_1_28) > ((var_1_24 - var_1_33))) ? (var_1_28) : ((var_1_24 - var_1_33)))))) ? ((0.8f - ((((var_1_51) < (var_1_32)) ? (var_1_51) : (var_1_32))))) : (((((var_1_28) > ((var_1_24 - var_1_33))) ? (var_1_28) : ((var_1_24 - var_1_33)))))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 16382);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -8191);
 assume_abort_if_not(var_1_10 <= 8192);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -8191);
 assume_abort_if_not(var_1_11 <= 8191);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 16383);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 190);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427388000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16384);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= -8191);
 assume_abort_if_not(var_1_43 <= 8192);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 31);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 31);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 4611686.018427383000e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -115292.1504606845700e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 1152921.504606845700e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -115292.1504606845700e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 1152921.504606845700e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -230584.3009213691400e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 1);
 assume_abort_if_not(var_1_58 <= 1);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 1);
 assume_abort_if_not(var_1_64 <= 1);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 1);
 assume_abort_if_not(var_1_65 <= 1);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((((((((((((((((((((var_1_2 / var_1_3) > ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) ? (var_1_1 == ((signed short int) (((((var_1_6) < ((var_1_7 - var_1_8))) ? (var_1_6) : ((var_1_7 - var_1_8)))) - var_1_9))) : (var_1_1 == ((signed short int) (-256 + (var_1_10 + var_1_11))))) && (((var_1_23 * var_1_3) >= ((var_1_31 + var_1_23) + (var_1_13 - var_1_14))) ? ((var_1_70 > (var_1_9 - var_1_7)) ? (var_1_12 == ((signed short int) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : (var_1_12 == ((signed short int) (var_1_9 - (var_1_15 - var_1_8))))) : 1)) && ((var_1_15 <= ((var_1_8 - var_1_7) * var_1_11)) ? (var_1_16 == ((unsigned long int) var_1_15)) : 1)) && (((var_1_61 || (var_1_7 == var_1_68)) && var_1_78) ? (var_1_17 == ((unsigned char) ((var_1_20 - var_1_21) - var_1_22))) : 1)) && (var_1_78 ? (((var_1_14 + var_1_31) < (var_1_13 - (0.1 + var_1_24))) ? (var_1_23 == ((double) ((((var_1_24) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_24) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))))) : ((var_1_16 < (var_1_22 % var_1_15)) ? (var_1_23 == ((double) (((((var_1_26) > ((var_1_27 + 16.5))) ? (var_1_26) : ((var_1_27 + 16.5)))) + var_1_28))) : (var_1_56 ? (var_1_23 == ((double) var_1_25)) : 1))) : 1)) && ((var_1_15 == (128 / var_1_7)) ? (var_1_29 == ((unsigned short int) ((var_1_15 + var_1_30) - var_1_7))) : 1)) && (((var_1_22 + 5) < (var_1_71 + var_1_15)) ? (var_1_31 == ((double) (((((var_1_32) > (var_1_24)) ? (var_1_32) : (var_1_24))) - var_1_33))) : ((var_1_28 >= var_1_13) ? (var_1_31 == ((double) ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24))))) : 1))) && ((var_1_63 && ((var_1_56 || var_1_63) || (var_1_21 <= var_1_7))) ? (var_1_34 == ((signed short int) (var_1_8 + (var_1_21 + var_1_20)))) : ((var_1_56 || var_1_63) ? (((- var_1_27) > (128.75 / var_1_3)) ? (var_1_34 == ((signed short int) var_1_9)) : (var_1_34 == ((signed short int) var_1_20))) : 1))) && (var_1_36 == ((float) ((((49.75f) > (var_1_37)) ? (49.75f) : (var_1_37)))))) && ((var_1_1 <= var_1_7) ? ((var_1_23 == ((((0.95f) > (((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26))))) ? (0.95f) : (((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26))))))) ? (var_1_78 ? (var_1_38 == ((unsigned char) ((((((((var_1_20 - var_1_21)) > (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22))) < 0 ) ? -(((((var_1_20 - var_1_21)) > (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22))) : (((((var_1_20 - var_1_21)) > (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22))))))) : (var_1_38 == ((unsigned char) (var_1_22 + ((((var_1_21) < (var_1_40)) ? (var_1_21) : (var_1_40))))))) : (var_1_38 == ((unsigned char) var_1_20))) : (var_1_38 == ((unsigned char) var_1_20)))) && ((var_1_32 >= ((var_1_14 - var_1_33) * var_1_31)) ? (var_1_41 == ((signed short int) var_1_20)) : ((var_1_15 <= var_1_9) ? (var_1_41 == ((signed short int) (var_1_8 + (var_1_43 + var_1_21)))) : 1))) && ((var_1_26 < var_1_3) ? ((var_1_13 < var_1_23) ? (var_1_44 == ((unsigned char) ((((25) < (var_1_40)) ? (25) : (var_1_40))))) : (var_1_56 ? (var_1_44 == ((unsigned char) (var_1_20 - var_1_22))) : ((var_1_61 && (var_1_61 || var_1_56)) ? (var_1_44 == ((unsigned char) (var_1_40 + var_1_21))) : 1))) : (var_1_56 ? ((var_1_12 >= (var_1_16 / var_1_7)) ? (var_1_44 == ((unsigned char) (var_1_20 - var_1_22))) : 1) : (var_1_44 == ((unsigned char) ((var_1_20 - (var_1_47 - var_1_48)) - var_1_40)))))) && (((var_1_48 & var_1_1) >= var_1_47) ? (var_1_49 == ((float) ((var_1_50 - var_1_51) - var_1_33))) : (((~ var_1_16) >= (- ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) ? (var_1_49 == ((float) (((var_1_52 + var_1_53) + var_1_27) + (256.6f + var_1_54)))) : 1))) && ((var_1_25 != var_1_24) ? (var_1_55 == ((unsigned char) (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - ((((var_1_47) > (50)) ? (var_1_47) : (50)))))) : (var_1_55 == ((unsigned char) ((((var_1_20 - var_1_21) < 0 ) ? -(var_1_20 - var_1_21) : (var_1_20 - var_1_21))))))) && (var_1_56 == ((unsigned char) (var_1_57 && var_1_58)))) && (var_1_56 ? (var_1_59 == ((unsigned short int) (((((5 + var_1_40)) > (var_1_22)) ? ((5 + var_1_40)) : (var_1_22))))) : 1)) && ((var_1_47 != var_1_71) ? (var_1_60 == ((signed char) 4)) : 1)) && (((var_1_32 - var_1_33) <= var_1_14) ? (var_1_61 == ((unsigned char) var_1_58)) : 1)) && ((var_1_31 <= var_1_54) ? ((var_1_69 > ((((var_1_16) > ((var_1_30 << var_1_6))) ? (var_1_16) : ((var_1_30 << var_1_6))))) ? (var_1_62 == ((float) (var_1_51 - ((((var_1_50) < (var_1_33)) ? (var_1_50) : (var_1_33)))))) : 1) : (var_1_62 == ((float) (((((0.8f - ((((var_1_51) < (var_1_32)) ? (var_1_51) : (var_1_32))))) < (((((var_1_28) > ((var_1_24 - var_1_33))) ? (var_1_28) : ((var_1_24 - var_1_33)))))) ? ((0.8f - ((((var_1_51) < (var_1_32)) ? (var_1_51) : (var_1_32))))) : (((((var_1_28) > ((var_1_24 - var_1_33))) ? (var_1_28) : ((var_1_24 - var_1_33))))))))))) && ((var_1_30 <= var_1_68) ? (((var_1_15 >= var_1_48) || var_1_61) ? (var_1_63 == ((unsigned char) ((var_1_57 && var_1_58) && ((var_1_64 && var_1_65) && var_1_66)))) : (var_1_63 == ((unsigned char) ((var_1_64 && var_1_67) || (! var_1_58))))) : (var_1_63 == ((unsigned char) var_1_57)))) && ((var_1_23 > var_1_37) ? (var_1_58 ? (var_1_68 == ((unsigned long int) ((((var_1_47) < (var_1_44)) ? (var_1_47) : (var_1_44))))) : (var_1_68 == ((unsigned long int) (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) + var_1_20)))) : 1)) && (var_1_66 ? (var_1_69 == ((signed long int) (var_1_29 - var_1_30))) : ((-8 >= var_1_7) ? ((var_1_70 == (var_1_20 - (var_1_21 + var_1_47))) ? (var_1_69 == ((signed long int) (((((16 - var_1_21)) > ((var_1_20 - var_1_8))) ? ((16 - var_1_21)) : ((var_1_20 - var_1_8)))))) : ((-128 < var_1_70) ? (var_1_69 == ((signed long int) (((((var_1_34 + var_1_70)) > (var_1_40)) ? ((var_1_34 + var_1_70)) : (var_1_40))))) : (var_1_69 == ((signed long int) 4)))) : 1))) && (var_1_64 ? (var_1_70 == ((unsigned short int) var_1_15)) : 1)) && (var_1_71 == ((unsigned long int) var_1_1))) && (var_1_63 ? (var_1_72 == ((float) var_1_25)) : 1)) && (var_1_78 ? (var_1_73 == ((unsigned char) (var_1_78 || var_1_64))) : (var_1_73 == ((unsigned char) (var_1_67 && (var_1_75 || (! var_1_57))))))) && (var_1_76 == ((float) var_1_27))) && (var_1_77 == ((float) var_1_28))) && (var_1_78 == ((unsigned char) var_1_67))
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
