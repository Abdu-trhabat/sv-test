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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(unsigned long int);
float functionized1(void);
void functionized2(signed long int, float, signed long int, signed long int);
void functionized3(signed long int, signed long int, unsigned long int, unsigned long int, signed short int);
void functionized4(unsigned char, unsigned char, unsigned char);
void functionized5(double);
signed long int functionized6(unsigned char);
unsigned char functionized7(void);
unsigned char isInitial = 0;
float var_1_1 = 5.2;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 5;
unsigned long int var_1_4 = 5;
float var_1_5 = 255.875;
float var_1_6 = 1.75;
float var_1_7 = 16.25;
float var_1_8 = 0.44999999999999996;
float var_1_9 = 3.6;
signed long int var_1_10 = 1506006796;
signed long int var_1_11 = 500;
signed long int var_1_12 = 2;
signed short int var_1_13 = 0;
signed short int var_1_14 = 32;
signed short int var_1_15 = 0;
signed short int var_1_16 = 8;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = 9.5;
double var_1_22 = 128.8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 0;
double var_1_26 = 24.5;
double var_1_27 = 3.5;
unsigned char functionized0(unsigned long int functionized0_localFunctionVar0) {
 return ((var_1_2 ^ functionized0_localFunctionVar0) != var_1_4);
}
float functionized1(void) {
 return (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) - 32.4f);
}
void functionized2(signed long int functionized2_localFunctionVar0, float functionized2_localFunctionVar1, signed long int functionized2_localFunctionVar2, signed long int functionized2_localFunctionVar3) {
 if (((functionized2_localFunctionVar2 - functionized2_localFunctionVar0) - functionized2_localFunctionVar3) < var_1_2) {
  var_1_9 = functionized2_localFunctionVar1;
 }
}
void functionized3(signed long int functionized3_localFunctionVar0, signed long int functionized3_localFunctionVar1, unsigned long int functionized3_localFunctionVar2, unsigned long int functionized3_localFunctionVar3, signed short int functionized3_localFunctionVar4) {
 if ((functionized3_localFunctionVar1 ^ functionized3_localFunctionVar2) >= (functionized3_localFunctionVar3 | var_1_12)) {
  if (functionized3_localFunctionVar1 != (~ functionized3_localFunctionVar0)) {
   var_1_13 = (var_1_14 + ((((functionized3_localFunctionVar4) > (var_1_16)) ? (functionized3_localFunctionVar4) : (var_1_16))));
  } else {
   var_1_13 = var_1_14;
  }
 }
}
void functionized4(unsigned char functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, unsigned char functionized4_localFunctionVar2) {
 if (! functionized4_localFunctionVar2) {
  var_1_17 = functionized4_localFunctionVar1;
 } else {
  var_1_17 = ((! functionized4_localFunctionVar1) && functionized4_localFunctionVar0);
 }
}
void functionized5(double functionized5_localFunctionVar0) {
 var_1_21 = (1.000000005E8 - (7.46417232161781E18 - functionized5_localFunctionVar0));
}
signed long int functionized6(unsigned char functionized6_localFunctionVar0) {
 return (functionized6_localFunctionVar0 - 16);
}
unsigned char functionized7(void) {
 return (var_1_2 < var_1_4);
}
void initially(void) {
}
void step(void) {
 if (functionized0(var_1_3)) {
  var_1_1 = (var_1_5 + var_1_6);
 } else {
  var_1_1 = functionized1();
 }
 functionized2(var_1_11, var_1_8, var_1_10, var_1_12);
 functionized3(var_1_11, var_1_10, var_1_2, var_1_4, var_1_15);
 functionized4(var_1_20, var_1_19, var_1_18);
 functionized5(var_1_22);
 if (var_1_18 || var_1_19) {
  if (functionized6(var_1_24) >= var_1_14) {
   if (functionized7()) {
    var_1_23 = var_1_25;
   }
  } else {
   var_1_23 = var_1_25;
  }
 } else {
  var_1_23 = var_1_25;
 }
 if (-8 < var_1_13) {
  var_1_26 = ((((var_1_22) > (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27)))))) ? (var_1_22) : (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27)))))));
 } else {
  var_1_26 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741824);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -16383);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -16383);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -16383);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 255);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 ^ var_1_3) != var_1_4) ? (var_1_1 == ((float) (var_1_5 + var_1_6))) : (var_1_1 == ((float) (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) - 32.4f)))) && ((((var_1_10 - var_1_11) - var_1_12) < var_1_2) ? (var_1_9 == ((float) var_1_8)) : 1)) && (((var_1_10 ^ var_1_2) >= (var_1_4 | var_1_12)) ? ((var_1_10 != (~ var_1_11)) ? (var_1_13 == ((signed short int) (var_1_14 + ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))))) : (var_1_13 == ((signed short int) var_1_14))) : 1)) && ((! var_1_18) ? (var_1_17 == ((unsigned char) var_1_19)) : (var_1_17 == ((unsigned char) ((! var_1_19) && var_1_20))))) && (var_1_21 == ((double) (1.000000005E8 - (7.46417232161781E18 - var_1_22))))) && ((var_1_18 || var_1_19) ? (((var_1_24 - 16) >= var_1_14) ? ((var_1_2 < var_1_4) ? (var_1_23 == ((unsigned char) var_1_25)) : 1) : (var_1_23 == ((unsigned char) var_1_25))) : (var_1_23 == ((unsigned char) var_1_25)))) && ((-8 < var_1_13) ? (var_1_26 == ((double) ((((var_1_22) > (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27)))))) ? (var_1_22) : (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27))))))))) : (var_1_26 == ((double) var_1_8)))
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
