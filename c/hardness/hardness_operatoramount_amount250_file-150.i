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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 5;
signed long int var_1_2 = -64;
unsigned char var_1_3 = 25;
unsigned short int var_1_4 = 500;
unsigned char var_1_7 = 25;
unsigned char var_1_8 = 8;
unsigned char var_1_9 = 32;
unsigned char var_1_10 = 0;
signed long int var_1_12 = -256;
unsigned char var_1_13 = 0;
double var_1_15 = 15.2;
double var_1_16 = 63.5;
double var_1_17 = 64.5;
double var_1_18 = 10000000.75;
double var_1_19 = 1.125;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_26 = 4.125;
double var_1_30 = 1000000000000000.5;
unsigned short int var_1_31 = 10;
float var_1_32 = 7.2;
float var_1_33 = 16.5;
double var_1_34 = 10000000.25;
double var_1_35 = 0.3;
double var_1_36 = 0.2;
unsigned char var_1_37 = 200;
unsigned char var_1_38 = 200;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 64;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 1;
signed char var_1_44 = 10;
signed char var_1_45 = 64;
signed char var_1_46 = 8;
signed char var_1_47 = 32;
signed char var_1_48 = 16;
signed char var_1_49 = 32;
signed char var_1_50 = 1;
unsigned short int var_1_51 = 500;
unsigned char var_1_52 = 0;
double var_1_53 = 50.5;
unsigned char var_1_54 = 1;
unsigned short int var_1_56 = 1;
unsigned short int var_1_58 = 32768;
float var_1_59 = 4.25;
float var_1_60 = 1.8;
float var_1_61 = 15.8;
double var_1_62 = 0.25;
double var_1_63 = 100.8;
double var_1_64 = 99.5;
double var_1_65 = 0.19999999999999996;
unsigned long int var_1_66 = 32;
double var_1_67 = 16.25;
double var_1_68 = 99999999999999.5;
signed char var_1_69 = 5;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 0;
unsigned long int var_1_73 = 25;
signed char var_1_74 = -4;
unsigned long int var_1_75 = 3265364440;
unsigned char last_1_var_1_54 = 1;
unsigned short int last_1_var_1_56 = 1;
void initially(void) {
}
void step(void) {
 var_1_1 = var_1_2;
 if (var_1_8 >= var_1_1) {
  var_1_20 = (var_1_21 && var_1_22);
 } else {
  var_1_20 = (var_1_13 || var_1_23);
 }
 var_1_32 = (((((50.5f) < 0 ) ? -(50.5f) : (50.5f))) + var_1_33);
 unsigned char stepLocal_12 = var_1_7;
 if (((var_1_38 - var_1_39) - 100) != stepLocal_12) {
  var_1_37 = (((((((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))) + var_1_41)) > (((((var_1_7) > (1)) ? (var_1_7) : (1))))) ? ((((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))) + var_1_41)) : (((((var_1_7) > (1)) ? (var_1_7) : (1))))));
 } else {
  var_1_37 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 var_1_42 = ((var_1_22 && var_1_21) && var_1_43);
 signed char stepLocal_14 = var_1_48;
 if (var_1_39 > stepLocal_14) {
  var_1_52 = var_1_22;
 }
 if (var_1_20) {
  var_1_53 = var_1_16;
 }
 if (var_1_20) {
  var_1_56 = ((var_1_48 + ((((var_1_7) > (var_1_49)) ? (var_1_7) : (var_1_49)))) + (var_1_41 + last_1_var_1_56));
 } else {
  var_1_56 = (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) - var_1_40);
 }
 if (var_1_42) {
  var_1_62 = (var_1_61 - (var_1_63 + var_1_64));
 }
 if ((16 != (~ var_1_49)) || (var_1_17 == var_1_63)) {
  var_1_65 = (((((var_1_60 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) > (var_1_63)) ? ((var_1_60 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (var_1_63)));
 } else {
  var_1_65 = ((((var_1_63 + 128.4) < 0 ) ? -(var_1_63 + 128.4) : (var_1_63 + 128.4)));
 }
 if ((- (var_1_45 / var_1_38)) >= var_1_8) {
  var_1_66 = ((3456630165u - var_1_56) - var_1_40);
 } else {
  var_1_66 = (32u + var_1_38);
 }
 var_1_71 = var_1_72;
 if (var_1_43) {
  var_1_73 = var_1_38;
 }
 signed long int stepLocal_1 = (var_1_2 & var_1_1) / var_1_4;
 signed long int stepLocal_0 = var_1_2;
 if (stepLocal_0 <= (~ var_1_1)) {
  if (stepLocal_1 <= (var_1_66 | var_1_73)) {
   var_1_3 = ((((((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))) > (var_1_9)) ? (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9)));
  }
 } else {
  var_1_3 = var_1_9;
 }
 unsigned long int stepLocal_5 = var_1_66;
 if (var_1_7 > stepLocal_5) {
  var_1_15 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 } else {
  var_1_15 = ((((var_1_16) < (((((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) < (var_1_19)) ? (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) : (var_1_19))))) ? (var_1_16) : (((((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) < (var_1_19)) ? (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) : (var_1_19))))));
 }
 if (var_1_52) {
  var_1_24 = (! var_1_23);
 } else {
  if ((10 <= var_1_66) && var_1_20) {
   var_1_24 = (var_1_23 && (var_1_13 || var_1_25));
  } else {
   var_1_24 = ((var_1_18 < var_1_16) && (var_1_13 && (var_1_25 && var_1_23)));
  }
 }
 if (var_1_53 != ((((((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))) < (var_1_30)) ? (((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))) : (var_1_30)))) {
  var_1_31 = (((((var_1_37) < (var_1_7)) ? (var_1_37) : (var_1_7))) + ((((var_1_9) > ((var_1_8 + 32))) ? (var_1_9) : ((var_1_8 + 32)))));
 }
 signed long int stepLocal_11 = var_1_12;
 unsigned long int stepLocal_10 = var_1_66;
 signed long int stepLocal_9 = var_1_1;
 if (stepLocal_10 == var_1_1) {
  if ((((((var_1_8 & var_1_2)) > (var_1_1)) ? ((var_1_8 & var_1_2)) : (var_1_1))) > stepLocal_9) {
   if (var_1_31 >= stepLocal_11) {
    var_1_34 = var_1_33;
   }
  }
 } else {
  var_1_34 = ((((((((var_1_16) > (var_1_35)) ? (var_1_16) : (var_1_35)))) > ((var_1_33 + var_1_36))) ? (((((var_1_16) > (var_1_35)) ? (var_1_16) : (var_1_35)))) : ((var_1_33 + var_1_36))));
 }
 if (var_1_71) {
  var_1_51 = ((((256) < (var_1_47)) ? (256) : (var_1_47)));
 } else {
  var_1_51 = var_1_46;
 }
 if (var_1_37 >= (var_1_3 * var_1_7)) {
  var_1_54 = (last_1_var_1_54 && var_1_13);
 }
 unsigned long int stepLocal_16 = var_1_2 | var_1_73;
 unsigned short int stepLocal_15 = var_1_58;
 if (var_1_39 == stepLocal_16) {
  if ((31.25 + (var_1_61 + var_1_53)) != var_1_16) {
   var_1_67 = var_1_36;
  } else {
   var_1_67 = var_1_64;
  }
 } else {
  if (stepLocal_15 == var_1_49) {
   var_1_67 = ((((4.2) < (127.5)) ? (4.2) : (127.5)));
  } else {
   if (((var_1_35 + var_1_61) / ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))) < ((((var_1_34) > (((((var_1_65) > (var_1_17)) ? (var_1_65) : (var_1_17))))) ? (var_1_34) : (((((var_1_65) > (var_1_17)) ? (var_1_65) : (var_1_17))))))) {
    var_1_67 = var_1_36;
   } else {
    var_1_67 = ((((var_1_64) < (((((500.4) < (var_1_36)) ? (500.4) : (var_1_36))))) ? (var_1_64) : (((((500.4) < (var_1_36)) ? (500.4) : (var_1_36))))));
   }
  }
 }
 signed long int stepLocal_20 = var_1_1;
 signed long int stepLocal_19 = var_1_2;
 unsigned char stepLocal_18 = var_1_22;
 unsigned long int stepLocal_17 = var_1_73;
 if (stepLocal_18 || var_1_52) {
  if (var_1_48 <= stepLocal_19) {
   var_1_69 = ((((((((var_1_38) < (var_1_48)) ? (var_1_38) : (var_1_48)))) > (var_1_39)) ? (((((var_1_38) < (var_1_48)) ? (var_1_38) : (var_1_48)))) : (var_1_39)));
  } else {
   if (var_1_18 < 10.5) {
    var_1_69 = var_1_48;
   } else {
    var_1_69 = (var_1_49 + var_1_50);
   }
  }
 } else {
  if (! (var_1_42 && (var_1_18 > var_1_64))) {
   if (stepLocal_20 == (var_1_48 | var_1_9)) {
    if (stepLocal_17 < var_1_8) {
     var_1_69 = (var_1_47 - var_1_45);
    }
   } else {
    var_1_69 = ((((var_1_45) > (var_1_49)) ? (var_1_45) : (var_1_49)));
   }
  } else {
   if (var_1_16 >= var_1_53) {
    var_1_69 = var_1_49;
   } else {
    var_1_69 = var_1_39;
   }
  }
 }
 unsigned long int stepLocal_22 = 10u;
 unsigned long int stepLocal_21 = ((((var_1_41) < (var_1_66)) ? (var_1_41) : (var_1_66))) * var_1_58;
 if ((var_1_31 + var_1_56) > stepLocal_21) {
  if (((var_1_75 - var_1_49) - var_1_51) <= stepLocal_22) {
   var_1_74 = var_1_48;
  } else {
   var_1_74 = var_1_50;
  }
 }
 unsigned long int stepLocal_4 = (var_1_1 & var_1_9) * var_1_73;
 unsigned long int stepLocal_3 = (((var_1_2) < ((var_1_73 + var_1_4))) ? (var_1_2) : ((var_1_73 + var_1_4)));
 unsigned char stepLocal_2 = ! 1;
 if (stepLocal_2 && var_1_24) {
  if (var_1_37 >= stepLocal_4) {
   if (stepLocal_3 <= (var_1_8 / var_1_12)) {
    var_1_10 = (! var_1_13);
   }
  }
 } else {
  var_1_10 = (var_1_42 && var_1_13);
 }
 signed long int stepLocal_13 = var_1_51 ^ (var_1_39 - var_1_4);
 if (((~ var_1_8) + (~ var_1_12)) < stepLocal_13) {
  var_1_44 = ((var_1_45 - var_1_46) - var_1_39);
 } else {
  if (var_1_30 > var_1_17) {
   var_1_44 = (var_1_45 - ((((var_1_46) < (var_1_39)) ? (var_1_46) : (var_1_39))));
  } else {
   var_1_44 = (var_1_46 - ((var_1_47 - var_1_48) + (var_1_49 - var_1_50)));
  }
 }
 if (var_1_10) {
  var_1_59 = (var_1_60 - var_1_61);
 }
 unsigned char stepLocal_8 = var_1_8;
 unsigned char stepLocal_7 = var_1_8;
 unsigned long int stepLocal_6 = var_1_7 * var_1_73;
 if (stepLocal_7 >= var_1_73) {
  if (((((var_1_7) > ((var_1_2 + var_1_1))) ? (var_1_7) : ((var_1_2 + var_1_1)))) != stepLocal_8) {
   if ((var_1_1 / var_1_4) >= stepLocal_6) {
    if (var_1_59 <= (128.75f + var_1_65)) {
     var_1_26 = var_1_19;
    } else {
     var_1_26 = var_1_18;
    }
   } else {
    var_1_26 = var_1_17;
   }
  } else {
   var_1_26 = var_1_30;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483647);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 assume_abort_if_not(var_1_4 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 191);
 assume_abort_if_not(var_1_38 <= 255);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 64);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 62);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 31);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 31);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 31);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 31);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65534);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854766000e+12F && var_1_61 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_68 >= -922337.2036854776000e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854776000e+12F && var_1_68 >= 1.0e-20F ));
 assume_abort_if_not(var_1_68 != 0.0F);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 0);
 var_1_75 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_75 >= 3221225471);
 assume_abort_if_not(var_1_75 <= 4294967295);
}
void updateLastVariables(void) {
 last_1_var_1_54 = var_1_54;
 last_1_var_1_56 = var_1_56;
}
int property(void) {
 return ((((((((((((((((((((((((((var_1_1 == ((signed long int) var_1_2)) && ((var_1_2 <= (~ var_1_1)) ? ((((var_1_2 & var_1_1) / var_1_4) <= (var_1_66 | var_1_73)) ? (var_1_3 == ((unsigned char) ((((((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))) > (var_1_9)) ? (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9))))) : 1) : (var_1_3 == ((unsigned char) var_1_9)))) && (((! 1) && var_1_24) ? ((var_1_37 >= ((var_1_1 & var_1_9) * var_1_73)) ? ((((((var_1_2) < ((var_1_73 + var_1_4))) ? (var_1_2) : ((var_1_73 + var_1_4)))) <= (var_1_8 / var_1_12)) ? (var_1_10 == ((unsigned char) (! var_1_13))) : 1) : 1) : (var_1_10 == ((unsigned char) (var_1_42 && var_1_13))))) && ((var_1_7 > var_1_66) ? (var_1_15 == ((double) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_15 == ((double) ((((var_1_16) < (((((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) < (var_1_19)) ? (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) : (var_1_19))))) ? (var_1_16) : (((((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) < (var_1_19)) ? (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))) : (var_1_19)))))))))) && ((var_1_8 >= var_1_1) ? (var_1_20 == ((unsigned char) (var_1_21 && var_1_22))) : (var_1_20 == ((unsigned char) (var_1_13 || var_1_23))))) && (var_1_52 ? (var_1_24 == ((unsigned char) (! var_1_23))) : (((10 <= var_1_66) && var_1_20) ? (var_1_24 == ((unsigned char) (var_1_23 && (var_1_13 || var_1_25)))) : (var_1_24 == ((unsigned char) ((var_1_18 < var_1_16) && (var_1_13 && (var_1_25 && var_1_23)))))))) && ((var_1_8 >= var_1_73) ? ((((((var_1_7) > ((var_1_2 + var_1_1))) ? (var_1_7) : ((var_1_2 + var_1_1)))) != var_1_8) ? (((var_1_1 / var_1_4) >= (var_1_7 * var_1_73)) ? ((var_1_59 <= (128.75f + var_1_65)) ? (var_1_26 == ((double) var_1_19)) : (var_1_26 == ((double) var_1_18))) : (var_1_26 == ((double) var_1_17))) : (var_1_26 == ((double) var_1_30))) : 1)) && ((var_1_53 != ((((((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))) < (var_1_30)) ? (((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))) : (var_1_30)))) ? (var_1_31 == ((unsigned short int) (((((var_1_37) < (var_1_7)) ? (var_1_37) : (var_1_7))) + ((((var_1_9) > ((var_1_8 + 32))) ? (var_1_9) : ((var_1_8 + 32))))))) : 1)) && (var_1_32 == ((float) (((((50.5f) < 0 ) ? -(50.5f) : (50.5f))) + var_1_33)))) && ((var_1_66 == var_1_1) ? (((((((var_1_8 & var_1_2)) > (var_1_1)) ? ((var_1_8 & var_1_2)) : (var_1_1))) > var_1_1) ? ((var_1_31 >= var_1_12) ? (var_1_34 == ((double) var_1_33)) : 1) : 1) : (var_1_34 == ((double) ((((((((var_1_16) > (var_1_35)) ? (var_1_16) : (var_1_35)))) > ((var_1_33 + var_1_36))) ? (((((var_1_16) > (var_1_35)) ? (var_1_16) : (var_1_35)))) : ((var_1_33 + var_1_36)))))))) && ((((var_1_38 - var_1_39) - 100) != var_1_7) ? (var_1_37 == ((unsigned char) (((((((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))) + var_1_41)) > (((((var_1_7) > (1)) ? (var_1_7) : (1))))) ? ((((((var_1_39) < (var_1_40)) ? (var_1_39) : (var_1_40))) + var_1_41)) : (((((var_1_7) > (1)) ? (var_1_7) : (1)))))))) : (var_1_37 == ((unsigned char) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) && (var_1_42 == ((unsigned char) ((var_1_22 && var_1_21) && var_1_43)))) && ((((~ var_1_8) + (~ var_1_12)) < (var_1_51 ^ (var_1_39 - var_1_4))) ? (var_1_44 == ((signed char) ((var_1_45 - var_1_46) - var_1_39))) : ((var_1_30 > var_1_17) ? (var_1_44 == ((signed char) (var_1_45 - ((((var_1_46) < (var_1_39)) ? (var_1_46) : (var_1_39)))))) : (var_1_44 == ((signed char) (var_1_46 - ((var_1_47 - var_1_48) + (var_1_49 - var_1_50)))))))) && (var_1_71 ? (var_1_51 == ((unsigned short int) ((((256) < (var_1_47)) ? (256) : (var_1_47))))) : (var_1_51 == ((unsigned short int) var_1_46)))) && ((var_1_39 > var_1_48) ? (var_1_52 == ((unsigned char) var_1_22)) : 1)) && (var_1_20 ? (var_1_53 == ((double) var_1_16)) : 1)) && ((var_1_37 >= (var_1_3 * var_1_7)) ? (var_1_54 == ((unsigned char) (last_1_var_1_54 && var_1_13))) : 1)) && (var_1_20 ? (var_1_56 == ((unsigned short int) ((var_1_48 + ((((var_1_7) > (var_1_49)) ? (var_1_7) : (var_1_49)))) + (var_1_41 + last_1_var_1_56)))) : (var_1_56 == ((unsigned short int) (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) - var_1_40))))) && (var_1_10 ? (var_1_59 == ((float) (var_1_60 - var_1_61))) : 1)) && (var_1_42 ? (var_1_62 == ((double) (var_1_61 - (var_1_63 + var_1_64)))) : 1)) && (((16 != (~ var_1_49)) || (var_1_17 == var_1_63)) ? (var_1_65 == ((double) (((((var_1_60 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) > (var_1_63)) ? ((var_1_60 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (var_1_63))))) : (var_1_65 == ((double) ((((var_1_63 + 128.4) < 0 ) ? -(var_1_63 + 128.4) : (var_1_63 + 128.4))))))) && (((- (var_1_45 / var_1_38)) >= var_1_8) ? (var_1_66 == ((unsigned long int) ((3456630165u - var_1_56) - var_1_40))) : (var_1_66 == ((unsigned long int) (32u + var_1_38))))) && ((var_1_39 == (var_1_2 | var_1_73)) ? (((31.25 + (var_1_61 + var_1_53)) != var_1_16) ? (var_1_67 == ((double) var_1_36)) : (var_1_67 == ((double) var_1_64))) : ((var_1_58 == var_1_49) ? (var_1_67 == ((double) ((((4.2) < (127.5)) ? (4.2) : (127.5))))) : ((((var_1_35 + var_1_61) / ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68)))) < ((((var_1_34) > (((((var_1_65) > (var_1_17)) ? (var_1_65) : (var_1_17))))) ? (var_1_34) : (((((var_1_65) > (var_1_17)) ? (var_1_65) : (var_1_17))))))) ? (var_1_67 == ((double) var_1_36)) : (var_1_67 == ((double) ((((var_1_64) < (((((500.4) < (var_1_36)) ? (500.4) : (var_1_36))))) ? (var_1_64) : (((((500.4) < (var_1_36)) ? (500.4) : (var_1_36)))))))))))) && ((var_1_22 || var_1_52) ? ((var_1_48 <= var_1_2) ? (var_1_69 == ((signed char) ((((((((var_1_38) < (var_1_48)) ? (var_1_38) : (var_1_48)))) > (var_1_39)) ? (((((var_1_38) < (var_1_48)) ? (var_1_38) : (var_1_48)))) : (var_1_39))))) : ((var_1_18 < 10.5) ? (var_1_69 == ((signed char) var_1_48)) : (var_1_69 == ((signed char) (var_1_49 + var_1_50))))) : ((! (var_1_42 && (var_1_18 > var_1_64))) ? ((var_1_1 == (var_1_48 | var_1_9)) ? ((var_1_73 < var_1_8) ? (var_1_69 == ((signed char) (var_1_47 - var_1_45))) : 1) : (var_1_69 == ((signed char) ((((var_1_45) > (var_1_49)) ? (var_1_45) : (var_1_49)))))) : ((var_1_16 >= var_1_53) ? (var_1_69 == ((signed char) var_1_49)) : (var_1_69 == ((signed char) var_1_39)))))) && (var_1_71 == ((unsigned char) var_1_72))) && (var_1_43 ? (var_1_73 == ((unsigned long int) var_1_38)) : 1)) && (((var_1_31 + var_1_56) > (((((var_1_41) < (var_1_66)) ? (var_1_41) : (var_1_66))) * var_1_58)) ? ((((var_1_75 - var_1_49) - var_1_51) <= 10u) ? (var_1_74 == ((signed char) var_1_48)) : (var_1_74 == ((signed char) var_1_50))) : 1)
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
