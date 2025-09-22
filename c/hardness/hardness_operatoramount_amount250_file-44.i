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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44Amount250.c", 13, "reach_error"); }
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
signed long int var_1_2 = -5;
signed long int var_1_3 = -10000;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 25;
signed long int var_1_7 = 2;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 256;
signed short int var_1_10 = -25;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 256.75;
float var_1_15 = 256.25;
float var_1_16 = 8.95;
float var_1_17 = 256.375;
float var_1_18 = 0.0;
float var_1_19 = 3.75;
unsigned short int var_1_20 = 64;
unsigned short int var_1_21 = 0;
float var_1_22 = 100.5;
unsigned short int var_1_23 = 50;
unsigned short int var_1_24 = 64;
double var_1_25 = 32.6;
unsigned char var_1_26 = 1;
signed long int var_1_27 = 1000000000;
unsigned char var_1_28 = 0;
double var_1_29 = 100.4;
signed char var_1_30 = 2;
signed short int var_1_31 = 16;
signed short int var_1_32 = 8;
signed short int var_1_33 = 5;
double var_1_34 = 0.0;
double var_1_35 = 63.8;
double var_1_36 = 127.75;
double var_1_37 = 0.4;
unsigned long int var_1_38 = 50;
unsigned long int var_1_39 = 3554953517;
signed long int var_1_40 = 10;
unsigned long int var_1_41 = 1288451214;
unsigned long int var_1_42 = 2041491209;
unsigned long int var_1_43 = 1;
unsigned long int var_1_44 = 4;
unsigned short int var_1_45 = 2;
signed short int var_1_47 = 10;
unsigned short int var_1_48 = 65098;
signed char var_1_49 = -10;
signed long int var_1_50 = 25;
unsigned long int var_1_51 = 2502591507;
signed long int var_1_52 = -2;
signed long int var_1_53 = 0;
signed long int var_1_54 = 1234215986;
double var_1_55 = 32.6;
unsigned char var_1_56 = 0;
signed char var_1_57 = 25;
unsigned short int var_1_58 = 2;
unsigned long int var_1_59 = 64;
signed char var_1_60 = 50;
signed short int var_1_61 = 32;
unsigned short int var_1_63 = 64;
float var_1_64 = 16.75;
float var_1_65 = 64.5;
unsigned char last_1_var_1_5 = 0;
unsigned short int last_1_var_1_20 = 64;
unsigned short int last_1_var_1_23 = 50;
double last_1_var_1_25 = 32.6;
unsigned long int last_1_var_1_38 = 50;
unsigned short int last_1_var_1_45 = 2;
signed char last_1_var_1_49 = -10;
signed long int last_1_var_1_53 = 0;
signed short int last_1_var_1_61 = 32;
unsigned short int last_1_var_1_63 = 64;
float last_1_var_1_64 = 16.75;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_5) {
  var_1_63 = var_1_60;
 }
 if ((((((var_1_32) > (4)) ? (var_1_32) : (4))) - var_1_33) <= var_1_24) {
  if (! var_1_4) {
   if (var_1_39 >= (var_1_51 - (var_1_41 - var_1_21))) {
    if (last_1_var_1_23 >= var_1_27) {
     if (last_1_var_1_23 == (last_1_var_1_61 + (last_1_var_1_45 / var_1_33))) {
      var_1_50 = (((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24))) - var_1_30);
     } else {
      var_1_50 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
     }
    } else {
     var_1_50 = var_1_52;
    }
   } else {
    var_1_50 = (((((var_1_33) < (((((last_1_var_1_23) > (last_1_var_1_38)) ? (last_1_var_1_23) : (last_1_var_1_38))))) ? (var_1_33) : (((((last_1_var_1_23) > (last_1_var_1_38)) ? (last_1_var_1_23) : (last_1_var_1_38)))))) - (var_1_31 + var_1_24));
   }
  } else {
   var_1_50 = ((((((((last_1_var_1_49) < (4)) ? (last_1_var_1_49) : (4))) < 0 ) ? -((((last_1_var_1_49) < (4)) ? (last_1_var_1_49) : (4))) : ((((last_1_var_1_49) < (4)) ? (last_1_var_1_49) : (4))))) - (((((last_1_var_1_38) < (last_1_var_1_45)) ? (last_1_var_1_38) : (last_1_var_1_45))) + ((((last_1_var_1_23) > (var_1_40)) ? (last_1_var_1_23) : (var_1_40)))));
  }
 }
 if (var_1_35 >= var_1_16) {
  if (last_1_var_1_25 <= var_1_37) {
   var_1_53 = (((var_1_48 - var_1_21) + (var_1_33 + var_1_24)) + (last_1_var_1_20 + ((((32) < (-5)) ? (32) : (-5)))));
  }
 } else {
  var_1_53 = ((((((1692685638) > (var_1_54)) ? (1692685638) : (var_1_54))) - var_1_32) - ((((last_1_var_1_63) < 0 ) ? -(last_1_var_1_63) : (last_1_var_1_63))));
 }
 signed long int stepLocal_10 = ~ var_1_30;
 unsigned short int stepLocal_9 = var_1_21;
 signed long int stepLocal_8 = var_1_27;
 signed long int stepLocal_7 = var_1_24 * last_1_var_1_53;
 signed long int stepLocal_6 = last_1_var_1_23;
 if (var_1_17 >= (- var_1_34)) {
  if (stepLocal_8 <= -1) {
   if (stepLocal_10 > (var_1_31 & (var_1_27 * var_1_6))) {
    var_1_38 = var_1_24;
   }
  } else {
   var_1_38 = ((var_1_39 - (last_1_var_1_38 + 500u)) - 4u);
  }
 } else {
  if (stepLocal_6 <= (last_1_var_1_53 ^ var_1_32)) {
   if (var_1_15 <= last_1_var_1_64) {
    if (stepLocal_7 <= ((1687852967 - var_1_40) >> var_1_33)) {
     if (var_1_33 < stepLocal_9) {
      var_1_38 = (((((var_1_7) > ((var_1_41 - last_1_var_1_38))) ? (var_1_7) : ((var_1_41 - last_1_var_1_38)))) + var_1_24);
     }
    } else {
     if (var_1_4) {
      var_1_38 = ((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - last_1_var_1_38) + var_1_43);
     }
    }
   } else {
    var_1_38 = (((((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) < 0 ) ? -((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) : ((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44)))));
   }
  }
 }
 var_1_9 = ((((-10) < (var_1_10)) ? (-10) : (var_1_10)));
 var_1_11 = ((var_1_8 || var_1_4) && var_1_12);
 var_1_20 = (45013 - var_1_21);
 var_1_22 = ((((((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) > (var_1_17)) ? (((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) : (var_1_17)));
 if ((9999999.6 / var_1_18) > var_1_16) {
  var_1_23 = ((((var_1_21 + var_1_24) < 0 ) ? -(var_1_21 + var_1_24) : (var_1_21 + var_1_24)));
 }
 var_1_25 = (((((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) > (var_1_16)) ? ((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) : (var_1_16)));
 signed char stepLocal_12 = var_1_30;
 if (var_1_10 < stepLocal_12) {
  var_1_55 = var_1_16;
 } else {
  var_1_55 = (var_1_34 - var_1_37);
 }
 var_1_64 = var_1_19;
 signed long int stepLocal_5 = (var_1_30 + var_1_31) - var_1_21;
 signed long int stepLocal_4 = var_1_63 >> (var_1_32 + var_1_33);
 signed long int stepLocal_3 = var_1_27;
 if (var_1_12) {
  if (stepLocal_3 <= (var_1_38 >> var_1_30)) {
   if (stepLocal_5 >= 128) {
    if ((var_1_24 - var_1_7) <= stepLocal_4) {
     var_1_29 = (-0.4 + var_1_19);
    } else {
     var_1_29 = ((((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37));
    }
   }
  }
 }
 if (((((32) > (var_1_38)) ? (32) : (var_1_38))) >= var_1_50) {
  if (128.25f > var_1_37) {
   var_1_47 = ((((((var_1_32 + -64) + var_1_31)) < (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10))))) ? (((var_1_32 + -64) + var_1_31)) : (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10))))));
  } else {
   var_1_47 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  }
 } else {
  var_1_47 = ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32))))) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32))))));
 }
 unsigned short int stepLocal_14 = var_1_24;
 signed long int stepLocal_13 = var_1_47 | 32;
 if (stepLocal_14 > var_1_33) {
  if (var_1_4) {
   var_1_61 = var_1_9;
  } else {
   if (stepLocal_13 <= last_1_var_1_61) {
    var_1_61 = var_1_30;
   } else {
    var_1_61 = var_1_60;
   }
  }
 } else {
  var_1_61 = var_1_33;
 }
 if (var_1_38 >= var_1_53) {
  var_1_1 = (! var_1_4);
 }
 signed long int stepLocal_2 = var_1_27 - var_1_20;
 if ((var_1_24 * var_1_53) > stepLocal_2) {
  var_1_26 = (! ((var_1_4 && var_1_12) && var_1_28));
 }
 signed long int stepLocal_11 = -32;
 if (var_1_38 < stepLocal_11) {
  if (var_1_26) {
   var_1_49 = (((((-4) > ((var_1_30 - 4))) ? (-4) : ((var_1_30 - 4)))) + var_1_32);
  }
 }
 if (var_1_21 < (- var_1_38)) {
  if ((var_1_51 - var_1_32) < var_1_60) {
   var_1_65 = ((((((((var_1_15) > (var_1_17)) ? (var_1_15) : (var_1_17)))) > (1.9f)) ? (((((var_1_15) > (var_1_17)) ? (var_1_15) : (var_1_17)))) : (1.9f)));
  }
 } else {
  if (var_1_1) {
   var_1_65 = var_1_18;
  }
 }
 signed long int stepLocal_1 = var_1_7;
 if (var_1_1) {
  if (stepLocal_1 > var_1_50) {
   var_1_13 = ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)));
  }
 } else {
  var_1_13 = ((((var_1_17 - (var_1_18 - var_1_19)) < 0 ) ? -(var_1_17 - (var_1_18 - var_1_19)) : (var_1_17 - (var_1_18 - var_1_19))));
 }
 if (var_1_11) {
  if (! (var_1_55 < (var_1_35 * 2.8f))) {
   var_1_45 = (61202 - 5);
  }
 }
 if ((- var_1_65) < ((((var_1_17) < (var_1_29)) ? (var_1_17) : (var_1_29)))) {
  var_1_56 = (! var_1_28);
 }
 signed long int stepLocal_0 = var_1_6 - var_1_7;
 if (var_1_50 <= stepLocal_0) {
  var_1_5 = (var_1_56 || var_1_4);
 } else {
  var_1_5 = (! (! var_1_8));
 }
 if (var_1_45 <= (var_1_30 % ((((var_1_33) > (var_1_58)) ? (var_1_33) : (var_1_58))))) {
  if (var_1_51 > (var_1_33 * (var_1_3 + var_1_2))) {
   var_1_57 = (((((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) < 0 ) ? -((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) : ((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33)))));
  } else {
   var_1_57 = var_1_33;
  }
 } else {
  if ((((((var_1_51) < (var_1_45)) ? (var_1_51) : (var_1_45))) + var_1_45) >= (var_1_59 / var_1_30)) {
   if ((var_1_5 && var_1_28) || var_1_12) {
    var_1_57 = ((var_1_33 + var_1_60) - (var_1_30 + var_1_32));
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -1);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 15);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 8);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 7);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 3221225470);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1073741823);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741823);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 1073741823);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65535);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967295);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= -2147483647);
 assume_abort_if_not(var_1_52 <= 2147483646);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= 1073741822);
 assume_abort_if_not(var_1_54 <= 2147483646);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 65535);
 assume_abort_if_not(var_1_58 != 0);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 4294967295);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_38 >= var_1_53) ? (var_1_1 == ((unsigned char) (! var_1_4))) : 1) && ((var_1_50 <= (var_1_6 - var_1_7)) ? (var_1_5 == ((unsigned char) (var_1_56 || var_1_4))) : (var_1_5 == ((unsigned char) (! (! var_1_8)))))) && (var_1_9 == ((signed short int) ((((-10) < (var_1_10)) ? (-10) : (var_1_10)))))) && (var_1_11 == ((unsigned char) ((var_1_8 || var_1_4) && var_1_12)))) && (var_1_1 ? ((var_1_7 > var_1_50) ? (var_1_13 == ((float) ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))) : 1) : (var_1_13 == ((float) ((((var_1_17 - (var_1_18 - var_1_19)) < 0 ) ? -(var_1_17 - (var_1_18 - var_1_19)) : (var_1_17 - (var_1_18 - var_1_19)))))))) && (var_1_20 == ((unsigned short int) (45013 - var_1_21)))) && (var_1_22 == ((float) ((((((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) > (var_1_17)) ? (((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) : (var_1_17)))))) && (((9999999.6 / var_1_18) > var_1_16) ? (var_1_23 == ((unsigned short int) ((((var_1_21 + var_1_24) < 0 ) ? -(var_1_21 + var_1_24) : (var_1_21 + var_1_24))))) : 1)) && (var_1_25 == ((double) (((((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) > (var_1_16)) ? ((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) : (var_1_16)))))) && (((var_1_24 * var_1_53) > (var_1_27 - var_1_20)) ? (var_1_26 == ((unsigned char) (! ((var_1_4 && var_1_12) && var_1_28)))) : 1)) && (var_1_12 ? ((var_1_27 <= (var_1_38 >> var_1_30)) ? ((((var_1_30 + var_1_31) - var_1_21) >= 128) ? (((var_1_24 - var_1_7) <= (var_1_63 >> (var_1_32 + var_1_33))) ? (var_1_29 == ((double) (-0.4 + var_1_19))) : (var_1_29 == ((double) ((((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37))))) : 1) : 1) : 1)) && ((var_1_17 >= (- var_1_34)) ? ((var_1_27 <= -1) ? (((~ var_1_30) > (var_1_31 & (var_1_27 * var_1_6))) ? (var_1_38 == ((unsigned long int) var_1_24)) : 1) : (var_1_38 == ((unsigned long int) ((var_1_39 - (last_1_var_1_38 + 500u)) - 4u)))) : ((last_1_var_1_23 <= (last_1_var_1_53 ^ var_1_32)) ? ((var_1_15 <= last_1_var_1_64) ? (((var_1_24 * last_1_var_1_53) <= ((1687852967 - var_1_40) >> var_1_33)) ? ((var_1_33 < var_1_21) ? (var_1_38 == ((unsigned long int) (((((var_1_7) > ((var_1_41 - last_1_var_1_38))) ? (var_1_7) : ((var_1_41 - last_1_var_1_38)))) + var_1_24))) : 1) : (var_1_4 ? (var_1_38 == ((unsigned long int) ((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) - last_1_var_1_38) + var_1_43))) : 1)) : (var_1_38 == ((unsigned long int) (((((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) < 0 ) ? -((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44))) : ((((var_1_7) > (var_1_44)) ? (var_1_7) : (var_1_44)))))))) : 1))) && (var_1_11 ? ((! (var_1_55 < (var_1_35 * 2.8f))) ? (var_1_45 == ((unsigned short int) (61202 - 5))) : 1) : 1)) && ((((((32) > (var_1_38)) ? (32) : (var_1_38))) >= var_1_50) ? ((128.25f > var_1_37) ? (var_1_47 == ((signed short int) ((((((var_1_32 + -64) + var_1_31)) < (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10))))) ? (((var_1_32 + -64) + var_1_31)) : (((((var_1_30) > (var_1_10)) ? (var_1_30) : (var_1_10)))))))) : (var_1_47 == ((signed short int) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) : (var_1_47 == ((signed short int) ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32))))) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (((((var_1_10) > (var_1_32)) ? (var_1_10) : (var_1_32)))))))))) && ((var_1_38 < -32) ? (var_1_26 ? (var_1_49 == ((signed char) (((((-4) > ((var_1_30 - 4))) ? (-4) : ((var_1_30 - 4)))) + var_1_32))) : 1) : 1)) && (((((((var_1_32) > (4)) ? (var_1_32) : (4))) - var_1_33) <= var_1_24) ? ((! var_1_4) ? ((var_1_39 >= (var_1_51 - (var_1_41 - var_1_21))) ? ((last_1_var_1_23 >= var_1_27) ? ((last_1_var_1_23 == (last_1_var_1_61 + (last_1_var_1_45 / var_1_33))) ? (var_1_50 == ((signed long int) (((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24))) - var_1_30))) : (var_1_50 == ((signed long int) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) : (var_1_50 == ((signed long int) var_1_52))) : (var_1_50 == ((signed long int) (((((var_1_33) < (((((last_1_var_1_23) > (last_1_var_1_38)) ? (last_1_var_1_23) : (last_1_var_1_38))))) ? (var_1_33) : (((((last_1_var_1_23) > (last_1_var_1_38)) ? (last_1_var_1_23) : (last_1_var_1_38)))))) - (var_1_31 + var_1_24))))) : (var_1_50 == ((signed long int) ((((((((last_1_var_1_49) < (4)) ? (last_1_var_1_49) : (4))) < 0 ) ? -((((last_1_var_1_49) < (4)) ? (last_1_var_1_49) : (4))) : ((((last_1_var_1_49) < (4)) ? (last_1_var_1_49) : (4))))) - (((((last_1_var_1_38) < (last_1_var_1_45)) ? (last_1_var_1_38) : (last_1_var_1_45))) + ((((last_1_var_1_23) > (var_1_40)) ? (last_1_var_1_23) : (var_1_40)))))))) : 1)) && ((var_1_35 >= var_1_16) ? ((last_1_var_1_25 <= var_1_37) ? (var_1_53 == ((signed long int) (((var_1_48 - var_1_21) + (var_1_33 + var_1_24)) + (last_1_var_1_20 + ((((32) < (-5)) ? (32) : (-5))))))) : 1) : (var_1_53 == ((signed long int) ((((((1692685638) > (var_1_54)) ? (1692685638) : (var_1_54))) - var_1_32) - ((((last_1_var_1_63) < 0 ) ? -(last_1_var_1_63) : (last_1_var_1_63)))))))) && ((var_1_10 < var_1_30) ? (var_1_55 == ((double) var_1_16)) : (var_1_55 == ((double) (var_1_34 - var_1_37))))) && (((- var_1_65) < ((((var_1_17) < (var_1_29)) ? (var_1_17) : (var_1_29)))) ? (var_1_56 == ((unsigned char) (! var_1_28))) : 1)) && ((var_1_45 <= (var_1_30 % ((((var_1_33) > (var_1_58)) ? (var_1_33) : (var_1_58))))) ? ((var_1_51 > (var_1_33 * (var_1_3 + var_1_2))) ? (var_1_57 == ((signed char) (((((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) < 0 ) ? -((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))) : ((((var_1_30 - var_1_33) < 0 ) ? -(var_1_30 - var_1_33) : (var_1_30 - var_1_33))))))) : (var_1_57 == ((signed char) var_1_33))) : (((((((var_1_51) < (var_1_45)) ? (var_1_51) : (var_1_45))) + var_1_45) >= (var_1_59 / var_1_30)) ? (((var_1_5 && var_1_28) || var_1_12) ? (var_1_57 == ((signed char) ((var_1_33 + var_1_60) - (var_1_30 + var_1_32)))) : 1) : 1))) && ((var_1_24 > var_1_33) ? (var_1_4 ? (var_1_61 == ((signed short int) var_1_9)) : (((var_1_47 | 32) <= last_1_var_1_61) ? (var_1_61 == ((signed short int) var_1_30)) : (var_1_61 == ((signed short int) var_1_60)))) : (var_1_61 == ((signed short int) var_1_33)))) && (last_1_var_1_5 ? (var_1_63 == ((unsigned short int) var_1_60)) : 1)) && (var_1_64 == ((float) var_1_19))) && ((var_1_21 < (- var_1_38)) ? (((var_1_51 - var_1_32) < var_1_60) ? (var_1_65 == ((float) ((((((((var_1_15) > (var_1_17)) ? (var_1_15) : (var_1_17)))) > (1.9f)) ? (((((var_1_15) > (var_1_17)) ? (var_1_15) : (var_1_17)))) : (1.9f))))) : 1) : (var_1_1 ? (var_1_65 == ((float) var_1_18)) : 1))
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
