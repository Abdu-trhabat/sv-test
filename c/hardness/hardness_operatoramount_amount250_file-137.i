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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -4;
signed short int var_1_4 = -16;
signed short int var_1_5 = -8;
unsigned long int var_1_7 = 10;
signed short int var_1_8 = 5;
signed short int var_1_9 = -10;
signed short int var_1_10 = 32;
signed short int var_1_11 = 64;
signed short int var_1_12 = 16731;
signed short int var_1_13 = 64;
signed short int var_1_14 = 25533;
signed short int var_1_15 = 50;
unsigned char var_1_16 = 0;
double var_1_18 = 3.25;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
float var_1_21 = 8.5;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 1;
unsigned long int var_1_24 = 4049770958;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned short int var_1_27 = 100;
signed long int var_1_28 = 8;
signed long int var_1_29 = -10;
double var_1_30 = 100.375;
double var_1_31 = 127.15;
double var_1_32 = 255.125;
double var_1_33 = 1.5;
double var_1_34 = 1.75;
float var_1_35 = 199.1;
float var_1_36 = 127.2;
float var_1_37 = 128.2;
float var_1_38 = 8.2;
unsigned char var_1_39 = 0;
float var_1_40 = -0.25;
unsigned short int var_1_41 = 43550;
signed short int var_1_42 = 8;
signed short int var_1_45 = 128;
float var_1_46 = 15.125;
unsigned char var_1_48 = 1;
float var_1_49 = 7.9;
float var_1_50 = 0.0;
float var_1_51 = 500.75;
float var_1_52 = 2.875;
unsigned long int var_1_53 = 5;
signed short int var_1_54 = -64;
unsigned short int var_1_55 = 16;
unsigned long int var_1_56 = 100;
unsigned long int var_1_57 = 2565748036;
double var_1_58 = -0.5;
double var_1_59 = 0.0;
signed char var_1_60 = -8;
unsigned char var_1_61 = 10;
signed char var_1_62 = 5;
signed char var_1_63 = 10;
float var_1_64 = 200.75;
float var_1_65 = 8.5;
float var_1_66 = -0.75;
float var_1_67 = 9.6;
float var_1_68 = 99.3;
double var_1_69 = 32.25;
signed char var_1_70 = 10;
signed char var_1_71 = 64;
double var_1_72 = 4.25;
unsigned char var_1_73 = 0;
signed short int var_1_74 = 10;
unsigned long int last_1_var_1_53 = 5;
double last_1_var_1_72 = 4.25;
unsigned char last_1_var_1_73 = 0;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_4 = var_1_14;
 unsigned long int stepLocal_3 = (((last_1_var_1_53) < 0 ) ? -(last_1_var_1_53) : (last_1_var_1_53));
 if (stepLocal_3 <= 8) {
  if ((last_1_var_1_72 / var_1_18) == (- (4.5 + 127.875))) {
   if (-8 <= stepLocal_4) {
    var_1_16 = (last_1_var_1_73 && var_1_19);
   }
  }
 } else {
  if (var_1_19) {
   var_1_16 = ((! last_1_var_1_73) && var_1_20);
  } else {
   if (! ((last_1_var_1_53 >= 4) && last_1_var_1_73)) {
    var_1_16 = (((8.5f - var_1_21) <= ((((199.16f) > (var_1_18)) ? (199.16f) : (var_1_18)))) || var_1_22);
   } else {
    if (var_1_20) {
     var_1_16 = var_1_22;
    }
   }
  }
 }
 if (var_1_16) {
  var_1_53 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 } else {
  var_1_53 = var_1_41;
 }
 signed short int stepLocal_5 = var_1_14;
 if ((var_1_24 - var_1_12) <= stepLocal_5) {
  var_1_23 = (var_1_22 && (var_1_25 && var_1_26));
 }
 unsigned char stepLocal_7 = (- var_1_11) > var_1_8;
 signed short int stepLocal_6 = var_1_9;
 if (stepLocal_6 < (var_1_15 >> var_1_28)) {
  if (stepLocal_7 || var_1_20) {
   var_1_27 = ((var_1_14 - var_1_15) + var_1_28);
  }
 } else {
  var_1_27 = var_1_28;
 }
 if (var_1_23) {
  if (var_1_34 < 49.1) {
   var_1_35 = ((var_1_36 + var_1_37) - var_1_38);
  }
 }
 if (var_1_33 > (var_1_36 - var_1_32)) {
  var_1_39 = ((var_1_34 >= (var_1_38 / var_1_18)) && var_1_20);
 }
 unsigned long int stepLocal_9 = var_1_53;
 unsigned char stepLocal_8 = var_1_27 <= (var_1_41 - var_1_14);
 if (var_1_39 || stepLocal_8) {
  if ((var_1_24 - var_1_11) >= stepLocal_9) {
   var_1_40 = var_1_38;
  }
 } else {
  var_1_40 = (var_1_37 + var_1_36);
 }
 unsigned long int stepLocal_12 = var_1_53;
 if (var_1_28 < stepLocal_12) {
  var_1_58 = ((((var_1_50) < (var_1_37)) ? (var_1_50) : (var_1_37)));
 } else {
  var_1_58 = (((var_1_59 - var_1_51) - var_1_36) + ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) > (((((var_1_52) > (var_1_37)) ? (var_1_52) : (var_1_37))))) ? (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : (((((var_1_52) > (var_1_37)) ? (var_1_52) : (var_1_37)))))));
 }
 var_1_69 = (var_1_59 - ((((var_1_38) > (var_1_51)) ? (var_1_38) : (var_1_51))));
 var_1_72 = ((((var_1_52) < (var_1_65)) ? (var_1_52) : (var_1_65)));
 if (var_1_5 != var_1_10) {
  var_1_73 = var_1_26;
 }
 unsigned char stepLocal_17 = var_1_26;
 if (var_1_51 >= var_1_58) {
  if (stepLocal_17 || var_1_22) {
   var_1_74 = var_1_8;
  }
 }
 if ((((((var_1_21) < (var_1_30)) ? (var_1_21) : (var_1_30))) - var_1_31) > ((var_1_69 * var_1_18) + (var_1_32 - var_1_33))) {
  if (var_1_16) {
   if ((var_1_24 - var_1_14) != var_1_13) {
    if (var_1_32 <= ((var_1_31 * var_1_30) / var_1_34)) {
     var_1_29 = ((var_1_53 - var_1_28) + (((((4) > (var_1_13)) ? (4) : (var_1_13))) + var_1_4));
    }
   } else {
    var_1_29 = var_1_8;
   }
  } else {
   var_1_29 = var_1_12;
  }
 } else {
  var_1_29 = var_1_8;
 }
 if ((- var_1_21) <= ((- var_1_38) / var_1_18)) {
  var_1_55 = (var_1_29 + var_1_11);
 } else {
  var_1_55 = (var_1_14 + var_1_13);
 }
 if (var_1_53 != var_1_9) {
  var_1_56 = (var_1_57 - ((((var_1_29) > ((var_1_14 + var_1_13))) ? (var_1_29) : ((var_1_14 + var_1_13)))));
 }
 signed long int stepLocal_13 = var_1_28 >> var_1_61;
 if (stepLocal_13 > var_1_29) {
  var_1_60 = (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) - (var_1_28 + ((((var_1_62) > (var_1_63)) ? (var_1_62) : (var_1_63)))));
 } else {
  var_1_60 = (((((-10 + var_1_62)) < (-4)) ? ((-10 + var_1_62)) : (-4)));
 }
 signed long int stepLocal_16 = var_1_62 / (var_1_28 + var_1_48);
 signed long int stepLocal_15 = (((-256) < (var_1_62)) ? (-256) : (var_1_62));
 unsigned short int stepLocal_14 = var_1_27;
 if (var_1_53 >= stepLocal_15) {
  if (((var_1_14 * var_1_29) / var_1_28) <= stepLocal_14) {
   if (var_1_7 > stepLocal_16) {
    var_1_70 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
   } else {
    var_1_70 = var_1_61;
   }
  } else {
   var_1_70 = (var_1_62 - (((((var_1_63 + var_1_61)) > ((var_1_71 - var_1_28))) ? ((var_1_63 + var_1_61)) : ((var_1_71 - var_1_28)))));
  }
 } else {
  var_1_70 = (((((var_1_28) > (var_1_62)) ? (var_1_28) : (var_1_62))) - (((((var_1_61 + var_1_63)) > (((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71))))) ? ((var_1_61 + var_1_63)) : (((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)))))));
 }
 signed long int stepLocal_2 = var_1_29;
 unsigned long int stepLocal_1 = var_1_53;
 unsigned long int stepLocal_0 = var_1_53;
 if (var_1_29 == stepLocal_1) {
  if (stepLocal_0 <= var_1_29) {
   var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  if (var_1_73) {
   if (((var_1_53 / 1u) % var_1_7) != stepLocal_2) {
    var_1_1 = ((((var_1_5) > ((var_1_8 + ((((-2) < (var_1_9)) ? (-2) : (var_1_9)))))) ? (var_1_5) : ((var_1_8 + ((((-2) < (var_1_9)) ? (-2) : (var_1_9)))))));
   } else {
    var_1_1 = (var_1_10 - var_1_11);
   }
  } else {
   var_1_1 = ((((((((var_1_5) < (var_1_11)) ? (var_1_5) : (var_1_11)))) > (((var_1_12 - var_1_13) - (var_1_14 - var_1_15)))) ? (((((var_1_5) < (var_1_11)) ? (var_1_5) : (var_1_11)))) : (((var_1_12 - var_1_13) - (var_1_14 - var_1_15)))));
  }
 }
 if ((- var_1_33) < var_1_18) {
  if (var_1_1 <= (var_1_53 % (var_1_28 + var_1_48))) {
   var_1_46 = ((var_1_36 - var_1_37) + var_1_49);
  } else {
   if (var_1_20) {
    var_1_46 = ((((7.2f) > ((32.4f - (var_1_36 + var_1_37)))) ? (7.2f) : ((32.4f - (var_1_36 + var_1_37)))));
   } else {
    var_1_46 = (var_1_36 - (var_1_50 - (var_1_51 + var_1_52)));
   }
  }
 } else {
  if (! var_1_22) {
   var_1_46 = (((((((((9.4f) > (1.666f)) ? (9.4f) : (1.666f))) + (var_1_51 + var_1_52))) > ((var_1_49 + var_1_37))) ? ((((((9.4f) > (1.666f)) ? (9.4f) : (1.666f))) + (var_1_51 + var_1_52))) : ((var_1_49 + var_1_37))));
  } else {
   var_1_46 = (var_1_49 + var_1_36);
  }
 }
 signed long int stepLocal_11 = var_1_41 - (var_1_15 + var_1_29);
 if (var_1_55 > stepLocal_11) {
  var_1_54 = var_1_8;
 }
 if (var_1_1 >= var_1_56) {
  var_1_64 = ((var_1_52 + ((((var_1_51) > (var_1_65)) ? (var_1_51) : (var_1_65)))) + (((((var_1_66) > (var_1_67)) ? (var_1_66) : (var_1_67))) + var_1_68));
 } else {
  if (var_1_14 >= (var_1_24 * var_1_53)) {
   var_1_64 = var_1_52;
  } else {
   var_1_64 = var_1_67;
  }
 }
 signed long int stepLocal_10 = var_1_29;
 if ((var_1_38 / var_1_34) < var_1_36) {
  if (((var_1_56 + var_1_15) + var_1_54) <= stepLocal_10) {
   var_1_42 = (var_1_45 - var_1_13);
  } else {
   var_1_42 = var_1_10;
  }
 } else {
  var_1_42 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967295);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 16382);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 14);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65535);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= -1);
 assume_abort_if_not(var_1_45 <= 32766);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 127);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 4611686.018427383000e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 2305843.009213691400e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 1);
 assume_abort_if_not(var_1_61 <= 30);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= -230584.3009213691400e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= -230584.3009213691400e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691400e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= -230584.3009213691400e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691400e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= -230584.3009213691400e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691400e+12F && var_1_68 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= 63);
 assume_abort_if_not(var_1_71 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_53 = var_1_53;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_73 = var_1_73;
}
int property(void) {
 return ((((((((((((((((((((((var_1_29 == var_1_53) ? ((var_1_53 <= var_1_29) ? (var_1_1 == ((signed short int) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((signed short int) var_1_5))) : (var_1_73 ? ((((var_1_53 / 1u) % var_1_7) != var_1_29) ? (var_1_1 == ((signed short int) ((((var_1_5) > ((var_1_8 + ((((-2) < (var_1_9)) ? (-2) : (var_1_9)))))) ? (var_1_5) : ((var_1_8 + ((((-2) < (var_1_9)) ? (-2) : (var_1_9))))))))) : (var_1_1 == ((signed short int) (var_1_10 - var_1_11)))) : (var_1_1 == ((signed short int) ((((((((var_1_5) < (var_1_11)) ? (var_1_5) : (var_1_11)))) > (((var_1_12 - var_1_13) - (var_1_14 - var_1_15)))) ? (((((var_1_5) < (var_1_11)) ? (var_1_5) : (var_1_11)))) : (((var_1_12 - var_1_13) - (var_1_14 - var_1_15))))))))) && ((((((last_1_var_1_53) < 0 ) ? -(last_1_var_1_53) : (last_1_var_1_53))) <= 8) ? (((last_1_var_1_72 / var_1_18) == (- (4.5 + 127.875))) ? ((-8 <= var_1_14) ? (var_1_16 == ((unsigned char) (last_1_var_1_73 && var_1_19))) : 1) : 1) : (var_1_19 ? (var_1_16 == ((unsigned char) ((! last_1_var_1_73) && var_1_20))) : ((! ((last_1_var_1_53 >= 4) && last_1_var_1_73)) ? (var_1_16 == ((unsigned char) (((8.5f - var_1_21) <= ((((199.16f) > (var_1_18)) ? (199.16f) : (var_1_18)))) || var_1_22))) : (var_1_20 ? (var_1_16 == ((unsigned char) var_1_22)) : 1))))) && (((var_1_24 - var_1_12) <= var_1_14) ? (var_1_23 == ((unsigned char) (var_1_22 && (var_1_25 && var_1_26)))) : 1)) && ((var_1_9 < (var_1_15 >> var_1_28)) ? ((((- var_1_11) > var_1_8) || var_1_20) ? (var_1_27 == ((unsigned short int) ((var_1_14 - var_1_15) + var_1_28))) : 1) : (var_1_27 == ((unsigned short int) var_1_28)))) && (((((((var_1_21) < (var_1_30)) ? (var_1_21) : (var_1_30))) - var_1_31) > ((var_1_69 * var_1_18) + (var_1_32 - var_1_33))) ? (var_1_16 ? (((var_1_24 - var_1_14) != var_1_13) ? ((var_1_32 <= ((var_1_31 * var_1_30) / var_1_34)) ? (var_1_29 == ((signed long int) ((var_1_53 - var_1_28) + (((((4) > (var_1_13)) ? (4) : (var_1_13))) + var_1_4)))) : 1) : (var_1_29 == ((signed long int) var_1_8))) : (var_1_29 == ((signed long int) var_1_12))) : (var_1_29 == ((signed long int) var_1_8)))) && (var_1_23 ? ((var_1_34 < 49.1) ? (var_1_35 == ((float) ((var_1_36 + var_1_37) - var_1_38))) : 1) : 1)) && ((var_1_33 > (var_1_36 - var_1_32)) ? (var_1_39 == ((unsigned char) ((var_1_34 >= (var_1_38 / var_1_18)) && var_1_20))) : 1)) && ((var_1_39 || (var_1_27 <= (var_1_41 - var_1_14))) ? (((var_1_24 - var_1_11) >= var_1_53) ? (var_1_40 == ((float) var_1_38)) : 1) : (var_1_40 == ((float) (var_1_37 + var_1_36))))) && (((var_1_38 / var_1_34) < var_1_36) ? ((((var_1_56 + var_1_15) + var_1_54) <= var_1_29) ? (var_1_42 == ((signed short int) (var_1_45 - var_1_13))) : (var_1_42 == ((signed short int) var_1_10))) : (var_1_42 == ((signed short int) var_1_9)))) && (((- var_1_33) < var_1_18) ? ((var_1_1 <= (var_1_53 % (var_1_28 + var_1_48))) ? (var_1_46 == ((float) ((var_1_36 - var_1_37) + var_1_49))) : (var_1_20 ? (var_1_46 == ((float) ((((7.2f) > ((32.4f - (var_1_36 + var_1_37)))) ? (7.2f) : ((32.4f - (var_1_36 + var_1_37))))))) : (var_1_46 == ((float) (var_1_36 - (var_1_50 - (var_1_51 + var_1_52))))))) : ((! var_1_22) ? (var_1_46 == ((float) (((((((((9.4f) > (1.666f)) ? (9.4f) : (1.666f))) + (var_1_51 + var_1_52))) > ((var_1_49 + var_1_37))) ? ((((((9.4f) > (1.666f)) ? (9.4f) : (1.666f))) + (var_1_51 + var_1_52))) : ((var_1_49 + var_1_37)))))) : (var_1_46 == ((float) (var_1_49 + var_1_36)))))) && (var_1_16 ? (var_1_53 == ((unsigned long int) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : (var_1_53 == ((unsigned long int) var_1_41)))) && ((var_1_55 > (var_1_41 - (var_1_15 + var_1_29))) ? (var_1_54 == ((signed short int) var_1_8)) : 1)) && (((- var_1_21) <= ((- var_1_38) / var_1_18)) ? (var_1_55 == ((unsigned short int) (var_1_29 + var_1_11))) : (var_1_55 == ((unsigned short int) (var_1_14 + var_1_13))))) && ((var_1_53 != var_1_9) ? (var_1_56 == ((unsigned long int) (var_1_57 - ((((var_1_29) > ((var_1_14 + var_1_13))) ? (var_1_29) : ((var_1_14 + var_1_13))))))) : 1)) && ((var_1_28 < var_1_53) ? (var_1_58 == ((double) ((((var_1_50) < (var_1_37)) ? (var_1_50) : (var_1_37))))) : (var_1_58 == ((double) (((var_1_59 - var_1_51) - var_1_36) + ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) > (((((var_1_52) > (var_1_37)) ? (var_1_52) : (var_1_37))))) ? (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : (((((var_1_52) > (var_1_37)) ? (var_1_52) : (var_1_37))))))))))) && (((var_1_28 >> var_1_61) > var_1_29) ? (var_1_60 == ((signed char) (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) - (var_1_28 + ((((var_1_62) > (var_1_63)) ? (var_1_62) : (var_1_63))))))) : (var_1_60 == ((signed char) (((((-10 + var_1_62)) < (-4)) ? ((-10 + var_1_62)) : (-4))))))) && ((var_1_1 >= var_1_56) ? (var_1_64 == ((float) ((var_1_52 + ((((var_1_51) > (var_1_65)) ? (var_1_51) : (var_1_65)))) + (((((var_1_66) > (var_1_67)) ? (var_1_66) : (var_1_67))) + var_1_68)))) : ((var_1_14 >= (var_1_24 * var_1_53)) ? (var_1_64 == ((float) var_1_52)) : (var_1_64 == ((float) var_1_67))))) && (var_1_69 == ((double) (var_1_59 - ((((var_1_38) > (var_1_51)) ? (var_1_38) : (var_1_51))))))) && ((var_1_53 >= ((((-256) < (var_1_62)) ? (-256) : (var_1_62)))) ? ((((var_1_14 * var_1_29) / var_1_28) <= var_1_27) ? ((var_1_7 > (var_1_62 / (var_1_28 + var_1_48))) ? (var_1_70 == ((signed char) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) : (var_1_70 == ((signed char) var_1_61))) : (var_1_70 == ((signed char) (var_1_62 - (((((var_1_63 + var_1_61)) > ((var_1_71 - var_1_28))) ? ((var_1_63 + var_1_61)) : ((var_1_71 - var_1_28)))))))) : (var_1_70 == ((signed char) (((((var_1_28) > (var_1_62)) ? (var_1_28) : (var_1_62))) - (((((var_1_61 + var_1_63)) > (((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71))))) ? ((var_1_61 + var_1_63)) : (((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71))))))))))) && (var_1_72 == ((double) ((((var_1_52) < (var_1_65)) ? (var_1_52) : (var_1_65)))))) && ((var_1_5 != var_1_10) ? (var_1_73 == ((unsigned char) var_1_26)) : 1)) && ((var_1_51 >= var_1_58) ? ((var_1_26 || var_1_22) ? (var_1_74 == ((signed short int) var_1_8)) : 1) : 1)
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
