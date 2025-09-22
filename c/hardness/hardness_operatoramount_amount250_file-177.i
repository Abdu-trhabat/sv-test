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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 5.1;
float var_1_4 = 99999999.7;
float var_1_5 = 0.0;
float var_1_6 = 15.6;
float var_1_7 = 100.75;
float var_1_8 = 64.25;
float var_1_9 = 3.2;
signed char var_1_10 = 8;
signed char var_1_11 = -4;
signed char var_1_12 = 2;
float var_1_13 = 8.875;
signed short int var_1_14 = 256;
float var_1_15 = 4.5;
float var_1_16 = 0.7;
float var_1_17 = 255.8;
unsigned short int var_1_18 = 256;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 61451;
unsigned short int var_1_21 = 2;
unsigned short int var_1_22 = 32;
unsigned short int var_1_23 = 100;
unsigned short int var_1_24 = 16;
unsigned short int var_1_25 = 256;
unsigned short int var_1_26 = 10;
unsigned char var_1_27 = 1;
unsigned short int var_1_28 = 5;
unsigned short int var_1_29 = 28786;
unsigned short int var_1_30 = 28271;
unsigned short int var_1_31 = 29444;
unsigned short int var_1_32 = 18410;
float var_1_33 = 127.85;
unsigned short int var_1_35 = 10;
signed long int var_1_36 = 10000;
signed short int var_1_37 = -5;
signed long int var_1_38 = 1931824530;
signed short int var_1_39 = 30036;
signed short int var_1_40 = 50;
signed short int var_1_41 = 18670;
signed short int var_1_42 = 256;
unsigned short int var_1_43 = 100;
signed char var_1_44 = 64;
signed char var_1_45 = 25;
unsigned short int var_1_46 = 50197;
unsigned short int var_1_47 = 8;
unsigned short int var_1_48 = 60086;
signed short int var_1_49 = -2;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned short int var_1_54 = 64;
unsigned short int var_1_55 = 22917;
unsigned short int var_1_56 = 1;
signed short int var_1_57 = 32;
unsigned char var_1_58 = 32;
unsigned short int var_1_59 = 1;
unsigned char var_1_60 = 200;
unsigned char var_1_61 = 128;
unsigned char var_1_62 = 64;
unsigned char var_1_63 = 0;
double var_1_64 = 128.95;
signed short int var_1_65 = 2;
double var_1_66 = 63.75;
double var_1_67 = 127.8;
signed long int var_1_68 = -5;
unsigned short int last_1_var_1_18 = 256;
unsigned short int last_1_var_1_43 = 100;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = var_1_21 - (var_1_26 + var_1_20);
 unsigned char stepLocal_2 = var_1_19;
 if (stepLocal_3 == var_1_22) {
  if (var_1_27 && stepLocal_2) {
   var_1_28 = ((var_1_29 - var_1_26) + var_1_21);
  } else {
   if (var_1_19) {
    var_1_28 = ((((var_1_21) < (var_1_23)) ? (var_1_21) : (var_1_23)));
   } else {
    if (! (var_1_8 == (3.6f + var_1_4))) {
     var_1_28 = ((var_1_29 + var_1_30) - (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) - var_1_26));
    }
   }
  }
 } else {
  var_1_28 = ((((var_1_32) > (var_1_26)) ? (var_1_32) : (var_1_26)));
 }
 var_1_35 = 256;
 var_1_36 = ((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (((var_1_31 - var_1_32) + var_1_14))) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (((var_1_31 - var_1_32) + var_1_14))));
 var_1_49 = var_1_42;
 signed short int stepLocal_8 = var_1_14;
 signed short int stepLocal_7 = var_1_41;
 if (var_1_23 < stepLocal_7) {
  if (var_1_5 < 31.75f) {
   if (stepLocal_8 > (((((var_1_32) < (var_1_30)) ? (var_1_32) : (var_1_30))) - (var_1_31 - var_1_45))) {
    if (var_1_27) {
     if (var_1_6 != var_1_9) {
      var_1_50 = (var_1_51 || (! var_1_52));
     }
    }
   } else {
    if (((((var_1_8) < (var_1_5)) ? (var_1_8) : (var_1_5))) <= 0.25f) {
     var_1_50 = (var_1_52 && var_1_51);
    } else {
     var_1_50 = ((! var_1_52) || var_1_53);
    }
   }
  } else {
   var_1_50 = var_1_51;
  }
 }
 unsigned short int stepLocal_9 = var_1_46;
 if (var_1_50) {
  if (var_1_51) {
   var_1_54 = (var_1_48 - ((((var_1_32) < ((var_1_55 - var_1_42))) ? (var_1_32) : ((var_1_55 - var_1_42)))));
  }
 } else {
  if (stepLocal_9 == var_1_24) {
   var_1_54 = ((var_1_30 - var_1_47) + ((var_1_45 + var_1_56) + var_1_40));
  } else {
   var_1_54 = (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - ((((var_1_47) > ((64 + var_1_45))) ? (var_1_47) : ((64 + var_1_45)))));
  }
 }
 if (var_1_58 > (((((var_1_60) < (var_1_61)) ? (var_1_60) : (var_1_61))) - (var_1_62 - var_1_63))) {
  var_1_59 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
 } else {
  var_1_59 = ((25178 + var_1_30) - var_1_56);
 }
 signed long int stepLocal_13 = var_1_30 / var_1_41;
 signed long int stepLocal_12 = (((var_1_42) < (var_1_62)) ? (var_1_42) : (var_1_62));
 if ((~ var_1_59) < stepLocal_13) {
  if (stepLocal_12 < -50) {
   var_1_64 = (var_1_5 + (var_1_7 - (var_1_16 + var_1_17)));
  } else {
   var_1_64 = ((((var_1_16) > (var_1_6)) ? (var_1_16) : (var_1_6)));
  }
 } else {
  var_1_64 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
 }
 var_1_65 = (((((var_1_39) > (var_1_44)) ? (var_1_39) : (var_1_44))) - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))));
 signed long int stepLocal_14 = - (var_1_60 - 64);
 if (var_1_50) {
  if (stepLocal_14 <= var_1_45) {
   var_1_66 = (((((var_1_9 + ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16))))) > (var_1_7)) ? ((var_1_9 + ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16))))) : (var_1_7)));
  } else {
   var_1_66 = var_1_8;
  }
 } else {
  var_1_66 = var_1_15;
 }
 if (var_1_52) {
  var_1_67 = var_1_9;
 } else {
  var_1_67 = 10.6;
 }
 if (var_1_36 >= (var_1_14 - 4)) {
  var_1_13 = (((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7))) - ((((var_1_6) > ((var_1_5 + var_1_15))) ? (var_1_6) : ((var_1_5 + var_1_15)))));
 } else {
  var_1_13 = ((var_1_5 - (var_1_16 + var_1_17)) + var_1_6);
 }
 if (var_1_50 && (last_1_var_1_18 > var_1_11)) {
  var_1_18 = (var_1_20 - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))));
 } else {
  if (((((var_1_12) < (var_1_35)) ? (var_1_12) : (var_1_35))) > (((((last_1_var_1_18) < 0 ) ? -(last_1_var_1_18) : (last_1_var_1_18))) - var_1_20)) {
   if (var_1_7 > (8.625f - var_1_15)) {
    var_1_18 = (var_1_20 - var_1_21);
   } else {
    var_1_18 = ((((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) < (((((((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) > (var_1_24)) ? (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) : (var_1_24))))) ? (((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) : (((((((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) > (var_1_24)) ? (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) : (var_1_24))))));
   }
  }
 }
 signed long int stepLocal_1 = var_1_21 << var_1_24;
 if (var_1_50) {
  var_1_25 = (var_1_20 - var_1_21);
 } else {
  if (var_1_67 > var_1_7) {
   if (stepLocal_1 < var_1_12) {
    var_1_25 = (var_1_20 - (26980 - var_1_26));
   } else {
    if (var_1_50) {
     var_1_25 = var_1_26;
    } else {
     var_1_25 = var_1_20;
    }
   }
  } else {
   var_1_25 = var_1_22;
  }
 }
 unsigned short int stepLocal_4 = var_1_25;
 if (stepLocal_4 < var_1_36) {
  if (var_1_64 == var_1_9) {
   var_1_33 = ((((((((((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) > (var_1_16)) ? (((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) : (var_1_16)))) > ((((((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) < 0 ) ? -((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) : ((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))))))) ? (((((((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) > (var_1_16)) ? (((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) : (var_1_16)))) : ((((((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) < 0 ) ? -((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) : ((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))))))));
  } else {
   if (var_1_50) {
    var_1_33 = var_1_9;
   } else {
    var_1_33 = var_1_4;
   }
  }
 } else {
  var_1_33 = var_1_15;
 }
 if (var_1_28 <= (var_1_44 - var_1_45)) {
  if (var_1_25 <= var_1_12) {
   if ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < 0 ) ? -((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) : ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) <= last_1_var_1_43) {
    var_1_43 = (((((var_1_20) > (var_1_46)) ? (var_1_20) : (var_1_46))) - (var_1_41 - (var_1_45 + var_1_47)));
   } else {
    var_1_43 = (((var_1_48 - var_1_47) - 10) - var_1_21);
   }
  }
 }
 if (var_1_18 >= var_1_43) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_1 = ((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) - var_1_7) + (((((7.25f - var_1_8)) > (var_1_9)) ? ((7.25f - var_1_8)) : (var_1_9))));
 }
 unsigned short int stepLocal_0 = var_1_25;
 if (var_1_6 >= var_1_4) {
  if (stepLocal_0 < var_1_54) {
   var_1_10 = (var_1_11 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))));
  } else {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 }
 unsigned short int stepLocal_6 = var_1_23;
 signed long int stepLocal_5 = var_1_22 - (var_1_38 - var_1_43);
 if (-2 < stepLocal_6) {
  var_1_37 = 256;
 } else {
  if ((256 / 200) <= stepLocal_5) {
   var_1_37 = (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > ((var_1_39 - var_1_40))) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : ((var_1_39 - var_1_40)))) - (var_1_41 - var_1_42));
  }
 }
 signed long int stepLocal_15 = ((((var_1_63 + var_1_43)) < ((var_1_39 % var_1_46))) ? ((var_1_63 + var_1_43)) : ((var_1_39 % var_1_46)));
 if (((var_1_48 - var_1_40) - var_1_32) > stepLocal_15) {
  if (var_1_51) {
   var_1_68 = var_1_14;
  }
 } else {
  var_1_68 = var_1_37;
 }
 unsigned short int stepLocal_11 = var_1_46;
 unsigned char stepLocal_10 = (var_1_14 / var_1_58) < (var_1_68 / var_1_31);
 if (var_1_50 || stepLocal_10) {
  var_1_57 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 } else {
  if ((var_1_21 / var_1_32) < stepLocal_11) {
   var_1_57 = (1 + (var_1_47 - var_1_58));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65534);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 65534);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65534);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65534);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 16383);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16384);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 16383);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 16383);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= 1073741823);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16382);
 assume_abort_if_not(var_1_39 <= 32766);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 16383);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -1);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 32767);
 assume_abort_if_not(var_1_46 <= 65534);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 8191);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 57342);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 16383);
 assume_abort_if_not(var_1_55 <= 32767);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 8192);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 255);
 assume_abort_if_not(var_1_58 != 0);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 127);
 assume_abort_if_not(var_1_60 <= 255);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 127);
 assume_abort_if_not(var_1_61 <= 255);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 63);
 assume_abort_if_not(var_1_62 <= 127);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_43 = var_1_43;
}
int property(void) {
 return (((((((((((((((((((((var_1_18 >= var_1_43) ? (var_1_1 == ((float) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_1 == ((float) ((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) - var_1_7) + (((((7.25f - var_1_8)) > (var_1_9)) ? ((7.25f - var_1_8)) : (var_1_9))))))) && ((var_1_6 >= var_1_4) ? ((var_1_25 < var_1_54) ? (var_1_10 == ((signed char) (var_1_11 + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))) : (var_1_10 == ((signed char) var_1_12))) : (var_1_10 == ((signed char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) && ((var_1_36 >= (var_1_14 - 4)) ? (var_1_13 == ((float) (((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7))) - ((((var_1_6) > ((var_1_5 + var_1_15))) ? (var_1_6) : ((var_1_5 + var_1_15))))))) : (var_1_13 == ((float) ((var_1_5 - (var_1_16 + var_1_17)) + var_1_6))))) && ((var_1_50 && (last_1_var_1_18 > var_1_11)) ? (var_1_18 == ((unsigned short int) (var_1_20 - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))) : ((((((var_1_12) < (var_1_35)) ? (var_1_12) : (var_1_35))) > (((((last_1_var_1_18) < 0 ) ? -(last_1_var_1_18) : (last_1_var_1_18))) - var_1_20)) ? ((var_1_7 > (8.625f - var_1_15)) ? (var_1_18 == ((unsigned short int) (var_1_20 - var_1_21))) : (var_1_18 == ((unsigned short int) ((((((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) < (((((((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) > (var_1_24)) ? (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) : (var_1_24))))) ? (((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)))) : (((((((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) > (var_1_24)) ? (((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))) : (var_1_24))))))))) : 1))) && (var_1_50 ? (var_1_25 == ((unsigned short int) (var_1_20 - var_1_21))) : ((var_1_67 > var_1_7) ? (((var_1_21 << var_1_24) < var_1_12) ? (var_1_25 == ((unsigned short int) (var_1_20 - (26980 - var_1_26)))) : (var_1_50 ? (var_1_25 == ((unsigned short int) var_1_26)) : (var_1_25 == ((unsigned short int) var_1_20)))) : (var_1_25 == ((unsigned short int) var_1_22))))) && (((var_1_21 - (var_1_26 + var_1_20)) == var_1_22) ? ((var_1_27 && var_1_19) ? (var_1_28 == ((unsigned short int) ((var_1_29 - var_1_26) + var_1_21))) : (var_1_19 ? (var_1_28 == ((unsigned short int) ((((var_1_21) < (var_1_23)) ? (var_1_21) : (var_1_23))))) : ((! (var_1_8 == (3.6f + var_1_4))) ? (var_1_28 == ((unsigned short int) ((var_1_29 + var_1_30) - (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) - var_1_26)))) : 1))) : (var_1_28 == ((unsigned short int) ((((var_1_32) > (var_1_26)) ? (var_1_32) : (var_1_26))))))) && ((var_1_25 < var_1_36) ? ((var_1_64 == var_1_9) ? (var_1_33 == ((float) ((((((((((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) > (var_1_16)) ? (((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) : (var_1_16)))) > ((((((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) < 0 ) ? -((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) : ((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))))))) ? (((((((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) > (var_1_16)) ? (((((var_1_8) > (var_1_4)) ? (var_1_8) : (var_1_4)))) : (var_1_16)))) : ((((((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) < 0 ) ? -((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5))) : ((((0.75f) > (var_1_5)) ? (0.75f) : (var_1_5)))))))))) : (var_1_50 ? (var_1_33 == ((float) var_1_9)) : (var_1_33 == ((float) var_1_4)))) : (var_1_33 == ((float) var_1_15)))) && (var_1_35 == ((unsigned short int) 256))) && (var_1_36 == ((signed long int) ((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (((var_1_31 - var_1_32) + var_1_14))) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (((var_1_31 - var_1_32) + var_1_14))))))) && ((-2 < var_1_23) ? (var_1_37 == ((signed short int) 256)) : (((256 / 200) <= (var_1_22 - (var_1_38 - var_1_43))) ? (var_1_37 == ((signed short int) (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > ((var_1_39 - var_1_40))) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : ((var_1_39 - var_1_40)))) - (var_1_41 - var_1_42)))) : 1))) && ((var_1_28 <= (var_1_44 - var_1_45)) ? ((var_1_25 <= var_1_12) ? (((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < 0 ) ? -((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) : ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) <= last_1_var_1_43) ? (var_1_43 == ((unsigned short int) (((((var_1_20) > (var_1_46)) ? (var_1_20) : (var_1_46))) - (var_1_41 - (var_1_45 + var_1_47))))) : (var_1_43 == ((unsigned short int) (((var_1_48 - var_1_47) - 10) - var_1_21)))) : 1) : 1)) && (var_1_49 == ((signed short int) var_1_42))) && ((var_1_23 < var_1_41) ? ((var_1_5 < 31.75f) ? ((var_1_14 > (((((var_1_32) < (var_1_30)) ? (var_1_32) : (var_1_30))) - (var_1_31 - var_1_45))) ? (var_1_27 ? ((var_1_6 != var_1_9) ? (var_1_50 == ((unsigned char) (var_1_51 || (! var_1_52)))) : 1) : 1) : ((((((var_1_8) < (var_1_5)) ? (var_1_8) : (var_1_5))) <= 0.25f) ? (var_1_50 == ((unsigned char) (var_1_52 && var_1_51))) : (var_1_50 == ((unsigned char) ((! var_1_52) || var_1_53))))) : (var_1_50 == ((unsigned char) var_1_51))) : 1)) && (var_1_50 ? (var_1_51 ? (var_1_54 == ((unsigned short int) (var_1_48 - ((((var_1_32) < ((var_1_55 - var_1_42))) ? (var_1_32) : ((var_1_55 - var_1_42))))))) : 1) : ((var_1_46 == var_1_24) ? (var_1_54 == ((unsigned short int) ((var_1_30 - var_1_47) + ((var_1_45 + var_1_56) + var_1_40)))) : (var_1_54 == ((unsigned short int) (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - ((((var_1_47) > ((64 + var_1_45))) ? (var_1_47) : ((64 + var_1_45)))))))))) && ((var_1_50 || ((var_1_14 / var_1_58) < (var_1_68 / var_1_31))) ? (var_1_57 == ((signed short int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (((var_1_21 / var_1_32) < var_1_46) ? (var_1_57 == ((signed short int) (1 + (var_1_47 - var_1_58)))) : 1))) && ((var_1_58 > (((((var_1_60) < (var_1_61)) ? (var_1_60) : (var_1_61))) - (var_1_62 - var_1_63))) ? (var_1_59 == ((unsigned short int) ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))) : (var_1_59 == ((unsigned short int) ((25178 + var_1_30) - var_1_56))))) && (((~ var_1_59) < (var_1_30 / var_1_41)) ? ((((((var_1_42) < (var_1_62)) ? (var_1_42) : (var_1_62))) < -50) ? (var_1_64 == ((double) (var_1_5 + (var_1_7 - (var_1_16 + var_1_17))))) : (var_1_64 == ((double) ((((var_1_16) > (var_1_6)) ? (var_1_16) : (var_1_6)))))) : (var_1_64 == ((double) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))))) && (var_1_65 == ((signed short int) (((((var_1_39) > (var_1_44)) ? (var_1_39) : (var_1_44))) - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))))) && (var_1_50 ? (((- (var_1_60 - 64)) <= var_1_45) ? (var_1_66 == ((double) (((((var_1_9 + ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16))))) > (var_1_7)) ? ((var_1_9 + ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16))))) : (var_1_7))))) : (var_1_66 == ((double) var_1_8))) : (var_1_66 == ((double) var_1_15)))) && (var_1_52 ? (var_1_67 == ((double) var_1_9)) : (var_1_67 == ((double) 10.6)))) && ((((var_1_48 - var_1_40) - var_1_32) > (((((var_1_63 + var_1_43)) < ((var_1_39 % var_1_46))) ? ((var_1_63 + var_1_43)) : ((var_1_39 % var_1_46))))) ? (var_1_51 ? (var_1_68 == ((signed long int) var_1_14)) : 1) : (var_1_68 == ((signed long int) var_1_37)))
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
