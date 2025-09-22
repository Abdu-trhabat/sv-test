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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
signed short int var_1_4 = -128;
unsigned char var_1_5 = 5;
unsigned char var_1_6 = 200;
unsigned char var_1_7 = 64;
signed short int var_1_9 = 19646;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
double var_1_13 = 49.3;
double var_1_14 = 15.5;
double var_1_15 = 199.5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
signed short int var_1_22 = 4;
unsigned short int var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = 500.25;
float var_1_28 = 15.9;
float var_1_29 = 16.125;
float var_1_30 = 1.75;
float var_1_31 = 256.5;
float var_1_32 = 4.25;
float var_1_33 = 32.6;
float var_1_34 = 0.1;
double var_1_35 = 16.5;
float var_1_36 = 0.0;
double var_1_37 = 0.0;
double var_1_38 = 0.0;
double var_1_39 = 49.75;
double var_1_40 = 4.004;
double var_1_41 = 63.5;
unsigned long int var_1_42 = 64;
unsigned long int var_1_44 = 3554809749;
unsigned long int var_1_45 = 3192346968;
unsigned long int var_1_46 = 2143459188;
unsigned long int var_1_47 = 1410360604;
double var_1_48 = 2.375;
unsigned char var_1_49 = 32;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 32;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 64;
signed long int var_1_54 = -8;
signed long int var_1_55 = 1000000000;
signed long int var_1_56 = 1000000000;
double var_1_57 = 255.4;
unsigned char var_1_59 = 64;
unsigned char var_1_61 = 128;
signed char var_1_62 = -64;
signed char var_1_63 = 10;
signed char var_1_64 = 25;
signed char var_1_65 = 25;
unsigned long int var_1_66 = 32;
unsigned char var_1_67 = 0;
signed long int var_1_68 = 0;
float var_1_69 = 63.5;
unsigned long int var_1_70 = 128;
unsigned long int var_1_71 = 32;
float var_1_72 = 8.854;
unsigned short int var_1_74 = 50;
signed long int var_1_76 = -5;
signed char var_1_77 = -1;
float var_1_78 = 5.7;
unsigned short int var_1_79 = 44992;
float var_1_80 = 1.75;
double var_1_81 = 128.5;
float var_1_82 = 999999999.5;
unsigned char var_1_84 = 5;
unsigned char var_1_85 = 0;
double var_1_86 = 4.5;
float var_1_87 = 0.5;
signed short int var_1_88 = 64;
unsigned char var_1_89 = 128;
unsigned char var_1_90 = 100;
unsigned char var_1_91 = 32;
signed char var_1_92 = 50;
unsigned char var_1_93 = 0;
float var_1_94 = 0.9;
unsigned long int var_1_95 = 1;
unsigned char var_1_96 = 1;
signed long int var_1_97 = 256;
double var_1_98 = 256.25;
signed short int var_1_99 = -1;
signed long int var_1_100 = 10;
float var_1_101 = 100000.96;
unsigned long int var_1_102 = 8;
signed char var_1_103 = 4;
double var_1_104 = 31.7;
unsigned char last_1_var_1_52 = 0;
unsigned short int last_1_var_1_74 = 50;
signed short int last_1_var_1_88 = 64;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_52) {
  var_1_102 = var_1_51;
 } else {
  var_1_102 = last_1_var_1_88;
 }
 signed long int stepLocal_6 = 4;
 if (last_1_var_1_74 < stepLocal_6) {
  var_1_10 = var_1_11;
 }
 if (var_1_10) {
  var_1_93 = var_1_19;
 }
 if (var_1_10) {
  var_1_95 = var_1_90;
 }
 if (var_1_14 <= var_1_29) {
  if (((var_1_36 - var_1_34) - var_1_15) >= var_1_33) {
   var_1_35 = (((((63.4 - (var_1_37 - 100.5))) < ((var_1_34 - var_1_33))) ? ((63.4 - (var_1_37 - 100.5))) : ((var_1_34 - var_1_33))));
  } else {
   if (! var_1_26) {
    if (var_1_28 <= var_1_34) {
     var_1_35 = (var_1_32 + var_1_31);
    }
   }
  }
 } else {
  var_1_35 = (((var_1_38 - var_1_39) + (var_1_40 + var_1_41)) - var_1_33);
 }
 if (var_1_28 >= var_1_37) {
  var_1_49 = (var_1_18 + 2);
 } else {
  var_1_49 = (var_1_50 - var_1_51);
 }
 signed long int stepLocal_15 = var_1_9 * var_1_7;
 if ((var_1_17 / var_1_61) <= stepLocal_15) {
  if (var_1_32 >= (- var_1_38)) {
   var_1_62 = ((((var_1_7) > (var_1_23)) ? (var_1_7) : (var_1_23)));
  } else {
   var_1_62 = (var_1_23 + (((((var_1_63) < (var_1_64)) ? (var_1_63) : (var_1_64))) - var_1_65));
  }
 } else {
  if (var_1_35 < (- (var_1_40 * var_1_32))) {
   var_1_62 = (var_1_65 + var_1_23);
  } else {
   var_1_62 = (var_1_63 + var_1_65);
  }
 }
 if (var_1_35 >= (- var_1_36)) {
  var_1_66 = (((((var_1_44) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_44) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) - (var_1_63 + (var_1_55 - var_1_61)));
 }
 if ((- var_1_29) >= var_1_38) {
  var_1_69 = (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + var_1_39);
 } else {
  var_1_69 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 }
 if (var_1_31 >= 256.5f) {
  var_1_77 = (var_1_7 - 16);
 }
 var_1_94 = var_1_38;
 if (var_1_26) {
  var_1_96 = var_1_25;
 } else {
  var_1_96 = var_1_21;
 }
 if (var_1_25) {
  var_1_97 = var_1_51;
 }
 if (var_1_26) {
  var_1_98 = var_1_32;
 }
 if (var_1_11) {
  var_1_100 = 64;
 } else {
  var_1_100 = var_1_6;
 }
 var_1_101 = 31.6f;
 var_1_104 = var_1_39;
 signed long int stepLocal_2 = var_1_49 + var_1_100;
 unsigned char stepLocal_1 = var_1_49;
 signed long int stepLocal_0 = var_1_100;
 if (stepLocal_2 != -8) {
  if (stepLocal_0 > var_1_49) {
   var_1_1 = var_1_100;
  } else {
   var_1_1 = (var_1_100 - ((((10) > (var_1_49)) ? (10) : (var_1_49))));
  }
 } else {
  if (((((-16) < 0 ) ? -(-16) : (-16))) > stepLocal_1) {
   var_1_1 = (var_1_49 - var_1_100);
  }
 }
 unsigned long int stepLocal_14 = (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > ((var_1_49 * var_1_45))) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : ((var_1_49 * var_1_45)));
 if (var_1_100 <= stepLocal_14) {
  var_1_52 = (((var_1_39 / var_1_37) > (4.2 * 128.75)) && var_1_26);
 }
 if (var_1_11) {
  if (var_1_33 != var_1_98) {
   if (var_1_40 >= var_1_30) {
    var_1_54 = ((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97)));
   } else {
    var_1_54 = (((var_1_55 - var_1_1) + (var_1_56 - var_1_5)) - var_1_17);
   }
  } else {
   var_1_54 = ((256 + ((((var_1_23) < (var_1_5)) ? (var_1_23) : (var_1_5)))) - ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))));
  }
 }
 unsigned char stepLocal_19 = var_1_17;
 unsigned char stepLocal_18 = var_1_96;
 signed long int stepLocal_17 = var_1_50 * var_1_6;
 if (stepLocal_18 && (var_1_38 >= var_1_33)) {
  var_1_70 = ((var_1_71 + var_1_65) + ((((var_1_55) > (var_1_51)) ? (var_1_55) : (var_1_51))));
 } else {
  if (var_1_7 < stepLocal_19) {
   if (stepLocal_17 < var_1_63) {
    var_1_70 = var_1_7;
   } else {
    var_1_70 = ((var_1_5 + 32u) + var_1_6);
   }
  } else {
   var_1_70 = ((((var_1_95) > (var_1_16)) ? (var_1_95) : (var_1_16)));
  }
 }
 signed long int stepLocal_26 = var_1_54;
 if ((var_1_16 / var_1_5) < stepLocal_26) {
  if (var_1_41 >= (var_1_104 / ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38))))) {
   var_1_82 = (((((var_1_41) > (var_1_37)) ? (var_1_41) : (var_1_37))) - (49.5f + (3.024818494928643E18f - var_1_39)));
  } else {
   var_1_82 = ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) + (var_1_38 - var_1_40)) - 5.75f);
  }
 }
 signed short int stepLocal_28 = var_1_9;
 signed long int stepLocal_27 = -128;
 if (var_1_52) {
  if (stepLocal_28 < var_1_18) {
   var_1_84 = (16 + ((((var_1_85) < (var_1_17)) ? (var_1_85) : (var_1_17))));
  } else {
   var_1_84 = (var_1_50 - var_1_65);
  }
 } else {
  if ((50 / var_1_23) >= stepLocal_27) {
   var_1_84 = ((((var_1_7) < ((var_1_18 + var_1_23))) ? (var_1_7) : ((var_1_18 + var_1_23))));
  } else {
   var_1_84 = ((((((((var_1_64) > (2)) ? (var_1_64) : (2)))) < (var_1_23)) ? (((((var_1_64) > (2)) ? (var_1_64) : (2)))) : (var_1_23)));
  }
 }
 if ((var_1_46 + (var_1_70 + var_1_17)) >= var_1_9) {
  var_1_48 = ((((var_1_34) < (var_1_41)) ? (var_1_34) : (var_1_41)));
 } else {
  var_1_48 = ((((127.5) < ((var_1_41 + (var_1_39 - var_1_34)))) ? (127.5) : ((var_1_41 + (var_1_39 - var_1_34)))));
 }
 if (((var_1_18 << var_1_63) + var_1_66) < var_1_47) {
  if (! (var_1_37 > var_1_35)) {
   if (((((var_1_66) > ((~ var_1_66))) ? (var_1_66) : ((~ var_1_66)))) >= ((((var_1_44) > (var_1_84)) ? (var_1_44) : (var_1_84)))) {
    var_1_67 = (! (! var_1_26));
   } else {
    var_1_67 = var_1_26;
   }
  }
 }
 if (var_1_10 && var_1_21) {
  if (var_1_67 || var_1_93) {
   var_1_87 = (var_1_33 + var_1_80);
  } else {
   var_1_87 = (var_1_32 + var_1_39);
  }
 } else {
  var_1_87 = (((((((var_1_41) < ((var_1_34 + var_1_39))) ? (var_1_41) : ((var_1_34 + var_1_39)))) < 0 ) ? -((((var_1_41) < ((var_1_34 + var_1_39))) ? (var_1_41) : ((var_1_34 + var_1_39)))) : ((((var_1_41) < ((var_1_34 + var_1_39))) ? (var_1_41) : ((var_1_34 + var_1_39))))));
 }
 if (var_1_21) {
  if (var_1_87 < (var_1_80 - var_1_34)) {
   var_1_103 = (((((var_1_91) < (var_1_64)) ? (var_1_91) : (var_1_64))) - var_1_17);
  } else {
   var_1_103 = var_1_91;
  }
 } else {
  var_1_103 = 25;
 }
 signed long int stepLocal_21 = var_1_55;
 if (7.25f > (- var_1_40)) {
  if (stepLocal_21 <= (var_1_102 / ((((var_1_6) < (var_1_47)) ? (var_1_6) : (var_1_47))))) {
   if (var_1_67) {
    var_1_74 = (var_1_63 + ((var_1_97 + var_1_7) + var_1_50));
   }
  } else {
   var_1_74 = (var_1_61 + ((((((((var_1_23) > (var_1_6)) ? (var_1_23) : (var_1_6)))) < (4)) ? (((((var_1_23) > (var_1_6)) ? (var_1_23) : (var_1_6)))) : (4))));
  }
 }
 if (var_1_16 >= var_1_102) {
  if ((- var_1_15) != var_1_13) {
   var_1_22 = ((((var_1_74) > ((var_1_7 - var_1_102))) ? (var_1_74) : ((var_1_7 - var_1_102))));
  } else {
   var_1_22 = (1 + -100);
  }
 } else {
  if ((var_1_74 >> var_1_23) <= var_1_6) {
   var_1_22 = (((((var_1_5) < (var_1_74)) ? (var_1_5) : (var_1_74))) - ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))));
  }
 }
 unsigned long int stepLocal_13 = (((32) < (var_1_102)) ? (32) : (var_1_102));
 unsigned long int stepLocal_12 = (var_1_46 + 1604040401u) - var_1_17;
 if (var_1_10) {
  if (var_1_5 != stepLocal_13) {
   var_1_42 = (((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))) - (var_1_46 - 32u));
  }
 } else {
  if (var_1_30 > (- var_1_29)) {
   if ((- var_1_45) <= stepLocal_12) {
    var_1_42 = ((((var_1_9) > ((200u + var_1_22))) ? (var_1_9) : ((200u + var_1_22))));
   } else {
    var_1_42 = (var_1_45 - (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) - var_1_22));
   }
  } else {
   var_1_42 = 0u;
  }
 }
 unsigned char stepLocal_10 = var_1_6;
 unsigned char stepLocal_9 = var_1_17;
 unsigned char stepLocal_8 = var_1_67;
 if (((var_1_9 * var_1_23) ^ var_1_16) <= stepLocal_10) {
  if (stepLocal_8 && var_1_19) {
   if (stepLocal_9 <= 2) {
    var_1_24 = (! var_1_25);
   } else {
    var_1_24 = (var_1_25 || var_1_26);
   }
  }
 } else {
  var_1_24 = var_1_25;
 }
 signed long int stepLocal_22 = var_1_79 - ((((var_1_16) > (var_1_50)) ? (var_1_16) : (var_1_50)));
 if (stepLocal_22 >= (var_1_97 ^ ((((var_1_42) < (var_1_70)) ? (var_1_42) : (var_1_70))))) {
  var_1_78 = (((((var_1_40) < (((((var_1_39) < (15.2f)) ? (var_1_39) : (15.2f))))) ? (var_1_40) : (((((var_1_39) < (15.2f)) ? (var_1_39) : (15.2f)))))) + var_1_41);
 } else {
  if (var_1_21) {
   var_1_78 = (var_1_30 + var_1_39);
  } else {
   if (! ((- var_1_97) > var_1_7)) {
    var_1_78 = (9.999999999996E11f + var_1_31);
   } else {
    var_1_78 = (((var_1_39 + var_1_40) + (var_1_41 + var_1_80)) - var_1_37);
   }
  }
 }
 unsigned long int stepLocal_25 = var_1_42;
 unsigned long int stepLocal_24 = var_1_42;
 unsigned long int stepLocal_23 = var_1_42;
 if (var_1_5 == stepLocal_23) {
  if (stepLocal_25 > 256u) {
   var_1_81 = ((var_1_37 - var_1_38) - var_1_34);
  }
 } else {
  if (stepLocal_24 <= ((((var_1_79) > (var_1_5)) ? (var_1_79) : (var_1_5)))) {
   if (var_1_41 <= (var_1_80 - (var_1_39 + var_1_40))) {
    var_1_81 = (((((var_1_41 + var_1_33)) < (var_1_34)) ? ((var_1_41 + var_1_33)) : (var_1_34)));
   }
  }
 }
 if (var_1_36 > (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))) / ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) {
  if (var_1_42 <= (var_1_50 - var_1_23)) {
   if (var_1_90 != (var_1_1 + (var_1_66 + var_1_64))) {
    var_1_92 = (((((var_1_91) < (var_1_65)) ? (var_1_91) : (var_1_65))) - var_1_17);
   }
  } else {
   var_1_92 = ((((var_1_23) > (((((var_1_63) < (1)) ? (var_1_63) : (1))))) ? (var_1_23) : (((((var_1_63) < (1)) ? (var_1_63) : (1))))));
  }
 }
 if (var_1_93) {
  var_1_99 = var_1_42;
 }
 unsigned short int stepLocal_33 = var_1_79;
 if (stepLocal_33 <= (var_1_99 * var_1_95)) {
  var_1_89 = ((64 + var_1_64) + (var_1_90 - (var_1_91 - var_1_23)));
 } else {
  if (var_1_28 <= -0.25f) {
   var_1_89 = var_1_17;
  } else {
   var_1_89 = ((var_1_90 - (var_1_91 - var_1_23)) + var_1_64);
  }
 }
 unsigned char stepLocal_5 = var_1_89;
 unsigned char stepLocal_4 = var_1_5;
 unsigned char stepLocal_3 = var_1_89;
 if (((var_1_49 + 5) / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) <= stepLocal_5) {
  if (stepLocal_3 > var_1_102) {
   var_1_4 = ((((var_1_49) > (-4)) ? (var_1_49) : (-4)));
  }
 } else {
  if (stepLocal_4 > ((- var_1_49) / (var_1_6 - var_1_7))) {
   if (! var_1_96) {
    var_1_4 = ((var_1_9 - var_1_5) - var_1_6);
   }
  } else {
   var_1_4 = var_1_5;
  }
 }
 unsigned long int stepLocal_7 = var_1_102;
 if ((var_1_13 - var_1_14) >= (var_1_15 - 4.6)) {
  if (stepLocal_7 <= ((var_1_16 - var_1_17) - ((((var_1_7) > (var_1_18)) ? (var_1_7) : (var_1_18))))) {
   var_1_12 = (((var_1_11 && var_1_19) && (var_1_24 || var_1_20)) && (var_1_10 || var_1_21));
  } else {
   var_1_12 = var_1_11;
  }
 } else {
  var_1_12 = var_1_20;
 }
 if (var_1_21) {
  var_1_53 = ((var_1_5 + var_1_7) + var_1_99);
 }
 if (var_1_10) {
  var_1_76 = (var_1_64 + ((((var_1_56) > (var_1_89)) ? (var_1_56) : (var_1_89))));
 }
 unsigned long int stepLocal_31 = var_1_53;
 unsigned char stepLocal_30 = var_1_6;
 unsigned char stepLocal_29 = var_1_16;
 if ((var_1_89 * (var_1_47 << var_1_17)) != stepLocal_29) {
  var_1_86 = (((((var_1_38) < ((var_1_40 + var_1_41))) ? (var_1_38) : ((var_1_40 + var_1_41)))) - (var_1_80 + var_1_39));
 } else {
  if (var_1_55 < stepLocal_30) {
   if (var_1_63 < stepLocal_31) {
    var_1_86 = (var_1_32 + var_1_39);
   }
  }
 }
 unsigned short int stepLocal_32 = var_1_79;
 if (var_1_66 < stepLocal_32) {
  var_1_88 = ((((2) > (var_1_6)) ? (2) : (var_1_6)));
 } else {
  if (! var_1_93) {
   var_1_88 = (((var_1_65 - var_1_89) + var_1_99) + var_1_100);
  }
 }
 signed short int stepLocal_11 = var_1_88;
 if (var_1_6 < stepLocal_11) {
  var_1_27 = ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29)));
 } else {
  var_1_27 = ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) + var_1_32) + (var_1_33 - var_1_34));
 }
 if (var_1_20) {
  if (((var_1_32 + var_1_86) * var_1_40) >= var_1_98) {
   var_1_57 = ((((var_1_38) > (var_1_31)) ? (var_1_38) : (var_1_31)));
  } else {
   var_1_57 = (255.75 + (((((var_1_40) < (var_1_34)) ? (var_1_40) : (var_1_34))) - var_1_38));
  }
 } else {
  var_1_57 = (var_1_38 - var_1_34);
 }
 unsigned char stepLocal_20 = var_1_56 >= var_1_50;
 if (stepLocal_20 || var_1_96) {
  var_1_72 = ((var_1_39 + var_1_41) - var_1_40);
 } else {
  if (var_1_36 < (((((var_1_37) < (var_1_86)) ? (var_1_37) : (var_1_86))) + var_1_101)) {
   if (var_1_30 > var_1_29) {
    var_1_72 = var_1_32;
   } else {
    var_1_72 = (var_1_33 - var_1_39);
   }
  }
 }
 if (var_1_86 < var_1_72) {
  var_1_59 = var_1_17;
 } else {
  var_1_59 = (((((((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) < (var_1_61)) ? (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) : (var_1_61))) - var_1_7);
 }
 unsigned char stepLocal_16 = 1.0000000000005E12 < var_1_15;
 if (stepLocal_16 || var_1_26) {
  var_1_68 = var_1_59;
 } else {
  var_1_68 = ((var_1_102 + var_1_64) + var_1_18);
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 255);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 127);
 assume_abort_if_not(var_1_6 <= 255);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 126);
 assume_abort_if_not(var_1_7 != 127);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 16382);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 191);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 64);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 7);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 4611686.018427388000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 4611686.018427383000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 2305843.009213691400e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 2147483647);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741823);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 1073741823);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 127);
 assume_abort_if_not(var_1_50 <= 254);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= 536870911);
 assume_abort_if_not(var_1_55 <= 1073741823);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 536870911);
 assume_abort_if_not(var_1_56 <= 1073741823);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 127);
 assume_abort_if_not(var_1_61 <= 254);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 63);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_71 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 1073741824);
 var_1_79 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_79 >= 32767);
 assume_abort_if_not(var_1_79 <= 65535);
 var_1_80 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691400e+12F && var_1_80 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 127);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 63);
 assume_abort_if_not(var_1_90 <= 127);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 31);
 assume_abort_if_not(var_1_91 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_52 = var_1_52;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_88 = var_1_88;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_49 + var_1_100) != -8) ? ((var_1_100 > var_1_49) ? (var_1_1 == ((signed long int) var_1_100)) : (var_1_1 == ((signed long int) (var_1_100 - ((((10) > (var_1_49)) ? (10) : (var_1_49))))))) : ((((((-16) < 0 ) ? -(-16) : (-16))) > var_1_49) ? (var_1_1 == ((signed long int) (var_1_49 - var_1_100))) : 1)) && ((((var_1_49 + 5) / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) <= var_1_89) ? ((var_1_89 > var_1_102) ? (var_1_4 == ((signed short int) ((((var_1_49) > (-4)) ? (var_1_49) : (-4))))) : 1) : ((var_1_5 > ((- var_1_49) / (var_1_6 - var_1_7))) ? ((! var_1_96) ? (var_1_4 == ((signed short int) ((var_1_9 - var_1_5) - var_1_6))) : 1) : (var_1_4 == ((signed short int) var_1_5))))) && ((last_1_var_1_74 < 4) ? (var_1_10 == ((unsigned char) var_1_11)) : 1)) && (((var_1_13 - var_1_14) >= (var_1_15 - 4.6)) ? ((var_1_102 <= ((var_1_16 - var_1_17) - ((((var_1_7) > (var_1_18)) ? (var_1_7) : (var_1_18))))) ? (var_1_12 == ((unsigned char) (((var_1_11 && var_1_19) && (var_1_24 || var_1_20)) && (var_1_10 || var_1_21)))) : (var_1_12 == ((unsigned char) var_1_11))) : (var_1_12 == ((unsigned char) var_1_20)))) && ((var_1_16 >= var_1_102) ? (((- var_1_15) != var_1_13) ? (var_1_22 == ((signed short int) ((((var_1_74) > ((var_1_7 - var_1_102))) ? (var_1_74) : ((var_1_7 - var_1_102)))))) : (var_1_22 == ((signed short int) (1 + -100)))) : (((var_1_74 >> var_1_23) <= var_1_6) ? (var_1_22 == ((signed short int) (((((var_1_5) < (var_1_74)) ? (var_1_5) : (var_1_74))) - ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) : 1))) && ((((var_1_9 * var_1_23) ^ var_1_16) <= var_1_6) ? ((var_1_67 && var_1_19) ? ((var_1_17 <= 2) ? (var_1_24 == ((unsigned char) (! var_1_25))) : (var_1_24 == ((unsigned char) (var_1_25 || var_1_26)))) : 1) : (var_1_24 == ((unsigned char) var_1_25)))) && ((var_1_6 < var_1_88) ? (var_1_27 == ((float) ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))) : (var_1_27 == ((float) ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) + var_1_32) + (var_1_33 - var_1_34)))))) && ((var_1_14 <= var_1_29) ? ((((var_1_36 - var_1_34) - var_1_15) >= var_1_33) ? (var_1_35 == ((double) (((((63.4 - (var_1_37 - 100.5))) < ((var_1_34 - var_1_33))) ? ((63.4 - (var_1_37 - 100.5))) : ((var_1_34 - var_1_33)))))) : ((! var_1_26) ? ((var_1_28 <= var_1_34) ? (var_1_35 == ((double) (var_1_32 + var_1_31))) : 1) : 1)) : (var_1_35 == ((double) (((var_1_38 - var_1_39) + (var_1_40 + var_1_41)) - var_1_33))))) && (var_1_10 ? ((var_1_5 != ((((32) < (var_1_102)) ? (32) : (var_1_102)))) ? (var_1_42 == ((unsigned long int) (((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))) - (var_1_46 - 32u)))) : 1) : ((var_1_30 > (- var_1_29)) ? (((- var_1_45) <= ((var_1_46 + 1604040401u) - var_1_17)) ? (var_1_42 == ((unsigned long int) ((((var_1_9) > ((200u + var_1_22))) ? (var_1_9) : ((200u + var_1_22)))))) : (var_1_42 == ((unsigned long int) (var_1_45 - (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))) - var_1_22))))) : (var_1_42 == ((unsigned long int) 0u))))) && (((var_1_46 + (var_1_70 + var_1_17)) >= var_1_9) ? (var_1_48 == ((double) ((((var_1_34) < (var_1_41)) ? (var_1_34) : (var_1_41))))) : (var_1_48 == ((double) ((((127.5) < ((var_1_41 + (var_1_39 - var_1_34)))) ? (127.5) : ((var_1_41 + (var_1_39 - var_1_34))))))))) && ((var_1_28 >= var_1_37) ? (var_1_49 == ((unsigned char) (var_1_18 + 2))) : (var_1_49 == ((unsigned char) (var_1_50 - var_1_51))))) && ((var_1_100 <= ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > ((var_1_49 * var_1_45))) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : ((var_1_49 * var_1_45))))) ? (var_1_52 == ((unsigned char) (((var_1_39 / var_1_37) > (4.2 * 128.75)) && var_1_26))) : 1)) && (var_1_21 ? (var_1_53 == ((unsigned long int) ((var_1_5 + var_1_7) + var_1_99))) : 1)) && (var_1_11 ? ((var_1_33 != var_1_98) ? ((var_1_40 >= var_1_30) ? (var_1_54 == ((signed long int) ((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))))) : (var_1_54 == ((signed long int) (((var_1_55 - var_1_1) + (var_1_56 - var_1_5)) - var_1_17)))) : (var_1_54 == ((signed long int) ((256 + ((((var_1_23) < (var_1_5)) ? (var_1_23) : (var_1_5)))) - ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) : 1)) && (var_1_20 ? ((((var_1_32 + var_1_86) * var_1_40) >= var_1_98) ? (var_1_57 == ((double) ((((var_1_38) > (var_1_31)) ? (var_1_38) : (var_1_31))))) : (var_1_57 == ((double) (255.75 + (((((var_1_40) < (var_1_34)) ? (var_1_40) : (var_1_34))) - var_1_38))))) : (var_1_57 == ((double) (var_1_38 - var_1_34))))) && ((var_1_86 < var_1_72) ? (var_1_59 == ((unsigned char) var_1_17)) : (var_1_59 == ((unsigned char) (((((((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) < (var_1_61)) ? (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) : (var_1_61))) - var_1_7))))) && (((var_1_17 / var_1_61) <= (var_1_9 * var_1_7)) ? ((var_1_32 >= (- var_1_38)) ? (var_1_62 == ((signed char) ((((var_1_7) > (var_1_23)) ? (var_1_7) : (var_1_23))))) : (var_1_62 == ((signed char) (var_1_23 + (((((var_1_63) < (var_1_64)) ? (var_1_63) : (var_1_64))) - var_1_65))))) : ((var_1_35 < (- (var_1_40 * var_1_32))) ? (var_1_62 == ((signed char) (var_1_65 + var_1_23))) : (var_1_62 == ((signed char) (var_1_63 + var_1_65)))))) && ((var_1_35 >= (- var_1_36)) ? (var_1_66 == ((unsigned long int) (((((var_1_44) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_44) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) - (var_1_63 + (var_1_55 - var_1_61))))) : 1)) && ((((var_1_18 << var_1_63) + var_1_66) < var_1_47) ? ((! (var_1_37 > var_1_35)) ? ((((((var_1_66) > ((~ var_1_66))) ? (var_1_66) : ((~ var_1_66)))) >= ((((var_1_44) > (var_1_84)) ? (var_1_44) : (var_1_84)))) ? (var_1_67 == ((unsigned char) (! (! var_1_26)))) : (var_1_67 == ((unsigned char) var_1_26))) : 1) : 1)) && (((1.0000000000005E12 < var_1_15) || var_1_26) ? (var_1_68 == ((signed long int) var_1_59)) : (var_1_68 == ((signed long int) ((var_1_102 + var_1_64) + var_1_18))))) && (((- var_1_29) >= var_1_38) ? (var_1_69 == ((float) (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) + var_1_39))) : (var_1_69 == ((float) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))) && ((var_1_96 && (var_1_38 >= var_1_33)) ? (var_1_70 == ((unsigned long int) ((var_1_71 + var_1_65) + ((((var_1_55) > (var_1_51)) ? (var_1_55) : (var_1_51)))))) : ((var_1_7 < var_1_17) ? (((var_1_50 * var_1_6) < var_1_63) ? (var_1_70 == ((unsigned long int) var_1_7)) : (var_1_70 == ((unsigned long int) ((var_1_5 + 32u) + var_1_6)))) : (var_1_70 == ((unsigned long int) ((((var_1_95) > (var_1_16)) ? (var_1_95) : (var_1_16)))))))) && (((var_1_56 >= var_1_50) || var_1_96) ? (var_1_72 == ((float) ((var_1_39 + var_1_41) - var_1_40))) : ((var_1_36 < (((((var_1_37) < (var_1_86)) ? (var_1_37) : (var_1_86))) + var_1_101)) ? ((var_1_30 > var_1_29) ? (var_1_72 == ((float) var_1_32)) : (var_1_72 == ((float) (var_1_33 - var_1_39)))) : 1))) && ((7.25f > (- var_1_40)) ? ((var_1_55 <= (var_1_102 / ((((var_1_6) < (var_1_47)) ? (var_1_6) : (var_1_47))))) ? (var_1_67 ? (var_1_74 == ((unsigned short int) (var_1_63 + ((var_1_97 + var_1_7) + var_1_50)))) : 1) : (var_1_74 == ((unsigned short int) (var_1_61 + ((((((((var_1_23) > (var_1_6)) ? (var_1_23) : (var_1_6)))) < (4)) ? (((((var_1_23) > (var_1_6)) ? (var_1_23) : (var_1_6)))) : (4))))))) : 1)) && (var_1_10 ? (var_1_76 == ((signed long int) (var_1_64 + ((((var_1_56) > (var_1_89)) ? (var_1_56) : (var_1_89)))))) : 1)) && ((var_1_31 >= 256.5f) ? (var_1_77 == ((signed char) (var_1_7 - 16))) : 1)) && (((var_1_79 - ((((var_1_16) > (var_1_50)) ? (var_1_16) : (var_1_50)))) >= (var_1_97 ^ ((((var_1_42) < (var_1_70)) ? (var_1_42) : (var_1_70))))) ? (var_1_78 == ((float) (((((var_1_40) < (((((var_1_39) < (15.2f)) ? (var_1_39) : (15.2f))))) ? (var_1_40) : (((((var_1_39) < (15.2f)) ? (var_1_39) : (15.2f)))))) + var_1_41))) : (var_1_21 ? (var_1_78 == ((float) (var_1_30 + var_1_39))) : ((! ((- var_1_97) > var_1_7)) ? (var_1_78 == ((float) (9.999999999996E11f + var_1_31))) : (var_1_78 == ((float) (((var_1_39 + var_1_40) + (var_1_41 + var_1_80)) - var_1_37))))))) && ((var_1_5 == var_1_42) ? ((var_1_42 > 256u) ? (var_1_81 == ((double) ((var_1_37 - var_1_38) - var_1_34))) : 1) : ((var_1_42 <= ((((var_1_79) > (var_1_5)) ? (var_1_79) : (var_1_5)))) ? ((var_1_41 <= (var_1_80 - (var_1_39 + var_1_40))) ? (var_1_81 == ((double) (((((var_1_41 + var_1_33)) < (var_1_34)) ? ((var_1_41 + var_1_33)) : (var_1_34))))) : 1) : 1))) && (((var_1_16 / var_1_5) < var_1_54) ? ((var_1_41 >= (var_1_104 / ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38))))) ? (var_1_82 == ((float) (((((var_1_41) > (var_1_37)) ? (var_1_41) : (var_1_37))) - (49.5f + (3.024818494928643E18f - var_1_39))))) : (var_1_82 == ((float) ((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) + (var_1_38 - var_1_40)) - 5.75f)))) : 1)) && (var_1_52 ? ((var_1_9 < var_1_18) ? (var_1_84 == ((unsigned char) (16 + ((((var_1_85) < (var_1_17)) ? (var_1_85) : (var_1_17)))))) : (var_1_84 == ((unsigned char) (var_1_50 - var_1_65)))) : (((50 / var_1_23) >= -128) ? (var_1_84 == ((unsigned char) ((((var_1_7) < ((var_1_18 + var_1_23))) ? (var_1_7) : ((var_1_18 + var_1_23)))))) : (var_1_84 == ((unsigned char) ((((((((var_1_64) > (2)) ? (var_1_64) : (2)))) < (var_1_23)) ? (((((var_1_64) > (2)) ? (var_1_64) : (2)))) : (var_1_23)))))))) && (((var_1_89 * (var_1_47 << var_1_17)) != var_1_16) ? (var_1_86 == ((double) (((((var_1_38) < ((var_1_40 + var_1_41))) ? (var_1_38) : ((var_1_40 + var_1_41)))) - (var_1_80 + var_1_39)))) : ((var_1_55 < var_1_6) ? ((var_1_63 < var_1_53) ? (var_1_86 == ((double) (var_1_32 + var_1_39))) : 1) : 1))) && ((var_1_10 && var_1_21) ? ((var_1_67 || var_1_93) ? (var_1_87 == ((float) (var_1_33 + var_1_80))) : (var_1_87 == ((float) (var_1_32 + var_1_39)))) : (var_1_87 == ((float) (((((((var_1_41) < ((var_1_34 + var_1_39))) ? (var_1_41) : ((var_1_34 + var_1_39)))) < 0 ) ? -((((var_1_41) < ((var_1_34 + var_1_39))) ? (var_1_41) : ((var_1_34 + var_1_39)))) : ((((var_1_41) < ((var_1_34 + var_1_39))) ? (var_1_41) : ((var_1_34 + var_1_39)))))))))) && ((var_1_66 < var_1_79) ? (var_1_88 == ((signed short int) ((((2) > (var_1_6)) ? (2) : (var_1_6))))) : ((! var_1_93) ? (var_1_88 == ((signed short int) (((var_1_65 - var_1_89) + var_1_99) + var_1_100))) : 1))) && ((var_1_79 <= (var_1_99 * var_1_95)) ? (var_1_89 == ((unsigned char) ((64 + var_1_64) + (var_1_90 - (var_1_91 - var_1_23))))) : ((var_1_28 <= -0.25f) ? (var_1_89 == ((unsigned char) var_1_17)) : (var_1_89 == ((unsigned char) ((var_1_90 - (var_1_91 - var_1_23)) + var_1_64)))))) && ((var_1_36 > (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81))) / ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? ((var_1_42 <= (var_1_50 - var_1_23)) ? ((var_1_90 != (var_1_1 + (var_1_66 + var_1_64))) ? (var_1_92 == ((signed char) (((((var_1_91) < (var_1_65)) ? (var_1_91) : (var_1_65))) - var_1_17))) : 1) : (var_1_92 == ((signed char) ((((var_1_23) > (((((var_1_63) < (1)) ? (var_1_63) : (1))))) ? (var_1_23) : (((((var_1_63) < (1)) ? (var_1_63) : (1))))))))) : 1)) && (var_1_10 ? (var_1_93 == ((unsigned char) var_1_19)) : 1)) && (var_1_94 == ((float) var_1_38))) && (var_1_10 ? (var_1_95 == ((unsigned long int) var_1_90)) : 1)) && (var_1_26 ? (var_1_96 == ((unsigned char) var_1_25)) : (var_1_96 == ((unsigned char) var_1_21)))) && (var_1_25 ? (var_1_97 == ((signed long int) var_1_51)) : 1)) && (var_1_26 ? (var_1_98 == ((double) var_1_32)) : 1)) && (var_1_93 ? (var_1_99 == ((signed short int) var_1_42)) : 1)) && (var_1_11 ? (var_1_100 == ((signed long int) 64)) : (var_1_100 == ((signed long int) var_1_6)))) && (var_1_101 == ((float) 31.6f))) && (last_1_var_1_52 ? (var_1_102 == ((unsigned long int) var_1_51)) : (var_1_102 == ((unsigned long int) last_1_var_1_88)))) && (var_1_21 ? ((var_1_87 < (var_1_80 - var_1_34)) ? (var_1_103 == ((signed char) (((((var_1_91) < (var_1_64)) ? (var_1_91) : (var_1_64))) - var_1_17))) : (var_1_103 == ((signed char) var_1_91))) : (var_1_103 == ((signed char) 25)))) && (var_1_104 == ((double) var_1_39))
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
