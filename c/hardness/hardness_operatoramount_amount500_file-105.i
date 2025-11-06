// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned short int var_1_3 = 4;
unsigned short int var_1_4 = 16;
unsigned short int var_1_5 = 8;
unsigned short int var_1_9 = 45213;
signed char var_1_10 = 32;
signed char var_1_11 = 1;
signed char var_1_12 = 1;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
double var_1_16 = 0.8;
unsigned long int var_1_17 = 3412260519;
signed char var_1_18 = 10;
signed char var_1_19 = -5;
double var_1_20 = 15.9;
double var_1_21 = 50.6;
double var_1_22 = 10.1;
double var_1_23 = 100000000.6;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 0;
unsigned long int var_1_28 = 3345267401;
unsigned short int var_1_29 = 5;
unsigned short int var_1_30 = 64;
unsigned short int var_1_31 = 100;
signed char var_1_32 = -8;
signed char var_1_33 = 50;
signed char var_1_34 = 2;
signed short int var_1_35 = -10;
unsigned long int var_1_36 = 64;
unsigned long int var_1_37 = 1348111561;
signed char var_1_38 = 0;
signed char var_1_39 = 32;
unsigned short int var_1_40 = 64;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
float var_1_44 = 4.4;
unsigned char var_1_45 = 0;
signed char var_1_46 = 64;
float var_1_47 = 10000000.75;
float var_1_48 = 3.5;
float var_1_49 = 10.5;
unsigned long int var_1_50 = 1;
unsigned long int var_1_51 = 10;
unsigned long int var_1_52 = 50;
unsigned long int var_1_53 = 1;
double var_1_54 = 1.9;
unsigned long int var_1_55 = 2;
float var_1_56 = 9.1;
double var_1_57 = 2.5;
double var_1_58 = 9.2;
unsigned char var_1_59 = 0;
float var_1_61 = 7.2;
unsigned long int var_1_62 = 2;
float var_1_63 = 10000000.25;
signed char var_1_64 = 4;
signed char var_1_65 = 25;
signed char var_1_66 = -32;
unsigned long int var_1_67 = 16;
unsigned long int var_1_68 = 3639274783;
unsigned long int var_1_71 = 8;
unsigned long int var_1_72 = 5;
unsigned long int var_1_73 = 1000000000;
unsigned char var_1_74 = 25;
unsigned short int var_1_75 = 128;
unsigned char var_1_77 = 10;
unsigned char var_1_78 = 5;
unsigned char var_1_79 = 100;
unsigned char var_1_80 = 128;
signed long int var_1_81 = -8;
signed char var_1_84 = 50;
signed char var_1_85 = -25;
unsigned long int var_1_87 = 25;
unsigned long int var_1_88 = 256;
signed long int var_1_89 = 16;
unsigned char var_1_90 = 1;
signed long int var_1_91 = 1000;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 1;
double var_1_94 = 99.5;
unsigned long int var_1_95 = 5;
unsigned long int var_1_96 = 50;
float var_1_97 = 63.75;
signed short int var_1_98 = 1;
unsigned long int var_1_99 = 10;
signed long int var_1_100 = 1000000;
signed char var_1_101 = 2;
double var_1_102 = 499.05;
double var_1_103 = 15.6;
unsigned char last_1_var_1_24 = 1;
unsigned long int last_1_var_1_36 = 64;
unsigned char last_1_var_1_41 = 0;
float last_1_var_1_44 = 4.4;
unsigned long int last_1_var_1_51 = 10;
unsigned long int last_1_var_1_53 = 1;
double last_1_var_1_54 = 1.9;
unsigned long int last_1_var_1_55 = 2;
double last_1_var_1_57 = 2.5;
unsigned char last_1_var_1_59 = 0;
unsigned long int last_1_var_1_62 = 2;
unsigned long int last_1_var_1_67 = 16;
unsigned short int last_1_var_1_75 = 128;
signed long int last_1_var_1_81 = -8;
unsigned long int last_1_var_1_87 = 25;
signed long int last_1_var_1_89 = 16;
signed long int last_1_var_1_91 = 1000;
unsigned char last_1_var_1_93 = 1;
float last_1_var_1_97 = 63.75;
signed short int last_1_var_1_98 = 1;
double last_1_var_1_102 = 499.05;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_28 = var_1_3 - var_1_5;
 if (-16 >= stepLocal_28) {
  var_1_87 = ((((((((var_1_72) < (var_1_13)) ? (var_1_72) : (var_1_13)))) > (var_1_5)) ? (((((var_1_72) < (var_1_13)) ? (var_1_72) : (var_1_13)))) : (var_1_5)));
 } else {
  var_1_87 = ((((((((8u) < 0 ) ? -(8u) : (8u)))) < ((var_1_28 - last_1_var_1_98))) ? (((((8u) < 0 ) ? -(8u) : (8u)))) : ((var_1_28 - last_1_var_1_98))));
 }
 unsigned long int stepLocal_11 = var_1_87;
 if (stepLocal_11 >= (- last_1_var_1_51)) {
  var_1_51 = (var_1_28 - var_1_4);
 }
 signed long int stepLocal_30 = var_1_65 / var_1_46;
 if (last_1_var_1_62 <= stepLocal_30) {
  var_1_102 = ((((((var_1_22 - var_1_23) + var_1_103)) > (((((var_1_47 + var_1_21) < 0 ) ? -(var_1_47 + var_1_21) : (var_1_47 + var_1_21))))) ? (((var_1_22 - var_1_23) + var_1_103)) : (((((var_1_47 + var_1_21) < 0 ) ? -(var_1_47 + var_1_21) : (var_1_47 + var_1_21))))));
 } else {
  var_1_102 = 127.85;
 }
 var_1_100 = var_1_51;
 unsigned char stepLocal_26 = var_1_26 && (var_1_5 > var_1_28);
 unsigned char stepLocal_25 = var_1_78;
 if ((last_1_var_1_102 >= var_1_20) && stepLocal_26) {
  var_1_81 = (var_1_30 - (var_1_78 + last_1_var_1_81));
 } else {
  if (stepLocal_25 != last_1_var_1_81) {
   var_1_81 = ((((var_1_30) < (var_1_18)) ? (var_1_30) : (var_1_18)));
  }
 }
 if (((32.5f + var_1_21) - var_1_23) < (last_1_var_1_97 + (last_1_var_1_44 * last_1_var_1_54))) {
  if (((var_1_5 << last_1_var_1_75) > last_1_var_1_62) && var_1_26) {
   if (var_1_33 > ((last_1_var_1_36 / var_1_19) % ((((var_1_18) > (var_1_46)) ? (var_1_18) : (var_1_46))))) {
    if (last_1_var_1_44 >= (- var_1_22)) {
     var_1_44 = (((2.9739596464057037E18f - var_1_47) - (var_1_48 + var_1_49)) + var_1_21);
    }
   } else {
    if (var_1_46 < ((var_1_12 & last_1_var_1_89) * (var_1_13 >> var_1_50))) {
     var_1_44 = (var_1_21 - var_1_22);
    }
   }
  }
 }
 if (last_1_var_1_55 >= last_1_var_1_67) {
  if (var_1_39 >= var_1_37) {
   if (last_1_var_1_24 || var_1_26) {
    var_1_59 = (var_1_43 || (! (! var_1_42)));
   } else {
    var_1_59 = var_1_43;
   }
  }
 } else {
  var_1_59 = (((var_1_58 > var_1_22) && (64 < last_1_var_1_53)) && (var_1_43 && var_1_42));
 }
 if (var_1_25) {
  if (var_1_48 < var_1_23) {
   var_1_54 = (((((((((var_1_48 + var_1_49)) > (1.9)) ? ((var_1_48 + var_1_49)) : (1.9)))) > (var_1_20)) ? ((((((var_1_48 + var_1_49)) > (1.9)) ? ((var_1_48 + var_1_49)) : (1.9)))) : (var_1_20)));
  } else {
   if ((var_1_30 * (var_1_31 % var_1_9)) != ((8 >> var_1_50) * ((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36))))) {
    var_1_54 = ((var_1_49 - var_1_22) + var_1_21);
   } else {
    if ((var_1_11 ^ last_1_var_1_87) > last_1_var_1_91) {
     var_1_54 = var_1_20;
    } else {
     var_1_54 = var_1_23;
    }
   }
  }
 }
 unsigned short int stepLocal_8 = var_1_9;
 if (stepLocal_8 > (last_1_var_1_62 + var_1_34)) {
  if (last_1_var_1_24) {
   var_1_36 = (var_1_28 - var_1_5);
  } else {
   var_1_36 = (var_1_28 - (var_1_37 - var_1_31));
  }
 } else {
  var_1_36 = 8u;
 }
 unsigned char stepLocal_2 = last_1_var_1_41;
 if (last_1_var_1_59 || stepLocal_2) {
  var_1_24 = (var_1_25 && ((var_1_12 >= var_1_17) || var_1_26));
 }
 if (var_1_24) {
  var_1_91 = var_1_3;
 }
 if (var_1_4 <= var_1_3) {
  if (1 > ((((((((var_1_9) < (-256)) ? (var_1_9) : (-256)))) > (var_1_4)) ? (((((var_1_9) < (-256)) ? (var_1_9) : (-256)))) : (var_1_4)))) {
   var_1_10 = (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) - var_1_13);
  } else {
   var_1_10 = (((((var_1_14 + -16)) < (var_1_12)) ? ((var_1_14 + -16)) : (var_1_12)));
  }
 } else {
  if (var_1_59 && var_1_24) {
   var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
  } else {
   var_1_10 = (var_1_11 - var_1_13);
  }
 }
 signed char stepLocal_5 = var_1_11;
 signed long int stepLocal_4 = (((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9));
 if (stepLocal_5 >= var_1_5) {
  var_1_29 = ((((var_1_4) < (((var_1_13 + var_1_30) + 128))) ? (var_1_4) : (((var_1_13 + var_1_30) + 128))));
 } else {
  if (var_1_20 < var_1_23) {
   var_1_29 = (var_1_31 + var_1_3);
  } else {
   if (99.2f > ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23)))) {
    if (var_1_54 <= var_1_20) {
     if ((- (- 128)) > stepLocal_4) {
      var_1_29 = (var_1_9 - var_1_4);
     } else {
      var_1_29 = (var_1_3 + (var_1_13 + var_1_30));
     }
    } else {
     var_1_29 = var_1_31;
    }
   } else {
    var_1_29 = var_1_5;
   }
  }
 }
 signed long int stepLocal_6 = var_1_4 - var_1_31;
 if ((128 - var_1_13) <= stepLocal_6) {
  var_1_32 = (((((var_1_14 + var_1_33)) > ((var_1_11 - var_1_13))) ? ((var_1_14 + var_1_33)) : ((var_1_11 - var_1_13))));
 } else {
  var_1_32 = ((((var_1_13 - var_1_34) < 0 ) ? -(var_1_13 - var_1_34) : (var_1_13 - var_1_34)));
 }
 unsigned long int stepLocal_7 = var_1_51 * var_1_28;
 if (0 == stepLocal_7) {
  var_1_35 = ((var_1_13 + 16) + var_1_12);
 }
 if (var_1_46 < var_1_28) {
  var_1_53 = ((var_1_50 + var_1_5) + 64u);
 }
 var_1_56 = (var_1_23 + var_1_48);
 signed char stepLocal_22 = var_1_46;
 if (stepLocal_22 <= 32) {
  var_1_74 = (16 + (100 - var_1_65));
 } else {
  var_1_74 = ((var_1_50 + var_1_65) + var_1_34);
 }
 unsigned char stepLocal_24 = var_1_45;
 signed long int stepLocal_23 = var_1_81 * -1000000;
 if (stepLocal_24 && var_1_42) {
  if (var_1_59) {
   if (stepLocal_23 < var_1_14) {
    var_1_77 = var_1_34;
   } else {
    if (var_1_45) {
     var_1_77 = var_1_65;
    } else {
     var_1_77 = (((((var_1_78 + var_1_65)) > (var_1_79)) ? ((var_1_78 + var_1_65)) : (var_1_79)));
    }
   }
  } else {
   var_1_77 = (var_1_80 - (var_1_50 + var_1_65));
  }
 }
 if (var_1_58 <= var_1_102) {
  var_1_84 = (((((10) < (var_1_66)) ? (10) : (var_1_66))) + var_1_65);
 } else {
  var_1_84 = (var_1_12 - var_1_65);
 }
 var_1_90 = 0;
 var_1_92 = var_1_79;
 if (last_1_var_1_93) {
  var_1_93 = var_1_26;
 } else {
  var_1_93 = var_1_43;
 }
 var_1_94 = var_1_20;
 if (var_1_93) {
  var_1_97 = var_1_22;
 } else {
  var_1_97 = var_1_49;
 }
 if (var_1_42) {
  var_1_99 = var_1_3;
 }
 if (var_1_42) {
  var_1_101 = (var_1_65 + var_1_66);
 } else {
  var_1_101 = ((((var_1_39) < ((var_1_13 - ((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65)))))) ? (var_1_39) : ((var_1_13 - ((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65)))))));
 }
 unsigned long int stepLocal_15 = var_1_50;
 unsigned char stepLocal_14 = var_1_59;
 if (stepLocal_14 || (var_1_87 >= var_1_51)) {
  var_1_57 = (var_1_47 - 4.4);
 } else {
  if (((var_1_9 + var_1_3) - var_1_37) >= stepLocal_15) {
   var_1_57 = (var_1_47 - var_1_23);
  } else {
   if ((- var_1_102) > last_1_var_1_57) {
    var_1_57 = (var_1_48 + var_1_22);
   } else {
    var_1_57 = ((((var_1_22) > (var_1_58)) ? (var_1_22) : (var_1_58)));
   }
  }
 }
 unsigned char stepLocal_10 = var_1_25;
 if (var_1_93 && stepLocal_10) {
  var_1_41 = (var_1_93 && (var_1_42 || var_1_43));
 } else {
  var_1_41 = ((var_1_81 == var_1_34) || var_1_25);
 }
 if (! var_1_41) {
  var_1_1 = (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))) + ((((10) > (var_1_5)) ? (10) : (var_1_5))));
 } else {
  if ((((((31.25f) > (64.6f)) ? (31.25f) : (64.6f))) * var_1_97) > var_1_44) {
   if (var_1_97 > var_1_54) {
    var_1_1 = ((((8) > (16)) ? (8) : (16)));
   }
  } else {
   if (var_1_97 >= (var_1_44 * var_1_54)) {
    var_1_1 = (var_1_9 - ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))));
   }
  }
 }
 signed char stepLocal_13 = var_1_46;
 unsigned long int stepLocal_12 = - var_1_53;
 if (stepLocal_12 < var_1_30) {
  if (var_1_1 > stepLocal_13) {
   var_1_52 = (var_1_28 - (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - var_1_81));
  } else {
   var_1_52 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
  }
 }
 if (var_1_22 >= ((var_1_54 + var_1_44) + var_1_58)) {
  var_1_61 = (((((var_1_23) < (255.6f)) ? (var_1_23) : (255.6f))) - ((((var_1_48) > (128.75f)) ? (var_1_48) : (128.75f))));
 }
 if (var_1_57 > var_1_47) {
  var_1_55 = ((((((var_1_28 - var_1_13) - 256u)) < (var_1_9)) ? (((var_1_28 - var_1_13) - 256u)) : (var_1_9)));
 }
 if (var_1_24) {
  var_1_89 = var_1_36;
 } else {
  var_1_89 = var_1_73;
 }
 unsigned short int stepLocal_3 = var_1_9;
 if (((((var_1_21) > ((var_1_22 / 63.25f))) ? (var_1_21) : ((var_1_22 / 63.25f)))) >= var_1_23) {
  if (stepLocal_3 >= var_1_4) {
   if (var_1_25) {
    var_1_27 = ((var_1_28 - 64u) - ((1807711177u - var_1_3) - var_1_55));
   }
  } else {
   var_1_27 = (var_1_55 + var_1_4);
  }
 } else {
  if (! var_1_59) {
   var_1_27 = var_1_5;
  } else {
   var_1_27 = var_1_55;
  }
 }
 unsigned long int stepLocal_9 = var_1_13 + var_1_27;
 if (stepLocal_9 == (2u ^ var_1_31)) {
  if (var_1_102 > var_1_20) {
   var_1_38 = ((((var_1_13) < (var_1_39)) ? (var_1_13) : (var_1_39)));
  }
 } else {
  if (var_1_23 < var_1_21) {
   var_1_38 = var_1_13;
  }
 }
 if ((var_1_44 != var_1_54) && (var_1_26 || var_1_90)) {
  var_1_40 = (var_1_3 + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))));
 } else {
  if (var_1_39 > var_1_81) {
   var_1_40 = (var_1_34 + ((((50) > (var_1_3)) ? (50) : (var_1_3))));
  } else {
   var_1_40 = 0;
  }
 }
 if (var_1_93) {
  var_1_75 = ((((var_1_34) < (var_1_65)) ? (var_1_34) : (var_1_65)));
 } else {
  var_1_75 = (var_1_5 + ((((var_1_65) < (var_1_30)) ? (var_1_65) : (var_1_30))));
 }
 if (var_1_41) {
  var_1_95 = var_1_53;
 } else {
  var_1_95 = var_1_96;
 }
 unsigned short int stepLocal_21 = var_1_3;
 unsigned char stepLocal_20 = var_1_45;
 unsigned long int stepLocal_19 = var_1_52;
 unsigned long int stepLocal_18 = var_1_52;
 unsigned short int stepLocal_17 = var_1_9;
 unsigned long int stepLocal_16 = var_1_52;
 if (stepLocal_19 > last_1_var_1_67) {
  if (var_1_53 <= stepLocal_17) {
   var_1_67 = (var_1_68 - var_1_37);
  } else {
   if (stepLocal_18 == last_1_var_1_67) {
    var_1_67 = var_1_3;
   } else {
    var_1_67 = (var_1_28 - var_1_9);
   }
  }
 } else {
  if (var_1_93) {
   if (var_1_14 != stepLocal_16) {
    if (stepLocal_20 || var_1_25) {
     if ((var_1_21 - ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))) <= 50.25) {
      var_1_67 = (var_1_68 - ((((var_1_52) > (var_1_71)) ? (var_1_52) : (var_1_71))));
     } else {
      if (stepLocal_21 != var_1_68) {
       var_1_67 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
      } else {
       var_1_67 = (((((((((var_1_72 + var_1_34)) < (var_1_13)) ? ((var_1_72 + var_1_34)) : (var_1_13)))) < ((((((var_1_52) < (var_1_71)) ? (var_1_52) : (var_1_71))) + var_1_4))) ? ((((((var_1_72 + var_1_34)) < (var_1_13)) ? ((var_1_72 + var_1_34)) : (var_1_13)))) : ((((((var_1_52) < (var_1_71)) ? (var_1_52) : (var_1_71))) + var_1_4))));
      }
     }
    }
   } else {
    if (var_1_20 >= (- (200.1 + var_1_57))) {
     var_1_67 = (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + (var_1_37 - var_1_31));
    } else {
     var_1_67 = ((var_1_37 - var_1_50) + ((var_1_73 - last_1_var_1_67) + var_1_4));
    }
   }
  } else {
   var_1_67 = var_1_71;
  }
 }
 if (var_1_59) {
  var_1_98 = var_1_67;
 }
 signed char stepLocal_1 = var_1_11;
 unsigned long int stepLocal_0 = var_1_17 - var_1_4;
 if (stepLocal_0 > (var_1_3 + var_1_9)) {
  if (stepLocal_1 == (var_1_100 / ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) {
   if (var_1_59) {
    var_1_16 = (var_1_20 - (var_1_21 + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))));
   } else {
    if (var_1_44 <= var_1_61) {
     if (var_1_59) {
      var_1_16 = var_1_23;
     } else {
      var_1_16 = var_1_22;
     }
    } else {
     var_1_16 = var_1_21;
    }
   }
  }
 } else {
  var_1_16 = var_1_21;
 }
 unsigned long int stepLocal_29 = (((var_1_68) > (var_1_67)) ? (var_1_68) : (var_1_67));
 if (stepLocal_29 >= var_1_4) {
  var_1_88 = var_1_81;
 } else {
  var_1_88 = var_1_50;
 }
 unsigned long int stepLocal_27 = var_1_72 << var_1_99;
 if ((((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36))) + var_1_67) != stepLocal_27) {
  if (var_1_43) {
   var_1_85 = ((((var_1_39) > (var_1_65)) ? (var_1_39) : (var_1_65)));
  } else {
   var_1_85 = var_1_50;
  }
 } else {
  var_1_85 = (((((((var_1_14) > ((var_1_34 - var_1_13))) ? (var_1_14) : ((var_1_34 - var_1_13)))) < 0 ) ? -((((var_1_14) > ((var_1_34 - var_1_13))) ? (var_1_14) : ((var_1_34 - var_1_13)))) : ((((var_1_14) > ((var_1_34 - var_1_13))) ? (var_1_14) : ((var_1_34 - var_1_13))))));
 }
 if ((var_1_47 >= var_1_102) && var_1_93) {
  if ((128u * var_1_88) < var_1_34) {
   var_1_62 = (var_1_28 - var_1_9);
  }
 } else {
  if (var_1_48 != (((((var_1_20 / var_1_63)) > (var_1_102)) ? ((var_1_20 / var_1_63)) : (var_1_102)))) {
   if (((var_1_54 / var_1_63) * var_1_16) >= var_1_49) {
    var_1_62 = ((((var_1_28) > (((((var_1_3) < (var_1_50)) ? (var_1_3) : (var_1_50))))) ? (var_1_28) : (((((var_1_3) < (var_1_50)) ? (var_1_3) : (var_1_50))))));
   } else {
    var_1_62 = (((((var_1_88) > (var_1_13)) ? (var_1_88) : (var_1_13))) + var_1_3);
   }
  } else {
   if (0 <= var_1_101) {
    var_1_62 = ((((var_1_36) > (((((var_1_9) < (var_1_5)) ? (var_1_9) : (var_1_5))))) ? (var_1_36) : (((((var_1_9) < (var_1_5)) ? (var_1_9) : (var_1_5))))));
   } else {
    var_1_62 = var_1_50;
   }
  }
 }
 if (var_1_49 <= (var_1_48 - var_1_22)) {
  var_1_64 = var_1_14;
 } else {
  if (var_1_24 && var_1_45) {
   if (var_1_99 <= var_1_4) {
    var_1_64 = ((((-5) < (var_1_12)) ? (-5) : (var_1_12)));
   } else {
    if (var_1_52 < var_1_62) {
     var_1_64 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
    } else {
     var_1_64 = (var_1_65 + var_1_33);
    }
   }
  } else {
   var_1_64 = ((((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66)))) < (var_1_13)) ? (((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66)))) : (var_1_13)));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -128);
 assume_abort_if_not(var_1_18 <= 127);
 assume_abort_if_not(var_1_18 != 0);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 3221225470);
 assume_abort_if_not(var_1_28 <= 4294967294);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 1073741823);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -128);
 assume_abort_if_not(var_1_46 <= 127);
 assume_abort_if_not(var_1_46 != 0);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 6);
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= -922337.2036854766000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= -922337.2036854776000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
 assume_abort_if_not(var_1_63 != 0.0F);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 63);
 var_1_66 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_66 >= -63);
 assume_abort_if_not(var_1_66 <= 63);
 var_1_68 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_68 >= 2147483647);
 assume_abort_if_not(var_1_68 <= 4294967294);
 var_1_71 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 2147483647);
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 2147483647);
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 536870912);
 assume_abort_if_not(var_1_73 <= 1073741824);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 127);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 254);
 var_1_80 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_80 >= 127);
 assume_abort_if_not(var_1_80 <= 254);
 var_1_96 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_96 >= 0);
 assume_abort_if_not(var_1_96 <= 4294967294);
 var_1_103 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_103 >= -461168.6018427383000e+13F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 4611686.018427383000e+12F && var_1_103 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_102 = var_1_102;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((! var_1_41) ? (var_1_1 == ((unsigned short int) (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))) + ((((10) > (var_1_5)) ? (10) : (var_1_5)))))) : (((((((31.25f) > (64.6f)) ? (31.25f) : (64.6f))) * var_1_97) > var_1_44) ? ((var_1_97 > var_1_54) ? (var_1_1 == ((unsigned short int) ((((8) > (16)) ? (8) : (16))))) : 1) : ((var_1_97 >= (var_1_44 * var_1_54)) ? (var_1_1 == ((unsigned short int) (var_1_9 - ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))))) : 1))) && ((var_1_4 <= var_1_3) ? ((1 > ((((((((var_1_9) < (-256)) ? (var_1_9) : (-256)))) > (var_1_4)) ? (((((var_1_9) < (-256)) ? (var_1_9) : (-256)))) : (var_1_4)))) ? (var_1_10 == ((signed char) (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) - var_1_13))) : (var_1_10 == ((signed char) (((((var_1_14 + -16)) < (var_1_12)) ? ((var_1_14 + -16)) : (var_1_12)))))) : ((var_1_59 && var_1_24) ? (var_1_10 == ((signed char) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_10 == ((signed char) (var_1_11 - var_1_13)))))) && (((var_1_17 - var_1_4) > (var_1_3 + var_1_9)) ? ((var_1_11 == (var_1_100 / ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) ? (var_1_59 ? (var_1_16 == ((double) (var_1_20 - (var_1_21 + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))))))) : ((var_1_44 <= var_1_61) ? (var_1_59 ? (var_1_16 == ((double) var_1_23)) : (var_1_16 == ((double) var_1_22))) : (var_1_16 == ((double) var_1_21)))) : 1) : (var_1_16 == ((double) var_1_21)))) && ((last_1_var_1_59 || last_1_var_1_41) ? (var_1_24 == ((unsigned char) (var_1_25 && ((var_1_12 >= var_1_17) || var_1_26)))) : 1)) && ((((((var_1_21) > ((var_1_22 / 63.25f))) ? (var_1_21) : ((var_1_22 / 63.25f)))) >= var_1_23) ? ((var_1_9 >= var_1_4) ? (var_1_25 ? (var_1_27 == ((unsigned long int) ((var_1_28 - 64u) - ((1807711177u - var_1_3) - var_1_55)))) : 1) : (var_1_27 == ((unsigned long int) (var_1_55 + var_1_4)))) : ((! var_1_59) ? (var_1_27 == ((unsigned long int) var_1_5)) : (var_1_27 == ((unsigned long int) var_1_55))))) && ((var_1_11 >= var_1_5) ? (var_1_29 == ((unsigned short int) ((((var_1_4) < (((var_1_13 + var_1_30) + 128))) ? (var_1_4) : (((var_1_13 + var_1_30) + 128)))))) : ((var_1_20 < var_1_23) ? (var_1_29 == ((unsigned short int) (var_1_31 + var_1_3))) : ((99.2f > ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23)))) ? ((var_1_54 <= var_1_20) ? (((- (- 128)) > ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) ? (var_1_29 == ((unsigned short int) (var_1_9 - var_1_4))) : (var_1_29 == ((unsigned short int) (var_1_3 + (var_1_13 + var_1_30))))) : (var_1_29 == ((unsigned short int) var_1_31))) : (var_1_29 == ((unsigned short int) var_1_5)))))) && (((128 - var_1_13) <= (var_1_4 - var_1_31)) ? (var_1_32 == ((signed char) (((((var_1_14 + var_1_33)) > ((var_1_11 - var_1_13))) ? ((var_1_14 + var_1_33)) : ((var_1_11 - var_1_13)))))) : (var_1_32 == ((signed char) ((((var_1_13 - var_1_34) < 0 ) ? -(var_1_13 - var_1_34) : (var_1_13 - var_1_34))))))) && ((0 == (var_1_51 * var_1_28)) ? (var_1_35 == ((signed short int) ((var_1_13 + 16) + var_1_12))) : 1)) && ((var_1_9 > (last_1_var_1_62 + var_1_34)) ? (last_1_var_1_24 ? (var_1_36 == ((unsigned long int) (var_1_28 - var_1_5))) : (var_1_36 == ((unsigned long int) (var_1_28 - (var_1_37 - var_1_31))))) : (var_1_36 == ((unsigned long int) 8u)))) && (((var_1_13 + var_1_27) == (2u ^ var_1_31)) ? ((var_1_102 > var_1_20) ? (var_1_38 == ((signed char) ((((var_1_13) < (var_1_39)) ? (var_1_13) : (var_1_39))))) : 1) : ((var_1_23 < var_1_21) ? (var_1_38 == ((signed char) var_1_13)) : 1))) && (((var_1_44 != var_1_54) && (var_1_26 || var_1_90)) ? (var_1_40 == ((unsigned short int) (var_1_3 + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) : ((var_1_39 > var_1_81) ? (var_1_40 == ((unsigned short int) (var_1_34 + ((((50) > (var_1_3)) ? (50) : (var_1_3)))))) : (var_1_40 == ((unsigned short int) 0))))) && ((var_1_93 && var_1_25) ? (var_1_41 == ((unsigned char) (var_1_93 && (var_1_42 || var_1_43)))) : (var_1_41 == ((unsigned char) ((var_1_81 == var_1_34) || var_1_25))))) && ((((32.5f + var_1_21) - var_1_23) < (last_1_var_1_97 + (last_1_var_1_44 * last_1_var_1_54))) ? ((((var_1_5 << last_1_var_1_75) > last_1_var_1_62) && var_1_26) ? ((var_1_33 > ((last_1_var_1_36 / var_1_19) % ((((var_1_18) > (var_1_46)) ? (var_1_18) : (var_1_46))))) ? ((last_1_var_1_44 >= (- var_1_22)) ? (var_1_44 == ((float) (((2.9739596464057037E18f - var_1_47) - (var_1_48 + var_1_49)) + var_1_21))) : 1) : ((var_1_46 < ((var_1_12 & last_1_var_1_89) * (var_1_13 >> var_1_50))) ? (var_1_44 == ((float) (var_1_21 - var_1_22))) : 1)) : 1) : 1)) && ((var_1_87 >= (- last_1_var_1_51)) ? (var_1_51 == ((unsigned long int) (var_1_28 - var_1_4))) : 1)) && (((- var_1_53) < var_1_30) ? ((var_1_1 > var_1_46) ? (var_1_52 == ((unsigned long int) (var_1_28 - (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - var_1_81)))) : (var_1_52 == ((unsigned long int) ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))))) : 1)) && ((var_1_46 < var_1_28) ? (var_1_53 == ((unsigned long int) ((var_1_50 + var_1_5) + 64u))) : 1)) && (var_1_25 ? ((var_1_48 < var_1_23) ? (var_1_54 == ((double) (((((((((var_1_48 + var_1_49)) > (1.9)) ? ((var_1_48 + var_1_49)) : (1.9)))) > (var_1_20)) ? ((((((var_1_48 + var_1_49)) > (1.9)) ? ((var_1_48 + var_1_49)) : (1.9)))) : (var_1_20))))) : (((var_1_30 * (var_1_31 % var_1_9)) != ((8 >> var_1_50) * ((((last_1_var_1_36) < 0 ) ? -(last_1_var_1_36) : (last_1_var_1_36))))) ? (var_1_54 == ((double) ((var_1_49 - var_1_22) + var_1_21))) : (((var_1_11 ^ last_1_var_1_87) > last_1_var_1_91) ? (var_1_54 == ((double) var_1_20)) : (var_1_54 == ((double) var_1_23))))) : 1)) && ((var_1_57 > var_1_47) ? (var_1_55 == ((unsigned long int) ((((((var_1_28 - var_1_13) - 256u)) < (var_1_9)) ? (((var_1_28 - var_1_13) - 256u)) : (var_1_9))))) : 1)) && (var_1_56 == ((float) (var_1_23 + var_1_48)))) && ((var_1_59 || (var_1_87 >= var_1_51)) ? (var_1_57 == ((double) (var_1_47 - 4.4))) : ((((var_1_9 + var_1_3) - var_1_37) >= var_1_50) ? (var_1_57 == ((double) (var_1_47 - var_1_23))) : (((- var_1_102) > last_1_var_1_57) ? (var_1_57 == ((double) (var_1_48 + var_1_22))) : (var_1_57 == ((double) ((((var_1_22) > (var_1_58)) ? (var_1_22) : (var_1_58))))))))) && ((last_1_var_1_55 >= last_1_var_1_67) ? ((var_1_39 >= var_1_37) ? ((last_1_var_1_24 || var_1_26) ? (var_1_59 == ((unsigned char) (var_1_43 || (! (! var_1_42))))) : (var_1_59 == ((unsigned char) var_1_43))) : 1) : (var_1_59 == ((unsigned char) (((var_1_58 > var_1_22) && (64 < last_1_var_1_53)) && (var_1_43 && var_1_42)))))) && ((var_1_22 >= ((var_1_54 + var_1_44) + var_1_58)) ? (var_1_61 == ((float) (((((var_1_23) < (255.6f)) ? (var_1_23) : (255.6f))) - ((((var_1_48) > (128.75f)) ? (var_1_48) : (128.75f)))))) : 1)) && (((var_1_47 >= var_1_102) && var_1_93) ? (((128u * var_1_88) < var_1_34) ? (var_1_62 == ((unsigned long int) (var_1_28 - var_1_9))) : 1) : ((var_1_48 != (((((var_1_20 / var_1_63)) > (var_1_102)) ? ((var_1_20 / var_1_63)) : (var_1_102)))) ? ((((var_1_54 / var_1_63) * var_1_16) >= var_1_49) ? (var_1_62 == ((unsigned long int) ((((var_1_28) > (((((var_1_3) < (var_1_50)) ? (var_1_3) : (var_1_50))))) ? (var_1_28) : (((((var_1_3) < (var_1_50)) ? (var_1_3) : (var_1_50)))))))) : (var_1_62 == ((unsigned long int) (((((var_1_88) > (var_1_13)) ? (var_1_88) : (var_1_13))) + var_1_3)))) : ((0 <= var_1_101) ? (var_1_62 == ((unsigned long int) ((((var_1_36) > (((((var_1_9) < (var_1_5)) ? (var_1_9) : (var_1_5))))) ? (var_1_36) : (((((var_1_9) < (var_1_5)) ? (var_1_9) : (var_1_5)))))))) : (var_1_62 == ((unsigned long int) var_1_50)))))) && ((var_1_49 <= (var_1_48 - var_1_22)) ? (var_1_64 == ((signed char) var_1_14)) : ((var_1_24 && var_1_45) ? ((var_1_99 <= var_1_4) ? (var_1_64 == ((signed char) ((((-5) < (var_1_12)) ? (-5) : (var_1_12))))) : ((var_1_52 < var_1_62) ? (var_1_64 == ((signed char) ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) : (var_1_64 == ((signed char) (var_1_65 + var_1_33))))) : (var_1_64 == ((signed char) ((((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66)))) < (var_1_13)) ? (((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66)))) : (var_1_13)))))))) && ((var_1_52 > last_1_var_1_67) ? ((var_1_53 <= var_1_9) ? (var_1_67 == ((unsigned long int) (var_1_68 - var_1_37))) : ((var_1_52 == last_1_var_1_67) ? (var_1_67 == ((unsigned long int) var_1_3)) : (var_1_67 == ((unsigned long int) (var_1_28 - var_1_9))))) : (var_1_93 ? ((var_1_14 != var_1_52) ? ((var_1_45 || var_1_25) ? (((var_1_21 - ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)))) <= 50.25) ? (var_1_67 == ((unsigned long int) (var_1_68 - ((((var_1_52) > (var_1_71)) ? (var_1_52) : (var_1_71)))))) : ((var_1_3 != var_1_68) ? (var_1_67 == ((unsigned long int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_67 == ((unsigned long int) (((((((((var_1_72 + var_1_34)) < (var_1_13)) ? ((var_1_72 + var_1_34)) : (var_1_13)))) < ((((((var_1_52) < (var_1_71)) ? (var_1_52) : (var_1_71))) + var_1_4))) ? ((((((var_1_72 + var_1_34)) < (var_1_13)) ? ((var_1_72 + var_1_34)) : (var_1_13)))) : ((((((var_1_52) < (var_1_71)) ? (var_1_52) : (var_1_71))) + var_1_4)))))))) : 1) : ((var_1_20 >= (- (200.1 + var_1_57))) ? (var_1_67 == ((unsigned long int) (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + (var_1_37 - var_1_31)))) : (var_1_67 == ((unsigned long int) ((var_1_37 - var_1_50) + ((var_1_73 - last_1_var_1_67) + var_1_4)))))) : (var_1_67 == ((unsigned long int) var_1_71))))) && ((var_1_46 <= 32) ? (var_1_74 == ((unsigned char) (16 + (100 - var_1_65)))) : (var_1_74 == ((unsigned char) ((var_1_50 + var_1_65) + var_1_34))))) && (var_1_93 ? (var_1_75 == ((unsigned short int) ((((var_1_34) < (var_1_65)) ? (var_1_34) : (var_1_65))))) : (var_1_75 == ((unsigned short int) (var_1_5 + ((((var_1_65) < (var_1_30)) ? (var_1_65) : (var_1_30)))))))) && ((var_1_45 && var_1_42) ? (var_1_59 ? (((var_1_81 * -1000000) < var_1_14) ? (var_1_77 == ((unsigned char) var_1_34)) : (var_1_45 ? (var_1_77 == ((unsigned char) var_1_65)) : (var_1_77 == ((unsigned char) (((((var_1_78 + var_1_65)) > (var_1_79)) ? ((var_1_78 + var_1_65)) : (var_1_79))))))) : (var_1_77 == ((unsigned char) (var_1_80 - (var_1_50 + var_1_65))))) : 1)) && (((last_1_var_1_102 >= var_1_20) && (var_1_26 && (var_1_5 > var_1_28))) ? (var_1_81 == ((signed long int) (var_1_30 - (var_1_78 + last_1_var_1_81)))) : ((var_1_78 != last_1_var_1_81) ? (var_1_81 == ((signed long int) ((((var_1_30) < (var_1_18)) ? (var_1_30) : (var_1_18))))) : 1))) && ((var_1_58 <= var_1_102) ? (var_1_84 == ((signed char) (((((10) < (var_1_66)) ? (10) : (var_1_66))) + var_1_65))) : (var_1_84 == ((signed char) (var_1_12 - var_1_65))))) && (((((((var_1_28) < (var_1_36)) ? (var_1_28) : (var_1_36))) + var_1_67) != (var_1_72 << var_1_99)) ? (var_1_43 ? (var_1_85 == ((signed char) ((((var_1_39) > (var_1_65)) ? (var_1_39) : (var_1_65))))) : (var_1_85 == ((signed char) var_1_50))) : (var_1_85 == ((signed char) (((((((var_1_14) > ((var_1_34 - var_1_13))) ? (var_1_14) : ((var_1_34 - var_1_13)))) < 0 ) ? -((((var_1_14) > ((var_1_34 - var_1_13))) ? (var_1_14) : ((var_1_34 - var_1_13)))) : ((((var_1_14) > ((var_1_34 - var_1_13))) ? (var_1_14) : ((var_1_34 - var_1_13)))))))))) && ((-16 >= (var_1_3 - var_1_5)) ? (var_1_87 == ((unsigned long int) ((((((((var_1_72) < (var_1_13)) ? (var_1_72) : (var_1_13)))) > (var_1_5)) ? (((((var_1_72) < (var_1_13)) ? (var_1_72) : (var_1_13)))) : (var_1_5))))) : (var_1_87 == ((unsigned long int) ((((((((8u) < 0 ) ? -(8u) : (8u)))) < ((var_1_28 - last_1_var_1_98))) ? (((((8u) < 0 ) ? -(8u) : (8u)))) : ((var_1_28 - last_1_var_1_98)))))))) && ((((((var_1_68) > (var_1_67)) ? (var_1_68) : (var_1_67))) >= var_1_4) ? (var_1_88 == ((unsigned long int) var_1_81)) : (var_1_88 == ((unsigned long int) var_1_50)))) && (var_1_24 ? (var_1_89 == ((signed long int) var_1_36)) : (var_1_89 == ((signed long int) var_1_73)))) && (var_1_90 == ((unsigned char) 0))) && (var_1_24 ? (var_1_91 == ((signed long int) var_1_3)) : 1)) && (var_1_92 == ((unsigned char) var_1_79))) && (last_1_var_1_93 ? (var_1_93 == ((unsigned char) var_1_26)) : (var_1_93 == ((unsigned char) var_1_43)))) && (var_1_94 == ((double) var_1_20))) && (var_1_41 ? (var_1_95 == ((unsigned long int) var_1_53)) : (var_1_95 == ((unsigned long int) var_1_96)))) && (var_1_93 ? (var_1_97 == ((float) var_1_22)) : (var_1_97 == ((float) var_1_49)))) && (var_1_59 ? (var_1_98 == ((signed short int) var_1_67)) : 1)) && (var_1_42 ? (var_1_99 == ((unsigned long int) var_1_3)) : 1)) && (var_1_100 == ((signed long int) var_1_51))) && (var_1_42 ? (var_1_101 == ((signed char) (var_1_65 + var_1_66))) : (var_1_101 == ((signed char) ((((var_1_39) < ((var_1_13 - ((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65)))))) ? (var_1_39) : ((var_1_13 - ((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65))))))))))) && ((last_1_var_1_62 <= (var_1_65 / var_1_46)) ? (var_1_102 == ((double) ((((((var_1_22 - var_1_23) + var_1_103)) > (((((var_1_47 + var_1_21) < 0 ) ? -(var_1_47 + var_1_21) : (var_1_47 + var_1_21))))) ? (((var_1_22 - var_1_23) + var_1_103)) : (((((var_1_47 + var_1_21) < 0 ) ? -(var_1_47 + var_1_21) : (var_1_47 + var_1_21)))))))) : (var_1_102 == ((double) 127.85)))
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
