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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 2.8;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 2144133384;
unsigned long int var_1_5 = 1;
float var_1_6 = 7.25;
unsigned char var_1_7 = 1;
double var_1_9 = 4.9;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 50;
unsigned long int var_1_13 = 4;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 56557;
unsigned short int var_1_16 = 28923;
unsigned short int var_1_17 = 0;
unsigned short int var_1_18 = 100;
unsigned long int var_1_19 = 25;
unsigned short int var_1_20 = 32;
unsigned short int var_1_21 = 0;
signed long int var_1_22 = -10;
signed long int var_1_23 = -50;
float var_1_24 = 128.5;
float var_1_25 = 255.7;
unsigned char var_1_26 = 1;
signed long int var_1_28 = -32;
double var_1_29 = 0.4;
signed long int var_1_30 = -100000;
double var_1_31 = 8.625;
float var_1_32 = 16.5;
float var_1_33 = 3.6;
float var_1_34 = 1000000.75;
float var_1_35 = 16.5;
float var_1_36 = 63.5;
signed char var_1_37 = -16;
signed char var_1_38 = -5;
signed char var_1_39 = 25;
signed char var_1_40 = 8;
signed char var_1_41 = -8;
signed char var_1_42 = -32;
signed long int var_1_43 = 128;
signed long int var_1_44 = -32;
unsigned short int var_1_45 = 40036;
signed char var_1_47 = 1;
signed char var_1_48 = 64;
signed long int var_1_49 = 128;
signed short int var_1_50 = -256;
float var_1_51 = 2.75;
signed long int var_1_52 = 1;
signed long int var_1_53 = 0;
double var_1_54 = 10.5;
float var_1_55 = 99.4;
signed short int var_1_56 = -1;
signed short int var_1_57 = 1;
signed char var_1_58 = -32;
signed char var_1_59 = -8;
signed char var_1_60 = 1;
signed char var_1_61 = -1;
float var_1_62 = 9999999.5;
float var_1_64 = 127.75;
float var_1_65 = 9.5;
signed short int var_1_66 = 4;
signed long int var_1_67 = -128;
signed short int var_1_68 = 32;
signed long int var_1_69 = -8;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 1;
unsigned short int var_1_73 = 8;
unsigned short int var_1_74 = 10000;
unsigned short int var_1_75 = 10000;
unsigned char last_1_var_1_26 = 1;
signed long int last_1_var_1_43 = 128;
float last_1_var_1_51 = 2.75;
double last_1_var_1_54 = 10.5;
unsigned char last_1_var_1_71 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_2 < var_1_3;
 if (last_1_var_1_71 && stepLocal_0) {
  if (((last_1_var_1_51 + var_1_6) / var_1_9) < last_1_var_1_54) {
   var_1_7 = (! (! var_1_11));
  }
 } else {
  var_1_7 = ((var_1_5 == 32u) && var_1_11);
 }
 if (var_1_7) {
  var_1_71 = var_1_11;
 } else {
  var_1_71 = var_1_72;
 }
 unsigned char stepLocal_6 = last_1_var_1_26;
 signed long int stepLocal_5 = var_1_30;
 unsigned long int stepLocal_4 = var_1_5;
 if (stepLocal_4 < 10u) {
  if ((last_1_var_1_43 <= var_1_30) || stepLocal_6) {
   if (stepLocal_5 <= (var_1_21 * var_1_13)) {
    var_1_31 = (var_1_6 - 1.8);
   } else {
    var_1_31 = 0.9;
   }
  }
 }
 if (var_1_34 != (var_1_31 / var_1_9)) {
  var_1_67 = ((-128 + -4) + var_1_21);
 } else {
  var_1_67 = var_1_40;
 }
 if ((var_1_2 * (3669925837u - var_1_3)) > (2965407302u - (var_1_4 - var_1_5))) {
  var_1_1 = (var_1_6 - 32.25f);
 }
 if (var_1_13 >= var_1_5) {
  var_1_12 = ((((var_1_14) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (var_1_14) : ((var_1_15 - (var_1_16 - var_1_17)))));
 } else {
  var_1_12 = ((((((54291) < 0 ) ? -(54291) : (54291))) - var_1_17) - var_1_16);
 }
 var_1_23 = (var_1_20 + var_1_14);
 var_1_24 = (var_1_6 - var_1_25);
 unsigned short int stepLocal_2 = var_1_17;
 if ((- var_1_19) >= stepLocal_2) {
  var_1_26 = var_1_11;
 }
 var_1_50 = (((((var_1_42 + -10)) < (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? ((var_1_42 + -10)) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))));
 if (var_1_5 >= (var_1_3 << (var_1_52 + var_1_53))) {
  var_1_51 = 32.55f;
 } else {
  if (var_1_11) {
   var_1_51 = (var_1_35 + var_1_33);
  }
 }
 unsigned short int stepLocal_14 = var_1_14;
 if (4 < stepLocal_14) {
  var_1_54 = var_1_35;
 }
 if (var_1_1 <= var_1_34) {
  var_1_55 = (var_1_35 + var_1_36);
 } else {
  var_1_55 = ((((var_1_6) < (var_1_35)) ? (var_1_6) : (var_1_35)));
 }
 if (((((var_1_13) < (var_1_47)) ? (var_1_13) : (var_1_47))) >= 4u) {
  if (var_1_7) {
   var_1_56 = ((((var_1_38) > (var_1_17)) ? (var_1_38) : (var_1_17)));
  } else {
   var_1_56 = (var_1_48 - var_1_53);
  }
 } else {
  var_1_56 = ((((((100) > (var_1_40)) ? (100) : (var_1_40))) + var_1_38) + ((((((((var_1_57) < (-4)) ? (var_1_57) : (-4)))) < ((var_1_39 + var_1_52))) ? (((((var_1_57) < (-4)) ? (var_1_57) : (-4)))) : ((var_1_39 + var_1_52)))));
 }
 if (var_1_11) {
  var_1_58 = (var_1_53 - var_1_52);
 }
 if (((- var_1_33) * var_1_36) > var_1_54) {
  var_1_59 = (var_1_52 + (((((var_1_53) < (var_1_60)) ? (var_1_53) : (var_1_60))) + var_1_61));
 } else {
  var_1_59 = (var_1_52 - var_1_53);
 }
 unsigned char stepLocal_15 = var_1_7;
 if ((var_1_36 + (var_1_6 / var_1_9)) >= var_1_34) {
  var_1_62 = (((((var_1_6) < ((var_1_33 + var_1_34))) ? (var_1_6) : ((var_1_33 + var_1_34)))) - ((((var_1_35 + var_1_36) < 0 ) ? -(var_1_35 + var_1_36) : (var_1_35 + var_1_36))));
 } else {
  if (var_1_71 && stepLocal_15) {
   var_1_62 = (((((var_1_33 - var_1_64)) > ((var_1_36 + (var_1_35 + var_1_65)))) ? ((var_1_33 - var_1_64)) : ((var_1_36 + (var_1_35 + var_1_65)))));
  }
 }
 unsigned char stepLocal_18 = var_1_71;
 signed char stepLocal_17 = var_1_48;
 signed long int stepLocal_16 = var_1_23;
 if (stepLocal_18 && var_1_7) {
  var_1_66 = var_1_40;
 } else {
  if (var_1_41 == stepLocal_16) {
   var_1_66 = (var_1_17 - (100 + var_1_48));
  } else {
   if (var_1_47 < stepLocal_17) {
    var_1_66 = (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))) - var_1_17);
   } else {
    var_1_66 = ((25745 - var_1_53) - var_1_17);
   }
  }
 }
 var_1_68 = var_1_56;
 if (var_1_26) {
  var_1_69 = var_1_20;
 } else {
  var_1_69 = var_1_12;
 }
 if ((- var_1_9) <= ((((var_1_35) < (var_1_54)) ? (var_1_35) : (var_1_54)))) {
  var_1_73 = (((10000 + var_1_74) + (var_1_75 + 10000)) - var_1_21);
 }
 signed long int stepLocal_13 = ((((var_1_15) < (var_1_45)) ? (var_1_15) : (var_1_45))) - var_1_16;
 unsigned long int stepLocal_12 = ((((4u) < 0 ) ? -(4u) : (4u))) + (var_1_17 * var_1_21);
 unsigned char stepLocal_11 = (var_1_69 / var_1_15) < var_1_20;
 signed long int stepLocal_10 = ((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))) << var_1_17;
 if (! var_1_71) {
  if (stepLocal_11 || (var_1_9 <= ((((var_1_31) < (var_1_62)) ? (var_1_31) : (var_1_62))))) {
   var_1_43 = ((((var_1_42) > (var_1_44)) ? (var_1_42) : (var_1_44)));
  } else {
   if (stepLocal_13 >= (var_1_67 * var_1_19)) {
    var_1_43 = (var_1_15 - var_1_21);
   }
  }
 } else {
  if (var_1_3 >= stepLocal_12) {
   var_1_43 = ((((var_1_23) > (var_1_39)) ? (var_1_23) : (var_1_39)));
  } else {
   if (stepLocal_10 <= var_1_73) {
    if (var_1_71) {
     var_1_43 = ((((var_1_5) > (((((var_1_16) < ((var_1_58 + var_1_15))) ? (var_1_16) : ((var_1_58 + var_1_15)))))) ? (var_1_5) : (((((var_1_16) < ((var_1_58 + var_1_15))) ? (var_1_16) : ((var_1_58 + var_1_15)))))));
    }
   } else {
    var_1_43 = ((((((var_1_17 + var_1_15)) > (var_1_47)) ? ((var_1_17 + var_1_15)) : (var_1_47))) - ((var_1_49 + var_1_21) + var_1_14));
   }
  }
 }
 if (var_1_2 >= (var_1_73 & (var_1_19 + var_1_4))) {
  var_1_18 = ((var_1_16 - var_1_17) + var_1_20);
 } else {
  var_1_18 = ((var_1_16 - var_1_17) + (((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) < 0 ) ? -((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) : ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))));
 }
 unsigned char stepLocal_1 = var_1_11;
 if ((var_1_19 > var_1_13) && stepLocal_1) {
  var_1_22 = ((((-5) > (((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16))))) ? (-5) : (((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16))))));
 }
 unsigned long int stepLocal_3 = - var_1_13;
 if ((var_1_54 / var_1_9) < (var_1_31 / var_1_29)) {
  if (stepLocal_3 >= (3983591152u - var_1_21)) {
   var_1_28 = var_1_30;
  }
 } else {
  var_1_28 = (((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22))) + var_1_67);
 }
 unsigned char stepLocal_8 = var_1_71;
 unsigned char stepLocal_7 = var_1_71;
 if (((100 + var_1_3) >= var_1_22) || stepLocal_7) {
  var_1_32 = ((var_1_33 + var_1_34) - var_1_6);
 } else {
  if (stepLocal_8 && (var_1_21 < (var_1_5 / var_1_16))) {
   var_1_32 = ((var_1_35 + var_1_36) + ((((var_1_34) < (var_1_33)) ? (var_1_34) : (var_1_33))));
  } else {
   var_1_32 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 }
 signed long int stepLocal_9 = (((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21));
 if (var_1_73 != stepLocal_9) {
  var_1_37 = ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)));
 } else {
  var_1_37 = (((((var_1_40 + var_1_41)) > ((-4 + var_1_42))) ? ((var_1_40 + var_1_41)) : ((-4 + var_1_42))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -127);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -63);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -63);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= -2147483647);
 assume_abort_if_not(var_1_44 <= 2147483646);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 32767);
 assume_abort_if_not(var_1_45 <= 65535);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 127);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 536870912);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_57 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_57 >= -16383);
 assume_abort_if_not(var_1_57 <= 16383);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -31);
 assume_abort_if_not(var_1_60 <= 32);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -31);
 assume_abort_if_not(var_1_61 <= 31);
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= -230584.3009213691400e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 1);
 assume_abort_if_not(var_1_72 <= 1);
 var_1_74 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_74 >= 8192);
 assume_abort_if_not(var_1_74 <= 16383);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 8192);
 assume_abort_if_not(var_1_75 <= 16384);
}
void updateLastVariables(void) {
 last_1_var_1_26 = var_1_26;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_71 = var_1_71;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_2 * (3669925837u - var_1_3)) > (2965407302u - (var_1_4 - var_1_5))) ? (var_1_1 == ((float) (var_1_6 - 32.25f))) : 1) && ((last_1_var_1_71 && (var_1_2 < var_1_3)) ? ((((last_1_var_1_51 + var_1_6) / var_1_9) < last_1_var_1_54) ? (var_1_7 == ((unsigned char) (! (! var_1_11)))) : 1) : (var_1_7 == ((unsigned char) ((var_1_5 == 32u) && var_1_11))))) && ((var_1_13 >= var_1_5) ? (var_1_12 == ((unsigned short int) ((((var_1_14) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (var_1_14) : ((var_1_15 - (var_1_16 - var_1_17))))))) : (var_1_12 == ((unsigned short int) ((((((54291) < 0 ) ? -(54291) : (54291))) - var_1_17) - var_1_16))))) && ((var_1_2 >= (var_1_73 & (var_1_19 + var_1_4))) ? (var_1_18 == ((unsigned short int) ((var_1_16 - var_1_17) + var_1_20))) : (var_1_18 == ((unsigned short int) ((var_1_16 - var_1_17) + (((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) < 0 ) ? -((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))) : ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))))))))) && (((var_1_19 > var_1_13) && var_1_11) ? (var_1_22 == ((signed long int) ((((-5) > (((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16))))) ? (-5) : (((((var_1_18) < (var_1_16)) ? (var_1_18) : (var_1_16)))))))) : 1)) && (var_1_23 == ((signed long int) (var_1_20 + var_1_14)))) && (var_1_24 == ((float) (var_1_6 - var_1_25)))) && (((- var_1_19) >= var_1_17) ? (var_1_26 == ((unsigned char) var_1_11)) : 1)) && (((var_1_54 / var_1_9) < (var_1_31 / var_1_29)) ? (((- var_1_13) >= (3983591152u - var_1_21)) ? (var_1_28 == ((signed long int) var_1_30)) : 1) : (var_1_28 == ((signed long int) (((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22))) + var_1_67))))) && ((var_1_5 < 10u) ? (((last_1_var_1_43 <= var_1_30) || last_1_var_1_26) ? ((var_1_30 <= (var_1_21 * var_1_13)) ? (var_1_31 == ((double) (var_1_6 - 1.8))) : (var_1_31 == ((double) 0.9))) : 1) : 1)) && ((((100 + var_1_3) >= var_1_22) || var_1_71) ? (var_1_32 == ((float) ((var_1_33 + var_1_34) - var_1_6))) : ((var_1_71 && (var_1_21 < (var_1_5 / var_1_16))) ? (var_1_32 == ((float) ((var_1_35 + var_1_36) + ((((var_1_34) < (var_1_33)) ? (var_1_34) : (var_1_33)))))) : (var_1_32 == ((float) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))))) && ((var_1_73 != ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))) ? (var_1_37 == ((signed char) ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))))) : (var_1_37 == ((signed char) (((((var_1_40 + var_1_41)) > ((-4 + var_1_42))) ? ((var_1_40 + var_1_41)) : ((-4 + var_1_42)))))))) && ((! var_1_71) ? ((((var_1_69 / var_1_15) < var_1_20) || (var_1_9 <= ((((var_1_31) < (var_1_62)) ? (var_1_31) : (var_1_62))))) ? (var_1_43 == ((signed long int) ((((var_1_42) > (var_1_44)) ? (var_1_42) : (var_1_44))))) : (((((((var_1_15) < (var_1_45)) ? (var_1_15) : (var_1_45))) - var_1_16) >= (var_1_67 * var_1_19)) ? (var_1_43 == ((signed long int) (var_1_15 - var_1_21))) : 1)) : ((var_1_3 >= (((((4u) < 0 ) ? -(4u) : (4u))) + (var_1_17 * var_1_21))) ? (var_1_43 == ((signed long int) ((((var_1_23) > (var_1_39)) ? (var_1_23) : (var_1_39))))) : (((((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))) << var_1_17) <= var_1_73) ? (var_1_71 ? (var_1_43 == ((signed long int) ((((var_1_5) > (((((var_1_16) < ((var_1_58 + var_1_15))) ? (var_1_16) : ((var_1_58 + var_1_15)))))) ? (var_1_5) : (((((var_1_16) < ((var_1_58 + var_1_15))) ? (var_1_16) : ((var_1_58 + var_1_15))))))))) : 1) : (var_1_43 == ((signed long int) ((((((var_1_17 + var_1_15)) > (var_1_47)) ? ((var_1_17 + var_1_15)) : (var_1_47))) - ((var_1_49 + var_1_21) + var_1_14)))))))) && (var_1_50 == ((signed short int) (((((var_1_42 + -10)) < (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? ((var_1_42 + -10)) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))))) && ((var_1_5 >= (var_1_3 << (var_1_52 + var_1_53))) ? (var_1_51 == ((float) 32.55f)) : (var_1_11 ? (var_1_51 == ((float) (var_1_35 + var_1_33))) : 1))) && ((4 < var_1_14) ? (var_1_54 == ((double) var_1_35)) : 1)) && ((var_1_1 <= var_1_34) ? (var_1_55 == ((float) (var_1_35 + var_1_36))) : (var_1_55 == ((float) ((((var_1_6) < (var_1_35)) ? (var_1_6) : (var_1_35))))))) && ((((((var_1_13) < (var_1_47)) ? (var_1_13) : (var_1_47))) >= 4u) ? (var_1_7 ? (var_1_56 == ((signed short int) ((((var_1_38) > (var_1_17)) ? (var_1_38) : (var_1_17))))) : (var_1_56 == ((signed short int) (var_1_48 - var_1_53)))) : (var_1_56 == ((signed short int) ((((((100) > (var_1_40)) ? (100) : (var_1_40))) + var_1_38) + ((((((((var_1_57) < (-4)) ? (var_1_57) : (-4)))) < ((var_1_39 + var_1_52))) ? (((((var_1_57) < (-4)) ? (var_1_57) : (-4)))) : ((var_1_39 + var_1_52))))))))) && (var_1_11 ? (var_1_58 == ((signed char) (var_1_53 - var_1_52))) : 1)) && ((((- var_1_33) * var_1_36) > var_1_54) ? (var_1_59 == ((signed char) (var_1_52 + (((((var_1_53) < (var_1_60)) ? (var_1_53) : (var_1_60))) + var_1_61)))) : (var_1_59 == ((signed char) (var_1_52 - var_1_53))))) && (((var_1_36 + (var_1_6 / var_1_9)) >= var_1_34) ? (var_1_62 == ((float) (((((var_1_6) < ((var_1_33 + var_1_34))) ? (var_1_6) : ((var_1_33 + var_1_34)))) - ((((var_1_35 + var_1_36) < 0 ) ? -(var_1_35 + var_1_36) : (var_1_35 + var_1_36)))))) : ((var_1_71 && var_1_7) ? (var_1_62 == ((float) (((((var_1_33 - var_1_64)) > ((var_1_36 + (var_1_35 + var_1_65)))) ? ((var_1_33 - var_1_64)) : ((var_1_36 + (var_1_35 + var_1_65))))))) : 1))) && ((var_1_71 && var_1_7) ? (var_1_66 == ((signed short int) var_1_40)) : ((var_1_41 == var_1_23) ? (var_1_66 == ((signed short int) (var_1_17 - (100 + var_1_48)))) : ((var_1_47 < var_1_48) ? (var_1_66 == ((signed short int) (((((var_1_52) < (var_1_48)) ? (var_1_52) : (var_1_48))) - var_1_17))) : (var_1_66 == ((signed short int) ((25745 - var_1_53) - var_1_17))))))) && ((var_1_34 != (var_1_31 / var_1_9)) ? (var_1_67 == ((signed long int) ((-128 + -4) + var_1_21))) : (var_1_67 == ((signed long int) var_1_40)))) && (var_1_68 == ((signed short int) var_1_56))) && (var_1_26 ? (var_1_69 == ((signed long int) var_1_20)) : (var_1_69 == ((signed long int) var_1_12)))) && (var_1_7 ? (var_1_71 == ((unsigned char) var_1_11)) : (var_1_71 == ((unsigned char) var_1_72)))) && (((- var_1_9) <= ((((var_1_35) < (var_1_54)) ? (var_1_35) : (var_1_54)))) ? (var_1_73 == ((unsigned short int) (((10000 + var_1_74) + (var_1_75 + 10000)) - var_1_21))) : 1)
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
