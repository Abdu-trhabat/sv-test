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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 5;
signed short int var_1_8 = 500;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 10;
unsigned char var_1_12 = 5;
signed short int var_1_13 = 8;
unsigned long int var_1_14 = 0;
unsigned long int var_1_18 = 1000000000;
unsigned long int var_1_19 = 2507200579;
signed char var_1_20 = 25;
signed char var_1_22 = -32;
unsigned char var_1_23 = 50;
unsigned char var_1_24 = 10;
signed char var_1_25 = -8;
signed char var_1_26 = 64;
signed char var_1_27 = 4;
signed char var_1_28 = 32;
signed char var_1_29 = 4;
signed char var_1_30 = 5;
signed char var_1_31 = -2;
double var_1_32 = 0.4;
double var_1_33 = 0.6;
double var_1_34 = 50.75;
double var_1_35 = 4.475;
signed long int var_1_36 = 32;
signed long int var_1_37 = 1656241248;
double var_1_39 = 0.050000000000000044;
double var_1_40 = 31.7;
double var_1_41 = 0.4;
signed long int var_1_42 = -32;
unsigned short int var_1_43 = 64;
double var_1_45 = 7.56;
double var_1_46 = 0.75;
unsigned short int var_1_47 = 10000;
unsigned short int var_1_48 = 25495;
unsigned short int var_1_49 = 10000;
unsigned short int var_1_50 = 41238;
unsigned short int var_1_51 = 43803;
float var_1_52 = 4.3;
float var_1_53 = 5.5;
float var_1_54 = 128.2;
float var_1_55 = 3.6;
float var_1_56 = 100000000000.875;
float var_1_57 = 50.25;
float var_1_58 = 10.25;
float var_1_59 = 16.5;
unsigned long int var_1_60 = 100;
unsigned long int var_1_61 = 3748899603;
unsigned long int var_1_62 = 4072701355;
unsigned long int var_1_63 = 1122015799;
signed short int var_1_64 = 128;
signed short int var_1_65 = -10;
unsigned char var_1_66 = 8;
signed long int var_1_67 = -64;
signed long int var_1_68 = 1385622100;
signed char var_1_69 = 2;
unsigned char var_1_70 = 1;
unsigned long int var_1_71 = 2;
double var_1_72 = 63.5;
unsigned char var_1_73 = 0;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 128;
unsigned short int var_1_80 = 0;
unsigned short int var_1_82 = 29353;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 64;
signed short int var_1_85 = 4;
signed char var_1_86 = 2;
float var_1_87 = 24.5;
signed long int var_1_88 = -25;
double var_1_90 = 10.57;
double var_1_92 = 256.1;
double var_1_93 = 5.5;
signed long int var_1_94 = -5;
unsigned short int var_1_95 = 100;
unsigned char var_1_96 = 0;
double var_1_97 = 64.2;
signed long int var_1_98 = -16;
unsigned short int var_1_99 = 8;
unsigned char var_1_100 = 1;
unsigned short int var_1_101 = 8;
unsigned char var_1_102 = 4;
double var_1_103 = 7.2;
float var_1_104 = 31.4;
unsigned short int var_1_105 = 25;
float var_1_106 = 199.25;
unsigned char var_1_107 = 0;
double var_1_108 = -0.4;
double var_1_109 = 50.75;
signed char var_1_110 = 16;
unsigned long int last_1_var_1_10 = 64;
unsigned char last_1_var_1_12 = 5;
signed char last_1_var_1_20 = 25;
signed long int last_1_var_1_36 = 32;
signed long int last_1_var_1_42 = -32;
unsigned long int last_1_var_1_60 = 100;
signed short int last_1_var_1_64 = 128;
unsigned long int last_1_var_1_71 = 2;
unsigned char last_1_var_1_83 = 1;
signed short int last_1_var_1_85 = 4;
signed long int last_1_var_1_88 = -25;
signed long int last_1_var_1_94 = -5;
unsigned short int last_1_var_1_95 = 100;
double last_1_var_1_97 = 64.2;
unsigned short int last_1_var_1_105 = 25;
double last_1_var_1_109 = 50.75;
void initially(void) {
}
void step(void) {
 signed char stepLocal_4 = var_1_30;
 unsigned long int stepLocal_3 = last_1_var_1_60 + var_1_27;
 unsigned char stepLocal_2 = var_1_7 < last_1_var_1_20;
 signed long int stepLocal_1 = last_1_var_1_88;
 if (var_1_34 >= (- var_1_33)) {
  if ((last_1_var_1_60 > var_1_24) && stepLocal_2) {
   var_1_36 = (5 + var_1_22);
  } else {
   if (stepLocal_3 > last_1_var_1_88) {
    var_1_36 = (var_1_26 + last_1_var_1_20);
   } else {
    var_1_36 = ((var_1_37 - var_1_30) - var_1_27);
   }
  }
 } else {
  if ((var_1_8 * var_1_29) != stepLocal_1) {
   if (stepLocal_4 >= var_1_22) {
    var_1_36 = var_1_8;
   } else {
    var_1_36 = (((((((last_1_var_1_105) > (var_1_31)) ? (last_1_var_1_105) : (var_1_31))) < 0 ) ? -((((last_1_var_1_105) > (var_1_31)) ? (last_1_var_1_105) : (var_1_31))) : ((((last_1_var_1_105) > (var_1_31)) ? (last_1_var_1_105) : (var_1_31)))));
   }
  } else {
   var_1_36 = var_1_27;
  }
 }
 signed long int stepLocal_12 = (last_1_var_1_12 - var_1_13) & var_1_27;
 unsigned long int stepLocal_11 = last_1_var_1_10 * (var_1_47 * var_1_11);
 if (stepLocal_11 == (~ last_1_var_1_42)) {
  if (stepLocal_12 == last_1_var_1_64) {
   var_1_67 = ((((((var_1_50) < (var_1_30)) ? (var_1_50) : (var_1_30))) + last_1_var_1_12) - (var_1_68 - 128));
  }
 }
 unsigned long int stepLocal_10 = last_1_var_1_71;
 signed long int stepLocal_9 = (((var_1_50) > ((last_1_var_1_42 - 2))) ? (var_1_50) : ((last_1_var_1_42 - 2)));
 if (((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36))) < stepLocal_10) {
  if (var_1_40 != (var_1_53 * (15.25 / 100.25))) {
   if (-4 > stepLocal_9) {
    var_1_64 = (last_1_var_1_64 + var_1_24);
   } else {
    var_1_64 = (var_1_65 + ((((last_1_var_1_64) < 0 ) ? -(last_1_var_1_64) : (last_1_var_1_64))));
   }
  } else {
   var_1_64 = (last_1_var_1_83 + var_1_30);
  }
 } else {
  if (last_1_var_1_97 > last_1_var_1_109) {
   if (! var_1_6) {
    var_1_64 = (var_1_13 - 16);
   }
  }
 }
 var_1_10 = ((((var_1_8) > (var_1_11)) ? (var_1_8) : (var_1_11)));
 unsigned long int stepLocal_0 = (3877202530u - var_1_8) >> var_1_13;
 if (8u == stepLocal_0) {
  var_1_12 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
 }
 var_1_25 = (var_1_13 - (var_1_26 - var_1_27));
 if (! (var_1_36 != ((((var_1_26) > (var_1_22)) ? (var_1_26) : (var_1_22))))) {
  var_1_28 = (var_1_13 + ((var_1_29 - var_1_30) + var_1_31));
 }
 if (var_1_30 < var_1_10) {
  var_1_32 = var_1_33;
 } else {
  var_1_32 = ((((((((var_1_33) > (4.8)) ? (var_1_33) : (4.8)))) < ((var_1_34 + var_1_35))) ? (((((var_1_33) > (4.8)) ? (var_1_33) : (4.8)))) : ((var_1_34 + var_1_35))));
 }
 if (var_1_9) {
  var_1_60 = ((((last_1_var_1_60) < (var_1_30)) ? (last_1_var_1_60) : (var_1_30)));
 } else {
  var_1_60 = ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) - (var_1_63 - var_1_47));
 }
 if (var_1_27 > (var_1_13 - ((((var_1_26) > (var_1_29)) ? (var_1_26) : (var_1_29))))) {
  var_1_66 = var_1_30;
 }
 var_1_70 = var_1_9;
 if ((var_1_41 - (var_1_59 + var_1_58)) == (- (var_1_33 / var_1_46))) {
  var_1_71 = ((var_1_61 - var_1_27) - (((((var_1_8 + var_1_29)) > (var_1_24)) ? ((var_1_8 + var_1_29)) : (var_1_24))));
 }
 var_1_72 = (var_1_40 - var_1_58);
 var_1_97 = var_1_58;
 if (var_1_9) {
  var_1_98 = var_1_7;
 } else {
  var_1_98 = var_1_8;
 }
 var_1_99 = var_1_60;
 var_1_100 = var_1_6;
 var_1_101 = var_1_24;
 if (var_1_76) {
  var_1_102 = var_1_84;
 }
 var_1_103 = var_1_58;
 if (var_1_5) {
  var_1_104 = var_1_59;
 } else {
  var_1_104 = 8.5f;
 }
 if (var_1_77) {
  var_1_105 = var_1_13;
 } else {
  var_1_105 = var_1_30;
 }
 if (var_1_77) {
  var_1_106 = var_1_54;
 } else {
  var_1_106 = var_1_40;
 }
 if (var_1_76) {
  var_1_107 = var_1_75;
 }
 if (var_1_9) {
  var_1_108 = var_1_55;
 } else {
  var_1_108 = var_1_53;
 }
 if (var_1_100) {
  var_1_109 = var_1_41;
 } else {
  var_1_109 = var_1_59;
 }
 signed char stepLocal_31 = var_1_27;
 unsigned short int stepLocal_30 = var_1_99;
 unsigned long int stepLocal_29 = var_1_62;
 if (var_1_100) {
  if (var_1_10 <= stepLocal_31) {
   if (var_1_13 < stepLocal_29) {
    var_1_88 = ((var_1_99 + var_1_22) + var_1_82);
   } else {
    var_1_88 = ((((var_1_13) > (var_1_47)) ? (var_1_13) : (var_1_47)));
   }
  } else {
   var_1_88 = (var_1_82 + var_1_27);
  }
 } else {
  if ((var_1_98 + var_1_24) > stepLocal_30) {
   var_1_88 = ((((100 - (var_1_47 + var_1_8)) < 0 ) ? -(100 - (var_1_47 + var_1_8)) : (100 - (var_1_47 + var_1_8))));
  } else {
   var_1_88 = (var_1_36 - var_1_79);
  }
 }
 if ((var_1_72 * var_1_103) != var_1_108) {
  if (var_1_72 > (var_1_103 + var_1_108)) {
   var_1_14 = (var_1_13 + ((var_1_18 - var_1_8) + var_1_102));
  } else {
   var_1_14 = (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - ((((var_1_102) < (var_1_8)) ? (var_1_102) : (var_1_8))));
  }
 }
 unsigned long int stepLocal_23 = var_1_14;
 if (var_1_7 >= stepLocal_23) {
  var_1_83 = (var_1_24 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))));
 } else {
  var_1_83 = ((var_1_26 + var_1_84) - var_1_29);
 }
 signed short int stepLocal_22 = var_1_13;
 unsigned char stepLocal_21 = ((((var_1_65) > (var_1_47)) ? (var_1_65) : (var_1_47))) > (var_1_14 - var_1_99);
 signed long int stepLocal_20 = var_1_67;
 unsigned char stepLocal_19 = var_1_6;
 unsigned long int stepLocal_18 = var_1_24 / var_1_19;
 unsigned short int stepLocal_17 = var_1_48;
 if (stepLocal_21 && ((var_1_10 / var_1_68) <= var_1_37)) {
  if (var_1_63 <= stepLocal_17) {
   var_1_78 = (var_1_13 + ((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))));
  } else {
   if (stepLocal_18 <= var_1_48) {
    var_1_78 = ((((var_1_30) < ((var_1_26 + var_1_29))) ? (var_1_30) : ((var_1_26 + var_1_29))));
   } else {
    if (stepLocal_22 != ((((var_1_67) < (var_1_71)) ? (var_1_67) : (var_1_71)))) {
     var_1_78 = ((((((((var_1_24) < (var_1_13)) ? (var_1_24) : (var_1_13)))) > (var_1_30)) ? (((((var_1_24) < (var_1_13)) ? (var_1_24) : (var_1_13)))) : (var_1_30)));
    } else {
     if (-32 <= stepLocal_20) {
      if (stepLocal_19 || (var_1_71 != (var_1_7 - var_1_27))) {
       var_1_78 = (var_1_26 + (var_1_30 + var_1_29));
      } else {
       var_1_78 = (var_1_26 + (var_1_13 + var_1_29));
      }
     } else {
      var_1_78 = (((((var_1_79) < (128)) ? (var_1_79) : (128))) - var_1_30);
     }
    }
   }
  }
 } else {
  var_1_78 = ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)));
 }
 if (! (var_1_67 <= var_1_88)) {
  var_1_80 = ((((var_1_83) < (((var_1_48 + var_1_82) - var_1_88))) ? (var_1_83) : (((var_1_48 + var_1_82) - var_1_88))));
 } else {
  var_1_80 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 }
 if (var_1_32 <= var_1_46) {
  if (var_1_76) {
   var_1_94 = (((((last_1_var_1_94) < (var_1_71)) ? (last_1_var_1_94) : (var_1_71))) - var_1_18);
  } else {
   var_1_94 = (var_1_82 + ((((var_1_22) < (var_1_80)) ? (var_1_22) : (var_1_80))));
  }
 } else {
  if ((- (- var_1_108)) <= var_1_104) {
   if (var_1_98 > var_1_26) {
    var_1_94 = ((((var_1_13) > (var_1_80)) ? (var_1_13) : (var_1_80)));
   } else {
    var_1_94 = var_1_47;
   }
  } else {
   var_1_94 = (last_1_var_1_94 + (((((var_1_78) > (var_1_83)) ? (var_1_78) : (var_1_83))) + last_1_var_1_94));
  }
 }
 unsigned long int stepLocal_33 = 10u * (var_1_60 * var_1_84);
 signed long int stepLocal_32 = 1;
 if (var_1_107) {
  if (var_1_64 >= stepLocal_32) {
   var_1_90 = (((((var_1_41) > (var_1_59)) ? (var_1_41) : (var_1_59))) - var_1_40);
  } else {
   if (var_1_14 == stepLocal_33) {
    var_1_90 = ((var_1_59 - (var_1_92 + 15.52)) + (var_1_58 - var_1_93));
   }
  }
 } else {
  var_1_90 = (var_1_58 - ((((var_1_55 + var_1_34) < 0 ) ? -(var_1_55 + var_1_34) : (var_1_55 + var_1_34))));
 }
 if (10.65 <= var_1_90) {
  var_1_39 = ((2.2 + 9.5) + var_1_34);
 } else {
  var_1_39 = (var_1_40 - var_1_41);
 }
 signed long int stepLocal_7 = var_1_30 | var_1_94;
 unsigned long int stepLocal_6 = var_1_71;
 if (50.25f <= var_1_90) {
  if ((var_1_24 - var_1_29) >= stepLocal_7) {
   if (var_1_34 <= ((1.6 * var_1_32) / ((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46))))) {
    var_1_43 = (((var_1_47 - var_1_26) + var_1_13) + (var_1_48 - (var_1_49 - var_1_30)));
   } else {
    if (var_1_6) {
     var_1_43 = ((var_1_8 + var_1_12) + (var_1_29 + var_1_49));
    } else {
     var_1_43 = ((var_1_48 - (var_1_49 - var_1_29)) + ((var_1_13 + 64) + var_1_8));
    }
   }
  } else {
   if (stepLocal_6 <= (var_1_102 / ((((var_1_37) > (var_1_49)) ? (var_1_37) : (var_1_49))))) {
    var_1_43 = (((((var_1_50) < (var_1_51)) ? (var_1_50) : (var_1_51))) - var_1_12);
   }
  }
 } else {
  var_1_43 = ((((var_1_50) > ((((((var_1_30 + var_1_47)) < (var_1_24)) ? ((var_1_30 + var_1_47)) : (var_1_24))))) ? (var_1_50) : ((((((var_1_30 + var_1_47)) < (var_1_24)) ? ((var_1_30 + var_1_47)) : (var_1_24))))));
 }
 unsigned char stepLocal_8 = var_1_39 > var_1_103;
 if (! (((((var_1_102) < 0 ) ? -(var_1_102) : (var_1_102))) <= (var_1_49 / var_1_37))) {
  if (var_1_6 || stepLocal_8) {
   var_1_52 = (((((((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) + var_1_53)) < (((var_1_54 + var_1_55) + (var_1_56 + var_1_57)))) ? ((((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) + var_1_53)) : (((var_1_54 + var_1_55) + (var_1_56 + var_1_57)))));
  } else {
   var_1_52 = var_1_55;
  }
 } else {
  var_1_52 = ((var_1_58 - var_1_59) + var_1_57);
 }
 unsigned long int stepLocal_14 = var_1_63;
 signed char stepLocal_13 = var_1_30;
 if ((- var_1_10) <= stepLocal_14) {
  if (stepLocal_13 > var_1_94) {
   var_1_69 = (var_1_29 + ((var_1_13 + var_1_30) - ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))));
  } else {
   var_1_69 = ((((var_1_13) < (-1)) ? (var_1_13) : (-1)));
  }
 }
 if (var_1_90 != ((var_1_93 + var_1_92) - ((((199.5) > (99.2)) ? (199.5) : (99.2))))) {
  if ((var_1_63 | var_1_94) >= var_1_71) {
   if (! var_1_70) {
    var_1_96 = var_1_6;
   } else {
    var_1_96 = (var_1_76 && var_1_77);
   }
  } else {
   var_1_96 = var_1_76;
  }
 } else {
  var_1_96 = var_1_6;
 }
 if ((256 << 8) <= (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) * -4)) {
  if ((var_1_80 % var_1_50) >= (5 << var_1_61)) {
   var_1_110 = var_1_26;
  } else {
   var_1_110 = var_1_22;
  }
 } else {
  var_1_110 = var_1_29;
 }
 signed short int stepLocal_5 = var_1_64;
 if (stepLocal_5 == var_1_7) {
  var_1_42 = ((((var_1_94) > (var_1_26)) ? (var_1_94) : (var_1_26)));
 } else {
  var_1_42 = (var_1_30 - var_1_101);
 }
 if (var_1_9) {
  if ((var_1_103 + var_1_90) > var_1_72) {
   var_1_20 = (var_1_13 - 10);
  } else {
   var_1_20 = ((((var_1_13) > (var_1_22)) ? (var_1_13) : (var_1_22)));
  }
 }
 if (var_1_96) {
  if (var_1_98 > var_1_14) {
   var_1_1 = (! (! (var_1_5 || var_1_6)));
  }
 } else {
  if (var_1_98 < (var_1_7 - (31514 - var_1_8))) {
   var_1_1 = (! var_1_9);
  } else {
   var_1_1 = (var_1_9 && var_1_6);
  }
 }
 if (var_1_72 >= (var_1_109 / 9.8)) {
  if (var_1_39 > ((((var_1_109) > (var_1_72)) ? (var_1_109) : (var_1_72)))) {
   var_1_23 = (var_1_13 + ((((5) < (((((2) < (var_1_24)) ? (2) : (var_1_24))))) ? (5) : (((((2) < (var_1_24)) ? (2) : (var_1_24)))))));
  }
 }
 unsigned char stepLocal_26 = var_1_77;
 unsigned char stepLocal_25 = var_1_77 && var_1_100;
 signed long int stepLocal_24 = var_1_36;
 if (var_1_1) {
  if (stepLocal_25 || ((var_1_37 < -2) || var_1_9)) {
   if (stepLocal_24 >= ((((var_1_36) < (var_1_67)) ? (var_1_36) : (var_1_67)))) {
    if (stepLocal_26 || (var_1_26 >= var_1_61)) {
     var_1_85 = ((var_1_22 + var_1_27) + ((((128) > ((var_1_29 - var_1_13))) ? (128) : ((var_1_29 - var_1_13)))));
    } else {
     var_1_85 = (((((var_1_36 + var_1_31)) < (((((var_1_27) > (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65))))) ? (var_1_27) : (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65)))))))) ? ((var_1_36 + var_1_31)) : (((((var_1_27) > (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65))))) ? (var_1_27) : (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65)))))))));
    }
   } else {
    var_1_85 = ((((last_1_var_1_85) < (var_1_31)) ? (last_1_var_1_85) : (var_1_31)));
   }
  }
 } else {
  var_1_85 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 }
 if ((((((var_1_30 * 2u)) > ((256u & 0u))) ? ((var_1_30 * 2u)) : ((256u & 0u)))) != var_1_18) {
  if (var_1_94 <= (- (var_1_42 + var_1_60))) {
   if ((var_1_47 - var_1_8) < ((((last_1_var_1_95) < (((((var_1_82) < (var_1_60)) ? (var_1_82) : (var_1_60))))) ? (last_1_var_1_95) : (((((var_1_82) < (var_1_60)) ? (var_1_82) : (var_1_60))))))) {
    var_1_95 = ((((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) > ((var_1_51 - var_1_99))) ? (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) : ((var_1_51 - var_1_99))));
   }
  }
 } else {
  if (! var_1_75) {
   var_1_95 = ((((var_1_84) > (var_1_51)) ? (var_1_84) : (var_1_51)));
  }
 }
 unsigned char stepLocal_16 = var_1_23;
 unsigned long int stepLocal_15 = var_1_51 * var_1_60;
 if (((((var_1_37) < (var_1_95)) ? (var_1_37) : (var_1_95))) <= stepLocal_15) {
  if (16 >= stepLocal_16) {
   var_1_73 = ((var_1_6 || var_1_5) || var_1_75);
  }
 } else {
  var_1_73 = ((var_1_9 && (var_1_96 || var_1_76)) && var_1_77);
 }
 if (var_1_73) {
  var_1_86 = (var_1_13 - 5);
 }
 signed long int stepLocal_28 = - var_1_26;
 unsigned short int stepLocal_27 = var_1_50;
 if (stepLocal_27 > var_1_61) {
  var_1_87 = ((((var_1_59 - var_1_41) < 0 ) ? -(var_1_59 - var_1_41) : (var_1_59 - var_1_41)));
 } else {
  if (stepLocal_28 == (var_1_51 | var_1_95)) {
   var_1_87 = (var_1_40 - (var_1_58 + var_1_59));
  } else {
   var_1_87 = ((5.709347504436945E18f - var_1_58) - var_1_59);
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 536870912);
 assume_abort_if_not(var_1_18 <= 1073741824);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -127);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 63);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 32);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 31);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -31);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 1073741822);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
 assume_abort_if_not(var_1_45 != 0.0F);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 8192);
 assume_abort_if_not(var_1_47 <= 16384);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 16383);
 assume_abort_if_not(var_1_48 <= 32767);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 8191);
 assume_abort_if_not(var_1_49 <= 16383);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 32767);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65534);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -230584.3009213691400e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691400e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -230584.3009213691400e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 3221225470);
 assume_abort_if_not(var_1_61 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 3221225470);
 assume_abort_if_not(var_1_62 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 1073741823);
 assume_abort_if_not(var_1_63 <= 2147483647);
 var_1_65 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_65 >= -16383);
 assume_abort_if_not(var_1_65 <= 16383);
 var_1_68 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_68 >= 1073741823);
 assume_abort_if_not(var_1_68 <= 2147483646);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 0);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 1);
 assume_abort_if_not(var_1_76 <= 1);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 1);
 assume_abort_if_not(var_1_77 <= 1);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 127);
 assume_abort_if_not(var_1_79 <= 254);
 var_1_82 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_82 >= 16384);
 assume_abort_if_not(var_1_82 <= 32767);
 var_1_84 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_84 >= 64);
 assume_abort_if_not(var_1_84 <= 127);
 var_1_92 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691400e+12F && var_1_92 >= 1.0e-20F ));
 var_1_93 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_93 >= 0.0F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 4611686.018427383000e+12F && var_1_93 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_105 = var_1_105;
 last_1_var_1_109 = var_1_109;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((var_1_96 ? ((var_1_98 > var_1_14) ? (var_1_1 == ((unsigned char) (! (! (var_1_5 || var_1_6))))) : 1) : ((var_1_98 < (var_1_7 - (31514 - var_1_8))) ? (var_1_1 == ((unsigned char) (! var_1_9))) : (var_1_1 == ((unsigned char) (var_1_9 && var_1_6))))) && (var_1_10 == ((unsigned long int) ((((var_1_8) > (var_1_11)) ? (var_1_8) : (var_1_11)))))) && ((8u == ((3877202530u - var_1_8) >> var_1_13)) ? (var_1_12 == ((unsigned char) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) : 1)) && (((var_1_72 * var_1_103) != var_1_108) ? ((var_1_72 > (var_1_103 + var_1_108)) ? (var_1_14 == ((unsigned long int) (var_1_13 + ((var_1_18 - var_1_8) + var_1_102)))) : (var_1_14 == ((unsigned long int) (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - ((((var_1_102) < (var_1_8)) ? (var_1_102) : (var_1_8))))))) : 1)) && (var_1_9 ? (((var_1_103 + var_1_90) > var_1_72) ? (var_1_20 == ((signed char) (var_1_13 - 10))) : (var_1_20 == ((signed char) ((((var_1_13) > (var_1_22)) ? (var_1_13) : (var_1_22)))))) : 1)) && ((var_1_72 >= (var_1_109 / 9.8)) ? ((var_1_39 > ((((var_1_109) > (var_1_72)) ? (var_1_109) : (var_1_72)))) ? (var_1_23 == ((unsigned char) (var_1_13 + ((((5) < (((((2) < (var_1_24)) ? (2) : (var_1_24))))) ? (5) : (((((2) < (var_1_24)) ? (2) : (var_1_24))))))))) : 1) : 1)) && (var_1_25 == ((signed char) (var_1_13 - (var_1_26 - var_1_27))))) && ((! (var_1_36 != ((((var_1_26) > (var_1_22)) ? (var_1_26) : (var_1_22))))) ? (var_1_28 == ((signed char) (var_1_13 + ((var_1_29 - var_1_30) + var_1_31)))) : 1)) && ((var_1_30 < var_1_10) ? (var_1_32 == ((double) var_1_33)) : (var_1_32 == ((double) ((((((((var_1_33) > (4.8)) ? (var_1_33) : (4.8)))) < ((var_1_34 + var_1_35))) ? (((((var_1_33) > (4.8)) ? (var_1_33) : (4.8)))) : ((var_1_34 + var_1_35)))))))) && ((var_1_34 >= (- var_1_33)) ? (((last_1_var_1_60 > var_1_24) && (var_1_7 < last_1_var_1_20)) ? (var_1_36 == ((signed long int) (5 + var_1_22))) : (((last_1_var_1_60 + var_1_27) > last_1_var_1_88) ? (var_1_36 == ((signed long int) (var_1_26 + last_1_var_1_20))) : (var_1_36 == ((signed long int) ((var_1_37 - var_1_30) - var_1_27))))) : (((var_1_8 * var_1_29) != last_1_var_1_88) ? ((var_1_30 >= var_1_22) ? (var_1_36 == ((signed long int) var_1_8)) : (var_1_36 == ((signed long int) (((((((last_1_var_1_105) > (var_1_31)) ? (last_1_var_1_105) : (var_1_31))) < 0 ) ? -((((last_1_var_1_105) > (var_1_31)) ? (last_1_var_1_105) : (var_1_31))) : ((((last_1_var_1_105) > (var_1_31)) ? (last_1_var_1_105) : (var_1_31)))))))) : (var_1_36 == ((signed long int) var_1_27))))) && ((10.65 <= var_1_90) ? (var_1_39 == ((double) ((2.2 + 9.5) + var_1_34))) : (var_1_39 == ((double) (var_1_40 - var_1_41))))) && ((var_1_64 == var_1_7) ? (var_1_42 == ((signed long int) ((((var_1_94) > (var_1_26)) ? (var_1_94) : (var_1_26))))) : (var_1_42 == ((signed long int) (var_1_30 - var_1_101))))) && ((50.25f <= var_1_90) ? (((var_1_24 - var_1_29) >= (var_1_30 | var_1_94)) ? ((var_1_34 <= ((1.6 * var_1_32) / ((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_43 == ((unsigned short int) (((var_1_47 - var_1_26) + var_1_13) + (var_1_48 - (var_1_49 - var_1_30))))) : (var_1_6 ? (var_1_43 == ((unsigned short int) ((var_1_8 + var_1_12) + (var_1_29 + var_1_49)))) : (var_1_43 == ((unsigned short int) ((var_1_48 - (var_1_49 - var_1_29)) + ((var_1_13 + 64) + var_1_8)))))) : ((var_1_71 <= (var_1_102 / ((((var_1_37) > (var_1_49)) ? (var_1_37) : (var_1_49))))) ? (var_1_43 == ((unsigned short int) (((((var_1_50) < (var_1_51)) ? (var_1_50) : (var_1_51))) - var_1_12))) : 1)) : (var_1_43 == ((unsigned short int) ((((var_1_50) > ((((((var_1_30 + var_1_47)) < (var_1_24)) ? ((var_1_30 + var_1_47)) : (var_1_24))))) ? (var_1_50) : ((((((var_1_30 + var_1_47)) < (var_1_24)) ? ((var_1_30 + var_1_47)) : (var_1_24)))))))))) && ((! (((((var_1_102) < 0 ) ? -(var_1_102) : (var_1_102))) <= (var_1_49 / var_1_37))) ? ((var_1_6 || (var_1_39 > var_1_103)) ? (var_1_52 == ((float) (((((((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) + var_1_53)) < (((var_1_54 + var_1_55) + (var_1_56 + var_1_57)))) ? ((((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) + var_1_53)) : (((var_1_54 + var_1_55) + (var_1_56 + var_1_57))))))) : (var_1_52 == ((float) var_1_55))) : (var_1_52 == ((float) ((var_1_58 - var_1_59) + var_1_57))))) && (var_1_9 ? (var_1_60 == ((unsigned long int) ((((last_1_var_1_60) < (var_1_30)) ? (last_1_var_1_60) : (var_1_30))))) : (var_1_60 == ((unsigned long int) ((((((var_1_61) < (var_1_62)) ? (var_1_61) : (var_1_62))) - ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) - (var_1_63 - var_1_47)))))) && ((((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36))) < last_1_var_1_71) ? ((var_1_40 != (var_1_53 * (15.25 / 100.25))) ? ((-4 > ((((var_1_50) > ((last_1_var_1_42 - 2))) ? (var_1_50) : ((last_1_var_1_42 - 2))))) ? (var_1_64 == ((signed short int) (last_1_var_1_64 + var_1_24))) : (var_1_64 == ((signed short int) (var_1_65 + ((((last_1_var_1_64) < 0 ) ? -(last_1_var_1_64) : (last_1_var_1_64))))))) : (var_1_64 == ((signed short int) (last_1_var_1_83 + var_1_30)))) : ((last_1_var_1_97 > last_1_var_1_109) ? ((! var_1_6) ? (var_1_64 == ((signed short int) (var_1_13 - 16))) : 1) : 1))) && ((var_1_27 > (var_1_13 - ((((var_1_26) > (var_1_29)) ? (var_1_26) : (var_1_29))))) ? (var_1_66 == ((unsigned char) var_1_30)) : 1)) && (((last_1_var_1_10 * (var_1_47 * var_1_11)) == (~ last_1_var_1_42)) ? ((((last_1_var_1_12 - var_1_13) & var_1_27) == last_1_var_1_64) ? (var_1_67 == ((signed long int) ((((((var_1_50) < (var_1_30)) ? (var_1_50) : (var_1_30))) + last_1_var_1_12) - (var_1_68 - 128)))) : 1) : 1)) && (((- var_1_10) <= var_1_63) ? ((var_1_30 > var_1_94) ? (var_1_69 == ((signed char) (var_1_29 + ((var_1_13 + var_1_30) - ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) : (var_1_69 == ((signed char) ((((var_1_13) < (-1)) ? (var_1_13) : (-1)))))) : 1)) && (var_1_70 == ((unsigned char) var_1_9))) && (((var_1_41 - (var_1_59 + var_1_58)) == (- (var_1_33 / var_1_46))) ? (var_1_71 == ((unsigned long int) ((var_1_61 - var_1_27) - (((((var_1_8 + var_1_29)) > (var_1_24)) ? ((var_1_8 + var_1_29)) : (var_1_24)))))) : 1)) && (var_1_72 == ((double) (var_1_40 - var_1_58)))) && ((((((var_1_37) < (var_1_95)) ? (var_1_37) : (var_1_95))) <= (var_1_51 * var_1_60)) ? ((16 >= var_1_23) ? (var_1_73 == ((unsigned char) ((var_1_6 || var_1_5) || var_1_75))) : 1) : (var_1_73 == ((unsigned char) ((var_1_9 && (var_1_96 || var_1_76)) && var_1_77))))) && (((((((var_1_65) > (var_1_47)) ? (var_1_65) : (var_1_47))) > (var_1_14 - var_1_99)) && ((var_1_10 / var_1_68) <= var_1_37)) ? ((var_1_63 <= var_1_48) ? (var_1_78 == ((unsigned char) (var_1_13 + ((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27)))))) : (((var_1_24 / var_1_19) <= var_1_48) ? (var_1_78 == ((unsigned char) ((((var_1_30) < ((var_1_26 + var_1_29))) ? (var_1_30) : ((var_1_26 + var_1_29)))))) : ((var_1_13 != ((((var_1_67) < (var_1_71)) ? (var_1_67) : (var_1_71)))) ? (var_1_78 == ((unsigned char) ((((((((var_1_24) < (var_1_13)) ? (var_1_24) : (var_1_13)))) > (var_1_30)) ? (((((var_1_24) < (var_1_13)) ? (var_1_24) : (var_1_13)))) : (var_1_30))))) : ((-32 <= var_1_67) ? ((var_1_6 || (var_1_71 != (var_1_7 - var_1_27))) ? (var_1_78 == ((unsigned char) (var_1_26 + (var_1_30 + var_1_29)))) : (var_1_78 == ((unsigned char) (var_1_26 + (var_1_13 + var_1_29))))) : (var_1_78 == ((unsigned char) (((((var_1_79) < (128)) ? (var_1_79) : (128))) - var_1_30))))))) : (var_1_78 == ((unsigned char) ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))))))) && ((! (var_1_67 <= var_1_88)) ? (var_1_80 == ((unsigned short int) ((((var_1_83) < (((var_1_48 + var_1_82) - var_1_88))) ? (var_1_83) : (((var_1_48 + var_1_82) - var_1_88)))))) : (var_1_80 == ((unsigned short int) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) && ((var_1_7 >= var_1_14) ? (var_1_83 == ((unsigned char) (var_1_24 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))) : (var_1_83 == ((unsigned char) ((var_1_26 + var_1_84) - var_1_29))))) && (var_1_1 ? (((var_1_77 && var_1_100) || ((var_1_37 < -2) || var_1_9)) ? ((var_1_36 >= ((((var_1_36) < (var_1_67)) ? (var_1_36) : (var_1_67)))) ? ((var_1_77 || (var_1_26 >= var_1_61)) ? (var_1_85 == ((signed short int) ((var_1_22 + var_1_27) + ((((128) > ((var_1_29 - var_1_13))) ? (128) : ((var_1_29 - var_1_13))))))) : (var_1_85 == ((signed short int) (((((var_1_36 + var_1_31)) < (((((var_1_27) > (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65))))) ? (var_1_27) : (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65)))))))) ? ((var_1_36 + var_1_31)) : (((((var_1_27) > (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65))))) ? (var_1_27) : (((((var_1_8) > (var_1_65)) ? (var_1_8) : (var_1_65)))))))))))) : (var_1_85 == ((signed short int) ((((last_1_var_1_85) < (var_1_31)) ? (last_1_var_1_85) : (var_1_31)))))) : 1) : (var_1_85 == ((signed short int) ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))))) && (var_1_73 ? (var_1_86 == ((signed char) (var_1_13 - 5))) : 1)) && ((var_1_50 > var_1_61) ? (var_1_87 == ((float) ((((var_1_59 - var_1_41) < 0 ) ? -(var_1_59 - var_1_41) : (var_1_59 - var_1_41))))) : (((- var_1_26) == (var_1_51 | var_1_95)) ? (var_1_87 == ((float) (var_1_40 - (var_1_58 + var_1_59)))) : (var_1_87 == ((float) ((5.709347504436945E18f - var_1_58) - var_1_59)))))) && (var_1_100 ? ((var_1_10 <= var_1_27) ? ((var_1_13 < var_1_62) ? (var_1_88 == ((signed long int) ((var_1_99 + var_1_22) + var_1_82))) : (var_1_88 == ((signed long int) ((((var_1_13) > (var_1_47)) ? (var_1_13) : (var_1_47)))))) : (var_1_88 == ((signed long int) (var_1_82 + var_1_27)))) : (((var_1_98 + var_1_24) > var_1_99) ? (var_1_88 == ((signed long int) ((((100 - (var_1_47 + var_1_8)) < 0 ) ? -(100 - (var_1_47 + var_1_8)) : (100 - (var_1_47 + var_1_8)))))) : (var_1_88 == ((signed long int) (var_1_36 - var_1_79)))))) && (var_1_107 ? ((var_1_64 >= 1) ? (var_1_90 == ((double) (((((var_1_41) > (var_1_59)) ? (var_1_41) : (var_1_59))) - var_1_40))) : ((var_1_14 == (10u * (var_1_60 * var_1_84))) ? (var_1_90 == ((double) ((var_1_59 - (var_1_92 + 15.52)) + (var_1_58 - var_1_93)))) : 1)) : (var_1_90 == ((double) (var_1_58 - ((((var_1_55 + var_1_34) < 0 ) ? -(var_1_55 + var_1_34) : (var_1_55 + var_1_34)))))))) && ((var_1_32 <= var_1_46) ? (var_1_76 ? (var_1_94 == ((signed long int) (((((last_1_var_1_94) < (var_1_71)) ? (last_1_var_1_94) : (var_1_71))) - var_1_18))) : (var_1_94 == ((signed long int) (var_1_82 + ((((var_1_22) < (var_1_80)) ? (var_1_22) : (var_1_80))))))) : (((- (- var_1_108)) <= var_1_104) ? ((var_1_98 > var_1_26) ? (var_1_94 == ((signed long int) ((((var_1_13) > (var_1_80)) ? (var_1_13) : (var_1_80))))) : (var_1_94 == ((signed long int) var_1_47))) : (var_1_94 == ((signed long int) (last_1_var_1_94 + (((((var_1_78) > (var_1_83)) ? (var_1_78) : (var_1_83))) + last_1_var_1_94))))))) && (((((((var_1_30 * 2u)) > ((256u & 0u))) ? ((var_1_30 * 2u)) : ((256u & 0u)))) != var_1_18) ? ((var_1_94 <= (- (var_1_42 + var_1_60))) ? (((var_1_47 - var_1_8) < ((((last_1_var_1_95) < (((((var_1_82) < (var_1_60)) ? (var_1_82) : (var_1_60))))) ? (last_1_var_1_95) : (((((var_1_82) < (var_1_60)) ? (var_1_82) : (var_1_60))))))) ? (var_1_95 == ((unsigned short int) ((((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) > ((var_1_51 - var_1_99))) ? (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) : ((var_1_51 - var_1_99)))))) : 1) : 1) : ((! var_1_75) ? (var_1_95 == ((unsigned short int) ((((var_1_84) > (var_1_51)) ? (var_1_84) : (var_1_51))))) : 1))) && ((var_1_90 != ((var_1_93 + var_1_92) - ((((199.5) > (99.2)) ? (199.5) : (99.2))))) ? (((var_1_63 | var_1_94) >= var_1_71) ? ((! var_1_70) ? (var_1_96 == ((unsigned char) var_1_6)) : (var_1_96 == ((unsigned char) (var_1_76 && var_1_77)))) : (var_1_96 == ((unsigned char) var_1_76))) : (var_1_96 == ((unsigned char) var_1_6)))) && (var_1_97 == ((double) var_1_58))) && (var_1_9 ? (var_1_98 == ((signed long int) var_1_7)) : (var_1_98 == ((signed long int) var_1_8)))) && (var_1_99 == ((unsigned short int) var_1_60))) && (var_1_100 == ((unsigned char) var_1_6))) && (var_1_101 == ((unsigned short int) var_1_24))) && (var_1_76 ? (var_1_102 == ((unsigned char) var_1_84)) : 1)) && (var_1_103 == ((double) var_1_58))) && (var_1_5 ? (var_1_104 == ((float) var_1_59)) : (var_1_104 == ((float) 8.5f)))) && (var_1_77 ? (var_1_105 == ((unsigned short int) var_1_13)) : (var_1_105 == ((unsigned short int) var_1_30)))) && (var_1_77 ? (var_1_106 == ((float) var_1_54)) : (var_1_106 == ((float) var_1_40)))) && (var_1_76 ? (var_1_107 == ((unsigned char) var_1_75)) : 1)) && (var_1_9 ? (var_1_108 == ((double) var_1_55)) : (var_1_108 == ((double) var_1_53)))) && (var_1_100 ? (var_1_109 == ((double) var_1_41)) : (var_1_109 == ((double) var_1_59)))) && (((256 << 8) <= (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) * -4)) ? (((var_1_80 % var_1_50) >= (5 << var_1_61)) ? (var_1_110 == ((signed char) var_1_26)) : (var_1_110 == ((signed char) var_1_22))) : (var_1_110 == ((signed char) var_1_29)))
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
