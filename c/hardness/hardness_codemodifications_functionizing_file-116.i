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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed long int, unsigned short int, signed long int, signed long int);
unsigned char functionized1(void);
void functionized2(unsigned char);
void functionized3(unsigned short int, signed long int);
void functionized4(signed long int, signed long int, unsigned short int);
signed long int functionized5(unsigned short int);
unsigned char functionized6(unsigned short int);
unsigned char isInitial = 0;
signed long int var_1_1 = 100;
unsigned short int var_1_2 = 1;
signed long int var_1_3 = -128;
signed long int var_1_4 = 1;
signed long int var_1_5 = -128;
unsigned char var_1_6 = 0;
unsigned long int var_1_7 = 32;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 10;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 50;
signed long int var_1_15 = 8;
signed long int var_1_16 = 1155742021;
signed long int var_1_17 = -32;
void functionized0(signed long int functionized0_localFunctionVar0, unsigned short int functionized0_localFunctionVar1, signed long int functionized0_localFunctionVar2, signed long int functionized0_localFunctionVar3) {
 if ((~ functionized0_localFunctionVar1) < ((functionized0_localFunctionVar3 * functionized0_localFunctionVar2) / functionized0_localFunctionVar0)) {
  if (var_1_6) {
   var_1_1 = (128 - functionized0_localFunctionVar1);
  } else {
   var_1_1 = functionized0_localFunctionVar1;
  }
 } else {
  var_1_1 = functionized0_localFunctionVar1;
 }
}
unsigned char functionized1(void) {
 return (var_1_4 < var_1_1);
}
void functionized2(unsigned char functionized2_localFunctionVar0) {
 if (var_1_6 || var_1_11) {
  var_1_10 = ((((5) > (functionized2_localFunctionVar0)) ? (5) : (functionized2_localFunctionVar0)));
 } else {
  var_1_10 = (128 - var_1_13);
 }
}
void functionized3(unsigned short int functionized3_localFunctionVar0, signed long int localFunctionVar1) {
 if (functionized3_localFunctionVar0 >= localFunctionVar1) {
  var_1_14 = var_1_13;
 } else {
  var_1_14 = (var_1_13 + 5);
 }
}
void functionized4(signed long int functionized4_localFunctionVar0, signed long int functionized4_localFunctionVar1, unsigned short int functionized4_localFunctionVar2) {
 if ((var_1_12 * var_1_7) > functionized4_localFunctionVar1) {
  var_1_15 = ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12)));
 } else {
  var_1_15 = ((((((functionized4_localFunctionVar0 - functionized4_localFunctionVar2)) > (var_1_2)) ? ((functionized4_localFunctionVar0 - functionized4_localFunctionVar2)) : (var_1_2))) - 4);
 }
}
signed long int functionized5(unsigned short int functionized5_localFunctionVar0) {
 return ((((functionized5_localFunctionVar0) < (var_1_10)) ? (functionized5_localFunctionVar0) : (var_1_10)));
}
unsigned char functionized6(unsigned short int functionized6_localFunctionVar0) {
 return (var_1_1 >= functionized6_localFunctionVar0);
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_5, var_1_2, var_1_4, var_1_3);
 if (functionized1() || (var_1_2 <= var_1_5)) {
  if (var_1_6) {
   var_1_7 = var_1_2;
  }
 }
 if (var_1_2 <= var_1_3) {
  if (! var_1_6) {
   var_1_8 = var_1_9;
  }
 }
 functionized2(var_1_12);
 functionized3(var_1_2, 1);
 functionized4(var_1_16, var_1_1, var_1_9);
 if (var_1_6) {
  var_1_17 = ((((functionized5(var_1_2)) > (-25)) ? (functionized5(var_1_2)) : (-25)));
 } else {
  if (functionized6(var_1_2)) {
   var_1_17 = ((((var_1_10) > (var_1_14)) ? (var_1_10) : (var_1_14)));
  } else {
   var_1_17 = 16;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 1073741822);
 assume_abort_if_not(var_1_16 <= 2147483646);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((~ var_1_2) < ((var_1_3 * var_1_4) / var_1_5)) ? (var_1_6 ? (var_1_1 == ((signed long int) (128 - var_1_2))) : (var_1_1 == ((signed long int) var_1_2))) : (var_1_1 == ((signed long int) var_1_2))) && (((var_1_4 < var_1_1) || (var_1_2 <= var_1_5)) ? (var_1_6 ? (var_1_7 == ((unsigned long int) var_1_2)) : 1) : 1)) && ((var_1_2 <= var_1_3) ? ((! var_1_6) ? (var_1_8 == ((unsigned short int) var_1_9)) : 1) : 1)) && ((var_1_6 || var_1_11) ? (var_1_10 == ((unsigned char) ((((5) > (var_1_12)) ? (5) : (var_1_12))))) : (var_1_10 == ((unsigned char) (128 - var_1_13))))) && ((var_1_2 >= 1) ? (var_1_14 == ((unsigned char) var_1_13)) : (var_1_14 == ((unsigned char) (var_1_13 + 5))))) && (((var_1_12 * var_1_7) > var_1_1) ? (var_1_15 == ((signed long int) ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12))))) : (var_1_15 == ((signed long int) ((((((var_1_16 - var_1_9)) > (var_1_2)) ? ((var_1_16 - var_1_9)) : (var_1_2))) - 4))))) && (var_1_6 ? (var_1_17 == ((signed long int) ((((((((var_1_2) < (var_1_10)) ? (var_1_2) : (var_1_10)))) > (-25)) ? (((((var_1_2) < (var_1_10)) ? (var_1_2) : (var_1_10)))) : (-25))))) : ((var_1_1 >= var_1_2) ? (var_1_17 == ((signed long int) ((((var_1_10) > (var_1_14)) ? (var_1_10) : (var_1_14))))) : (var_1_17 == ((signed long int) 16))))
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
