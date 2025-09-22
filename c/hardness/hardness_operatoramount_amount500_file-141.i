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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
double var_1_10 = 100.25;
double var_1_14 = 499.075;
double var_1_15 = 0.125;
unsigned short int var_1_16 = 2;
unsigned short int var_1_17 = 50270;
unsigned short int var_1_18 = 54142;
unsigned short int var_1_19 = 48930;
unsigned short int var_1_20 = 10000;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 4;
double var_1_24 = 50.15;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 32;
double var_1_32 = 64.25;
double var_1_33 = 0.0;
double var_1_34 = 0.0;
double var_1_35 = 0.25;
signed char var_1_36 = 16;
signed char var_1_37 = 5;
signed char var_1_38 = -2;
unsigned char var_1_39 = 0;
signed short int var_1_40 = 32;
double var_1_41 = 63.75;
double var_1_42 = 128.6;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
signed long int var_1_46 = -100;
unsigned long int var_1_47 = 10;
unsigned short int var_1_48 = 32;
unsigned short int var_1_50 = 37308;
double var_1_51 = 1.375;
double var_1_52 = 16.55;
unsigned long int var_1_53 = 1000;
signed char var_1_54 = -128;
signed char var_1_56 = 16;
signed char var_1_57 = 64;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 1;
double var_1_61 = 128.75;
signed short int var_1_62 = -64;
unsigned char var_1_63 = 1;
unsigned long int var_1_64 = 3381111744;
float var_1_65 = 9.6;
float var_1_66 = 9999999999999.53;
float var_1_67 = 15.8;
float var_1_68 = 0.0;
float var_1_69 = 500.5;
float var_1_70 = 0.0;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 0;
unsigned long int var_1_73 = 64;
unsigned long int var_1_74 = 2241004113;
unsigned long int var_1_75 = 50;
unsigned long int var_1_76 = 50;
unsigned long int var_1_77 = 8;
unsigned long int var_1_79 = 1385732503;
unsigned long int var_1_80 = 1227734647;
unsigned long int var_1_81 = 1000000000;
unsigned long int var_1_82 = 1000000000;
float var_1_83 = 10000000.125;
double var_1_85 = 15.81;
float var_1_87 = 1.5;
signed char var_1_88 = 0;
float var_1_89 = 63.5;
float var_1_90 = 15.204;
unsigned char var_1_91 = 1;
signed char var_1_92 = 2;
unsigned char var_1_93 = 1;
unsigned short int var_1_94 = 50;
signed short int var_1_95 = 2;
double var_1_96 = 10.2;
signed short int var_1_97 = 0;
unsigned char var_1_98 = 128;
unsigned short int var_1_99 = 10;
signed long int var_1_100 = -1;
signed short int var_1_101 = -16;
unsigned char var_1_102 = 4;
signed short int var_1_103 = 16;
float var_1_104 = 4.95;
unsigned char var_1_105 = 5;
unsigned char last_1_var_1_1 = 1;
unsigned char last_1_var_1_21 = 1;
unsigned short int last_1_var_1_48 = 32;
double last_1_var_1_51 = 1.375;
unsigned long int last_1_var_1_53 = 1000;
unsigned char last_1_var_1_58 = 0;
unsigned char last_1_var_1_63 = 1;
unsigned long int last_1_var_1_75 = 50;
unsigned char last_1_var_1_91 = 1;
unsigned short int last_1_var_1_94 = 50;
signed short int last_1_var_1_95 = 2;
signed short int last_1_var_1_101 = -16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_27 = var_1_31;
 unsigned char stepLocal_26 = last_1_var_1_91;
 unsigned short int stepLocal_25 = var_1_20;
 signed char stepLocal_24 = var_1_57;
 unsigned long int stepLocal_23 = 5u;
 if (var_1_14 < ((((var_1_24) < (var_1_68)) ? (var_1_24) : (var_1_68)))) {
  if (last_1_var_1_58) {
   var_1_75 = var_1_76;
  }
 } else {
  if (var_1_44) {
   if ((var_1_14 / var_1_24) >= (last_1_var_1_51 + var_1_15)) {
    if (stepLocal_24 == last_1_var_1_94) {
     var_1_75 = ((((var_1_77) > ((((((var_1_4) > (last_1_var_1_48)) ? (var_1_4) : (last_1_var_1_48))) + last_1_var_1_94))) ? (var_1_77) : ((((((var_1_4) > (last_1_var_1_48)) ? (var_1_4) : (last_1_var_1_48))) + last_1_var_1_94))));
    } else {
     if (var_1_4 > stepLocal_25) {
      var_1_75 = ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20)));
     } else {
      if (stepLocal_26 && (last_1_var_1_95 > last_1_var_1_75)) {
       if (stepLocal_27 <= ((~ last_1_var_1_53) / var_1_4)) {
        var_1_75 = ((((var_1_74) > (var_1_77)) ? (var_1_74) : (var_1_77)));
       } else {
        var_1_75 = ((((var_1_31) > (((((var_1_27) > (var_1_37)) ? (var_1_27) : (var_1_37))))) ? (var_1_31) : (((((var_1_27) > (var_1_37)) ? (var_1_27) : (var_1_37))))));
       }
      } else {
       var_1_75 = ((((100000000u) < (((((var_1_50) < (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_50) : (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17)))))))) ? (100000000u) : (((((var_1_50) < (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_50) : (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17)))))))));
      }
     }
    }
   } else {
    var_1_75 = ((((128u) > (var_1_25)) ? (128u) : (var_1_25)));
   }
  } else {
   if (last_1_var_1_53 > stepLocal_23) {
    var_1_75 = ((((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80))) + (var_1_81 + var_1_82)) - var_1_29);
   }
  }
 }
 if (last_1_var_1_21) {
  if (var_1_8) {
   var_1_16 = last_1_var_1_101;
  }
 } else {
  if (last_1_var_1_63) {
   var_1_16 = (((((var_1_17) < (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_17) : (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))))) - ((var_1_20 - 64) + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))));
  }
 }
 if (last_1_var_1_1) {
  var_1_21 = var_1_22;
 } else {
  var_1_21 = 0;
 }
 if (-4 > (var_1_25 / var_1_17)) {
  var_1_41 = ((var_1_34 - var_1_35) - ((((var_1_33) > (var_1_42)) ? (var_1_33) : (var_1_42))));
 } else {
  if (var_1_9) {
   var_1_41 = var_1_34;
  } else {
   var_1_41 = 5.2;
  }
 }
 var_1_46 = ((var_1_28 - var_1_19) + ((var_1_17 - var_1_31) + var_1_26));
 var_1_51 = (var_1_35 + (50.76 - var_1_52));
 if ((var_1_31 * var_1_29) > (var_1_37 - 100)) {
  var_1_53 = var_1_17;
 }
 if (var_1_4 >= ((var_1_25 - var_1_57) + (var_1_28 * var_1_31))) {
  var_1_61 = (var_1_35 + var_1_52);
 }
 signed long int stepLocal_22 = ~ (128 - var_1_37);
 if (var_1_31 > stepLocal_22) {
  var_1_73 = (var_1_74 - var_1_28);
 } else {
  var_1_73 = ((((var_1_18) < (0u)) ? (var_1_18) : (0u)));
 }
 unsigned long int stepLocal_29 = - (- var_1_64);
 if (stepLocal_29 > (- var_1_25)) {
  var_1_90 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
 }
 unsigned long int stepLocal_31 = var_1_81;
 unsigned char stepLocal_30 = var_1_4;
 if (stepLocal_31 > 1u) {
  if ((((((var_1_30 * 25)) < (var_1_64)) ? ((var_1_30 * 25)) : (var_1_64))) < stepLocal_30) {
   var_1_91 = var_1_72;
  }
 } else {
  var_1_91 = var_1_59;
 }
 if (var_1_60) {
  var_1_98 = var_1_30;
 } else {
  var_1_98 = var_1_29;
 }
 if (var_1_91) {
  var_1_99 = var_1_88;
 }
 if (var_1_60) {
  var_1_100 = var_1_26;
 } else {
  var_1_100 = var_1_29;
 }
 var_1_101 = var_1_4;
 var_1_102 = var_1_29;
 signed long int stepLocal_33 = var_1_100;
 signed long int stepLocal_32 = - (var_1_19 >> var_1_105);
 if (stepLocal_32 < var_1_73) {
  if (stepLocal_33 >= ((((var_1_75) < (var_1_29)) ? (var_1_75) : (var_1_29)))) {
   var_1_104 = var_1_67;
  } else {
   var_1_104 = var_1_68;
  }
 } else {
  var_1_104 = var_1_42;
 }
 signed long int stepLocal_17 = 32;
 unsigned char stepLocal_16 = var_1_38 <= ((((var_1_30) > (var_1_75)) ? (var_1_30) : (var_1_75)));
 if ((-2 > ((((var_1_27) < (var_1_20)) ? (var_1_27) : (var_1_20)))) || stepLocal_16) {
  if (((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99))) < stepLocal_17) {
   var_1_58 = var_1_8;
  } else {
   var_1_58 = (var_1_8 && var_1_45);
  }
 } else {
  if ((- var_1_14) > var_1_34) {
   var_1_58 = ((var_1_22 && var_1_59) && var_1_60);
  }
 }
 unsigned long int stepLocal_18 = (var_1_29 - 32) + var_1_75;
 if (stepLocal_18 != var_1_31) {
  var_1_62 = (((((((((var_1_37) > (var_1_26)) ? (var_1_37) : (var_1_26)))) < (var_1_4)) ? (((((var_1_37) > (var_1_26)) ? (var_1_37) : (var_1_26)))) : (var_1_4))) + (var_1_16 - var_1_27));
 } else {
  var_1_62 = (var_1_26 - var_1_20);
 }
 unsigned char stepLocal_3 = var_1_4;
 signed long int stepLocal_2 = (((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20));
 unsigned char stepLocal_1 = var_1_28;
 if (! ((var_1_14 / var_1_24) >= 24.8)) {
  if (var_1_9) {
   if (((((var_1_99) < (var_1_18)) ? (var_1_99) : (var_1_18))) >= stepLocal_2) {
    if (stepLocal_3 < ((var_1_25 - var_1_26) + (- var_1_17))) {
     var_1_23 = ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)));
    } else {
     var_1_23 = (((((var_1_28) < (128)) ? (var_1_28) : (128))) - ((var_1_29 - var_1_30) + var_1_31));
    }
   } else {
    var_1_23 = 5;
   }
  } else {
   if (var_1_26 != stepLocal_1) {
    var_1_23 = (var_1_28 - 32);
   } else {
    var_1_23 = (var_1_28 - var_1_30);
   }
  }
 }
 unsigned char stepLocal_4 = var_1_29;
 if (var_1_17 >= stepLocal_4) {
  if (! var_1_22) {
   var_1_32 = ((((var_1_14) > (((var_1_33 - 7.4) - (var_1_34 - var_1_35)))) ? (var_1_14) : (((var_1_33 - 7.4) - (var_1_34 - var_1_35)))));
  }
 } else {
  if (var_1_51 >= var_1_24) {
   var_1_32 = var_1_33;
  } else {
   var_1_32 = var_1_34;
  }
 }
 unsigned char stepLocal_10 = var_1_31;
 unsigned char stepLocal_9 = var_1_27;
 if (var_1_17 > stepLocal_10) {
  if (var_1_42 < var_1_35) {
   if (stepLocal_9 < var_1_46) {
    if (var_1_22) {
     var_1_43 = ((var_1_9 || (var_1_7 && var_1_8)) || (var_1_44 || var_1_45));
    } else {
     var_1_43 = (var_1_9 && var_1_7);
    }
   } else {
    var_1_43 = (! var_1_8);
   }
  } else {
   var_1_43 = var_1_45;
  }
 }
 if (var_1_4 < var_1_37) {
  if (((var_1_29 - var_1_53) / var_1_20) < var_1_25) {
   var_1_47 = ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)));
  }
 } else {
  var_1_47 = (var_1_27 + ((((var_1_29) < (var_1_73)) ? (var_1_29) : (var_1_73))));
 }
 if (var_1_91) {
  var_1_94 = var_1_57;
 } else {
  var_1_94 = var_1_23;
 }
 if (var_1_43) {
  var_1_96 = var_1_33;
 } else {
  var_1_96 = var_1_68;
 }
 var_1_97 = var_1_98;
 if (var_1_21) {
  var_1_103 = var_1_62;
 } else {
  var_1_103 = var_1_57;
 }
 signed long int stepLocal_0 = var_1_16 % var_1_4;
 if (var_1_62 != stepLocal_0) {
  var_1_1 = (var_1_21 || (! (var_1_21 && var_1_7)));
 } else {
  var_1_1 = (var_1_7 || (var_1_8 || var_1_9));
 }
 if (var_1_1) {
  var_1_93 = var_1_60;
 }
 if (var_1_94 <= var_1_16) {
  var_1_83 = (((31.5f + var_1_69) - var_1_35) + 127.75f);
 } else {
  var_1_83 = ((((((var_1_34) > (var_1_68)) ? (var_1_34) : (var_1_68))) - var_1_52) - (var_1_67 + var_1_35));
 }
 if (var_1_93) {
  var_1_95 = var_1_28;
 }
 if ((var_1_64 - 256u) > var_1_95) {
  if (var_1_22 || (var_1_32 > (var_1_35 / var_1_33))) {
   var_1_63 = (((var_1_21 && var_1_44) || var_1_7) || var_1_45);
  }
 } else {
  if (((var_1_4 & var_1_28) <= (var_1_25 - var_1_57)) && (var_1_17 < var_1_73)) {
   var_1_63 = (var_1_59 || var_1_60);
  }
 }
 unsigned char stepLocal_28 = var_1_59;
 if (var_1_63 || stepLocal_28) {
  var_1_85 = (((((var_1_33) > (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) ? (var_1_33) : (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))))) - var_1_42);
 }
 signed long int stepLocal_8 = (var_1_25 / var_1_18) ^ -50;
 if (stepLocal_8 <= ((((1) > (var_1_28)) ? (1) : (var_1_28)))) {
  var_1_40 = ((((var_1_95) > (var_1_103)) ? (var_1_95) : (var_1_103)));
 }
 if (((var_1_31 + var_1_88) << var_1_53) < (var_1_75 + var_1_29)) {
  if (var_1_41 >= var_1_32) {
   var_1_87 = ((((var_1_14) < (((var_1_35 + var_1_69) - var_1_52))) ? (var_1_14) : (((var_1_35 + var_1_69) - var_1_52))));
  } else {
   var_1_87 = (((((var_1_70 + (var_1_69 + var_1_89))) > (var_1_33)) ? ((var_1_70 + (var_1_69 + var_1_89))) : (var_1_33)));
  }
 } else {
  if (var_1_41 != (var_1_85 * ((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90))))) {
   if ((var_1_53 + (- var_1_57)) < var_1_81) {
    var_1_87 = var_1_89;
   }
  } else {
   var_1_87 = (var_1_66 + var_1_69);
  }
 }
 if (var_1_63) {
  var_1_92 = -64;
 } else {
  var_1_92 = var_1_31;
 }
 if (((((var_1_85) < (var_1_41)) ? (var_1_85) : (var_1_41))) >= var_1_61) {
  var_1_10 = var_1_14;
 } else {
  if (var_1_43) {
   var_1_10 = var_1_14;
  } else {
   if (var_1_85 <= (- (var_1_61 * var_1_41))) {
    var_1_10 = ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)));
   }
  }
 }
 unsigned long int stepLocal_12 = (((var_1_4) < ((var_1_73 / -8))) ? (var_1_4) : ((var_1_73 / -8)));
 unsigned short int stepLocal_11 = var_1_99;
 if (stepLocal_12 >= var_1_38) {
  var_1_48 = (var_1_17 - var_1_25);
 } else {
  if (stepLocal_11 >= var_1_30) {
   var_1_48 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
  } else {
   if (var_1_10 < var_1_32) {
    var_1_48 = (((((var_1_50 - ((((var_1_28) > (var_1_27)) ? (var_1_28) : (var_1_27))))) < (((((var_1_20) < ((64260 - var_1_25))) ? (var_1_20) : ((64260 - var_1_25)))))) ? ((var_1_50 - ((((var_1_28) > (var_1_27)) ? (var_1_28) : (var_1_27))))) : (((((var_1_20) < ((64260 - var_1_25))) ? (var_1_20) : ((64260 - var_1_25)))))));
   } else {
    var_1_48 = (var_1_4 + ((((((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))) > (var_1_31)) ? (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))) : (var_1_31))));
   }
  }
 }
 signed long int stepLocal_6 = var_1_27 + (var_1_40 ^ var_1_94);
 signed long int stepLocal_5 = (var_1_25 - var_1_26) + var_1_4;
 if (var_1_63) {
  if (var_1_25 != stepLocal_6) {
   var_1_36 = var_1_31;
  }
 } else {
  if (stepLocal_5 <= var_1_27) {
   if (var_1_34 <= var_1_24) {
    var_1_36 = (var_1_31 + (var_1_30 - var_1_37));
   } else {
    var_1_36 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
   }
  } else {
   var_1_36 = var_1_38;
  }
 }
 signed long int stepLocal_7 = var_1_40 * var_1_26;
 if (stepLocal_7 < var_1_46) {
  if ((((((var_1_34) < (1.4f)) ? (var_1_34) : (1.4f))) - 255.75f) >= ((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) {
   var_1_39 = ((var_1_100 < var_1_40) || (! var_1_8));
  } else {
   var_1_39 = (var_1_9 || (! var_1_7));
  }
 } else {
  var_1_39 = (! var_1_22);
 }
 signed long int stepLocal_15 = 1 << var_1_19;
 signed long int stepLocal_14 = 5;
 unsigned char stepLocal_13 = var_1_4;
 if (var_1_39) {
  var_1_54 = ((64 - var_1_30) - var_1_37);
 } else {
  if (stepLocal_15 >= (~ var_1_47)) {
   if (var_1_34 < var_1_41) {
    var_1_54 = (((((var_1_31 + var_1_37) - var_1_30) < 0 ) ? -((var_1_31 + var_1_37) - var_1_30) : ((var_1_31 + var_1_37) - var_1_30)));
   } else {
    var_1_54 = ((var_1_30 + var_1_56) + var_1_37);
   }
  } else {
   if (var_1_28 >= stepLocal_13) {
    var_1_54 = (var_1_29 - ((((var_1_37) > (var_1_30)) ? (var_1_37) : (var_1_30))));
   } else {
    if (stepLocal_14 != (var_1_30 * (var_1_20 * var_1_75))) {
     var_1_54 = var_1_37;
    } else {
     var_1_54 = ((var_1_57 - var_1_30) - var_1_29);
    }
   }
  }
 }
 signed long int stepLocal_21 = var_1_100;
 signed long int stepLocal_20 = var_1_57 * var_1_25;
 signed long int stepLocal_19 = var_1_48 / var_1_57;
 if (var_1_7) {
  if (stepLocal_19 <= var_1_25) {
   var_1_65 = (var_1_52 + var_1_35);
  } else {
   var_1_65 = (((((var_1_52) < (var_1_35)) ? (var_1_52) : (var_1_35))) + (4.125f - ((((var_1_66) < (var_1_67)) ? (var_1_66) : (var_1_67)))));
  }
 } else {
  if ((var_1_10 * var_1_104) >= (((((var_1_52 + var_1_15)) > (var_1_35)) ? ((var_1_52 + var_1_15)) : (var_1_35)))) {
   if (stepLocal_20 <= (((((var_1_20 / -10)) > (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) ? ((var_1_20 / -10)) : (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))) {
    if (! var_1_63) {
     var_1_65 = ((((((((16.8f) > (var_1_66)) ? (16.8f) : (var_1_66)))) < (((((var_1_67) > ((var_1_35 + var_1_52))) ? (var_1_67) : ((var_1_35 + var_1_52)))))) ? (((((16.8f) > (var_1_66)) ? (16.8f) : (var_1_66)))) : (((((var_1_67) > ((var_1_35 + var_1_52))) ? (var_1_67) : ((var_1_35 + var_1_52)))))));
    }
   } else {
    if ((var_1_25 - var_1_30) > stepLocal_21) {
     var_1_65 = (var_1_67 + (((((var_1_35 - 64.7f)) > (var_1_66)) ? ((var_1_35 - 64.7f)) : (var_1_66))));
    } else {
     var_1_65 = ((((((((var_1_52) < (var_1_66)) ? (var_1_52) : (var_1_66)))) < (((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_34)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_34))))) ? (((((var_1_52) < (var_1_66)) ? (var_1_52) : (var_1_66)))) : (((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_34)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_34))))));
    }
   }
  } else {
   var_1_65 = ((var_1_33 - var_1_52) - (var_1_34 - (var_1_70 - var_1_69)));
  }
 }
 if (var_1_34 > (var_1_33 / ((((var_1_24) < (4.75)) ? (var_1_24) : (4.75))))) {
  if (var_1_46 >= var_1_48) {
   var_1_71 = (var_1_59 && (! var_1_9));
  } else {
   var_1_71 = (! (var_1_22 && var_1_8));
  }
 } else {
  if (var_1_35 > ((((var_1_96) > (var_1_15)) ? (var_1_96) : (var_1_15)))) {
   if (var_1_22) {
    if (var_1_7) {
     if (var_1_46 <= ((var_1_19 / -10) / var_1_18)) {
      var_1_71 = var_1_8;
     } else {
      var_1_71 = ((var_1_9 || var_1_8) || (! (var_1_91 || var_1_59)));
     }
    }
   } else {
    var_1_71 = ((var_1_91 && (var_1_57 < var_1_30)) && var_1_72);
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 32767);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 32767);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 8192);
 assume_abort_if_not(var_1_20 <= 16384);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 assume_abort_if_not(var_1_24 != 0.0F);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 255);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 254);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 32);
 assume_abort_if_not(var_1_29 <= 64);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -127);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -31);
 assume_abort_if_not(var_1_56 <= 31);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 62);
 assume_abort_if_not(var_1_57 <= 126);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 1);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 1);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 2147483647);
 assume_abort_if_not(var_1_64 <= 4294967295);
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427383000e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= 6917529.027641074000e+12F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854766000e+12F && var_1_68 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= 0.0F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691400e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 2305843.009213691400e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 0);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 2147483647);
 assume_abort_if_not(var_1_74 <= 4294967294);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 4294967294);
 var_1_77 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 4294967294);
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 1073741823);
 assume_abort_if_not(var_1_79 <= 2147483647);
 var_1_80 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_80 >= 1073741823);
 assume_abort_if_not(var_1_80 <= 2147483647);
 var_1_81 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_81 >= 536870912);
 assume_abort_if_not(var_1_81 <= 1073741824);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 536870912);
 assume_abort_if_not(var_1_82 <= 1073741823);
 var_1_88 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_88 >= 0);
 assume_abort_if_not(var_1_88 <= 63);
 var_1_89 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_89 >= -230584.3009213691400e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691400e+12F && var_1_89 >= 1.0e-20F ));
 var_1_105 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_105 >= 1);
 assume_abort_if_not(var_1_105 <= 15);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_101 = var_1_101;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((var_1_62 != (var_1_16 % var_1_4)) ? (var_1_1 == ((unsigned char) (var_1_21 || (! (var_1_21 && var_1_7))))) : (var_1_1 == ((unsigned char) (var_1_7 || (var_1_8 || var_1_9))))) && ((((((var_1_85) < (var_1_41)) ? (var_1_85) : (var_1_41))) >= var_1_61) ? (var_1_10 == ((double) var_1_14)) : (var_1_43 ? (var_1_10 == ((double) var_1_14)) : ((var_1_85 <= (- (var_1_61 * var_1_41))) ? (var_1_10 == ((double) ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))) : 1)))) && (last_1_var_1_21 ? (var_1_8 ? (var_1_16 == ((unsigned short int) last_1_var_1_101)) : 1) : (last_1_var_1_63 ? (var_1_16 == ((unsigned short int) (((((var_1_17) < (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_17) : (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))))) - ((var_1_20 - 64) + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) : 1))) && (last_1_var_1_1 ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) 0)))) && ((! ((var_1_14 / var_1_24) >= 24.8)) ? (var_1_9 ? ((((((var_1_99) < (var_1_18)) ? (var_1_99) : (var_1_18))) >= ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) ? ((var_1_4 < ((var_1_25 - var_1_26) + (- var_1_17))) ? (var_1_23 == ((unsigned char) ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) : (var_1_23 == ((unsigned char) (((((var_1_28) < (128)) ? (var_1_28) : (128))) - ((var_1_29 - var_1_30) + var_1_31))))) : (var_1_23 == ((unsigned char) 5))) : ((var_1_26 != var_1_28) ? (var_1_23 == ((unsigned char) (var_1_28 - 32))) : (var_1_23 == ((unsigned char) (var_1_28 - var_1_30))))) : 1)) && ((var_1_17 >= var_1_29) ? ((! var_1_22) ? (var_1_32 == ((double) ((((var_1_14) > (((var_1_33 - 7.4) - (var_1_34 - var_1_35)))) ? (var_1_14) : (((var_1_33 - 7.4) - (var_1_34 - var_1_35))))))) : 1) : ((var_1_51 >= var_1_24) ? (var_1_32 == ((double) var_1_33)) : (var_1_32 == ((double) var_1_34))))) && (var_1_63 ? ((var_1_25 != (var_1_27 + (var_1_40 ^ var_1_94))) ? (var_1_36 == ((signed char) var_1_31)) : 1) : ((((var_1_25 - var_1_26) + var_1_4) <= var_1_27) ? ((var_1_34 <= var_1_24) ? (var_1_36 == ((signed char) (var_1_31 + (var_1_30 - var_1_37)))) : (var_1_36 == ((signed char) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))) : (var_1_36 == ((signed char) var_1_38))))) && (((var_1_40 * var_1_26) < var_1_46) ? (((((((var_1_34) < (1.4f)) ? (var_1_34) : (1.4f))) - 255.75f) >= ((((var_1_33) < (var_1_15)) ? (var_1_33) : (var_1_15)))) ? (var_1_39 == ((unsigned char) ((var_1_100 < var_1_40) || (! var_1_8)))) : (var_1_39 == ((unsigned char) (var_1_9 || (! var_1_7))))) : (var_1_39 == ((unsigned char) (! var_1_22))))) && ((((var_1_25 / var_1_18) ^ -50) <= ((((1) > (var_1_28)) ? (1) : (var_1_28)))) ? (var_1_40 == ((signed short int) ((((var_1_95) > (var_1_103)) ? (var_1_95) : (var_1_103))))) : 1)) && ((-4 > (var_1_25 / var_1_17)) ? (var_1_41 == ((double) ((var_1_34 - var_1_35) - ((((var_1_33) > (var_1_42)) ? (var_1_33) : (var_1_42)))))) : (var_1_9 ? (var_1_41 == ((double) var_1_34)) : (var_1_41 == ((double) 5.2))))) && ((var_1_17 > var_1_31) ? ((var_1_42 < var_1_35) ? ((var_1_27 < var_1_46) ? (var_1_22 ? (var_1_43 == ((unsigned char) ((var_1_9 || (var_1_7 && var_1_8)) || (var_1_44 || var_1_45)))) : (var_1_43 == ((unsigned char) (var_1_9 && var_1_7)))) : (var_1_43 == ((unsigned char) (! var_1_8)))) : (var_1_43 == ((unsigned char) var_1_45))) : 1)) && (var_1_46 == ((signed long int) ((var_1_28 - var_1_19) + ((var_1_17 - var_1_31) + var_1_26))))) && ((var_1_4 < var_1_37) ? ((((var_1_29 - var_1_53) / var_1_20) < var_1_25) ? (var_1_47 == ((unsigned long int) ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1) : (var_1_47 == ((unsigned long int) (var_1_27 + ((((var_1_29) < (var_1_73)) ? (var_1_29) : (var_1_73)))))))) && ((((((var_1_4) < ((var_1_73 / -8))) ? (var_1_4) : ((var_1_73 / -8)))) >= var_1_38) ? (var_1_48 == ((unsigned short int) (var_1_17 - var_1_25))) : ((var_1_99 >= var_1_30) ? (var_1_48 == ((unsigned short int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) : ((var_1_10 < var_1_32) ? (var_1_48 == ((unsigned short int) (((((var_1_50 - ((((var_1_28) > (var_1_27)) ? (var_1_28) : (var_1_27))))) < (((((var_1_20) < ((64260 - var_1_25))) ? (var_1_20) : ((64260 - var_1_25)))))) ? ((var_1_50 - ((((var_1_28) > (var_1_27)) ? (var_1_28) : (var_1_27))))) : (((((var_1_20) < ((64260 - var_1_25))) ? (var_1_20) : ((64260 - var_1_25))))))))) : (var_1_48 == ((unsigned short int) (var_1_4 + ((((((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))) > (var_1_31)) ? (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)))) : (var_1_31)))))))))) && (var_1_51 == ((double) (var_1_35 + (50.76 - var_1_52))))) && (((var_1_31 * var_1_29) > (var_1_37 - 100)) ? (var_1_53 == ((unsigned long int) var_1_17)) : 1)) && (var_1_39 ? (var_1_54 == ((signed char) ((64 - var_1_30) - var_1_37))) : (((1 << var_1_19) >= (~ var_1_47)) ? ((var_1_34 < var_1_41) ? (var_1_54 == ((signed char) (((((var_1_31 + var_1_37) - var_1_30) < 0 ) ? -((var_1_31 + var_1_37) - var_1_30) : ((var_1_31 + var_1_37) - var_1_30))))) : (var_1_54 == ((signed char) ((var_1_30 + var_1_56) + var_1_37)))) : ((var_1_28 >= var_1_4) ? (var_1_54 == ((signed char) (var_1_29 - ((((var_1_37) > (var_1_30)) ? (var_1_37) : (var_1_30)))))) : ((5 != (var_1_30 * (var_1_20 * var_1_75))) ? (var_1_54 == ((signed char) var_1_37)) : (var_1_54 == ((signed char) ((var_1_57 - var_1_30) - var_1_29)))))))) && (((-2 > ((((var_1_27) < (var_1_20)) ? (var_1_27) : (var_1_20)))) || (var_1_38 <= ((((var_1_30) > (var_1_75)) ? (var_1_30) : (var_1_75))))) ? ((((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99))) < 32) ? (var_1_58 == ((unsigned char) var_1_8)) : (var_1_58 == ((unsigned char) (var_1_8 && var_1_45)))) : (((- var_1_14) > var_1_34) ? (var_1_58 == ((unsigned char) ((var_1_22 && var_1_59) && var_1_60))) : 1))) && ((var_1_4 >= ((var_1_25 - var_1_57) + (var_1_28 * var_1_31))) ? (var_1_61 == ((double) (var_1_35 + var_1_52))) : 1)) && ((((var_1_29 - 32) + var_1_75) != var_1_31) ? (var_1_62 == ((signed short int) (((((((((var_1_37) > (var_1_26)) ? (var_1_37) : (var_1_26)))) < (var_1_4)) ? (((((var_1_37) > (var_1_26)) ? (var_1_37) : (var_1_26)))) : (var_1_4))) + (var_1_16 - var_1_27)))) : (var_1_62 == ((signed short int) (var_1_26 - var_1_20))))) && (((var_1_64 - 256u) > var_1_95) ? ((var_1_22 || (var_1_32 > (var_1_35 / var_1_33))) ? (var_1_63 == ((unsigned char) (((var_1_21 && var_1_44) || var_1_7) || var_1_45))) : 1) : ((((var_1_4 & var_1_28) <= (var_1_25 - var_1_57)) && (var_1_17 < var_1_73)) ? (var_1_63 == ((unsigned char) (var_1_59 || var_1_60))) : 1))) && (var_1_7 ? (((var_1_48 / var_1_57) <= var_1_25) ? (var_1_65 == ((float) (var_1_52 + var_1_35))) : (var_1_65 == ((float) (((((var_1_52) < (var_1_35)) ? (var_1_52) : (var_1_35))) + (4.125f - ((((var_1_66) < (var_1_67)) ? (var_1_66) : (var_1_67)))))))) : (((var_1_10 * var_1_104) >= (((((var_1_52 + var_1_15)) > (var_1_35)) ? ((var_1_52 + var_1_15)) : (var_1_35)))) ? (((var_1_57 * var_1_25) <= (((((var_1_20 / -10)) > (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) ? ((var_1_20 / -10)) : (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))) ? ((! var_1_63) ? (var_1_65 == ((float) ((((((((16.8f) > (var_1_66)) ? (16.8f) : (var_1_66)))) < (((((var_1_67) > ((var_1_35 + var_1_52))) ? (var_1_67) : ((var_1_35 + var_1_52)))))) ? (((((16.8f) > (var_1_66)) ? (16.8f) : (var_1_66)))) : (((((var_1_67) > ((var_1_35 + var_1_52))) ? (var_1_67) : ((var_1_35 + var_1_52))))))))) : 1) : (((var_1_25 - var_1_30) > var_1_100) ? (var_1_65 == ((float) (var_1_67 + (((((var_1_35 - 64.7f)) > (var_1_66)) ? ((var_1_35 - 64.7f)) : (var_1_66)))))) : (var_1_65 == ((float) ((((((((var_1_52) < (var_1_66)) ? (var_1_52) : (var_1_66)))) < (((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_34)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_34))))) ? (((((var_1_52) < (var_1_66)) ? (var_1_52) : (var_1_66)))) : (((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_34)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_34)))))))))) : (var_1_65 == ((float) ((var_1_33 - var_1_52) - (var_1_34 - (var_1_70 - var_1_69)))))))) && ((var_1_34 > (var_1_33 / ((((var_1_24) < (4.75)) ? (var_1_24) : (4.75))))) ? ((var_1_46 >= var_1_48) ? (var_1_71 == ((unsigned char) (var_1_59 && (! var_1_9)))) : (var_1_71 == ((unsigned char) (! (var_1_22 && var_1_8))))) : ((var_1_35 > ((((var_1_96) > (var_1_15)) ? (var_1_96) : (var_1_15)))) ? (var_1_22 ? (var_1_7 ? ((var_1_46 <= ((var_1_19 / -10) / var_1_18)) ? (var_1_71 == ((unsigned char) var_1_8)) : (var_1_71 == ((unsigned char) ((var_1_9 || var_1_8) || (! (var_1_91 || var_1_59)))))) : 1) : (var_1_71 == ((unsigned char) ((var_1_91 && (var_1_57 < var_1_30)) && var_1_72)))) : 1))) && ((var_1_31 > (~ (128 - var_1_37))) ? (var_1_73 == ((unsigned long int) (var_1_74 - var_1_28))) : (var_1_73 == ((unsigned long int) ((((var_1_18) < (0u)) ? (var_1_18) : (0u))))))) && ((var_1_14 < ((((var_1_24) < (var_1_68)) ? (var_1_24) : (var_1_68)))) ? (last_1_var_1_58 ? (var_1_75 == ((unsigned long int) var_1_76)) : 1) : (var_1_44 ? (((var_1_14 / var_1_24) >= (last_1_var_1_51 + var_1_15)) ? ((var_1_57 == last_1_var_1_94) ? (var_1_75 == ((unsigned long int) ((((var_1_77) > ((((((var_1_4) > (last_1_var_1_48)) ? (var_1_4) : (last_1_var_1_48))) + last_1_var_1_94))) ? (var_1_77) : ((((((var_1_4) > (last_1_var_1_48)) ? (var_1_4) : (last_1_var_1_48))) + last_1_var_1_94)))))) : ((var_1_4 > var_1_20) ? (var_1_75 == ((unsigned long int) ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))))) : ((last_1_var_1_91 && (last_1_var_1_95 > last_1_var_1_75)) ? ((var_1_31 <= ((~ last_1_var_1_53) / var_1_4)) ? (var_1_75 == ((unsigned long int) ((((var_1_74) > (var_1_77)) ? (var_1_74) : (var_1_77))))) : (var_1_75 == ((unsigned long int) ((((var_1_31) > (((((var_1_27) > (var_1_37)) ? (var_1_27) : (var_1_37))))) ? (var_1_31) : (((((var_1_27) > (var_1_37)) ? (var_1_27) : (var_1_37))))))))) : (var_1_75 == ((unsigned long int) ((((100000000u) < (((((var_1_50) < (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_50) : (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17)))))))) ? (100000000u) : (((((var_1_50) < (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_50) : (((((var_1_30) > (var_1_17)) ? (var_1_30) : (var_1_17)))))))))))))) : (var_1_75 == ((unsigned long int) ((((128u) > (var_1_25)) ? (128u) : (var_1_25)))))) : ((last_1_var_1_53 > 5u) ? (var_1_75 == ((unsigned long int) ((((((var_1_79) < (var_1_80)) ? (var_1_79) : (var_1_80))) + (var_1_81 + var_1_82)) - var_1_29))) : 1)))) && ((var_1_94 <= var_1_16) ? (var_1_83 == ((float) (((31.5f + var_1_69) - var_1_35) + 127.75f))) : (var_1_83 == ((float) ((((((var_1_34) > (var_1_68)) ? (var_1_34) : (var_1_68))) - var_1_52) - (var_1_67 + var_1_35)))))) && ((var_1_63 || var_1_59) ? (var_1_85 == ((double) (((((var_1_33) > (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))))) ? (var_1_33) : (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))))) - var_1_42))) : 1)) && ((((var_1_31 + var_1_88) << var_1_53) < (var_1_75 + var_1_29)) ? ((var_1_41 >= var_1_32) ? (var_1_87 == ((float) ((((var_1_14) < (((var_1_35 + var_1_69) - var_1_52))) ? (var_1_14) : (((var_1_35 + var_1_69) - var_1_52)))))) : (var_1_87 == ((float) (((((var_1_70 + (var_1_69 + var_1_89))) > (var_1_33)) ? ((var_1_70 + (var_1_69 + var_1_89))) : (var_1_33)))))) : ((var_1_41 != (var_1_85 * ((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90))))) ? (((var_1_53 + (- var_1_57)) < var_1_81) ? (var_1_87 == ((float) var_1_89)) : 1) : (var_1_87 == ((float) (var_1_66 + var_1_69)))))) && (((- (- var_1_64)) > (- var_1_25)) ? (var_1_90 == ((float) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : 1)) && ((var_1_81 > 1u) ? (((((((var_1_30 * 25)) < (var_1_64)) ? ((var_1_30 * 25)) : (var_1_64))) < var_1_4) ? (var_1_91 == ((unsigned char) var_1_72)) : 1) : (var_1_91 == ((unsigned char) var_1_59)))) && (var_1_63 ? (var_1_92 == ((signed char) -64)) : (var_1_92 == ((signed char) var_1_31)))) && (var_1_1 ? (var_1_93 == ((unsigned char) var_1_60)) : 1)) && (var_1_91 ? (var_1_94 == ((unsigned short int) var_1_57)) : (var_1_94 == ((unsigned short int) var_1_23)))) && (var_1_93 ? (var_1_95 == ((signed short int) var_1_28)) : 1)) && (var_1_43 ? (var_1_96 == ((double) var_1_33)) : (var_1_96 == ((double) var_1_68)))) && (var_1_97 == ((signed short int) var_1_98))) && (var_1_60 ? (var_1_98 == ((unsigned char) var_1_30)) : (var_1_98 == ((unsigned char) var_1_29)))) && (var_1_91 ? (var_1_99 == ((unsigned short int) var_1_88)) : 1)) && (var_1_60 ? (var_1_100 == ((signed long int) var_1_26)) : (var_1_100 == ((signed long int) var_1_29)))) && (var_1_101 == ((signed short int) var_1_4))) && (var_1_102 == ((unsigned char) var_1_29))) && (var_1_21 ? (var_1_103 == ((signed short int) var_1_62)) : (var_1_103 == ((signed short int) var_1_57)))) && (((- (var_1_19 >> var_1_105)) < var_1_73) ? ((var_1_100 >= ((((var_1_75) < (var_1_29)) ? (var_1_75) : (var_1_29)))) ? (var_1_104 == ((float) var_1_67)) : (var_1_104 == ((float) var_1_68))) : (var_1_104 == ((float) var_1_42)))
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
