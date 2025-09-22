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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned short int var_1_7 = 16;
unsigned short int var_1_9 = 51633;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 16;
unsigned short int var_1_12 = 128;
unsigned short int var_1_13 = 10;
signed char var_1_14 = -50;
signed char var_1_15 = 0;
signed char var_1_16 = 8;
signed char var_1_17 = -2;
float var_1_18 = 4.4;
float var_1_19 = 64.45;
float var_1_20 = 16.5;
float var_1_21 = 64.25;
float var_1_22 = 16.5;
float var_1_23 = 1.2;
float var_1_24 = 256.75;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
float var_1_28 = 7.8;
float var_1_30 = 0.0;
float var_1_31 = 5.9399999999999995;
float var_1_32 = 64.5;
double var_1_33 = 16.25;
double var_1_34 = 7.86;
double var_1_35 = 4.6;
unsigned long int var_1_36 = 100;
signed short int var_1_37 = 0;
signed long int var_1_38 = 8;
unsigned short int var_1_39 = 8;
unsigned short int var_1_40 = 100;
unsigned short int var_1_41 = 30781;
unsigned short int var_1_42 = 50;
float var_1_43 = 7.5;
unsigned short int var_1_44 = 1;
signed short int var_1_45 = -32;
signed short int var_1_47 = -4;
signed short int var_1_48 = -31016;
signed short int var_1_49 = 10000;
signed short int var_1_50 = 1;
float var_1_51 = 128.125;
float var_1_52 = 255.05;
double var_1_53 = 15.5;
unsigned short int var_1_54 = 256;
signed long int var_1_55 = -25;
signed long int var_1_56 = 1697366940;
unsigned char var_1_57 = 1;
signed char var_1_58 = 1;
signed char var_1_59 = 0;
signed char var_1_60 = 1;
signed char var_1_61 = 8;
unsigned short int var_1_62 = 5;
unsigned short int var_1_63 = 25341;
double var_1_64 = 9.25;
unsigned short int var_1_65 = 32;
unsigned char var_1_66 = 0;
signed char var_1_67 = 64;
unsigned long int var_1_68 = 32;
unsigned long int var_1_69 = 2423057866;
unsigned char var_1_70 = 1;
float var_1_71 = 10000000000.25;
unsigned long int var_1_72 = 1832783680;
signed char var_1_73 = -64;
signed char var_1_74 = 100;
signed char var_1_75 = -1;
unsigned char var_1_76 = 1;
signed short int var_1_78 = 10;
signed char var_1_79 = 4;
signed short int var_1_80 = 25232;
signed short int var_1_81 = 4;
signed short int var_1_82 = 10000;
signed char var_1_83 = -4;
signed char var_1_84 = 0;
signed char var_1_85 = -32;
double var_1_86 = 7.125;
unsigned char var_1_87 = 32;
unsigned char var_1_89 = 64;
unsigned char var_1_90 = 5;
float var_1_91 = 3.5;
float var_1_92 = 16.6;
float var_1_93 = 99.5;
float var_1_94 = 31.8;
float var_1_95 = 100.5;
float var_1_96 = -0.8;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 1;
unsigned char var_1_100 = 1;
unsigned long int var_1_101 = 1000000000;
unsigned short int var_1_102 = 16;
signed char var_1_103 = 10;
signed char var_1_104 = -5;
unsigned char var_1_105 = 1;
signed long int var_1_106 = -5;
unsigned long int var_1_107 = 50;
unsigned short int var_1_108 = 5;
signed long int var_1_109 = 25;
unsigned char var_1_110 = 128;
unsigned char var_1_111 = 1;
signed char var_1_112 = 50;
signed long int var_1_113 = -8;
float var_1_114 = 64.25;
float var_1_115 = 16.625;
unsigned short int last_1_var_1_7 = 16;
double last_1_var_1_33 = 16.25;
unsigned short int last_1_var_1_39 = 8;
signed long int last_1_var_1_55 = -25;
double last_1_var_1_86 = 7.125;
unsigned long int last_1_var_1_101 = 1000000000;
signed long int last_1_var_1_113 = -8;
float last_1_var_1_114 = 64.25;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_9 = last_1_var_1_7 * last_1_var_1_101;
 if (var_1_5) {
  if (var_1_30 > (- last_1_var_1_33)) {
   var_1_39 = (var_1_11 + var_1_12);
  }
 } else {
  if (var_1_30 != 9999.625f) {
   if (stepLocal_9 <= last_1_var_1_101) {
    var_1_39 = (var_1_40 + (((((var_1_41 - var_1_11)) > (var_1_12)) ? ((var_1_41 - var_1_11)) : (var_1_12))));
   } else {
    var_1_39 = ((var_1_13 + (32 + var_1_42)) + var_1_41);
   }
  } else {
   var_1_39 = (var_1_10 + var_1_41);
  }
 }
 signed long int stepLocal_1 = last_1_var_1_39;
 if (stepLocal_1 == ((((var_1_12) > ((var_1_13 / var_1_9))) ? (var_1_12) : ((var_1_13 / var_1_9))))) {
  var_1_25 = var_1_6;
 } else {
  if (var_1_6) {
   var_1_25 = ((var_1_26 || var_1_27) || (! var_1_4));
  }
 }
 signed long int stepLocal_18 = last_1_var_1_113;
 if (stepLocal_18 <= ((-2 | var_1_60) & (var_1_11 * last_1_var_1_55))) {
  if (((((last_1_var_1_86) < (var_1_24)) ? (last_1_var_1_86) : (var_1_24))) <= ((((last_1_var_1_114) < 0 ) ? -(last_1_var_1_114) : (last_1_var_1_114)))) {
   var_1_66 = (var_1_26 || var_1_4);
  }
 }
 unsigned char stepLocal_23 = var_1_4;
 signed char stepLocal_22 = var_1_59;
 if ((var_1_82 - var_1_74) <= stepLocal_22) {
  if (var_1_66 && stepLocal_23) {
   var_1_86 = (((((var_1_32 - var_1_31)) > (var_1_20)) ? ((var_1_32 - var_1_31)) : (var_1_20)));
  }
 } else {
  var_1_86 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 }
 unsigned short int stepLocal_0 = var_1_9;
 if (stepLocal_0 <= 64) {
  var_1_14 = ((((var_1_15) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (var_1_15) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))));
 } else {
  var_1_14 = var_1_15;
 }
 var_1_18 = (var_1_19 - (var_1_20 + var_1_21));
 if (((((var_1_24) < ((var_1_19 - 8.55f))) ? (var_1_24) : ((var_1_19 - 8.55f)))) > var_1_35) {
  var_1_43 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
 } else {
  var_1_43 = ((((31.75f) > (var_1_32)) ? (31.75f) : (var_1_32)));
 }
 var_1_44 = (10 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
 if ((var_1_42 | var_1_9) >= (var_1_48 + var_1_38)) {
  var_1_53 = (var_1_31 - (7.6 + var_1_21));
 } else {
  var_1_53 = var_1_52;
 }
 var_1_54 = (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) - (var_1_41 - var_1_49));
 if ((((((var_1_11 / var_1_49)) > (10)) ? ((var_1_11 / var_1_49)) : (10))) >= ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) {
  var_1_57 = (! var_1_27);
 }
 if (var_1_6) {
  var_1_58 = (var_1_59 - (var_1_60 + var_1_61));
 } else {
  var_1_58 = ((((var_1_16) < (((((var_1_17) < ((var_1_61 + var_1_60))) ? (var_1_17) : ((var_1_61 + var_1_60)))))) ? (var_1_16) : (((((var_1_17) < ((var_1_61 + var_1_60))) ? (var_1_17) : ((var_1_61 + var_1_60)))))));
 }
 var_1_62 = ((23995 + var_1_63) - var_1_42);
 var_1_67 = var_1_15;
 signed short int stepLocal_19 = var_1_49;
 if (9.999999999995E11f == var_1_34) {
  if (var_1_26) {
   var_1_73 = ((((((((var_1_16) < (var_1_59)) ? (var_1_16) : (var_1_59)))) > (((((var_1_60) < (var_1_61)) ? (var_1_60) : (var_1_61))))) ? (((((var_1_16) < (var_1_59)) ? (var_1_16) : (var_1_59)))) : (((((var_1_60) < (var_1_61)) ? (var_1_60) : (var_1_61))))));
  } else {
   if (stepLocal_19 < (5 - var_1_40)) {
    var_1_73 = (var_1_59 - var_1_61);
   } else {
    var_1_73 = ((((var_1_59) > (var_1_17)) ? (var_1_59) : (var_1_17)));
   }
  }
 } else {
  var_1_73 = (((((var_1_60) < (var_1_59)) ? (var_1_60) : (var_1_59))) - (var_1_74 - var_1_61));
 }
 var_1_91 = var_1_21;
 if (var_1_16 <= ((var_1_12 * var_1_80) / var_1_79)) {
  var_1_92 = (((((var_1_31 + var_1_20)) > (((((128.38f) > (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32))))) ? (128.38f) : (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32)))))))) ? ((var_1_31 + var_1_20)) : (((((128.38f) > (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32))))) ? (128.38f) : (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32)))))))));
 } else {
  var_1_92 = var_1_32;
 }
 if (var_1_98) {
  var_1_99 = 1;
 }
 var_1_100 = var_1_60;
 if (var_1_98) {
  var_1_102 = 32;
 } else {
  var_1_102 = var_1_44;
 }
 var_1_104 = var_1_74;
 var_1_105 = 1;
 if (var_1_99) {
  var_1_106 = var_1_67;
 } else {
  var_1_106 = var_1_85;
 }
 if (var_1_70) {
  var_1_107 = var_1_40;
 } else {
  var_1_107 = 5u;
 }
 var_1_110 = var_1_79;
 if (var_1_30 <= var_1_52) {
  var_1_111 = (! var_1_27);
 } else {
  var_1_111 = var_1_26;
 }
 var_1_112 = var_1_15;
 var_1_113 = var_1_74;
 var_1_114 = var_1_115;
 if (var_1_25) {
  var_1_101 = var_1_54;
 } else {
  var_1_101 = var_1_49;
 }
 unsigned long int stepLocal_3 = var_1_101;
 unsigned char stepLocal_2 = var_1_6;
 if (stepLocal_2 || var_1_27) {
  if (1000000u != stepLocal_3) {
   var_1_28 = ((((((var_1_30 - var_1_20) - var_1_19)) < ((var_1_21 - (var_1_31 + var_1_32)))) ? (((var_1_30 - var_1_20) - var_1_19)) : ((var_1_21 - (var_1_31 + var_1_32)))));
  } else {
   var_1_28 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
  }
 }
 if (var_1_5) {
  if (! ((- var_1_86) == 0.54)) {
   var_1_7 = ((var_1_9 - ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))) - (var_1_12 + var_1_13));
  } else {
   var_1_7 = ((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)));
  }
 }
 signed long int stepLocal_21 = (var_1_10 - var_1_50) + var_1_106;
 unsigned char stepLocal_20 = var_1_66;
 if (stepLocal_20 && var_1_111) {
  var_1_83 = (((((var_1_61) < (4)) ? (var_1_61) : (4))) - var_1_79);
 } else {
  if (stepLocal_21 >= var_1_42) {
   var_1_83 = ((((((((var_1_16) < ((var_1_60 + var_1_79))) ? (var_1_16) : ((var_1_60 + var_1_79))))) > ((((((var_1_61) > (var_1_84)) ? (var_1_61) : (var_1_84))) + var_1_85))) ? (((((var_1_16) < ((var_1_60 + var_1_79))) ? (var_1_16) : ((var_1_60 + var_1_79))))) : ((((((var_1_61) > (var_1_84)) ? (var_1_61) : (var_1_84))) + var_1_85))));
  }
 }
 unsigned char stepLocal_32 = var_1_83 < (var_1_17 | var_1_49);
 if (stepLocal_32 || var_1_27) {
  var_1_97 = var_1_26;
 }
 if (((var_1_19 + var_1_20) / var_1_23) <= ((((var_1_43) < (var_1_21)) ? (var_1_43) : (var_1_21)))) {
  var_1_22 = (var_1_21 + var_1_20);
 } else {
  if (var_1_43 >= var_1_19) {
   var_1_22 = (((((((((var_1_24 - var_1_20)) > (15.4f)) ? ((var_1_24 - var_1_20)) : (15.4f)))) < (16.5f)) ? ((((((var_1_24 - var_1_20)) > (15.4f)) ? ((var_1_24 - var_1_20)) : (15.4f)))) : (16.5f)));
  } else {
   var_1_22 = ((((var_1_24) < (var_1_19)) ? (var_1_24) : (var_1_19)));
  }
 }
 signed long int stepLocal_8 = (var_1_37 - var_1_13) + (var_1_11 << var_1_107);
 if (stepLocal_8 < (var_1_106 - var_1_38)) {
  var_1_36 = var_1_12;
 }
 signed long int stepLocal_15 = var_1_113;
 unsigned short int stepLocal_14 = var_1_13;
 if (stepLocal_14 <= var_1_9) {
  if (stepLocal_15 <= (((((var_1_9) > (var_1_106)) ? (var_1_9) : (var_1_106))) - var_1_12)) {
   var_1_47 = ((((-4) > ((var_1_10 - var_1_42))) ? (-4) : ((var_1_10 - var_1_42))));
  } else {
   var_1_47 = (((((((((var_1_11) < (var_1_42)) ? (var_1_11) : (var_1_42)))) > (var_1_13)) ? (((((var_1_11) < (var_1_42)) ? (var_1_11) : (var_1_42)))) : (var_1_13))) - (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) - (var_1_49 - var_1_50)));
  }
 }
 if (var_1_21 >= var_1_22) {
  var_1_51 = (var_1_32 + var_1_35);
 } else {
  if (var_1_4) {
   if (var_1_5) {
    var_1_51 = (var_1_19 - ((((var_1_24) > (var_1_32)) ? (var_1_24) : (var_1_32))));
   } else {
    var_1_51 = (((((-0.3f) < (((((var_1_32) > (var_1_21)) ? (var_1_32) : (var_1_21))))) ? (-0.3f) : (((((var_1_32) > (var_1_21)) ? (var_1_32) : (var_1_21)))))) + (var_1_34 + var_1_35));
   }
  } else {
   if (! (var_1_20 >= var_1_35)) {
    var_1_51 = (var_1_32 + ((((var_1_52) < (127.5f)) ? (var_1_52) : (127.5f))));
   } else {
    var_1_51 = (15.2f + var_1_52);
   }
  }
 }
 if (var_1_99) {
  var_1_65 = ((var_1_12 + var_1_42) + var_1_61);
 } else {
  var_1_65 = var_1_9;
 }
 if (var_1_99) {
  var_1_75 = ((((var_1_17) < (((((var_1_16) > (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74))))) ? (var_1_16) : (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74)))))))) ? (var_1_17) : (((((var_1_16) > (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74))))) ? (var_1_16) : (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74)))))))));
 }
 if (var_1_97) {
  var_1_109 = var_1_49;
 }
 unsigned char stepLocal_17 = var_1_97;
 if (stepLocal_17 || var_1_4) {
  var_1_64 = ((((var_1_32) > (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_32) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))));
 }
 signed long int stepLocal_16 = var_1_56;
 if (var_1_66) {
  if (var_1_28 <= var_1_64) {
   var_1_55 = (var_1_113 - (var_1_56 - var_1_40));
  } else {
   var_1_55 = ((((((var_1_16) > (var_1_7)) ? (var_1_16) : (var_1_7))) + (var_1_106 - var_1_41)) + var_1_10);
  }
 } else {
  if (var_1_4) {
   if (var_1_11 <= stepLocal_16) {
    var_1_55 = var_1_10;
   } else {
    var_1_55 = (var_1_113 - var_1_107);
   }
  } else {
   var_1_55 = (((((var_1_13 + var_1_7) < 0 ) ? -(var_1_13 + var_1_7) : (var_1_13 + var_1_7))) + -25);
  }
 }
 if (100 > ((((var_1_36) < (var_1_55)) ? (var_1_36) : (var_1_55)))) {
  var_1_1 = var_1_4;
 } else {
  var_1_1 = ((! (var_1_4 || var_1_5)) || var_1_6);
 }
 signed long int stepLocal_13 = -5;
 signed long int stepLocal_12 = ((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) << var_1_10;
 signed long int stepLocal_11 = var_1_38;
 unsigned char stepLocal_10 = var_1_107 < var_1_11;
 if (stepLocal_13 != var_1_106) {
  var_1_45 = var_1_7;
 } else {
  if (var_1_31 >= var_1_86) {
   if (var_1_23 < var_1_20) {
    if (stepLocal_12 > var_1_17) {
     var_1_45 = var_1_7;
    } else {
     if (stepLocal_11 != var_1_55) {
      if ((var_1_36 < var_1_40) || stepLocal_10) {
       var_1_45 = var_1_7;
      }
     } else {
      var_1_45 = var_1_9;
     }
    }
   } else {
    var_1_45 = var_1_16;
   }
  } else {
   var_1_45 = var_1_16;
  }
 }
 unsigned char stepLocal_31 = var_1_111;
 unsigned long int stepLocal_30 = var_1_107;
 signed long int stepLocal_29 = var_1_109;
 signed long int stepLocal_28 = var_1_55;
 if (stepLocal_30 >= var_1_41) {
  var_1_95 = ((((var_1_34) < ((var_1_31 - ((((var_1_20) < (4.75f)) ? (var_1_20) : (4.75f)))))) ? (var_1_34) : ((var_1_31 - ((((var_1_20) < (4.75f)) ? (var_1_20) : (4.75f)))))));
 } else {
  if (! var_1_66) {
   var_1_95 = var_1_31;
  } else {
   if (stepLocal_31 || var_1_27) {
    var_1_95 = ((((var_1_30) > ((64.5f + var_1_35))) ? (var_1_30) : ((64.5f + var_1_35))));
   } else {
    if (stepLocal_29 <= var_1_101) {
     var_1_95 = ((((var_1_24) > (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30))))) ? (var_1_24) : (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30))))));
    } else {
     if (stepLocal_28 < (var_1_62 / ((((var_1_80) > (25)) ? (var_1_80) : (25))))) {
      if (! (var_1_34 > var_1_86)) {
       var_1_95 = var_1_96;
      } else {
       var_1_95 = ((((var_1_35) > ((((((var_1_24 - var_1_19)) < (var_1_96)) ? ((var_1_24 - var_1_19)) : (var_1_96))))) ? (var_1_35) : ((((((var_1_24 - var_1_19)) < (var_1_96)) ? ((var_1_24 - var_1_19)) : (var_1_96))))));
      }
     } else {
      var_1_95 = (1.75f + var_1_21);
     }
    }
   }
  }
 }
 if ((var_1_64 + 100.5) <= var_1_30) {
  if ((var_1_28 + (var_1_32 * var_1_35)) == var_1_91) {
   var_1_68 = (((((var_1_48) < (var_1_69)) ? (var_1_48) : (var_1_69))) - var_1_41);
  } else {
   if ((var_1_107 / var_1_56) > ((((var_1_9) < (((((var_1_60) > (var_1_41)) ? (var_1_60) : (var_1_41))))) ? (var_1_9) : (((((var_1_60) > (var_1_41)) ? (var_1_60) : (var_1_41))))))) {
    var_1_68 = ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_10) < 0 ) ? -(((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_10) : (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_10)));
   } else {
    var_1_68 = ((((1u + (var_1_56 - var_1_61)) < 0 ) ? -(1u + (var_1_56 - var_1_61)) : (1u + (var_1_56 - var_1_61))));
   }
  }
 } else {
  if (((var_1_30 / var_1_23) / ((((31.25f) < (var_1_71)) ? (31.25f) : (var_1_71)))) <= var_1_28) {
   var_1_68 = ((var_1_56 + var_1_72) - (var_1_11 + 8u));
  } else {
   if (var_1_25) {
    var_1_68 = ((((((((var_1_12) < (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))) ? (var_1_12) : (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))))) > (var_1_65)) ? (((((var_1_12) < (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))) ? (var_1_12) : (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))))) : (var_1_65)));
   } else {
    var_1_68 = (var_1_39 + var_1_61);
   }
  }
 }
 signed long int stepLocal_7 = var_1_9 - (8 + var_1_13);
 signed long int stepLocal_6 = (1655895704 - var_1_13) - (var_1_10 + var_1_54);
 signed long int stepLocal_5 = var_1_17 / var_1_9;
 unsigned char stepLocal_4 = var_1_5;
 if (var_1_22 >= var_1_21) {
  if (last_1_var_1_33 < var_1_21) {
   if (stepLocal_4 || var_1_4) {
    var_1_33 = (((((var_1_31) < (100.625)) ? (var_1_31) : (100.625))) + (var_1_34 + var_1_35));
   } else {
    if (var_1_68 > stepLocal_7) {
     var_1_33 = ((((var_1_21) < (2.5)) ? (var_1_21) : (2.5)));
    } else {
     var_1_33 = ((((var_1_30) < (var_1_34)) ? (var_1_30) : (var_1_34)));
    }
   }
  } else {
   if ((- var_1_68) > stepLocal_5) {
    var_1_33 = (var_1_35 + (((((10.5) > (var_1_31)) ? (10.5) : (var_1_31))) - var_1_32));
   } else {
    var_1_33 = (var_1_20 + var_1_21);
   }
  }
 } else {
  if (stepLocal_6 > (((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))) ^ var_1_9)) {
   var_1_33 = ((var_1_31 - var_1_21) + var_1_20);
  }
 }
 if ((var_1_19 + var_1_53) != var_1_33) {
  var_1_76 = var_1_4;
 } else {
  var_1_76 = ((! (var_1_25 || var_1_105)) && (! var_1_4));
 }
 if (var_1_69 <= (var_1_107 >> var_1_79)) {
  if (var_1_76 && ((- 1) <= var_1_68)) {
   var_1_78 = ((((((var_1_80 - var_1_79)) < (((((var_1_81) > (var_1_13)) ? (var_1_81) : (var_1_13))))) ? ((var_1_80 - var_1_79)) : (((((var_1_81) > (var_1_13)) ? (var_1_81) : (var_1_13)))))) - ((var_1_49 + var_1_82) - ((((var_1_10) < (var_1_61)) ? (var_1_10) : (var_1_61)))));
  }
 }
 unsigned short int stepLocal_24 = var_1_13;
 if (((((((((var_1_78) > (var_1_113)) ? (var_1_78) : (var_1_113)))) > (var_1_113)) ? (((((var_1_78) > (var_1_113)) ? (var_1_78) : (var_1_113)))) : (var_1_113))) >= stepLocal_24) {
  var_1_87 = ((var_1_74 + var_1_89) - 1);
 } else {
  var_1_87 = (var_1_89 + (var_1_90 + 10));
 }
 signed long int stepLocal_27 = var_1_38;
 signed long int stepLocal_26 = var_1_84 / var_1_89;
 signed long int stepLocal_25 = (var_1_40 - var_1_10) ^ var_1_87;
 if (var_1_75 > stepLocal_26) {
  if ((var_1_41 ^ ((((var_1_74) > (var_1_15)) ? (var_1_74) : (var_1_15)))) <= stepLocal_25) {
   if ((var_1_48 - var_1_74) < stepLocal_27) {
    var_1_93 = (((63.25f + var_1_94) + 3.5f) + (var_1_20 - var_1_21));
   } else {
    var_1_93 = var_1_24;
   }
  } else {
   var_1_93 = (var_1_32 - (var_1_31 + var_1_20));
  }
 } else {
  var_1_93 = var_1_52;
 }
 if (var_1_76) {
  var_1_103 = var_1_15;
 }
 if (var_1_76) {
  var_1_108 = var_1_65;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 49150);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16384);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= -1);
 assume_abort_if_not(var_1_37 <= 32767);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 32767);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 8191);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= -32766);
 assume_abort_if_not(var_1_48 <= -16383);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 8191);
 assume_abort_if_not(var_1_49 <= 16383);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 8191);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 1073741823);
 assume_abort_if_not(var_1_56 <= 2147483646);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -1);
 assume_abort_if_not(var_1_59 <= 126);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 63);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 63);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 16384);
 assume_abort_if_not(var_1_63 <= 32767);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 2147483647);
 assume_abort_if_not(var_1_69 <= 4294967294);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -922337.2036854776000e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854776000e+12F && var_1_71 >= 1.0e-20F ));
 assume_abort_if_not(var_1_71 != 0.0F);
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 1073741824);
 assume_abort_if_not(var_1_72 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= 63);
 assume_abort_if_not(var_1_74 <= 126);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= 1);
 assume_abort_if_not(var_1_79 <= 30);
 var_1_80 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_80 >= 16382);
 assume_abort_if_not(var_1_80 <= 32766);
 var_1_81 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_81 >= -1);
 assume_abort_if_not(var_1_81 <= 32766);
 var_1_82 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_82 >= 8192);
 assume_abort_if_not(var_1_82 <= 16383);
 var_1_84 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_84 >= -63);
 assume_abort_if_not(var_1_84 <= 63);
 var_1_85 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_85 >= -63);
 assume_abort_if_not(var_1_85 <= 63);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 64);
 assume_abort_if_not(var_1_89 <= 127);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 64);
 var_1_94 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_94 >= -115292.1504606845700e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 1152921.504606845700e+12F && var_1_94 >= 1.0e-20F ));
 var_1_96 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_96 >= -922337.2036854766000e+13F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854766000e+12F && var_1_96 >= 1.0e-20F ));
 var_1_98 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_98 >= 1);
 assume_abort_if_not(var_1_98 <= 1);
 var_1_115 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_115 >= -922337.2036854766000e+13F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 9223372.036854766000e+12F && var_1_115 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_113 = var_1_113;
 last_1_var_1_114 = var_1_114;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((100 > ((((var_1_36) < (var_1_55)) ? (var_1_36) : (var_1_55)))) ? (var_1_1 == ((unsigned char) var_1_4)) : (var_1_1 == ((unsigned char) ((! (var_1_4 || var_1_5)) || var_1_6)))) && (var_1_5 ? ((! ((- var_1_86) == 0.54)) ? (var_1_7 == ((unsigned short int) ((var_1_9 - ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))) - (var_1_12 + var_1_13)))) : (var_1_7 == ((unsigned short int) ((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)))))) : 1)) && ((var_1_9 <= 64) ? (var_1_14 == ((signed char) ((((var_1_15) > (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) ? (var_1_15) : (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))))))) : (var_1_14 == ((signed char) var_1_15)))) && (var_1_18 == ((float) (var_1_19 - (var_1_20 + var_1_21))))) && ((((var_1_19 + var_1_20) / var_1_23) <= ((((var_1_43) < (var_1_21)) ? (var_1_43) : (var_1_21)))) ? (var_1_22 == ((float) (var_1_21 + var_1_20))) : ((var_1_43 >= var_1_19) ? (var_1_22 == ((float) (((((((((var_1_24 - var_1_20)) > (15.4f)) ? ((var_1_24 - var_1_20)) : (15.4f)))) < (16.5f)) ? ((((((var_1_24 - var_1_20)) > (15.4f)) ? ((var_1_24 - var_1_20)) : (15.4f)))) : (16.5f))))) : (var_1_22 == ((float) ((((var_1_24) < (var_1_19)) ? (var_1_24) : (var_1_19)))))))) && ((last_1_var_1_39 == ((((var_1_12) > ((var_1_13 / var_1_9))) ? (var_1_12) : ((var_1_13 / var_1_9))))) ? (var_1_25 == ((unsigned char) var_1_6)) : (var_1_6 ? (var_1_25 == ((unsigned char) ((var_1_26 || var_1_27) || (! var_1_4)))) : 1))) && ((var_1_6 || var_1_27) ? ((1000000u != var_1_101) ? (var_1_28 == ((float) ((((((var_1_30 - var_1_20) - var_1_19)) < ((var_1_21 - (var_1_31 + var_1_32)))) ? (((var_1_30 - var_1_20) - var_1_19)) : ((var_1_21 - (var_1_31 + var_1_32))))))) : (var_1_28 == ((float) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) : 1)) && ((var_1_22 >= var_1_21) ? ((last_1_var_1_33 < var_1_21) ? ((var_1_5 || var_1_4) ? (var_1_33 == ((double) (((((var_1_31) < (100.625)) ? (var_1_31) : (100.625))) + (var_1_34 + var_1_35)))) : ((var_1_68 > (var_1_9 - (8 + var_1_13))) ? (var_1_33 == ((double) ((((var_1_21) < (2.5)) ? (var_1_21) : (2.5))))) : (var_1_33 == ((double) ((((var_1_30) < (var_1_34)) ? (var_1_30) : (var_1_34))))))) : (((- var_1_68) > (var_1_17 / var_1_9)) ? (var_1_33 == ((double) (var_1_35 + (((((10.5) > (var_1_31)) ? (10.5) : (var_1_31))) - var_1_32)))) : (var_1_33 == ((double) (var_1_20 + var_1_21))))) : ((((1655895704 - var_1_13) - (var_1_10 + var_1_54)) > (((((var_1_12) > (var_1_11)) ? (var_1_12) : (var_1_11))) ^ var_1_9)) ? (var_1_33 == ((double) ((var_1_31 - var_1_21) + var_1_20))) : 1))) && ((((var_1_37 - var_1_13) + (var_1_11 << var_1_107)) < (var_1_106 - var_1_38)) ? (var_1_36 == ((unsigned long int) var_1_12)) : 1)) && (var_1_5 ? ((var_1_30 > (- last_1_var_1_33)) ? (var_1_39 == ((unsigned short int) (var_1_11 + var_1_12))) : 1) : ((var_1_30 != 9999.625f) ? (((last_1_var_1_7 * last_1_var_1_101) <= last_1_var_1_101) ? (var_1_39 == ((unsigned short int) (var_1_40 + (((((var_1_41 - var_1_11)) > (var_1_12)) ? ((var_1_41 - var_1_11)) : (var_1_12)))))) : (var_1_39 == ((unsigned short int) ((var_1_13 + (32 + var_1_42)) + var_1_41)))) : (var_1_39 == ((unsigned short int) (var_1_10 + var_1_41)))))) && ((((((var_1_24) < ((var_1_19 - 8.55f))) ? (var_1_24) : ((var_1_19 - 8.55f)))) > var_1_35) ? (var_1_43 == ((float) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : (var_1_43 == ((float) ((((31.75f) > (var_1_32)) ? (31.75f) : (var_1_32))))))) && (var_1_44 == ((unsigned short int) (10 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))) && ((-5 != var_1_106) ? (var_1_45 == ((signed short int) var_1_7)) : ((var_1_31 >= var_1_86) ? ((var_1_23 < var_1_20) ? (((((((var_1_41) > (var_1_42)) ? (var_1_41) : (var_1_42))) << var_1_10) > var_1_17) ? (var_1_45 == ((signed short int) var_1_7)) : ((var_1_38 != var_1_55) ? (((var_1_36 < var_1_40) || (var_1_107 < var_1_11)) ? (var_1_45 == ((signed short int) var_1_7)) : 1) : (var_1_45 == ((signed short int) var_1_9)))) : (var_1_45 == ((signed short int) var_1_16))) : (var_1_45 == ((signed short int) var_1_16))))) && ((var_1_13 <= var_1_9) ? ((var_1_113 <= (((((var_1_9) > (var_1_106)) ? (var_1_9) : (var_1_106))) - var_1_12)) ? (var_1_47 == ((signed short int) ((((-4) > ((var_1_10 - var_1_42))) ? (-4) : ((var_1_10 - var_1_42)))))) : (var_1_47 == ((signed short int) (((((((((var_1_11) < (var_1_42)) ? (var_1_11) : (var_1_42)))) > (var_1_13)) ? (((((var_1_11) < (var_1_42)) ? (var_1_11) : (var_1_42)))) : (var_1_13))) - (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) - (var_1_49 - var_1_50)))))) : 1)) && ((var_1_21 >= var_1_22) ? (var_1_51 == ((float) (var_1_32 + var_1_35))) : (var_1_4 ? (var_1_5 ? (var_1_51 == ((float) (var_1_19 - ((((var_1_24) > (var_1_32)) ? (var_1_24) : (var_1_32)))))) : (var_1_51 == ((float) (((((-0.3f) < (((((var_1_32) > (var_1_21)) ? (var_1_32) : (var_1_21))))) ? (-0.3f) : (((((var_1_32) > (var_1_21)) ? (var_1_32) : (var_1_21)))))) + (var_1_34 + var_1_35))))) : ((! (var_1_20 >= var_1_35)) ? (var_1_51 == ((float) (var_1_32 + ((((var_1_52) < (127.5f)) ? (var_1_52) : (127.5f)))))) : (var_1_51 == ((float) (15.2f + var_1_52))))))) && (((var_1_42 | var_1_9) >= (var_1_48 + var_1_38)) ? (var_1_53 == ((double) (var_1_31 - (7.6 + var_1_21)))) : (var_1_53 == ((double) var_1_52)))) && (var_1_54 == ((unsigned short int) (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) - (var_1_41 - var_1_49))))) && (var_1_66 ? ((var_1_28 <= var_1_64) ? (var_1_55 == ((signed long int) (var_1_113 - (var_1_56 - var_1_40)))) : (var_1_55 == ((signed long int) ((((((var_1_16) > (var_1_7)) ? (var_1_16) : (var_1_7))) + (var_1_106 - var_1_41)) + var_1_10)))) : (var_1_4 ? ((var_1_11 <= var_1_56) ? (var_1_55 == ((signed long int) var_1_10)) : (var_1_55 == ((signed long int) (var_1_113 - var_1_107)))) : (var_1_55 == ((signed long int) (((((var_1_13 + var_1_7) < 0 ) ? -(var_1_13 + var_1_7) : (var_1_13 + var_1_7))) + -25)))))) && (((((((var_1_11 / var_1_49)) > (10)) ? ((var_1_11 / var_1_49)) : (10))) >= ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) ? (var_1_57 == ((unsigned char) (! var_1_27))) : 1)) && (var_1_6 ? (var_1_58 == ((signed char) (var_1_59 - (var_1_60 + var_1_61)))) : (var_1_58 == ((signed char) ((((var_1_16) < (((((var_1_17) < ((var_1_61 + var_1_60))) ? (var_1_17) : ((var_1_61 + var_1_60)))))) ? (var_1_16) : (((((var_1_17) < ((var_1_61 + var_1_60))) ? (var_1_17) : ((var_1_61 + var_1_60))))))))))) && (var_1_62 == ((unsigned short int) ((23995 + var_1_63) - var_1_42)))) && ((var_1_97 || var_1_4) ? (var_1_64 == ((double) ((((var_1_32) > (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_32) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) : 1)) && (var_1_99 ? (var_1_65 == ((unsigned short int) ((var_1_12 + var_1_42) + var_1_61))) : (var_1_65 == ((unsigned short int) var_1_9)))) && ((last_1_var_1_113 <= ((-2 | var_1_60) & (var_1_11 * last_1_var_1_55))) ? ((((((last_1_var_1_86) < (var_1_24)) ? (last_1_var_1_86) : (var_1_24))) <= ((((last_1_var_1_114) < 0 ) ? -(last_1_var_1_114) : (last_1_var_1_114)))) ? (var_1_66 == ((unsigned char) (var_1_26 || var_1_4))) : 1) : 1)) && (var_1_67 == ((signed char) var_1_15))) && (((var_1_64 + 100.5) <= var_1_30) ? (((var_1_28 + (var_1_32 * var_1_35)) == var_1_91) ? (var_1_68 == ((unsigned long int) (((((var_1_48) < (var_1_69)) ? (var_1_48) : (var_1_69))) - var_1_41))) : (((var_1_107 / var_1_56) > ((((var_1_9) < (((((var_1_60) > (var_1_41)) ? (var_1_60) : (var_1_41))))) ? (var_1_9) : (((((var_1_60) > (var_1_41)) ? (var_1_60) : (var_1_41))))))) ? (var_1_68 == ((unsigned long int) ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_10) < 0 ) ? -(((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_10) : (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_10))))) : (var_1_68 == ((unsigned long int) ((((1u + (var_1_56 - var_1_61)) < 0 ) ? -(1u + (var_1_56 - var_1_61)) : (1u + (var_1_56 - var_1_61)))))))) : ((((var_1_30 / var_1_23) / ((((31.25f) < (var_1_71)) ? (31.25f) : (var_1_71)))) <= var_1_28) ? (var_1_68 == ((unsigned long int) ((var_1_56 + var_1_72) - (var_1_11 + 8u)))) : (var_1_25 ? (var_1_68 == ((unsigned long int) ((((((((var_1_12) < (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))) ? (var_1_12) : (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))))) > (var_1_65)) ? (((((var_1_12) < (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))) ? (var_1_12) : (((((var_1_61) < (5u)) ? (var_1_61) : (5u))))))) : (var_1_65))))) : (var_1_68 == ((unsigned long int) (var_1_39 + var_1_61))))))) && ((9.999999999995E11f == var_1_34) ? (var_1_26 ? (var_1_73 == ((signed char) ((((((((var_1_16) < (var_1_59)) ? (var_1_16) : (var_1_59)))) > (((((var_1_60) < (var_1_61)) ? (var_1_60) : (var_1_61))))) ? (((((var_1_16) < (var_1_59)) ? (var_1_16) : (var_1_59)))) : (((((var_1_60) < (var_1_61)) ? (var_1_60) : (var_1_61)))))))) : ((var_1_49 < (5 - var_1_40)) ? (var_1_73 == ((signed char) (var_1_59 - var_1_61))) : (var_1_73 == ((signed char) ((((var_1_59) > (var_1_17)) ? (var_1_59) : (var_1_17))))))) : (var_1_73 == ((signed char) (((((var_1_60) < (var_1_59)) ? (var_1_60) : (var_1_59))) - (var_1_74 - var_1_61)))))) && (var_1_99 ? (var_1_75 == ((signed char) ((((var_1_17) < (((((var_1_16) > (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74))))) ? (var_1_16) : (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74)))))))) ? (var_1_17) : (((((var_1_16) > (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74))))) ? (var_1_16) : (((((var_1_60) < (var_1_74)) ? (var_1_60) : (var_1_74))))))))))) : 1)) && (((var_1_19 + var_1_53) != var_1_33) ? (var_1_76 == ((unsigned char) var_1_4)) : (var_1_76 == ((unsigned char) ((! (var_1_25 || var_1_105)) && (! var_1_4)))))) && ((var_1_69 <= (var_1_107 >> var_1_79)) ? ((var_1_76 && ((- 1) <= var_1_68)) ? (var_1_78 == ((signed short int) ((((((var_1_80 - var_1_79)) < (((((var_1_81) > (var_1_13)) ? (var_1_81) : (var_1_13))))) ? ((var_1_80 - var_1_79)) : (((((var_1_81) > (var_1_13)) ? (var_1_81) : (var_1_13)))))) - ((var_1_49 + var_1_82) - ((((var_1_10) < (var_1_61)) ? (var_1_10) : (var_1_61))))))) : 1) : 1)) && ((var_1_66 && var_1_111) ? (var_1_83 == ((signed char) (((((var_1_61) < (4)) ? (var_1_61) : (4))) - var_1_79))) : ((((var_1_10 - var_1_50) + var_1_106) >= var_1_42) ? (var_1_83 == ((signed char) ((((((((var_1_16) < ((var_1_60 + var_1_79))) ? (var_1_16) : ((var_1_60 + var_1_79))))) > ((((((var_1_61) > (var_1_84)) ? (var_1_61) : (var_1_84))) + var_1_85))) ? (((((var_1_16) < ((var_1_60 + var_1_79))) ? (var_1_16) : ((var_1_60 + var_1_79))))) : ((((((var_1_61) > (var_1_84)) ? (var_1_61) : (var_1_84))) + var_1_85)))))) : 1))) && (((var_1_82 - var_1_74) <= var_1_59) ? ((var_1_66 && var_1_4) ? (var_1_86 == ((double) (((((var_1_32 - var_1_31)) > (var_1_20)) ? ((var_1_32 - var_1_31)) : (var_1_20))))) : 1) : (var_1_86 == ((double) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) && ((((((((((var_1_78) > (var_1_113)) ? (var_1_78) : (var_1_113)))) > (var_1_113)) ? (((((var_1_78) > (var_1_113)) ? (var_1_78) : (var_1_113)))) : (var_1_113))) >= var_1_13) ? (var_1_87 == ((unsigned char) ((var_1_74 + var_1_89) - 1))) : (var_1_87 == ((unsigned char) (var_1_89 + (var_1_90 + 10)))))) && (var_1_91 == ((float) var_1_21))) && ((var_1_16 <= ((var_1_12 * var_1_80) / var_1_79)) ? (var_1_92 == ((float) (((((var_1_31 + var_1_20)) > (((((128.38f) > (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32))))) ? (128.38f) : (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32)))))))) ? ((var_1_31 + var_1_20)) : (((((128.38f) > (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32))))) ? (128.38f) : (((((var_1_21) < (var_1_32)) ? (var_1_21) : (var_1_32))))))))))) : (var_1_92 == ((float) var_1_32)))) && ((var_1_75 > (var_1_84 / var_1_89)) ? (((var_1_41 ^ ((((var_1_74) > (var_1_15)) ? (var_1_74) : (var_1_15)))) <= ((var_1_40 - var_1_10) ^ var_1_87)) ? (((var_1_48 - var_1_74) < var_1_38) ? (var_1_93 == ((float) (((63.25f + var_1_94) + 3.5f) + (var_1_20 - var_1_21)))) : (var_1_93 == ((float) var_1_24))) : (var_1_93 == ((float) (var_1_32 - (var_1_31 + var_1_20))))) : (var_1_93 == ((float) var_1_52)))) && ((var_1_107 >= var_1_41) ? (var_1_95 == ((float) ((((var_1_34) < ((var_1_31 - ((((var_1_20) < (4.75f)) ? (var_1_20) : (4.75f)))))) ? (var_1_34) : ((var_1_31 - ((((var_1_20) < (4.75f)) ? (var_1_20) : (4.75f))))))))) : ((! var_1_66) ? (var_1_95 == ((float) var_1_31)) : ((var_1_111 || var_1_27) ? (var_1_95 == ((float) ((((var_1_30) > ((64.5f + var_1_35))) ? (var_1_30) : ((64.5f + var_1_35)))))) : ((var_1_109 <= var_1_101) ? (var_1_95 == ((float) ((((var_1_24) > (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30))))) ? (var_1_24) : (((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)))))))) : ((var_1_55 < (var_1_62 / ((((var_1_80) > (25)) ? (var_1_80) : (25))))) ? ((! (var_1_34 > var_1_86)) ? (var_1_95 == ((float) var_1_96)) : (var_1_95 == ((float) ((((var_1_35) > ((((((var_1_24 - var_1_19)) < (var_1_96)) ? ((var_1_24 - var_1_19)) : (var_1_96))))) ? (var_1_35) : ((((((var_1_24 - var_1_19)) < (var_1_96)) ? ((var_1_24 - var_1_19)) : (var_1_96))))))))) : (var_1_95 == ((float) (1.75f + var_1_21))))))))) && (((var_1_83 < (var_1_17 | var_1_49)) || var_1_27) ? (var_1_97 == ((unsigned char) var_1_26)) : 1)) && (var_1_98 ? (var_1_99 == ((unsigned char) 1)) : 1)) && (var_1_100 == ((unsigned char) var_1_60))) && (var_1_25 ? (var_1_101 == ((unsigned long int) var_1_54)) : (var_1_101 == ((unsigned long int) var_1_49)))) && (var_1_98 ? (var_1_102 == ((unsigned short int) 32)) : (var_1_102 == ((unsigned short int) var_1_44)))) && (var_1_76 ? (var_1_103 == ((signed char) var_1_15)) : 1)) && (var_1_104 == ((signed char) var_1_74))) && (var_1_105 == ((unsigned char) 1))) && (var_1_99 ? (var_1_106 == ((signed long int) var_1_67)) : (var_1_106 == ((signed long int) var_1_85)))) && (var_1_70 ? (var_1_107 == ((unsigned long int) var_1_40)) : (var_1_107 == ((unsigned long int) 5u)))) && (var_1_76 ? (var_1_108 == ((unsigned short int) var_1_65)) : 1)) && (var_1_97 ? (var_1_109 == ((signed long int) var_1_49)) : 1)) && (var_1_110 == ((unsigned char) var_1_79))) && ((var_1_30 <= var_1_52) ? (var_1_111 == ((unsigned char) (! var_1_27))) : (var_1_111 == ((unsigned char) var_1_26)))) && (var_1_112 == ((signed char) var_1_15))) && (var_1_113 == ((signed long int) var_1_74))) && (var_1_114 == ((float) var_1_115))
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
