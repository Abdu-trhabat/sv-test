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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
signed long int var_1_2 = 10000;
signed long int var_1_3 = 2;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 56544;
unsigned short int var_1_11 = 56875;
signed long int var_1_12 = -16;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed char var_1_17 = 10;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
signed short int var_1_22 = 18553;
unsigned long int var_1_23 = 2598487271;
unsigned long int var_1_24 = 64;
unsigned long int var_1_25 = 1352044521;
unsigned short int var_1_26 = 4;
signed short int var_1_27 = -4;
signed long int var_1_28 = -64;
unsigned char var_1_29 = 1;
double var_1_30 = 2.5;
double var_1_31 = 31.9;
double var_1_32 = 8.38;
signed long int var_1_33 = -1;
float var_1_34 = 9.2;
signed long int var_1_35 = 8;
unsigned long int var_1_36 = 5;
unsigned long int var_1_38 = 1721657681;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 25;
unsigned char var_1_41 = 5;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 5;
signed long int var_1_44 = -100;
signed long int var_1_45 = 1602843708;
unsigned char var_1_46 = 5;
float var_1_47 = 5.75;
float var_1_48 = 49.5;
unsigned char var_1_49 = 64;
double var_1_50 = 128.35;
double var_1_51 = 0.0;
double var_1_52 = 0.0;
double var_1_53 = 127.6;
double var_1_54 = 63.75;
double var_1_55 = 255.9;
double var_1_56 = 0.0;
double var_1_57 = 7.6;
unsigned char var_1_58 = 32;
double var_1_59 = 50.45;
unsigned char var_1_60 = 8;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 128;
unsigned long int var_1_63 = 10000000;
signed long int last_1_var_1_12 = -16;
unsigned char last_1_var_1_16 = 0;
unsigned short int last_1_var_1_26 = 4;
signed long int last_1_var_1_28 = -64;
unsigned long int last_1_var_1_36 = 5;
signed long int last_1_var_1_44 = -100;
unsigned char last_1_var_1_46 = 5;
double last_1_var_1_50 = 128.35;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_15 = var_1_35;
 signed long int stepLocal_14 = last_1_var_1_12;
 if (stepLocal_14 < ((((var_1_41) > (var_1_35)) ? (var_1_41) : (var_1_35)))) {
  var_1_44 = last_1_var_1_28;
 } else {
  if (stepLocal_15 >= (~ -10)) {
   var_1_44 = ((var_1_45 - ((((var_1_41) < (last_1_var_1_46)) ? (var_1_41) : (last_1_var_1_46)))) - var_1_43);
  } else {
   if (last_1_var_1_50 >= var_1_34) {
    if (var_1_19) {
     var_1_44 = ((last_1_var_1_26 + (var_1_5 + var_1_22)) + (last_1_var_1_36 - 32));
    }
   } else {
    var_1_44 = (last_1_var_1_46 - (16 + (var_1_40 + 8)));
   }
  }
 }
 if (last_1_var_1_16) {
  if (var_1_22 > var_1_8) {
   var_1_28 = (var_1_5 + (last_1_var_1_44 + var_1_9));
  }
 } else {
  var_1_28 = last_1_var_1_28;
 }
 signed long int stepLocal_22 = var_1_11 % ((((var_1_42) < (var_1_45)) ? (var_1_42) : (var_1_45)));
 if (stepLocal_22 <= (((((5) > (var_1_22)) ? (5) : (var_1_22))) / ((((var_1_49) < (var_1_5)) ? (var_1_49) : (var_1_5))))) {
  var_1_63 = var_1_38;
 } else {
  var_1_63 = last_1_var_1_28;
 }
 unsigned long int stepLocal_9 = (var_1_5 * var_1_63) | var_1_24;
 if ((var_1_11 * var_1_63) >= stepLocal_9) {
  var_1_26 = (var_1_10 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))));
 } else {
  var_1_26 = (((((var_1_6) < (((((var_1_22) < (var_1_8)) ? (var_1_22) : (var_1_8))))) ? (var_1_6) : (((((var_1_22) < (var_1_8)) ? (var_1_22) : (var_1_8)))))) + var_1_5);
 }
 unsigned char stepLocal_16 = var_1_63 < 256;
 if (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < (var_1_31 / ((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))))) {
  if (stepLocal_16 && (! (var_1_47 < var_1_31))) {
   var_1_46 = (200 - ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))));
  } else {
   var_1_46 = ((var_1_49 - var_1_43) + ((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))));
  }
 }
 unsigned char stepLocal_13 = var_1_20;
 if ((10000.25f - var_1_34) < var_1_31) {
  if (stepLocal_13 && var_1_18) {
   var_1_33 = (var_1_8 - var_1_6);
  } else {
   var_1_33 = var_1_9;
  }
 } else {
  var_1_33 = (8 - ((((var_1_8) < ((var_1_10 + var_1_35))) ? (var_1_8) : ((var_1_10 + var_1_35)))));
 }
 unsigned char stepLocal_19 = (var_1_11 - var_1_41) > var_1_63;
 if (var_1_18 || stepLocal_19) {
  var_1_58 = var_1_43;
 } else {
  var_1_58 = (var_1_41 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))));
 }
 signed long int stepLocal_1 = var_1_5 - var_1_6;
 signed long int stepLocal_0 = var_1_2 - var_1_3;
 if (stepLocal_0 <= var_1_28) {
  if (stepLocal_1 != (var_1_63 * var_1_28)) {
   var_1_1 = (((((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) < (var_1_9)) ? ((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) : (var_1_9)));
  } else {
   var_1_1 = (((((var_1_10) > ((var_1_11 - var_1_6))) ? (var_1_10) : ((var_1_11 - var_1_6)))) - ((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))));
  }
 }
 signed long int stepLocal_8 = 0;
 unsigned char stepLocal_7 = var_1_5;
 if (var_1_10 < stepLocal_8) {
  if (((var_1_22 - var_1_6) << var_1_2) <= stepLocal_7) {
   var_1_21 = ((((((((var_1_5) < (var_1_1)) ? (var_1_5) : (var_1_1)))) < ((var_1_23 - var_1_24))) ? (((((var_1_5) < (var_1_1)) ? (var_1_5) : (var_1_1)))) : ((var_1_23 - var_1_24))));
  } else {
   var_1_21 = (((2072066314u - var_1_11) + var_1_25) - (8u + var_1_8));
  }
 } else {
  var_1_21 = (var_1_23 - var_1_10);
 }
 unsigned char stepLocal_2 = var_1_13;
 if (stepLocal_2 && (var_1_14 && var_1_15)) {
  var_1_12 = (((((var_1_5 + var_1_26)) > (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11)))))) ? ((var_1_5 + var_1_26)) : (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11)))))));
 } else {
  var_1_12 = ((((var_1_26) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_26) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))));
 }
 signed long int stepLocal_12 = var_1_2;
 unsigned short int stepLocal_11 = var_1_11;
 unsigned long int stepLocal_10 = var_1_24;
 if (var_1_25 < stepLocal_10) {
  if (stepLocal_11 < (var_1_25 / var_1_5)) {
   var_1_27 = var_1_17;
  } else {
   var_1_27 = ((((-25) > (var_1_6)) ? (-25) : (var_1_6)));
  }
 } else {
  if (stepLocal_12 < (var_1_33 / var_1_11)) {
   var_1_27 = var_1_11;
  } else {
   var_1_27 = var_1_17;
  }
 }
 unsigned short int stepLocal_6 = var_1_10;
 unsigned short int stepLocal_5 = var_1_9;
 unsigned long int stepLocal_4 = var_1_33 + (var_1_10 + var_1_63);
 unsigned short int stepLocal_3 = var_1_10;
 if (var_1_3 >= stepLocal_6) {
  if ((var_1_5 - var_1_8) > stepLocal_4) {
   var_1_16 = (((var_1_8 / var_1_17) < var_1_63) || (var_1_18 && var_1_19));
  } else {
   if ((var_1_1 * var_1_21) > stepLocal_5) {
    var_1_16 = (var_1_18 && var_1_19);
   }
  }
 } else {
  if (var_1_9 > stepLocal_3) {
   var_1_16 = var_1_19;
  } else {
   var_1_16 = var_1_20;
  }
 }
 signed long int stepLocal_18 = var_1_12;
 unsigned long int stepLocal_17 = (((var_1_5) > (var_1_63)) ? (var_1_5) : (var_1_63));
 if (var_1_8 != stepLocal_18) {
  if (var_1_16) {
   if (var_1_16) {
    var_1_50 = ((((((var_1_51 - var_1_52)) > ((var_1_53 + var_1_54))) ? ((var_1_51 - var_1_52)) : ((var_1_53 + var_1_54)))) - ((((var_1_55) < ((var_1_56 - var_1_57))) ? (var_1_55) : ((var_1_56 - var_1_57)))));
   } else {
    var_1_50 = (((((var_1_52) > ((var_1_54 + var_1_53))) ? (var_1_52) : ((var_1_54 + var_1_53)))) - var_1_51);
   }
  }
 } else {
  if (stepLocal_17 == (var_1_23 - var_1_43)) {
   var_1_50 = ((((var_1_54) > (var_1_31)) ? (var_1_54) : (var_1_31)));
  } else {
   var_1_50 = (((((((((3.8 - var_1_56)) > (var_1_57)) ? ((3.8 - var_1_56)) : (var_1_57)))) < (var_1_52)) ? ((((((3.8 - var_1_56)) > (var_1_57)) ? ((3.8 - var_1_56)) : (var_1_57)))) : (var_1_52)));
  }
 }
 if (var_1_13 && var_1_16) {
  var_1_30 = (0.75 - 9.999999999995E11);
 } else {
  var_1_30 = ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)));
 }
 if (var_1_16) {
  var_1_39 = ((((5) > (var_1_6)) ? (5) : (var_1_6)));
 } else {
  var_1_39 = ((((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))) + (var_1_42 - var_1_43)) + var_1_6);
 }
 unsigned char stepLocal_21 = var_1_13;
 unsigned char stepLocal_20 = var_1_29;
 if (var_1_29 && stepLocal_21) {
  if ((var_1_15 && var_1_16) && stepLocal_20) {
   if (var_1_20) {
    var_1_59 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
   }
  }
 }
 if (var_1_61) {
  if (var_1_55 == var_1_50) {
   if (var_1_13 || var_1_14) {
    var_1_60 = (var_1_62 - var_1_6);
   } else {
    var_1_60 = (var_1_6 + var_1_42);
   }
  } else {
   if (var_1_19) {
    var_1_60 = var_1_43;
   } else {
    var_1_60 = var_1_41;
   }
  }
 } else {
  var_1_60 = var_1_40;
 }
 if (! var_1_16) {
  if (var_1_44 < -2) {
   if (var_1_16) {
    if (var_1_9 <= ((((var_1_21) < (last_1_var_1_36)) ? (var_1_21) : (last_1_var_1_36)))) {
     if ((var_1_28 >= (var_1_11 + var_1_12)) && var_1_16) {
      var_1_36 = ((var_1_10 + var_1_11) + ((((var_1_25 - var_1_6) < 0 ) ? -(var_1_25 - var_1_6) : (var_1_25 - var_1_6))));
     } else {
      var_1_36 = (((var_1_38 - var_1_21) + var_1_25) - 10000000u);
     }
    }
   } else {
    var_1_36 = ((((var_1_25) > (var_1_9)) ? (var_1_25) : (var_1_9)));
   }
  }
 } else {
  var_1_36 = (var_1_23 - var_1_21);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 255);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 49150);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -128);
 assume_abort_if_not(var_1_17 <= 127);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 16383);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741824);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1073741823);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 1610612735);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 64);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 64);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 31);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 31);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741822);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 assume_abort_if_not(var_1_47 != 0.0F);
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 assume_abort_if_not(var_1_48 != 0.0F);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 63);
 assume_abort_if_not(var_1_49 <= 127);
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 4611686.018427383000e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 4611686.018427383000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 1);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 127);
 assume_abort_if_not(var_1_62 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_50 = var_1_50;
}
int property(void) {
 return (((((((((((((((((((var_1_2 - var_1_3) <= var_1_28) ? (((var_1_5 - var_1_6) != (var_1_63 * var_1_28)) ? (var_1_1 == ((unsigned short int) (((((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) < (var_1_9)) ? ((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) + ((((var_1_8) > (256)) ? (var_1_8) : (256))))) : (var_1_9))))) : (var_1_1 == ((unsigned short int) (((((var_1_10) > ((var_1_11 - var_1_6))) ? (var_1_10) : ((var_1_11 - var_1_6)))) - ((((var_1_8) > (var_1_5)) ? (var_1_8) : (var_1_5))))))) : 1) && ((var_1_13 && (var_1_14 && var_1_15)) ? (var_1_12 == ((signed long int) (((((var_1_5 + var_1_26)) > (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11)))))) ? ((var_1_5 + var_1_26)) : (((((var_1_8) > ((var_1_10 - var_1_11))) ? (var_1_8) : ((var_1_10 - var_1_11))))))))) : (var_1_12 == ((signed long int) ((((var_1_26) < (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_26) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))))) && ((var_1_3 >= var_1_10) ? (((var_1_5 - var_1_8) > (var_1_33 + (var_1_10 + var_1_63))) ? (var_1_16 == ((unsigned char) (((var_1_8 / var_1_17) < var_1_63) || (var_1_18 && var_1_19)))) : (((var_1_1 * var_1_21) > var_1_9) ? (var_1_16 == ((unsigned char) (var_1_18 && var_1_19))) : 1)) : ((var_1_9 > var_1_10) ? (var_1_16 == ((unsigned char) var_1_19)) : (var_1_16 == ((unsigned char) var_1_20))))) && ((var_1_10 < 0) ? ((((var_1_22 - var_1_6) << var_1_2) <= var_1_5) ? (var_1_21 == ((unsigned long int) ((((((((var_1_5) < (var_1_1)) ? (var_1_5) : (var_1_1)))) < ((var_1_23 - var_1_24))) ? (((((var_1_5) < (var_1_1)) ? (var_1_5) : (var_1_1)))) : ((var_1_23 - var_1_24)))))) : (var_1_21 == ((unsigned long int) (((2072066314u - var_1_11) + var_1_25) - (8u + var_1_8))))) : (var_1_21 == ((unsigned long int) (var_1_23 - var_1_10))))) && (((var_1_11 * var_1_63) >= ((var_1_5 * var_1_63) | var_1_24)) ? (var_1_26 == ((unsigned short int) (var_1_10 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) : (var_1_26 == ((unsigned short int) (((((var_1_6) < (((((var_1_22) < (var_1_8)) ? (var_1_22) : (var_1_8))))) ? (var_1_6) : (((((var_1_22) < (var_1_8)) ? (var_1_22) : (var_1_8)))))) + var_1_5))))) && ((var_1_25 < var_1_24) ? ((var_1_11 < (var_1_25 / var_1_5)) ? (var_1_27 == ((signed short int) var_1_17)) : (var_1_27 == ((signed short int) ((((-25) > (var_1_6)) ? (-25) : (var_1_6)))))) : ((var_1_2 < (var_1_33 / var_1_11)) ? (var_1_27 == ((signed short int) var_1_11)) : (var_1_27 == ((signed short int) var_1_17))))) && (last_1_var_1_16 ? ((var_1_22 > var_1_8) ? (var_1_28 == ((signed long int) (var_1_5 + (last_1_var_1_44 + var_1_9)))) : 1) : (var_1_28 == ((signed long int) last_1_var_1_28)))) && ((var_1_13 && var_1_16) ? (var_1_30 == ((double) (0.75 - 9.999999999995E11))) : (var_1_30 == ((double) ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))))))) && (((10000.25f - var_1_34) < var_1_31) ? ((var_1_20 && var_1_18) ? (var_1_33 == ((signed long int) (var_1_8 - var_1_6))) : (var_1_33 == ((signed long int) var_1_9))) : (var_1_33 == ((signed long int) (8 - ((((var_1_8) < ((var_1_10 + var_1_35))) ? (var_1_8) : ((var_1_10 + var_1_35))))))))) && ((! var_1_16) ? ((var_1_44 < -2) ? (var_1_16 ? ((var_1_9 <= ((((var_1_21) < (last_1_var_1_36)) ? (var_1_21) : (last_1_var_1_36)))) ? (((var_1_28 >= (var_1_11 + var_1_12)) && var_1_16) ? (var_1_36 == ((unsigned long int) ((var_1_10 + var_1_11) + ((((var_1_25 - var_1_6) < 0 ) ? -(var_1_25 - var_1_6) : (var_1_25 - var_1_6)))))) : (var_1_36 == ((unsigned long int) (((var_1_38 - var_1_21) + var_1_25) - 10000000u)))) : 1) : (var_1_36 == ((unsigned long int) ((((var_1_25) > (var_1_9)) ? (var_1_25) : (var_1_9)))))) : 1) : (var_1_36 == ((unsigned long int) (var_1_23 - var_1_21))))) && (var_1_16 ? (var_1_39 == ((unsigned char) ((((5) > (var_1_6)) ? (5) : (var_1_6))))) : (var_1_39 == ((unsigned char) ((((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))) + (var_1_42 - var_1_43)) + var_1_6))))) && ((last_1_var_1_12 < ((((var_1_41) > (var_1_35)) ? (var_1_41) : (var_1_35)))) ? (var_1_44 == ((signed long int) last_1_var_1_28)) : ((var_1_35 >= (~ -10)) ? (var_1_44 == ((signed long int) ((var_1_45 - ((((var_1_41) < (last_1_var_1_46)) ? (var_1_41) : (last_1_var_1_46)))) - var_1_43))) : ((last_1_var_1_50 >= var_1_34) ? (var_1_19 ? (var_1_44 == ((signed long int) ((last_1_var_1_26 + (var_1_5 + var_1_22)) + (last_1_var_1_36 - 32)))) : 1) : (var_1_44 == ((signed long int) (last_1_var_1_46 - (16 + (var_1_40 + 8))))))))) && ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < (var_1_31 / ((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))))) ? (((var_1_63 < 256) && (! (var_1_47 < var_1_31))) ? (var_1_46 == ((unsigned char) (200 - ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))) : (var_1_46 == ((unsigned char) ((var_1_49 - var_1_43) + ((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))))))) : 1)) && ((var_1_8 != var_1_12) ? (var_1_16 ? (var_1_16 ? (var_1_50 == ((double) ((((((var_1_51 - var_1_52)) > ((var_1_53 + var_1_54))) ? ((var_1_51 - var_1_52)) : ((var_1_53 + var_1_54)))) - ((((var_1_55) < ((var_1_56 - var_1_57))) ? (var_1_55) : ((var_1_56 - var_1_57))))))) : (var_1_50 == ((double) (((((var_1_52) > ((var_1_54 + var_1_53))) ? (var_1_52) : ((var_1_54 + var_1_53)))) - var_1_51)))) : 1) : ((((((var_1_5) > (var_1_63)) ? (var_1_5) : (var_1_63))) == (var_1_23 - var_1_43)) ? (var_1_50 == ((double) ((((var_1_54) > (var_1_31)) ? (var_1_54) : (var_1_31))))) : (var_1_50 == ((double) (((((((((3.8 - var_1_56)) > (var_1_57)) ? ((3.8 - var_1_56)) : (var_1_57)))) < (var_1_52)) ? ((((((3.8 - var_1_56)) > (var_1_57)) ? ((3.8 - var_1_56)) : (var_1_57)))) : (var_1_52)))))))) && ((var_1_18 || ((var_1_11 - var_1_41) > var_1_63)) ? (var_1_58 == ((unsigned char) var_1_43)) : (var_1_58 == ((unsigned char) (var_1_41 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))))) && ((var_1_29 && var_1_13) ? (((var_1_15 && var_1_16) && var_1_29) ? (var_1_20 ? (var_1_59 == ((double) ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) : 1) : 1) : 1)) && (var_1_61 ? ((var_1_55 == var_1_50) ? ((var_1_13 || var_1_14) ? (var_1_60 == ((unsigned char) (var_1_62 - var_1_6))) : (var_1_60 == ((unsigned char) (var_1_6 + var_1_42)))) : (var_1_19 ? (var_1_60 == ((unsigned char) var_1_43)) : (var_1_60 == ((unsigned char) var_1_41)))) : (var_1_60 == ((unsigned char) var_1_40)))) && (((var_1_11 % ((((var_1_42) < (var_1_45)) ? (var_1_42) : (var_1_45)))) <= (((((5) > (var_1_22)) ? (5) : (var_1_22))) / ((((var_1_49) < (var_1_5)) ? (var_1_49) : (var_1_5))))) ? (var_1_63 == ((unsigned long int) var_1_38)) : (var_1_63 == ((unsigned long int) last_1_var_1_28)))
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
