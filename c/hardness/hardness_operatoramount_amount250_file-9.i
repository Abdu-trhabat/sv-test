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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
double var_1_4 = 99999999999.6;
signed long int var_1_6 = -5;
signed long int var_1_8 = -64;
signed long int var_1_9 = -256;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 256;
unsigned long int var_1_12 = 10;
unsigned long int var_1_13 = 32;
unsigned long int var_1_14 = 3155510174;
unsigned char var_1_15 = 0;
signed long int var_1_16 = -5;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 15.5;
double var_1_20 = 31.2;
double var_1_21 = 1.83;
double var_1_22 = 24.5;
double var_1_23 = 500.6;
signed long int var_1_24 = -128;
unsigned char var_1_25 = 0;
unsigned long int var_1_26 = 2;
unsigned long int var_1_27 = 256;
signed long int var_1_28 = 256;
signed long int var_1_29 = 10000000;
signed long int var_1_30 = 64;
signed char var_1_31 = -2;
signed char var_1_32 = 5;
signed char var_1_33 = 16;
signed char var_1_34 = 32;
signed char var_1_35 = -4;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 2049893154;
unsigned long int var_1_38 = 1334792594;
signed short int var_1_39 = -128;
signed long int var_1_40 = 16;
double var_1_41 = 31.8;
double var_1_42 = 7.5;
double var_1_43 = 24.7;
double var_1_44 = 15.25;
double var_1_45 = 50.25;
double var_1_46 = 0.75;
signed char var_1_47 = -32;
unsigned long int var_1_48 = 10;
unsigned long int var_1_49 = 16;
signed short int var_1_50 = 25;
signed short int var_1_51 = 5;
signed short int var_1_52 = 4;
signed short int var_1_53 = 4;
signed short int var_1_54 = 1;
signed short int var_1_55 = 32;
float var_1_56 = 128.7;
float var_1_58 = 9.5;
float var_1_60 = 63.59;
float var_1_61 = 200.75;
double var_1_62 = 10.8;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 5;
unsigned long int var_1_66 = 5;
unsigned long int var_1_67 = 128;
unsigned short int var_1_68 = 256;
unsigned short int var_1_69 = 33597;
unsigned short int var_1_70 = 128;
unsigned short int var_1_71 = 46081;
double var_1_72 = 31.5;
double var_1_73 = 0.0;
double var_1_74 = 8.625;
double var_1_75 = 5.5;
signed char var_1_76 = 100;
double var_1_77 = 4.6;
signed char var_1_78 = 2;
unsigned char last_1_var_1_36 = 0;
unsigned long int last_1_var_1_66 = 5;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_66 > 1) {
  if (last_1_var_1_36) {
   var_1_40 = -4;
  }
 } else {
  if (((var_1_41 + var_1_42) - var_1_43) <= ((7.989376328876559E18 - var_1_44) - (var_1_45 + var_1_46))) {
   var_1_40 = ((((256) > (-5)) ? (256) : (-5)));
  }
 }
 if ((var_1_40 / var_1_16) != -128) {
  var_1_15 = (var_1_17 || ((var_1_12 < 100u) && var_1_18));
 }
 unsigned long int stepLocal_5 = ~ var_1_11;
 if (stepLocal_5 == ((var_1_37 + var_1_38) - var_1_30)) {
  var_1_36 = (var_1_18 || var_1_17);
 }
 signed long int stepLocal_7 = var_1_33 ^ var_1_29;
 if (var_1_40 >= stepLocal_7) {
  var_1_48 = (2426189166u - (16u + (var_1_33 + var_1_49)));
 } else {
  var_1_48 = ((((((((var_1_12) < (var_1_49)) ? (var_1_12) : (var_1_49))) < 0 ) ? -((((var_1_12) < (var_1_49)) ? (var_1_12) : (var_1_49))) : ((((var_1_12) < (var_1_49)) ? (var_1_12) : (var_1_49))))) + var_1_27);
 }
 if ((var_1_29 + var_1_34) < ((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28)))) {
  var_1_63 = ((((var_1_33) < (var_1_53)) ? (var_1_33) : (var_1_53)));
 }
 if (var_1_36) {
  var_1_64 = (((((var_1_53) < (var_1_52)) ? (var_1_53) : (var_1_52))) + (64 - var_1_65));
 } else {
  var_1_64 = var_1_53;
 }
 if ((- (var_1_30 & var_1_28)) < 256) {
  if ((var_1_53 - var_1_63) >= (var_1_65 << var_1_12)) {
   var_1_70 = (((((var_1_65) < ((var_1_48 + var_1_51))) ? (var_1_65) : ((var_1_48 + var_1_51)))) + var_1_53);
  } else {
   var_1_70 = (var_1_71 - var_1_63);
  }
 }
 var_1_78 = var_1_33;
 signed long int stepLocal_10 = var_1_40;
 if (var_1_36) {
  if (stepLocal_10 >= (var_1_32 - 128)) {
   var_1_66 = ((((((((var_1_67) > ((var_1_65 + var_1_13))) ? (var_1_67) : ((var_1_65 + var_1_13))))) > (var_1_12)) ? (((((var_1_67) > ((var_1_65 + var_1_13))) ? (var_1_67) : ((var_1_65 + var_1_13))))) : (var_1_12)));
  }
 }
 unsigned long int stepLocal_3 = (((var_1_66) < (-1)) ? (var_1_66) : (-1));
 if (stepLocal_3 != ((((var_1_16) > (var_1_11)) ? (var_1_16) : (var_1_11)))) {
  var_1_19 = 99.5;
 } else {
  var_1_19 = (var_1_20 + (var_1_21 + (var_1_22 + var_1_23)));
 }
 if (var_1_29 < (var_1_63 + var_1_16)) {
  var_1_39 = (var_1_63 + var_1_34);
 }
 if ((((((var_1_66) < (var_1_26)) ? (var_1_66) : (var_1_26))) >= var_1_52) && (var_1_16 <= 8)) {
  var_1_62 = var_1_41;
 }
 if (var_1_4 <= ((10.79 + var_1_44) + var_1_62)) {
  if (var_1_15) {
   var_1_76 = var_1_65;
  }
 } else {
  var_1_76 = var_1_52;
 }
 signed long int stepLocal_13 = -4;
 if (stepLocal_13 >= var_1_76) {
  var_1_77 = (var_1_41 - ((((var_1_42) < (var_1_73)) ? (var_1_42) : (var_1_73))));
 } else {
  var_1_77 = ((((var_1_42) > ((((((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) < 0 ) ? -((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) : ((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))))))) ? (var_1_42) : ((((((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) < 0 ) ? -((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) : ((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))))))));
 }
 if ((- var_1_19) >= (var_1_62 / var_1_4)) {
  if (var_1_36) {
   var_1_1 = 10;
  }
 }
 signed char stepLocal_2 = var_1_76;
 signed long int stepLocal_1 = var_1_1;
 signed long int stepLocal_0 = -8;
 if (stepLocal_2 <= var_1_8) {
  if (stepLocal_1 >= var_1_8) {
   if ((var_1_76 * (var_1_9 + var_1_1)) > stepLocal_0) {
    var_1_10 = (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) + var_1_13);
   } else {
    var_1_10 = (var_1_11 + 32u);
   }
  } else {
   var_1_10 = (((((var_1_14 - var_1_12)) < (var_1_11)) ? ((var_1_14 - var_1_12)) : (var_1_11)));
  }
 } else {
  var_1_10 = var_1_13;
 }
 unsigned long int stepLocal_4 = (64u + var_1_1) % (var_1_26 + var_1_27);
 if (var_1_77 > var_1_23) {
  if (10u == stepLocal_4) {
   if (! (! (var_1_14 > var_1_16))) {
    var_1_24 = (var_1_28 - (var_1_29 + var_1_30));
   }
  } else {
   var_1_24 = var_1_28;
  }
 } else {
  var_1_24 = var_1_30;
 }
 if (var_1_21 != (- (var_1_4 + var_1_62))) {
  var_1_31 = (var_1_32 - var_1_33);
 } else {
  var_1_31 = (var_1_34 + var_1_35);
 }
 unsigned long int stepLocal_6 = ((((var_1_11 * var_1_1)) < ((- var_1_26))) ? ((var_1_11 * var_1_1)) : ((- var_1_26)));
 if ((var_1_24 * var_1_38) >= stepLocal_6) {
  var_1_47 = (((((var_1_33 - 1)) > (var_1_35)) ? ((var_1_33 - 1)) : (var_1_35)));
 }
 signed long int stepLocal_8 = (var_1_33 + var_1_51) >> (var_1_52 + var_1_53);
 if (stepLocal_8 <= var_1_10) {
  var_1_50 = ((((((((var_1_35) > (var_1_24)) ? (var_1_35) : (var_1_24)))) < (var_1_34)) ? (((((var_1_35) > (var_1_24)) ? (var_1_35) : (var_1_24)))) : (var_1_34)));
 }
 signed long int stepLocal_9 = (var_1_29 + var_1_30) - var_1_33;
 if (stepLocal_9 < var_1_10) {
  var_1_54 = var_1_53;
 } else {
  var_1_54 = var_1_55;
 }
 if (var_1_25) {
  if (var_1_43 > var_1_4) {
   var_1_56 = ((((var_1_44) > (var_1_46)) ? (var_1_44) : (var_1_46)));
  }
 } else {
  if (((~ var_1_30) % var_1_38) != var_1_29) {
   if ((var_1_76 / ((((var_1_16) < (var_1_53)) ? (var_1_16) : (var_1_53)))) >= var_1_1) {
    var_1_56 = (((((((((var_1_23 + var_1_21)) < (var_1_46)) ? ((var_1_23 + var_1_21)) : (var_1_46)))) > (9.375f)) ? ((((((var_1_23 + var_1_21)) < (var_1_46)) ? ((var_1_23 + var_1_21)) : (var_1_46)))) : (9.375f)));
   } else {
    if (! (var_1_77 > var_1_19)) {
     var_1_56 = ((((((((var_1_58) > (var_1_44)) ? (var_1_58) : (var_1_44)))) < (((((var_1_22) > ((var_1_45 - var_1_41))) ? (var_1_22) : ((var_1_45 - var_1_41)))))) ? (((((var_1_58) > (var_1_44)) ? (var_1_58) : (var_1_44)))) : (((((var_1_22) > ((var_1_45 - var_1_41))) ? (var_1_22) : ((var_1_45 - var_1_41)))))));
    } else {
     if (var_1_27 >= var_1_26) {
      var_1_56 = ((((((var_1_23 + var_1_22)) < (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? ((var_1_23 + var_1_22)) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) + (var_1_60 - var_1_61));
     } else {
      var_1_56 = ((((var_1_21) > ((var_1_41 - var_1_42))) ? (var_1_21) : ((var_1_41 - var_1_42))));
     }
    }
   }
  }
 }
 if (var_1_50 == var_1_40) {
  if ((var_1_50 > var_1_40) && var_1_36) {
   var_1_6 = ((((var_1_50) < (128)) ? (var_1_50) : (128)));
  } else {
   var_1_6 = (((((var_1_50) > (var_1_8)) ? (var_1_50) : (var_1_8))) + var_1_9);
  }
 } else {
  var_1_6 = (var_1_50 + ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8))));
 }
 signed short int stepLocal_12 = var_1_51;
 unsigned char stepLocal_11 = var_1_25;
 if (var_1_15 && stepLocal_11) {
  if ((var_1_69 - ((((var_1_6) < (var_1_33)) ? (var_1_6) : (var_1_33)))) < stepLocal_12) {
   var_1_68 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 } else {
  if (var_1_61 > var_1_44) {
   var_1_68 = ((((var_1_52 + var_1_53) < 0 ) ? -(var_1_52 + var_1_53) : (var_1_52 + var_1_53)));
  }
 }
 if (var_1_17 || var_1_18) {
  var_1_72 = (((var_1_74 + var_1_75) + var_1_60) - var_1_44);
 } else {
  if (var_1_68 < var_1_67) {
   var_1_72 = var_1_46;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1073741823);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -115292.1504606845700e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 1152921.504606845700e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -115292.1504606845700e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 1152921.504606845700e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 2147483648);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -1);
 assume_abort_if_not(var_1_28 <= 2147483646);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1073741823);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1073741823);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -1);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -63);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 1073741823);
 assume_abort_if_not(var_1_37 <= 2147483648);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 1073741824);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427388000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427388000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427388000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427388000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427388000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 536870911);
 var_1_51 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 16383);
 var_1_52 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 15);
 var_1_53 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 15);
 var_1_55 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_55 >= -32767);
 assume_abort_if_not(var_1_55 <= 32766);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -922337.2036854766000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 4294967294);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 32767);
 assume_abort_if_not(var_1_69 <= 65535);
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 32767);
 assume_abort_if_not(var_1_71 <= 65534);
 var_1_73 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_73 >= 6917529.027641074000e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854766000e+12F && var_1_73 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_36 = var_1_36;
 last_1_var_1_66 = var_1_66;
}
int property(void) {
 return ((((((((((((((((((((((((((- var_1_19) >= (var_1_62 / var_1_4)) ? (var_1_36 ? (var_1_1 == ((signed long int) 10)) : 1) : 1) && ((var_1_50 == var_1_40) ? (((var_1_50 > var_1_40) && var_1_36) ? (var_1_6 == ((signed long int) ((((var_1_50) < (128)) ? (var_1_50) : (128))))) : (var_1_6 == ((signed long int) (((((var_1_50) > (var_1_8)) ? (var_1_50) : (var_1_8))) + var_1_9)))) : (var_1_6 == ((signed long int) (var_1_50 + ((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8)))))))) && ((var_1_76 <= var_1_8) ? ((var_1_1 >= var_1_8) ? (((var_1_76 * (var_1_9 + var_1_1)) > -8) ? (var_1_10 == ((unsigned long int) (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) + var_1_13))) : (var_1_10 == ((unsigned long int) (var_1_11 + 32u)))) : (var_1_10 == ((unsigned long int) (((((var_1_14 - var_1_12)) < (var_1_11)) ? ((var_1_14 - var_1_12)) : (var_1_11)))))) : (var_1_10 == ((unsigned long int) var_1_13)))) && (((var_1_40 / var_1_16) != -128) ? (var_1_15 == ((unsigned char) (var_1_17 || ((var_1_12 < 100u) && var_1_18)))) : 1)) && ((((((var_1_66) < (-1)) ? (var_1_66) : (-1))) != ((((var_1_16) > (var_1_11)) ? (var_1_16) : (var_1_11)))) ? (var_1_19 == ((double) 99.5)) : (var_1_19 == ((double) (var_1_20 + (var_1_21 + (var_1_22 + var_1_23))))))) && ((var_1_77 > var_1_23) ? ((10u == ((64u + var_1_1) % (var_1_26 + var_1_27))) ? ((! (! (var_1_14 > var_1_16))) ? (var_1_24 == ((signed long int) (var_1_28 - (var_1_29 + var_1_30)))) : 1) : (var_1_24 == ((signed long int) var_1_28))) : (var_1_24 == ((signed long int) var_1_30)))) && ((var_1_21 != (- (var_1_4 + var_1_62))) ? (var_1_31 == ((signed char) (var_1_32 - var_1_33))) : (var_1_31 == ((signed char) (var_1_34 + var_1_35))))) && (((~ var_1_11) == ((var_1_37 + var_1_38) - var_1_30)) ? (var_1_36 == ((unsigned char) (var_1_18 || var_1_17))) : 1)) && ((var_1_29 < (var_1_63 + var_1_16)) ? (var_1_39 == ((signed short int) (var_1_63 + var_1_34))) : 1)) && ((last_1_var_1_66 > 1) ? (last_1_var_1_36 ? (var_1_40 == ((signed long int) -4)) : 1) : ((((var_1_41 + var_1_42) - var_1_43) <= ((7.989376328876559E18 - var_1_44) - (var_1_45 + var_1_46))) ? (var_1_40 == ((signed long int) ((((256) > (-5)) ? (256) : (-5))))) : 1))) && (((var_1_24 * var_1_38) >= (((((var_1_11 * var_1_1)) < ((- var_1_26))) ? ((var_1_11 * var_1_1)) : ((- var_1_26))))) ? (var_1_47 == ((signed char) (((((var_1_33 - 1)) > (var_1_35)) ? ((var_1_33 - 1)) : (var_1_35))))) : 1)) && ((var_1_40 >= (var_1_33 ^ var_1_29)) ? (var_1_48 == ((unsigned long int) (2426189166u - (16u + (var_1_33 + var_1_49))))) : (var_1_48 == ((unsigned long int) ((((((((var_1_12) < (var_1_49)) ? (var_1_12) : (var_1_49))) < 0 ) ? -((((var_1_12) < (var_1_49)) ? (var_1_12) : (var_1_49))) : ((((var_1_12) < (var_1_49)) ? (var_1_12) : (var_1_49))))) + var_1_27))))) && ((((var_1_33 + var_1_51) >> (var_1_52 + var_1_53)) <= var_1_10) ? (var_1_50 == ((signed short int) ((((((((var_1_35) > (var_1_24)) ? (var_1_35) : (var_1_24)))) < (var_1_34)) ? (((((var_1_35) > (var_1_24)) ? (var_1_35) : (var_1_24)))) : (var_1_34))))) : 1)) && ((((var_1_29 + var_1_30) - var_1_33) < var_1_10) ? (var_1_54 == ((signed short int) var_1_53)) : (var_1_54 == ((signed short int) var_1_55)))) && (var_1_25 ? ((var_1_43 > var_1_4) ? (var_1_56 == ((float) ((((var_1_44) > (var_1_46)) ? (var_1_44) : (var_1_46))))) : 1) : ((((~ var_1_30) % var_1_38) != var_1_29) ? (((var_1_76 / ((((var_1_16) < (var_1_53)) ? (var_1_16) : (var_1_53)))) >= var_1_1) ? (var_1_56 == ((float) (((((((((var_1_23 + var_1_21)) < (var_1_46)) ? ((var_1_23 + var_1_21)) : (var_1_46)))) > (9.375f)) ? ((((((var_1_23 + var_1_21)) < (var_1_46)) ? ((var_1_23 + var_1_21)) : (var_1_46)))) : (9.375f))))) : ((! (var_1_77 > var_1_19)) ? (var_1_56 == ((float) ((((((((var_1_58) > (var_1_44)) ? (var_1_58) : (var_1_44)))) < (((((var_1_22) > ((var_1_45 - var_1_41))) ? (var_1_22) : ((var_1_45 - var_1_41)))))) ? (((((var_1_58) > (var_1_44)) ? (var_1_58) : (var_1_44)))) : (((((var_1_22) > ((var_1_45 - var_1_41))) ? (var_1_22) : ((var_1_45 - var_1_41))))))))) : ((var_1_27 >= var_1_26) ? (var_1_56 == ((float) ((((((var_1_23 + var_1_22)) < (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? ((var_1_23 + var_1_22)) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) + (var_1_60 - var_1_61)))) : (var_1_56 == ((float) ((((var_1_21) > ((var_1_41 - var_1_42))) ? (var_1_21) : ((var_1_41 - var_1_42))))))))) : 1))) && (((((((var_1_66) < (var_1_26)) ? (var_1_66) : (var_1_26))) >= var_1_52) && (var_1_16 <= 8)) ? (var_1_62 == ((double) var_1_41)) : 1)) && (((var_1_29 + var_1_34) < ((((var_1_32) < (var_1_28)) ? (var_1_32) : (var_1_28)))) ? (var_1_63 == ((unsigned char) ((((var_1_33) < (var_1_53)) ? (var_1_33) : (var_1_53))))) : 1)) && (var_1_36 ? (var_1_64 == ((unsigned char) (((((var_1_53) < (var_1_52)) ? (var_1_53) : (var_1_52))) + (64 - var_1_65)))) : (var_1_64 == ((unsigned char) var_1_53)))) && (var_1_36 ? ((var_1_40 >= (var_1_32 - 128)) ? (var_1_66 == ((unsigned long int) ((((((((var_1_67) > ((var_1_65 + var_1_13))) ? (var_1_67) : ((var_1_65 + var_1_13))))) > (var_1_12)) ? (((((var_1_67) > ((var_1_65 + var_1_13))) ? (var_1_67) : ((var_1_65 + var_1_13))))) : (var_1_12))))) : 1) : 1)) && ((var_1_15 && var_1_25) ? (((var_1_69 - ((((var_1_6) < (var_1_33)) ? (var_1_6) : (var_1_33)))) < var_1_51) ? (var_1_68 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : 1) : ((var_1_61 > var_1_44) ? (var_1_68 == ((unsigned short int) ((((var_1_52 + var_1_53) < 0 ) ? -(var_1_52 + var_1_53) : (var_1_52 + var_1_53))))) : 1))) && (((- (var_1_30 & var_1_28)) < 256) ? (((var_1_53 - var_1_63) >= (var_1_65 << var_1_12)) ? (var_1_70 == ((unsigned short int) (((((var_1_65) < ((var_1_48 + var_1_51))) ? (var_1_65) : ((var_1_48 + var_1_51)))) + var_1_53))) : (var_1_70 == ((unsigned short int) (var_1_71 - var_1_63)))) : 1)) && ((var_1_17 || var_1_18) ? (var_1_72 == ((double) (((var_1_74 + var_1_75) + var_1_60) - var_1_44))) : ((var_1_68 < var_1_67) ? (var_1_72 == ((double) var_1_46)) : 1))) && ((var_1_4 <= ((10.79 + var_1_44) + var_1_62)) ? (var_1_15 ? (var_1_76 == ((signed char) var_1_65)) : 1) : (var_1_76 == ((signed char) var_1_52)))) && ((-4 >= var_1_76) ? (var_1_77 == ((double) (var_1_41 - ((((var_1_42) < (var_1_73)) ? (var_1_42) : (var_1_73)))))) : (var_1_77 == ((double) ((((var_1_42) > ((((((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) < 0 ) ? -((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) : ((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))))))) ? (var_1_42) : ((((((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) < 0 ) ? -((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44))) : ((((var_1_20) > (var_1_44)) ? (var_1_20) : (var_1_44)))))))))))) && (var_1_78 == ((signed char) var_1_33))
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
