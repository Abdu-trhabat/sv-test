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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -16;
signed short int var_1_9 = 64;
signed short int var_1_10 = -100;
signed short int var_1_11 = -8;
signed short int var_1_12 = 256;
signed short int var_1_13 = 0;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 64;
double var_1_17 = 255.2;
double var_1_18 = 0.09999999999999998;
double var_1_19 = 10.5;
double var_1_20 = 100000000000000.8;
double var_1_21 = 0.0;
double var_1_22 = 31.5;
double var_1_23 = 5.75;
signed long int var_1_24 = -16;
double var_1_25 = 63.4;
double var_1_26 = 1000000000.25;
signed char var_1_27 = -50;
signed char var_1_28 = 25;
signed char var_1_29 = 5;
signed char var_1_30 = 50;
signed long int var_1_31 = -5;
unsigned short int var_1_32 = 54054;
signed char var_1_33 = -8;
signed char var_1_34 = -64;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed short int var_1_37 = -128;
signed short int var_1_38 = 16;
signed char var_1_39 = 8;
unsigned short int var_1_40 = 10;
unsigned short int var_1_41 = 27989;
unsigned short int var_1_42 = 1;
unsigned short int var_1_43 = 59996;
float var_1_44 = 1000.5;
unsigned long int var_1_45 = 2;
unsigned long int var_1_46 = 4007953074;
unsigned long int var_1_47 = 1;
signed short int var_1_48 = -16;
signed short int var_1_50 = -4;
unsigned short int var_1_51 = 8;
signed short int var_1_52 = 1;
float var_1_53 = 63.5;
unsigned short int var_1_56 = 128;
signed char var_1_57 = -128;
signed char var_1_58 = -2;
signed char var_1_59 = -2;
unsigned char var_1_60 = 1;
unsigned long int var_1_61 = 64;
unsigned char var_1_62 = 1;
signed char var_1_63 = -25;
signed char var_1_64 = 64;
signed char var_1_65 = 32;
signed char var_1_66 = 1;
unsigned short int var_1_67 = 8;
unsigned short int var_1_68 = 1;
unsigned char var_1_69 = 1;
double var_1_70 = 63.2;
signed char var_1_71 = -1;
signed long int var_1_72 = -25;
signed long int var_1_73 = 1895320894;
float var_1_74 = 64.25;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 0;
unsigned long int var_1_77 = 10;
unsigned long int var_1_78 = 3528401511;
signed char var_1_79 = 16;
signed short int var_1_80 = 200;
float var_1_81 = 49.75;
float var_1_82 = 0.0;
float var_1_83 = 0.09999999999999998;
unsigned char var_1_84 = 10;
signed char var_1_85 = -1;
signed long int var_1_86 = 0;
unsigned char var_1_87 = 25;
float var_1_88 = 63.875;
signed short int var_1_89 = 128;
double var_1_90 = 7.2;
signed long int var_1_91 = -25;
unsigned long int var_1_92 = 8;
signed long int var_1_93 = 1000000000;
unsigned short int var_1_94 = 128;
double var_1_95 = 4.9;
signed short int var_1_96 = 5;
unsigned long int var_1_97 = 256;
unsigned char var_1_98 = 0;
unsigned char last_1_var_1_1 = 0;
unsigned short int last_1_var_1_56 = 128;
unsigned short int last_1_var_1_68 = 1;
signed long int last_1_var_1_72 = -25;
unsigned char last_1_var_1_75 = 0;
signed long int last_1_var_1_91 = -25;
unsigned long int last_1_var_1_92 = 8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_33 = (last_1_var_1_92 / var_1_64) == var_1_66;
 if (var_1_4 || stepLocal_33) {
  var_1_98 = (! ((last_1_var_1_68 > last_1_var_1_91) || var_1_36));
 } else {
  if (last_1_var_1_75) {
   var_1_98 = var_1_6;
  } else {
   var_1_98 = var_1_36;
  }
 }
 if (var_1_98) {
  var_1_91 = var_1_65;
 }
 var_1_35 = (! (last_1_var_1_1 || var_1_36));
 if (var_1_35) {
  var_1_88 = var_1_83;
 } else {
  var_1_88 = var_1_22;
 }
 if (var_1_98) {
  var_1_94 = var_1_64;
 } else {
  var_1_94 = var_1_16;
 }
 if (((128.25 + var_1_21) / var_1_25) >= ((var_1_19 + var_1_18) / var_1_26)) {
  if (var_1_4) {
   if (var_1_7) {
    if (var_1_22 > var_1_20) {
     var_1_24 = var_1_16;
    } else {
     var_1_24 = var_1_15;
    }
   } else {
    var_1_24 = var_1_12;
   }
  } else {
   var_1_24 = var_1_9;
  }
 }
 signed short int stepLocal_9 = var_1_13;
 if (stepLocal_9 == var_1_16) {
  if (var_1_6) {
   var_1_33 = (((((var_1_28 - var_1_30)) < (var_1_29)) ? ((var_1_28 - var_1_30)) : (var_1_29)));
  }
 }
 signed long int stepLocal_13 = 64;
 signed long int stepLocal_12 = (var_1_15 % 32) + var_1_13;
 if (((((1) < (var_1_28)) ? (1) : (var_1_28))) < stepLocal_12) {
  var_1_40 = ((var_1_41 - (var_1_15 + 5)) + var_1_13);
 } else {
  if (((var_1_12 + var_1_29) + var_1_28) >= stepLocal_13) {
   var_1_40 = (var_1_38 + (((((((var_1_13) > (var_1_42)) ? (var_1_13) : (var_1_42))) < 0 ) ? -((((var_1_13) > (var_1_42)) ? (var_1_13) : (var_1_42))) : ((((var_1_13) > (var_1_42)) ? (var_1_13) : (var_1_42))))));
  } else {
   var_1_40 = (var_1_43 - var_1_41);
  }
 }
 var_1_44 = ((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)));
 if (var_1_21 != (var_1_19 - ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))) {
  var_1_51 = ((((var_1_43) < (var_1_13)) ? (var_1_43) : (var_1_13)));
 } else {
  var_1_51 = ((((var_1_42) > (((((var_1_38) < (var_1_30)) ? (var_1_38) : (var_1_30))))) ? (var_1_42) : (((((var_1_38) < (var_1_30)) ? (var_1_38) : (var_1_30))))));
 }
 if (var_1_94 <= last_1_var_1_56) {
  var_1_56 = (var_1_38 + (var_1_41 - var_1_16));
 } else {
  var_1_56 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
 }
 var_1_61 = (var_1_46 - var_1_32);
 signed long int stepLocal_29 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) << var_1_16;
 if (stepLocal_29 != var_1_28) {
  var_1_67 = (var_1_43 - (((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30))) + var_1_65));
 } else {
  var_1_67 = var_1_65;
 }
 if (var_1_16 > var_1_41) {
  var_1_71 = ((var_1_58 + var_1_66) + ((((((((25) < (var_1_29)) ? (25) : (var_1_29)))) > ((var_1_59 + -4))) ? (((((25) < (var_1_29)) ? (25) : (var_1_29)))) : ((var_1_59 + -4)))));
 }
 var_1_74 = (var_1_23 - (var_1_22 + var_1_19));
 if (var_1_5) {
  var_1_79 = (((((((((var_1_64) > (var_1_30)) ? (var_1_64) : (var_1_30))) - (var_1_28 + var_1_66))) < (var_1_59)) ? ((((((var_1_64) > (var_1_30)) ? (var_1_64) : (var_1_30))) - (var_1_28 + var_1_66))) : (var_1_59)));
 } else {
  var_1_79 = (((((var_1_58 + var_1_28)) < ((((((var_1_30 + var_1_65)) < ((var_1_66 + var_1_59))) ? ((var_1_30 + var_1_65)) : ((var_1_66 + var_1_59)))))) ? ((var_1_58 + var_1_28)) : ((((((var_1_30 + var_1_65)) < ((var_1_66 + var_1_59))) ? ((var_1_30 + var_1_65)) : ((var_1_66 + var_1_59)))))));
 }
 var_1_84 = var_1_16;
 if (var_1_6) {
  var_1_85 = var_1_30;
 } else {
  var_1_85 = var_1_66;
 }
 var_1_86 = var_1_64;
 if (var_1_4) {
  var_1_87 = 10;
 }
 var_1_89 = var_1_66;
 var_1_90 = var_1_18;
 var_1_92 = var_1_29;
 var_1_93 = var_1_40;
 var_1_95 = var_1_20;
 if (var_1_20 > var_1_21) {
  if (var_1_88 >= var_1_25) {
   var_1_72 = (((((var_1_13) < (var_1_16)) ? (var_1_13) : (var_1_16))) - (var_1_73 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))));
  } else {
   var_1_72 = var_1_41;
  }
 } else {
  var_1_72 = ((((var_1_38) < (((var_1_73 - var_1_65) - ((((last_1_var_1_72) < 0 ) ? -(last_1_var_1_72) : (last_1_var_1_72)))))) ? (var_1_38) : (((var_1_73 - var_1_65) - ((((last_1_var_1_72) < 0 ) ? -(last_1_var_1_72) : (last_1_var_1_72)))))));
 }
 unsigned short int stepLocal_26 = var_1_94;
 if (var_1_72 != stepLocal_26) {
  var_1_62 = ((var_1_92 <= var_1_30) || var_1_36);
 } else {
  var_1_62 = (! var_1_5);
 }
 if (var_1_13 < ((var_1_41 - 10) - var_1_29)) {
  if ((((((var_1_59) > (var_1_10)) ? (var_1_59) : (var_1_10))) / var_1_65) < var_1_72) {
   if (var_1_61 >= var_1_40) {
    var_1_75 = (var_1_36 && var_1_76);
   } else {
    var_1_75 = var_1_76;
   }
  } else {
   var_1_75 = (var_1_5 || var_1_6);
  }
 } else {
  var_1_75 = ((var_1_32 > var_1_29) && ((var_1_35 || var_1_36) && var_1_4));
 }
 unsigned short int stepLocal_10 = var_1_32;
 if (var_1_87 > stepLocal_10) {
  var_1_34 = ((((32) > (((((-10) > (var_1_28)) ? (-10) : (var_1_28))))) ? (32) : (((((-10) > (var_1_28)) ? (-10) : (var_1_28))))));
 } else {
  if ((var_1_90 * ((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26)))) > var_1_22) {
   var_1_34 = var_1_29;
  }
 }
 signed short int stepLocal_11 = var_1_13;
 if (stepLocal_11 > (((((-5 + var_1_12)) > (var_1_40)) ? ((-5 + var_1_12)) : (var_1_40)))) {
  var_1_39 = ((((((var_1_28) > (10)) ? (var_1_28) : (10))) + var_1_30) - var_1_29);
 } else {
  var_1_39 = (var_1_28 - var_1_29);
 }
 if ((var_1_15 + (var_1_12 / var_1_41)) >= var_1_92) {
  if (var_1_6) {
   if ((~ (var_1_43 - 5)) == var_1_91) {
    var_1_47 = var_1_16;
   } else {
    var_1_47 = ((((var_1_30) > (var_1_15)) ? (var_1_30) : (var_1_15)));
   }
  }
 } else {
  var_1_47 = ((((var_1_41) > (((((var_1_15 + 64u) < 0 ) ? -(var_1_15 + 64u) : (var_1_15 + 64u))))) ? (var_1_41) : (((((var_1_15 + 64u) < 0 ) ? -(var_1_15 + 64u) : (var_1_15 + 64u))))));
 }
 if (var_1_21 >= var_1_95) {
  var_1_48 = ((((var_1_9) < (var_1_12)) ? (var_1_9) : (var_1_12)));
 } else {
  var_1_48 = (var_1_16 + (-200 + var_1_79));
 }
 if (0 > ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) {
  var_1_68 = ((((var_1_29) > (var_1_41)) ? (var_1_29) : (var_1_41)));
 } else {
  var_1_68 = (((((((var_1_92) < ((var_1_43 - var_1_13))) ? (var_1_92) : ((var_1_43 - var_1_13)))) < 0 ) ? -((((var_1_92) < ((var_1_43 - var_1_13))) ? (var_1_92) : ((var_1_43 - var_1_13)))) : ((((var_1_92) < ((var_1_43 - var_1_13))) ? (var_1_92) : ((var_1_43 - var_1_13))))));
 }
 if (var_1_90 > (- (var_1_21 - var_1_22))) {
  var_1_69 = var_1_29;
 }
 unsigned char stepLocal_31 = var_1_92 == var_1_32;
 signed char stepLocal_30 = var_1_64;
 if ((var_1_95 > var_1_19) && stepLocal_31) {
  var_1_70 = (var_1_21 - ((((((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19)))) > ((var_1_22 + var_1_23))) ? (((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19)))) : ((var_1_22 + var_1_23)))));
 } else {
  if (stepLocal_30 < var_1_41) {
   var_1_70 = ((((var_1_19) < (var_1_23)) ? (var_1_19) : (var_1_23)));
  } else {
   var_1_70 = (((((var_1_21 - var_1_23)) > (var_1_20)) ? ((var_1_21 - var_1_23)) : (var_1_20)));
  }
 }
 signed long int stepLocal_32 = (((var_1_65 << var_1_59) < 0 ) ? -(var_1_65 << var_1_59) : (var_1_65 << var_1_59));
 if (var_1_26 > var_1_44) {
  if (stepLocal_32 > var_1_42) {
   var_1_77 = ((((var_1_47) < ((var_1_65 + var_1_64))) ? (var_1_47) : ((var_1_65 + var_1_64))));
  } else {
   var_1_77 = ((var_1_78 - var_1_66) - var_1_73);
  }
 }
 if (! var_1_5) {
  if (var_1_62 || (var_1_64 >= var_1_89)) {
   if (-8 == ((-4 + var_1_78) / var_1_65)) {
    if (var_1_62 || ((var_1_74 * 32.6f) == var_1_21)) {
     var_1_81 = ((((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))) + (var_1_82 - var_1_83)) - var_1_19);
    } else {
     var_1_81 = var_1_21;
    }
   } else {
    var_1_81 = var_1_20;
   }
  }
 }
 if (var_1_75) {
  var_1_96 = var_1_15;
 } else {
  var_1_96 = var_1_47;
 }
 if (var_1_75) {
  var_1_97 = var_1_38;
 } else {
  var_1_97 = var_1_30;
 }
 if (! var_1_62) {
  var_1_60 = (! var_1_36);
 } else {
  var_1_60 = (var_1_36 && var_1_4);
 }
 unsigned char stepLocal_5 = var_1_5;
 signed short int stepLocal_4 = var_1_12;
 unsigned char stepLocal_3 = var_1_16;
 if (stepLocal_3 < var_1_10) {
  if (var_1_98 || stepLocal_5) {
   var_1_17 = var_1_18;
  } else {
   if (var_1_98) {
    var_1_17 = ((((((var_1_19 + var_1_20) - (var_1_21 - var_1_22))) < (var_1_18)) ? (((var_1_19 + var_1_20) - (var_1_21 - var_1_22))) : (var_1_18)));
   }
  }
 } else {
  if (! (var_1_10 != var_1_97)) {
   if (stepLocal_4 > var_1_9) {
    var_1_17 = ((((((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21)))) < ((var_1_20 - var_1_22))) ? (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21)))) : ((var_1_20 - var_1_22))));
   } else {
    var_1_17 = (var_1_20 - (var_1_21 - (var_1_23 + 9.99999995E7)));
   }
  } else {
   var_1_17 = (var_1_19 + (var_1_20 - var_1_23));
  }
 }
 signed long int stepLocal_8 = var_1_72;
 unsigned char stepLocal_7 = var_1_75;
 signed long int stepLocal_6 = var_1_32 - (var_1_67 + var_1_28);
 if (stepLocal_6 >= var_1_96) {
  if (var_1_4 && stepLocal_7) {
   var_1_31 = ((var_1_12 + var_1_29) + var_1_16);
  } else {
   if ((var_1_28 + var_1_67) > stepLocal_8) {
    var_1_31 = (((((25) > (8)) ? (25) : (8))) - var_1_67);
   } else {
    var_1_31 = ((((var_1_16) < (var_1_67)) ? (var_1_16) : (var_1_67)));
   }
  }
 } else {
  var_1_31 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
 }
 signed long int stepLocal_17 = ((((var_1_11 + var_1_68)) > (var_1_28)) ? ((var_1_11 + var_1_68)) : (var_1_28));
 if (stepLocal_17 == var_1_41) {
  var_1_52 = var_1_29;
 }
 unsigned long int stepLocal_25 = var_1_92;
 unsigned short int stepLocal_24 = var_1_56;
 if (var_1_29 == stepLocal_25) {
  if (stepLocal_24 >= (64 | var_1_97)) {
   var_1_57 = ((var_1_58 + var_1_59) + (var_1_28 - var_1_30));
  }
 } else {
  if (var_1_20 < var_1_17) {
   var_1_57 = (var_1_58 + var_1_28);
  } else {
   var_1_57 = var_1_59;
  }
 }
 unsigned char stepLocal_28 = ! (var_1_25 != var_1_17);
 unsigned char stepLocal_27 = var_1_62;
 if ((var_1_18 + var_1_23) < (- ((((var_1_20) > (var_1_88)) ? (var_1_20) : (var_1_88))))) {
  if ((! (var_1_94 != var_1_43)) && stepLocal_27) {
   var_1_63 = (var_1_30 + var_1_28);
  } else {
   var_1_63 = (var_1_30 - (var_1_64 - (var_1_65 - var_1_66)));
  }
 } else {
  if (var_1_62) {
   var_1_63 = (var_1_65 - var_1_29);
  } else {
   if ((! var_1_4) && stepLocal_28) {
    var_1_63 = var_1_58;
   } else {
    var_1_63 = var_1_64;
   }
  }
 }
 unsigned char stepLocal_0 = var_1_60;
 if (stepLocal_0 || var_1_35) {
  var_1_1 = (var_1_35 && var_1_4);
 } else {
  var_1_1 = (var_1_4 && ((var_1_5 || var_1_6) || var_1_7));
 }
 if (var_1_1) {
  var_1_8 = (((((-10000 + var_1_9)) < (((var_1_10 + 64) + var_1_11))) ? ((-10000 + var_1_9)) : (((var_1_10 + 64) + var_1_11))));
 } else {
  var_1_8 = (((((16) < (var_1_12)) ? (16) : (var_1_12))) - var_1_13);
 }
 signed short int stepLocal_2 = var_1_12;
 signed long int stepLocal_1 = var_1_13 - var_1_15;
 if (stepLocal_2 > var_1_9) {
  if (! (! (var_1_7 || var_1_1))) {
   var_1_14 = var_1_15;
  }
 } else {
  if (var_1_67 > stepLocal_1) {
   var_1_14 = ((((var_1_16) > (10)) ? (var_1_16) : (10)));
  }
 }
 if (var_1_1) {
  var_1_27 = ((var_1_28 + var_1_29) - (var_1_30 + (50 - 5)));
 }
 signed long int stepLocal_14 = (var_1_52 / var_1_32) + var_1_16;
 if (stepLocal_14 < var_1_13) {
  var_1_45 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 } else {
  if (var_1_21 > (var_1_19 - var_1_20)) {
   var_1_45 = (var_1_46 - var_1_15);
  } else {
   var_1_45 = 200u;
  }
 }
 signed short int stepLocal_16 = var_1_52;
 unsigned char stepLocal_15 = (~ var_1_93) >= (var_1_12 - var_1_32);
 if (var_1_7) {
  if (stepLocal_15 && var_1_4) {
   if (var_1_16 < stepLocal_16) {
    if (var_1_70 >= var_1_90) {
     var_1_50 = (((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11))) + (var_1_30 - var_1_15));
    }
   } else {
    var_1_50 = var_1_12;
   }
  }
 } else {
  var_1_50 = ((var_1_29 + var_1_30) - var_1_38);
 }
 signed short int stepLocal_23 = var_1_10;
 unsigned char stepLocal_22 = var_1_7;
 unsigned char stepLocal_21 = 0 <= var_1_40;
 unsigned char stepLocal_20 = var_1_26 > (- var_1_17);
 unsigned short int stepLocal_19 = var_1_42;
 signed long int stepLocal_18 = var_1_10 + var_1_96;
 if (stepLocal_22 && (var_1_40 < var_1_51)) {
  if (stepLocal_23 == var_1_11) {
   if (var_1_90 > ((5.5 - var_1_22) + 1.00000000088E9)) {
    var_1_53 = (var_1_19 + var_1_23);
   } else {
    if (stepLocal_18 == var_1_32) {
     if (((((var_1_43) > (var_1_47)) ? (var_1_43) : (var_1_47))) > stepLocal_19) {
      var_1_53 = (var_1_22 + 8.5f);
     } else {
      var_1_53 = ((((((((var_1_21 - var_1_22)) < (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20))) < 0 ) ? -(((((var_1_21 - var_1_22)) < (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20))) : (((((var_1_21 - var_1_22)) < (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20)))));
     }
    } else {
     if ((var_1_44 * var_1_20) >= var_1_90) {
      var_1_53 = var_1_23;
     }
    }
   }
  } else {
   var_1_53 = (var_1_22 + var_1_23);
  }
 } else {
  if (var_1_36 || stepLocal_20) {
   if (stepLocal_21 && (! (var_1_45 <= var_1_47))) {
    var_1_53 = var_1_22;
   } else {
    var_1_53 = ((((var_1_21) < ((((((var_1_19 - var_1_22)) < (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18))))) ? ((var_1_19 - var_1_22)) : (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18)))))))) ? (var_1_21) : ((((((var_1_19 - var_1_22)) < (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18))))) ? ((var_1_19 - var_1_22)) : (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18)))))))));
   }
  }
 }
 if (var_1_1) {
  var_1_80 = var_1_68;
 }
 if (((((var_1_23) > ((var_1_22 + var_1_25))) ? (var_1_23) : ((var_1_22 + var_1_25)))) > var_1_19) {
  if (var_1_80 > var_1_91) {
   var_1_37 = (var_1_15 - (((((var_1_29) > (var_1_16)) ? (var_1_29) : (var_1_16))) + var_1_30));
  } else {
   var_1_37 = (var_1_13 - var_1_38);
  }
 } else {
  if (var_1_18 == var_1_25) {
   var_1_37 = ((((var_1_16) > (var_1_77)) ? (var_1_16) : (var_1_77)));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -8191);
 assume_abort_if_not(var_1_10 <= 8192);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -16383);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 4611686.018427383000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65535);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 32766);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 32767);
 assume_abort_if_not(var_1_43 <= 65534);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 2147483647);
 assume_abort_if_not(var_1_46 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -31);
 assume_abort_if_not(var_1_58 <= 32);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -31);
 assume_abort_if_not(var_1_59 <= 31);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 63);
 assume_abort_if_not(var_1_64 <= 126);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 31);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 31);
 var_1_73 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_73 >= 1073741823);
 assume_abort_if_not(var_1_73 <= 2147483646);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 1);
 assume_abort_if_not(var_1_76 <= 1);
 var_1_78 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_78 >= 3221225470);
 assume_abort_if_not(var_1_78 <= 4294967294);
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= 2305843.009213691400e+12F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427383000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 2305843.009213691400e+12F && var_1_83 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_92 = var_1_92;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_60 || var_1_35) ? (var_1_1 == ((unsigned char) (var_1_35 && var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 && ((var_1_5 || var_1_6) || var_1_7))))) && (var_1_1 ? (var_1_8 == ((signed short int) (((((-10000 + var_1_9)) < (((var_1_10 + 64) + var_1_11))) ? ((-10000 + var_1_9)) : (((var_1_10 + 64) + var_1_11)))))) : (var_1_8 == ((signed short int) (((((16) < (var_1_12)) ? (16) : (var_1_12))) - var_1_13))))) && ((var_1_12 > var_1_9) ? ((! (! (var_1_7 || var_1_1))) ? (var_1_14 == ((unsigned char) var_1_15)) : 1) : ((var_1_67 > (var_1_13 - var_1_15)) ? (var_1_14 == ((unsigned char) ((((var_1_16) > (10)) ? (var_1_16) : (10))))) : 1))) && ((var_1_16 < var_1_10) ? ((var_1_98 || var_1_5) ? (var_1_17 == ((double) var_1_18)) : (var_1_98 ? (var_1_17 == ((double) ((((((var_1_19 + var_1_20) - (var_1_21 - var_1_22))) < (var_1_18)) ? (((var_1_19 + var_1_20) - (var_1_21 - var_1_22))) : (var_1_18))))) : 1)) : ((! (var_1_10 != var_1_97)) ? ((var_1_12 > var_1_9) ? (var_1_17 == ((double) ((((((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21)))) < ((var_1_20 - var_1_22))) ? (((((var_1_19) < (var_1_21)) ? (var_1_19) : (var_1_21)))) : ((var_1_20 - var_1_22)))))) : (var_1_17 == ((double) (var_1_20 - (var_1_21 - (var_1_23 + 9.99999995E7)))))) : (var_1_17 == ((double) (var_1_19 + (var_1_20 - var_1_23))))))) && ((((128.25 + var_1_21) / var_1_25) >= ((var_1_19 + var_1_18) / var_1_26)) ? (var_1_4 ? (var_1_7 ? ((var_1_22 > var_1_20) ? (var_1_24 == ((signed long int) var_1_16)) : (var_1_24 == ((signed long int) var_1_15))) : (var_1_24 == ((signed long int) var_1_12))) : (var_1_24 == ((signed long int) var_1_9))) : 1)) && (var_1_1 ? (var_1_27 == ((signed char) ((var_1_28 + var_1_29) - (var_1_30 + (50 - 5))))) : 1)) && (((var_1_32 - (var_1_67 + var_1_28)) >= var_1_96) ? ((var_1_4 && var_1_75) ? (var_1_31 == ((signed long int) ((var_1_12 + var_1_29) + var_1_16))) : (((var_1_28 + var_1_67) > var_1_72) ? (var_1_31 == ((signed long int) (((((25) > (8)) ? (25) : (8))) - var_1_67))) : (var_1_31 == ((signed long int) ((((var_1_16) < (var_1_67)) ? (var_1_16) : (var_1_67))))))) : (var_1_31 == ((signed long int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) && ((var_1_13 == var_1_16) ? (var_1_6 ? (var_1_33 == ((signed char) (((((var_1_28 - var_1_30)) < (var_1_29)) ? ((var_1_28 - var_1_30)) : (var_1_29))))) : 1) : 1)) && ((var_1_87 > var_1_32) ? (var_1_34 == ((signed char) ((((32) > (((((-10) > (var_1_28)) ? (-10) : (var_1_28))))) ? (32) : (((((-10) > (var_1_28)) ? (-10) : (var_1_28)))))))) : (((var_1_90 * ((((var_1_23) < (var_1_26)) ? (var_1_23) : (var_1_26)))) > var_1_22) ? (var_1_34 == ((signed char) var_1_29)) : 1))) && (var_1_35 == ((unsigned char) (! (last_1_var_1_1 || var_1_36))))) && ((((((var_1_23) > ((var_1_22 + var_1_25))) ? (var_1_23) : ((var_1_22 + var_1_25)))) > var_1_19) ? ((var_1_80 > var_1_91) ? (var_1_37 == ((signed short int) (var_1_15 - (((((var_1_29) > (var_1_16)) ? (var_1_29) : (var_1_16))) + var_1_30)))) : (var_1_37 == ((signed short int) (var_1_13 - var_1_38)))) : ((var_1_18 == var_1_25) ? (var_1_37 == ((signed short int) ((((var_1_16) > (var_1_77)) ? (var_1_16) : (var_1_77))))) : 1))) && ((var_1_13 > (((((-5 + var_1_12)) > (var_1_40)) ? ((-5 + var_1_12)) : (var_1_40)))) ? (var_1_39 == ((signed char) ((((((var_1_28) > (10)) ? (var_1_28) : (10))) + var_1_30) - var_1_29))) : (var_1_39 == ((signed char) (var_1_28 - var_1_29))))) && ((((((1) < (var_1_28)) ? (1) : (var_1_28))) < ((var_1_15 % 32) + var_1_13)) ? (var_1_40 == ((unsigned short int) ((var_1_41 - (var_1_15 + 5)) + var_1_13))) : ((((var_1_12 + var_1_29) + var_1_28) >= 64) ? (var_1_40 == ((unsigned short int) (var_1_38 + (((((((var_1_13) > (var_1_42)) ? (var_1_13) : (var_1_42))) < 0 ) ? -((((var_1_13) > (var_1_42)) ? (var_1_13) : (var_1_42))) : ((((var_1_13) > (var_1_42)) ? (var_1_13) : (var_1_42)))))))) : (var_1_40 == ((unsigned short int) (var_1_43 - var_1_41)))))) && (var_1_44 == ((float) ((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)))))) && ((((var_1_52 / var_1_32) + var_1_16) < var_1_13) ? (var_1_45 == ((unsigned long int) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : ((var_1_21 > (var_1_19 - var_1_20)) ? (var_1_45 == ((unsigned long int) (var_1_46 - var_1_15))) : (var_1_45 == ((unsigned long int) 200u))))) && (((var_1_15 + (var_1_12 / var_1_41)) >= var_1_92) ? (var_1_6 ? (((~ (var_1_43 - 5)) == var_1_91) ? (var_1_47 == ((unsigned long int) var_1_16)) : (var_1_47 == ((unsigned long int) ((((var_1_30) > (var_1_15)) ? (var_1_30) : (var_1_15)))))) : 1) : (var_1_47 == ((unsigned long int) ((((var_1_41) > (((((var_1_15 + 64u) < 0 ) ? -(var_1_15 + 64u) : (var_1_15 + 64u))))) ? (var_1_41) : (((((var_1_15 + 64u) < 0 ) ? -(var_1_15 + 64u) : (var_1_15 + 64u)))))))))) && ((var_1_21 >= var_1_95) ? (var_1_48 == ((signed short int) ((((var_1_9) < (var_1_12)) ? (var_1_9) : (var_1_12))))) : (var_1_48 == ((signed short int) (var_1_16 + (-200 + var_1_79)))))) && (var_1_7 ? ((((~ var_1_93) >= (var_1_12 - var_1_32)) && var_1_4) ? ((var_1_16 < var_1_52) ? ((var_1_70 >= var_1_90) ? (var_1_50 == ((signed short int) (((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11))) + (var_1_30 - var_1_15)))) : 1) : (var_1_50 == ((signed short int) var_1_12))) : 1) : (var_1_50 == ((signed short int) ((var_1_29 + var_1_30) - var_1_38))))) && ((var_1_21 != (var_1_19 - ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))) ? (var_1_51 == ((unsigned short int) ((((var_1_43) < (var_1_13)) ? (var_1_43) : (var_1_13))))) : (var_1_51 == ((unsigned short int) ((((var_1_42) > (((((var_1_38) < (var_1_30)) ? (var_1_38) : (var_1_30))))) ? (var_1_42) : (((((var_1_38) < (var_1_30)) ? (var_1_38) : (var_1_30)))))))))) && (((((((var_1_11 + var_1_68)) > (var_1_28)) ? ((var_1_11 + var_1_68)) : (var_1_28))) == var_1_41) ? (var_1_52 == ((signed short int) var_1_29)) : 1)) && ((var_1_7 && (var_1_40 < var_1_51)) ? ((var_1_10 == var_1_11) ? ((var_1_90 > ((5.5 - var_1_22) + 1.00000000088E9)) ? (var_1_53 == ((float) (var_1_19 + var_1_23))) : (((var_1_10 + var_1_96) == var_1_32) ? ((((((var_1_43) > (var_1_47)) ? (var_1_43) : (var_1_47))) > var_1_42) ? (var_1_53 == ((float) (var_1_22 + 8.5f))) : (var_1_53 == ((float) ((((((((var_1_21 - var_1_22)) < (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20))) < 0 ) ? -(((((var_1_21 - var_1_22)) < (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20))) : (((((var_1_21 - var_1_22)) < (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20)))))))) : (((var_1_44 * var_1_20) >= var_1_90) ? (var_1_53 == ((float) var_1_23)) : 1))) : (var_1_53 == ((float) (var_1_22 + var_1_23)))) : ((var_1_36 || (var_1_26 > (- var_1_17))) ? (((0 <= var_1_40) && (! (var_1_45 <= var_1_47))) ? (var_1_53 == ((float) var_1_22)) : (var_1_53 == ((float) ((((var_1_21) < ((((((var_1_19 - var_1_22)) < (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18))))) ? ((var_1_19 - var_1_22)) : (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18)))))))) ? (var_1_21) : ((((((var_1_19 - var_1_22)) < (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18))))) ? ((var_1_19 - var_1_22)) : (((((var_1_23) > (var_1_18)) ? (var_1_23) : (var_1_18)))))))))))) : 1))) && ((var_1_94 <= last_1_var_1_56) ? (var_1_56 == ((unsigned short int) (var_1_38 + (var_1_41 - var_1_16)))) : (var_1_56 == ((unsigned short int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) && ((var_1_29 == var_1_92) ? ((var_1_56 >= (64 | var_1_97)) ? (var_1_57 == ((signed char) ((var_1_58 + var_1_59) + (var_1_28 - var_1_30)))) : 1) : ((var_1_20 < var_1_17) ? (var_1_57 == ((signed char) (var_1_58 + var_1_28))) : (var_1_57 == ((signed char) var_1_59))))) && ((! var_1_62) ? (var_1_60 == ((unsigned char) (! var_1_36))) : (var_1_60 == ((unsigned char) (var_1_36 && var_1_4))))) && (var_1_61 == ((unsigned long int) (var_1_46 - var_1_32)))) && ((var_1_72 != var_1_94) ? (var_1_62 == ((unsigned char) ((var_1_92 <= var_1_30) || var_1_36))) : (var_1_62 == ((unsigned char) (! var_1_5))))) && (((var_1_18 + var_1_23) < (- ((((var_1_20) > (var_1_88)) ? (var_1_20) : (var_1_88))))) ? (((! (var_1_94 != var_1_43)) && var_1_62) ? (var_1_63 == ((signed char) (var_1_30 + var_1_28))) : (var_1_63 == ((signed char) (var_1_30 - (var_1_64 - (var_1_65 - var_1_66)))))) : (var_1_62 ? (var_1_63 == ((signed char) (var_1_65 - var_1_29))) : (((! var_1_4) && (! (var_1_25 != var_1_17))) ? (var_1_63 == ((signed char) var_1_58)) : (var_1_63 == ((signed char) var_1_64)))))) && (((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) << var_1_16) != var_1_28) ? (var_1_67 == ((unsigned short int) (var_1_43 - (((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30))) + var_1_65)))) : (var_1_67 == ((unsigned short int) var_1_65)))) && ((0 > ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) ? (var_1_68 == ((unsigned short int) ((((var_1_29) > (var_1_41)) ? (var_1_29) : (var_1_41))))) : (var_1_68 == ((unsigned short int) (((((((var_1_92) < ((var_1_43 - var_1_13))) ? (var_1_92) : ((var_1_43 - var_1_13)))) < 0 ) ? -((((var_1_92) < ((var_1_43 - var_1_13))) ? (var_1_92) : ((var_1_43 - var_1_13)))) : ((((var_1_92) < ((var_1_43 - var_1_13))) ? (var_1_92) : ((var_1_43 - var_1_13)))))))))) && ((var_1_90 > (- (var_1_21 - var_1_22))) ? (var_1_69 == ((unsigned char) var_1_29)) : 1)) && (((var_1_95 > var_1_19) && (var_1_92 == var_1_32)) ? (var_1_70 == ((double) (var_1_21 - ((((((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19)))) > ((var_1_22 + var_1_23))) ? (((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19)))) : ((var_1_22 + var_1_23))))))) : ((var_1_64 < var_1_41) ? (var_1_70 == ((double) ((((var_1_19) < (var_1_23)) ? (var_1_19) : (var_1_23))))) : (var_1_70 == ((double) (((((var_1_21 - var_1_23)) > (var_1_20)) ? ((var_1_21 - var_1_23)) : (var_1_20)))))))) && ((var_1_16 > var_1_41) ? (var_1_71 == ((signed char) ((var_1_58 + var_1_66) + ((((((((25) < (var_1_29)) ? (25) : (var_1_29)))) > ((var_1_59 + -4))) ? (((((25) < (var_1_29)) ? (25) : (var_1_29)))) : ((var_1_59 + -4))))))) : 1)) && ((var_1_20 > var_1_21) ? ((var_1_88 >= var_1_25) ? (var_1_72 == ((signed long int) (((((var_1_13) < (var_1_16)) ? (var_1_13) : (var_1_16))) - (var_1_73 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))) : (var_1_72 == ((signed long int) var_1_41))) : (var_1_72 == ((signed long int) ((((var_1_38) < (((var_1_73 - var_1_65) - ((((last_1_var_1_72) < 0 ) ? -(last_1_var_1_72) : (last_1_var_1_72)))))) ? (var_1_38) : (((var_1_73 - var_1_65) - ((((last_1_var_1_72) < 0 ) ? -(last_1_var_1_72) : (last_1_var_1_72))))))))))) && (var_1_74 == ((float) (var_1_23 - (var_1_22 + var_1_19))))) && ((var_1_13 < ((var_1_41 - 10) - var_1_29)) ? (((((((var_1_59) > (var_1_10)) ? (var_1_59) : (var_1_10))) / var_1_65) < var_1_72) ? ((var_1_61 >= var_1_40) ? (var_1_75 == ((unsigned char) (var_1_36 && var_1_76))) : (var_1_75 == ((unsigned char) var_1_76))) : (var_1_75 == ((unsigned char) (var_1_5 || var_1_6)))) : (var_1_75 == ((unsigned char) ((var_1_32 > var_1_29) && ((var_1_35 || var_1_36) && var_1_4)))))) && ((var_1_26 > var_1_44) ? ((((((var_1_65 << var_1_59) < 0 ) ? -(var_1_65 << var_1_59) : (var_1_65 << var_1_59))) > var_1_42) ? (var_1_77 == ((unsigned long int) ((((var_1_47) < ((var_1_65 + var_1_64))) ? (var_1_47) : ((var_1_65 + var_1_64)))))) : (var_1_77 == ((unsigned long int) ((var_1_78 - var_1_66) - var_1_73)))) : 1)) && (var_1_5 ? (var_1_79 == ((signed char) (((((((((var_1_64) > (var_1_30)) ? (var_1_64) : (var_1_30))) - (var_1_28 + var_1_66))) < (var_1_59)) ? ((((((var_1_64) > (var_1_30)) ? (var_1_64) : (var_1_30))) - (var_1_28 + var_1_66))) : (var_1_59))))) : (var_1_79 == ((signed char) (((((var_1_58 + var_1_28)) < ((((((var_1_30 + var_1_65)) < ((var_1_66 + var_1_59))) ? ((var_1_30 + var_1_65)) : ((var_1_66 + var_1_59)))))) ? ((var_1_58 + var_1_28)) : ((((((var_1_30 + var_1_65)) < ((var_1_66 + var_1_59))) ? ((var_1_30 + var_1_65)) : ((var_1_66 + var_1_59))))))))))) && (var_1_1 ? (var_1_80 == ((signed short int) var_1_68)) : 1)) && ((! var_1_5) ? ((var_1_62 || (var_1_64 >= var_1_89)) ? ((-8 == ((-4 + var_1_78) / var_1_65)) ? ((var_1_62 || ((var_1_74 * 32.6f) == var_1_21)) ? (var_1_81 == ((float) ((((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))) + (var_1_82 - var_1_83)) - var_1_19))) : (var_1_81 == ((float) var_1_21))) : (var_1_81 == ((float) var_1_20))) : 1) : 1)) && (var_1_84 == ((unsigned char) var_1_16))) && (var_1_6 ? (var_1_85 == ((signed char) var_1_30)) : (var_1_85 == ((signed char) var_1_66)))) && (var_1_86 == ((signed long int) var_1_64))) && (var_1_4 ? (var_1_87 == ((unsigned char) 10)) : 1)) && (var_1_35 ? (var_1_88 == ((float) var_1_83)) : (var_1_88 == ((float) var_1_22)))) && (var_1_89 == ((signed short int) var_1_66))) && (var_1_90 == ((double) var_1_18))) && (var_1_98 ? (var_1_91 == ((signed long int) var_1_65)) : 1)) && (var_1_92 == ((unsigned long int) var_1_29))) && (var_1_93 == ((signed long int) var_1_40))) && (var_1_98 ? (var_1_94 == ((unsigned short int) var_1_64)) : (var_1_94 == ((unsigned short int) var_1_16)))) && (var_1_95 == ((double) var_1_20))) && (var_1_75 ? (var_1_96 == ((signed short int) var_1_15)) : (var_1_96 == ((signed short int) var_1_47)))) && (var_1_75 ? (var_1_97 == ((unsigned long int) var_1_38)) : (var_1_97 == ((unsigned long int) var_1_30)))) && ((var_1_4 || ((last_1_var_1_92 / var_1_64) == var_1_66)) ? (var_1_98 == ((unsigned char) (! ((last_1_var_1_68 > last_1_var_1_91) || var_1_36)))) : (last_1_var_1_75 ? (var_1_98 == ((unsigned char) var_1_6)) : (var_1_98 == ((unsigned char) var_1_36))))
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
