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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
signed long int functionized0(signed char);
unsigned char functionized1(signed char);
unsigned char functionized2(unsigned char, unsigned char);
unsigned char functionized3(unsigned char, unsigned char, signed short int);
void functionized4(signed char, unsigned char, signed short int, signed short int);
unsigned char functionized5(void);
unsigned char functionized6(signed short int);
unsigned char functionized7(signed short int, signed short int);
void functionized8(unsigned char);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -200;
signed short int var_1_4 = 2;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
float var_1_9 = 9999999999.5;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
signed long int functionized0(signed char functionized0_localFunctionVar0) {
 return ((((functionized0_localFunctionVar0) < 0 ) ? -(functionized0_localFunctionVar0) : (functionized0_localFunctionVar0)));
}
unsigned char functionized1(signed char functionized1_localFunctionVar0) {
 return (functionized1_localFunctionVar0 >= -2);
}
unsigned char functionized2(unsigned char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
 return ((49.5f <= var_1_9) && (functionized2_localFunctionVar1 && functionized2_localFunctionVar0));
}
unsigned char functionized3(unsigned char functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, signed short int functionized3_localFunctionVar2) {
 return (functionized3_localFunctionVar0 >= (functionized3_localFunctionVar2 / functionized3_localFunctionVar1));
}
void functionized4(signed char functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1, signed short int functionized4_localFunctionVar2, signed short int functionized4_localFunctionVar3) {
 if (functionized4_localFunctionVar2 != ((((((((functionized4_localFunctionVar3) > (var_1_6)) ? (functionized4_localFunctionVar3) : (var_1_6)))) > (functionized4_localFunctionVar0)) ? (((((functionized4_localFunctionVar3) > (var_1_6)) ? (functionized4_localFunctionVar3) : (var_1_6)))) : (functionized4_localFunctionVar0)))) {
  var_1_13 = functionized4_localFunctionVar1;
 } else {
  var_1_13 = var_1_6;
 }
}
unsigned char functionized5(void) {
 return (((((var_1_13) < (8)) ? (var_1_13) : (8))) <= var_1_5);
}
unsigned char functionized6(signed short int functionized6_localFunctionVar0) {
 return (var_1_13 <= functionized6_localFunctionVar0);
}
unsigned char functionized7(signed short int functionized7_localFunctionVar0, signed short int functionized7_localFunctionVar1) {
 return (functionized7_localFunctionVar0 > functionized7_localFunctionVar1);
}
void functionized8(unsigned char functionized8_localFunctionVar0) {
 if (var_1_9 <= var_1_15) {
  var_1_19 = (functionized8_localFunctionVar0 || var_1_20);
 }
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  if (functionized0(var_1_5) >= var_1_3) {
   var_1_1 = var_1_5;
  }
 }
 if (functionized1(var_1_5)) {
  var_1_6 = (var_1_7 - 100);
 }
 if (functionized2(var_1_10, var_1_2)) {
  if (var_1_1 < var_1_7) {
   var_1_8 = (var_1_2 || var_1_11);
  } else {
   var_1_8 = var_1_11;
  }
 } else {
  var_1_8 = var_1_12;
 }
 if (functionized3(var_1_6, var_1_7, var_1_1)) {
  functionized4(var_1_5, var_1_7, var_1_1, var_1_3);
 } else {
  var_1_13 = var_1_3;
 }
 if (functionized5() || var_1_2) {
  if (functionized6(var_1_3)) {
   var_1_14 = (var_1_15 + var_1_16);
  } else {
   var_1_14 = var_1_16;
  }
 } else {
  var_1_14 = var_1_16;
 }
 if (functionized7(var_1_4, var_1_3)) {
  var_1_17 = ((((25) > ((var_1_6 + var_1_18))) ? (25) : ((var_1_6 + var_1_18))));
 }
 functionized8(var_1_12);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32767);
 assume_abort_if_not(var_1_3 <= 32766);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((signed short int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) >= var_1_3) ? (var_1_1 == ((signed short int) var_1_5)) : 1)) && ((var_1_5 >= -2) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_9) && (var_1_2 && var_1_10)) ? ((var_1_1 < var_1_7) ? (var_1_8 == ((unsigned char) (var_1_2 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((var_1_6 >= (var_1_1 / var_1_7)) ? ((var_1_1 != ((((((((var_1_3) > (var_1_6)) ? (var_1_3) : (var_1_6)))) > (var_1_5)) ? (((((var_1_3) > (var_1_6)) ? (var_1_3) : (var_1_6)))) : (var_1_5)))) ? (var_1_13 == ((signed short int) var_1_7)) : (var_1_13 == ((signed short int) var_1_6))) : (var_1_13 == ((signed short int) var_1_3)))) && (((((((var_1_13) < (8)) ? (var_1_13) : (8))) <= var_1_5) || var_1_2) ? ((var_1_13 <= var_1_3) ? (var_1_14 == ((float) (var_1_15 + var_1_16))) : (var_1_14 == ((float) var_1_16))) : (var_1_14 == ((float) var_1_16)))) && ((var_1_4 > var_1_3) ? (var_1_17 == ((unsigned short int) ((((25) > ((var_1_6 + var_1_18))) ? (25) : ((var_1_6 + var_1_18)))))) : 1)) && ((var_1_9 <= var_1_15) ? (var_1_19 == ((unsigned char) (var_1_12 || var_1_20))) : 1)
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
