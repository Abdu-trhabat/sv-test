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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned long int);
unsigned char functionized1(unsigned long int);
void functionized2(unsigned long int, unsigned long int);
void functionized3(double);
void functionized4(signed char, signed char);
void functionized5(signed char, double, double, unsigned char, signed short int, unsigned char);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
signed short int var_1_2 = -8;
signed short int var_1_3 = -256;
signed short int var_1_4 = 8;
signed short int var_1_5 = 64;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 5;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 10;
unsigned long int var_1_10 = 128;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 64;
double var_1_17 = 9.25;
double var_1_18 = 99999.25;
double var_1_19 = 499.109;
signed char var_1_20 = -1;
signed char var_1_21 = 4;
signed char var_1_22 = 0;
signed char var_1_23 = 5;
double var_1_24 = 16.6;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
void functionized0(unsigned long int functionized0_localFunctionVar0) {
 if (var_1_8) {
  var_1_1 = functionized0_localFunctionVar0;
 }
}
unsigned char functionized1(unsigned long int functionized1_localFunctionVar0) {
 return (var_1_6 >= ((((functionized1_localFunctionVar0) < (var_1_1)) ? (functionized1_localFunctionVar0) : (var_1_1))));
}
void functionized2(unsigned long int functionized2_localFunctionVar0, unsigned long int functionized2_localFunctionVar1) {
 if (functionized2_localFunctionVar1 > functionized2_localFunctionVar0) {
  var_1_15 = (10 + var_1_16);
 }
}
void functionized3(double functionized3_localFunctionVar0) {
 var_1_17 = (var_1_18 + functionized3_localFunctionVar0);
}
void functionized4(signed char functionized4_localFunctionVar0, signed char functionized4_localFunctionVar1) {
 var_1_20 = (functionized4_localFunctionVar0 - (var_1_22 + functionized4_localFunctionVar1));
}
void functionized5(signed char functionized5_localFunctionVar0, double functionized5_localFunctionVar1, double functionized5_localFunctionVar2, unsigned char functionized5_localFunctionVar3, signed short int functionized5_localFunctionVar4, unsigned char functionized5_localFunctionVar5) {
 if ((functionized5_localFunctionVar4 < var_1_5) || functionized5_localFunctionVar3) {
  var_1_25 = (((var_1_7 | functionized5_localFunctionVar0) > functionized5_localFunctionVar5) && ((functionized5_localFunctionVar1 < functionized5_localFunctionVar2) && var_1_26));
 }
}
void initially(void) {
}
void step(void) {
 if (var_1_2 >= ((((((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) > (var_1_5)) ? (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_5)))) {
  var_1_1 = ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)));
 } else {
  functionized0(var_1_6);
 }
 if (var_1_8) {
  var_1_9 = 1000u;
 } else {
  var_1_9 = var_1_6;
 }
 if (functionized1(var_1_9) && var_1_8) {
  var_1_10 = (((((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) < 0 ) ? -((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) : ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))));
 }
 if (var_1_8) {
  if (! (! (var_1_3 < var_1_5))) {
   var_1_11 = (var_1_12 || var_1_13);
  }
 } else {
  var_1_11 = (var_1_13 && var_1_14);
 }
 functionized2(var_1_10, var_1_9);
 functionized3(var_1_19);
 functionized4(var_1_21, var_1_23);
 if ((var_1_20 == (var_1_2 * var_1_22)) || var_1_11) {
  var_1_24 = var_1_18;
 }
 functionized5(var_1_22, var_1_19, var_1_18, var_1_13, var_1_4, var_1_15);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 >= ((((((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) > (var_1_5)) ? (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_5)))) ? (var_1_1 == ((unsigned long int) ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) : (var_1_8 ? (var_1_1 == ((unsigned long int) var_1_6)) : 1)) && (var_1_8 ? (var_1_9 == ((unsigned long int) 1000u)) : (var_1_9 == ((unsigned long int) var_1_6)))) && (((var_1_6 >= ((((var_1_9) < (var_1_1)) ? (var_1_9) : (var_1_1)))) && var_1_8) ? (var_1_10 == ((unsigned long int) (((((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) < 0 ) ? -((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) : ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))))) : 1)) && (var_1_8 ? ((! (! (var_1_3 < var_1_5))) ? (var_1_11 == ((unsigned char) (var_1_12 || var_1_13))) : 1) : (var_1_11 == ((unsigned char) (var_1_13 && var_1_14))))) && ((var_1_9 > var_1_10) ? (var_1_15 == ((unsigned char) (10 + var_1_16))) : 1)) && (var_1_17 == ((double) (var_1_18 + var_1_19)))) && (var_1_20 == ((signed char) (var_1_21 - (var_1_22 + var_1_23))))) && (((var_1_20 == (var_1_2 * var_1_22)) || var_1_11) ? (var_1_24 == ((double) var_1_18)) : 1)) && (((var_1_4 < var_1_5) || var_1_13) ? (var_1_25 == ((unsigned char) (((var_1_7 | var_1_22) > var_1_15) && ((var_1_19 < var_1_18) && var_1_26)))) : 1)
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
