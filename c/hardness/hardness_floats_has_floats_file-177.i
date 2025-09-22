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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = -256.0;
float var_1_2 = -2.0;
float var_1_3 = 100.0;
float var_1_4 = -256.0;
double var_1_5 = 10.0;
double var_1_6 = 8.0;
double var_1_7 = -4.0;
unsigned short int var_1_8 = 100;
double var_1_9 = 10.0;
signed char var_1_10 = 50;
unsigned char var_1_11 = 0;
signed char var_1_12 = 32;
signed char var_1_13 = 50;
signed char var_1_14 = 8;
float var_1_15 = -5.0;
double var_1_16 = 4.0;
double var_1_17 = 4.0;
float var_1_18 = -500.0;
void initially(void) {
}
void step(void) {
 if (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) > var_1_4) {
  if (var_1_3 > var_1_4) {
   var_1_1 = ((((var_1_5) > (((((var_1_6) < ((var_1_7 + -50.0))) ? (var_1_6) : ((var_1_7 + -50.0)))))) ? (var_1_5) : (((((var_1_6) < ((var_1_7 + -50.0))) ? (var_1_6) : ((var_1_7 + -50.0)))))));
  }
 }
 if (! var_1_11) {
  var_1_10 = (((var_1_12 + var_1_13) - var_1_14) - ((((-8) < 0 ) ? -(-8) : (-8))));
 }
 if (((var_1_16 - var_1_17) / var_1_9) <= var_1_1) {
  var_1_15 = (var_1_7 + var_1_18);
 } else {
  if (var_1_11 || (var_1_14 != var_1_10)) {
   var_1_15 = var_1_5;
  } else {
   var_1_15 = -10.0f;
  }
 }
 if (var_1_5 != (var_1_6 * (var_1_15 / var_1_9))) {
  var_1_8 = 256;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 31);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 31);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) > var_1_4) ? ((var_1_3 > var_1_4) ? (var_1_1 == ((double) ((((var_1_5) > (((((var_1_6) < ((var_1_7 + -50.0))) ? (var_1_6) : ((var_1_7 + -50.0)))))) ? (var_1_5) : (((((var_1_6) < ((var_1_7 + -50.0))) ? (var_1_6) : ((var_1_7 + -50.0))))))))) : 1) : 1) && ((var_1_5 != (var_1_6 * (var_1_15 / var_1_9))) ? (var_1_8 == ((unsigned short int) 256)) : 1)) && ((! var_1_11) ? (var_1_10 == ((signed char) (((var_1_12 + var_1_13) - var_1_14) - ((((-8) < 0 ) ? -(-8) : (-8)))))) : 1)) && ((((var_1_16 - var_1_17) / var_1_9) <= var_1_1) ? (var_1_15 == ((float) (var_1_7 + var_1_18))) : ((var_1_11 || (var_1_14 != var_1_10)) ? (var_1_15 == ((float) var_1_5)) : (var_1_15 == ((float) -10.0f))))
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
