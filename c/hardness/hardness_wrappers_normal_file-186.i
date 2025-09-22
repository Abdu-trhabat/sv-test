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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
double var_1_2 = 15.5;
double var_1_3 = 50.4;
signed short int var_1_4 = 100;
unsigned char var_1_5 = 16;
double var_1_6 = 199.5;
double var_1_7 = 1000.99;
double var_1_8 = 1.8;
double var_1_9 = 0.0;
double var_1_10 = 4.2;
unsigned char var_1_11 = 50;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_2 < var_1_3) {
  if (var_1_3 < var_1_2) {
   var_1_1 = (var_1_4 + ((((128) < 0 ) ? -(128) : (128))));
  } else {
   var_1_1 = var_1_4;
  }
 }
 if (((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) > var_1_6) {
  if ((var_1_3 / 256.8) >= ((var_1_7 + var_1_8) - (var_1_9 - var_1_10))) {
   var_1_5 = 64;
  } else {
   var_1_5 = var_1_11;
  }
 }
 if ((var_1_13 || (var_1_6 > var_1_3)) || var_1_14) {
  if (var_1_14) {
   var_1_12 = ((var_1_15 - (var_1_16 + var_1_17)) + (var_1_18 + 8));
  } else {
   var_1_12 = var_1_18;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427388000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 4611686.018427388000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427388000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 31);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 < var_1_3) ? ((var_1_3 < var_1_2) ? (var_1_1 == ((signed short int) (var_1_4 + ((((128) < 0 ) ? -(128) : (128)))))) : (var_1_1 == ((signed short int) var_1_4))) : 1) && ((((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) > var_1_6) ? (((var_1_3 / 256.8) >= ((var_1_7 + var_1_8) - (var_1_9 - var_1_10))) ? (var_1_5 == ((unsigned char) 64)) : (var_1_5 == ((unsigned char) var_1_11))) : 1)) && (((var_1_13 || (var_1_6 > var_1_3)) || var_1_14) ? (var_1_14 ? (var_1_12 == ((unsigned char) ((var_1_15 - (var_1_16 + var_1_17)) + (var_1_18 + 8)))) : (var_1_12 == ((unsigned char) var_1_18))) : 1)
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
