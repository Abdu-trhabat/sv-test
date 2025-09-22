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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2650_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
signed long int var_1_2 = 4;
signed long int var_1_3 = 10;
signed long int var_1_4 = -64;
signed long int var_1_5 = -2;
unsigned long int var_1_6 = 256;
unsigned long int var_1_7 = 4;
unsigned long int var_1_8 = 128;
signed char var_1_9 = 10;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
unsigned short int var_1_12 = 10000;
float var_1_13 = 5.4;
float var_1_14 = 1.4;
float var_1_15 = 128.9;
float var_1_16 = 199.75;
unsigned long int var_1_17 = 16;
unsigned short int var_1_18 = 32;
unsigned short int var_1_19 = 32;
double var_1_20 = 1.5;
double var_1_22 = 127.75;
signed char var_1_23 = 8;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -16;
signed char var_1_27 = 16;
signed long int var_1_28 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_5;
 if (((var_1_2 + var_1_3) / var_1_4) == stepLocal_0) {
  var_1_1 = (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) + var_1_8);
 }
 unsigned char stepLocal_2 = (var_1_13 - var_1_14) != ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)));
 unsigned long int stepLocal_1 = var_1_17;
 if (stepLocal_2 || var_1_10) {
  if (var_1_1 >= stepLocal_1) {
   var_1_12 = (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + 32);
  } else {
   var_1_12 = var_1_19;
  }
 }
 if (((((var_1_1) < (var_1_19)) ? (var_1_1) : (var_1_19))) < var_1_1) {
  var_1_20 = var_1_22;
 }
 unsigned char stepLocal_3 = var_1_24;
 if (var_1_10) {
  if (stepLocal_3 && var_1_25) {
   var_1_23 = (((((0) > (var_1_11)) ? (0) : (var_1_11))) + ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))));
  } else {
   var_1_23 = var_1_11;
  }
 } else {
  var_1_23 = var_1_26;
 }
 unsigned long int stepLocal_5 = (((var_1_1) < (var_1_6)) ? (var_1_1) : (var_1_6));
 unsigned char stepLocal_4 = var_1_25;
 if (stepLocal_5 > (var_1_7 | var_1_19)) {
  if (stepLocal_4 && (var_1_11 < var_1_1)) {
   var_1_28 = (var_1_19 - var_1_18);
  } else {
   var_1_28 = var_1_11;
  }
 } else {
  var_1_28 = var_1_12;
 }
 if (! var_1_10) {
  if (((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28))) >= var_1_1) {
   var_1_9 = (-16 + var_1_11);
  } else {
   var_1_9 = var_1_11;
  }
 } else {
  var_1_9 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -63);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 + var_1_3) / var_1_4) == var_1_5) ? (var_1_1 == ((unsigned long int) (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) + var_1_8))) : 1) && ((! var_1_10) ? ((((((var_1_6) > (var_1_28)) ? (var_1_6) : (var_1_28))) >= var_1_1) ? (var_1_9 == ((signed char) (-16 + var_1_11))) : (var_1_9 == ((signed char) var_1_11))) : (var_1_9 == ((signed char) var_1_11)))) && ((((var_1_13 - var_1_14) != ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) || var_1_10) ? ((var_1_1 >= var_1_17) ? (var_1_12 == ((unsigned short int) (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + 32))) : (var_1_12 == ((unsigned short int) var_1_19))) : 1)) && ((((((var_1_1) < (var_1_19)) ? (var_1_1) : (var_1_19))) < var_1_1) ? (var_1_20 == ((double) var_1_22)) : 1)) && (var_1_10 ? ((var_1_24 && var_1_25) ? (var_1_23 == ((signed char) (((((0) > (var_1_11)) ? (0) : (var_1_11))) + ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))))) : (var_1_23 == ((signed char) var_1_11))) : (var_1_23 == ((signed char) var_1_26)))) && ((((((var_1_1) < (var_1_6)) ? (var_1_1) : (var_1_6))) > (var_1_7 | var_1_19)) ? ((var_1_25 && (var_1_11 < var_1_1)) ? (var_1_28 == ((signed long int) (var_1_19 - var_1_18))) : (var_1_28 == ((signed long int) var_1_11))) : (var_1_28 == ((signed long int) var_1_12)))
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
