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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned long int functionized0(unsigned long int, unsigned long int);
unsigned long int functionized1(void);
unsigned char functionized2(void);
void functionized3(float, unsigned long int);
signed long int functionized4(void);
unsigned char functionized5(unsigned long int, unsigned long int);
void functionized6(unsigned long int);
unsigned char functionized7(float, unsigned char);
unsigned char isInitial = 0;
double var_1_1 = 8.5;
unsigned long int var_1_2 = 100;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
signed long int var_1_10 = 10;
signed long int var_1_11 = -5;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -4;
unsigned short int var_1_27 = 100;
unsigned long int functionized0(unsigned long int functionized0_localFunctionVar0, unsigned long int localFunctionVar1) {
 return (functionized0_localFunctionVar0 / ((((localFunctionVar1) < 0 ) ? -(localFunctionVar1) : (localFunctionVar1))));
}
unsigned long int functionized1(void) {
 return ((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5)));
}
unsigned char functionized2(void) {
 return (var_1_4 < var_1_5);
}
void functionized3(float functionized3_localFunctionVar0, unsigned long int functionized3_localFunctionVar1) {
 if (functionized3_localFunctionVar1 >= (var_1_3 ^ 4u)) {
  var_1_7 = functionized3_localFunctionVar0;
 }
}
signed long int functionized4(void) {
 return (var_1_10 + var_1_11);
}
unsigned char functionized5(unsigned long int functionized5_localFunctionVar0, unsigned long int functionized5_localFunctionVar1) {
 return (functionized5_localFunctionVar1 >= (var_1_14 - ((((var_1_15) < (functionized5_localFunctionVar0)) ? (var_1_15) : (functionized5_localFunctionVar0)))));
}
void functionized6(unsigned long int functionized6_localFunctionVar0) {
 if (functionized6_localFunctionVar0 < var_1_9) {
  var_1_13 = var_1_17;
 } else {
  var_1_13 = var_1_18;
 }
}
unsigned char functionized7(float functionized7_localFunctionVar0, unsigned char functionized7_localFunctionVar1) {
 return (((- var_1_1) <= functionized7_localFunctionVar0) && (functionized7_localFunctionVar1 || (var_1_24 || var_1_25)));
}
void initially(void) {
}
void step(void) {
 if ((functionized0(var_1_2, 64u)) == var_1_3) {
  var_1_1 = (8.8 - 255.2);
 }
 if (var_1_3 < var_1_2) {
  var_1_4 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
 if (var_1_4 <= functionized1()) {
  if (functionized2()) {
   functionized3(var_1_8, var_1_4);
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_4 >= (4256310412u - 128u)) {
  var_1_9 = (((((functionized4()) < 0 ) ? -(functionized4()) : (functionized4()))) + var_1_12);
 }
 if (functionized5(var_1_16, var_1_2)) {
  functionized6(var_1_16);
 } else {
  var_1_13 = var_1_18;
 }
 var_1_19 = (var_1_20 + (10 + ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))));
 if (var_1_18) {
  var_1_22 = (functionized7(var_1_8, var_1_23));
 }
 var_1_26 = var_1_21;
 var_1_27 = var_1_21;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -536870911);
 assume_abort_if_not(var_1_10 <= 536870912);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -536870911);
 assume_abort_if_not(var_1_11 <= 536870911);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1073741823);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((var_1_2 / ((((64u) < 0 ) ? -(64u) : (64u)))) == var_1_3) ? (var_1_1 == ((double) (8.8 - 255.2))) : 1) && ((var_1_3 < var_1_2) ? (var_1_4 == ((unsigned long int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1)) && ((var_1_4 <= ((((var_1_3) > (var_1_5)) ? (var_1_3) : (var_1_5)))) ? ((var_1_4 < var_1_5) ? ((var_1_4 >= (var_1_3 ^ 4u)) ? (var_1_7 == ((float) var_1_8)) : 1) : (var_1_7 == ((float) var_1_8))) : (var_1_7 == ((float) var_1_8)))) && ((var_1_4 >= (4256310412u - 128u)) ? (var_1_9 == ((signed long int) (((((var_1_10 + var_1_11) < 0 ) ? -(var_1_10 + var_1_11) : (var_1_10 + var_1_11))) + var_1_12))) : 1)) && ((var_1_2 >= (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? ((var_1_16 < var_1_9) ? (var_1_13 == ((unsigned char) var_1_17)) : (var_1_13 == ((unsigned char) var_1_18))) : (var_1_13 == ((unsigned char) var_1_18)))) && (var_1_19 == ((unsigned char) (var_1_20 + (10 + ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))))) && (var_1_18 ? (var_1_22 == ((unsigned char) (((- var_1_1) <= var_1_8) && (var_1_23 || (var_1_24 || var_1_25))))) : 1)) && (var_1_26 == ((signed char) var_1_21))) && (var_1_27 == ((unsigned short int) var_1_21))
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
