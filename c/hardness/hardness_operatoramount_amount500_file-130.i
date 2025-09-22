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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -4;
signed long int var_1_5 = 1788365988;
signed long int var_1_6 = 25;
signed long int var_1_7 = 1000000000;
signed long int var_1_8 = 1;
signed long int var_1_10 = 2055641894;
signed long int var_1_11 = 1;
signed long int var_1_12 = 4;
signed short int var_1_13 = 10;
signed short int var_1_15 = -8;
unsigned long int var_1_16 = 5;
double var_1_17 = 9.75;
double var_1_19 = 99.6;
double var_1_20 = 0.75;
double var_1_21 = 9.6;
double var_1_22 = 0.0;
double var_1_23 = 10.25;
double var_1_24 = 32.75;
double var_1_25 = 7.1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 32;
double var_1_29 = 24.7;
unsigned char var_1_30 = 16;
unsigned char var_1_31 = 8;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 32;
signed short int var_1_34 = -2;
signed short int var_1_35 = 26470;
unsigned long int var_1_36 = 10000000;
unsigned long int var_1_37 = 2200721456;
unsigned short int var_1_38 = 0;
unsigned short int var_1_39 = 22793;
unsigned short int var_1_40 = 10000;
signed short int var_1_41 = 10;
double var_1_42 = 0.875;
double var_1_45 = 0.0;
double var_1_46 = 0.0;
double var_1_47 = 0.0;
double var_1_48 = 0.0;
float var_1_49 = 10.5;
signed short int var_1_50 = 128;
float var_1_51 = 3.375;
unsigned long int var_1_52 = 10;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 1;
signed long int var_1_56 = 128;
unsigned long int var_1_57 = 256;
unsigned long int var_1_58 = 1287307357;
unsigned long int var_1_59 = 1;
unsigned long int var_1_60 = 1660521965;
unsigned char var_1_61 = 5;
unsigned char var_1_63 = 64;
unsigned char var_1_64 = 100;
signed long int var_1_65 = -8;
unsigned long int var_1_66 = 256;
unsigned long int var_1_67 = 0;
unsigned short int var_1_68 = 500;
unsigned short int var_1_69 = 61726;
unsigned short int var_1_70 = 60181;
double var_1_72 = 10.25;
signed short int var_1_73 = 100;
signed char var_1_75 = 0;
signed char var_1_76 = 0;
signed char var_1_77 = 0;
signed char var_1_78 = 32;
signed char var_1_79 = 32;
signed char var_1_80 = 4;
float var_1_81 = 64.8;
float var_1_82 = 9.75;
unsigned short int var_1_83 = 2;
signed long int var_1_84 = 128;
signed long int var_1_85 = -100;
double var_1_86 = 0.25;
double var_1_87 = 5.05;
float var_1_88 = 10.7;
signed char var_1_89 = 16;
signed char var_1_90 = 2;
signed char var_1_91 = 32;
signed char var_1_93 = 50;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 5;
unsigned char var_1_96 = 50;
unsigned char var_1_97 = 1;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 1;
signed short int var_1_100 = -10;
double var_1_101 = 7.8;
unsigned short int var_1_102 = 0;
signed short int var_1_103 = -50;
double var_1_104 = 4.9;
signed short int var_1_105 = -1;
signed long int var_1_106 = -10;
double var_1_107 = 32.75;
signed short int var_1_108 = 5;
signed long int last_1_var_1_1 = -4;
unsigned long int last_1_var_1_36 = 10000000;
unsigned short int last_1_var_1_68 = 500;
double last_1_var_1_72 = 10.25;
signed short int last_1_var_1_73 = 100;
float last_1_var_1_81 = 64.8;
float last_1_var_1_88 = 10.7;
unsigned char last_1_var_1_99 = 1;
signed short int last_1_var_1_108 = 5;
void initially(void) {
}
void step(void) {
 if (var_1_48 > 99.625) {
  var_1_52 = var_1_7;
 } else {
  if (var_1_48 > ((var_1_21 + var_1_29) - var_1_46)) {
   var_1_52 = ((((((var_1_10 - var_1_11)) < ((last_1_var_1_108 + var_1_40))) ? ((var_1_10 - var_1_11)) : ((last_1_var_1_108 + var_1_40)))) + ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))));
  } else {
   var_1_52 = ((((last_1_var_1_68) < (var_1_40)) ? (last_1_var_1_68) : (var_1_40)));
  }
 }
 signed long int stepLocal_7 = -16;
 if (last_1_var_1_99) {
  if (! (last_1_var_1_36 < (~ last_1_var_1_1))) {
   if (200.7f > ((last_1_var_1_72 + last_1_var_1_88) * last_1_var_1_81)) {
    if (last_1_var_1_88 != (var_1_19 + (var_1_25 + 1.00000000005E10f))) {
     var_1_42 = var_1_25;
    } else {
     var_1_42 = var_1_19;
    }
   } else {
    var_1_42 = ((((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46))) - ((((3.25) > (var_1_21)) ? (3.25) : (var_1_21)))) - (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - var_1_24));
   }
  }
 } else {
  if (stepLocal_7 > last_1_var_1_73) {
   var_1_42 = (((((var_1_20 + 63.6)) < (8.875)) ? ((var_1_20 + 63.6)) : (8.875)));
  }
 }
 unsigned long int stepLocal_14 = 4u << var_1_30;
 if (var_1_48 < var_1_42) {
  if ((var_1_60 + var_1_59) > stepLocal_14) {
   var_1_72 = (var_1_24 + var_1_20);
  } else {
   var_1_72 = ((((var_1_25 - var_1_22) < 0 ) ? -(var_1_25 - var_1_22) : (var_1_25 - var_1_22)));
  }
 } else {
  var_1_72 = ((((var_1_47) < (((var_1_46 - var_1_23) - (var_1_21 + var_1_25)))) ? (var_1_47) : (((var_1_46 - var_1_23) - (var_1_21 + var_1_25)))));
 }
 if (var_1_22 < var_1_24) {
  var_1_34 = ((var_1_35 - var_1_31) - var_1_33);
 } else {
  var_1_34 = (var_1_31 - var_1_30);
 }
 var_1_36 = (var_1_37 - var_1_35);
 unsigned long int stepLocal_16 = var_1_59;
 if (var_1_55) {
  if (var_1_37 > stepLocal_16) {
   var_1_75 = ((((var_1_76 - var_1_77) < 0 ) ? -(var_1_76 - var_1_77) : (var_1_76 - var_1_77)));
  } else {
   var_1_75 = (((((var_1_77) < ((var_1_78 + var_1_79))) ? (var_1_77) : ((var_1_78 + var_1_79)))) - 4);
  }
 } else {
  var_1_75 = (var_1_78 + var_1_79);
 }
 var_1_88 = ((((((((var_1_48) < (var_1_25)) ? (var_1_48) : (var_1_25)))) > (7.8f)) ? (((((var_1_48) < (var_1_25)) ? (var_1_48) : (var_1_25)))) : (7.8f)));
 var_1_94 = 0;
 if (var_1_55) {
  var_1_95 = var_1_33;
 } else {
  var_1_95 = var_1_30;
 }
 if (var_1_27) {
  var_1_96 = var_1_90;
 }
 var_1_98 = var_1_27;
 var_1_100 = var_1_63;
 if (var_1_94) {
  var_1_101 = var_1_24;
 } else {
  var_1_101 = var_1_46;
 }
 var_1_102 = var_1_39;
 var_1_105 = var_1_93;
 var_1_108 = 25;
 var_1_38 = (var_1_96 + (var_1_39 - (var_1_40 - var_1_30)));
 if (var_1_94) {
  var_1_80 = var_1_76;
 } else {
  var_1_80 = (32 + var_1_79);
 }
 if (var_1_98) {
  var_1_84 = ((((1) > ((var_1_31 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) ? (1) : ((var_1_31 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))));
 } else {
  var_1_84 = var_1_40;
 }
 signed long int stepLocal_23 = (var_1_12 + var_1_6) >> var_1_90;
 if ((- var_1_36) < stepLocal_23) {
  if (var_1_94) {
   var_1_89 = var_1_90;
  }
 } else {
  var_1_89 = ((((((((var_1_90) > ((var_1_79 - var_1_77))) ? (var_1_90) : ((var_1_79 - var_1_77))))) < ((var_1_76 - var_1_78))) ? (((((var_1_90) > ((var_1_79 - var_1_77))) ? (var_1_90) : ((var_1_79 - var_1_77))))) : ((var_1_76 - var_1_78))));
 }
 if (var_1_98) {
  var_1_97 = var_1_54;
 } else {
  var_1_97 = var_1_27;
 }
 if (var_1_97) {
  var_1_99 = 1;
 } else {
  var_1_99 = var_1_27;
 }
 if (var_1_97) {
  var_1_104 = var_1_22;
 }
 if (var_1_94 && var_1_97) {
  if (var_1_94) {
   var_1_16 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  } else {
   var_1_16 = (((((3507549886u - var_1_11) - 256u) < 0 ) ? -((3507549886u - var_1_11) - 256u) : ((3507549886u - var_1_11) - 256u)));
  }
 }
 if (var_1_99 || (var_1_99 && var_1_94)) {
  var_1_26 = (var_1_94 && var_1_27);
 }
 signed long int stepLocal_6 = var_1_5;
 unsigned long int stepLocal_5 = var_1_16;
 if (var_1_8 < stepLocal_5) {
  if (stepLocal_6 >= var_1_36) {
   if ((((((var_1_25) > (var_1_21)) ? (var_1_25) : (var_1_21))) * (- var_1_23)) < (15.5 - (var_1_24 + var_1_29))) {
    var_1_28 = ((((((((0) < (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))) ? (0) : (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))))) < ((var_1_32 - var_1_33))) ? (((((0) < (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))) ? (0) : (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))))) : ((var_1_32 - var_1_33))));
   }
  } else {
   var_1_28 = (var_1_32 - var_1_33);
  }
 } else {
  var_1_28 = ((((((((var_1_32) > (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))) > (var_1_30)) ? (((((var_1_32) > (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))) : (var_1_30)));
 }
 if (var_1_99 && var_1_97) {
  var_1_56 = ((((((var_1_31) < (var_1_15)) ? (var_1_31) : (var_1_15))) + var_1_39) + (var_1_38 + ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))));
 }
 if (var_1_26) {
  var_1_106 = var_1_102;
 } else {
  var_1_106 = var_1_76;
 }
 signed long int stepLocal_9 = var_1_6;
 unsigned char stepLocal_8 = (var_1_6 % var_1_50) <= 64;
 if (-25 > stepLocal_9) {
  if (var_1_99) {
   if (stepLocal_8 && var_1_54) {
    var_1_57 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
   } else {
    var_1_57 = (var_1_59 + var_1_39);
   }
  } else {
   var_1_57 = ((((var_1_56) > (var_1_30)) ? (var_1_56) : (var_1_30)));
  }
 } else {
  if (var_1_42 < (- var_1_20)) {
   var_1_57 = (((((10u) > (var_1_58)) ? (10u) : (var_1_58))) + ((var_1_60 - var_1_8) - var_1_40));
  }
 }
 if (var_1_36 >= (((((- var_1_57)) < (var_1_40)) ? ((- var_1_57)) : (var_1_40)))) {
  if (((((var_1_39) < (var_1_36)) ? (var_1_39) : (var_1_36))) != ((var_1_30 >> 1) / var_1_40)) {
   var_1_53 = (! ((! var_1_99) && (var_1_98 && var_1_27)));
  } else {
   var_1_53 = (var_1_26 && var_1_27);
  }
 } else {
  if ((var_1_16 * var_1_11) < var_1_36) {
   if (! (var_1_16 >= var_1_30)) {
    var_1_53 = ((var_1_54 && var_1_55) && (! var_1_27));
   } else {
    var_1_53 = (! var_1_27);
   }
  } else {
   var_1_53 = var_1_55;
  }
 }
 signed long int stepLocal_3 = var_1_6;
 unsigned char stepLocal_2 = var_1_94;
 if (var_1_16 == stepLocal_3) {
  if (stepLocal_2 || var_1_98) {
   var_1_13 = ((((-32) < (var_1_15)) ? (-32) : (var_1_15)));
  }
 }
 if (((var_1_5 * -32) & (var_1_33 * var_1_57)) != var_1_15) {
  var_1_41 = ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < (((((var_1_40) > ((var_1_16 + var_1_32))) ? (var_1_40) : ((var_1_16 + var_1_32)))))) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (((((var_1_40) > ((var_1_16 + var_1_32))) ? (var_1_40) : ((var_1_16 + var_1_32)))))));
 } else {
  if (var_1_26) {
   var_1_41 = -256;
  } else {
   var_1_41 = var_1_33;
  }
 }
 if (var_1_94 && (! var_1_27)) {
  if (! var_1_27) {
   if (var_1_13 <= (var_1_84 / ((((var_1_50) < (var_1_39)) ? (var_1_50) : (var_1_39))))) {
    var_1_49 = (((((var_1_20 + var_1_21)) > (var_1_23)) ? ((var_1_20 + var_1_21)) : (var_1_23)));
   } else {
    var_1_49 = ((((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))) + var_1_25) - ((((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) < (var_1_46)) ? (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) : (var_1_46))));
   }
  }
 }
 unsigned long int stepLocal_20 = var_1_57;
 unsigned char stepLocal_19 = var_1_64;
 if (stepLocal_19 == (50 / var_1_63)) {
  if (stepLocal_20 < (var_1_77 - var_1_78)) {
   var_1_86 = (((((var_1_22 - ((((var_1_29) > (var_1_24)) ? (var_1_29) : (var_1_24))))) > ((((((var_1_25 + var_1_19)) < (15.6)) ? ((var_1_25 + var_1_19)) : (15.6))))) ? ((var_1_22 - ((((var_1_29) > (var_1_24)) ? (var_1_29) : (var_1_24))))) : ((((((var_1_25 + var_1_19)) < (15.6)) ? ((var_1_25 + var_1_19)) : (15.6))))));
  } else {
   var_1_86 = (((((var_1_24 + var_1_21)) > (var_1_23)) ? ((var_1_24 + var_1_21)) : (var_1_23)));
  }
 } else {
  var_1_86 = (var_1_25 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))));
 }
 unsigned char stepLocal_26 = var_1_11 < var_1_13;
 if (stepLocal_26 && var_1_99) {
  var_1_107 = (var_1_24 + ((((var_1_20) > (((((var_1_25) < (var_1_22)) ? (var_1_25) : (var_1_22))))) ? (var_1_20) : (((((var_1_25) < (var_1_22)) ? (var_1_25) : (var_1_22)))))));
 } else {
  var_1_107 = ((((var_1_24 - var_1_47) < 0 ) ? -(var_1_24 - var_1_47) : (var_1_24 - var_1_47)));
 }
 if ((- var_1_21) <= var_1_19) {
  if ((var_1_6 - var_1_39) < var_1_12) {
   var_1_67 = (var_1_6 + var_1_52);
  } else {
   var_1_67 = (((((var_1_32 + var_1_39) < 0 ) ? -(var_1_32 + var_1_39) : (var_1_32 + var_1_39))) + (var_1_31 + ((((var_1_40) > (var_1_13)) ? (var_1_40) : (var_1_13)))));
  }
 }
 unsigned long int stepLocal_18 = (((256u) < (var_1_30)) ? (256u) : (var_1_30));
 signed char stepLocal_17 = var_1_78;
 if (var_1_57 > stepLocal_18) {
  if (stepLocal_17 <= ((var_1_79 << var_1_67) / var_1_63)) {
   var_1_83 = (var_1_69 - var_1_39);
  } else {
   var_1_83 = (var_1_69 - var_1_31);
  }
 }
 if (var_1_26) {
  var_1_103 = var_1_95;
 } else {
  var_1_103 = var_1_83;
 }
 unsigned long int stepLocal_4 = var_1_52;
 if (var_1_53) {
  if (var_1_11 > stepLocal_4) {
   var_1_17 = (var_1_19 + var_1_20);
  } else {
   if (! var_1_26) {
    var_1_17 = ((var_1_21 - (var_1_22 - var_1_23)) + var_1_20);
   } else {
    var_1_17 = (var_1_21 - 7.4);
   }
  }
 } else {
  var_1_17 = (((var_1_23 + var_1_24) + var_1_25) - var_1_21);
 }
 unsigned char stepLocal_25 = var_1_77 <= (var_1_79 - var_1_63);
 unsigned short int stepLocal_24 = var_1_83;
 if (stepLocal_25 || (var_1_78 != var_1_38)) {
  if (stepLocal_24 <= var_1_16) {
   var_1_91 = ((((var_1_79) > ((var_1_77 - var_1_76))) ? (var_1_79) : ((var_1_77 - var_1_76))));
  } else {
   var_1_91 = (((((var_1_78) < (((((var_1_90) < (var_1_77)) ? (var_1_90) : (var_1_77))))) ? (var_1_78) : (((((var_1_90) < (var_1_77)) ? (var_1_90) : (var_1_77)))))) - (var_1_79 + var_1_93));
  }
 } else {
  if (var_1_42 <= (- var_1_21)) {
   if (var_1_101 < var_1_104) {
    var_1_91 = var_1_93;
   } else {
    var_1_91 = var_1_76;
   }
  }
 }
 if (var_1_51 <= var_1_22) {
  var_1_68 = ((((((var_1_69 - var_1_33)) > (var_1_70)) ? ((var_1_69 - var_1_33)) : (var_1_70))) - var_1_52);
 } else {
  if (var_1_42 >= var_1_45) {
   var_1_68 = (var_1_31 + (((((var_1_30) > (var_1_52)) ? (var_1_30) : (var_1_52))) + var_1_40));
  } else {
   var_1_68 = ((var_1_63 + var_1_103) + (var_1_39 - var_1_33));
  }
 }
 unsigned char stepLocal_13 = var_1_17 > var_1_45;
 if (var_1_99 || stepLocal_13) {
  if (var_1_26) {
   var_1_66 = (((((var_1_37 - var_1_12)) < (var_1_38)) ? ((var_1_37 - var_1_12)) : (var_1_38)));
  }
 } else {
  var_1_66 = (var_1_37 - var_1_35);
 }
 unsigned char stepLocal_15 = var_1_33;
 if (var_1_99) {
  if (stepLocal_15 < var_1_106) {
   var_1_73 = ((((var_1_15) < ((var_1_40 + var_1_63))) ? (var_1_15) : ((var_1_40 + var_1_63))));
  }
 } else {
  var_1_73 = (((((((((var_1_66) < (var_1_63)) ? (var_1_66) : (var_1_63)))) > (var_1_30)) ? (((((var_1_66) < (var_1_63)) ? (var_1_66) : (var_1_63)))) : (var_1_30))) + -4);
 }
 unsigned short int stepLocal_1 = var_1_68;
 signed short int stepLocal_0 = var_1_34;
 if (var_1_98) {
  if (var_1_34 != stepLocal_1) {
   if (stepLocal_0 < var_1_68) {
    var_1_1 = ((var_1_5 - ((((2) > (var_1_6)) ? (2) : (var_1_6)))) - 64);
   } else {
    var_1_1 = ((var_1_6 - (var_1_7 - var_1_8)) + var_1_34);
   }
  } else {
   if (8.5f >= var_1_104) {
    var_1_1 = (((((var_1_68 + (var_1_8 - var_1_7))) > (var_1_6)) ? ((var_1_68 + (var_1_8 - var_1_7))) : (var_1_6)));
   } else {
    var_1_1 = (((var_1_10 - var_1_8) - var_1_7) - (var_1_6 + ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))));
   }
  }
 } else {
  var_1_1 = (var_1_7 - (((((var_1_6 + var_1_11)) < (var_1_5)) ? ((var_1_6 + var_1_11)) : (var_1_5))));
 }
 if ((var_1_37 - (var_1_60 - 8u)) != (var_1_57 + (- var_1_7))) {
  if (var_1_50 <= var_1_57) {
   var_1_81 = (var_1_20 + (((((var_1_25) > (var_1_21)) ? (var_1_25) : (var_1_21))) - var_1_23));
  }
 } else {
  if ((((((var_1_76 / var_1_64)) < ((var_1_37 + var_1_78))) ? ((var_1_76 / var_1_64)) : ((var_1_37 + var_1_78)))) > ((var_1_66 * var_1_73) / var_1_70)) {
   var_1_81 = (((((var_1_29) > (var_1_82)) ? (var_1_29) : (var_1_82))) - (var_1_24 + var_1_22));
  } else {
   var_1_81 = (((((var_1_20) > ((0.5f + var_1_23))) ? (var_1_20) : ((0.5f + var_1_23)))) + ((((var_1_24 - var_1_21) < 0 ) ? -(var_1_24 - var_1_21) : (var_1_24 - var_1_21))));
  }
 }
 signed long int stepLocal_12 = (-10 | var_1_38) & -32;
 unsigned char stepLocal_11 = var_1_55;
 unsigned char stepLocal_10 = var_1_54;
 if (stepLocal_11 && var_1_54) {
  if (stepLocal_10 && (var_1_107 < var_1_81)) {
   if ((var_1_32 + var_1_50) <= stepLocal_12) {
    var_1_61 = ((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32)));
   }
  }
 } else {
  if ((((((- var_1_81)) > (-0.2f)) ? ((- var_1_81)) : (-0.2f))) <= (var_1_46 - var_1_45)) {
   var_1_61 = ((var_1_63 + var_1_64) - var_1_33);
  }
 }
 if ((var_1_57 / var_1_32) <= var_1_66) {
  var_1_65 = ((((var_1_7) < ((25 - var_1_5))) ? (var_1_7) : ((25 - var_1_5))));
 } else {
  if ((- var_1_72) == 1.00000000000004E13f) {
   var_1_65 = (var_1_8 - var_1_39);
  }
 }
 if (var_1_79 < (var_1_102 / var_1_50)) {
  var_1_85 = ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66)));
 } else {
  var_1_85 = ((var_1_10 - var_1_8) - var_1_84);
 }
 signed long int stepLocal_22 = 128;
 unsigned long int stepLocal_21 = (var_1_5 * var_1_36) * var_1_66;
 if (var_1_1 >= stepLocal_22) {
  if (stepLocal_21 < var_1_66) {
   var_1_87 = ((var_1_22 - var_1_24) + var_1_25);
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 1073741822);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 536870911);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 536870911);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1610612734);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32767);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 2305843.009213691400e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427388000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 127);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= 16382);
 assume_abort_if_not(var_1_35 <= 32766);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 8191);
 assume_abort_if_not(var_1_40 <= 16383);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 4611686.018427383000e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 4611686.018427383000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 4611686.018427383000e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 4611686.018427383000e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= -32768);
 assume_abort_if_not(var_1_50 <= 32767);
 assume_abort_if_not(var_1_50 != 0);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -922337.2036854766000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 1);
 assume_abort_if_not(var_1_54 <= 1);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 1073741824);
 assume_abort_if_not(var_1_58 <= 2147483647);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 2147483647);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 1610612735);
 assume_abort_if_not(var_1_60 <= 2147483647);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 63);
 assume_abort_if_not(var_1_63 <= 127);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 64);
 assume_abort_if_not(var_1_64 <= 127);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 49150);
 assume_abort_if_not(var_1_69 <= 65534);
 var_1_70 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_70 >= 32767);
 assume_abort_if_not(var_1_70 <= 65534);
 var_1_76 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 126);
 var_1_77 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 126);
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 63);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 63);
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854766000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_90 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_90 >= 1);
 assume_abort_if_not(var_1_90 <= 30);
 var_1_93 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_93 >= 0);
 assume_abort_if_not(var_1_93 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_108 = var_1_108;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_98 ? ((var_1_34 != var_1_68) ? ((var_1_34 < var_1_68) ? (var_1_1 == ((signed long int) ((var_1_5 - ((((2) > (var_1_6)) ? (2) : (var_1_6)))) - 64))) : (var_1_1 == ((signed long int) ((var_1_6 - (var_1_7 - var_1_8)) + var_1_34)))) : ((8.5f >= var_1_104) ? (var_1_1 == ((signed long int) (((((var_1_68 + (var_1_8 - var_1_7))) > (var_1_6)) ? ((var_1_68 + (var_1_8 - var_1_7))) : (var_1_6))))) : (var_1_1 == ((signed long int) (((var_1_10 - var_1_8) - var_1_7) - (var_1_6 + ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))))))) : (var_1_1 == ((signed long int) (var_1_7 - (((((var_1_6 + var_1_11)) < (var_1_5)) ? ((var_1_6 + var_1_11)) : (var_1_5))))))) && ((var_1_16 == var_1_6) ? ((var_1_94 || var_1_98) ? (var_1_13 == ((signed short int) ((((-32) < (var_1_15)) ? (-32) : (var_1_15))))) : 1) : 1)) && ((var_1_94 && var_1_97) ? (var_1_94 ? (var_1_16 == ((unsigned long int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_16 == ((unsigned long int) (((((3507549886u - var_1_11) - 256u) < 0 ) ? -((3507549886u - var_1_11) - 256u) : ((3507549886u - var_1_11) - 256u)))))) : 1)) && (var_1_53 ? ((var_1_11 > var_1_52) ? (var_1_17 == ((double) (var_1_19 + var_1_20))) : ((! var_1_26) ? (var_1_17 == ((double) ((var_1_21 - (var_1_22 - var_1_23)) + var_1_20))) : (var_1_17 == ((double) (var_1_21 - 7.4))))) : (var_1_17 == ((double) (((var_1_23 + var_1_24) + var_1_25) - var_1_21))))) && ((var_1_99 || (var_1_99 && var_1_94)) ? (var_1_26 == ((unsigned char) (var_1_94 && var_1_27))) : 1)) && ((var_1_8 < var_1_16) ? ((var_1_5 >= var_1_36) ? (((((((var_1_25) > (var_1_21)) ? (var_1_25) : (var_1_21))) * (- var_1_23)) < (15.5 - (var_1_24 + var_1_29))) ? (var_1_28 == ((unsigned char) ((((((((0) < (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))) ? (0) : (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))))) < ((var_1_32 - var_1_33))) ? (((((0) < (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))) ? (0) : (((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))))) : ((var_1_32 - var_1_33)))))) : 1) : (var_1_28 == ((unsigned char) (var_1_32 - var_1_33)))) : (var_1_28 == ((unsigned char) ((((((((var_1_32) > (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))) > (var_1_30)) ? (((((var_1_32) > (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_32) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))) : (var_1_30))))))) && ((var_1_22 < var_1_24) ? (var_1_34 == ((signed short int) ((var_1_35 - var_1_31) - var_1_33))) : (var_1_34 == ((signed short int) (var_1_31 - var_1_30))))) && (var_1_36 == ((unsigned long int) (var_1_37 - var_1_35)))) && (var_1_38 == ((unsigned short int) (var_1_96 + (var_1_39 - (var_1_40 - var_1_30)))))) && ((((var_1_5 * -32) & (var_1_33 * var_1_57)) != var_1_15) ? (var_1_41 == ((signed short int) ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < (((((var_1_40) > ((var_1_16 + var_1_32))) ? (var_1_40) : ((var_1_16 + var_1_32)))))) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (((((var_1_40) > ((var_1_16 + var_1_32))) ? (var_1_40) : ((var_1_16 + var_1_32))))))))) : (var_1_26 ? (var_1_41 == ((signed short int) -256)) : (var_1_41 == ((signed short int) var_1_33))))) && (last_1_var_1_99 ? ((! (last_1_var_1_36 < (~ last_1_var_1_1))) ? ((200.7f > ((last_1_var_1_72 + last_1_var_1_88) * last_1_var_1_81)) ? ((last_1_var_1_88 != (var_1_19 + (var_1_25 + 1.00000000005E10f))) ? (var_1_42 == ((double) var_1_25)) : (var_1_42 == ((double) var_1_19))) : (var_1_42 == ((double) ((((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46))) - ((((3.25) > (var_1_21)) ? (3.25) : (var_1_21)))) - (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - var_1_24))))) : 1) : ((-16 > last_1_var_1_73) ? (var_1_42 == ((double) (((((var_1_20 + 63.6)) < (8.875)) ? ((var_1_20 + 63.6)) : (8.875))))) : 1))) && ((var_1_94 && (! var_1_27)) ? ((! var_1_27) ? ((var_1_13 <= (var_1_84 / ((((var_1_50) < (var_1_39)) ? (var_1_50) : (var_1_39))))) ? (var_1_49 == ((float) (((((var_1_20 + var_1_21)) > (var_1_23)) ? ((var_1_20 + var_1_21)) : (var_1_23))))) : (var_1_49 == ((float) ((((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22))) + var_1_25) - ((((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) < (var_1_46)) ? (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) : (var_1_46))))))) : 1) : 1)) && ((var_1_48 > 99.625) ? (var_1_52 == ((unsigned long int) var_1_7)) : ((var_1_48 > ((var_1_21 + var_1_29) - var_1_46)) ? (var_1_52 == ((unsigned long int) ((((((var_1_10 - var_1_11)) < ((last_1_var_1_108 + var_1_40))) ? ((var_1_10 - var_1_11)) : ((last_1_var_1_108 + var_1_40)))) + ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5)))))) : (var_1_52 == ((unsigned long int) ((((last_1_var_1_68) < (var_1_40)) ? (last_1_var_1_68) : (var_1_40)))))))) && ((var_1_36 >= (((((- var_1_57)) < (var_1_40)) ? ((- var_1_57)) : (var_1_40)))) ? ((((((var_1_39) < (var_1_36)) ? (var_1_39) : (var_1_36))) != ((var_1_30 >> 1) / var_1_40)) ? (var_1_53 == ((unsigned char) (! ((! var_1_99) && (var_1_98 && var_1_27))))) : (var_1_53 == ((unsigned char) (var_1_26 && var_1_27)))) : (((var_1_16 * var_1_11) < var_1_36) ? ((! (var_1_16 >= var_1_30)) ? (var_1_53 == ((unsigned char) ((var_1_54 && var_1_55) && (! var_1_27)))) : (var_1_53 == ((unsigned char) (! var_1_27)))) : (var_1_53 == ((unsigned char) var_1_55))))) && ((var_1_99 && var_1_97) ? (var_1_56 == ((signed long int) ((((((var_1_31) < (var_1_15)) ? (var_1_31) : (var_1_15))) + var_1_39) + (var_1_38 + ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) : 1)) && ((-25 > var_1_6) ? (var_1_99 ? ((((var_1_6 % var_1_50) <= 64) && var_1_54) ? (var_1_57 == ((unsigned long int) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) : (var_1_57 == ((unsigned long int) (var_1_59 + var_1_39)))) : (var_1_57 == ((unsigned long int) ((((var_1_56) > (var_1_30)) ? (var_1_56) : (var_1_30)))))) : ((var_1_42 < (- var_1_20)) ? (var_1_57 == ((unsigned long int) (((((10u) > (var_1_58)) ? (10u) : (var_1_58))) + ((var_1_60 - var_1_8) - var_1_40)))) : 1))) && ((var_1_55 && var_1_54) ? ((var_1_54 && (var_1_107 < var_1_81)) ? (((var_1_32 + var_1_50) <= ((-10 | var_1_38) & -32)) ? (var_1_61 == ((unsigned char) ((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32))))) : 1) : 1) : (((((((- var_1_81)) > (-0.2f)) ? ((- var_1_81)) : (-0.2f))) <= (var_1_46 - var_1_45)) ? (var_1_61 == ((unsigned char) ((var_1_63 + var_1_64) - var_1_33))) : 1))) && (((var_1_57 / var_1_32) <= var_1_66) ? (var_1_65 == ((signed long int) ((((var_1_7) < ((25 - var_1_5))) ? (var_1_7) : ((25 - var_1_5)))))) : (((- var_1_72) == 1.00000000000004E13f) ? (var_1_65 == ((signed long int) (var_1_8 - var_1_39))) : 1))) && ((var_1_99 || (var_1_17 > var_1_45)) ? (var_1_26 ? (var_1_66 == ((unsigned long int) (((((var_1_37 - var_1_12)) < (var_1_38)) ? ((var_1_37 - var_1_12)) : (var_1_38))))) : 1) : (var_1_66 == ((unsigned long int) (var_1_37 - var_1_35))))) && (((- var_1_21) <= var_1_19) ? (((var_1_6 - var_1_39) < var_1_12) ? (var_1_67 == ((unsigned long int) (var_1_6 + var_1_52))) : (var_1_67 == ((unsigned long int) (((((var_1_32 + var_1_39) < 0 ) ? -(var_1_32 + var_1_39) : (var_1_32 + var_1_39))) + (var_1_31 + ((((var_1_40) > (var_1_13)) ? (var_1_40) : (var_1_13)))))))) : 1)) && ((var_1_51 <= var_1_22) ? (var_1_68 == ((unsigned short int) ((((((var_1_69 - var_1_33)) > (var_1_70)) ? ((var_1_69 - var_1_33)) : (var_1_70))) - var_1_52))) : ((var_1_42 >= var_1_45) ? (var_1_68 == ((unsigned short int) (var_1_31 + (((((var_1_30) > (var_1_52)) ? (var_1_30) : (var_1_52))) + var_1_40)))) : (var_1_68 == ((unsigned short int) ((var_1_63 + var_1_103) + (var_1_39 - var_1_33))))))) && ((var_1_48 < var_1_42) ? (((var_1_60 + var_1_59) > (4u << var_1_30)) ? (var_1_72 == ((double) (var_1_24 + var_1_20))) : (var_1_72 == ((double) ((((var_1_25 - var_1_22) < 0 ) ? -(var_1_25 - var_1_22) : (var_1_25 - var_1_22)))))) : (var_1_72 == ((double) ((((var_1_47) < (((var_1_46 - var_1_23) - (var_1_21 + var_1_25)))) ? (var_1_47) : (((var_1_46 - var_1_23) - (var_1_21 + var_1_25))))))))) && (var_1_99 ? ((var_1_33 < var_1_106) ? (var_1_73 == ((signed short int) ((((var_1_15) < ((var_1_40 + var_1_63))) ? (var_1_15) : ((var_1_40 + var_1_63)))))) : 1) : (var_1_73 == ((signed short int) (((((((((var_1_66) < (var_1_63)) ? (var_1_66) : (var_1_63)))) > (var_1_30)) ? (((((var_1_66) < (var_1_63)) ? (var_1_66) : (var_1_63)))) : (var_1_30))) + -4))))) && (var_1_55 ? ((var_1_37 > var_1_59) ? (var_1_75 == ((signed char) ((((var_1_76 - var_1_77) < 0 ) ? -(var_1_76 - var_1_77) : (var_1_76 - var_1_77))))) : (var_1_75 == ((signed char) (((((var_1_77) < ((var_1_78 + var_1_79))) ? (var_1_77) : ((var_1_78 + var_1_79)))) - 4)))) : (var_1_75 == ((signed char) (var_1_78 + var_1_79))))) && (var_1_94 ? (var_1_80 == ((signed char) var_1_76)) : (var_1_80 == ((signed char) (32 + var_1_79))))) && (((var_1_37 - (var_1_60 - 8u)) != (var_1_57 + (- var_1_7))) ? ((var_1_50 <= var_1_57) ? (var_1_81 == ((float) (var_1_20 + (((((var_1_25) > (var_1_21)) ? (var_1_25) : (var_1_21))) - var_1_23)))) : 1) : (((((((var_1_76 / var_1_64)) < ((var_1_37 + var_1_78))) ? ((var_1_76 / var_1_64)) : ((var_1_37 + var_1_78)))) > ((var_1_66 * var_1_73) / var_1_70)) ? (var_1_81 == ((float) (((((var_1_29) > (var_1_82)) ? (var_1_29) : (var_1_82))) - (var_1_24 + var_1_22)))) : (var_1_81 == ((float) (((((var_1_20) > ((0.5f + var_1_23))) ? (var_1_20) : ((0.5f + var_1_23)))) + ((((var_1_24 - var_1_21) < 0 ) ? -(var_1_24 - var_1_21) : (var_1_24 - var_1_21))))))))) && ((var_1_57 > ((((256u) < (var_1_30)) ? (256u) : (var_1_30)))) ? ((var_1_78 <= ((var_1_79 << var_1_67) / var_1_63)) ? (var_1_83 == ((unsigned short int) (var_1_69 - var_1_39))) : (var_1_83 == ((unsigned short int) (var_1_69 - var_1_31)))) : 1)) && (var_1_98 ? (var_1_84 == ((signed long int) ((((1) > ((var_1_31 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) ? (1) : ((var_1_31 - ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))))) : (var_1_84 == ((signed long int) var_1_40)))) && ((var_1_79 < (var_1_102 / var_1_50)) ? (var_1_85 == ((signed long int) ((((var_1_66) < 0 ) ? -(var_1_66) : (var_1_66))))) : (var_1_85 == ((signed long int) ((var_1_10 - var_1_8) - var_1_84))))) && ((var_1_64 == (50 / var_1_63)) ? ((var_1_57 < (var_1_77 - var_1_78)) ? (var_1_86 == ((double) (((((var_1_22 - ((((var_1_29) > (var_1_24)) ? (var_1_29) : (var_1_24))))) > ((((((var_1_25 + var_1_19)) < (15.6)) ? ((var_1_25 + var_1_19)) : (15.6))))) ? ((var_1_22 - ((((var_1_29) > (var_1_24)) ? (var_1_29) : (var_1_24))))) : ((((((var_1_25 + var_1_19)) < (15.6)) ? ((var_1_25 + var_1_19)) : (15.6)))))))) : (var_1_86 == ((double) (((((var_1_24 + var_1_21)) > (var_1_23)) ? ((var_1_24 + var_1_21)) : (var_1_23)))))) : (var_1_86 == ((double) (var_1_25 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))) && ((var_1_1 >= 128) ? ((((var_1_5 * var_1_36) * var_1_66) < var_1_66) ? (var_1_87 == ((double) ((var_1_22 - var_1_24) + var_1_25))) : 1) : 1)) && (var_1_88 == ((float) ((((((((var_1_48) < (var_1_25)) ? (var_1_48) : (var_1_25)))) > (7.8f)) ? (((((var_1_48) < (var_1_25)) ? (var_1_48) : (var_1_25)))) : (7.8f)))))) && (((- var_1_36) < ((var_1_12 + var_1_6) >> var_1_90)) ? (var_1_94 ? (var_1_89 == ((signed char) var_1_90)) : 1) : (var_1_89 == ((signed char) ((((((((var_1_90) > ((var_1_79 - var_1_77))) ? (var_1_90) : ((var_1_79 - var_1_77))))) < ((var_1_76 - var_1_78))) ? (((((var_1_90) > ((var_1_79 - var_1_77))) ? (var_1_90) : ((var_1_79 - var_1_77))))) : ((var_1_76 - var_1_78)))))))) && (((var_1_77 <= (var_1_79 - var_1_63)) || (var_1_78 != var_1_38)) ? ((var_1_83 <= var_1_16) ? (var_1_91 == ((signed char) ((((var_1_79) > ((var_1_77 - var_1_76))) ? (var_1_79) : ((var_1_77 - var_1_76)))))) : (var_1_91 == ((signed char) (((((var_1_78) < (((((var_1_90) < (var_1_77)) ? (var_1_90) : (var_1_77))))) ? (var_1_78) : (((((var_1_90) < (var_1_77)) ? (var_1_90) : (var_1_77)))))) - (var_1_79 + var_1_93))))) : ((var_1_42 <= (- var_1_21)) ? ((var_1_101 < var_1_104) ? (var_1_91 == ((signed char) var_1_93)) : (var_1_91 == ((signed char) var_1_76))) : 1))) && (var_1_94 == ((unsigned char) 0))) && (var_1_55 ? (var_1_95 == ((unsigned char) var_1_33)) : (var_1_95 == ((unsigned char) var_1_30)))) && (var_1_27 ? (var_1_96 == ((unsigned char) var_1_90)) : 1)) && (var_1_98 ? (var_1_97 == ((unsigned char) var_1_54)) : (var_1_97 == ((unsigned char) var_1_27)))) && (var_1_98 == ((unsigned char) var_1_27))) && (var_1_97 ? (var_1_99 == ((unsigned char) 1)) : (var_1_99 == ((unsigned char) var_1_27)))) && (var_1_100 == ((signed short int) var_1_63))) && (var_1_94 ? (var_1_101 == ((double) var_1_24)) : (var_1_101 == ((double) var_1_46)))) && (var_1_102 == ((unsigned short int) var_1_39))) && (var_1_26 ? (var_1_103 == ((signed short int) var_1_95)) : (var_1_103 == ((signed short int) var_1_83)))) && (var_1_97 ? (var_1_104 == ((double) var_1_22)) : 1)) && (var_1_105 == ((signed short int) var_1_93))) && (var_1_26 ? (var_1_106 == ((signed long int) var_1_102)) : (var_1_106 == ((signed long int) var_1_76)))) && (((var_1_11 < var_1_13) && var_1_99) ? (var_1_107 == ((double) (var_1_24 + ((((var_1_20) > (((((var_1_25) < (var_1_22)) ? (var_1_25) : (var_1_22))))) ? (var_1_20) : (((((var_1_25) < (var_1_22)) ? (var_1_25) : (var_1_22))))))))) : (var_1_107 == ((double) ((((var_1_24 - var_1_47) < 0 ) ? -(var_1_24 - var_1_47) : (var_1_24 - var_1_47))))))) && (var_1_108 == ((signed short int) 25))
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
