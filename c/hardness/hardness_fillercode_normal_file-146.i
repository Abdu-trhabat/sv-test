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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -4;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
float var_1_4 = 24.4;
float var_1_5 = 5.7;
signed char var_1_6 = 8;
signed char var_1_7 = 0;
float var_1_8 = 2.75;
float var_1_9 = 5.175;
float var_1_10 = 31.5;
float var_1_11 = 128.5;
float var_1_12 = 63.5;
float var_1_13 = 1.75;
unsigned short int var_1_14 = 0;
signed char var_1_15 = -8;
signed short int var_1_16 = 32;
unsigned short int var_1_17 = 8;
float var_1_18 = 99999999999.8;
signed char var_1_19 = 4;
unsigned short int var_1_20 = 56502;
unsigned short int var_1_21 = 128;
float var_1_22 = 7.25;
float var_1_23 = 50.8;
unsigned short int var_1_24 = 32;
unsigned short int var_1_25 = 16;
float last_1_var_1_18 = 99999999999.8;
unsigned short int last_1_var_1_24 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_3) {
  var_1_8 = (var_1_9 + var_1_10);
 } else {
  if (last_1_var_1_18 <= ((var_1_10 / var_1_11) / ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) {
   var_1_8 = var_1_9;
  }
 }
 if ((- var_1_8) > var_1_8) {
  var_1_14 = 5;
 }
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 && stepLocal_0) {
  if (var_1_4 >= var_1_5) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_7;
  }
 }
 unsigned short int stepLocal_1 = var_1_14;
 if (last_1_var_1_24 < stepLocal_1) {
  var_1_24 = ((((100) < (((((32) > (var_1_21)) ? (32) : (var_1_21))))) ? (100) : (((((32) > (var_1_21)) ? (32) : (var_1_21))))));
 }
 var_1_25 = var_1_21;
 if (var_1_2) {
  var_1_18 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 } else {
  if (var_1_7 <= (var_1_25 * (var_1_25 / var_1_19))) {
   if (var_1_25 < (var_1_14 / (var_1_20 - var_1_21))) {
    var_1_18 = var_1_9;
   }
  } else {
   var_1_18 = (var_1_22 - var_1_23);
  }
 }
 if ((((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12))) <= var_1_18) && var_1_2) {
  var_1_15 = var_1_7;
 } else {
  var_1_15 = var_1_6;
 }
 if (var_1_12 < var_1_9) {
  if (var_1_14 <= var_1_17) {
   var_1_16 = var_1_15;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65535);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65535);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 32766);
 assume_abort_if_not(var_1_21 != 32767);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 return ((((((((var_1_2 && var_1_3) ? ((var_1_4 >= var_1_5) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) var_1_7))) : 1) && (var_1_3 ? (var_1_8 == ((float) (var_1_9 + var_1_10))) : ((last_1_var_1_18 <= ((var_1_10 / var_1_11) / ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (var_1_8 == ((float) var_1_9)) : 1))) && (((- var_1_8) > var_1_8) ? (var_1_14 == ((unsigned short int) 5)) : 1)) && (((((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12))) <= var_1_18) && var_1_2) ? (var_1_15 == ((signed char) var_1_7)) : (var_1_15 == ((signed char) var_1_6)))) && ((var_1_12 < var_1_9) ? ((var_1_14 <= var_1_17) ? (var_1_16 == ((signed short int) var_1_15)) : 1) : 1)) && (var_1_2 ? (var_1_18 == ((float) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : ((var_1_7 <= (var_1_25 * (var_1_25 / var_1_19))) ? ((var_1_25 < (var_1_14 / (var_1_20 - var_1_21))) ? (var_1_18 == ((float) var_1_9)) : 1) : (var_1_18 == ((float) (var_1_22 - var_1_23)))))) && ((last_1_var_1_24 < var_1_14) ? (var_1_24 == ((unsigned short int) ((((100) < (((((32) > (var_1_21)) ? (32) : (var_1_21))))) ? (100) : (((((32) > (var_1_21)) ? (32) : (var_1_21)))))))) : 1)) && (var_1_25 == ((unsigned short int) var_1_21))
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
