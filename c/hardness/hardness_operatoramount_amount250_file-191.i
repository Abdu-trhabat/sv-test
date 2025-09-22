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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 128;
unsigned long int var_1_8 = 1000;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 25;
unsigned short int var_1_12 = 4;
unsigned short int var_1_13 = 59023;
unsigned short int var_1_14 = 23697;
unsigned short int var_1_15 = 32;
signed short int var_1_16 = 0;
signed short int var_1_17 = -256;
signed short int var_1_18 = 1;
signed short int var_1_19 = 4;
signed char var_1_20 = -10;
unsigned short int var_1_21 = 25;
signed char var_1_22 = 0;
signed char var_1_23 = 4;
signed char var_1_24 = 8;
signed char var_1_25 = 1;
signed char var_1_26 = -1;
unsigned char var_1_27 = 0;
signed char var_1_28 = 100;
signed short int var_1_29 = -8;
signed char var_1_30 = 10;
float var_1_31 = 64.75;
float var_1_32 = 9999999999999.125;
float var_1_33 = 255.5;
signed char var_1_34 = 50;
float var_1_35 = 63.5;
unsigned long int var_1_36 = 0;
unsigned long int var_1_37 = 2554664006;
signed long int var_1_38 = -4;
unsigned char var_1_39 = 200;
unsigned long int var_1_40 = 10;
unsigned short int var_1_41 = 4;
unsigned short int var_1_42 = 19313;
unsigned short int var_1_43 = 23250;
unsigned long int var_1_44 = 25;
unsigned long int var_1_46 = 128;
unsigned char var_1_47 = 2;
unsigned char var_1_48 = 50;
unsigned char var_1_49 = 200;
signed short int var_1_50 = -16;
signed short int var_1_51 = 19823;
signed char var_1_52 = -32;
double var_1_53 = 1.75;
double var_1_54 = 9.4;
double var_1_55 = 200.5;
double var_1_56 = 1.935;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
double var_1_60 = 199.75;
float var_1_61 = 16.6;
double var_1_62 = 7.75;
double var_1_63 = 25.625;
double var_1_64 = 7.8;
double var_1_65 = 16.4;
double var_1_66 = 2.25;
signed short int var_1_67 = 0;
signed short int var_1_68 = 16;
signed short int var_1_69 = 0;
unsigned long int var_1_70 = 50;
unsigned long int var_1_71 = 1176467208;
unsigned char var_1_72 = 64;
unsigned short int var_1_73 = 16;
signed short int last_1_var_1_16 = 0;
signed long int last_1_var_1_38 = -4;
unsigned long int last_1_var_1_40 = 10;
unsigned char last_1_var_1_57 = 1;
unsigned long int last_1_var_1_70 = 50;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = (((last_1_var_1_70) < (last_1_var_1_40)) ? (last_1_var_1_70) : (last_1_var_1_40));
 unsigned long int stepLocal_1 = var_1_7 + last_1_var_1_70;
 if (var_1_6 >= stepLocal_2) {
  if (((((((((last_1_var_1_40) < (last_1_var_1_16)) ? (last_1_var_1_40) : (last_1_var_1_16)))) < (last_1_var_1_70)) ? (((((last_1_var_1_40) < (last_1_var_1_16)) ? (last_1_var_1_40) : (last_1_var_1_16)))) : (last_1_var_1_70))) >= stepLocal_1) {
   var_1_10 = (((((var_1_6 + var_1_7)) > (var_1_12)) ? ((var_1_6 + var_1_7)) : (var_1_12)));
  } else {
   var_1_10 = (var_1_13 - (var_1_14 - var_1_15));
  }
 } else {
  var_1_10 = var_1_6;
 }
 if (last_1_var_1_57) {
  var_1_8 = (((((1000u) > (var_1_7)) ? (1000u) : (var_1_7))) + var_1_6);
 }
 unsigned long int stepLocal_15 = var_1_8;
 if (((((var_1_43) < (16)) ? (var_1_43) : (16))) >= stepLocal_15) {
  var_1_57 = var_1_58;
 } else {
  var_1_57 = (! var_1_59);
 }
 if (var_1_57) {
  var_1_26 = (var_1_25 + (var_1_22 - var_1_23));
 } else {
  if (var_1_57) {
   if (var_1_14 < var_1_22) {
    var_1_26 = (((((var_1_25) > (0)) ? (var_1_25) : (0))) - ((var_1_28 - 16) - 1));
   } else {
    var_1_26 = ((((10) > (var_1_23)) ? (10) : (var_1_23)));
   }
  } else {
   var_1_26 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
  }
 }
 var_1_30 = (var_1_25 - var_1_22);
 var_1_35 = ((((50.75f) > (var_1_33)) ? (50.75f) : (var_1_33)));
 var_1_36 = (var_1_37 - var_1_23);
 var_1_40 = (var_1_37 - (var_1_7 + ((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25)))));
 unsigned char stepLocal_11 = var_1_9;
 if (stepLocal_11 && var_1_27) {
  var_1_41 = ((((((var_1_14) > (var_1_42)) ? (var_1_14) : (var_1_42))) + var_1_43) - var_1_24);
 } else {
  var_1_41 = var_1_14;
 }
 if (var_1_35 == var_1_33) {
  var_1_44 = var_1_22;
 }
 var_1_46 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 var_1_47 = (var_1_25 + var_1_28);
 if (var_1_57) {
  if (var_1_57) {
   var_1_48 = (((((var_1_49 - var_1_24)) > ((var_1_28 + ((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))))) ? ((var_1_49 - var_1_24)) : ((var_1_28 + ((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))))));
  }
 } else {
  var_1_48 = (var_1_49 - var_1_22);
 }
 unsigned char stepLocal_14 = var_1_9;
 if (stepLocal_14 && var_1_27) {
  var_1_53 = ((var_1_54 - var_1_55) + var_1_56);
 }
 if (var_1_57) {
  var_1_72 = var_1_28;
 }
 unsigned char stepLocal_10 = var_1_57;
 signed long int stepLocal_9 = var_1_39 - var_1_23;
 unsigned short int stepLocal_8 = var_1_6;
 if (last_1_var_1_38 < stepLocal_8) {
  var_1_38 = ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8)));
 } else {
  if (stepLocal_10 && (var_1_19 > var_1_41)) {
   if (stepLocal_9 == var_1_8) {
    var_1_38 = 25;
   } else {
    var_1_38 = var_1_14;
   }
  } else {
   var_1_38 = var_1_41;
  }
 }
 if (((((var_1_12) < (var_1_41)) ? (var_1_12) : (var_1_41))) > -100000) {
  var_1_16 = (((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))) + ((var_1_18 - var_1_19) + 2));
 }
 unsigned short int stepLocal_4 = var_1_15;
 unsigned short int stepLocal_3 = var_1_41;
 if (stepLocal_3 >= (var_1_44 + var_1_41)) {
  if (var_1_57) {
   if (stepLocal_4 >= (var_1_14 / (var_1_13 - var_1_21))) {
    var_1_20 = ((var_1_22 - var_1_23) + (var_1_24 - ((((0) > (var_1_25)) ? (0) : (var_1_25)))));
   } else {
    var_1_20 = var_1_24;
   }
  } else {
   var_1_20 = ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)));
  }
 } else {
  var_1_20 = var_1_24;
 }
 if (var_1_36 < var_1_8) {
  if (var_1_57) {
   var_1_67 = var_1_68;
  } else {
   var_1_67 = (var_1_69 - (var_1_49 + var_1_72));
  }
 }
 if (16 >= var_1_44) {
  if (var_1_58 || var_1_59) {
   var_1_73 = (((((var_1_13 - var_1_67)) < (((var_1_42 - var_1_25) + var_1_51))) ? ((var_1_13 - var_1_67)) : (((var_1_42 - var_1_25) + var_1_51))));
  } else {
   var_1_73 = var_1_22;
  }
 } else {
  var_1_73 = var_1_28;
 }
 signed long int stepLocal_5 = var_1_38;
 if (stepLocal_5 > ((var_1_24 ^ var_1_25) / ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) {
  var_1_29 = (var_1_22 + (var_1_15 - 25));
 } else {
  var_1_29 = (var_1_18 + var_1_23);
 }
 unsigned char stepLocal_22 = (var_1_25 - var_1_18) != (var_1_29 / var_1_39);
 unsigned short int stepLocal_21 = var_1_7;
 if (var_1_61 <= (var_1_54 + var_1_62)) {
  if ((var_1_40 >= (- var_1_13)) || stepLocal_22) {
   var_1_70 = ((var_1_71 + 1412059298u) - var_1_28);
  } else {
   var_1_70 = ((((var_1_12) < (var_1_73)) ? (var_1_12) : (var_1_73)));
  }
 } else {
  if (var_1_49 <= stepLocal_21) {
   var_1_70 = var_1_49;
  } else {
   var_1_70 = var_1_23;
  }
 }
 unsigned long int stepLocal_0 = var_1_46;
 if (((((((((var_1_40) > (var_1_16)) ? (var_1_40) : (var_1_16)))) > (var_1_40)) ? (((((var_1_40) > (var_1_16)) ? (var_1_40) : (var_1_16)))) : (var_1_40))) >= stepLocal_0) {
  var_1_1 = (var_1_6 + (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))));
 }
 unsigned char stepLocal_13 = var_1_57;
 if ((var_1_8 <= var_1_73) || stepLocal_13) {
  var_1_52 = (var_1_25 + var_1_23);
 } else {
  var_1_52 = (var_1_23 + ((((-32) < (var_1_25)) ? (-32) : (var_1_25))));
 }
 signed long int stepLocal_20 = var_1_13 - var_1_15;
 signed long int stepLocal_19 = 1000000000;
 unsigned long int stepLocal_18 = ((((var_1_46 * var_1_23)) < (var_1_46)) ? ((var_1_46 * var_1_23)) : (var_1_46));
 signed short int stepLocal_17 = var_1_19;
 unsigned long int stepLocal_16 = var_1_70;
 if (var_1_33 >= (64.25f + var_1_54)) {
  if (stepLocal_16 < ((var_1_12 - var_1_43) + var_1_22)) {
   if ((var_1_54 / var_1_61) >= ((((var_1_56) > ((var_1_33 / var_1_62))) ? (var_1_56) : ((var_1_33 / var_1_62))))) {
    var_1_60 = (((((var_1_55 - var_1_54)) > (8.3)) ? ((var_1_55 - var_1_54)) : (8.3)));
   } else {
    var_1_60 = var_1_33;
   }
  } else {
   var_1_60 = var_1_56;
  }
 } else {
  if (var_1_24 < stepLocal_17) {
   var_1_60 = var_1_55;
  } else {
   if ((var_1_24 ^ (var_1_70 + 128)) < stepLocal_18) {
    var_1_60 = ((((var_1_32) > (var_1_55)) ? (var_1_32) : (var_1_55)));
   } else {
    if (stepLocal_19 > (~ (-500 ^ var_1_25))) {
     var_1_60 = (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))) + (var_1_54 - var_1_63));
    } else {
     if (stepLocal_20 <= var_1_44) {
      var_1_60 = ((var_1_55 - var_1_63) + ((var_1_64 + var_1_65) - var_1_54));
     } else {
      var_1_60 = (var_1_65 + (var_1_64 + var_1_66));
     }
    }
   }
  }
 }
 unsigned char stepLocal_12 = var_1_57;
 if (((- var_1_33) <= var_1_60) && stepLocal_12) {
  var_1_50 = var_1_52;
 } else {
  var_1_50 = ((var_1_51 - var_1_49) - var_1_39);
 }
 unsigned short int stepLocal_6 = var_1_73;
 if (stepLocal_6 <= var_1_50) {
  var_1_31 = (var_1_32 - var_1_33);
 }
 unsigned short int stepLocal_7 = var_1_41;
 if (((((var_1_50) < (var_1_41)) ? (var_1_50) : (var_1_41))) > stepLocal_7) {
  if (var_1_57) {
   var_1_34 = ((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28)));
  } else {
   var_1_34 = (((((var_1_22 + var_1_25)) > ((-10 + ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))) ? ((var_1_22 + var_1_25)) : ((-10 + ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))));
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -16383);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 8192);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 8191);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 32766);
 assume_abort_if_not(var_1_21 != 32767);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 94);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 255);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 16383);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16384);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 127);
 assume_abort_if_not(var_1_49 <= 254);
 var_1_51 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_51 >= 16382);
 assume_abort_if_not(var_1_51 <= 32766);
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -461168.6018427383000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 0);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 1);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
 assume_abort_if_not(var_1_61 != 0.0F);
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
 assume_abort_if_not(var_1_62 != 0.0F);
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691400e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= -230584.3009213691400e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691400e+12F && var_1_66 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_68 >= -32767);
 assume_abort_if_not(var_1_68 <= 32766);
 var_1_69 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_69 >= -1);
 assume_abort_if_not(var_1_69 <= 32766);
 var_1_71 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_71 >= 1073741823);
 assume_abort_if_not(var_1_71 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_70 = var_1_70;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((var_1_40) > (var_1_16)) ? (var_1_40) : (var_1_16)))) > (var_1_40)) ? (((((var_1_40) > (var_1_16)) ? (var_1_40) : (var_1_16)))) : (var_1_40))) >= var_1_46) ? (var_1_1 == ((unsigned short int) (var_1_6 + (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))) : 1) && (last_1_var_1_57 ? (var_1_8 == ((unsigned long int) (((((1000u) > (var_1_7)) ? (1000u) : (var_1_7))) + var_1_6))) : 1)) && ((var_1_6 >= ((((last_1_var_1_70) < (last_1_var_1_40)) ? (last_1_var_1_70) : (last_1_var_1_40)))) ? ((((((((((last_1_var_1_40) < (last_1_var_1_16)) ? (last_1_var_1_40) : (last_1_var_1_16)))) < (last_1_var_1_70)) ? (((((last_1_var_1_40) < (last_1_var_1_16)) ? (last_1_var_1_40) : (last_1_var_1_16)))) : (last_1_var_1_70))) >= (var_1_7 + last_1_var_1_70)) ? (var_1_10 == ((unsigned short int) (((((var_1_6 + var_1_7)) > (var_1_12)) ? ((var_1_6 + var_1_7)) : (var_1_12))))) : (var_1_10 == ((unsigned short int) (var_1_13 - (var_1_14 - var_1_15))))) : (var_1_10 == ((unsigned short int) var_1_6)))) && ((((((var_1_12) < (var_1_41)) ? (var_1_12) : (var_1_41))) > -100000) ? (var_1_16 == ((signed short int) (((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))) + ((var_1_18 - var_1_19) + 2)))) : 1)) && ((var_1_41 >= (var_1_44 + var_1_41)) ? (var_1_57 ? ((var_1_15 >= (var_1_14 / (var_1_13 - var_1_21))) ? (var_1_20 == ((signed char) ((var_1_22 - var_1_23) + (var_1_24 - ((((0) > (var_1_25)) ? (0) : (var_1_25))))))) : (var_1_20 == ((signed char) var_1_24))) : (var_1_20 == ((signed char) ((((var_1_25) < (var_1_24)) ? (var_1_25) : (var_1_24)))))) : (var_1_20 == ((signed char) var_1_24)))) && (var_1_57 ? (var_1_26 == ((signed char) (var_1_25 + (var_1_22 - var_1_23)))) : (var_1_57 ? ((var_1_14 < var_1_22) ? (var_1_26 == ((signed char) (((((var_1_25) > (0)) ? (var_1_25) : (0))) - ((var_1_28 - 16) - 1)))) : (var_1_26 == ((signed char) ((((10) > (var_1_23)) ? (10) : (var_1_23)))))) : (var_1_26 == ((signed char) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))))) && ((var_1_38 > ((var_1_24 ^ var_1_25) / ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_29 == ((signed short int) (var_1_22 + (var_1_15 - 25)))) : (var_1_29 == ((signed short int) (var_1_18 + var_1_23))))) && (var_1_30 == ((signed char) (var_1_25 - var_1_22)))) && ((var_1_73 <= var_1_50) ? (var_1_31 == ((float) (var_1_32 - var_1_33))) : 1)) && ((((((var_1_50) < (var_1_41)) ? (var_1_50) : (var_1_41))) > var_1_41) ? (var_1_57 ? (var_1_34 == ((signed char) ((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28))))) : (var_1_34 == ((signed char) (((((var_1_22 + var_1_25)) > ((-10 + ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))) ? ((var_1_22 + var_1_25)) : ((-10 + ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))))))))) : 1)) && (var_1_35 == ((float) ((((50.75f) > (var_1_33)) ? (50.75f) : (var_1_33)))))) && (var_1_36 == ((unsigned long int) (var_1_37 - var_1_23)))) && ((last_1_var_1_38 < var_1_6) ? (var_1_38 == ((signed long int) ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8))))) : ((var_1_57 && (var_1_19 > var_1_41)) ? (((var_1_39 - var_1_23) == var_1_8) ? (var_1_38 == ((signed long int) 25)) : (var_1_38 == ((signed long int) var_1_14))) : (var_1_38 == ((signed long int) var_1_41))))) && (var_1_40 == ((unsigned long int) (var_1_37 - (var_1_7 + ((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25)))))))) && ((var_1_9 && var_1_27) ? (var_1_41 == ((unsigned short int) ((((((var_1_14) > (var_1_42)) ? (var_1_14) : (var_1_42))) + var_1_43) - var_1_24))) : (var_1_41 == ((unsigned short int) var_1_14)))) && ((var_1_35 == var_1_33) ? (var_1_44 == ((unsigned long int) var_1_22)) : 1)) && (var_1_46 == ((unsigned long int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) && (var_1_47 == ((unsigned char) (var_1_25 + var_1_28)))) && (var_1_57 ? (var_1_57 ? (var_1_48 == ((unsigned char) (((((var_1_49 - var_1_24)) > ((var_1_28 + ((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))))) ? ((var_1_49 - var_1_24)) : ((var_1_28 + ((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))))))))) : 1) : (var_1_48 == ((unsigned char) (var_1_49 - var_1_22))))) && ((((- var_1_33) <= var_1_60) && var_1_57) ? (var_1_50 == ((signed short int) var_1_52)) : (var_1_50 == ((signed short int) ((var_1_51 - var_1_49) - var_1_39))))) && (((var_1_8 <= var_1_73) || var_1_57) ? (var_1_52 == ((signed char) (var_1_25 + var_1_23))) : (var_1_52 == ((signed char) (var_1_23 + ((((-32) < (var_1_25)) ? (-32) : (var_1_25)))))))) && ((var_1_9 && var_1_27) ? (var_1_53 == ((double) ((var_1_54 - var_1_55) + var_1_56))) : 1)) && ((((((var_1_43) < (16)) ? (var_1_43) : (16))) >= var_1_8) ? (var_1_57 == ((unsigned char) var_1_58)) : (var_1_57 == ((unsigned char) (! var_1_59))))) && ((var_1_33 >= (64.25f + var_1_54)) ? ((var_1_70 < ((var_1_12 - var_1_43) + var_1_22)) ? (((var_1_54 / var_1_61) >= ((((var_1_56) > ((var_1_33 / var_1_62))) ? (var_1_56) : ((var_1_33 / var_1_62))))) ? (var_1_60 == ((double) (((((var_1_55 - var_1_54)) > (8.3)) ? ((var_1_55 - var_1_54)) : (8.3))))) : (var_1_60 == ((double) var_1_33))) : (var_1_60 == ((double) var_1_56))) : ((var_1_24 < var_1_19) ? (var_1_60 == ((double) var_1_55)) : (((var_1_24 ^ (var_1_70 + 128)) < (((((var_1_46 * var_1_23)) < (var_1_46)) ? ((var_1_46 * var_1_23)) : (var_1_46)))) ? (var_1_60 == ((double) ((((var_1_32) > (var_1_55)) ? (var_1_32) : (var_1_55))))) : ((1000000000 > (~ (-500 ^ var_1_25))) ? (var_1_60 == ((double) (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))) + (var_1_54 - var_1_63)))) : (((var_1_13 - var_1_15) <= var_1_44) ? (var_1_60 == ((double) ((var_1_55 - var_1_63) + ((var_1_64 + var_1_65) - var_1_54)))) : (var_1_60 == ((double) (var_1_65 + (var_1_64 + var_1_66)))))))))) && ((var_1_36 < var_1_8) ? (var_1_57 ? (var_1_67 == ((signed short int) var_1_68)) : (var_1_67 == ((signed short int) (var_1_69 - (var_1_49 + var_1_72))))) : 1)) && ((var_1_61 <= (var_1_54 + var_1_62)) ? (((var_1_40 >= (- var_1_13)) || ((var_1_25 - var_1_18) != (var_1_29 / var_1_39))) ? (var_1_70 == ((unsigned long int) ((var_1_71 + 1412059298u) - var_1_28))) : (var_1_70 == ((unsigned long int) ((((var_1_12) < (var_1_73)) ? (var_1_12) : (var_1_73)))))) : ((var_1_49 <= var_1_7) ? (var_1_70 == ((unsigned long int) var_1_49)) : (var_1_70 == ((unsigned long int) var_1_23))))) && (var_1_57 ? (var_1_72 == ((unsigned char) var_1_28)) : 1)) && ((16 >= var_1_44) ? ((var_1_58 || var_1_59) ? (var_1_73 == ((unsigned short int) (((((var_1_13 - var_1_67)) < (((var_1_42 - var_1_25) + var_1_51))) ? ((var_1_13 - var_1_67)) : (((var_1_42 - var_1_25) + var_1_51)))))) : (var_1_73 == ((unsigned short int) var_1_22))) : (var_1_73 == ((unsigned short int) var_1_28)))
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
