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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
signed char var_1_6 = 4;
signed char var_1_7 = 1;
signed char var_1_8 = 5;
signed char var_1_9 = 1;
signed char var_1_10 = 16;
signed char var_1_11 = 0;
unsigned char var_1_12 = 8;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 224;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 100;
signed long int var_1_19 = 0;
signed char var_1_21 = -50;
signed char var_1_23 = 100;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed long int var_1_26 = 0;
unsigned long int var_1_27 = 32;
unsigned long int var_1_28 = 128;
signed long int var_1_29 = -2;
unsigned long int var_1_31 = 256;
double var_1_32 = 1.625;
double var_1_33 = 7.5;
double var_1_34 = 63.75;
unsigned char var_1_35 = 1;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 5;
double var_1_39 = 15.2;
double var_1_40 = 25.7;
double var_1_41 = 0.0;
double var_1_42 = 5.6;
double var_1_43 = 9999.5;
double var_1_44 = 7.43;
signed short int var_1_45 = 5;
double var_1_46 = 3.755;
double var_1_49 = 255.8;
double var_1_50 = 16.5;
signed short int var_1_51 = 256;
signed long int var_1_52 = 4;
unsigned long int var_1_53 = 50;
unsigned long int var_1_54 = 3174061525;
unsigned long int var_1_55 = 3822049763;
unsigned short int var_1_56 = 2;
float var_1_57 = 32.8;
unsigned short int var_1_58 = 25717;
unsigned short int var_1_59 = 2;
unsigned short int var_1_60 = 38069;
double var_1_61 = 100.95;
double var_1_62 = 31.875;
double var_1_63 = 1.75;
unsigned char var_1_64 = 10;
unsigned char var_1_66 = 100;
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_19 = 0;
unsigned char last_1_var_1_24 = 0;
signed long int last_1_var_1_26 = 0;
unsigned long int last_1_var_1_27 = 32;
unsigned long int last_1_var_1_28 = 128;
signed long int last_1_var_1_29 = -2;
unsigned long int last_1_var_1_31 = 256;
unsigned char last_1_var_1_35 = 1;
signed short int last_1_var_1_45 = 5;
double last_1_var_1_46 = 3.755;
signed short int last_1_var_1_51 = 256;
signed long int last_1_var_1_52 = 4;
unsigned short int last_1_var_1_56 = 2;
double last_1_var_1_62 = 31.875;
double last_1_var_1_63 = 1.75;
unsigned char last_1_var_1_64 = 10;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_11 = var_1_5;
 unsigned char stepLocal_10 = last_1_var_1_1;
 if (last_1_var_1_35 && stepLocal_10) {
  if (stepLocal_11 && last_1_var_1_1) {
   var_1_46 = ((((((((var_1_44) > (var_1_33)) ? (var_1_44) : (var_1_33)))) > ((var_1_42 + var_1_40))) ? (((((var_1_44) > (var_1_33)) ? (var_1_44) : (var_1_33)))) : ((var_1_42 + var_1_40))));
  } else {
   if (! last_1_var_1_24) {
    var_1_46 = (var_1_41 + var_1_43);
   } else {
    var_1_46 = ((var_1_40 + (var_1_41 - var_1_42)) - ((3.7765249609076506E18 - var_1_49) + var_1_43));
   }
  }
 } else {
  var_1_46 = ((((var_1_43) < (((((var_1_50) < ((var_1_41 - var_1_49))) ? (var_1_50) : ((var_1_41 - var_1_49)))))) ? (var_1_43) : (((((var_1_50) < ((var_1_41 - var_1_49))) ? (var_1_50) : ((var_1_41 - var_1_49)))))));
 }
 if (((((last_1_var_1_62) < ((var_1_33 + last_1_var_1_46))) ? (last_1_var_1_62) : ((var_1_33 + last_1_var_1_46)))) >= (- last_1_var_1_63)) {
  var_1_35 = (var_1_4 || (var_1_5 && var_1_37));
 }
 if (last_1_var_1_28 <= last_1_var_1_56) {
  if ((- last_1_var_1_26) < var_1_16) {
   if ((((((last_1_var_1_26) < 0 ) ? -(last_1_var_1_26) : (last_1_var_1_26))) * last_1_var_1_28) < var_1_10) {
    var_1_63 = var_1_41;
   } else {
    var_1_63 = var_1_42;
   }
  } else {
   var_1_63 = var_1_44;
  }
 } else {
  var_1_63 = var_1_44;
 }
 if ((var_1_42 + var_1_63) != var_1_57) {
  var_1_62 = var_1_42;
 }
 unsigned char stepLocal_14 = var_1_17;
 unsigned char stepLocal_13 = var_1_5;
 if (var_1_23 < stepLocal_14) {
  if (var_1_50 >= var_1_33) {
   if (! last_1_var_1_35) {
    if (stepLocal_13 && (-16 < var_1_8)) {
     var_1_53 = (((((var_1_54) < (var_1_55)) ? (var_1_54) : (var_1_55))) - var_1_10);
    }
   } else {
    var_1_53 = (var_1_54 - last_1_var_1_64);
   }
  } else {
   var_1_53 = (var_1_54 - ((((var_1_16) > ((last_1_var_1_29 + var_1_23))) ? (var_1_16) : ((last_1_var_1_29 + var_1_23)))));
  }
 } else {
  var_1_53 = ((((last_1_var_1_29) > (last_1_var_1_45)) ? (last_1_var_1_29) : (last_1_var_1_45)));
 }
 if (var_1_16 != var_1_53) {
  var_1_52 = ((((var_1_10) < (var_1_16)) ? (var_1_10) : (var_1_16)));
 } else {
  var_1_52 = (last_1_var_1_52 - 64);
 }
 signed long int stepLocal_8 = last_1_var_1_52;
 if (stepLocal_8 > 500) {
  var_1_26 = ((((var_1_8) < (((last_1_var_1_27 - last_1_var_1_26) + var_1_18))) ? (var_1_8) : (((last_1_var_1_27 - last_1_var_1_26) + var_1_18))));
 } else {
  var_1_26 = ((((last_1_var_1_31) > (var_1_11)) ? (last_1_var_1_31) : (var_1_11)));
 }
 var_1_27 = 100u;
 var_1_31 = var_1_17;
 var_1_39 = (((4.039304764003796E18 - var_1_40) - (var_1_41 - var_1_42)) + (var_1_43 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))));
 var_1_45 = var_1_23;
 if ((var_1_63 / ((((var_1_41) < (var_1_57)) ? (var_1_41) : (var_1_57)))) <= (var_1_46 * var_1_49)) {
  if (((((last_1_var_1_56) < ((var_1_11 - var_1_23))) ? (last_1_var_1_56) : ((var_1_11 - var_1_23)))) > ((var_1_16 + var_1_15) - last_1_var_1_56)) {
   var_1_56 = ((var_1_58 - var_1_17) + var_1_59);
  } else {
   var_1_56 = ((var_1_17 + 32) + var_1_11);
  }
 } else {
  var_1_56 = (var_1_60 - ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
 }
 unsigned long int stepLocal_7 = ((((var_1_53) < (var_1_15)) ? (var_1_53) : (var_1_15))) + var_1_8;
 signed long int stepLocal_6 = (((var_1_26) > (var_1_17)) ? (var_1_26) : (var_1_17));
 if (var_1_16 != stepLocal_6) {
  if (stepLocal_7 > (var_1_11 / -4)) {
   var_1_24 = (var_1_5 && var_1_25);
  }
 } else {
  var_1_24 = (var_1_35 && var_1_25);
 }
 unsigned long int stepLocal_9 = (var_1_53 + var_1_26) - var_1_11;
 if ((- ((((last_1_var_1_28) > (0)) ? (last_1_var_1_28) : (0)))) == stepLocal_9) {
  var_1_28 = var_1_26;
 } else {
  var_1_28 = ((((var_1_23) < ((var_1_52 + (var_1_18 + last_1_var_1_28)))) ? (var_1_23) : ((var_1_52 + (var_1_18 + last_1_var_1_28)))));
 }
 if (var_1_24) {
  if (var_1_27 <= (- var_1_27)) {
   var_1_29 = (var_1_16 - var_1_27);
  }
 } else {
  if (var_1_26 < var_1_17) {
   var_1_29 = ((var_1_17 - var_1_26) + 8);
  } else {
   var_1_29 = var_1_27;
  }
 }
 signed long int stepLocal_12 = var_1_56 * var_1_26;
 if (((((256) < (32)) ? (256) : (32))) >= stepLocal_12) {
  var_1_51 = ((last_1_var_1_51 + var_1_14) + var_1_10);
 } else {
  var_1_51 = ((((var_1_56) < (var_1_18)) ? (var_1_56) : (var_1_18)));
 }
 if (-32 > var_1_28) {
  var_1_6 = ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)));
 } else {
  var_1_6 = (var_1_9 - (var_1_10 + var_1_11));
 }
 signed char stepLocal_4 = var_1_7;
 unsigned long int stepLocal_3 = - (var_1_27 + var_1_28);
 unsigned long int stepLocal_2 = var_1_27;
 if (stepLocal_2 <= var_1_28) {
  var_1_12 = ((((var_1_11) < ((var_1_10 + var_1_14))) ? (var_1_11) : ((var_1_10 + var_1_14))));
 } else {
  if (var_1_14 < stepLocal_3) {
   if (stepLocal_4 >= var_1_27) {
    var_1_12 = var_1_14;
   } else {
    var_1_12 = (((var_1_15 - var_1_16) - var_1_11) - (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_10));
   }
  } else {
   var_1_12 = var_1_16;
  }
 }
 if (var_1_27 <= var_1_10) {
  if (var_1_10 > var_1_14) {
   var_1_19 = ((((((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) < (((((var_1_29) < (last_1_var_1_19)) ? (var_1_29) : (last_1_var_1_19))))) ? (((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) : (((((var_1_29) < (last_1_var_1_19)) ? (var_1_29) : (last_1_var_1_19))))));
  } else {
   var_1_19 = (var_1_31 - var_1_26);
  }
 }
 unsigned char stepLocal_5 = (- var_1_11) >= var_1_8;
 if (var_1_46 >= var_1_39) {
  var_1_21 = ((var_1_23 - var_1_16) - var_1_10);
 } else {
  if ((var_1_5 && (var_1_52 <= var_1_17)) && stepLocal_5) {
   var_1_21 = (var_1_16 - var_1_23);
  }
 }
 if (var_1_16 > (var_1_23 * var_1_19)) {
  var_1_32 = ((((255.375) < 0 ) ? -(255.375) : (255.375)));
 } else {
  if (var_1_53 < (256u * var_1_31)) {
   var_1_32 = var_1_33;
  } else {
   var_1_32 = ((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)));
  }
 }
 unsigned long int stepLocal_1 = var_1_28;
 unsigned long int stepLocal_0 = var_1_28;
 if (stepLocal_1 == var_1_56) {
  var_1_1 = (! var_1_4);
 } else {
  if ((- var_1_56) < stepLocal_0) {
   var_1_1 = (var_1_4 || ((var_1_56 > var_1_28) || var_1_5));
  }
 }
 if (var_1_1 || (var_1_51 <= var_1_53)) {
  var_1_64 = ((var_1_18 + var_1_66) - ((((var_1_23) < (var_1_10)) ? (var_1_23) : (var_1_10))));
 }
 if (var_1_63 < var_1_33) {
  var_1_38 = (((((var_1_16 + var_1_23)) > (var_1_14)) ? ((var_1_16 + var_1_23)) : (var_1_14)));
 } else {
  if (var_1_1) {
   var_1_38 = var_1_14;
  } else {
   var_1_38 = var_1_16;
  }
 }
 signed long int stepLocal_16 = 2;
 unsigned char stepLocal_15 = var_1_4;
 if (var_1_31 <= stepLocal_16) {
  if (var_1_1 && stepLocal_15) {
   var_1_61 = (((((var_1_41 + var_1_43)) > (var_1_34)) ? ((var_1_41 + var_1_43)) : (var_1_34)));
  }
 } else {
  var_1_61 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 222);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 63);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 63);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 62);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 2305843.009213691400e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 2147483647);
 assume_abort_if_not(var_1_54 <= 4294967294);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 2147483647);
 assume_abort_if_not(var_1_55 <= 4294967294);
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -922337.2036854776000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
 assume_abort_if_not(var_1_57 != 0.0F);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 16383);
 assume_abort_if_not(var_1_58 <= 32767);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 32767);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 32767);
 assume_abort_if_not(var_1_60 <= 65534);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 64);
 assume_abort_if_not(var_1_66 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return (((((((((((((((((((((((((var_1_28 == var_1_56) ? (var_1_1 == ((unsigned char) (! var_1_4))) : (((- var_1_56) < var_1_28) ? (var_1_1 == ((unsigned char) (var_1_4 || ((var_1_56 > var_1_28) || var_1_5)))) : 1)) && ((-32 > var_1_28) ? (var_1_6 == ((signed char) ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))))) : (var_1_6 == ((signed char) (var_1_9 - (var_1_10 + var_1_11)))))) && ((var_1_27 <= var_1_28) ? (var_1_12 == ((unsigned char) ((((var_1_11) < ((var_1_10 + var_1_14))) ? (var_1_11) : ((var_1_10 + var_1_14)))))) : ((var_1_14 < (- (var_1_27 + var_1_28))) ? ((var_1_7 >= var_1_27) ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) (((var_1_15 - var_1_16) - var_1_11) - (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_10))))) : (var_1_12 == ((unsigned char) var_1_16))))) && ((var_1_27 <= var_1_10) ? ((var_1_10 > var_1_14) ? (var_1_19 == ((signed long int) ((((((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) < (((((var_1_29) < (last_1_var_1_19)) ? (var_1_29) : (last_1_var_1_19))))) ? (((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))) : (((((var_1_29) < (last_1_var_1_19)) ? (var_1_29) : (last_1_var_1_19)))))))) : (var_1_19 == ((signed long int) (var_1_31 - var_1_26)))) : 1)) && ((var_1_46 >= var_1_39) ? (var_1_21 == ((signed char) ((var_1_23 - var_1_16) - var_1_10))) : (((var_1_5 && (var_1_52 <= var_1_17)) && ((- var_1_11) >= var_1_8)) ? (var_1_21 == ((signed char) (var_1_16 - var_1_23))) : 1))) && ((var_1_16 != ((((var_1_26) > (var_1_17)) ? (var_1_26) : (var_1_17)))) ? (((((((var_1_53) < (var_1_15)) ? (var_1_53) : (var_1_15))) + var_1_8) > (var_1_11 / -4)) ? (var_1_24 == ((unsigned char) (var_1_5 && var_1_25))) : 1) : (var_1_24 == ((unsigned char) (var_1_35 && var_1_25))))) && ((last_1_var_1_52 > 500) ? (var_1_26 == ((signed long int) ((((var_1_8) < (((last_1_var_1_27 - last_1_var_1_26) + var_1_18))) ? (var_1_8) : (((last_1_var_1_27 - last_1_var_1_26) + var_1_18)))))) : (var_1_26 == ((signed long int) ((((last_1_var_1_31) > (var_1_11)) ? (last_1_var_1_31) : (var_1_11))))))) && (var_1_27 == ((unsigned long int) 100u))) && (((- ((((last_1_var_1_28) > (0)) ? (last_1_var_1_28) : (0)))) == ((var_1_53 + var_1_26) - var_1_11)) ? (var_1_28 == ((unsigned long int) var_1_26)) : (var_1_28 == ((unsigned long int) ((((var_1_23) < ((var_1_52 + (var_1_18 + last_1_var_1_28)))) ? (var_1_23) : ((var_1_52 + (var_1_18 + last_1_var_1_28))))))))) && (var_1_24 ? ((var_1_27 <= (- var_1_27)) ? (var_1_29 == ((signed long int) (var_1_16 - var_1_27))) : 1) : ((var_1_26 < var_1_17) ? (var_1_29 == ((signed long int) ((var_1_17 - var_1_26) + 8))) : (var_1_29 == ((signed long int) var_1_27))))) && (var_1_31 == ((unsigned long int) var_1_17))) && ((var_1_16 > (var_1_23 * var_1_19)) ? (var_1_32 == ((double) ((((255.375) < 0 ) ? -(255.375) : (255.375))))) : ((var_1_53 < (256u * var_1_31)) ? (var_1_32 == ((double) var_1_33)) : (var_1_32 == ((double) ((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)))))))) && ((((((last_1_var_1_62) < ((var_1_33 + last_1_var_1_46))) ? (last_1_var_1_62) : ((var_1_33 + last_1_var_1_46)))) >= (- last_1_var_1_63)) ? (var_1_35 == ((unsigned char) (var_1_4 || (var_1_5 && var_1_37)))) : 1)) && ((var_1_63 < var_1_33) ? (var_1_38 == ((unsigned char) (((((var_1_16 + var_1_23)) > (var_1_14)) ? ((var_1_16 + var_1_23)) : (var_1_14))))) : (var_1_1 ? (var_1_38 == ((unsigned char) var_1_14)) : (var_1_38 == ((unsigned char) var_1_16))))) && (var_1_39 == ((double) (((4.039304764003796E18 - var_1_40) - (var_1_41 - var_1_42)) + (var_1_43 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))))) && (var_1_45 == ((signed short int) var_1_23))) && ((last_1_var_1_35 && last_1_var_1_1) ? ((var_1_5 && last_1_var_1_1) ? (var_1_46 == ((double) ((((((((var_1_44) > (var_1_33)) ? (var_1_44) : (var_1_33)))) > ((var_1_42 + var_1_40))) ? (((((var_1_44) > (var_1_33)) ? (var_1_44) : (var_1_33)))) : ((var_1_42 + var_1_40)))))) : ((! last_1_var_1_24) ? (var_1_46 == ((double) (var_1_41 + var_1_43))) : (var_1_46 == ((double) ((var_1_40 + (var_1_41 - var_1_42)) - ((3.7765249609076506E18 - var_1_49) + var_1_43)))))) : (var_1_46 == ((double) ((((var_1_43) < (((((var_1_50) < ((var_1_41 - var_1_49))) ? (var_1_50) : ((var_1_41 - var_1_49)))))) ? (var_1_43) : (((((var_1_50) < ((var_1_41 - var_1_49))) ? (var_1_50) : ((var_1_41 - var_1_49))))))))))) && ((((((256) < (32)) ? (256) : (32))) >= (var_1_56 * var_1_26)) ? (var_1_51 == ((signed short int) ((last_1_var_1_51 + var_1_14) + var_1_10))) : (var_1_51 == ((signed short int) ((((var_1_56) < (var_1_18)) ? (var_1_56) : (var_1_18))))))) && ((var_1_16 != var_1_53) ? (var_1_52 == ((signed long int) ((((var_1_10) < (var_1_16)) ? (var_1_10) : (var_1_16))))) : (var_1_52 == ((signed long int) (last_1_var_1_52 - 64))))) && ((var_1_23 < var_1_17) ? ((var_1_50 >= var_1_33) ? ((! last_1_var_1_35) ? ((var_1_5 && (-16 < var_1_8)) ? (var_1_53 == ((unsigned long int) (((((var_1_54) < (var_1_55)) ? (var_1_54) : (var_1_55))) - var_1_10))) : 1) : (var_1_53 == ((unsigned long int) (var_1_54 - last_1_var_1_64)))) : (var_1_53 == ((unsigned long int) (var_1_54 - ((((var_1_16) > ((last_1_var_1_29 + var_1_23))) ? (var_1_16) : ((last_1_var_1_29 + var_1_23)))))))) : (var_1_53 == ((unsigned long int) ((((last_1_var_1_29) > (last_1_var_1_45)) ? (last_1_var_1_29) : (last_1_var_1_45))))))) && (((var_1_63 / ((((var_1_41) < (var_1_57)) ? (var_1_41) : (var_1_57)))) <= (var_1_46 * var_1_49)) ? ((((((last_1_var_1_56) < ((var_1_11 - var_1_23))) ? (last_1_var_1_56) : ((var_1_11 - var_1_23)))) > ((var_1_16 + var_1_15) - last_1_var_1_56)) ? (var_1_56 == ((unsigned short int) ((var_1_58 - var_1_17) + var_1_59))) : (var_1_56 == ((unsigned short int) ((var_1_17 + 32) + var_1_11)))) : (var_1_56 == ((unsigned short int) (var_1_60 - ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))))) && ((var_1_31 <= 2) ? ((var_1_1 && var_1_4) ? (var_1_61 == ((double) (((((var_1_41 + var_1_43)) > (var_1_34)) ? ((var_1_41 + var_1_43)) : (var_1_34))))) : 1) : (var_1_61 == ((double) ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))))) && (((var_1_42 + var_1_63) != var_1_57) ? (var_1_62 == ((double) var_1_42)) : 1)) && ((last_1_var_1_28 <= last_1_var_1_56) ? (((- last_1_var_1_26) < var_1_16) ? (((((((last_1_var_1_26) < 0 ) ? -(last_1_var_1_26) : (last_1_var_1_26))) * last_1_var_1_28) < var_1_10) ? (var_1_63 == ((double) var_1_41)) : (var_1_63 == ((double) var_1_42))) : (var_1_63 == ((double) var_1_44))) : (var_1_63 == ((double) var_1_44)))) && ((var_1_1 || (var_1_51 <= var_1_53)) ? (var_1_64 == ((unsigned char) ((var_1_18 + var_1_66) - ((((var_1_23) < (var_1_10)) ? (var_1_23) : (var_1_10)))))) : 1)
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
