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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned short int, unsigned long int);
void functionized1(signed short int);
unsigned char functionized2(unsigned long int);
unsigned char functionized3(unsigned short int);
unsigned long int functionized4(unsigned short int, unsigned char, unsigned long int);
unsigned long int functionized5(unsigned long int);
unsigned long int functionized6(unsigned short int, unsigned short int, unsigned long int, unsigned char);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned long int var_1_2 = 25;
unsigned long int var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 10;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 10;
signed short int var_1_8 = -10;
signed short int var_1_9 = -16;
unsigned long int var_1_10 = 200;
float var_1_11 = 500.6;
float var_1_12 = 256.6;
float var_1_13 = 10000000000.45;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 10;
unsigned short int var_1_16 = 49637;
unsigned long int var_1_17 = 3843750782;
unsigned long int var_1_18 = 3466749644;
unsigned long int var_1_19 = 1243012029;
float var_1_20 = 128.6;
float var_1_21 = 63.8;
unsigned long int var_1_22 = 25;
unsigned long int var_1_23 = 5;
void functionized0(unsigned short int functionized0_localFunctionVar0, unsigned long int localFunctionVar1) {
 if ((var_1_2 <= var_1_3) && var_1_4) {
  if ((var_1_3 >> functionized0_localFunctionVar0) <= localFunctionVar1) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = 0;
  }
 }
}
void functionized1(signed short int functionized1_localFunctionVar0) {
 if (var_1_1 || var_1_6) {
  var_1_7 = ((((var_1_5) < (functionized1_localFunctionVar0)) ? (var_1_5) : (functionized1_localFunctionVar0)));
 }
}
unsigned char functionized2(unsigned long int functionized2_localFunctionVar0) {
 return (var_1_1 && (functionized2_localFunctionVar0 != var_1_5));
}
unsigned char functionized3(unsigned short int functionized3_localFunctionVar0) {
 return ((((((~ 0u)) > (var_1_10)) ? ((~ 0u)) : (var_1_10))) > functionized3_localFunctionVar0);
}
unsigned long int functionized4(unsigned short int functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, unsigned long int localFunctionVar2) {
 return ((((((var_1_5 + functionized4_localFunctionVar0) + localFunctionVar2)) < (functionized4_localFunctionVar1)) ? (((var_1_5 + functionized4_localFunctionVar0) + localFunctionVar2)) : (functionized4_localFunctionVar1)));
}
unsigned long int functionized5(unsigned long int functionized5_localFunctionVar0) {
 return (((((var_1_17) > (functionized5_localFunctionVar0)) ? (var_1_17) : (functionized5_localFunctionVar0))) - var_1_5);
}
unsigned long int functionized6(unsigned short int functionized6_localFunctionVar0, unsigned short int functionized6_localFunctionVar1, unsigned long int functionized6_localFunctionVar2, unsigned char functionized6_localFunctionVar3) {
 return (functionized6_localFunctionVar3 + (functionized6_localFunctionVar2 - ((((functionized6_localFunctionVar0) < (functionized6_localFunctionVar1)) ? (functionized6_localFunctionVar0) : (functionized6_localFunctionVar1)))));
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_5, 64u);
 functionized1(var_1_8);
 if (var_1_6) {
  var_1_9 = var_1_5;
 } else {
  if (functionized2(var_1_3)) {
   var_1_9 = var_1_5;
  }
 }
 if ((var_1_11 - var_1_12) >= var_1_13) {
  if (var_1_1) {
   var_1_10 = var_1_5;
  }
 }
 if (functionized3(var_1_5)) {
  var_1_14 = var_1_5;
 }
 if (var_1_5 < var_1_3) {
  if (var_1_6 && var_1_4) {
   if ((var_1_16 - 10) == var_1_9) {
    var_1_15 = (functionized4(var_1_16, var_1_14, 10u));
   } else {
    var_1_15 = (functionized5(var_1_18) - var_1_14);
   }
  } else {
   var_1_15 = (functionized6(var_1_16, var_1_5, var_1_19, var_1_14));
  }
 }
 var_1_20 = var_1_21;
 var_1_22 = 16u;
 var_1_23 = var_1_18;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 31);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32767);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65535);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 3221225470);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 3221225470);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((var_1_2 <= var_1_3) && var_1_4) ? (((var_1_3 >> var_1_5) <= 64u) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) 0))) : 1) && ((var_1_1 || var_1_6) ? (var_1_7 == ((signed short int) ((((var_1_5) < (var_1_8)) ? (var_1_5) : (var_1_8))))) : 1)) && (var_1_6 ? (var_1_9 == ((signed short int) var_1_5)) : ((var_1_1 && (var_1_3 != var_1_5)) ? (var_1_9 == ((signed short int) var_1_5)) : 1))) && (((var_1_11 - var_1_12) >= var_1_13) ? (var_1_1 ? (var_1_10 == ((unsigned long int) var_1_5)) : 1) : 1)) && (((((((~ 0u)) > (var_1_10)) ? ((~ 0u)) : (var_1_10))) > var_1_5) ? (var_1_14 == ((unsigned char) var_1_5)) : 1)) && ((var_1_5 < var_1_3) ? ((var_1_6 && var_1_4) ? (((var_1_16 - 10) == var_1_9) ? (var_1_15 == ((unsigned long int) ((((((var_1_5 + var_1_16) + 10u)) < (var_1_14)) ? (((var_1_5 + var_1_16) + 10u)) : (var_1_14))))) : (var_1_15 == ((unsigned long int) ((((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_5) - var_1_14)))) : (var_1_15 == ((unsigned long int) (var_1_14 + (var_1_19 - ((((var_1_16) < (var_1_5)) ? (var_1_16) : (var_1_5)))))))) : 1)) && (var_1_20 == ((float) var_1_21))) && (var_1_22 == ((unsigned long int) 16u))) && (var_1_23 == ((unsigned long int) var_1_18))
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
