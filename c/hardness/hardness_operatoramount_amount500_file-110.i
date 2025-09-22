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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed long int var_1_3 = -10;
signed char var_1_4 = -8;
signed char var_1_5 = 32;
signed char var_1_6 = -10;
signed char var_1_7 = 10;
signed char var_1_8 = 10;
signed long int var_1_9 = 10;
float var_1_10 = 64.6;
float var_1_12 = 15.6;
float var_1_13 = 127.125;
float var_1_14 = 63.9;
float var_1_15 = 499.75;
float var_1_16 = 1000000000000.6;
float var_1_17 = 0.625;
float var_1_18 = 255.2;
signed long int var_1_19 = -64;
signed long int var_1_20 = 1000000000;
unsigned char var_1_21 = 8;
signed long int var_1_22 = 8;
signed long int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed long int var_1_27 = -1000;
float var_1_28 = 15.8;
signed char var_1_29 = -16;
signed char var_1_30 = -1;
signed short int var_1_31 = -16;
signed short int var_1_32 = -64;
unsigned char var_1_33 = 0;
signed short int var_1_34 = 0;
double var_1_35 = 16.4;
signed short int var_1_36 = -50;
double var_1_37 = 7.25;
double var_1_38 = 1000000000.25;
unsigned short int var_1_39 = 1;
unsigned short int var_1_42 = 31555;
unsigned short int var_1_43 = 20726;
unsigned short int var_1_44 = 10;
unsigned short int var_1_45 = 36611;
unsigned short int var_1_46 = 48796;
unsigned short int var_1_47 = 256;
unsigned long int var_1_48 = 2;
unsigned long int var_1_49 = 3558800694;
unsigned long int var_1_50 = 1000000000;
float var_1_51 = 255.5;
unsigned long int var_1_52 = 256;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 128;
signed short int var_1_55 = -16;
signed short int var_1_56 = 10000;
signed short int var_1_57 = 29682;
unsigned short int var_1_58 = 64;
unsigned short int var_1_60 = 24870;
unsigned short int var_1_61 = 64;
unsigned short int var_1_62 = 49236;
unsigned long int var_1_63 = 0;
unsigned char var_1_64 = 128;
unsigned char var_1_65 = 16;
signed short int var_1_66 = -4;
float var_1_67 = 0.8;
float var_1_68 = 7.5;
double var_1_69 = 128.25;
float var_1_70 = 7.5;
unsigned long int var_1_71 = 1;
double var_1_72 = 1.952;
unsigned short int var_1_73 = 5;
unsigned short int var_1_75 = 58531;
signed short int var_1_76 = -8;
signed long int var_1_79 = -64;
unsigned long int var_1_80 = 10;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 0;
double var_1_84 = 31.4;
double var_1_85 = 256.75;
float var_1_86 = 15.25;
float var_1_87 = 10000.25;
double var_1_88 = 1.375;
unsigned short int var_1_89 = 1;
double var_1_90 = 127.45;
signed char var_1_91 = -64;
signed short int var_1_92 = 50;
signed char var_1_93 = 32;
unsigned long int var_1_94 = 100;
unsigned long int var_1_95 = 10;
unsigned char var_1_96 = 0;
unsigned short int var_1_97 = 0;
unsigned short int var_1_98 = 0;
unsigned char var_1_99 = 0;
float var_1_100 = -0.5;
float var_1_101 = 50.38;
unsigned long int var_1_102 = 4;
unsigned char var_1_103 = 16;
unsigned short int var_1_104 = 32;
unsigned long int var_1_105 = 16;
unsigned long int var_1_106 = 32;
unsigned char var_1_107 = 10;
signed short int last_1_var_1_31 = -16;
unsigned short int last_1_var_1_44 = 10;
unsigned short int last_1_var_1_47 = 256;
signed short int last_1_var_1_55 = -16;
float last_1_var_1_67 = 0.8;
unsigned short int last_1_var_1_73 = 5;
signed long int last_1_var_1_79 = -64;
unsigned long int last_1_var_1_80 = 10;
unsigned char last_1_var_1_82 = 1;
double last_1_var_1_90 = 127.45;
unsigned char last_1_var_1_99 = 0;
float last_1_var_1_100 = -0.5;
unsigned short int last_1_var_1_104 = 32;
unsigned char last_1_var_1_107 = 10;
void initially(void) {
}
void step(void) {
 if (! (! last_1_var_1_99)) {
  if (last_1_var_1_99) {
   var_1_24 = (! var_1_25);
  }
 } else {
  if (((0.5 - var_1_14) + var_1_17) != 5.4) {
   var_1_24 = var_1_25;
  } else {
   var_1_24 = var_1_26;
  }
 }
 if (var_1_24) {
  var_1_99 = var_1_83;
 } else {
  var_1_99 = var_1_25;
 }
 if (last_1_var_1_82) {
  if (var_1_83) {
   var_1_105 = ((((last_1_var_1_104) > (last_1_var_1_31)) ? (last_1_var_1_104) : (last_1_var_1_31)));
  } else {
   var_1_105 = (last_1_var_1_79 + ((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))));
  }
 }
 signed long int stepLocal_14 = var_1_56 + ((((last_1_var_1_107) > (last_1_var_1_73)) ? (last_1_var_1_107) : (last_1_var_1_73)));
 unsigned long int stepLocal_13 = last_1_var_1_80 * (var_1_49 / var_1_42);
 if ((last_1_var_1_90 * ((((last_1_var_1_100) < (last_1_var_1_67)) ? (last_1_var_1_100) : (last_1_var_1_67)))) <= var_1_38) {
  var_1_58 = ((((var_1_56) > (var_1_8)) ? (var_1_56) : (var_1_8)));
 } else {
  if (last_1_var_1_55 >= stepLocal_13) {
   if (stepLocal_14 <= var_1_6) {
    var_1_58 = (var_1_7 + var_1_57);
   }
  } else {
   var_1_58 = (var_1_46 - ((var_1_60 - last_1_var_1_107) - 16));
  }
 }
 if (var_1_25) {
  if ((var_1_54 / var_1_57) <= last_1_var_1_44) {
   var_1_82 = var_1_83;
  } else {
   var_1_82 = var_1_26;
  }
 }
 if (var_1_82) {
  var_1_97 = var_1_75;
 } else {
  var_1_97 = var_1_54;
 }
 if (var_1_82) {
  var_1_104 = var_1_43;
 } else {
  var_1_104 = var_1_8;
 }
 var_1_19 = ((1597856817 - (var_1_20 - var_1_8)) - var_1_7);
 var_1_28 = (var_1_17 + var_1_14);
 signed long int stepLocal_3 = (var_1_5 % var_1_20) * var_1_22;
 if (var_1_3 < stepLocal_3) {
  if (! (var_1_13 > var_1_12)) {
   var_1_29 = (((((var_1_8 - var_1_7)) < (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? ((var_1_8 - var_1_7)) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))));
  } else {
   var_1_29 = (var_1_7 + var_1_30);
  }
 }
 var_1_53 = (((((((((128) > (var_1_54)) ? (128) : (var_1_54))) - var_1_34)) > (var_1_7)) ? ((((((128) > (var_1_54)) ? (128) : (var_1_54))) - var_1_34)) : (var_1_7)));
 if (var_1_12 <= 500.129f) {
  if (var_1_33) {
   var_1_65 = (var_1_7 + 4);
  }
 }
 signed long int stepLocal_21 = var_1_8 >> (var_1_34 + var_1_71);
 if (stepLocal_21 <= var_1_46) {
  var_1_70 = (((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) < 0 ) ? -((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) : ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))));
 }
 var_1_91 = -16;
 if (var_1_26) {
  var_1_92 = var_1_97;
 }
 if (var_1_24) {
  var_1_93 = var_1_8;
 } else {
  var_1_93 = var_1_6;
 }
 var_1_94 = var_1_60;
 var_1_96 = var_1_7;
 if (var_1_83) {
  var_1_100 = var_1_88;
 } else {
  var_1_100 = var_1_37;
 }
 if (var_1_82) {
  var_1_101 = var_1_68;
 }
 if (var_1_24) {
  var_1_103 = var_1_34;
 }
 var_1_106 = var_1_46;
 var_1_107 = var_1_34;
 if (var_1_82) {
  var_1_95 = var_1_105;
 } else {
  var_1_95 = var_1_62;
 }
 signed long int stepLocal_16 = 64;
 unsigned char stepLocal_15 = var_1_25 && var_1_82;
 if (var_1_33) {
  var_1_61 = ((var_1_7 + ((((var_1_8) > (var_1_97)) ? (var_1_8) : (var_1_97)))) + var_1_56);
 } else {
  if (var_1_4 < stepLocal_16) {
   var_1_61 = (var_1_43 + var_1_42);
  } else {
   if (var_1_99 || stepLocal_15) {
    var_1_61 = (var_1_43 + var_1_58);
   } else {
    var_1_61 = (((((var_1_46) < (var_1_62)) ? (var_1_46) : (var_1_62))) - var_1_42);
   }
  }
 }
 signed char stepLocal_27 = var_1_30;
 if (var_1_61 <= stepLocal_27) {
  var_1_90 = ((((var_1_14) < ((var_1_68 - var_1_16))) ? (var_1_14) : ((var_1_68 - var_1_16))));
 } else {
  var_1_90 = (((((((((31.5) > (var_1_15)) ? (31.5) : (var_1_15)))) > (var_1_14)) ? (((((31.5) > (var_1_15)) ? (31.5) : (var_1_15)))) : (var_1_14))) - var_1_17);
 }
 unsigned short int stepLocal_1 = var_1_97;
 if (stepLocal_1 < (var_1_3 | -10)) {
  var_1_9 = var_1_8;
 }
 if ((var_1_45 - var_1_34) != (var_1_107 / ((((5) > (var_1_42)) ? (5) : (var_1_42))))) {
  var_1_44 = (var_1_46 - var_1_61);
 } else {
  var_1_44 = (var_1_46 - (var_1_43 - var_1_107));
 }
 signed long int stepLocal_22 = var_1_9;
 if ((((((-8) < 0 ) ? -(-8) : (-8))) | ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) <= stepLocal_22) {
  var_1_72 = (var_1_16 + (var_1_68 + (var_1_38 + var_1_37)));
 } else {
  var_1_72 = (var_1_37 + var_1_13);
 }
 if (var_1_25) {
  var_1_27 = ((((32) < 0 ) ? -(32) : (32)));
 } else {
  var_1_27 = (var_1_103 - var_1_7);
 }
 unsigned char stepLocal_9 = var_1_53;
 unsigned long int stepLocal_8 = var_1_94;
 signed long int stepLocal_7 = (var_1_7 - var_1_34) / ((((var_1_36) < (var_1_3)) ? (var_1_36) : (var_1_3)));
 if ((var_1_8 + (var_1_3 / var_1_36)) > stepLocal_9) {
  if (var_1_5 != stepLocal_7) {
   var_1_35 = ((var_1_13 - (50.8 + var_1_17)) + ((((49.25) < 0 ) ? -(49.25) : (49.25))));
  } else {
   var_1_35 = (var_1_14 + 63.55);
  }
 } else {
  if (stepLocal_8 <= (var_1_27 - var_1_20)) {
   var_1_35 = var_1_14;
  } else {
   var_1_35 = (((var_1_37 + var_1_38) + var_1_17) + var_1_16);
  }
 }
 var_1_48 = (var_1_49 - ((var_1_50 - 2u) + ((((var_1_65) > (var_1_8)) ? (var_1_65) : (var_1_8)))));
 unsigned short int stepLocal_12 = var_1_45;
 if (stepLocal_12 >= ((((var_1_105) > (var_1_95)) ? (var_1_105) : (var_1_95)))) {
  var_1_51 = (9.9999999999375E10f + (((((var_1_16) > (var_1_14)) ? (var_1_16) : (var_1_14))) - ((((var_1_13) < (var_1_15)) ? (var_1_13) : (var_1_15)))));
 }
 var_1_66 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
 unsigned long int stepLocal_18 = var_1_48;
 if (stepLocal_18 < var_1_45) {
  if (var_1_26) {
   var_1_67 = var_1_16;
  }
 } else {
  var_1_67 = (((var_1_17 + var_1_68) + var_1_13) - ((((var_1_16) > (var_1_14)) ? (var_1_16) : (var_1_14))));
 }
 signed char stepLocal_20 = var_1_8;
 signed long int stepLocal_19 = var_1_7 + (var_1_61 / var_1_60);
 if (16 < stepLocal_19) {
  if (var_1_19 == stepLocal_20) {
   var_1_69 = (499.875 - var_1_14);
  }
 } else {
  var_1_69 = ((((var_1_12) > (var_1_17)) ? (var_1_12) : (var_1_17)));
 }
 if ((var_1_50 | var_1_48) >= (var_1_94 + (- var_1_48))) {
  if (var_1_104 >= var_1_105) {
   var_1_89 = ((((((var_1_42 + var_1_43)) > (63445)) ? ((var_1_42 + var_1_43)) : (63445))) - var_1_57);
  } else {
   var_1_89 = (54527 - var_1_54);
  }
 } else {
  var_1_89 = (var_1_62 - (var_1_60 - var_1_54));
 }
 signed short int stepLocal_23 = var_1_34;
 if (stepLocal_23 <= var_1_42) {
  var_1_79 = ((((var_1_56) > ((4 - ((((10) < (128)) ? (10) : (128)))))) ? (var_1_56) : ((4 - ((((10) < (128)) ? (10) : (128)))))));
 } else {
  var_1_79 = (((((((var_1_19) < (var_1_95)) ? (var_1_19) : (var_1_95))) < 0 ) ? -((((var_1_19) < (var_1_95)) ? (var_1_19) : (var_1_95))) : ((((var_1_19) < (var_1_95)) ? (var_1_19) : (var_1_95)))));
 }
 signed long int stepLocal_24 = var_1_27;
 if (var_1_82) {
  if (stepLocal_24 <= var_1_94) {
   var_1_80 = var_1_50;
  }
 } else {
  var_1_80 = ((((var_1_45) > (var_1_7)) ? (var_1_45) : (var_1_7)));
 }
 if (var_1_20 >= ((((var_1_80) < (var_1_60)) ? (var_1_80) : (var_1_60)))) {
  var_1_63 = var_1_42;
 } else {
  var_1_63 = (var_1_60 + var_1_45);
 }
 if (var_1_80 < var_1_45) {
  if ((var_1_16 - 63.125f) >= (- 7.8f)) {
   if (var_1_3 <= var_1_36) {
    var_1_55 = ((4 + 1) - (last_1_var_1_55 + (var_1_56 - var_1_7)));
   }
  } else {
   var_1_55 = ((((last_1_var_1_55) < 0 ) ? -(last_1_var_1_55) : (last_1_var_1_55)));
  }
 } else {
  var_1_55 = ((var_1_57 - var_1_8) - var_1_7);
 }
 if (var_1_26) {
  var_1_98 = var_1_63;
 } else {
  var_1_98 = var_1_62;
 }
 var_1_102 = var_1_98;
 signed long int stepLocal_0 = var_1_27 % var_1_3;
 if (8 < stepLocal_0) {
  var_1_1 = ((((((var_1_4 + 16)) > (var_1_5)) ? ((var_1_4 + 16)) : (var_1_5))) + (var_1_6 + (var_1_7 - var_1_8)));
 } else {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 }
 if ((var_1_27 + var_1_7) >= -100) {
  var_1_18 = (var_1_14 + (var_1_16 - ((((15.4f) < (var_1_15)) ? (15.4f) : (var_1_15)))));
 }
 signed long int stepLocal_6 = var_1_20 << (1 + var_1_34);
 signed long int stepLocal_5 = (var_1_19 + var_1_34) * var_1_22;
 if ((((((1 * var_1_5)) > (var_1_30)) ? ((1 * var_1_5)) : (var_1_30))) < stepLocal_6) {
  if (var_1_82) {
   var_1_32 = ((var_1_34 + var_1_8) - var_1_106);
  }
 } else {
  if (var_1_80 <= stepLocal_5) {
   var_1_32 = var_1_30;
  } else {
   var_1_32 = ((var_1_7 + (var_1_53 + var_1_55)) + ((((var_1_106) > (256)) ? (var_1_106) : (256))));
  }
 }
 if ((var_1_45 + var_1_66) > var_1_48) {
  if (var_1_34 < var_1_94) {
   if (var_1_28 <= 32.4f) {
    var_1_47 = (last_1_var_1_47 + (var_1_42 - var_1_7));
   } else {
    var_1_47 = (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - var_1_42);
   }
  } else {
   if (var_1_24) {
    var_1_47 = var_1_46;
   }
  }
 }
 if (var_1_26 && var_1_82) {
  if (((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))) == (var_1_9 / var_1_20)) {
   var_1_52 = ((((var_1_80) > (var_1_50)) ? (var_1_80) : (var_1_50)));
  } else {
   var_1_52 = ((((((3718727448u) < 0 ) ? -(3718727448u) : (3718727448u))) - var_1_20) - var_1_80);
  }
 }
 unsigned long int stepLocal_26 = 25u;
 signed long int stepLocal_25 = (((var_1_46) > (var_1_23)) ? (var_1_46) : (var_1_23));
 if (var_1_37 >= var_1_38) {
  if (var_1_63 != stepLocal_26) {
   var_1_84 = ((((var_1_85) > ((((((var_1_16 + var_1_13)) > (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14))))) ? ((var_1_16 + var_1_13)) : (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14)))))))) ? (var_1_85) : ((((((var_1_16 + var_1_13)) > (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14))))) ? ((var_1_16 + var_1_13)) : (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14)))))))));
  } else {
   var_1_84 = (var_1_16 + (31.5 - (var_1_17 + var_1_68)));
  }
 } else {
  if ((var_1_45 | var_1_104) <= stepLocal_25) {
   if ((31.5f / var_1_86) < (var_1_18 / ((((63.2f) > (var_1_87)) ? (63.2f) : (var_1_87))))) {
    var_1_84 = 8.5;
   } else {
    if (var_1_99) {
     var_1_84 = (var_1_38 + ((((((((var_1_68) > (var_1_37)) ? (var_1_68) : (var_1_37)))) < (var_1_16)) ? (((((var_1_68) > (var_1_37)) ? (var_1_68) : (var_1_37)))) : (var_1_16))));
    } else {
     var_1_84 = (((((var_1_68 + (0.625 - var_1_17))) > (var_1_15)) ? ((var_1_68 + (0.625 - var_1_17))) : (var_1_15)));
    }
   }
  } else {
   var_1_84 = (var_1_38 + var_1_88);
  }
 }
 signed long int stepLocal_11 = var_1_79;
 signed long int stepLocal_10 = var_1_22;
 if ((1000 * var_1_52) > stepLocal_10) {
  if (stepLocal_11 > var_1_20) {
   var_1_39 = (((((32949 - var_1_8)) < (var_1_34)) ? ((32949 - var_1_8)) : (var_1_34)));
  }
 } else {
  var_1_39 = ((((var_1_79) < (((var_1_42 + var_1_43) - (var_1_92 + var_1_7)))) ? (var_1_79) : (((var_1_42 + var_1_43) - (var_1_92 + var_1_7)))));
 }
 unsigned short int stepLocal_17 = var_1_39;
 if (var_1_80 > stepLocal_17) {
  var_1_64 = (var_1_54 - var_1_8);
 }
 signed long int stepLocal_2 = var_1_8 - 1;
 if (var_1_84 > var_1_16) {
  if (stepLocal_2 >= (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) {
   var_1_21 = (var_1_7 + (((((10 + 4)) < (var_1_8)) ? ((10 + 4)) : (var_1_8))));
  } else {
   var_1_21 = ((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7)));
  }
 } else {
  if (var_1_99) {
   var_1_21 = var_1_8;
  } else {
   var_1_21 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  }
 }
 if (var_1_21 != var_1_4) {
  if (var_1_99 && (var_1_3 > (var_1_105 ^ var_1_9))) {
   var_1_10 = (((((var_1_12) < ((var_1_13 + var_1_14))) ? (var_1_12) : ((var_1_13 + var_1_14)))) - (var_1_15 + var_1_16));
  } else {
   var_1_10 = (var_1_16 + var_1_13);
  }
 } else {
  var_1_10 = ((var_1_14 - (var_1_17 + 32.25f)) + var_1_13);
 }
 unsigned long int stepLocal_4 = 4u;
 if (stepLocal_4 > (var_1_20 / var_1_3)) {
  var_1_31 = (var_1_5 + var_1_21);
 }
 if ((var_1_94 + ((((var_1_36) < (last_1_var_1_73)) ? (var_1_36) : (last_1_var_1_73)))) >= (var_1_106 + (var_1_42 ^ last_1_var_1_73))) {
  if (var_1_10 > var_1_68) {
   if (((((var_1_84) > (var_1_72)) ? (var_1_84) : (var_1_72))) > var_1_70) {
    if (var_1_33) {
     if (! var_1_82) {
      var_1_73 = (((((((var_1_62) > ((35354 - var_1_34))) ? (var_1_62) : ((35354 - var_1_34)))) < 0 ) ? -((((var_1_62) > ((35354 - var_1_34))) ? (var_1_62) : ((35354 - var_1_34)))) : ((((var_1_62) > ((35354 - var_1_34))) ? (var_1_62) : ((35354 - var_1_34))))));
     } else {
      var_1_73 = var_1_102;
     }
    }
   }
  } else {
   var_1_73 = ((((var_1_46) > (var_1_8)) ? (var_1_46) : (var_1_8)));
  }
 } else {
  var_1_73 = ((((((((var_1_54) < (25)) ? (var_1_54) : (25)))) < (((var_1_75 - var_1_34) - ((((var_1_56) > (var_1_58)) ? (var_1_56) : (var_1_58)))))) ? (((((var_1_54) < (25)) ? (var_1_54) : (25)))) : (((var_1_75 - var_1_34) - ((((var_1_56) > (var_1_58)) ? (var_1_56) : (var_1_58)))))));
 }
 if (var_1_16 != ((4.743949909150345E18f - var_1_17) - ((((var_1_100) < 0 ) ? -(var_1_100) : (var_1_100))))) {
  if ((var_1_104 < var_1_27) || var_1_33) {
   if (var_1_26 && (var_1_94 == var_1_57)) {
    if ((var_1_73 + var_1_94) > var_1_102) {
     var_1_76 = ((var_1_56 - var_1_96) + ((((var_1_97) > ((16 + var_1_30))) ? (var_1_97) : ((16 + var_1_30)))));
    } else {
     var_1_76 = (((((((var_1_58) < (32)) ? (var_1_58) : (32))) < 0 ) ? -((((var_1_58) < (32)) ? (var_1_58) : (32))) : ((((var_1_58) < (32)) ? (var_1_58) : (32)))));
    }
   } else {
    var_1_76 = var_1_5;
   }
  } else {
   var_1_76 = (var_1_54 + var_1_65);
  }
 } else {
  if (var_1_63 == var_1_43) {
   var_1_76 = ((var_1_4 + ((((var_1_104) < (var_1_58)) ? (var_1_104) : (var_1_58)))) + var_1_9);
  } else {
   var_1_76 = (((var_1_34 + var_1_47) - var_1_8) + 5);
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -31);
 assume_abort_if_not(var_1_4 <= 32);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -31);
 assume_abort_if_not(var_1_6 <= 32);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 31);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 31);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 536870911);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -1);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -63);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= -32768);
 assume_abort_if_not(var_1_36 <= 32767);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -115292.1504606845700e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 1152921.504606845700e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -115292.1504606845700e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 1152921.504606845700e+12F && var_1_38 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 16383);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16384);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 32767);
 assume_abort_if_not(var_1_45 <= 65535);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 32767);
 assume_abort_if_not(var_1_46 <= 65534);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 536870912);
 assume_abort_if_not(var_1_50 <= 1073741824);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_56 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_56 >= 8191);
 assume_abort_if_not(var_1_56 <= 16383);
 var_1_57 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_57 >= 16382);
 assume_abort_if_not(var_1_57 <= 32766);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 24575);
 assume_abort_if_not(var_1_60 <= 32767);
 var_1_62 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_62 >= 32767);
 assume_abort_if_not(var_1_62 <= 65534);
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691400e+12F && var_1_68 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_71 >= 1);
 assume_abort_if_not(var_1_71 <= 3);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 49150);
 assume_abort_if_not(var_1_75 <= 65534);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 0);
 var_1_85 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_85 >= -922337.2036854766000e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854766000e+12F && var_1_85 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_86 >= -922337.2036854776000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
 assume_abort_if_not(var_1_86 != 0.0F);
 var_1_87 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_87 >= -922337.2036854776000e+13F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 9223372.036854776000e+12F && var_1_87 >= 1.0e-20F ));
 assume_abort_if_not(var_1_87 != 0.0F);
 var_1_88 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_88 >= -461168.6018427383000e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427383000e+12F && var_1_88 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_31 = var_1_31;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_104 = var_1_104;
 last_1_var_1_107 = var_1_107;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((8 < (var_1_27 % var_1_3)) ? (var_1_1 == ((signed char) ((((((var_1_4 + 16)) > (var_1_5)) ? ((var_1_4 + 16)) : (var_1_5))) + (var_1_6 + (var_1_7 - var_1_8))))) : (var_1_1 == ((signed char) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))))) && ((var_1_97 < (var_1_3 | -10)) ? (var_1_9 == ((signed long int) var_1_8)) : 1)) && ((var_1_21 != var_1_4) ? ((var_1_99 && (var_1_3 > (var_1_105 ^ var_1_9))) ? (var_1_10 == ((float) (((((var_1_12) < ((var_1_13 + var_1_14))) ? (var_1_12) : ((var_1_13 + var_1_14)))) - (var_1_15 + var_1_16)))) : (var_1_10 == ((float) (var_1_16 + var_1_13)))) : (var_1_10 == ((float) ((var_1_14 - (var_1_17 + 32.25f)) + var_1_13))))) && (((var_1_27 + var_1_7) >= -100) ? (var_1_18 == ((float) (var_1_14 + (var_1_16 - ((((15.4f) < (var_1_15)) ? (15.4f) : (var_1_15))))))) : 1)) && (var_1_19 == ((signed long int) ((1597856817 - (var_1_20 - var_1_8)) - var_1_7)))) && ((var_1_84 > var_1_16) ? (((var_1_8 - 1) >= (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) - ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? (var_1_21 == ((unsigned char) (var_1_7 + (((((10 + 4)) < (var_1_8)) ? ((10 + 4)) : (var_1_8)))))) : (var_1_21 == ((unsigned char) ((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7)))))) : (var_1_99 ? (var_1_21 == ((unsigned char) var_1_8)) : (var_1_21 == ((unsigned char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))) && ((! (! last_1_var_1_99)) ? (last_1_var_1_99 ? (var_1_24 == ((unsigned char) (! var_1_25))) : 1) : ((((0.5 - var_1_14) + var_1_17) != 5.4) ? (var_1_24 == ((unsigned char) var_1_25)) : (var_1_24 == ((unsigned char) var_1_26))))) && (var_1_25 ? (var_1_27 == ((signed long int) ((((32) < 0 ) ? -(32) : (32))))) : (var_1_27 == ((signed long int) (var_1_103 - var_1_7))))) && (var_1_28 == ((float) (var_1_17 + var_1_14)))) && ((var_1_3 < ((var_1_5 % var_1_20) * var_1_22)) ? ((! (var_1_13 > var_1_12)) ? (var_1_29 == ((signed char) (((((var_1_8 - var_1_7)) < (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? ((var_1_8 - var_1_7)) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))))) : (var_1_29 == ((signed char) (var_1_7 + var_1_30)))) : 1)) && ((4u > (var_1_20 / var_1_3)) ? (var_1_31 == ((signed short int) (var_1_5 + var_1_21))) : 1)) && (((((((1 * var_1_5)) > (var_1_30)) ? ((1 * var_1_5)) : (var_1_30))) < (var_1_20 << (1 + var_1_34))) ? (var_1_82 ? (var_1_32 == ((signed short int) ((var_1_34 + var_1_8) - var_1_106))) : 1) : ((var_1_80 <= ((var_1_19 + var_1_34) * var_1_22)) ? (var_1_32 == ((signed short int) var_1_30)) : (var_1_32 == ((signed short int) ((var_1_7 + (var_1_53 + var_1_55)) + ((((var_1_106) > (256)) ? (var_1_106) : (256))))))))) && (((var_1_8 + (var_1_3 / var_1_36)) > var_1_53) ? ((var_1_5 != ((var_1_7 - var_1_34) / ((((var_1_36) < (var_1_3)) ? (var_1_36) : (var_1_3))))) ? (var_1_35 == ((double) ((var_1_13 - (50.8 + var_1_17)) + ((((49.25) < 0 ) ? -(49.25) : (49.25)))))) : (var_1_35 == ((double) (var_1_14 + 63.55)))) : ((var_1_94 <= (var_1_27 - var_1_20)) ? (var_1_35 == ((double) var_1_14)) : (var_1_35 == ((double) (((var_1_37 + var_1_38) + var_1_17) + var_1_16)))))) && (((1000 * var_1_52) > var_1_22) ? ((var_1_79 > var_1_20) ? (var_1_39 == ((unsigned short int) (((((32949 - var_1_8)) < (var_1_34)) ? ((32949 - var_1_8)) : (var_1_34))))) : 1) : (var_1_39 == ((unsigned short int) ((((var_1_79) < (((var_1_42 + var_1_43) - (var_1_92 + var_1_7)))) ? (var_1_79) : (((var_1_42 + var_1_43) - (var_1_92 + var_1_7))))))))) && (((var_1_45 - var_1_34) != (var_1_107 / ((((5) > (var_1_42)) ? (5) : (var_1_42))))) ? (var_1_44 == ((unsigned short int) (var_1_46 - var_1_61))) : (var_1_44 == ((unsigned short int) (var_1_46 - (var_1_43 - var_1_107)))))) && (((var_1_45 + var_1_66) > var_1_48) ? ((var_1_34 < var_1_94) ? ((var_1_28 <= 32.4f) ? (var_1_47 == ((unsigned short int) (last_1_var_1_47 + (var_1_42 - var_1_7)))) : (var_1_47 == ((unsigned short int) (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) - var_1_42)))) : (var_1_24 ? (var_1_47 == ((unsigned short int) var_1_46)) : 1)) : 1)) && (var_1_48 == ((unsigned long int) (var_1_49 - ((var_1_50 - 2u) + ((((var_1_65) > (var_1_8)) ? (var_1_65) : (var_1_8)))))))) && ((var_1_45 >= ((((var_1_105) > (var_1_95)) ? (var_1_105) : (var_1_95)))) ? (var_1_51 == ((float) (9.9999999999375E10f + (((((var_1_16) > (var_1_14)) ? (var_1_16) : (var_1_14))) - ((((var_1_13) < (var_1_15)) ? (var_1_13) : (var_1_15))))))) : 1)) && ((var_1_26 && var_1_82) ? ((((((var_1_9) < (var_1_6)) ? (var_1_9) : (var_1_6))) == (var_1_9 / var_1_20)) ? (var_1_52 == ((unsigned long int) ((((var_1_80) > (var_1_50)) ? (var_1_80) : (var_1_50))))) : (var_1_52 == ((unsigned long int) ((((((3718727448u) < 0 ) ? -(3718727448u) : (3718727448u))) - var_1_20) - var_1_80)))) : 1)) && (var_1_53 == ((unsigned char) (((((((((128) > (var_1_54)) ? (128) : (var_1_54))) - var_1_34)) > (var_1_7)) ? ((((((128) > (var_1_54)) ? (128) : (var_1_54))) - var_1_34)) : (var_1_7)))))) && ((var_1_80 < var_1_45) ? (((var_1_16 - 63.125f) >= (- 7.8f)) ? ((var_1_3 <= var_1_36) ? (var_1_55 == ((signed short int) ((4 + 1) - (last_1_var_1_55 + (var_1_56 - var_1_7))))) : 1) : (var_1_55 == ((signed short int) ((((last_1_var_1_55) < 0 ) ? -(last_1_var_1_55) : (last_1_var_1_55)))))) : (var_1_55 == ((signed short int) ((var_1_57 - var_1_8) - var_1_7))))) && (((last_1_var_1_90 * ((((last_1_var_1_100) < (last_1_var_1_67)) ? (last_1_var_1_100) : (last_1_var_1_67)))) <= var_1_38) ? (var_1_58 == ((unsigned short int) ((((var_1_56) > (var_1_8)) ? (var_1_56) : (var_1_8))))) : ((last_1_var_1_55 >= (last_1_var_1_80 * (var_1_49 / var_1_42))) ? (((var_1_56 + ((((last_1_var_1_107) > (last_1_var_1_73)) ? (last_1_var_1_107) : (last_1_var_1_73)))) <= var_1_6) ? (var_1_58 == ((unsigned short int) (var_1_7 + var_1_57))) : 1) : (var_1_58 == ((unsigned short int) (var_1_46 - ((var_1_60 - last_1_var_1_107) - 16))))))) && (var_1_33 ? (var_1_61 == ((unsigned short int) ((var_1_7 + ((((var_1_8) > (var_1_97)) ? (var_1_8) : (var_1_97)))) + var_1_56))) : ((var_1_4 < 64) ? (var_1_61 == ((unsigned short int) (var_1_43 + var_1_42))) : ((var_1_99 || (var_1_25 && var_1_82)) ? (var_1_61 == ((unsigned short int) (var_1_43 + var_1_58))) : (var_1_61 == ((unsigned short int) (((((var_1_46) < (var_1_62)) ? (var_1_46) : (var_1_62))) - var_1_42))))))) && ((var_1_20 >= ((((var_1_80) < (var_1_60)) ? (var_1_80) : (var_1_60)))) ? (var_1_63 == ((unsigned long int) var_1_42)) : (var_1_63 == ((unsigned long int) (var_1_60 + var_1_45))))) && ((var_1_80 > var_1_39) ? (var_1_64 == ((unsigned char) (var_1_54 - var_1_8))) : 1)) && ((var_1_12 <= 500.129f) ? (var_1_33 ? (var_1_65 == ((unsigned char) (var_1_7 + 4))) : 1) : 1)) && (var_1_66 == ((signed short int) ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) && ((var_1_48 < var_1_45) ? (var_1_26 ? (var_1_67 == ((float) var_1_16)) : 1) : (var_1_67 == ((float) (((var_1_17 + var_1_68) + var_1_13) - ((((var_1_16) > (var_1_14)) ? (var_1_16) : (var_1_14)))))))) && ((16 < (var_1_7 + (var_1_61 / var_1_60))) ? ((var_1_19 == var_1_8) ? (var_1_69 == ((double) (499.875 - var_1_14))) : 1) : (var_1_69 == ((double) ((((var_1_12) > (var_1_17)) ? (var_1_12) : (var_1_17))))))) && (((var_1_8 >> (var_1_34 + var_1_71)) <= var_1_46) ? (var_1_70 == ((float) (((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) < 0 ) ? -((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) : ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))))))) : 1)) && (((((((-8) < 0 ) ? -(-8) : (-8))) | ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) <= var_1_9) ? (var_1_72 == ((double) (var_1_16 + (var_1_68 + (var_1_38 + var_1_37))))) : (var_1_72 == ((double) (var_1_37 + var_1_13))))) && (((var_1_94 + ((((var_1_36) < (last_1_var_1_73)) ? (var_1_36) : (last_1_var_1_73)))) >= (var_1_106 + (var_1_42 ^ last_1_var_1_73))) ? ((var_1_10 > var_1_68) ? ((((((var_1_84) > (var_1_72)) ? (var_1_84) : (var_1_72))) > var_1_70) ? (var_1_33 ? ((! var_1_82) ? (var_1_73 == ((unsigned short int) (((((((var_1_62) > ((35354 - var_1_34))) ? (var_1_62) : ((35354 - var_1_34)))) < 0 ) ? -((((var_1_62) > ((35354 - var_1_34))) ? (var_1_62) : ((35354 - var_1_34)))) : ((((var_1_62) > ((35354 - var_1_34))) ? (var_1_62) : ((35354 - var_1_34)))))))) : (var_1_73 == ((unsigned short int) var_1_102))) : 1) : 1) : (var_1_73 == ((unsigned short int) ((((var_1_46) > (var_1_8)) ? (var_1_46) : (var_1_8)))))) : (var_1_73 == ((unsigned short int) ((((((((var_1_54) < (25)) ? (var_1_54) : (25)))) < (((var_1_75 - var_1_34) - ((((var_1_56) > (var_1_58)) ? (var_1_56) : (var_1_58)))))) ? (((((var_1_54) < (25)) ? (var_1_54) : (25)))) : (((var_1_75 - var_1_34) - ((((var_1_56) > (var_1_58)) ? (var_1_56) : (var_1_58))))))))))) && ((var_1_16 != ((4.743949909150345E18f - var_1_17) - ((((var_1_100) < 0 ) ? -(var_1_100) : (var_1_100))))) ? (((var_1_104 < var_1_27) || var_1_33) ? ((var_1_26 && (var_1_94 == var_1_57)) ? (((var_1_73 + var_1_94) > var_1_102) ? (var_1_76 == ((signed short int) ((var_1_56 - var_1_96) + ((((var_1_97) > ((16 + var_1_30))) ? (var_1_97) : ((16 + var_1_30))))))) : (var_1_76 == ((signed short int) (((((((var_1_58) < (32)) ? (var_1_58) : (32))) < 0 ) ? -((((var_1_58) < (32)) ? (var_1_58) : (32))) : ((((var_1_58) < (32)) ? (var_1_58) : (32)))))))) : (var_1_76 == ((signed short int) var_1_5))) : (var_1_76 == ((signed short int) (var_1_54 + var_1_65)))) : ((var_1_63 == var_1_43) ? (var_1_76 == ((signed short int) ((var_1_4 + ((((var_1_104) < (var_1_58)) ? (var_1_104) : (var_1_58)))) + var_1_9))) : (var_1_76 == ((signed short int) (((var_1_34 + var_1_47) - var_1_8) + 5)))))) && ((var_1_34 <= var_1_42) ? (var_1_79 == ((signed long int) ((((var_1_56) > ((4 - ((((10) < (128)) ? (10) : (128)))))) ? (var_1_56) : ((4 - ((((10) < (128)) ? (10) : (128))))))))) : (var_1_79 == ((signed long int) (((((((var_1_19) < (var_1_95)) ? (var_1_19) : (var_1_95))) < 0 ) ? -((((var_1_19) < (var_1_95)) ? (var_1_19) : (var_1_95))) : ((((var_1_19) < (var_1_95)) ? (var_1_19) : (var_1_95))))))))) && (var_1_82 ? ((var_1_27 <= var_1_94) ? (var_1_80 == ((unsigned long int) var_1_50)) : 1) : (var_1_80 == ((unsigned long int) ((((var_1_45) > (var_1_7)) ? (var_1_45) : (var_1_7))))))) && (var_1_25 ? (((var_1_54 / var_1_57) <= last_1_var_1_44) ? (var_1_82 == ((unsigned char) var_1_83)) : (var_1_82 == ((unsigned char) var_1_26))) : 1)) && ((var_1_37 >= var_1_38) ? ((var_1_63 != 25u) ? (var_1_84 == ((double) ((((var_1_85) > ((((((var_1_16 + var_1_13)) > (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14))))) ? ((var_1_16 + var_1_13)) : (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14)))))))) ? (var_1_85) : ((((((var_1_16 + var_1_13)) > (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14))))) ? ((var_1_16 + var_1_13)) : (((((var_1_37) < (var_1_14)) ? (var_1_37) : (var_1_14))))))))))) : (var_1_84 == ((double) (var_1_16 + (31.5 - (var_1_17 + var_1_68)))))) : (((var_1_45 | var_1_104) <= ((((var_1_46) > (var_1_23)) ? (var_1_46) : (var_1_23)))) ? (((31.5f / var_1_86) < (var_1_18 / ((((63.2f) > (var_1_87)) ? (63.2f) : (var_1_87))))) ? (var_1_84 == ((double) 8.5)) : (var_1_99 ? (var_1_84 == ((double) (var_1_38 + ((((((((var_1_68) > (var_1_37)) ? (var_1_68) : (var_1_37)))) < (var_1_16)) ? (((((var_1_68) > (var_1_37)) ? (var_1_68) : (var_1_37)))) : (var_1_16)))))) : (var_1_84 == ((double) (((((var_1_68 + (0.625 - var_1_17))) > (var_1_15)) ? ((var_1_68 + (0.625 - var_1_17))) : (var_1_15))))))) : (var_1_84 == ((double) (var_1_38 + var_1_88)))))) && (((var_1_50 | var_1_48) >= (var_1_94 + (- var_1_48))) ? ((var_1_104 >= var_1_105) ? (var_1_89 == ((unsigned short int) ((((((var_1_42 + var_1_43)) > (63445)) ? ((var_1_42 + var_1_43)) : (63445))) - var_1_57))) : (var_1_89 == ((unsigned short int) (54527 - var_1_54)))) : (var_1_89 == ((unsigned short int) (var_1_62 - (var_1_60 - var_1_54)))))) && ((var_1_61 <= var_1_30) ? (var_1_90 == ((double) ((((var_1_14) < ((var_1_68 - var_1_16))) ? (var_1_14) : ((var_1_68 - var_1_16)))))) : (var_1_90 == ((double) (((((((((31.5) > (var_1_15)) ? (31.5) : (var_1_15)))) > (var_1_14)) ? (((((31.5) > (var_1_15)) ? (31.5) : (var_1_15)))) : (var_1_14))) - var_1_17))))) && (var_1_91 == ((signed char) -16))) && (var_1_26 ? (var_1_92 == ((signed short int) var_1_97)) : 1)) && (var_1_24 ? (var_1_93 == ((signed char) var_1_8)) : (var_1_93 == ((signed char) var_1_6)))) && (var_1_94 == ((unsigned long int) var_1_60))) && (var_1_82 ? (var_1_95 == ((unsigned long int) var_1_105)) : (var_1_95 == ((unsigned long int) var_1_62)))) && (var_1_96 == ((unsigned char) var_1_7))) && (var_1_82 ? (var_1_97 == ((unsigned short int) var_1_75)) : (var_1_97 == ((unsigned short int) var_1_54)))) && (var_1_26 ? (var_1_98 == ((unsigned short int) var_1_63)) : (var_1_98 == ((unsigned short int) var_1_62)))) && (var_1_24 ? (var_1_99 == ((unsigned char) var_1_83)) : (var_1_99 == ((unsigned char) var_1_25)))) && (var_1_83 ? (var_1_100 == ((float) var_1_88)) : (var_1_100 == ((float) var_1_37)))) && (var_1_82 ? (var_1_101 == ((float) var_1_68)) : 1)) && (var_1_102 == ((unsigned long int) var_1_98))) && (var_1_24 ? (var_1_103 == ((unsigned char) var_1_34)) : 1)) && (var_1_82 ? (var_1_104 == ((unsigned short int) var_1_43)) : (var_1_104 == ((unsigned short int) var_1_8)))) && (last_1_var_1_82 ? (var_1_83 ? (var_1_105 == ((unsigned long int) ((((last_1_var_1_104) > (last_1_var_1_31)) ? (last_1_var_1_104) : (last_1_var_1_31))))) : (var_1_105 == ((unsigned long int) (last_1_var_1_79 + ((((var_1_42) > (var_1_50)) ? (var_1_42) : (var_1_50))))))) : 1)) && (var_1_106 == ((unsigned long int) var_1_46))) && (var_1_107 == ((unsigned char) var_1_34))
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
