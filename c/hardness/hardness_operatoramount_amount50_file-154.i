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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 200;
unsigned long int var_1_5 = 100000;
unsigned long int var_1_6 = 5;
unsigned long int var_1_7 = 1863363481;
unsigned long int var_1_8 = 100;
unsigned long int var_1_9 = 10;
signed char var_1_10 = 32;
signed char var_1_11 = 5;
signed char var_1_12 = -10;
signed char var_1_13 = 5;
signed long int var_1_14 = -4;
signed long int var_1_15 = 8;
float var_1_16 = 10.75;
float var_1_17 = 63.3;
float var_1_18 = 3.125;
float var_1_19 = 4.25;
float var_1_20 = 24.2;
float var_1_21 = 100.75;
signed long int var_1_22 = 0;
signed char var_1_23 = -10;
signed short int var_1_24 = 64;
unsigned char var_1_25 = 1;
signed short int var_1_26 = 22851;
signed short int var_1_27 = 256;
unsigned char var_1_28 = 100;
unsigned char var_1_29 = 100;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  var_1_1 = (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + ((var_1_7 - var_1_8) - var_1_9));
 }
 if (var_1_4 == var_1_5) {
  var_1_10 = (((((var_1_11 + var_1_12)) > (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13)));
 }
 if (var_1_11 > var_1_4) {
  if (var_1_8 > var_1_4) {
   var_1_14 = var_1_8;
  }
 }
 if ((var_1_16 * (var_1_17 + var_1_18)) < ((var_1_19 + var_1_20) - var_1_21)) {
  var_1_15 = var_1_9;
 } else {
  var_1_15 = var_1_22;
 }
 unsigned long int stepLocal_0 = -25 / var_1_7;
 if (var_1_2) {
  if (var_1_21 > var_1_20) {
   if (-16 != stepLocal_0) {
    var_1_23 = var_1_13;
   } else {
    var_1_23 = var_1_11;
   }
  } else {
   var_1_23 = var_1_11;
  }
 } else {
  var_1_23 = var_1_11;
 }
 unsigned char stepLocal_3 = var_1_2;
 unsigned char stepLocal_2 = var_1_25;
 unsigned long int stepLocal_1 = ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))) * var_1_4;
 if (var_1_2 || stepLocal_2) {
  if (stepLocal_3 && (var_1_15 <= var_1_8)) {
   if (var_1_7 == stepLocal_1) {
    var_1_24 = ((var_1_26 - var_1_27) - 16);
   }
  }
 } else {
  var_1_24 = var_1_15;
 }
 var_1_28 = var_1_29;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1610612735);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 536870912);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427388000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427388000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483647);
 assume_abort_if_not(var_1_22 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 16382);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 16383);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((unsigned long int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : (var_1_1 == ((unsigned long int) (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + ((var_1_7 - var_1_8) - var_1_9))))) && ((var_1_4 == var_1_5) ? (var_1_10 == ((signed char) (((((var_1_11 + var_1_12)) > (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13))))) : 1)) && ((var_1_11 > var_1_4) ? ((var_1_8 > var_1_4) ? (var_1_14 == ((signed long int) var_1_8)) : 1) : 1)) && (((var_1_16 * (var_1_17 + var_1_18)) < ((var_1_19 + var_1_20) - var_1_21)) ? (var_1_15 == ((signed long int) var_1_9)) : (var_1_15 == ((signed long int) var_1_22)))) && (var_1_2 ? ((var_1_21 > var_1_20) ? ((-16 != (-25 / var_1_7)) ? (var_1_23 == ((signed char) var_1_13)) : (var_1_23 == ((signed char) var_1_11))) : (var_1_23 == ((signed char) var_1_11))) : (var_1_23 == ((signed char) var_1_11)))) && ((var_1_2 || var_1_25) ? ((var_1_2 && (var_1_15 <= var_1_8)) ? ((var_1_7 == (((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))) * var_1_4)) ? (var_1_24 == ((signed short int) ((var_1_26 - var_1_27) - 16))) : 1) : 1) : (var_1_24 == ((signed short int) var_1_15)))) && (var_1_28 == ((unsigned char) var_1_29))
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
