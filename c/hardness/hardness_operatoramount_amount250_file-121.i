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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
double var_1_2 = 99.5;
double var_1_3 = 128.625;
double var_1_4 = 0.6;
double var_1_5 = 15.7;
double var_1_6 = 16.5;
double var_1_7 = 24.5;
unsigned long int var_1_9 = 2899782462;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 8;
signed long int var_1_12 = 100;
signed long int var_1_13 = 1586287064;
signed long int var_1_14 = 1000000000;
signed long int var_1_15 = 2;
signed long int var_1_16 = 16;
signed long int var_1_18 = 1;
unsigned short int var_1_19 = 32932;
unsigned short int var_1_20 = 4;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 8;
unsigned long int var_1_23 = 0;
signed short int var_1_24 = -100;
signed short int var_1_25 = 128;
signed short int var_1_26 = 5;
unsigned long int var_1_27 = 50;
float var_1_28 = 0.48;
float var_1_29 = 10000000000.875;
float var_1_30 = 10000000000.7;
float var_1_31 = 999999999.425;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 128.4;
unsigned long int var_1_35 = 2;
signed char var_1_37 = 32;
signed char var_1_38 = 4;
signed char var_1_39 = 8;
signed char var_1_40 = 16;
signed char var_1_41 = 1;
signed char var_1_42 = 8;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 128;
unsigned long int var_1_45 = 1;
unsigned long int var_1_46 = 1679664925;
float var_1_47 = 5.75;
float var_1_48 = 49.8;
unsigned long int var_1_49 = 4269296602;
signed short int var_1_50 = 64;
signed short int var_1_51 = -64;
signed short int var_1_52 = 20631;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
signed short int var_1_55 = -8;
signed char var_1_57 = -32;
signed char var_1_59 = 2;
signed char var_1_60 = 64;
signed char var_1_61 = 4;
unsigned char var_1_62 = 1;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 1;
signed long int var_1_68 = -16;
float var_1_69 = 8.5;
float var_1_70 = 5.625;
double var_1_71 = 128.4;
unsigned long int last_1_var_1_45 = 1;
signed short int last_1_var_1_51 = -64;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_4 = var_1_11;
 if (stepLocal_4 == var_1_10) {
  var_1_23 = (var_1_15 + ((((500u) < (var_1_21)) ? (500u) : (var_1_21))));
 }
 var_1_34 = (var_1_30 + var_1_31);
 if ((var_1_49 - var_1_14) >= var_1_18) {
  var_1_50 = var_1_41;
 }
 signed long int stepLocal_6 = var_1_16;
 if (var_1_38 != stepLocal_6) {
  var_1_53 = (var_1_33 && (! (! var_1_54)));
 }
 var_1_62 = ((var_1_63 || var_1_64) || var_1_65);
 if (var_1_62 || var_1_63) {
  var_1_70 = var_1_31;
 }
 if (var_1_23 <= (- 5u)) {
  if (var_1_3 < var_1_34) {
   var_1_71 = var_1_29;
  }
 }
 if ((var_1_71 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (var_1_71 / ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) {
  if (var_1_53) {
   var_1_1 = (var_1_9 - ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))));
  } else {
   var_1_1 = ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11)));
  }
 } else {
  var_1_1 = ((((var_1_11) > (var_1_9)) ? (var_1_11) : (var_1_9)));
 }
 if (var_1_18 < var_1_1) {
  var_1_35 = (var_1_20 + 8u);
 } else {
  var_1_35 = ((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (2u)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (2u)));
 }
 if (var_1_26 <= (~ var_1_25)) {
  if (var_1_6 < var_1_30) {
   if ((var_1_26 * var_1_23) != (var_1_1 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) {
    var_1_37 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
   } else {
    var_1_37 = (((((((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) - var_1_38)) < (((var_1_39 + var_1_40) + ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))))) ? ((((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) - var_1_38)) : (((var_1_39 + var_1_40) + ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))))));
   }
  } else {
   var_1_37 = var_1_42;
  }
 }
 signed long int stepLocal_5 = (var_1_22 - var_1_25) / var_1_19;
 if ((var_1_29 * var_1_6) > var_1_70) {
  if (var_1_18 == stepLocal_5) {
   var_1_43 = (((((var_1_44 - var_1_21)) < (var_1_38)) ? ((var_1_44 - var_1_21)) : (var_1_38)));
  } else {
   var_1_43 = var_1_21;
  }
 }
 if ((var_1_11 != (var_1_35 * var_1_18)) || var_1_53) {
  if (last_1_var_1_45 > var_1_22) {
   var_1_45 = (last_1_var_1_45 + (var_1_46 - var_1_19));
  } else {
   if ((var_1_47 - var_1_48) <= ((((var_1_71) < (var_1_4)) ? (var_1_71) : (var_1_4)))) {
    var_1_45 = ((var_1_49 - var_1_19) - (var_1_46 - var_1_38));
   } else {
    var_1_45 = (last_1_var_1_45 + var_1_14);
   }
  }
 } else {
  if ((var_1_25 + 50) < var_1_15) {
   var_1_45 = (var_1_9 - ((((var_1_26) < ((var_1_46 - var_1_15))) ? (var_1_26) : ((var_1_46 - var_1_15)))));
  }
 }
 var_1_68 = var_1_37;
 var_1_32 = ((var_1_35 <= ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) && (! var_1_33));
 if (var_1_32) {
  var_1_69 = var_1_31;
 } else {
  var_1_69 = var_1_29;
 }
 if (var_1_18 <= (var_1_10 % ((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22))))) {
  if (var_1_5 <= var_1_2) {
   var_1_24 = (var_1_21 + (((((var_1_22) < (var_1_25)) ? (var_1_22) : (var_1_25))) - var_1_26));
  } else {
   var_1_24 = var_1_26;
  }
 } else {
  if (var_1_32) {
   var_1_24 = var_1_25;
  }
 }
 if (var_1_1 > (-16 & var_1_22)) {
  if (((var_1_11 * 8u) >= var_1_20) || var_1_32) {
   var_1_28 = var_1_29;
  } else {
   if (var_1_10 != var_1_45) {
    var_1_28 = (var_1_30 + var_1_31);
   } else {
    if (-100 >= var_1_25) {
     var_1_28 = var_1_31;
    }
   }
  }
 }
 if ((var_1_44 * var_1_23) == var_1_9) {
  var_1_51 = (last_1_var_1_51 - ((((var_1_22) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_22) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))));
 } else {
  if (var_1_48 <= ((var_1_3 + var_1_28) * var_1_30)) {
   var_1_51 = (var_1_41 + var_1_44);
  } else {
   var_1_51 = ((((((((var_1_41) < (var_1_23)) ? (var_1_41) : (var_1_23)))) < ((((((var_1_26) < (var_1_44)) ? (var_1_26) : (var_1_44))) - (var_1_52 - 64)))) ? (((((var_1_41) < (var_1_23)) ? (var_1_41) : (var_1_23)))) : ((((((var_1_26) < (var_1_44)) ? (var_1_26) : (var_1_44))) - (var_1_52 - 64)))));
  }
 }
 unsigned char stepLocal_8 = var_1_31 >= (var_1_4 * var_1_28);
 if (var_1_53 && stepLocal_8) {
  var_1_66 = (var_1_33 && var_1_54);
 }
 if (! var_1_66) {
  var_1_27 = ((((var_1_15) > (var_1_11)) ? (var_1_15) : (var_1_11)));
 }
 if (var_1_1 <= (((((var_1_1 * var_1_35)) > (((((var_1_26) > (64)) ? (var_1_26) : (64))))) ? ((var_1_1 * var_1_35)) : (((((var_1_26) > (64)) ? (var_1_26) : (64))))))) {
  if (var_1_66 && (var_1_62 || var_1_54)) {
   var_1_55 = (var_1_25 - var_1_26);
  } else {
   var_1_55 = ((256 - var_1_44) + var_1_1);
  }
 } else {
  if (var_1_62 || (var_1_32 || var_1_54)) {
   if (var_1_54) {
    if ((- var_1_30) <= (var_1_71 / ((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))))) {
     var_1_55 = ((((((((((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) < (var_1_39)) ? (((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) : (var_1_39)))) > (var_1_1)) ? (((((((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) < (var_1_39)) ? (((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) : (var_1_39)))) : (var_1_1)));
    } else {
     var_1_55 = (var_1_26 - var_1_38);
    }
   }
  } else {
   var_1_55 = (var_1_44 + ((((var_1_41) < (var_1_21)) ? (var_1_41) : (var_1_21))));
  }
 }
 unsigned long int stepLocal_3 = (var_1_19 - var_1_20) | (var_1_10 * var_1_11);
 unsigned long int stepLocal_2 = var_1_9 + var_1_27;
 unsigned char stepLocal_1 = (var_1_11 * var_1_10) > var_1_16;
 unsigned long int stepLocal_0 = var_1_10;
 if (var_1_27 <= stepLocal_0) {
  var_1_12 = ((var_1_13 - (var_1_14 - var_1_15)) - var_1_16);
 } else {
  if (var_1_53) {
   if (! (var_1_66 || (var_1_27 <= var_1_13))) {
    if (stepLocal_2 > (var_1_16 ^ var_1_10)) {
     if (var_1_66 || stepLocal_1) {
      var_1_12 = (((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))) - (var_1_15 + var_1_18));
     }
    } else {
     if (stepLocal_3 >= (var_1_15 >> (var_1_21 + var_1_22))) {
      var_1_12 = 16;
     }
    }
   } else {
    var_1_12 = var_1_14;
   }
  } else {
   var_1_12 = var_1_16;
  }
 }
 unsigned long int stepLocal_7 = var_1_1;
 if ((var_1_1 + var_1_12) >= stepLocal_7) {
  if (var_1_33) {
   var_1_57 = ((var_1_22 + (var_1_21 + var_1_59)) - (var_1_60 - ((((1) > (32)) ? (1) : (32)))));
  }
 } else {
  var_1_57 = ((((4) < ((var_1_59 - ((((var_1_38) < (var_1_61)) ? (var_1_38) : (var_1_61)))))) ? (4) : ((var_1_59 - ((((var_1_38) < (var_1_61)) ? (var_1_38) : (var_1_61)))))));
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
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 assume_abort_if_not(var_1_7 != 0.0F);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 1073741822);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 536870911);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 536870911);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65535);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 15);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 15);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -31);
 assume_abort_if_not(var_1_39 <= 32);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -31);
 assume_abort_if_not(var_1_40 <= 31);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -63);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -63);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 127);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741823);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 3221225470);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_52 >= 16383);
 assume_abort_if_not(var_1_52 <= 32766);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 1);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 31);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= 63);
 assume_abort_if_not(var_1_60 <= 126);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 126);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 0);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 0);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_45 = var_1_45;
 last_1_var_1_51 = var_1_51;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_71 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (var_1_71 / ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (var_1_53 ? (var_1_1 == ((unsigned long int) (var_1_9 - ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))))) : (var_1_1 == ((unsigned long int) ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11)))))) : (var_1_1 == ((unsigned long int) ((((var_1_11) > (var_1_9)) ? (var_1_11) : (var_1_9)))))) && ((var_1_27 <= var_1_10) ? (var_1_12 == ((signed long int) ((var_1_13 - (var_1_14 - var_1_15)) - var_1_16))) : (var_1_53 ? ((! (var_1_66 || (var_1_27 <= var_1_13))) ? (((var_1_9 + var_1_27) > (var_1_16 ^ var_1_10)) ? ((var_1_66 || ((var_1_11 * var_1_10) > var_1_16)) ? (var_1_12 == ((signed long int) (((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))) - (var_1_15 + var_1_18)))) : 1) : ((((var_1_19 - var_1_20) | (var_1_10 * var_1_11)) >= (var_1_15 >> (var_1_21 + var_1_22))) ? (var_1_12 == ((signed long int) 16)) : 1)) : (var_1_12 == ((signed long int) var_1_14))) : (var_1_12 == ((signed long int) var_1_16))))) && ((var_1_11 == var_1_10) ? (var_1_23 == ((unsigned long int) (var_1_15 + ((((500u) < (var_1_21)) ? (500u) : (var_1_21)))))) : 1)) && ((var_1_18 <= (var_1_10 % ((((var_1_14) < (var_1_22)) ? (var_1_14) : (var_1_22))))) ? ((var_1_5 <= var_1_2) ? (var_1_24 == ((signed short int) (var_1_21 + (((((var_1_22) < (var_1_25)) ? (var_1_22) : (var_1_25))) - var_1_26)))) : (var_1_24 == ((signed short int) var_1_26))) : (var_1_32 ? (var_1_24 == ((signed short int) var_1_25)) : 1))) && ((! var_1_66) ? (var_1_27 == ((unsigned long int) ((((var_1_15) > (var_1_11)) ? (var_1_15) : (var_1_11))))) : 1)) && ((var_1_1 > (-16 & var_1_22)) ? ((((var_1_11 * 8u) >= var_1_20) || var_1_32) ? (var_1_28 == ((float) var_1_29)) : ((var_1_10 != var_1_45) ? (var_1_28 == ((float) (var_1_30 + var_1_31))) : ((-100 >= var_1_25) ? (var_1_28 == ((float) var_1_31)) : 1))) : 1)) && (var_1_32 == ((unsigned char) ((var_1_35 <= ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) && (! var_1_33))))) && (var_1_34 == ((float) (var_1_30 + var_1_31)))) && ((var_1_18 < var_1_1) ? (var_1_35 == ((unsigned long int) (var_1_20 + 8u))) : (var_1_35 == ((unsigned long int) ((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (2u)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (2u))))))) && ((var_1_26 <= (~ var_1_25)) ? ((var_1_6 < var_1_30) ? (((var_1_26 * var_1_23) != (var_1_1 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_37 == ((signed char) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (var_1_37 == ((signed char) (((((((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) - var_1_38)) < (((var_1_39 + var_1_40) + ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))))) ? ((((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) - var_1_38)) : (((var_1_39 + var_1_40) + ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))))))))) : (var_1_37 == ((signed char) var_1_42))) : 1)) && (((var_1_29 * var_1_6) > var_1_70) ? ((var_1_18 == ((var_1_22 - var_1_25) / var_1_19)) ? (var_1_43 == ((unsigned char) (((((var_1_44 - var_1_21)) < (var_1_38)) ? ((var_1_44 - var_1_21)) : (var_1_38))))) : (var_1_43 == ((unsigned char) var_1_21))) : 1)) && (((var_1_11 != (var_1_35 * var_1_18)) || var_1_53) ? ((last_1_var_1_45 > var_1_22) ? (var_1_45 == ((unsigned long int) (last_1_var_1_45 + (var_1_46 - var_1_19)))) : (((var_1_47 - var_1_48) <= ((((var_1_71) < (var_1_4)) ? (var_1_71) : (var_1_4)))) ? (var_1_45 == ((unsigned long int) ((var_1_49 - var_1_19) - (var_1_46 - var_1_38)))) : (var_1_45 == ((unsigned long int) (last_1_var_1_45 + var_1_14))))) : (((var_1_25 + 50) < var_1_15) ? (var_1_45 == ((unsigned long int) (var_1_9 - ((((var_1_26) < ((var_1_46 - var_1_15))) ? (var_1_26) : ((var_1_46 - var_1_15))))))) : 1))) && (((var_1_49 - var_1_14) >= var_1_18) ? (var_1_50 == ((signed short int) var_1_41)) : 1)) && (((var_1_44 * var_1_23) == var_1_9) ? (var_1_51 == ((signed short int) (last_1_var_1_51 - ((((var_1_22) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_22) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))))) : ((var_1_48 <= ((var_1_3 + var_1_28) * var_1_30)) ? (var_1_51 == ((signed short int) (var_1_41 + var_1_44))) : (var_1_51 == ((signed short int) ((((((((var_1_41) < (var_1_23)) ? (var_1_41) : (var_1_23)))) < ((((((var_1_26) < (var_1_44)) ? (var_1_26) : (var_1_44))) - (var_1_52 - 64)))) ? (((((var_1_41) < (var_1_23)) ? (var_1_41) : (var_1_23)))) : ((((((var_1_26) < (var_1_44)) ? (var_1_26) : (var_1_44))) - (var_1_52 - 64)))))))))) && ((var_1_38 != var_1_16) ? (var_1_53 == ((unsigned char) (var_1_33 && (! (! var_1_54))))) : 1)) && ((var_1_1 <= (((((var_1_1 * var_1_35)) > (((((var_1_26) > (64)) ? (var_1_26) : (64))))) ? ((var_1_1 * var_1_35)) : (((((var_1_26) > (64)) ? (var_1_26) : (64))))))) ? ((var_1_66 && (var_1_62 || var_1_54)) ? (var_1_55 == ((signed short int) (var_1_25 - var_1_26))) : (var_1_55 == ((signed short int) ((256 - var_1_44) + var_1_1)))) : ((var_1_62 || (var_1_32 || var_1_54)) ? (var_1_54 ? (((- var_1_30) <= (var_1_71 / ((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))))) ? (var_1_55 == ((signed short int) ((((((((((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) < (var_1_39)) ? (((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) : (var_1_39)))) > (var_1_1)) ? (((((((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) < (var_1_39)) ? (((((var_1_41) > (var_1_26)) ? (var_1_41) : (var_1_26)))) : (var_1_39)))) : (var_1_1))))) : (var_1_55 == ((signed short int) (var_1_26 - var_1_38)))) : 1) : (var_1_55 == ((signed short int) (var_1_44 + ((((var_1_41) < (var_1_21)) ? (var_1_41) : (var_1_21))))))))) && (((var_1_1 + var_1_12) >= var_1_1) ? (var_1_33 ? (var_1_57 == ((signed char) ((var_1_22 + (var_1_21 + var_1_59)) - (var_1_60 - ((((1) > (32)) ? (1) : (32))))))) : 1) : (var_1_57 == ((signed char) ((((4) < ((var_1_59 - ((((var_1_38) < (var_1_61)) ? (var_1_38) : (var_1_61)))))) ? (4) : ((var_1_59 - ((((var_1_38) < (var_1_61)) ? (var_1_38) : (var_1_61))))))))))) && (var_1_62 == ((unsigned char) ((var_1_63 || var_1_64) || var_1_65)))) && ((var_1_53 && (var_1_31 >= (var_1_4 * var_1_28))) ? (var_1_66 == ((unsigned char) (var_1_33 && var_1_54))) : 1)) && (var_1_68 == ((signed long int) var_1_37))) && (var_1_32 ? (var_1_69 == ((float) var_1_31)) : (var_1_69 == ((float) var_1_29)))) && ((var_1_62 || var_1_63) ? (var_1_70 == ((float) var_1_31)) : 1)) && ((var_1_23 <= (- 5u)) ? ((var_1_3 < var_1_34) ? (var_1_71 == ((double) var_1_29)) : 1) : 1)
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
