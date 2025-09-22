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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
signed long int functionized0(void);
void functionized1(signed short int);
unsigned char functionized2(signed long int, signed short int);
signed long int functionized3(void);
signed long int functionized4(unsigned short int, signed short int);
unsigned char functionized5(unsigned long int);
unsigned char isInitial = 0;
signed long int var_1_1 = -16;
signed short int var_1_2 = -200;
signed short int var_1_3 = 16;
signed short int var_1_4 = 25;
signed short int var_1_5 = -16;
signed short int var_1_6 = -10;
signed long int var_1_7 = 64;
signed long int var_1_8 = 2;
double var_1_9 = 24.25;
double var_1_10 = 255.5;
double var_1_11 = 1.875;
double var_1_12 = 100.6;
signed short int var_1_13 = 100;
signed short int var_1_14 = 8;
signed char var_1_15 = 25;
signed char var_1_16 = 4;
signed char var_1_17 = -10;
signed char var_1_18 = 1;
signed char var_1_19 = 25;
signed char var_1_20 = -5;
unsigned short int var_1_21 = 41146;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 5;
unsigned short int var_1_24 = 5;
unsigned short int var_1_25 = 5;
unsigned char var_1_26 = 128;
signed long int var_1_27 = 10;
unsigned long int var_1_28 = 2263571286;
unsigned char var_1_29 = 16;
signed long int functionized0(void) {
 return ((var_1_3 - var_1_4) / ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))));
}
void functionized1(signed short int functionized1_localFunctionVar0) {
 if (functionized1_localFunctionVar0 > var_1_5) {
  var_1_8 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
 }
}
unsigned char functionized2(signed long int functionized2_localFunctionVar0, signed short int functionized2_localFunctionVar1) {
 return (functionized2_localFunctionVar1 > ((((functionized2_localFunctionVar0) > (-8)) ? (functionized2_localFunctionVar0) : (-8))));
}
signed long int functionized3(void) {
 return ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)));
}
signed long int functionized4(unsigned short int functionized4_localFunctionVar0, signed short int functionized4_localFunctionVar1) {
 return ((functionized4_localFunctionVar0 - functionized4_localFunctionVar1) << var_1_16);
}
unsigned char functionized5(unsigned long int functionized5_localFunctionVar0) {
 return ((5u >> 16) > (functionized5_localFunctionVar0 - ((((100u) < 0 ) ? -(100u) : (100u)))));
}
void initially(void) {
}
void step(void) {
 if (var_1_2 < functionized0()) {
  var_1_1 = (var_1_3 - ((((((((64) > (var_1_4)) ? (64) : (var_1_4)))) > (var_1_7)) ? (((((64) > (var_1_4)) ? (64) : (var_1_4)))) : (var_1_7))));
 }
 functionized1(var_1_6);
 var_1_9 = (((((var_1_10) < ((1.000000000000005E14 + 256.1))) ? (var_1_10) : ((1.000000000000005E14 + 256.1)))) - (var_1_11 + var_1_12));
 if (var_1_4 == (~ (var_1_5 + var_1_8))) {
  var_1_13 = var_1_14;
 }
 if (functionized2(var_1_1, var_1_14)) {
  var_1_15 = (((((var_1_16 + functionized3())) < (var_1_19)) ? ((var_1_16 + functionized3())) : (var_1_19)));
 } else {
  var_1_15 = ((((var_1_16) < (var_1_19)) ? (var_1_16) : (var_1_19)));
 }
 if ((functionized4(var_1_21, var_1_4)) < var_1_8) {
  var_1_20 = var_1_16;
 }
 var_1_22 = (((((var_1_4) < (var_1_23)) ? (var_1_4) : (var_1_23))) + (var_1_24 + var_1_25));
 if ((8 << var_1_17) < var_1_27) {
  if (functionized5(var_1_28)) {
   var_1_26 = var_1_29;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32768);
 assume_abort_if_not(var_1_6 <= 32767);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32767);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65535);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 16384);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 2147483647);
 assume_abort_if_not(var_1_28 <= 4294967295);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 < ((var_1_3 - var_1_4) / ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_1 == ((signed long int) (var_1_3 - ((((((((64) > (var_1_4)) ? (64) : (var_1_4)))) > (var_1_7)) ? (((((64) > (var_1_4)) ? (64) : (var_1_4)))) : (var_1_7)))))) : 1) && ((var_1_6 > var_1_5) ? (var_1_8 == ((signed long int) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : 1)) && (var_1_9 == ((double) (((((var_1_10) < ((1.000000000000005E14 + 256.1))) ? (var_1_10) : ((1.000000000000005E14 + 256.1)))) - (var_1_11 + var_1_12))))) && ((var_1_4 == (~ (var_1_5 + var_1_8))) ? (var_1_13 == ((signed short int) var_1_14)) : 1)) && ((var_1_14 > ((((var_1_1) > (-8)) ? (var_1_1) : (-8)))) ? (var_1_15 == ((signed char) (((((var_1_16 + ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))) < (var_1_19)) ? ((var_1_16 + ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))) : (var_1_19))))) : (var_1_15 == ((signed char) ((((var_1_16) < (var_1_19)) ? (var_1_16) : (var_1_19))))))) && ((((var_1_21 - var_1_4) << var_1_16) < var_1_8) ? (var_1_20 == ((signed char) var_1_16)) : 1)) && (var_1_22 == ((unsigned short int) (((((var_1_4) < (var_1_23)) ? (var_1_4) : (var_1_23))) + (var_1_24 + var_1_25))))) && (((8 << var_1_17) < var_1_27) ? (((5u >> 16) > (var_1_28 - ((((100u) < 0 ) ? -(100u) : (100u))))) ? (var_1_26 == ((unsigned char) var_1_29)) : 1) : 1)
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
