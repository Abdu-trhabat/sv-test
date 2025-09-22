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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch77Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -8;
float var_1_2 = 1.5;
float var_1_3 = 24.7;
signed long int var_1_5 = -2;
signed long int var_1_6 = 5;
signed long int var_1_7 = 10;
signed long int var_1_8 = -1;
signed long int var_1_9 = 32;
unsigned short int var_1_10 = 32;
unsigned char var_1_11 = 1;
unsigned short int var_1_13 = 64;
unsigned short int var_1_14 = 256;
unsigned short int var_1_15 = 10;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 10000;
unsigned short int var_1_18 = 10000;
unsigned short int var_1_19 = 4;
unsigned short int var_1_20 = 57728;
float var_1_22 = 8.8;
float var_1_23 = 8.5;
signed short int var_1_24 = 4;
signed short int var_1_25 = -256;
signed short int var_1_26 = -256;
unsigned long int var_1_27 = 256;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 64;
unsigned char var_1_32 = 50;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 128;
signed char var_1_35 = 4;
signed char var_1_36 = 1;
signed long int var_1_37 = -1;
double var_1_38 = 256.75;
double var_1_39 = 1.35;
double var_1_40 = 24.5;
double var_1_41 = 128.75;
unsigned long int var_1_42 = 64;
unsigned short int var_1_43 = 50;
float var_1_44 = 10.775;
float var_1_46 = 1000.5;
float var_1_47 = 31.5;
float var_1_48 = 99999999999.2;
float var_1_49 = 2.4;
float var_1_50 = 15.25;
unsigned char var_1_51 = 128;
float var_1_53 = 4.4;
float var_1_54 = 0.0;
float var_1_55 = 99999999.8;
float var_1_56 = 0.0;
float var_1_57 = 50.25;
unsigned short int var_1_58 = 64;
unsigned short int var_1_59 = 26562;
double var_1_60 = 0.0;
signed char var_1_61 = 1;
unsigned long int var_1_62 = 32;
signed char var_1_63 = 16;
signed char var_1_64 = 4;
signed char var_1_65 = -5;
signed char var_1_66 = 100;
unsigned char var_1_67 = 0;
unsigned long int var_1_68 = 4;
unsigned long int var_1_69 = 1;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 16;
unsigned short int var_1_75 = 10;
float var_1_76 = 2.6;
unsigned short int var_1_77 = 4;
unsigned short int var_1_78 = 5;
signed short int var_1_79 = 500;
unsigned char var_1_80 = 10;
float var_1_81 = 1.25;
unsigned long int last_1_var_1_42 = 64;
unsigned short int last_1_var_1_43 = 50;
unsigned char last_1_var_1_51 = 128;
unsigned char last_1_var_1_67 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_4 = last_1_var_1_67;
 if ((! last_1_var_1_67) && stepLocal_4) {
  var_1_42 = ((((last_1_var_1_42) < ((var_1_32 + last_1_var_1_51))) ? (last_1_var_1_42) : ((var_1_32 + last_1_var_1_51))));
 }
 if ((var_1_7 / ((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17)))) != var_1_6) {
  var_1_24 = (var_1_19 + var_1_18);
 } else {
  var_1_24 = ((((((var_1_25 + var_1_26) + -2)) < (var_1_18)) ? (((var_1_25 + var_1_26) + -2)) : (var_1_18)));
 }
 var_1_27 = (var_1_14 + var_1_18);
 var_1_38 = ((((var_1_39) > ((var_1_40 + var_1_41))) ? (var_1_39) : ((var_1_40 + var_1_41))));
 unsigned char stepLocal_5 = var_1_32;
 if (stepLocal_5 <= ((var_1_33 / var_1_34) * var_1_17)) {
  var_1_43 = (last_1_var_1_43 + var_1_32);
 } else {
  var_1_43 = var_1_20;
 }
 if (var_1_38 <= 7.6) {
  var_1_53 = ((var_1_54 - var_1_55) - (var_1_56 - var_1_57));
 }
 signed long int stepLocal_14 = 2;
 if ((var_1_66 >> (var_1_68 - var_1_69)) <= stepLocal_14) {
  if (var_1_57 <= ((((var_1_50) > (127.25f)) ? (var_1_50) : (127.25f)))) {
   var_1_67 = (! (! var_1_70));
  } else {
   var_1_67 = ((var_1_71 || var_1_72) || var_1_73);
  }
 }
 if (var_1_73) {
  var_1_74 = var_1_30;
 }
 unsigned long int stepLocal_15 = var_1_42;
 if (stepLocal_15 == var_1_66) {
  var_1_75 = 0;
 } else {
  var_1_75 = var_1_42;
 }
 if (var_1_67) {
  var_1_76 = var_1_39;
 }
 if (var_1_49 == var_1_41) {
  var_1_77 = ((((var_1_59) > (var_1_78)) ? (var_1_59) : (var_1_78)));
 } else {
  var_1_77 = (var_1_30 + var_1_19);
 }
 var_1_79 = var_1_33;
 var_1_80 = 2;
 var_1_81 = var_1_46;
 unsigned char stepLocal_8 = var_1_67;
 if (((var_1_47 + var_1_50) < var_1_22) && stepLocal_8) {
  var_1_62 = ((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18)));
 } else {
  var_1_62 = var_1_42;
 }
 if (var_1_67 || ((- var_1_8) < (var_1_6 + var_1_9))) {
  if (((var_1_8 * var_1_5) * var_1_7) != (var_1_9 * var_1_42)) {
   var_1_10 = (var_1_13 + var_1_14);
  } else {
   if (var_1_67 && (var_1_13 >= (- var_1_7))) {
    var_1_10 = (var_1_13 + var_1_14);
   } else {
    var_1_10 = var_1_14;
   }
  }
 } else {
  var_1_10 = 128;
 }
 if (var_1_62 < (var_1_62 - var_1_19)) {
  if (var_1_67) {
   var_1_58 = (var_1_20 - (var_1_59 - var_1_34));
  } else {
   if ((var_1_50 - (var_1_60 - 16.125)) <= var_1_38) {
    var_1_58 = var_1_34;
   } else {
    var_1_58 = (((((var_1_20 - var_1_36)) > (((((var_1_17) < ((var_1_59 + var_1_30))) ? (var_1_17) : ((var_1_59 + var_1_30)))))) ? ((var_1_20 - var_1_36)) : (((((var_1_17) < ((var_1_59 + var_1_30))) ? (var_1_17) : ((var_1_59 + var_1_30)))))));
   }
  }
 } else {
  var_1_58 = ((((var_1_24) > ((var_1_20 - (var_1_59 - var_1_29)))) ? (var_1_24) : ((var_1_20 - (var_1_59 - var_1_29)))));
 }
 if ((var_1_2 - var_1_3) >= var_1_81) {
  var_1_1 = ((var_1_5 + var_1_6) + var_1_7);
 } else {
  var_1_1 = (var_1_8 - var_1_9);
 }
 unsigned char stepLocal_1 = var_1_11;
 signed long int stepLocal_0 = var_1_13 << var_1_6;
 if (var_1_5 > stepLocal_0) {
  if (stepLocal_1 || var_1_16) {
   if (! var_1_11) {
    var_1_15 = (var_1_13 + ((var_1_17 + var_1_18) - var_1_19));
   }
  } else {
   var_1_15 = (var_1_20 - var_1_17);
  }
 } else {
  if ((((((var_1_2 - var_1_3)) > (var_1_38)) ? ((var_1_2 - var_1_3)) : (var_1_38))) <= (var_1_53 / ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))) {
   var_1_15 = 16;
  } else {
   var_1_15 = var_1_14;
  }
 }
 if ((var_1_1 < var_1_26) && (((((var_1_1) > (var_1_13)) ? (var_1_1) : (var_1_13))) < var_1_19)) {
  var_1_28 = (var_1_29 - var_1_30);
 } else {
  if (var_1_67) {
   if (var_1_1 <= (~ var_1_8)) {
    var_1_28 = ((((var_1_30 + (var_1_32 + var_1_33)) < 0 ) ? -(var_1_30 + (var_1_32 + var_1_33)) : (var_1_30 + (var_1_32 + var_1_33))));
   } else {
    var_1_28 = (((((var_1_29) > (var_1_34)) ? (var_1_29) : (var_1_34))) - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))));
   }
  } else {
   var_1_28 = var_1_30;
  }
 }
 signed long int stepLocal_3 = var_1_1;
 signed long int stepLocal_2 = (var_1_43 * var_1_13) * var_1_25;
 if (var_1_58 > stepLocal_3) {
  if ((~ (var_1_80 * var_1_20)) <= stepLocal_2) {
   if (((((var_1_3) > (var_1_81)) ? (var_1_3) : (var_1_81))) <= var_1_38) {
    var_1_35 = ((((var_1_32) < ((var_1_33 - var_1_36))) ? (var_1_32) : ((var_1_33 - var_1_36))));
   } else {
    var_1_35 = 32;
   }
  } else {
   var_1_35 = var_1_33;
  }
 }
 if (! var_1_67) {
  var_1_44 = ((var_1_46 + ((((5.075f) > (var_1_47)) ? (5.075f) : (var_1_47)))) + ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))));
 } else {
  var_1_44 = (((((var_1_48) > (var_1_49)) ? (var_1_48) : (var_1_49))) - var_1_50);
 }
 signed long int stepLocal_13 = (var_1_36 >> var_1_64) / var_1_65;
 unsigned char stepLocal_12 = (var_1_27 <= var_1_7) && var_1_67;
 signed long int stepLocal_11 = var_1_10 >> var_1_64;
 unsigned long int stepLocal_10 = var_1_62;
 unsigned long int stepLocal_9 = var_1_27;
 if (stepLocal_12 && var_1_67) {
  if (-10000000 < stepLocal_10) {
   if (stepLocal_13 > var_1_34) {
    var_1_63 = (var_1_36 - ((var_1_66 - var_1_64) - var_1_33));
   }
  }
 } else {
  if (var_1_38 > (var_1_57 - var_1_56)) {
   if (var_1_39 >= ((((2.8) < (var_1_49)) ? (2.8) : (var_1_49)))) {
    var_1_63 = (var_1_64 - var_1_66);
   } else {
    if ((var_1_29 - var_1_33) > stepLocal_9) {
     if (var_1_13 > stepLocal_11) {
      var_1_63 = ((var_1_33 + var_1_64) - var_1_36);
     }
    } else {
     var_1_63 = var_1_33;
    }
   }
  } else {
   var_1_63 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
  }
 }
 if (100000 <= (var_1_7 / ((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))))) {
  var_1_37 = var_1_58;
 }
 if ((var_1_32 ^ var_1_34) > (var_1_37 - var_1_10)) {
  if ((32 / var_1_18) >= (var_1_62 / var_1_20)) {
   var_1_51 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  } else {
   var_1_51 = (var_1_30 + var_1_36);
  }
 } else {
  var_1_51 = (var_1_34 - 8);
 }
 signed long int stepLocal_7 = var_1_37;
 unsigned long int stepLocal_6 = 32u;
 if (stepLocal_6 <= var_1_42) {
  if (var_1_25 >= stepLocal_7) {
   var_1_61 = ((((var_1_33 - var_1_32) < 0 ) ? -(var_1_33 - var_1_32) : (var_1_33 - var_1_32)));
  } else {
   var_1_61 = ((((var_1_32) > ((var_1_33 - var_1_36))) ? (var_1_32) : ((var_1_33 - var_1_36))));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -536870911);
 assume_abort_if_not(var_1_5 <= 536870912);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -536870911);
 assume_abort_if_not(var_1_6 <= 536870911);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -1073741823);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 8191);
 assume_abort_if_not(var_1_17 <= 16384);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 8192);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 assume_abort_if_not(var_1_22 != 0.0F);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -8191);
 assume_abort_if_not(var_1_25 <= 8192);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -8191);
 assume_abort_if_not(var_1_26 <= 8191);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 64);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -230584.3009213691400e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 4611686.018427383000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 16383);
 assume_abort_if_not(var_1_59 <= 32767);
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 4611686.018427388000e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 1);
 assume_abort_if_not(var_1_64 <= 6);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= -128);
 assume_abort_if_not(var_1_65 <= 127);
 assume_abort_if_not(var_1_65 != 0);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 94);
 assume_abort_if_not(var_1_66 <= 126);
 var_1_68 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_68 >= 3);
 assume_abort_if_not(var_1_68 <= 6);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 2);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 0);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 0);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 0);
 var_1_78 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_67 = var_1_67;
}
int property(void) {
 return (((((((((((((((((((((((((((var_1_2 - var_1_3) >= var_1_81) ? (var_1_1 == ((signed long int) ((var_1_5 + var_1_6) + var_1_7))) : (var_1_1 == ((signed long int) (var_1_8 - var_1_9)))) && ((var_1_67 || ((- var_1_8) < (var_1_6 + var_1_9))) ? ((((var_1_8 * var_1_5) * var_1_7) != (var_1_9 * var_1_42)) ? (var_1_10 == ((unsigned short int) (var_1_13 + var_1_14))) : ((var_1_67 && (var_1_13 >= (- var_1_7))) ? (var_1_10 == ((unsigned short int) (var_1_13 + var_1_14))) : (var_1_10 == ((unsigned short int) var_1_14)))) : (var_1_10 == ((unsigned short int) 128)))) && ((var_1_5 > (var_1_13 << var_1_6)) ? ((var_1_11 || var_1_16) ? ((! var_1_11) ? (var_1_15 == ((unsigned short int) (var_1_13 + ((var_1_17 + var_1_18) - var_1_19)))) : 1) : (var_1_15 == ((unsigned short int) (var_1_20 - var_1_17)))) : (((((((var_1_2 - var_1_3)) > (var_1_38)) ? ((var_1_2 - var_1_3)) : (var_1_38))) <= (var_1_53 / ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))) ? (var_1_15 == ((unsigned short int) 16)) : (var_1_15 == ((unsigned short int) var_1_14))))) && (((var_1_7 / ((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17)))) != var_1_6) ? (var_1_24 == ((signed short int) (var_1_19 + var_1_18))) : (var_1_24 == ((signed short int) ((((((var_1_25 + var_1_26) + -2)) < (var_1_18)) ? (((var_1_25 + var_1_26) + -2)) : (var_1_18))))))) && (var_1_27 == ((unsigned long int) (var_1_14 + var_1_18)))) && (((var_1_1 < var_1_26) && (((((var_1_1) > (var_1_13)) ? (var_1_1) : (var_1_13))) < var_1_19)) ? (var_1_28 == ((unsigned char) (var_1_29 - var_1_30))) : (var_1_67 ? ((var_1_1 <= (~ var_1_8)) ? (var_1_28 == ((unsigned char) ((((var_1_30 + (var_1_32 + var_1_33)) < 0 ) ? -(var_1_30 + (var_1_32 + var_1_33)) : (var_1_30 + (var_1_32 + var_1_33)))))) : (var_1_28 == ((unsigned char) (((((var_1_29) > (var_1_34)) ? (var_1_29) : (var_1_34))) - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))))) : (var_1_28 == ((unsigned char) var_1_30))))) && ((var_1_58 > var_1_1) ? (((~ (var_1_80 * var_1_20)) <= ((var_1_43 * var_1_13) * var_1_25)) ? ((((((var_1_3) > (var_1_81)) ? (var_1_3) : (var_1_81))) <= var_1_38) ? (var_1_35 == ((signed char) ((((var_1_32) < ((var_1_33 - var_1_36))) ? (var_1_32) : ((var_1_33 - var_1_36)))))) : (var_1_35 == ((signed char) 32))) : (var_1_35 == ((signed char) var_1_33))) : 1)) && ((100000 <= (var_1_7 / ((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))))) ? (var_1_37 == ((signed long int) var_1_58)) : 1)) && (var_1_38 == ((double) ((((var_1_39) > ((var_1_40 + var_1_41))) ? (var_1_39) : ((var_1_40 + var_1_41))))))) && (((! last_1_var_1_67) && last_1_var_1_67) ? (var_1_42 == ((unsigned long int) ((((last_1_var_1_42) < ((var_1_32 + last_1_var_1_51))) ? (last_1_var_1_42) : ((var_1_32 + last_1_var_1_51)))))) : 1)) && ((var_1_32 <= ((var_1_33 / var_1_34) * var_1_17)) ? (var_1_43 == ((unsigned short int) (last_1_var_1_43 + var_1_32))) : (var_1_43 == ((unsigned short int) var_1_20)))) && ((! var_1_67) ? (var_1_44 == ((float) ((var_1_46 + ((((5.075f) > (var_1_47)) ? (5.075f) : (var_1_47)))) + ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) : (var_1_44 == ((float) (((((var_1_48) > (var_1_49)) ? (var_1_48) : (var_1_49))) - var_1_50))))) && (((var_1_32 ^ var_1_34) > (var_1_37 - var_1_10)) ? (((32 / var_1_18) >= (var_1_62 / var_1_20)) ? (var_1_51 == ((unsigned char) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) : (var_1_51 == ((unsigned char) (var_1_30 + var_1_36)))) : (var_1_51 == ((unsigned char) (var_1_34 - 8))))) && ((var_1_38 <= 7.6) ? (var_1_53 == ((float) ((var_1_54 - var_1_55) - (var_1_56 - var_1_57)))) : 1)) && ((var_1_62 < (var_1_62 - var_1_19)) ? (var_1_67 ? (var_1_58 == ((unsigned short int) (var_1_20 - (var_1_59 - var_1_34)))) : (((var_1_50 - (var_1_60 - 16.125)) <= var_1_38) ? (var_1_58 == ((unsigned short int) var_1_34)) : (var_1_58 == ((unsigned short int) (((((var_1_20 - var_1_36)) > (((((var_1_17) < ((var_1_59 + var_1_30))) ? (var_1_17) : ((var_1_59 + var_1_30)))))) ? ((var_1_20 - var_1_36)) : (((((var_1_17) < ((var_1_59 + var_1_30))) ? (var_1_17) : ((var_1_59 + var_1_30))))))))))) : (var_1_58 == ((unsigned short int) ((((var_1_24) > ((var_1_20 - (var_1_59 - var_1_29)))) ? (var_1_24) : ((var_1_20 - (var_1_59 - var_1_29))))))))) && ((32u <= var_1_42) ? ((var_1_25 >= var_1_37) ? (var_1_61 == ((signed char) ((((var_1_33 - var_1_32) < 0 ) ? -(var_1_33 - var_1_32) : (var_1_33 - var_1_32))))) : (var_1_61 == ((signed char) ((((var_1_32) > ((var_1_33 - var_1_36))) ? (var_1_32) : ((var_1_33 - var_1_36))))))) : 1)) && ((((var_1_47 + var_1_50) < var_1_22) && var_1_67) ? (var_1_62 == ((unsigned long int) ((((var_1_24) < (var_1_18)) ? (var_1_24) : (var_1_18))))) : (var_1_62 == ((unsigned long int) var_1_42)))) && ((((var_1_27 <= var_1_7) && var_1_67) && var_1_67) ? ((-10000000 < var_1_62) ? ((((var_1_36 >> var_1_64) / var_1_65) > var_1_34) ? (var_1_63 == ((signed char) (var_1_36 - ((var_1_66 - var_1_64) - var_1_33)))) : 1) : 1) : ((var_1_38 > (var_1_57 - var_1_56)) ? ((var_1_39 >= ((((2.8) < (var_1_49)) ? (2.8) : (var_1_49)))) ? (var_1_63 == ((signed char) (var_1_64 - var_1_66))) : (((var_1_29 - var_1_33) > var_1_27) ? ((var_1_13 > (var_1_10 >> var_1_64)) ? (var_1_63 == ((signed char) ((var_1_33 + var_1_64) - var_1_36))) : 1) : (var_1_63 == ((signed char) var_1_33)))) : (var_1_63 == ((signed char) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))))) && (((var_1_66 >> (var_1_68 - var_1_69)) <= 2) ? ((var_1_57 <= ((((var_1_50) > (127.25f)) ? (var_1_50) : (127.25f)))) ? (var_1_67 == ((unsigned char) (! (! var_1_70)))) : (var_1_67 == ((unsigned char) ((var_1_71 || var_1_72) || var_1_73)))) : 1)) && (var_1_73 ? (var_1_74 == ((unsigned char) var_1_30)) : 1)) && ((var_1_42 == var_1_66) ? (var_1_75 == ((unsigned short int) 0)) : (var_1_75 == ((unsigned short int) var_1_42)))) && (var_1_67 ? (var_1_76 == ((float) var_1_39)) : 1)) && ((var_1_49 == var_1_41) ? (var_1_77 == ((unsigned short int) ((((var_1_59) > (var_1_78)) ? (var_1_59) : (var_1_78))))) : (var_1_77 == ((unsigned short int) (var_1_30 + var_1_19))))) && (var_1_79 == ((signed short int) var_1_33))) && (var_1_80 == ((unsigned char) 2))) && (var_1_81 == ((float) var_1_46))
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
