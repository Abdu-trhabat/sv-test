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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 999999999.7;
float var_1_4 = 0.0;
float var_1_5 = 0.5;
float var_1_6 = 0.0;
float var_1_7 = 999999999999.5;
signed char var_1_8 = -32;
signed char var_1_10 = 0;
signed char var_1_11 = -64;
signed long int var_1_12 = -8;
signed long int var_1_13 = 1779655105;
signed short int var_1_14 = 8;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
float var_1_22 = 24.4;
signed long int var_1_24 = 256;
unsigned char var_1_25 = 8;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
float var_1_28 = 16.35;
double var_1_29 = 0.7;
signed long int var_1_30 = 2;
double var_1_31 = 99.5;
double var_1_32 = 24.25;
double var_1_33 = 3.3;
float var_1_34 = 64.8;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 32;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 1;
unsigned short int var_1_39 = 10;
unsigned short int var_1_41 = 37991;
unsigned short int var_1_42 = 30623;
unsigned short int var_1_43 = 25388;
float var_1_44 = 200.5;
float var_1_45 = 16.875;
unsigned char var_1_46 = 16;
signed short int var_1_47 = -2;
signed short int var_1_48 = -5;
double var_1_50 = 100000.75;
double var_1_51 = 10.8;
unsigned char var_1_52 = 10;
unsigned long int var_1_53 = 128;
unsigned long int var_1_54 = 1000000000;
unsigned short int var_1_55 = 0;
unsigned short int var_1_56 = 8;
unsigned long int var_1_57 = 5;
unsigned long int var_1_58 = 2388169052;
signed long int var_1_59 = 16;
unsigned char var_1_60 = 0;
signed long int var_1_61 = -64;
signed long int var_1_62 = 0;
signed char var_1_63 = 16;
signed short int var_1_64 = -5;
unsigned char var_1_65 = 32;
unsigned char last_1_var_1_15 = 5;
unsigned char last_1_var_1_26 = 0;
float last_1_var_1_28 = 16.35;
unsigned char last_1_var_1_37 = 1;
unsigned short int last_1_var_1_39 = 10;
signed short int last_1_var_1_47 = -2;
signed short int last_1_var_1_48 = -5;
double last_1_var_1_50 = 100000.75;
unsigned char last_1_var_1_52 = 10;
unsigned short int last_1_var_1_56 = 8;
unsigned long int last_1_var_1_57 = 5;
signed short int last_1_var_1_64 = -5;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_37 && (last_1_var_1_50 < var_1_31)) {
  var_1_53 = (((var_1_54 - var_1_18) + ((((var_1_43) > (10u)) ? (var_1_43) : (10u)))) + ((((var_1_16) < (128u)) ? (var_1_16) : (128u))));
 }
 signed long int stepLocal_4 = var_1_13;
 signed long int stepLocal_3 = var_1_13 * last_1_var_1_48;
 if (((var_1_18 + var_1_16) % ((((var_1_30) > (var_1_24)) ? (var_1_30) : (var_1_24)))) > stepLocal_3) {
  if (stepLocal_4 < var_1_18) {
   var_1_29 = 64.575;
  } else {
   var_1_29 = ((var_1_31 + (var_1_32 - var_1_33)) + var_1_7);
  }
 } else {
  var_1_29 = (var_1_33 - ((((var_1_5) < (var_1_32)) ? (var_1_5) : (var_1_32))));
 }
 if (var_1_29 < (((((- var_1_32)) < ((10.25 + var_1_7))) ? ((- var_1_32)) : ((10.25 + var_1_7))))) {
  var_1_50 = ((((var_1_32) < (var_1_51)) ? (var_1_32) : (var_1_51)));
 } else {
  var_1_50 = ((var_1_32 + 31.25) - (var_1_4 - 32.25));
 }
 if (last_1_var_1_26) {
  var_1_12 = ((((((var_1_13 - 50)) < (last_1_var_1_56)) ? ((var_1_13 - 50)) : (last_1_var_1_56))) - last_1_var_1_15);
 }
 signed long int stepLocal_10 = var_1_12;
 if ((var_1_41 - var_1_18) > stepLocal_10) {
  if (var_1_27) {
   var_1_44 = (var_1_31 + var_1_45);
  }
 }
 if (var_1_51 < last_1_var_1_28) {
  var_1_59 = ((((last_1_var_1_52) < 0 ) ? -(last_1_var_1_52) : (last_1_var_1_52)));
 } else {
  if (var_1_21) {
   var_1_59 = ((((last_1_var_1_47) > ((var_1_13 - last_1_var_1_64))) ? (last_1_var_1_47) : ((var_1_13 - last_1_var_1_64))));
  }
 }
 if (((((var_1_17) > (var_1_59)) ? (var_1_17) : (var_1_59))) <= (var_1_13 / var_1_24)) {
  var_1_22 = var_1_7;
 }
 if (var_1_33 <= ((((((((var_1_32) < (var_1_22)) ? (var_1_32) : (var_1_22)))) > (var_1_7)) ? (((((var_1_32) < (var_1_22)) ? (var_1_32) : (var_1_22)))) : (var_1_7)))) {
  if (var_1_4 > (((((var_1_22 + 1.896f)) > (((((var_1_50) > (var_1_45)) ? (var_1_50) : (var_1_45))))) ? ((var_1_22 + 1.896f)) : (((((var_1_50) > (var_1_45)) ? (var_1_50) : (var_1_45))))))) {
   var_1_65 = var_1_18;
  } else {
   var_1_65 = var_1_16;
  }
 } else {
  var_1_65 = 128;
 }
 var_1_14 = ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)));
 var_1_35 = (! var_1_20);
 var_1_56 = ((((var_1_41) < (var_1_43)) ? (var_1_41) : (var_1_43)));
 var_1_61 = var_1_62;
 var_1_63 = var_1_11;
 if (var_1_21) {
  var_1_64 = var_1_11;
 } else {
  var_1_64 = -8;
 }
 if (var_1_27) {
  var_1_57 = (((((var_1_58 - var_1_43)) > ((((((var_1_12 + var_1_42)) > (var_1_56)) ? ((var_1_12 + var_1_42)) : (var_1_56))))) ? ((var_1_58 - var_1_43)) : ((((((var_1_12 + var_1_42)) > (var_1_56)) ? ((var_1_12 + var_1_42)) : (var_1_56))))));
 } else {
  var_1_57 = ((((last_1_var_1_57) < (var_1_61)) ? (last_1_var_1_57) : (var_1_61)));
 }
 unsigned long int stepLocal_12 = (var_1_59 ^ var_1_57) % ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
 if (var_1_12 > stepLocal_12) {
  var_1_52 = var_1_17;
 } else {
  if (((((var_1_33) > (16.2)) ? (var_1_33) : (16.2))) <= var_1_29) {
   var_1_52 = ((((var_1_16) < ((var_1_17 + var_1_18))) ? (var_1_16) : ((var_1_17 + var_1_18))));
  } else {
   var_1_52 = var_1_18;
  }
 }
 if (var_1_52 < var_1_53) {
  var_1_1 = ((var_1_4 - var_1_5) - ((((3.5f) > ((var_1_6 - var_1_7))) ? (3.5f) : ((var_1_6 - var_1_7)))));
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_21 && (var_1_1 != var_1_5)) {
  if (var_1_20) {
   var_1_26 = (! 1);
  } else {
   var_1_26 = (! var_1_27);
  }
 } else {
  var_1_26 = (! var_1_21);
 }
 signed long int stepLocal_1 = var_1_61 * var_1_59;
 signed long int stepLocal_0 = 1 + var_1_61;
 if (var_1_13 >= stepLocal_0) {
  if (var_1_64 > stepLocal_1) {
   var_1_15 = (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) + var_1_18);
  }
 } else {
  var_1_15 = var_1_18;
 }
 signed long int stepLocal_11 = var_1_24;
 if (stepLocal_11 < (var_1_15 - var_1_43)) {
  var_1_46 = (var_1_16 + var_1_17);
 }
 unsigned char stepLocal_2 = var_1_35;
 if ((var_1_64 <= var_1_18) && stepLocal_2) {
  var_1_19 = (var_1_20 || (var_1_35 && var_1_21));
 }
 if (var_1_20) {
  if (var_1_35) {
   var_1_28 = (((((var_1_5 - var_1_7)) > (var_1_6)) ? ((var_1_5 - var_1_7)) : (var_1_6)));
  }
 } else {
  var_1_28 = (var_1_7 + var_1_5);
 }
 unsigned long int stepLocal_5 = var_1_53 / var_1_24;
 if (stepLocal_5 >= var_1_15) {
  var_1_34 = var_1_32;
 }
 unsigned char stepLocal_6 = var_1_15;
 if (stepLocal_6 < var_1_17) {
  var_1_36 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
 } else {
  var_1_36 = (var_1_17 + var_1_59);
 }
 if (var_1_19) {
  var_1_60 = var_1_27;
 } else {
  var_1_60 = var_1_20;
 }
 if (! var_1_35) {
  if (var_1_53 > ((((var_1_57) > (var_1_16)) ? (var_1_57) : (var_1_16)))) {
   var_1_39 = (var_1_41 - 10);
  } else {
   if ((var_1_4 / var_1_6) < var_1_29) {
    var_1_39 = (((var_1_42 - var_1_18) + (var_1_43 - 50)) - last_1_var_1_39);
   }
  }
 } else {
  var_1_39 = (var_1_18 + (var_1_16 + var_1_17));
 }
 if (! var_1_60) {
  var_1_25 = ((((64) > (var_1_17)) ? (64) : (var_1_17)));
 } else {
  if (((var_1_7 + var_1_5) - var_1_4) >= var_1_22) {
   var_1_25 = (var_1_16 + var_1_17);
  } else {
   var_1_25 = 4;
  }
 }
 if (var_1_60) {
  var_1_8 = ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
 }
 signed long int stepLocal_13 = var_1_36;
 if (var_1_25 <= stepLocal_13) {
  var_1_55 = (((((var_1_57 + var_1_12)) < (((((100) > (var_1_41)) ? (100) : (var_1_41))))) ? ((var_1_57 + var_1_12)) : (((((100) > (var_1_41)) ? (100) : (var_1_41))))));
 }
 signed long int stepLocal_9 = var_1_39 / var_1_30;
 signed long int stepLocal_8 = ~ var_1_16;
 unsigned char stepLocal_7 = 1 > (var_1_16 / var_1_13);
 if (var_1_52 > stepLocal_9) {
  if (last_1_var_1_37 && stepLocal_7) {
   if (var_1_39 > stepLocal_8) {
    var_1_37 = (var_1_21 || var_1_27);
   } else {
    if (last_1_var_1_37) {
     var_1_37 = (var_1_27 || var_1_38);
    } else {
     var_1_37 = var_1_21;
    }
   }
  }
 }
 if (8u <= (var_1_57 * var_1_59)) {
  var_1_48 = var_1_17;
 } else {
  if (((((var_1_30) < ((var_1_56 / var_1_24))) ? (var_1_30) : ((var_1_56 / var_1_24)))) > var_1_61) {
   var_1_48 = (var_1_25 + ((((var_1_64) < (var_1_17)) ? (var_1_64) : (var_1_17))));
  } else {
   if (var_1_6 >= (var_1_44 * var_1_50)) {
    var_1_48 = ((((var_1_61) > (var_1_59)) ? (var_1_61) : (var_1_59)));
   } else {
    var_1_48 = var_1_10;
   }
  }
 }
 if ((last_1_var_1_47 + var_1_43) > (var_1_65 / var_1_30)) {
  var_1_47 = (((((var_1_14 - (var_1_46 + var_1_16))) < ((last_1_var_1_47 - var_1_59))) ? ((var_1_14 - (var_1_46 + var_1_16))) : ((last_1_var_1_47 - var_1_59))));
 } else {
  if (var_1_37 || var_1_35) {
   var_1_47 = (var_1_11 + var_1_17);
  } else {
   var_1_47 = (((((-100) > (64)) ? (-100) : (64))) + (var_1_16 - (var_1_18 + var_1_59)));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 4611686.018427383000e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 1073741822);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 assume_abort_if_not(var_1_24 != 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 assume_abort_if_not(var_1_30 != 0);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65534);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 24575);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 24575);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -922337.2036854766000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 536870912);
 assume_abort_if_not(var_1_54 <= 1073741824);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 2147483647);
 assume_abort_if_not(var_1_58 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= -2147483647);
 assume_abort_if_not(var_1_62 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((var_1_52 < var_1_53) ? (var_1_1 == ((float) ((var_1_4 - var_1_5) - ((((3.5f) > ((var_1_6 - var_1_7))) ? (3.5f) : ((var_1_6 - var_1_7))))))) : (var_1_1 == ((float) var_1_6))) && (var_1_60 ? (var_1_8 == ((signed char) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1)) && (last_1_var_1_26 ? (var_1_12 == ((signed long int) ((((((var_1_13 - 50)) < (last_1_var_1_56)) ? ((var_1_13 - 50)) : (last_1_var_1_56))) - last_1_var_1_15))) : 1)) && (var_1_14 == ((signed short int) ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)))))) && ((var_1_13 >= (1 + var_1_61)) ? ((var_1_64 > (var_1_61 * var_1_59)) ? (var_1_15 == ((unsigned char) (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))) + var_1_18))) : 1) : (var_1_15 == ((unsigned char) var_1_18)))) && (((var_1_64 <= var_1_18) && var_1_35) ? (var_1_19 == ((unsigned char) (var_1_20 || (var_1_35 && var_1_21)))) : 1)) && ((((((var_1_17) > (var_1_59)) ? (var_1_17) : (var_1_59))) <= (var_1_13 / var_1_24)) ? (var_1_22 == ((float) var_1_7)) : 1)) && ((! var_1_60) ? (var_1_25 == ((unsigned char) ((((64) > (var_1_17)) ? (64) : (var_1_17))))) : ((((var_1_7 + var_1_5) - var_1_4) >= var_1_22) ? (var_1_25 == ((unsigned char) (var_1_16 + var_1_17))) : (var_1_25 == ((unsigned char) 4))))) && ((var_1_21 && (var_1_1 != var_1_5)) ? (var_1_20 ? (var_1_26 == ((unsigned char) (! 1))) : (var_1_26 == ((unsigned char) (! var_1_27)))) : (var_1_26 == ((unsigned char) (! var_1_21))))) && (var_1_20 ? (var_1_35 ? (var_1_28 == ((float) (((((var_1_5 - var_1_7)) > (var_1_6)) ? ((var_1_5 - var_1_7)) : (var_1_6))))) : 1) : (var_1_28 == ((float) (var_1_7 + var_1_5))))) && ((((var_1_18 + var_1_16) % ((((var_1_30) > (var_1_24)) ? (var_1_30) : (var_1_24)))) > (var_1_13 * last_1_var_1_48)) ? ((var_1_13 < var_1_18) ? (var_1_29 == ((double) 64.575)) : (var_1_29 == ((double) ((var_1_31 + (var_1_32 - var_1_33)) + var_1_7)))) : (var_1_29 == ((double) (var_1_33 - ((((var_1_5) < (var_1_32)) ? (var_1_5) : (var_1_32)))))))) && (((var_1_53 / var_1_24) >= var_1_15) ? (var_1_34 == ((float) var_1_32)) : 1)) && (var_1_35 == ((unsigned char) (! var_1_20)))) && ((var_1_15 < var_1_17) ? (var_1_36 == ((signed long int) ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))) : (var_1_36 == ((signed long int) (var_1_17 + var_1_59))))) && ((var_1_52 > (var_1_39 / var_1_30)) ? ((last_1_var_1_37 && (1 > (var_1_16 / var_1_13))) ? ((var_1_39 > (~ var_1_16)) ? (var_1_37 == ((unsigned char) (var_1_21 || var_1_27))) : (last_1_var_1_37 ? (var_1_37 == ((unsigned char) (var_1_27 || var_1_38))) : (var_1_37 == ((unsigned char) var_1_21)))) : 1) : 1)) && ((! var_1_35) ? ((var_1_53 > ((((var_1_57) > (var_1_16)) ? (var_1_57) : (var_1_16)))) ? (var_1_39 == ((unsigned short int) (var_1_41 - 10))) : (((var_1_4 / var_1_6) < var_1_29) ? (var_1_39 == ((unsigned short int) (((var_1_42 - var_1_18) + (var_1_43 - 50)) - last_1_var_1_39))) : 1)) : (var_1_39 == ((unsigned short int) (var_1_18 + (var_1_16 + var_1_17)))))) && (((var_1_41 - var_1_18) > var_1_12) ? (var_1_27 ? (var_1_44 == ((float) (var_1_31 + var_1_45))) : 1) : 1)) && ((var_1_24 < (var_1_15 - var_1_43)) ? (var_1_46 == ((unsigned char) (var_1_16 + var_1_17))) : 1)) && (((last_1_var_1_47 + var_1_43) > (var_1_65 / var_1_30)) ? (var_1_47 == ((signed short int) (((((var_1_14 - (var_1_46 + var_1_16))) < ((last_1_var_1_47 - var_1_59))) ? ((var_1_14 - (var_1_46 + var_1_16))) : ((last_1_var_1_47 - var_1_59)))))) : ((var_1_37 || var_1_35) ? (var_1_47 == ((signed short int) (var_1_11 + var_1_17))) : (var_1_47 == ((signed short int) (((((-100) > (64)) ? (-100) : (64))) + (var_1_16 - (var_1_18 + var_1_59)))))))) && ((8u <= (var_1_57 * var_1_59)) ? (var_1_48 == ((signed short int) var_1_17)) : ((((((var_1_30) < ((var_1_56 / var_1_24))) ? (var_1_30) : ((var_1_56 / var_1_24)))) > var_1_61) ? (var_1_48 == ((signed short int) (var_1_25 + ((((var_1_64) < (var_1_17)) ? (var_1_64) : (var_1_17)))))) : ((var_1_6 >= (var_1_44 * var_1_50)) ? (var_1_48 == ((signed short int) ((((var_1_61) > (var_1_59)) ? (var_1_61) : (var_1_59))))) : (var_1_48 == ((signed short int) var_1_10)))))) && ((var_1_29 < (((((- var_1_32)) < ((10.25 + var_1_7))) ? ((- var_1_32)) : ((10.25 + var_1_7))))) ? (var_1_50 == ((double) ((((var_1_32) < (var_1_51)) ? (var_1_32) : (var_1_51))))) : (var_1_50 == ((double) ((var_1_32 + 31.25) - (var_1_4 - 32.25)))))) && ((var_1_12 > ((var_1_59 ^ var_1_57) % ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) ? (var_1_52 == ((unsigned char) var_1_17)) : ((((((var_1_33) > (16.2)) ? (var_1_33) : (16.2))) <= var_1_29) ? (var_1_52 == ((unsigned char) ((((var_1_16) < ((var_1_17 + var_1_18))) ? (var_1_16) : ((var_1_17 + var_1_18)))))) : (var_1_52 == ((unsigned char) var_1_18))))) && ((last_1_var_1_37 && (last_1_var_1_50 < var_1_31)) ? (var_1_53 == ((unsigned long int) (((var_1_54 - var_1_18) + ((((var_1_43) > (10u)) ? (var_1_43) : (10u)))) + ((((var_1_16) < (128u)) ? (var_1_16) : (128u)))))) : 1)) && ((var_1_25 <= var_1_36) ? (var_1_55 == ((unsigned short int) (((((var_1_57 + var_1_12)) < (((((100) > (var_1_41)) ? (100) : (var_1_41))))) ? ((var_1_57 + var_1_12)) : (((((100) > (var_1_41)) ? (100) : (var_1_41)))))))) : 1)) && (var_1_56 == ((unsigned short int) ((((var_1_41) < (var_1_43)) ? (var_1_41) : (var_1_43)))))) && (var_1_27 ? (var_1_57 == ((unsigned long int) (((((var_1_58 - var_1_43)) > ((((((var_1_12 + var_1_42)) > (var_1_56)) ? ((var_1_12 + var_1_42)) : (var_1_56))))) ? ((var_1_58 - var_1_43)) : ((((((var_1_12 + var_1_42)) > (var_1_56)) ? ((var_1_12 + var_1_42)) : (var_1_56)))))))) : (var_1_57 == ((unsigned long int) ((((last_1_var_1_57) < (var_1_61)) ? (last_1_var_1_57) : (var_1_61))))))) && ((var_1_51 < last_1_var_1_28) ? (var_1_59 == ((signed long int) ((((last_1_var_1_52) < 0 ) ? -(last_1_var_1_52) : (last_1_var_1_52))))) : (var_1_21 ? (var_1_59 == ((signed long int) ((((last_1_var_1_47) > ((var_1_13 - last_1_var_1_64))) ? (last_1_var_1_47) : ((var_1_13 - last_1_var_1_64)))))) : 1))) && (var_1_19 ? (var_1_60 == ((unsigned char) var_1_27)) : (var_1_60 == ((unsigned char) var_1_20)))) && (var_1_61 == ((signed long int) var_1_62))) && (var_1_63 == ((signed char) var_1_11))) && (var_1_21 ? (var_1_64 == ((signed short int) var_1_11)) : (var_1_64 == ((signed short int) -8)))) && ((var_1_33 <= ((((((((var_1_32) < (var_1_22)) ? (var_1_32) : (var_1_22)))) > (var_1_7)) ? (((((var_1_32) < (var_1_22)) ? (var_1_32) : (var_1_22)))) : (var_1_7)))) ? ((var_1_4 > (((((var_1_22 + 1.896f)) > (((((var_1_50) > (var_1_45)) ? (var_1_50) : (var_1_45))))) ? ((var_1_22 + 1.896f)) : (((((var_1_50) > (var_1_45)) ? (var_1_50) : (var_1_45))))))) ? (var_1_65 == ((unsigned char) var_1_18)) : (var_1_65 == ((unsigned char) var_1_16))) : (var_1_65 == ((unsigned char) 128)))
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
