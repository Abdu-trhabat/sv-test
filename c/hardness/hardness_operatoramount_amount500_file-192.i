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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
signed long int var_1_3 = 256;
signed long int var_1_4 = 8;
signed long int var_1_5 = 1;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 2;
unsigned char var_1_9 = 16;
signed short int var_1_10 = 8;
unsigned char var_1_11 = 2;
signed long int var_1_12 = 1411675778;
unsigned short int var_1_13 = 37009;
signed short int var_1_14 = 17886;
signed short int var_1_15 = 10000;
signed short int var_1_17 = 4;
signed short int var_1_18 = 2;
unsigned char var_1_19 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 8;
float var_1_28 = 256.15;
float var_1_29 = 100000000000000.4;
float var_1_30 = 128.75;
float var_1_31 = 16.5;
unsigned long int var_1_32 = 1;
unsigned long int var_1_33 = 4110208420;
unsigned long int var_1_34 = 1;
unsigned long int var_1_35 = 128;
float var_1_36 = 8.25;
float var_1_37 = 1.4;
unsigned long int var_1_38 = 2;
unsigned long int var_1_39 = 1287994470;
unsigned long int var_1_40 = 32;
unsigned long int var_1_41 = 2572581496;
unsigned long int var_1_42 = 8;
double var_1_43 = 999999999999999.6;
double var_1_44 = 10000000000000.25;
unsigned short int var_1_45 = 25;
unsigned char var_1_46 = 1;
signed short int var_1_47 = 10;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
signed long int var_1_54 = -128;
unsigned char var_1_55 = 4;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 8;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 25;
signed long int var_1_60 = 8;
unsigned char var_1_61 = 32;
signed short int var_1_62 = 10;
double var_1_63 = 199.25;
float var_1_65 = 1.1;
double var_1_66 = 1.5;
double var_1_67 = 16.5;
signed short int var_1_68 = 5;
unsigned long int var_1_69 = 100000000;
unsigned long int var_1_70 = 8;
unsigned short int var_1_71 = 10;
signed short int var_1_72 = -256;
signed short int var_1_74 = -16624;
signed long int var_1_75 = 8;
signed char var_1_76 = -2;
signed char var_1_77 = 10;
signed char var_1_78 = 2;
unsigned long int var_1_79 = 10;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
unsigned long int var_1_82 = 100;
unsigned char var_1_83 = 0;
float var_1_85 = 2.875;
float var_1_86 = 1.2;
signed long int var_1_87 = 256;
unsigned long int var_1_88 = 2;
unsigned char var_1_89 = 128;
unsigned short int var_1_91 = 64;
signed long int var_1_92 = -4;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 16;
signed long int var_1_95 = 1;
unsigned short int var_1_96 = 32;
double var_1_97 = 8.8;
unsigned char var_1_98 = 1;
float var_1_99 = 2.2;
unsigned char var_1_100 = 0;
unsigned char var_1_101 = 0;
signed long int var_1_102 = 32;
unsigned short int var_1_103 = 256;
unsigned char var_1_104 = 0;
signed short int last_1_var_1_10 = 8;
unsigned char last_1_var_1_25 = 200;
unsigned long int last_1_var_1_34 = 1;
float last_1_var_1_36 = 8.25;
unsigned long int last_1_var_1_38 = 2;
unsigned long int last_1_var_1_40 = 32;
unsigned short int last_1_var_1_45 = 25;
unsigned char last_1_var_1_56 = 1;
signed short int last_1_var_1_62 = 10;
unsigned long int last_1_var_1_69 = 100000000;
unsigned short int last_1_var_1_71 = 10;
signed short int last_1_var_1_72 = -256;
signed long int last_1_var_1_75 = 8;
unsigned long int last_1_var_1_79 = 10;
unsigned char last_1_var_1_83 = 0;
unsigned long int last_1_var_1_88 = 2;
unsigned char last_1_var_1_89 = 128;
unsigned char last_1_var_1_94 = 16;
signed long int last_1_var_1_95 = 1;
unsigned short int last_1_var_1_96 = 32;
double last_1_var_1_97 = 8.8;
float last_1_var_1_99 = 2.2;
signed long int last_1_var_1_102 = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_11 = var_1_26;
 if (stepLocal_11 <= var_1_33) {
  if (! ((last_1_var_1_79 / var_1_6) >= last_1_var_1_88)) {
   var_1_62 = ((((5) < (((last_1_var_1_96 + last_1_var_1_40) - ((((32) < (var_1_26)) ? (32) : (var_1_26)))))) ? (5) : (((last_1_var_1_96 + last_1_var_1_40) - ((((32) < (var_1_26)) ? (32) : (var_1_26)))))));
  } else {
   var_1_62 = (var_1_17 - last_1_var_1_40);
  }
 } else {
  var_1_62 = ((((last_1_var_1_62) > ((var_1_59 + var_1_58))) ? (last_1_var_1_62) : ((var_1_59 + var_1_58))));
 }
 signed long int stepLocal_1 = var_1_4 - var_1_5;
 signed long int stepLocal_0 = last_1_var_1_75;
 if (stepLocal_0 < (var_1_3 - (var_1_4 + var_1_5))) {
  if (var_1_3 >= stepLocal_1) {
   var_1_1 = ((((((var_1_6 + var_1_7) - var_1_8)) < (var_1_9)) ? (((var_1_6 + var_1_7) - var_1_8)) : (var_1_9)));
  } else {
   var_1_1 = ((((4) > (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (4) : (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))));
  }
 }
 var_1_103 = var_1_1;
 signed long int stepLocal_14 = var_1_4;
 unsigned long int stepLocal_13 = 64u;
 unsigned long int stepLocal_12 = last_1_var_1_38;
 if ((var_1_8 - var_1_58) >= stepLocal_14) {
  if ((((((last_1_var_1_36 / 1.75f)) < (var_1_30)) ? ((last_1_var_1_36 / 1.75f)) : (var_1_30))) <= (((((last_1_var_1_99) > (last_1_var_1_97)) ? (last_1_var_1_99) : (last_1_var_1_97))) / var_1_65)) {
   if (var_1_39 > stepLocal_13) {
    var_1_63 = (var_1_44 - (((((var_1_66 + var_1_67)) < (127.6)) ? ((var_1_66 + var_1_67)) : (127.6))));
   }
  } else {
   var_1_63 = var_1_37;
  }
 } else {
  if (stepLocal_12 > last_1_var_1_69) {
   var_1_63 = ((((var_1_29) > (var_1_66)) ? (var_1_29) : (var_1_66)));
  } else {
   if (((last_1_var_1_97 * var_1_37) + last_1_var_1_97) != (- var_1_67)) {
    var_1_63 = (var_1_67 - var_1_66);
   }
  }
 }
 signed long int stepLocal_10 = 2;
 signed short int stepLocal_9 = var_1_15;
 if (last_1_var_1_94 < stepLocal_10) {
  if (stepLocal_9 >= ((var_1_39 / var_1_14) * (last_1_var_1_102 + var_1_59))) {
   if (last_1_var_1_56) {
    var_1_61 = ((((var_1_58) < ((8 + var_1_8))) ? (var_1_58) : ((8 + var_1_8))));
   } else {
    var_1_61 = var_1_11;
   }
  } else {
   var_1_61 = var_1_9;
  }
 } else {
  var_1_61 = 32;
 }
 unsigned long int stepLocal_7 = last_1_var_1_34 / var_1_14;
 if (stepLocal_7 < (last_1_var_1_95 + var_1_41)) {
  var_1_46 = (((var_1_13 & last_1_var_1_69) < 8u) && ((var_1_6 > var_1_8) && var_1_22));
 }
 if (var_1_46) {
  var_1_94 = var_1_58;
 }
 var_1_95 = var_1_94;
 if (var_1_4 <= ((((var_1_11) > ((var_1_94 - 32))) ? (var_1_11) : ((var_1_94 - 32))))) {
  var_1_60 = ((32 - var_1_8) + var_1_5);
 }
 if (var_1_46) {
  var_1_99 = var_1_67;
 } else {
  var_1_99 = 32.4f;
 }
 signed long int stepLocal_18 = last_1_var_1_25 - 16;
 signed long int stepLocal_17 = ~ var_1_4;
 if (last_1_var_1_69 == stepLocal_18) {
  if (stepLocal_17 > var_1_5) {
   var_1_69 = (var_1_6 + (var_1_12 - var_1_7));
  } else {
   var_1_69 = (var_1_70 + (((((5u + var_1_9)) < (((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))))) ? ((5u + var_1_9)) : (((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26)))))));
  }
 } else {
  var_1_69 = (var_1_59 + (var_1_12 - (last_1_var_1_38 + var_1_7)));
 }
 if (var_1_18 > ((var_1_26 + var_1_69) + last_1_var_1_40)) {
  var_1_40 = (((((var_1_33 - (var_1_11 + var_1_15))) > ((((((var_1_41 - var_1_13)) > (last_1_var_1_40)) ? ((var_1_41 - var_1_13)) : (last_1_var_1_40))))) ? ((var_1_33 - (var_1_11 + var_1_15))) : ((((((var_1_41 - var_1_13)) > (last_1_var_1_40)) ? ((var_1_41 - var_1_13)) : (last_1_var_1_40))))));
 } else {
  var_1_40 = (((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_39)) > (var_1_13)) ? ((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_39)) : (var_1_13)));
 }
 if (var_1_6 > (var_1_40 % var_1_11)) {
  var_1_48 = (! var_1_24);
 } else {
  var_1_48 = var_1_22;
 }
 signed long int stepLocal_4 = 8;
 if (var_1_9 > stepLocal_4) {
  var_1_25 = (var_1_8 + (var_1_6 - var_1_11));
 } else {
  var_1_25 = ((var_1_26 - (var_1_11 + var_1_27)) - var_1_8);
 }
 if (((var_1_13 - 128) * (var_1_4 | var_1_7)) != (((((var_1_15) < (var_1_8)) ? (var_1_15) : (var_1_8))) << var_1_9)) {
  var_1_28 = ((var_1_29 + var_1_30) + var_1_31);
 }
 var_1_43 = ((((((25.5) < 0 ) ? -(25.5) : (25.5))) - var_1_44) + 3.5);
 if (var_1_46) {
  var_1_47 = (var_1_103 - var_1_15);
 } else {
  var_1_47 = (((((((var_1_27) > (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))) ? (var_1_27) : (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18)))))) < 0 ) ? -((((var_1_27) > (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))) ? (var_1_27) : (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18)))))) : ((((var_1_27) > (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))) ? (var_1_27) : (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))))));
 }
 if (var_1_22) {
  var_1_54 = ((((16) < ((var_1_18 - ((((var_1_15) > (var_1_7)) ? (var_1_15) : (var_1_7)))))) ? (16) : ((var_1_18 - ((((var_1_15) > (var_1_7)) ? (var_1_15) : (var_1_7)))))));
 }
 var_1_55 = (var_1_26 - var_1_11);
 if (var_1_43 <= var_1_31) {
  var_1_76 = var_1_59;
 }
 if (var_1_44 < (- var_1_63)) {
  var_1_77 = (((((var_1_11 + var_1_27) + (var_1_59 - var_1_78)) < 0 ) ? -((var_1_11 + var_1_27) + (var_1_59 - var_1_78)) : ((var_1_11 + var_1_27) + (var_1_59 - var_1_78))));
 }
 unsigned char stepLocal_28 = var_1_8;
 if (var_1_43 >= (4.4 + var_1_65)) {
  if (stepLocal_28 <= last_1_var_1_89) {
   var_1_89 = ((((var_1_78) < (var_1_59)) ? (var_1_78) : (var_1_59)));
  } else {
   var_1_89 = var_1_8;
  }
 } else {
  var_1_89 = var_1_78;
 }
 if (var_1_46) {
  var_1_91 = var_1_14;
 } else {
  var_1_91 = var_1_94;
 }
 var_1_92 = var_1_27;
 var_1_93 = var_1_52;
 var_1_96 = var_1_58;
 var_1_97 = var_1_66;
 if (var_1_81) {
  var_1_98 = var_1_52;
 } else {
  var_1_98 = var_1_53;
 }
 var_1_102 = var_1_9;
 var_1_104 = var_1_22;
 if (((var_1_4 * var_1_5) & ((((var_1_70) > (var_1_17)) ? (var_1_70) : (var_1_17)))) >= var_1_40) {
  if (((((var_1_65) > (var_1_43)) ? (var_1_65) : (var_1_43))) != var_1_99) {
   var_1_75 = (var_1_26 - var_1_6);
  } else {
   var_1_75 = ((((var_1_103) < (var_1_96)) ? (var_1_103) : (var_1_96)));
  }
 }
 signed short int stepLocal_24 = var_1_74;
 if (var_1_69 < stepLocal_24) {
  if (((var_1_67 + var_1_97) + (var_1_63 + var_1_99)) < var_1_65) {
   var_1_82 = ((((var_1_95) > (var_1_41)) ? (var_1_95) : (var_1_41)));
  } else {
   if (((((var_1_99) > (var_1_63)) ? (var_1_99) : (var_1_63))) < var_1_29) {
    var_1_82 = (var_1_4 + var_1_61);
   } else {
    var_1_82 = ((((var_1_95) < 0 ) ? -(var_1_95) : (var_1_95)));
   }
  }
 }
 if (var_1_27 == (((((var_1_82 / var_1_11)) > (var_1_7)) ? ((var_1_82 / var_1_11)) : (var_1_7)))) {
  var_1_45 = (last_1_var_1_45 + (28088 - var_1_17));
 }
 if (var_1_3 == var_1_9) {
  var_1_42 = var_1_39;
 } else {
  var_1_42 = ((var_1_5 + var_1_6) + ((((var_1_102) > (var_1_11)) ? (var_1_102) : (var_1_11))));
 }
 if (((var_1_97 / var_1_65) == var_1_37) || (64 >= (var_1_42 - var_1_9))) {
  if (var_1_24 || ((var_1_42 + var_1_8) > (var_1_18 - var_1_15))) {
   var_1_80 = ((! var_1_53) || var_1_81);
  }
 }
 signed long int stepLocal_29 = (var_1_14 - 8) - var_1_17;
 if (var_1_95 > stepLocal_29) {
  var_1_100 = ((var_1_52 || var_1_101) && (var_1_80 || var_1_24));
 }
 if (var_1_22) {
  if (((25 != var_1_5) || var_1_80) || var_1_98) {
   var_1_38 = (var_1_33 - var_1_27);
  } else {
   var_1_38 = (((((var_1_33 - (var_1_39 - var_1_7))) > (var_1_9)) ? ((var_1_33 - (var_1_39 - var_1_7))) : (var_1_9)));
  }
 } else {
  if (var_1_60 <= (8 << var_1_4)) {
   var_1_38 = (var_1_6 + 256u);
  }
 }
 if (var_1_98) {
  var_1_19 = (var_1_100 && (var_1_93 && var_1_22));
 } else {
  if ((-0.6 * var_1_43) < 1.125) {
   var_1_19 = var_1_22;
  } else {
   var_1_19 = (! var_1_24);
  }
 }
 signed long int stepLocal_16 = -32;
 unsigned char stepLocal_15 = var_1_93;
 if (var_1_19 || stepLocal_15) {
  if (var_1_18 < stepLocal_16) {
   var_1_68 = ((((var_1_7 - var_1_58) < 0 ) ? -(var_1_7 - var_1_58) : (var_1_7 - var_1_58)));
  } else {
   if (var_1_29 <= (var_1_66 - var_1_44)) {
    var_1_68 = var_1_9;
   } else {
    var_1_68 = (var_1_9 + (var_1_58 - var_1_27));
   }
  }
 }
 unsigned char stepLocal_27 = var_1_52;
 unsigned char stepLocal_26 = var_1_48;
 unsigned char stepLocal_25 = var_1_104;
 if (var_1_46) {
  if (! var_1_100) {
   if (last_1_var_1_83 && stepLocal_25) {
    if (((var_1_14 / var_1_11) <= 32) || stepLocal_27) {
     var_1_83 = var_1_52;
    }
   } else {
    var_1_83 = (! var_1_52);
   }
  } else {
   var_1_83 = (! (! var_1_22));
  }
 } else {
  if (last_1_var_1_83 && stepLocal_26) {
   if ((var_1_31 / var_1_65) != (var_1_29 / ((((var_1_85) < (var_1_86)) ? (var_1_85) : (var_1_86))))) {
    var_1_83 = (! var_1_52);
   }
  } else {
   var_1_83 = (! (last_1_var_1_83 && var_1_81));
  }
 }
 if ((var_1_7 << var_1_58) >= ((((var_1_11) > (var_1_68)) ? (var_1_11) : (var_1_68)))) {
  if (((- 32u) + var_1_4) < var_1_33) {
   var_1_71 = ((((var_1_6) > (last_1_var_1_71)) ? (var_1_6) : (last_1_var_1_71)));
  }
 }
 unsigned char stepLocal_23 = var_1_53;
 if (var_1_19 && stepLocal_23) {
  if (var_1_43 <= (var_1_30 + (var_1_37 * var_1_44))) {
   var_1_79 = (var_1_74 - var_1_9);
  }
 } else {
  var_1_79 = ((((8u) > (var_1_62)) ? (8u) : (var_1_62)));
 }
 signed long int stepLocal_3 = var_1_8 >> var_1_11;
 unsigned char stepLocal_2 = var_1_11;
 if (stepLocal_3 >= ((var_1_12 - var_1_4) - var_1_6)) {
  if ((var_1_13 - var_1_6) >= stepLocal_2) {
   var_1_10 = (var_1_6 - (var_1_14 - (var_1_15 - 10)));
  } else {
   if (var_1_83) {
    var_1_10 = (((29260 - last_1_var_1_10) - var_1_8) - ((var_1_6 + var_1_17) + var_1_9));
   }
  }
 } else {
  var_1_10 = (var_1_18 - 16);
 }
 if (! (var_1_22 && (128.5 < var_1_29))) {
  var_1_32 = ((((var_1_15) < (var_1_68)) ? (var_1_15) : (var_1_68)));
 } else {
  var_1_32 = (var_1_33 - var_1_54);
 }
 if ((var_1_32 % var_1_26) <= var_1_82) {
  var_1_57 = ((var_1_11 + var_1_27) + (var_1_58 + ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))));
 } else {
  var_1_57 = (4 + 10);
 }
 unsigned char stepLocal_22 = var_1_11;
 unsigned long int stepLocal_21 = var_1_70;
 unsigned char stepLocal_20 = var_1_80;
 unsigned long int stepLocal_19 = var_1_15 | var_1_39;
 if (var_1_24) {
  if (var_1_52 && stepLocal_20) {
   if (! (var_1_82 == var_1_79)) {
    if (var_1_43 <= var_1_30) {
     var_1_72 = ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)));
    } else {
     var_1_72 = ((((last_1_var_1_72) > ((var_1_17 - 8))) ? (last_1_var_1_72) : ((var_1_17 - 8))));
    }
   }
  }
 } else {
  if ((var_1_58 & (var_1_26 >> var_1_11)) <= stepLocal_19) {
   if (var_1_33 < stepLocal_22) {
    if (stepLocal_21 == 10u) {
     var_1_72 = (var_1_57 - var_1_59);
    } else {
     var_1_72 = ((((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))) - var_1_27) - var_1_58);
    }
   } else {
    var_1_72 = var_1_7;
   }
  } else {
   var_1_72 = ((var_1_14 - var_1_47) - var_1_59);
  }
 }
 unsigned long int stepLocal_6 = var_1_27 ^ var_1_32;
 signed short int stepLocal_5 = var_1_17;
 if (stepLocal_6 <= var_1_60) {
  if (var_1_24) {
   var_1_36 = ((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30)));
  }
 } else {
  if (var_1_26 >= stepLocal_5) {
   if (var_1_31 == var_1_63) {
    var_1_36 = ((((var_1_29) < (128.5f)) ? (var_1_29) : (128.5f)));
   } else {
    if (var_1_104) {
     var_1_36 = (var_1_29 + (var_1_30 + var_1_37));
    } else {
     var_1_36 = ((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)));
    }
   }
  }
 }
 var_1_87 = (((((((((var_1_14 - var_1_11)) < (var_1_10)) ? ((var_1_14 - var_1_11)) : (var_1_10)))) < ((var_1_61 + var_1_78))) ? ((((((var_1_14 - var_1_11)) < (var_1_10)) ? ((var_1_14 - var_1_11)) : (var_1_10)))) : ((var_1_61 + var_1_78))));
 if ((var_1_26 - var_1_87) == last_1_var_1_88) {
  var_1_88 = ((((var_1_39) < (((((last_1_var_1_88) > (var_1_14)) ? (last_1_var_1_88) : (var_1_14))))) ? (var_1_39) : (((((last_1_var_1_88) > (var_1_14)) ? (last_1_var_1_88) : (var_1_14))))));
 } else {
  if (var_1_69 >= var_1_42) {
   var_1_88 = ((((var_1_7) > ((4u + var_1_15))) ? (var_1_7) : ((4u + var_1_15))));
  } else {
   var_1_88 = (3143572387u - var_1_39);
  }
 }
 unsigned long int stepLocal_8 = var_1_82;
 if (var_1_88 >= stepLocal_8) {
  var_1_56 = (! (var_1_52 && var_1_24));
 } else {
  var_1_56 = (! (! var_1_52));
 }
 if ((8 + var_1_5) <= var_1_3) {
  if (var_1_56 || (var_1_45 <= var_1_40)) {
   var_1_34 = ((((10000u) < 0 ) ? -(10000u) : (10000u)));
  } else {
   var_1_34 = (((((var_1_33 - var_1_14)) > (var_1_26)) ? ((var_1_33 - var_1_14)) : (var_1_26)));
  }
 } else {
  if (var_1_56) {
   var_1_34 = var_1_35;
  }
 }
 if (var_1_93 || var_1_80) {
  if (var_1_94 < ((((1) < (var_1_41)) ? (1) : (var_1_41)))) {
   var_1_49 = (((var_1_9 ^ var_1_13) > var_1_34) || ((var_1_24 && var_1_52) && var_1_53));
  } else {
   var_1_49 = (var_1_52 && (var_1_100 || var_1_24));
  }
 } else {
  if (var_1_53) {
   var_1_49 = (! var_1_24);
  } else {
   var_1_49 = (! var_1_52);
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741824);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 63);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 64);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 7);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65535);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 8191);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 8191);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 190);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 31);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -230584.3009213691400e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691400e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 1073741823);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 64);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= -922337.2036854776000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
 assume_abort_if_not(var_1_65 != 0.0F);
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427383000e+12F && var_1_67 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_74 >= -32766);
 assume_abort_if_not(var_1_74 <= -16382);
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 63);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 0);
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= -922337.2036854776000e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854776000e+12F && var_1_85 >= 1.0e-20F ));
 assume_abort_if_not(var_1_85 != 0.0F);
 var_1_86 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_86 >= -922337.2036854776000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
 assume_abort_if_not(var_1_86 != 0.0F);
 var_1_101 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_101 >= 1);
 assume_abort_if_not(var_1_101 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_102 = var_1_102;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_75 < (var_1_3 - (var_1_4 + var_1_5))) ? ((var_1_3 >= (var_1_4 - var_1_5)) ? (var_1_1 == ((unsigned char) ((((((var_1_6 + var_1_7) - var_1_8)) < (var_1_9)) ? (((var_1_6 + var_1_7) - var_1_8)) : (var_1_9))))) : (var_1_1 == ((unsigned char) ((((4) > (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (4) : (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))))))) : 1) && (((var_1_8 >> var_1_11) >= ((var_1_12 - var_1_4) - var_1_6)) ? (((var_1_13 - var_1_6) >= var_1_11) ? (var_1_10 == ((signed short int) (var_1_6 - (var_1_14 - (var_1_15 - 10))))) : (var_1_83 ? (var_1_10 == ((signed short int) (((29260 - last_1_var_1_10) - var_1_8) - ((var_1_6 + var_1_17) + var_1_9)))) : 1)) : (var_1_10 == ((signed short int) (var_1_18 - 16))))) && (var_1_98 ? (var_1_19 == ((unsigned char) (var_1_100 && (var_1_93 && var_1_22)))) : (((-0.6 * var_1_43) < 1.125) ? (var_1_19 == ((unsigned char) var_1_22)) : (var_1_19 == ((unsigned char) (! var_1_24)))))) && ((var_1_9 > 8) ? (var_1_25 == ((unsigned char) (var_1_8 + (var_1_6 - var_1_11)))) : (var_1_25 == ((unsigned char) ((var_1_26 - (var_1_11 + var_1_27)) - var_1_8))))) && ((((var_1_13 - 128) * (var_1_4 | var_1_7)) != (((((var_1_15) < (var_1_8)) ? (var_1_15) : (var_1_8))) << var_1_9)) ? (var_1_28 == ((float) ((var_1_29 + var_1_30) + var_1_31))) : 1)) && ((! (var_1_22 && (128.5 < var_1_29))) ? (var_1_32 == ((unsigned long int) ((((var_1_15) < (var_1_68)) ? (var_1_15) : (var_1_68))))) : (var_1_32 == ((unsigned long int) (var_1_33 - var_1_54))))) && (((8 + var_1_5) <= var_1_3) ? ((var_1_56 || (var_1_45 <= var_1_40)) ? (var_1_34 == ((unsigned long int) ((((10000u) < 0 ) ? -(10000u) : (10000u))))) : (var_1_34 == ((unsigned long int) (((((var_1_33 - var_1_14)) > (var_1_26)) ? ((var_1_33 - var_1_14)) : (var_1_26)))))) : (var_1_56 ? (var_1_34 == ((unsigned long int) var_1_35)) : 1))) && (((var_1_27 ^ var_1_32) <= var_1_60) ? (var_1_24 ? (var_1_36 == ((float) ((((var_1_31) < (var_1_30)) ? (var_1_31) : (var_1_30))))) : 1) : ((var_1_26 >= var_1_17) ? ((var_1_31 == var_1_63) ? (var_1_36 == ((float) ((((var_1_29) < (128.5f)) ? (var_1_29) : (128.5f))))) : (var_1_104 ? (var_1_36 == ((float) (var_1_29 + (var_1_30 + var_1_37)))) : (var_1_36 == ((float) ((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29))))))) : 1))) && (var_1_22 ? ((((25 != var_1_5) || var_1_80) || var_1_98) ? (var_1_38 == ((unsigned long int) (var_1_33 - var_1_27))) : (var_1_38 == ((unsigned long int) (((((var_1_33 - (var_1_39 - var_1_7))) > (var_1_9)) ? ((var_1_33 - (var_1_39 - var_1_7))) : (var_1_9)))))) : ((var_1_60 <= (8 << var_1_4)) ? (var_1_38 == ((unsigned long int) (var_1_6 + 256u))) : 1))) && ((var_1_18 > ((var_1_26 + var_1_69) + last_1_var_1_40)) ? (var_1_40 == ((unsigned long int) (((((var_1_33 - (var_1_11 + var_1_15))) > ((((((var_1_41 - var_1_13)) > (last_1_var_1_40)) ? ((var_1_41 - var_1_13)) : (last_1_var_1_40))))) ? ((var_1_33 - (var_1_11 + var_1_15))) : ((((((var_1_41 - var_1_13)) > (last_1_var_1_40)) ? ((var_1_41 - var_1_13)) : (last_1_var_1_40)))))))) : (var_1_40 == ((unsigned long int) (((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_39)) > (var_1_13)) ? ((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_39)) : (var_1_13))))))) && ((var_1_3 == var_1_9) ? (var_1_42 == ((unsigned long int) var_1_39)) : (var_1_42 == ((unsigned long int) ((var_1_5 + var_1_6) + ((((var_1_102) > (var_1_11)) ? (var_1_102) : (var_1_11)))))))) && (var_1_43 == ((double) ((((((25.5) < 0 ) ? -(25.5) : (25.5))) - var_1_44) + 3.5)))) && ((var_1_27 == (((((var_1_82 / var_1_11)) > (var_1_7)) ? ((var_1_82 / var_1_11)) : (var_1_7)))) ? (var_1_45 == ((unsigned short int) (last_1_var_1_45 + (28088 - var_1_17)))) : 1)) && (((last_1_var_1_34 / var_1_14) < (last_1_var_1_95 + var_1_41)) ? (var_1_46 == ((unsigned char) (((var_1_13 & last_1_var_1_69) < 8u) && ((var_1_6 > var_1_8) && var_1_22)))) : 1)) && (var_1_46 ? (var_1_47 == ((signed short int) (var_1_103 - var_1_15))) : (var_1_47 == ((signed short int) (((((((var_1_27) > (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))) ? (var_1_27) : (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18)))))) < 0 ) ? -((((var_1_27) > (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))) ? (var_1_27) : (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18)))))) : ((((var_1_27) > (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18))))) ? (var_1_27) : (((((var_1_9) > (var_1_18)) ? (var_1_9) : (var_1_18)))))))))))) && ((var_1_6 > (var_1_40 % var_1_11)) ? (var_1_48 == ((unsigned char) (! var_1_24))) : (var_1_48 == ((unsigned char) var_1_22)))) && ((var_1_93 || var_1_80) ? ((var_1_94 < ((((1) < (var_1_41)) ? (1) : (var_1_41)))) ? (var_1_49 == ((unsigned char) (((var_1_9 ^ var_1_13) > var_1_34) || ((var_1_24 && var_1_52) && var_1_53)))) : (var_1_49 == ((unsigned char) (var_1_52 && (var_1_100 || var_1_24))))) : (var_1_53 ? (var_1_49 == ((unsigned char) (! var_1_24))) : (var_1_49 == ((unsigned char) (! var_1_52)))))) && (var_1_22 ? (var_1_54 == ((signed long int) ((((16) < ((var_1_18 - ((((var_1_15) > (var_1_7)) ? (var_1_15) : (var_1_7)))))) ? (16) : ((var_1_18 - ((((var_1_15) > (var_1_7)) ? (var_1_15) : (var_1_7))))))))) : 1)) && (var_1_55 == ((unsigned char) (var_1_26 - var_1_11)))) && ((var_1_88 >= var_1_82) ? (var_1_56 == ((unsigned char) (! (var_1_52 && var_1_24)))) : (var_1_56 == ((unsigned char) (! (! var_1_52)))))) && (((var_1_32 % var_1_26) <= var_1_82) ? (var_1_57 == ((unsigned char) ((var_1_11 + var_1_27) + (var_1_58 + ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))))) : (var_1_57 == ((unsigned char) (4 + 10))))) && ((var_1_4 <= ((((var_1_11) > ((var_1_94 - 32))) ? (var_1_11) : ((var_1_94 - 32))))) ? (var_1_60 == ((signed long int) ((32 - var_1_8) + var_1_5))) : 1)) && ((last_1_var_1_94 < 2) ? ((var_1_15 >= ((var_1_39 / var_1_14) * (last_1_var_1_102 + var_1_59))) ? (last_1_var_1_56 ? (var_1_61 == ((unsigned char) ((((var_1_58) < ((8 + var_1_8))) ? (var_1_58) : ((8 + var_1_8)))))) : (var_1_61 == ((unsigned char) var_1_11))) : (var_1_61 == ((unsigned char) var_1_9))) : (var_1_61 == ((unsigned char) 32)))) && ((var_1_26 <= var_1_33) ? ((! ((last_1_var_1_79 / var_1_6) >= last_1_var_1_88)) ? (var_1_62 == ((signed short int) ((((5) < (((last_1_var_1_96 + last_1_var_1_40) - ((((32) < (var_1_26)) ? (32) : (var_1_26)))))) ? (5) : (((last_1_var_1_96 + last_1_var_1_40) - ((((32) < (var_1_26)) ? (32) : (var_1_26))))))))) : (var_1_62 == ((signed short int) (var_1_17 - last_1_var_1_40)))) : (var_1_62 == ((signed short int) ((((last_1_var_1_62) > ((var_1_59 + var_1_58))) ? (last_1_var_1_62) : ((var_1_59 + var_1_58)))))))) && (((var_1_8 - var_1_58) >= var_1_4) ? (((((((last_1_var_1_36 / 1.75f)) < (var_1_30)) ? ((last_1_var_1_36 / 1.75f)) : (var_1_30))) <= (((((last_1_var_1_99) > (last_1_var_1_97)) ? (last_1_var_1_99) : (last_1_var_1_97))) / var_1_65)) ? ((var_1_39 > 64u) ? (var_1_63 == ((double) (var_1_44 - (((((var_1_66 + var_1_67)) < (127.6)) ? ((var_1_66 + var_1_67)) : (127.6)))))) : 1) : (var_1_63 == ((double) var_1_37))) : ((last_1_var_1_38 > last_1_var_1_69) ? (var_1_63 == ((double) ((((var_1_29) > (var_1_66)) ? (var_1_29) : (var_1_66))))) : ((((last_1_var_1_97 * var_1_37) + last_1_var_1_97) != (- var_1_67)) ? (var_1_63 == ((double) (var_1_67 - var_1_66))) : 1)))) && ((var_1_19 || var_1_93) ? ((var_1_18 < -32) ? (var_1_68 == ((signed short int) ((((var_1_7 - var_1_58) < 0 ) ? -(var_1_7 - var_1_58) : (var_1_7 - var_1_58))))) : ((var_1_29 <= (var_1_66 - var_1_44)) ? (var_1_68 == ((signed short int) var_1_9)) : (var_1_68 == ((signed short int) (var_1_9 + (var_1_58 - var_1_27)))))) : 1)) && ((last_1_var_1_69 == (last_1_var_1_25 - 16)) ? (((~ var_1_4) > var_1_5) ? (var_1_69 == ((unsigned long int) (var_1_6 + (var_1_12 - var_1_7)))) : (var_1_69 == ((unsigned long int) (var_1_70 + (((((5u + var_1_9)) < (((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26))))) ? ((5u + var_1_9)) : (((((var_1_4) < (var_1_26)) ? (var_1_4) : (var_1_26)))))))))) : (var_1_69 == ((unsigned long int) (var_1_59 + (var_1_12 - (last_1_var_1_38 + var_1_7))))))) && (((var_1_7 << var_1_58) >= ((((var_1_11) > (var_1_68)) ? (var_1_11) : (var_1_68)))) ? ((((- 32u) + var_1_4) < var_1_33) ? (var_1_71 == ((unsigned short int) ((((var_1_6) > (last_1_var_1_71)) ? (var_1_6) : (last_1_var_1_71))))) : 1) : 1)) && (var_1_24 ? ((var_1_52 && var_1_80) ? ((! (var_1_82 == var_1_79)) ? ((var_1_43 <= var_1_30) ? (var_1_72 == ((signed short int) ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))))) : (var_1_72 == ((signed short int) ((((last_1_var_1_72) > ((var_1_17 - 8))) ? (last_1_var_1_72) : ((var_1_17 - 8))))))) : 1) : 1) : (((var_1_58 & (var_1_26 >> var_1_11)) <= (var_1_15 | var_1_39)) ? ((var_1_33 < var_1_11) ? ((var_1_70 == 10u) ? (var_1_72 == ((signed short int) (var_1_57 - var_1_59))) : (var_1_72 == ((signed short int) ((((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))) - var_1_27) - var_1_58)))) : (var_1_72 == ((signed short int) var_1_7))) : (var_1_72 == ((signed short int) ((var_1_14 - var_1_47) - var_1_59)))))) && ((((var_1_4 * var_1_5) & ((((var_1_70) > (var_1_17)) ? (var_1_70) : (var_1_17)))) >= var_1_40) ? ((((((var_1_65) > (var_1_43)) ? (var_1_65) : (var_1_43))) != var_1_99) ? (var_1_75 == ((signed long int) (var_1_26 - var_1_6))) : (var_1_75 == ((signed long int) ((((var_1_103) < (var_1_96)) ? (var_1_103) : (var_1_96)))))) : 1)) && ((var_1_43 <= var_1_31) ? (var_1_76 == ((signed char) var_1_59)) : 1)) && ((var_1_44 < (- var_1_63)) ? (var_1_77 == ((signed char) (((((var_1_11 + var_1_27) + (var_1_59 - var_1_78)) < 0 ) ? -((var_1_11 + var_1_27) + (var_1_59 - var_1_78)) : ((var_1_11 + var_1_27) + (var_1_59 - var_1_78)))))) : 1)) && ((var_1_19 && var_1_53) ? ((var_1_43 <= (var_1_30 + (var_1_37 * var_1_44))) ? (var_1_79 == ((unsigned long int) (var_1_74 - var_1_9))) : 1) : (var_1_79 == ((unsigned long int) ((((8u) > (var_1_62)) ? (8u) : (var_1_62))))))) && ((((var_1_97 / var_1_65) == var_1_37) || (64 >= (var_1_42 - var_1_9))) ? ((var_1_24 || ((var_1_42 + var_1_8) > (var_1_18 - var_1_15))) ? (var_1_80 == ((unsigned char) ((! var_1_53) || var_1_81))) : 1) : 1)) && ((var_1_69 < var_1_74) ? ((((var_1_67 + var_1_97) + (var_1_63 + var_1_99)) < var_1_65) ? (var_1_82 == ((unsigned long int) ((((var_1_95) > (var_1_41)) ? (var_1_95) : (var_1_41))))) : ((((((var_1_99) > (var_1_63)) ? (var_1_99) : (var_1_63))) < var_1_29) ? (var_1_82 == ((unsigned long int) (var_1_4 + var_1_61))) : (var_1_82 == ((unsigned long int) ((((var_1_95) < 0 ) ? -(var_1_95) : (var_1_95))))))) : 1)) && (var_1_46 ? ((! var_1_100) ? ((last_1_var_1_83 && var_1_104) ? ((((var_1_14 / var_1_11) <= 32) || var_1_52) ? (var_1_83 == ((unsigned char) var_1_52)) : 1) : (var_1_83 == ((unsigned char) (! var_1_52)))) : (var_1_83 == ((unsigned char) (! (! var_1_22))))) : ((last_1_var_1_83 && var_1_48) ? (((var_1_31 / var_1_65) != (var_1_29 / ((((var_1_85) < (var_1_86)) ? (var_1_85) : (var_1_86))))) ? (var_1_83 == ((unsigned char) (! var_1_52))) : 1) : (var_1_83 == ((unsigned char) (! (last_1_var_1_83 && var_1_81))))))) && (var_1_87 == ((signed long int) (((((((((var_1_14 - var_1_11)) < (var_1_10)) ? ((var_1_14 - var_1_11)) : (var_1_10)))) < ((var_1_61 + var_1_78))) ? ((((((var_1_14 - var_1_11)) < (var_1_10)) ? ((var_1_14 - var_1_11)) : (var_1_10)))) : ((var_1_61 + var_1_78))))))) && (((var_1_26 - var_1_87) == last_1_var_1_88) ? (var_1_88 == ((unsigned long int) ((((var_1_39) < (((((last_1_var_1_88) > (var_1_14)) ? (last_1_var_1_88) : (var_1_14))))) ? (var_1_39) : (((((last_1_var_1_88) > (var_1_14)) ? (last_1_var_1_88) : (var_1_14)))))))) : ((var_1_69 >= var_1_42) ? (var_1_88 == ((unsigned long int) ((((var_1_7) > ((4u + var_1_15))) ? (var_1_7) : ((4u + var_1_15)))))) : (var_1_88 == ((unsigned long int) (3143572387u - var_1_39)))))) && ((var_1_43 >= (4.4 + var_1_65)) ? ((var_1_8 <= last_1_var_1_89) ? (var_1_89 == ((unsigned char) ((((var_1_78) < (var_1_59)) ? (var_1_78) : (var_1_59))))) : (var_1_89 == ((unsigned char) var_1_8))) : (var_1_89 == ((unsigned char) var_1_78)))) && (var_1_46 ? (var_1_91 == ((unsigned short int) var_1_14)) : (var_1_91 == ((unsigned short int) var_1_94)))) && (var_1_92 == ((signed long int) var_1_27))) && (var_1_93 == ((unsigned char) var_1_52))) && (var_1_46 ? (var_1_94 == ((unsigned char) var_1_58)) : 1)) && (var_1_95 == ((signed long int) var_1_94))) && (var_1_96 == ((unsigned short int) var_1_58))) && (var_1_97 == ((double) var_1_66))) && (var_1_81 ? (var_1_98 == ((unsigned char) var_1_52)) : (var_1_98 == ((unsigned char) var_1_53)))) && (var_1_46 ? (var_1_99 == ((float) var_1_67)) : (var_1_99 == ((float) 32.4f)))) && ((var_1_95 > ((var_1_14 - 8) - var_1_17)) ? (var_1_100 == ((unsigned char) ((var_1_52 || var_1_101) && (var_1_80 || var_1_24)))) : 1)) && (var_1_102 == ((signed long int) var_1_9))) && (var_1_103 == ((unsigned short int) var_1_1))) && (var_1_104 == ((unsigned char) var_1_22))
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
