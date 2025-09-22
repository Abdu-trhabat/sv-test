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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
signed short int var_1_3 = 24009;
signed short int var_1_4 = 32;
signed short int var_1_5 = 64;
signed short int var_1_6 = 19467;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
signed short int var_1_13 = 10;
float var_1_14 = 25.75;
float var_1_15 = 9.5;
float var_1_16 = 256.8;
float var_1_17 = 9.6;
signed long int var_1_18 = -4;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 8;
unsigned long int var_1_23 = 100;
unsigned long int var_1_24 = 5;
unsigned long int var_1_25 = 2643379110;
signed long int var_1_26 = 64;
unsigned short int var_1_27 = 128;
double var_1_28 = 15.1;
unsigned short int var_1_29 = 56358;
unsigned long int var_1_30 = 8;
unsigned short int var_1_31 = 16;
unsigned short int var_1_32 = 5;
unsigned long int var_1_33 = 1652750628;
unsigned long int var_1_34 = 1798940172;
signed long int var_1_35 = -64;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 10;
unsigned char var_1_39 = 128;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
signed long int var_1_48 = 100000;
signed long int var_1_49 = 1545243554;
signed char var_1_50 = 8;
signed long int var_1_51 = 1895595244;
signed long int var_1_52 = 10;
signed char var_1_53 = 32;
signed char var_1_54 = 100;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 2;
unsigned short int var_1_58 = 256;
unsigned char last_1_var_1_7 = 64;
signed long int last_1_var_1_18 = -4;
unsigned char last_1_var_1_19 = 4;
unsigned long int last_1_var_1_23 = 100;
unsigned short int last_1_var_1_27 = 128;
unsigned long int last_1_var_1_30 = 8;
signed long int last_1_var_1_48 = 100000;
unsigned char last_1_var_1_55 = 0;
void initially(void) {
}
void step(void) {
 if (((64 % var_1_43) + (var_1_11 - var_1_42)) >= (8 * last_1_var_1_30)) {
  var_1_45 = (last_1_var_1_55 && var_1_46);
 } else {
  var_1_45 = ((var_1_46 && last_1_var_1_55) || var_1_47);
 }
 if (var_1_47) {
  var_1_55 = (var_1_46 || (var_1_45 && var_1_56));
 }
 signed long int stepLocal_2 = var_1_11 % var_1_8;
 signed long int stepLocal_1 = -8 + var_1_3;
 if (stepLocal_1 <= ((((((((var_1_4) > (var_1_9)) ? (var_1_4) : (var_1_9)))) > (var_1_10)) ? (((((var_1_4) > (var_1_9)) ? (var_1_4) : (var_1_9)))) : (var_1_10)))) {
  var_1_23 = ((2u + var_1_3) + var_1_10);
 } else {
  if (((((var_1_10) < (last_1_var_1_18)) ? (var_1_10) : (last_1_var_1_18))) >= stepLocal_2) {
   var_1_23 = (var_1_24 + var_1_9);
  } else {
   var_1_23 = ((((last_1_var_1_7) < ((var_1_25 - (last_1_var_1_30 + 128u)))) ? (last_1_var_1_7) : ((var_1_25 - (last_1_var_1_30 + 128u)))));
  }
 }
 if ((var_1_3 / var_1_8) < var_1_13) {
  var_1_18 = (var_1_5 + (var_1_10 - var_1_13));
 } else {
  if (var_1_8 <= var_1_9) {
   var_1_18 = 128;
  } else {
   var_1_18 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
  }
 }
 if (((var_1_10 + var_1_9) >> (var_1_31 - var_1_32)) <= var_1_29) {
  if ((last_1_var_1_19 + last_1_var_1_27) <= var_1_32) {
   var_1_30 = (var_1_25 - var_1_13);
  } else {
   var_1_30 = (((var_1_33 - var_1_4) + (var_1_34 - last_1_var_1_48)) - 10000000u);
  }
 } else {
  if (last_1_var_1_48 > last_1_var_1_23) {
   var_1_30 = ((((var_1_9) > (var_1_6)) ? (var_1_9) : (var_1_6)));
  }
 }
 if (! var_1_55) {
  var_1_12 = ((var_1_14 + ((((49.5f) < 0 ) ? -(49.5f) : (49.5f)))) + var_1_15);
 } else {
  var_1_12 = ((((((10.6f) > (var_1_16)) ? (10.6f) : (var_1_16))) - var_1_17) + var_1_15);
 }
 if ((var_1_25 + var_1_30) < (~ var_1_52)) {
  var_1_58 = var_1_22;
 } else {
  if ((var_1_30 < var_1_29) && var_1_45) {
   var_1_58 = var_1_39;
  } else {
   var_1_58 = var_1_54;
  }
 }
 if (var_1_45) {
  var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
 } else {
  var_1_1 = (((((var_1_3) > ((var_1_6 - var_1_4))) ? (var_1_3) : ((var_1_6 - var_1_4)))) - var_1_5);
 }
 if ((- var_1_28) <= ((((var_1_12) < ((var_1_17 * var_1_16))) ? (var_1_12) : ((var_1_17 * var_1_16))))) {
  var_1_27 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
 } else {
  var_1_27 = (var_1_29 - var_1_58);
 }
 if (((var_1_5 * var_1_30) * 1u) <= var_1_23) {
  if (var_1_9 < 2) {
   var_1_35 = (var_1_10 + var_1_6);
  }
 } else {
  var_1_35 = ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) < 0 ) ? -((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) : ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) - (var_1_29 + var_1_3));
 }
 signed long int stepLocal_5 = 50 << var_1_8;
 unsigned long int stepLocal_4 = var_1_30;
 if ((var_1_17 + var_1_16) >= var_1_12) {
  var_1_37 = (((((var_1_8 - var_1_38)) < ((var_1_39 - var_1_10))) ? ((var_1_8 - var_1_38)) : ((var_1_39 - var_1_10))));
 } else {
  if (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) <= stepLocal_4) {
   if (stepLocal_5 != ((var_1_23 | -200) / var_1_33)) {
    var_1_37 = (var_1_39 - var_1_38);
   } else {
    var_1_37 = (var_1_38 + var_1_32);
   }
  } else {
   var_1_37 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
  }
 }
 var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));
 unsigned char stepLocal_0 = var_1_21;
 if (var_1_2) {
  if (var_1_20 && stepLocal_0) {
   var_1_19 = var_1_9;
  } else {
   if ((var_1_14 + (var_1_17 - var_1_16)) > var_1_15) {
    if (var_1_14 > -0.5f) {
     var_1_19 = ((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22)));
    }
   } else {
    var_1_19 = var_1_8;
   }
  }
 } else {
  var_1_19 = var_1_22;
 }
 signed short int stepLocal_3 = var_1_6;
 if (stepLocal_3 >= var_1_3) {
  if (! var_1_45) {
   var_1_26 = (var_1_8 + var_1_3);
  }
 } else {
  var_1_26 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
 }
 unsigned char stepLocal_6 = var_1_21;
 if (var_1_2 && stepLocal_6) {
  var_1_41 = (((((((((var_1_38) > (var_1_10)) ? (var_1_38) : (var_1_10)))) < (var_1_11)) ? (((((var_1_38) > (var_1_10)) ? (var_1_38) : (var_1_10)))) : (var_1_11))) + ((((((((var_1_9) < (var_1_32)) ? (var_1_9) : (var_1_32)))) < (((((var_1_31) > (var_1_42)) ? (var_1_31) : (var_1_42))))) ? (((((var_1_9) < (var_1_32)) ? (var_1_9) : (var_1_32)))) : (((((var_1_31) > (var_1_42)) ? (var_1_31) : (var_1_42)))))));
 } else {
  if (var_1_28 == var_1_16) {
   if (var_1_21) {
    var_1_41 = ((((var_1_38) > ((((((128 - var_1_42)) < ((var_1_9 + 5))) ? ((128 - var_1_42)) : ((var_1_9 + 5)))))) ? (var_1_38) : ((((((128 - var_1_42)) < ((var_1_9 + 5))) ? ((128 - var_1_42)) : ((var_1_9 + 5)))))));
   }
  } else {
   var_1_41 = (((var_1_43 + var_1_44) - var_1_11) - var_1_32);
  }
 }
 unsigned char stepLocal_7 = var_1_20;
 if (1.5 < var_1_12) {
  if (var_1_21 && stepLocal_7) {
   var_1_53 = ((var_1_54 - var_1_10) - (var_1_9 + var_1_31));
  }
 }
 unsigned char stepLocal_9 = var_1_56;
 unsigned char stepLocal_8 = var_1_43 > var_1_31;
 if (var_1_47) {
  if ((var_1_37 < var_1_3) && stepLocal_8) {
   var_1_57 = (128 - var_1_10);
  } else {
   if ((-256 == ((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30)))) && stepLocal_9) {
    var_1_57 = var_1_11;
   } else {
    var_1_57 = 4;
   }
  }
 } else {
  var_1_57 = var_1_11;
 }
 if ((128 - (var_1_31 + var_1_9)) < var_1_30) {
  var_1_48 = ((((((((var_1_6) < (var_1_38)) ? (var_1_6) : (var_1_38)))) > (var_1_37)) ? (((((var_1_6) < (var_1_38)) ? (var_1_6) : (var_1_38)))) : (var_1_37)));
 } else {
  if (var_1_35 <= (var_1_5 + var_1_39)) {
   var_1_48 = (var_1_10 - (var_1_49 - var_1_3));
  } else {
   if ((var_1_32 & (var_1_50 - var_1_38)) < var_1_37) {
    if (var_1_45 || ((var_1_14 + var_1_28) >= var_1_17)) {
     var_1_48 = (256 + var_1_1);
    } else {
     var_1_48 = (var_1_50 - ((var_1_51 - var_1_31) - var_1_29));
    }
   } else {
    if (var_1_42 < var_1_31) {
     if (! ((var_1_41 + var_1_8) != var_1_22)) {
      var_1_48 = (((((last_1_var_1_48) > ((var_1_51 - var_1_8))) ? (last_1_var_1_48) : ((var_1_51 - var_1_8)))) - (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) + var_1_52));
     }
    } else {
     if (var_1_47 && var_1_45) {
      var_1_48 = ((((((((((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) > ((var_1_10 - var_1_58))) ? (((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) : ((var_1_10 - var_1_58))))) > ((((((var_1_49 - 1)) > (var_1_9)) ? ((var_1_49 - 1)) : (var_1_9))))) ? (((((((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) > ((var_1_10 - var_1_58))) ? (((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) : ((var_1_10 - var_1_58))))) : ((((((var_1_49 - 1)) > (var_1_9)) ? ((var_1_49 - 1)) : (var_1_9))))));
     }
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 16382);
 assume_abort_if_not(var_1_3 <= 32766);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 16382);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 15);
 assume_abort_if_not(var_1_31 <= 30);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 14);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 1610612735);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1610612735);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 95);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 95);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 1073741823);
 assume_abort_if_not(var_1_49 <= 2147483646);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -1);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 1610612734);
 assume_abort_if_not(var_1_51 <= 2147483646);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 1073741823);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= 62);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_55 = var_1_55;
}
int property(void) {
 return (((((((((((((((((var_1_45 ? (var_1_1 == ((signed short int) ((var_1_3 - var_1_4) - var_1_5))) : (var_1_1 == ((signed short int) (((((var_1_3) > ((var_1_6 - var_1_4))) ? (var_1_3) : ((var_1_6 - var_1_4)))) - var_1_5)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((! var_1_55) ? (var_1_12 == ((float) ((var_1_14 + ((((49.5f) < 0 ) ? -(49.5f) : (49.5f)))) + var_1_15))) : (var_1_12 == ((float) ((((((10.6f) > (var_1_16)) ? (10.6f) : (var_1_16))) - var_1_17) + var_1_15))))) && (((var_1_3 / var_1_8) < var_1_13) ? (var_1_18 == ((signed long int) (var_1_5 + (var_1_10 - var_1_13)))) : ((var_1_8 <= var_1_9) ? (var_1_18 == ((signed long int) 128)) : (var_1_18 == ((signed long int) ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))))) && (var_1_2 ? ((var_1_20 && var_1_21) ? (var_1_19 == ((unsigned char) var_1_9)) : (((var_1_14 + (var_1_17 - var_1_16)) > var_1_15) ? ((var_1_14 > -0.5f) ? (var_1_19 == ((unsigned char) ((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22))))) : 1) : (var_1_19 == ((unsigned char) var_1_8)))) : (var_1_19 == ((unsigned char) var_1_22)))) && (((-8 + var_1_3) <= ((((((((var_1_4) > (var_1_9)) ? (var_1_4) : (var_1_9)))) > (var_1_10)) ? (((((var_1_4) > (var_1_9)) ? (var_1_4) : (var_1_9)))) : (var_1_10)))) ? (var_1_23 == ((unsigned long int) ((2u + var_1_3) + var_1_10))) : ((((((var_1_10) < (last_1_var_1_18)) ? (var_1_10) : (last_1_var_1_18))) >= (var_1_11 % var_1_8)) ? (var_1_23 == ((unsigned long int) (var_1_24 + var_1_9))) : (var_1_23 == ((unsigned long int) ((((last_1_var_1_7) < ((var_1_25 - (last_1_var_1_30 + 128u)))) ? (last_1_var_1_7) : ((var_1_25 - (last_1_var_1_30 + 128u)))))))))) && ((var_1_6 >= var_1_3) ? ((! var_1_45) ? (var_1_26 == ((signed long int) (var_1_8 + var_1_3))) : 1) : (var_1_26 == ((signed long int) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))) && (((- var_1_28) <= ((((var_1_12) < ((var_1_17 * var_1_16))) ? (var_1_12) : ((var_1_17 * var_1_16))))) ? (var_1_27 == ((unsigned short int) ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) : (var_1_27 == ((unsigned short int) (var_1_29 - var_1_58))))) && ((((var_1_10 + var_1_9) >> (var_1_31 - var_1_32)) <= var_1_29) ? (((last_1_var_1_19 + last_1_var_1_27) <= var_1_32) ? (var_1_30 == ((unsigned long int) (var_1_25 - var_1_13))) : (var_1_30 == ((unsigned long int) (((var_1_33 - var_1_4) + (var_1_34 - last_1_var_1_48)) - 10000000u)))) : ((last_1_var_1_48 > last_1_var_1_23) ? (var_1_30 == ((unsigned long int) ((((var_1_9) > (var_1_6)) ? (var_1_9) : (var_1_6))))) : 1))) && ((((var_1_5 * var_1_30) * 1u) <= var_1_23) ? ((var_1_9 < 2) ? (var_1_35 == ((signed long int) (var_1_10 + var_1_6))) : 1) : (var_1_35 == ((signed long int) ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) < 0 ) ? -((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) : ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) - (var_1_29 + var_1_3)))))) && (((var_1_17 + var_1_16) >= var_1_12) ? (var_1_37 == ((unsigned char) (((((var_1_8 - var_1_38)) < ((var_1_39 - var_1_10))) ? ((var_1_8 - var_1_38)) : ((var_1_39 - var_1_10)))))) : ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) <= var_1_30) ? (((50 << var_1_8) != ((var_1_23 | -200) / var_1_33)) ? (var_1_37 == ((unsigned char) (var_1_39 - var_1_38))) : (var_1_37 == ((unsigned char) (var_1_38 + var_1_32)))) : (var_1_37 == ((unsigned char) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))))) && ((var_1_2 && var_1_21) ? (var_1_41 == ((unsigned char) (((((((((var_1_38) > (var_1_10)) ? (var_1_38) : (var_1_10)))) < (var_1_11)) ? (((((var_1_38) > (var_1_10)) ? (var_1_38) : (var_1_10)))) : (var_1_11))) + ((((((((var_1_9) < (var_1_32)) ? (var_1_9) : (var_1_32)))) < (((((var_1_31) > (var_1_42)) ? (var_1_31) : (var_1_42))))) ? (((((var_1_9) < (var_1_32)) ? (var_1_9) : (var_1_32)))) : (((((var_1_31) > (var_1_42)) ? (var_1_31) : (var_1_42))))))))) : ((var_1_28 == var_1_16) ? (var_1_21 ? (var_1_41 == ((unsigned char) ((((var_1_38) > ((((((128 - var_1_42)) < ((var_1_9 + 5))) ? ((128 - var_1_42)) : ((var_1_9 + 5)))))) ? (var_1_38) : ((((((128 - var_1_42)) < ((var_1_9 + 5))) ? ((128 - var_1_42)) : ((var_1_9 + 5))))))))) : 1) : (var_1_41 == ((unsigned char) (((var_1_43 + var_1_44) - var_1_11) - var_1_32)))))) && ((((64 % var_1_43) + (var_1_11 - var_1_42)) >= (8 * last_1_var_1_30)) ? (var_1_45 == ((unsigned char) (last_1_var_1_55 && var_1_46))) : (var_1_45 == ((unsigned char) ((var_1_46 && last_1_var_1_55) || var_1_47))))) && (((128 - (var_1_31 + var_1_9)) < var_1_30) ? (var_1_48 == ((signed long int) ((((((((var_1_6) < (var_1_38)) ? (var_1_6) : (var_1_38)))) > (var_1_37)) ? (((((var_1_6) < (var_1_38)) ? (var_1_6) : (var_1_38)))) : (var_1_37))))) : ((var_1_35 <= (var_1_5 + var_1_39)) ? (var_1_48 == ((signed long int) (var_1_10 - (var_1_49 - var_1_3)))) : (((var_1_32 & (var_1_50 - var_1_38)) < var_1_37) ? ((var_1_45 || ((var_1_14 + var_1_28) >= var_1_17)) ? (var_1_48 == ((signed long int) (256 + var_1_1))) : (var_1_48 == ((signed long int) (var_1_50 - ((var_1_51 - var_1_31) - var_1_29))))) : ((var_1_42 < var_1_31) ? ((! ((var_1_41 + var_1_8) != var_1_22)) ? (var_1_48 == ((signed long int) (((((last_1_var_1_48) > ((var_1_51 - var_1_8))) ? (last_1_var_1_48) : ((var_1_51 - var_1_8)))) - (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) + var_1_52)))) : 1) : ((var_1_47 && var_1_45) ? (var_1_48 == ((signed long int) ((((((((((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) > ((var_1_10 - var_1_58))) ? (((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) : ((var_1_10 - var_1_58))))) > ((((((var_1_49 - 1)) > (var_1_9)) ? ((var_1_49 - 1)) : (var_1_9))))) ? (((((((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) > ((var_1_10 - var_1_58))) ? (((((var_1_7) > (var_1_51)) ? (var_1_7) : (var_1_51)))) : ((var_1_10 - var_1_58))))) : ((((((var_1_49 - 1)) > (var_1_9)) ? ((var_1_49 - 1)) : (var_1_9)))))))) : 1)))))) && ((1.5 < var_1_12) ? ((var_1_21 && var_1_20) ? (var_1_53 == ((signed char) ((var_1_54 - var_1_10) - (var_1_9 + var_1_31)))) : 1) : 1)) && (var_1_47 ? (var_1_55 == ((unsigned char) (var_1_46 || (var_1_45 && var_1_56)))) : 1)) && (var_1_47 ? (((var_1_37 < var_1_3) && (var_1_43 > var_1_31)) ? (var_1_57 == ((unsigned char) (128 - var_1_10))) : (((-256 == ((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30)))) && var_1_56) ? (var_1_57 == ((unsigned char) var_1_11)) : (var_1_57 == ((unsigned char) 4)))) : (var_1_57 == ((unsigned char) var_1_11)))) && (((var_1_25 + var_1_30) < (~ var_1_52)) ? (var_1_58 == ((unsigned short int) var_1_22)) : (((var_1_30 < var_1_29) && var_1_45) ? (var_1_58 == ((unsigned short int) var_1_39)) : (var_1_58 == ((unsigned short int) var_1_54))))
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
