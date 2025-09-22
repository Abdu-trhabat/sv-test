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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 255.25;
double var_1_2 = 3.6;
double var_1_3 = 3.25;
unsigned char var_1_4 = 0;
signed char var_1_6 = 4;
signed long int var_1_7 = 128;
signed long int var_1_8 = 1;
float var_1_9 = 99.6;
signed short int var_1_10 = 1;
signed short int var_1_11 = -4;
signed long int var_1_12 = -128;
signed long int var_1_13 = 2;
unsigned long int var_1_14 = 2434691654;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
float var_1_17 = -0.4;
float var_1_18 = 3.8;
float var_1_19 = 99999999.5;
signed short int last_1_var_1_10 = 1;
float last_1_var_1_17 = -0.4;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= (- last_1_var_1_17)) {
  var_1_12 = (last_1_var_1_10 + (var_1_6 + ((((2) < (var_1_11)) ? (2) : (var_1_11)))));
 } else {
  var_1_12 = var_1_6;
 }
 if (var_1_12 >= var_1_7) {
  var_1_13 = ((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6)));
 } else {
  if ((var_1_14 - 128u) > var_1_12) {
   if (var_1_7 != var_1_11) {
    var_1_13 = var_1_6;
   }
  } else {
   var_1_13 = var_1_12;
  }
 }
 if (var_1_13 >= var_1_8) {
  var_1_10 = ((((var_1_6) < (var_1_11)) ? (var_1_6) : (var_1_11)));
 }
 unsigned char stepLocal_1 = var_1_13 < var_1_7;
 signed long int stepLocal_0 = (((var_1_13) > (-2)) ? (var_1_13) : (-2));
 if ((-64 >= var_1_13) || stepLocal_1) {
  if (stepLocal_0 > ((((var_1_7) > ((var_1_12 * var_1_13))) ? (var_1_7) : ((var_1_12 * var_1_13))))) {
   var_1_17 = (((((var_1_9) < (var_1_18)) ? (var_1_9) : (var_1_18))) + var_1_19);
  } else {
   var_1_17 = 7.1f;
  }
 } else {
  var_1_17 = var_1_18;
 }
 if (var_1_4) {
  var_1_15 = var_1_16;
 }
 if (var_1_2 < var_1_3) {
  if (var_1_15 || ((var_1_12 >> var_1_6) != (var_1_7 - var_1_8))) {
   var_1_1 = (256.125f + (128.1f - var_1_9));
  } else {
   var_1_1 = var_1_9;
  }
 } else {
  var_1_1 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 15);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return ((((((var_1_2 < var_1_3) ? ((var_1_15 || ((var_1_12 >> var_1_6) != (var_1_7 - var_1_8))) ? (var_1_1 == ((float) (256.125f + (128.1f - var_1_9)))) : (var_1_1 == ((float) var_1_9))) : (var_1_1 == ((float) var_1_9))) && ((var_1_13 >= var_1_8) ? (var_1_10 == ((signed short int) ((((var_1_6) < (var_1_11)) ? (var_1_6) : (var_1_11))))) : 1)) && ((var_1_2 >= (- last_1_var_1_17)) ? (var_1_12 == ((signed long int) (last_1_var_1_10 + (var_1_6 + ((((2) < (var_1_11)) ? (2) : (var_1_11))))))) : (var_1_12 == ((signed long int) var_1_6)))) && ((var_1_12 >= var_1_7) ? (var_1_13 == ((signed long int) ((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6))))) : (((var_1_14 - 128u) > var_1_12) ? ((var_1_7 != var_1_11) ? (var_1_13 == ((signed long int) var_1_6)) : 1) : (var_1_13 == ((signed long int) var_1_12))))) && (var_1_4 ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && (((-64 >= var_1_13) || (var_1_13 < var_1_7)) ? ((((((var_1_13) > (-2)) ? (var_1_13) : (-2))) > ((((var_1_7) > ((var_1_12 * var_1_13))) ? (var_1_7) : ((var_1_12 * var_1_13))))) ? (var_1_17 == ((float) (((((var_1_9) < (var_1_18)) ? (var_1_9) : (var_1_18))) + var_1_19))) : (var_1_17 == ((float) 7.1f))) : (var_1_17 == ((float) var_1_18)))
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
