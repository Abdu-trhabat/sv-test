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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 9.3;
float var_1_4 = 4.5;
float var_1_5 = 0.0;
float var_1_6 = 2.4;
float var_1_7 = 50.1;
float var_1_8 = 0.8;
float var_1_9 = 32.5;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 45600;
unsigned short int var_1_14 = 29321;
unsigned short int var_1_15 = 32;
unsigned short int var_1_16 = 1;
unsigned short int var_1_17 = 50;
unsigned short int var_1_18 = 5;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = -0.25;
unsigned long int var_1_22 = 16;
signed char var_1_23 = 4;
signed char var_1_24 = -32;
unsigned long int var_1_25 = 4092278359;
unsigned long int var_1_26 = 1706321756;
double var_1_27 = 4.5;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 16;
double var_1_30 = 499.25;
signed long int var_1_31 = 0;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
float var_1_40 = 0.0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 8;
signed long int var_1_45 = 1938494595;
unsigned char var_1_46 = 0;
double var_1_47 = 1.5;
unsigned short int var_1_48 = 0;
unsigned short int var_1_49 = 45618;
unsigned char var_1_50 = 0;
unsigned char var_1_52 = 0;
signed short int var_1_53 = -256;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 4;
signed long int var_1_58 = 32;
double var_1_59 = 500.75;
signed long int var_1_60 = 128;
signed long int var_1_62 = 10;
signed char var_1_63 = -128;
signed char var_1_64 = 100;
signed char var_1_65 = 1;
signed char var_1_66 = 2;
unsigned short int var_1_67 = 1;
double var_1_68 = 15.2;
double var_1_69 = 1000000000000.6;
double var_1_70 = 63.9;
signed short int var_1_71 = 10;
signed char var_1_72 = -4;
unsigned short int var_1_74 = 16;
unsigned short int var_1_75 = 5;
signed short int var_1_76 = 5;
signed long int var_1_77 = 32;
signed long int var_1_78 = 100;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 5;
unsigned short int var_1_81 = 128;
double var_1_82 = 127.525;
double var_1_83 = 63.5;
double var_1_84 = 31.8;
unsigned long int var_1_85 = 128;
signed char var_1_86 = 2;
signed short int var_1_87 = 25;
unsigned short int var_1_88 = 0;
signed short int var_1_89 = -16;
float var_1_90 = 25.35;
double var_1_91 = -0.08;
signed short int var_1_92 = 200;
double var_1_93 = 8.5;
signed long int var_1_94 = -256;
unsigned char var_1_95 = 0;
signed char var_1_96 = -4;
signed char var_1_97 = 8;
signed char var_1_98 = 5;
unsigned short int last_1_var_1_17 = 50;
signed long int last_1_var_1_31 = 0;
unsigned char last_1_var_1_36 = 1;
unsigned char last_1_var_1_50 = 0;
unsigned short int last_1_var_1_74 = 16;
signed short int last_1_var_1_76 = 5;
signed long int last_1_var_1_77 = 32;
unsigned long int last_1_var_1_85 = 128;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_12 = last_1_var_1_36;
 unsigned short int stepLocal_11 = var_1_18;
 if (stepLocal_12 && last_1_var_1_50) {
  if (stepLocal_11 >= last_1_var_1_74) {
   var_1_60 = ((((((((last_1_var_1_17 + last_1_var_1_85)) > (var_1_33)) ? ((last_1_var_1_17 + last_1_var_1_85)) : (var_1_33))) < 0 ) ? -(((((last_1_var_1_17 + last_1_var_1_85)) > (var_1_33)) ? ((last_1_var_1_17 + last_1_var_1_85)) : (var_1_33))) : (((((last_1_var_1_17 + last_1_var_1_85)) > (var_1_33)) ? ((last_1_var_1_17 + last_1_var_1_85)) : (var_1_33)))));
  } else {
   var_1_60 = ((((last_1_var_1_31) > ((var_1_15 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) ? (last_1_var_1_31) : ((var_1_15 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))));
  }
 } else {
  var_1_60 = last_1_var_1_31;
 }
 if (var_1_13 <= var_1_12) {
  if (((var_1_13 * var_1_12) % ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) > var_1_60) {
   var_1_22 = (var_1_25 - var_1_12);
  } else {
   var_1_22 = (var_1_25 - ((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))));
  }
 } else {
  var_1_22 = (((((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) < ((256u + var_1_15))) ? (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) : ((256u + var_1_15)))) + ((((var_1_26 - var_1_18) < 0 ) ? -(var_1_26 - var_1_18) : (var_1_26 - var_1_18))));
 }
 if (var_1_7 < (var_1_8 * var_1_6)) {
  var_1_11 = ((((0) < (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16)))))) ? (0) : (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16)))))));
 } else {
  var_1_11 = ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - var_1_15) + var_1_16);
 }
 if (var_1_8 >= 25.5f) {
  var_1_19 = (! var_1_20);
 }
 if (var_1_15 > var_1_13) {
  if (var_1_8 <= var_1_6) {
   var_1_21 = (var_1_8 + var_1_6);
  } else {
   var_1_21 = ((var_1_6 + var_1_8) - ((((256.85) < ((var_1_5 - var_1_9))) ? (256.85) : ((var_1_5 - var_1_9)))));
  }
 } else {
  var_1_21 = (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) + (var_1_9 - var_1_8));
 }
 if (var_1_20) {
  var_1_31 = (var_1_13 - (((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))) + var_1_18));
 }
 if (var_1_12 <= var_1_33) {
  var_1_47 = (((((var_1_8) > ((var_1_6 - var_1_9))) ? (var_1_8) : ((var_1_6 - var_1_9)))) + var_1_7);
 } else {
  var_1_47 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 }
 var_1_59 = ((((var_1_6 - var_1_8) < 0 ) ? -(var_1_6 - var_1_8) : (var_1_6 - var_1_8)));
 var_1_67 = var_1_13;
 var_1_71 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
 unsigned char stepLocal_15 = var_1_28;
 if ((10u / var_1_64) < stepLocal_15) {
  var_1_74 = (((((var_1_14 - var_1_64) + (var_1_66 + var_1_34)) < 0 ) ? -((var_1_14 - var_1_64) + (var_1_66 + var_1_34)) : ((var_1_14 - var_1_64) + (var_1_66 + var_1_34))));
 } else {
  var_1_74 = var_1_49;
 }
 if (var_1_20) {
  var_1_81 = ((((var_1_66) > (var_1_35)) ? (var_1_66) : (var_1_35)));
 } else {
  var_1_81 = ((((10) > (var_1_15)) ? (10) : (var_1_15)));
 }
 if (var_1_42) {
  var_1_85 = var_1_67;
 }
 if (var_1_39) {
  var_1_88 = 10;
 }
 var_1_90 = var_1_84;
 var_1_92 = var_1_24;
 if (var_1_19) {
  var_1_93 = 10.1;
 }
 var_1_95 = var_1_20;
 if (var_1_92 <= (var_1_23 / var_1_24)) {
  var_1_97 = (var_1_64 - var_1_98);
 } else {
  if (var_1_20 && var_1_37) {
   var_1_97 = (var_1_66 + var_1_65);
  } else {
   var_1_97 = var_1_34;
  }
 }
 if (var_1_85 >= (var_1_22 / -4)) {
  var_1_1 = (var_1_4 - (var_1_5 - var_1_6));
 } else {
  if (64.075 <= var_1_5) {
   var_1_1 = (var_1_6 + ((((var_1_7) < ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9)))));
  } else {
   if (! var_1_19) {
    var_1_1 = ((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7)));
   }
  }
 }
 if (! ((var_1_28 - var_1_29) >= (var_1_85 / var_1_14))) {
  var_1_27 = (((((((((var_1_8) < (31.6)) ? (var_1_8) : (31.6))) - var_1_9)) > (var_1_4)) ? ((((((var_1_8) < (31.6)) ? (var_1_8) : (31.6))) - var_1_9)) : (var_1_4)));
 } else {
  var_1_27 = ((((((((var_1_30) > (var_1_8)) ? (var_1_30) : (var_1_8)))) < ((var_1_4 - var_1_6))) ? (((((var_1_30) > (var_1_8)) ? (var_1_30) : (var_1_8)))) : ((var_1_4 - var_1_6))));
 }
 if ((var_1_88 ^ var_1_16) > (var_1_29 * 1)) {
  var_1_50 = (var_1_20 || var_1_52);
 }
 unsigned long int stepLocal_9 = var_1_22;
 if (var_1_85 > stepLocal_9) {
  if (var_1_9 > var_1_30) {
   var_1_56 = var_1_29;
  } else {
   if (var_1_20) {
    var_1_56 = ((((var_1_33) < (((((((((8) < 0 ) ? -(8) : (8)))) < (var_1_34)) ? (((((8) < 0 ) ? -(8) : (8)))) : (var_1_34))))) ? (var_1_33) : (((((((((8) < 0 ) ? -(8) : (8)))) < (var_1_34)) ? (((((8) < 0 ) ? -(8) : (8)))) : (var_1_34))))));
   } else {
    var_1_56 = (((((((((var_1_34 + 8)) > (var_1_29)) ? ((var_1_34 + 8)) : (var_1_29)))) < (var_1_33)) ? ((((((var_1_34 + 8)) > (var_1_29)) ? ((var_1_34 + 8)) : (var_1_29)))) : (var_1_33)));
   }
  }
 }
 unsigned char stepLocal_13 = var_1_50;
 if (stepLocal_13 && var_1_20) {
  var_1_62 = (((((var_1_31) < (((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18))))) ? (var_1_31) : (((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18)))))) + var_1_81);
 } else {
  var_1_62 = (var_1_16 + (var_1_31 + var_1_14));
 }
 if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < var_1_47) {
  var_1_63 = (var_1_35 + 8);
 } else {
  var_1_63 = (((((0) > (var_1_35)) ? (0) : (var_1_35))) - ((var_1_64 - var_1_65) - var_1_66));
 }
 signed long int stepLocal_18 = ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_35;
 signed long int stepLocal_17 = (- var_1_62) ^ ((((var_1_12) > (var_1_62)) ? (var_1_12) : (var_1_62)));
 if (stepLocal_17 >= 5) {
  if (stepLocal_18 != var_1_12) {
   var_1_76 = (((((((((var_1_28 - var_1_29)) > (var_1_35)) ? ((var_1_28 - var_1_29)) : (var_1_35)))) > ((last_1_var_1_76 - (var_1_22 + var_1_33)))) ? ((((((var_1_28 - var_1_29)) > (var_1_35)) ? ((var_1_28 - var_1_29)) : (var_1_35)))) : ((last_1_var_1_76 - (var_1_22 + var_1_33)))));
  } else {
   var_1_76 = (var_1_29 + (last_1_var_1_76 - (var_1_34 + var_1_22)));
  }
 } else {
  var_1_76 = (var_1_18 - var_1_34);
 }
 signed char stepLocal_22 = var_1_66;
 signed long int stepLocal_21 = var_1_62;
 if ((var_1_26 - var_1_34) > stepLocal_21) {
  if ((var_1_81 >> var_1_80) >= stepLocal_22) {
   var_1_79 = (var_1_20 && ((! var_1_41) || var_1_52));
  } else {
   var_1_79 = (! (var_1_41 && (var_1_52 || var_1_20)));
  }
 }
 if (var_1_79) {
  var_1_91 = var_1_6;
 } else {
  var_1_91 = var_1_9;
 }
 var_1_94 = var_1_62;
 if (var_1_79) {
  var_1_96 = var_1_80;
 }
 if (var_1_50 || var_1_95) {
  if (var_1_20) {
   var_1_32 = (var_1_33 - (var_1_34 + var_1_35));
  } else {
   var_1_32 = (var_1_33 - var_1_34);
  }
 } else {
  if (var_1_95 || (var_1_91 > ((((var_1_8) > (63.375)) ? (var_1_8) : (63.375))))) {
   var_1_32 = 32;
  } else {
   var_1_32 = 16;
  }
 }
 if (var_1_79 || (! var_1_37)) {
  if (var_1_79 && var_1_20) {
   var_1_38 = (var_1_37 && var_1_39);
  } else {
   if (((var_1_40 - var_1_8) - var_1_9) > ((- var_1_47) + (var_1_6 - var_1_5))) {
    if (var_1_19) {
     if (var_1_37) {
      if ((var_1_79 || var_1_20) && var_1_79) {
       var_1_38 = (! ((var_1_18 >= var_1_31) && var_1_20));
      } else {
       var_1_38 = (var_1_79 && var_1_20);
      }
     } else {
      var_1_38 = ((var_1_39 && (var_1_20 || var_1_41)) && var_1_42);
     }
    } else {
     var_1_38 = ((var_1_12 > (var_1_13 + var_1_85)) || (var_1_79 || var_1_42));
    }
   }
  }
 }
 unsigned char stepLocal_25 = ((((49.65) < (var_1_27)) ? (49.65) : (var_1_27))) < 63.4;
 if (stepLocal_25 || var_1_38) {
  var_1_83 = (((((var_1_69) > (((((var_1_8) > (var_1_6)) ? (var_1_8) : (var_1_6))))) ? (var_1_69) : (((((var_1_8) > (var_1_6)) ? (var_1_8) : (var_1_6)))))) + var_1_7);
 } else {
  if (var_1_79) {
   if (var_1_91 < var_1_1) {
    var_1_83 = (((((var_1_6) < (var_1_70)) ? (var_1_6) : (var_1_70))) + var_1_7);
   } else {
    var_1_83 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
   }
  } else {
   if (var_1_19) {
    var_1_83 = ((var_1_5 - var_1_84) - var_1_6);
   }
  }
 }
 if (var_1_38) {
  var_1_86 = -16;
 } else {
  var_1_86 = var_1_34;
 }
 if (var_1_38) {
  var_1_87 = var_1_23;
 } else {
  var_1_87 = var_1_18;
 }
 unsigned char stepLocal_0 = ! (var_1_60 > var_1_34);
 if (var_1_38 || stepLocal_0) {
  var_1_36 = var_1_20;
 } else {
  if (var_1_38) {
   var_1_36 = ((var_1_19 && var_1_20) || (! (! var_1_37)));
  } else {
   var_1_36 = var_1_20;
  }
 }
 signed long int stepLocal_1 = - var_1_94;
 if (stepLocal_1 < (var_1_15 / var_1_26)) {
  if (var_1_36) {
   var_1_43 = (((var_1_45 - var_1_67) - var_1_15) - (var_1_22 + var_1_28));
  } else {
   var_1_43 = ((((var_1_14) > (var_1_67)) ? (var_1_14) : (var_1_67)));
  }
 }
 signed long int stepLocal_3 = ((((var_1_34) > (var_1_29)) ? (var_1_34) : (var_1_29))) - var_1_18;
 unsigned char stepLocal_2 = var_1_50;
 if (var_1_36 || stepLocal_2) {
  if (stepLocal_3 <= var_1_85) {
   var_1_46 = var_1_41;
  } else {
   var_1_46 = (! var_1_41);
  }
 } else {
  var_1_46 = (var_1_50 && var_1_20);
 }
 unsigned char stepLocal_7 = var_1_52;
 if ((var_1_41 || var_1_36) && stepLocal_7) {
  var_1_53 = ((var_1_23 + var_1_33) + var_1_28);
 }
 unsigned long int stepLocal_16 = var_1_85;
 if ((128 * var_1_45) <= stepLocal_16) {
  var_1_75 = (var_1_13 - (var_1_65 + ((((var_1_34) < (var_1_85)) ? (var_1_34) : (var_1_85)))));
 } else {
  if (var_1_19) {
   var_1_75 = (var_1_28 + var_1_18);
  } else {
   if ((var_1_8 / var_1_40) == var_1_83) {
    var_1_75 = var_1_18;
   } else {
    var_1_75 = (((((16) > (var_1_94)) ? (16) : (var_1_94))) + var_1_18);
   }
  }
 }
 if ((((((4) < (var_1_94)) ? (4) : (var_1_94))) / var_1_33) >= var_1_43) {
  var_1_68 = var_1_7;
 } else {
  if (var_1_52) {
   var_1_68 = ((((var_1_5) > (((((var_1_4) < (var_1_30)) ? (var_1_4) : (var_1_30))))) ? (var_1_5) : (((((var_1_4) < (var_1_30)) ? (var_1_4) : (var_1_30))))));
  } else {
   var_1_68 = (((((var_1_7 + (var_1_69 + var_1_70))) < (var_1_4)) ? ((var_1_7 + (var_1_69 + var_1_70))) : (var_1_4)));
  }
 }
 unsigned char stepLocal_8 = var_1_68 > (- var_1_5);
 if (var_1_93 <= ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) {
  if (var_1_38 || stepLocal_8) {
   var_1_55 = (var_1_34 + var_1_29);
  } else {
   var_1_55 = (var_1_33 - var_1_29);
  }
 } else {
  var_1_55 = ((((var_1_33) < (25)) ? (var_1_33) : (25)));
 }
 signed long int stepLocal_10 = var_1_60;
 if (var_1_49 > stepLocal_10) {
  var_1_58 = (var_1_60 + var_1_18);
 } else {
  if (var_1_4 == var_1_68) {
   if (((var_1_9 + var_1_6) - ((((var_1_40) > (var_1_8)) ? (var_1_40) : (var_1_8)))) < var_1_5) {
    var_1_58 = (var_1_74 - ((((var_1_13) < (var_1_62)) ? (var_1_13) : (var_1_62))));
   } else {
    var_1_58 = ((((var_1_62) > (var_1_49)) ? (var_1_62) : (var_1_49)));
   }
  } else {
   var_1_58 = ((((((((((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) < (var_1_74)) ? (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) : (var_1_74)))) > (var_1_29)) ? (((((((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) < (var_1_74)) ? (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) : (var_1_74)))) : (var_1_29)));
  }
 }
 signed long int stepLocal_20 = var_1_45;
 unsigned char stepLocal_19 = var_1_35;
 if (stepLocal_19 < (((((var_1_22) > (var_1_58)) ? (var_1_22) : (var_1_58))) & (var_1_60 + var_1_49))) {
  if (var_1_29 < stepLocal_20) {
   var_1_77 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  } else {
   var_1_77 = (((((((((var_1_60) > (var_1_87)) ? (var_1_60) : (var_1_87))) + var_1_78)) > ((last_1_var_1_77 + var_1_24))) ? ((((((var_1_60) > (var_1_87)) ? (var_1_60) : (var_1_87))) + var_1_78)) : ((last_1_var_1_77 + var_1_24))));
  }
 } else {
  var_1_77 = (var_1_55 + last_1_var_1_77);
 }
 signed long int stepLocal_6 = var_1_35 * (var_1_16 << var_1_45);
 signed char stepLocal_5 = var_1_23;
 unsigned char stepLocal_4 = var_1_95;
 if ((var_1_35 + var_1_58) == stepLocal_5) {
  var_1_48 = ((((64) > ((var_1_49 - (var_1_35 + 128)))) ? (64) : ((var_1_49 - (var_1_35 + 128)))));
 } else {
  if ((var_1_95 || var_1_20) && stepLocal_4) {
   if (((var_1_33 - var_1_34) + var_1_58) == stepLocal_6) {
    var_1_48 = ((22297 - var_1_32) + ((((var_1_14) < (((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33))))) ? (var_1_14) : (((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33)))))));
   } else {
    var_1_48 = ((((((var_1_29 + 32) + var_1_15)) < (((((var_1_28) > (var_1_14)) ? (var_1_28) : (var_1_14))))) ? (((var_1_29 + 32) + var_1_15)) : (((((var_1_28) > (var_1_14)) ? (var_1_28) : (var_1_14))))));
   }
  } else {
   var_1_48 = ((var_1_14 - (10000 - 8)) + 64);
  }
 }
 unsigned long int stepLocal_14 = (var_1_77 * var_1_85) + var_1_18;
 if (stepLocal_14 > (var_1_22 * (~ var_1_85))) {
  var_1_72 = ((((var_1_65) > (((((((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) < (var_1_66)) ? (((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) : (var_1_66))))) ? (var_1_65) : (((((((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) < (var_1_66)) ? (((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) : (var_1_66))))));
 } else {
  var_1_72 = ((((var_1_34) > (((((var_1_64) < ((var_1_65 - var_1_35))) ? (var_1_64) : ((var_1_65 - var_1_35)))))) ? (var_1_34) : (((((var_1_64) < ((var_1_65 - var_1_35))) ? (var_1_64) : ((var_1_65 - var_1_35)))))));
 }
 if (var_1_19) {
  var_1_89 = var_1_31;
 } else {
  var_1_89 = var_1_72;
 }
 signed long int stepLocal_24 = (var_1_89 - var_1_11) % var_1_64;
 unsigned long int stepLocal_23 = var_1_85;
 if (var_1_58 != stepLocal_24) {
  if (stepLocal_23 == (var_1_87 * var_1_80)) {
   var_1_82 = (((((((((var_1_6) > (1.000000000425E9)) ? (var_1_6) : (1.000000000425E9))) - var_1_8)) > (99.2)) ? ((((((var_1_6) > (1.000000000425E9)) ? (var_1_6) : (1.000000000425E9))) - var_1_8)) : (99.2)));
  } else {
   var_1_82 = (var_1_6 - var_1_5);
  }
 } else {
  if ((- var_1_7) <= (var_1_6 - var_1_5)) {
   var_1_82 = (var_1_9 - (var_1_6 + var_1_8));
  } else {
   var_1_82 = (var_1_9 - var_1_5);
  }
 }
 if (var_1_15 > (var_1_13 ^ (var_1_16 / var_1_14))) {
  var_1_17 = (var_1_13 - 64);
 } else {
  if ((var_1_58 * var_1_89) <= var_1_12) {
   var_1_17 = (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + (var_1_14 - var_1_18));
  } else {
   var_1_17 = var_1_13;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
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
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -128);
 assume_abort_if_not(var_1_23 <= 127);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -128);
 assume_abort_if_not(var_1_24 <= 127);
 assume_abort_if_not(var_1_24 != 0);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 2147483647);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 1073741823);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 255);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 64);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 4611686.018427388000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1610612734);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 32767);
 assume_abort_if_not(var_1_49 <= 65534);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 94);
 assume_abort_if_not(var_1_64 <= 126);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 31);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 63);
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= -230584.3009213691400e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691400e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= -230584.3009213691400e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691400e+12F && var_1_70 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_78 >= -1073741823);
 assume_abort_if_not(var_1_78 <= 1073741823);
 var_1_80 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_80 >= 1);
 assume_abort_if_not(var_1_80 <= 14);
 var_1_84 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
 var_1_98 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_98 >= 0);
 assume_abort_if_not(var_1_98 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_85 = var_1_85;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_85 >= (var_1_22 / -4)) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - var_1_6)))) : ((64.075 <= var_1_5) ? (var_1_1 == ((float) (var_1_6 + ((((var_1_7) < ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9))))))) : ((! var_1_19) ? (var_1_1 == ((float) ((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7))))) : 1))) && ((var_1_7 < (var_1_8 * var_1_6)) ? (var_1_11 == ((unsigned short int) ((((0) < (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16)))))) ? (0) : (((((var_1_12) > ((var_1_13 - 16))) ? (var_1_12) : ((var_1_13 - 16))))))))) : (var_1_11 == ((unsigned short int) ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - var_1_15) + var_1_16))))) && ((var_1_15 > (var_1_13 ^ (var_1_16 / var_1_14))) ? (var_1_17 == ((unsigned short int) (var_1_13 - 64))) : (((var_1_58 * var_1_89) <= var_1_12) ? (var_1_17 == ((unsigned short int) (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + (var_1_14 - var_1_18)))) : (var_1_17 == ((unsigned short int) var_1_13))))) && ((var_1_8 >= 25.5f) ? (var_1_19 == ((unsigned char) (! var_1_20))) : 1)) && ((var_1_15 > var_1_13) ? ((var_1_8 <= var_1_6) ? (var_1_21 == ((double) (var_1_8 + var_1_6))) : (var_1_21 == ((double) ((var_1_6 + var_1_8) - ((((256.85) < ((var_1_5 - var_1_9))) ? (256.85) : ((var_1_5 - var_1_9)))))))) : (var_1_21 == ((double) (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) + (var_1_9 - var_1_8)))))) && ((var_1_13 <= var_1_12) ? ((((var_1_13 * var_1_12) % ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) > var_1_60) ? (var_1_22 == ((unsigned long int) (var_1_25 - var_1_12))) : (var_1_22 == ((unsigned long int) (var_1_25 - ((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))))))) : (var_1_22 == ((unsigned long int) (((((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) < ((256u + var_1_15))) ? (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) : ((256u + var_1_15)))) + ((((var_1_26 - var_1_18) < 0 ) ? -(var_1_26 - var_1_18) : (var_1_26 - var_1_18)))))))) && ((! ((var_1_28 - var_1_29) >= (var_1_85 / var_1_14))) ? (var_1_27 == ((double) (((((((((var_1_8) < (31.6)) ? (var_1_8) : (31.6))) - var_1_9)) > (var_1_4)) ? ((((((var_1_8) < (31.6)) ? (var_1_8) : (31.6))) - var_1_9)) : (var_1_4))))) : (var_1_27 == ((double) ((((((((var_1_30) > (var_1_8)) ? (var_1_30) : (var_1_8)))) < ((var_1_4 - var_1_6))) ? (((((var_1_30) > (var_1_8)) ? (var_1_30) : (var_1_8)))) : ((var_1_4 - var_1_6)))))))) && (var_1_20 ? (var_1_31 == ((signed long int) (var_1_13 - (((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))) + var_1_18)))) : 1)) && ((var_1_50 || var_1_95) ? (var_1_20 ? (var_1_32 == ((unsigned char) (var_1_33 - (var_1_34 + var_1_35)))) : (var_1_32 == ((unsigned char) (var_1_33 - var_1_34)))) : ((var_1_95 || (var_1_91 > ((((var_1_8) > (63.375)) ? (var_1_8) : (63.375))))) ? (var_1_32 == ((unsigned char) 32)) : (var_1_32 == ((unsigned char) 16))))) && ((var_1_38 || (! (var_1_60 > var_1_34))) ? (var_1_36 == ((unsigned char) var_1_20)) : (var_1_38 ? (var_1_36 == ((unsigned char) ((var_1_19 && var_1_20) || (! (! var_1_37))))) : (var_1_36 == ((unsigned char) var_1_20))))) && ((var_1_79 || (! var_1_37)) ? ((var_1_79 && var_1_20) ? (var_1_38 == ((unsigned char) (var_1_37 && var_1_39))) : ((((var_1_40 - var_1_8) - var_1_9) > ((- var_1_47) + (var_1_6 - var_1_5))) ? (var_1_19 ? (var_1_37 ? (((var_1_79 || var_1_20) && var_1_79) ? (var_1_38 == ((unsigned char) (! ((var_1_18 >= var_1_31) && var_1_20)))) : (var_1_38 == ((unsigned char) (var_1_79 && var_1_20)))) : (var_1_38 == ((unsigned char) ((var_1_39 && (var_1_20 || var_1_41)) && var_1_42)))) : (var_1_38 == ((unsigned char) ((var_1_12 > (var_1_13 + var_1_85)) || (var_1_79 || var_1_42))))) : 1)) : 1)) && (((- var_1_94) < (var_1_15 / var_1_26)) ? (var_1_36 ? (var_1_43 == ((signed long int) (((var_1_45 - var_1_67) - var_1_15) - (var_1_22 + var_1_28)))) : (var_1_43 == ((signed long int) ((((var_1_14) > (var_1_67)) ? (var_1_14) : (var_1_67)))))) : 1)) && ((var_1_36 || var_1_50) ? (((((((var_1_34) > (var_1_29)) ? (var_1_34) : (var_1_29))) - var_1_18) <= var_1_85) ? (var_1_46 == ((unsigned char) var_1_41)) : (var_1_46 == ((unsigned char) (! var_1_41)))) : (var_1_46 == ((unsigned char) (var_1_50 && var_1_20))))) && ((var_1_12 <= var_1_33) ? (var_1_47 == ((double) (((((var_1_8) > ((var_1_6 - var_1_9))) ? (var_1_8) : ((var_1_6 - var_1_9)))) + var_1_7))) : (var_1_47 == ((double) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))))) && (((var_1_35 + var_1_58) == var_1_23) ? (var_1_48 == ((unsigned short int) ((((64) > ((var_1_49 - (var_1_35 + 128)))) ? (64) : ((var_1_49 - (var_1_35 + 128))))))) : (((var_1_95 || var_1_20) && var_1_95) ? ((((var_1_33 - var_1_34) + var_1_58) == (var_1_35 * (var_1_16 << var_1_45))) ? (var_1_48 == ((unsigned short int) ((22297 - var_1_32) + ((((var_1_14) < (((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33))))) ? (var_1_14) : (((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33))))))))) : (var_1_48 == ((unsigned short int) ((((((var_1_29 + 32) + var_1_15)) < (((((var_1_28) > (var_1_14)) ? (var_1_28) : (var_1_14))))) ? (((var_1_29 + 32) + var_1_15)) : (((((var_1_28) > (var_1_14)) ? (var_1_28) : (var_1_14))))))))) : (var_1_48 == ((unsigned short int) ((var_1_14 - (10000 - 8)) + 64)))))) && (((var_1_88 ^ var_1_16) > (var_1_29 * 1)) ? (var_1_50 == ((unsigned char) (var_1_20 || var_1_52))) : 1)) && (((var_1_41 || var_1_36) && var_1_52) ? (var_1_53 == ((signed short int) ((var_1_23 + var_1_33) + var_1_28))) : 1)) && ((var_1_93 <= ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) ? ((var_1_38 || (var_1_68 > (- var_1_5))) ? (var_1_55 == ((unsigned char) (var_1_34 + var_1_29))) : (var_1_55 == ((unsigned char) (var_1_33 - var_1_29)))) : (var_1_55 == ((unsigned char) ((((var_1_33) < (25)) ? (var_1_33) : (25))))))) && ((var_1_85 > var_1_22) ? ((var_1_9 > var_1_30) ? (var_1_56 == ((unsigned char) var_1_29)) : (var_1_20 ? (var_1_56 == ((unsigned char) ((((var_1_33) < (((((((((8) < 0 ) ? -(8) : (8)))) < (var_1_34)) ? (((((8) < 0 ) ? -(8) : (8)))) : (var_1_34))))) ? (var_1_33) : (((((((((8) < 0 ) ? -(8) : (8)))) < (var_1_34)) ? (((((8) < 0 ) ? -(8) : (8)))) : (var_1_34)))))))) : (var_1_56 == ((unsigned char) (((((((((var_1_34 + 8)) > (var_1_29)) ? ((var_1_34 + 8)) : (var_1_29)))) < (var_1_33)) ? ((((((var_1_34 + 8)) > (var_1_29)) ? ((var_1_34 + 8)) : (var_1_29)))) : (var_1_33))))))) : 1)) && ((var_1_49 > var_1_60) ? (var_1_58 == ((signed long int) (var_1_60 + var_1_18))) : ((var_1_4 == var_1_68) ? ((((var_1_9 + var_1_6) - ((((var_1_40) > (var_1_8)) ? (var_1_40) : (var_1_8)))) < var_1_5) ? (var_1_58 == ((signed long int) (var_1_74 - ((((var_1_13) < (var_1_62)) ? (var_1_13) : (var_1_62)))))) : (var_1_58 == ((signed long int) ((((var_1_62) > (var_1_49)) ? (var_1_62) : (var_1_49)))))) : (var_1_58 == ((signed long int) ((((((((((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) < (var_1_74)) ? (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) : (var_1_74)))) > (var_1_29)) ? (((((((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) < (var_1_74)) ? (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) : (var_1_74)))) : (var_1_29)))))))) && (var_1_59 == ((double) ((((var_1_6 - var_1_8) < 0 ) ? -(var_1_6 - var_1_8) : (var_1_6 - var_1_8)))))) && ((last_1_var_1_36 && last_1_var_1_50) ? ((var_1_18 >= last_1_var_1_74) ? (var_1_60 == ((signed long int) ((((((((last_1_var_1_17 + last_1_var_1_85)) > (var_1_33)) ? ((last_1_var_1_17 + last_1_var_1_85)) : (var_1_33))) < 0 ) ? -(((((last_1_var_1_17 + last_1_var_1_85)) > (var_1_33)) ? ((last_1_var_1_17 + last_1_var_1_85)) : (var_1_33))) : (((((last_1_var_1_17 + last_1_var_1_85)) > (var_1_33)) ? ((last_1_var_1_17 + last_1_var_1_85)) : (var_1_33))))))) : (var_1_60 == ((signed long int) ((((last_1_var_1_31) > ((var_1_15 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) ? (last_1_var_1_31) : ((var_1_15 - ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))))) : (var_1_60 == ((signed long int) last_1_var_1_31)))) && ((var_1_50 && var_1_20) ? (var_1_62 == ((signed long int) (((((var_1_31) < (((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18))))) ? (var_1_31) : (((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18)))))) + var_1_81))) : (var_1_62 == ((signed long int) (var_1_16 + (var_1_31 + var_1_14)))))) && ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < var_1_47) ? (var_1_63 == ((signed char) (var_1_35 + 8))) : (var_1_63 == ((signed char) (((((0) > (var_1_35)) ? (0) : (var_1_35))) - ((var_1_64 - var_1_65) - var_1_66)))))) && (var_1_67 == ((unsigned short int) var_1_13))) && (((((((4) < (var_1_94)) ? (4) : (var_1_94))) / var_1_33) >= var_1_43) ? (var_1_68 == ((double) var_1_7)) : (var_1_52 ? (var_1_68 == ((double) ((((var_1_5) > (((((var_1_4) < (var_1_30)) ? (var_1_4) : (var_1_30))))) ? (var_1_5) : (((((var_1_4) < (var_1_30)) ? (var_1_4) : (var_1_30)))))))) : (var_1_68 == ((double) (((((var_1_7 + (var_1_69 + var_1_70))) < (var_1_4)) ? ((var_1_7 + (var_1_69 + var_1_70))) : (var_1_4)))))))) && (var_1_71 == ((signed short int) ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) && ((((var_1_77 * var_1_85) + var_1_18) > (var_1_22 * (~ var_1_85))) ? (var_1_72 == ((signed char) ((((var_1_65) > (((((((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) < (var_1_66)) ? (((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) : (var_1_66))))) ? (var_1_65) : (((((((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) < (var_1_66)) ? (((((var_1_64) > (var_1_34)) ? (var_1_64) : (var_1_34)))) : (var_1_66)))))))) : (var_1_72 == ((signed char) ((((var_1_34) > (((((var_1_64) < ((var_1_65 - var_1_35))) ? (var_1_64) : ((var_1_65 - var_1_35)))))) ? (var_1_34) : (((((var_1_64) < ((var_1_65 - var_1_35))) ? (var_1_64) : ((var_1_65 - var_1_35))))))))))) && (((10u / var_1_64) < var_1_28) ? (var_1_74 == ((unsigned short int) (((((var_1_14 - var_1_64) + (var_1_66 + var_1_34)) < 0 ) ? -((var_1_14 - var_1_64) + (var_1_66 + var_1_34)) : ((var_1_14 - var_1_64) + (var_1_66 + var_1_34)))))) : (var_1_74 == ((unsigned short int) var_1_49)))) && (((128 * var_1_45) <= var_1_85) ? (var_1_75 == ((unsigned short int) (var_1_13 - (var_1_65 + ((((var_1_34) < (var_1_85)) ? (var_1_34) : (var_1_85))))))) : (var_1_19 ? (var_1_75 == ((unsigned short int) (var_1_28 + var_1_18))) : (((var_1_8 / var_1_40) == var_1_83) ? (var_1_75 == ((unsigned short int) var_1_18)) : (var_1_75 == ((unsigned short int) (((((16) > (var_1_94)) ? (16) : (var_1_94))) + var_1_18))))))) && ((((- var_1_62) ^ ((((var_1_12) > (var_1_62)) ? (var_1_12) : (var_1_62)))) >= 5) ? (((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_35) != var_1_12) ? (var_1_76 == ((signed short int) (((((((((var_1_28 - var_1_29)) > (var_1_35)) ? ((var_1_28 - var_1_29)) : (var_1_35)))) > ((last_1_var_1_76 - (var_1_22 + var_1_33)))) ? ((((((var_1_28 - var_1_29)) > (var_1_35)) ? ((var_1_28 - var_1_29)) : (var_1_35)))) : ((last_1_var_1_76 - (var_1_22 + var_1_33))))))) : (var_1_76 == ((signed short int) (var_1_29 + (last_1_var_1_76 - (var_1_34 + var_1_22)))))) : (var_1_76 == ((signed short int) (var_1_18 - var_1_34))))) && ((var_1_35 < (((((var_1_22) > (var_1_58)) ? (var_1_22) : (var_1_58))) & (var_1_60 + var_1_49))) ? ((var_1_29 < var_1_45) ? (var_1_77 == ((signed long int) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) : (var_1_77 == ((signed long int) (((((((((var_1_60) > (var_1_87)) ? (var_1_60) : (var_1_87))) + var_1_78)) > ((last_1_var_1_77 + var_1_24))) ? ((((((var_1_60) > (var_1_87)) ? (var_1_60) : (var_1_87))) + var_1_78)) : ((last_1_var_1_77 + var_1_24))))))) : (var_1_77 == ((signed long int) (var_1_55 + last_1_var_1_77))))) && (((var_1_26 - var_1_34) > var_1_62) ? (((var_1_81 >> var_1_80) >= var_1_66) ? (var_1_79 == ((unsigned char) (var_1_20 && ((! var_1_41) || var_1_52)))) : (var_1_79 == ((unsigned char) (! (var_1_41 && (var_1_52 || var_1_20)))))) : 1)) && (var_1_20 ? (var_1_81 == ((unsigned short int) ((((var_1_66) > (var_1_35)) ? (var_1_66) : (var_1_35))))) : (var_1_81 == ((unsigned short int) ((((10) > (var_1_15)) ? (10) : (var_1_15))))))) && ((var_1_58 != ((var_1_89 - var_1_11) % var_1_64)) ? ((var_1_85 == (var_1_87 * var_1_80)) ? (var_1_82 == ((double) (((((((((var_1_6) > (1.000000000425E9)) ? (var_1_6) : (1.000000000425E9))) - var_1_8)) > (99.2)) ? ((((((var_1_6) > (1.000000000425E9)) ? (var_1_6) : (1.000000000425E9))) - var_1_8)) : (99.2))))) : (var_1_82 == ((double) (var_1_6 - var_1_5)))) : (((- var_1_7) <= (var_1_6 - var_1_5)) ? (var_1_82 == ((double) (var_1_9 - (var_1_6 + var_1_8)))) : (var_1_82 == ((double) (var_1_9 - var_1_5)))))) && (((((((49.65) < (var_1_27)) ? (49.65) : (var_1_27))) < 63.4) || var_1_38) ? (var_1_83 == ((double) (((((var_1_69) > (((((var_1_8) > (var_1_6)) ? (var_1_8) : (var_1_6))))) ? (var_1_69) : (((((var_1_8) > (var_1_6)) ? (var_1_8) : (var_1_6)))))) + var_1_7))) : (var_1_79 ? ((var_1_91 < var_1_1) ? (var_1_83 == ((double) (((((var_1_6) < (var_1_70)) ? (var_1_6) : (var_1_70))) + var_1_7))) : (var_1_83 == ((double) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))))) : (var_1_19 ? (var_1_83 == ((double) ((var_1_5 - var_1_84) - var_1_6))) : 1)))) && (var_1_42 ? (var_1_85 == ((unsigned long int) var_1_67)) : 1)) && (var_1_38 ? (var_1_86 == ((signed char) -16)) : (var_1_86 == ((signed char) var_1_34)))) && (var_1_38 ? (var_1_87 == ((signed short int) var_1_23)) : (var_1_87 == ((signed short int) var_1_18)))) && (var_1_39 ? (var_1_88 == ((unsigned short int) 10)) : 1)) && (var_1_19 ? (var_1_89 == ((signed short int) var_1_31)) : (var_1_89 == ((signed short int) var_1_72)))) && (var_1_90 == ((float) var_1_84))) && (var_1_79 ? (var_1_91 == ((double) var_1_6)) : (var_1_91 == ((double) var_1_9)))) && (var_1_92 == ((signed short int) var_1_24))) && (var_1_19 ? (var_1_93 == ((double) 10.1)) : 1)) && (var_1_94 == ((signed long int) var_1_62))) && (var_1_95 == ((unsigned char) var_1_20))) && (var_1_79 ? (var_1_96 == ((signed char) var_1_80)) : 1)) && ((var_1_92 <= (var_1_23 / var_1_24)) ? (var_1_97 == ((signed char) (var_1_64 - var_1_98))) : ((var_1_20 && var_1_37) ? (var_1_97 == ((signed char) (var_1_66 + var_1_65))) : (var_1_97 == ((signed char) var_1_34))))
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
