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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch99has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.0;
signed char var_1_4 = -5;
float var_1_5 = 8.0;
float var_1_6 = 1.0;
float var_1_7 = 2.0;
unsigned char var_1_8 = 16;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 25;
unsigned short int var_1_13 = 256;
float var_1_14 = 25.0;
float var_1_15 = -16.0;
unsigned short int var_1_16 = 40928;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -8;
signed short int var_1_19 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_9) {
  var_1_8 = (var_1_10 - (var_1_11 - var_1_12));
 } else {
  var_1_8 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 }
 var_1_19 = var_1_12;
 unsigned char stepLocal_1 = var_1_8;
 signed short int stepLocal_0 = var_1_19;
 if (var_1_8 < stepLocal_0) {
  if (stepLocal_1 == ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))));
  }
 } else {
  var_1_1 = 1.0f;
 }
 if (var_1_1 < (var_1_5 / ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))))) {
  if (var_1_9) {
   var_1_13 = ((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)));
  } else {
   var_1_13 = (var_1_16 - var_1_8);
  }
 } else {
  if (var_1_17) {
   var_1_13 = var_1_11;
  }
 }
 var_1_18 = var_1_13;
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -127);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_8 < var_1_19) ? ((var_1_8 == ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_1 == ((float) var_1_5)) : (var_1_1 == ((float) (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))) : (var_1_1 == ((float) 1.0f))) && (var_1_9 ? (var_1_8 == ((unsigned char) (var_1_10 - (var_1_11 - var_1_12)))) : (var_1_8 == ((unsigned char) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) && ((var_1_1 < (var_1_5 / ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))))) ? (var_1_9 ? (var_1_13 == ((unsigned short int) ((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8))))) : (var_1_13 == ((unsigned short int) (var_1_16 - var_1_8)))) : (var_1_17 ? (var_1_13 == ((unsigned short int) var_1_11)) : 1))) && (var_1_18 == ((signed short int) var_1_13))) && (var_1_19 == ((signed short int) var_1_12))
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
