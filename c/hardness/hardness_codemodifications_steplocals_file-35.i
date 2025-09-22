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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 25;
signed char var_1_7 = 5;
signed char var_1_8 = -5;
double var_1_9 = 999.625;
double var_1_10 = 5.06;
unsigned short int var_1_11 = 5;
signed short int var_1_12 = 2;
signed long int var_1_13 = -256;
double var_1_14 = 127.75;
signed short int var_1_15 = 2;
double var_1_16 = 9.75;
unsigned long int var_1_17 = 32;
double var_1_18 = 10.75;
unsigned long int var_1_19 = 4067291719;
float var_1_20 = 15.3;
signed char var_1_21 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((! var_1_3) || var_1_4);
 } else {
  var_1_1 = (var_1_3 && var_1_5);
 }
 signed char stepLocal_0 = var_1_8;
 if (var_1_7 >= stepLocal_0) {
  if ((var_1_9 - 1.00000000000025E12) >= var_1_10) {
   var_1_6 = 200;
  } else {
   var_1_6 = var_1_11;
  }
 } else {
  var_1_6 = var_1_11;
 }
 unsigned short int stepLocal_1 = var_1_6;
 if (var_1_11 > stepLocal_1) {
  var_1_12 = 32;
 }
 signed char stepLocal_2 = var_1_7;
 if (var_1_12 == stepLocal_2) {
  if (! var_1_3) {
   var_1_13 = ((var_1_8 + var_1_12) + (var_1_11 - var_1_6));
  }
 }
 if ((var_1_7 + var_1_6) < ((var_1_11 >> var_1_15) * var_1_12)) {
  var_1_14 = var_1_16;
 } else {
  var_1_14 = 8.954;
 }
 if ((((((var_1_16 * 200.7f)) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? ((var_1_16 * 200.7f)) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) <= ((- var_1_14) / var_1_18)) {
  var_1_17 = (var_1_19 - var_1_15);
 } else {
  var_1_17 = var_1_19;
 }
 signed long int stepLocal_3 = (((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8));
 if (stepLocal_3 <= (var_1_15 << var_1_17)) {
  if (var_1_1) {
   var_1_20 = ((((var_1_16) > (7.9f)) ? (var_1_16) : (7.9f)));
  }
 }
 var_1_21 = var_1_15;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -128);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 15);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 ? (var_1_1 == ((unsigned char) ((! var_1_3) || var_1_4))) : (var_1_1 == ((unsigned char) (var_1_3 && var_1_5)))) && ((var_1_7 >= var_1_8) ? (((var_1_9 - 1.00000000000025E12) >= var_1_10) ? (var_1_6 == ((unsigned short int) 200)) : (var_1_6 == ((unsigned short int) var_1_11))) : (var_1_6 == ((unsigned short int) var_1_11)))) && ((var_1_11 > var_1_6) ? (var_1_12 == ((signed short int) 32)) : 1)) && ((var_1_12 == var_1_7) ? ((! var_1_3) ? (var_1_13 == ((signed long int) ((var_1_8 + var_1_12) + (var_1_11 - var_1_6)))) : 1) : 1)) && (((var_1_7 + var_1_6) < ((var_1_11 >> var_1_15) * var_1_12)) ? (var_1_14 == ((double) var_1_16)) : (var_1_14 == ((double) 8.954)))) && (((((((var_1_16 * 200.7f)) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? ((var_1_16 * 200.7f)) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) <= ((- var_1_14) / var_1_18)) ? (var_1_17 == ((unsigned long int) (var_1_19 - var_1_15))) : (var_1_17 == ((unsigned long int) var_1_19)))) && ((((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8))) <= (var_1_15 << var_1_17)) ? (var_1_1 ? (var_1_20 == ((float) ((((var_1_16) > (7.9f)) ? (var_1_16) : (7.9f))))) : 1) : 1)) && (var_1_21 == ((signed char) var_1_15))
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
