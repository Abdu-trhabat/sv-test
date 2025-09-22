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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 128.0;
unsigned char var_1_2 = 0;
double var_1_3 = -2.0;
double var_1_4 = 0.0;
double var_1_5 = 8.0;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 5;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 8;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_5 > var_1_4) {
  var_1_6 = ((((var_1_7) < (((var_1_8 - var_1_9) - var_1_10))) ? (var_1_7) : (((var_1_8 - var_1_9) - var_1_10))));
 } else {
  var_1_6 = 64;
 }
 if (var_1_2 || (var_1_6 == (var_1_8 + var_1_7))) {
  if (var_1_8 >= (var_1_10 * (var_1_7 & var_1_9))) {
   var_1_11 = ((var_1_2 || var_1_12) && var_1_13);
  } else {
   var_1_11 = var_1_14;
  }
 } else {
  var_1_11 = 0;
 }
 var_1_15 = var_1_14;
 if (var_1_11) {
  var_1_1 = (((((var_1_3 + var_1_4) < 0 ) ? -(var_1_3 + var_1_4) : (var_1_3 + var_1_4))) - var_1_5);
 } else {
  var_1_1 = (((((((var_1_3 + 8.0) < 0 ) ? -(var_1_3 + 8.0) : (var_1_3 + 8.0))) < 0 ) ? -((((var_1_3 + 8.0) < 0 ) ? -(var_1_3 + 8.0) : (var_1_3 + 8.0))) : ((((var_1_3 + 8.0) < 0 ) ? -(var_1_3 + 8.0) : (var_1_3 + 8.0)))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_11 ? (var_1_1 == ((double) (((((var_1_3 + var_1_4) < 0 ) ? -(var_1_3 + var_1_4) : (var_1_3 + var_1_4))) - var_1_5))) : (var_1_1 == ((double) (((((((var_1_3 + 8.0) < 0 ) ? -(var_1_3 + 8.0) : (var_1_3 + 8.0))) < 0 ) ? -((((var_1_3 + 8.0) < 0 ) ? -(var_1_3 + 8.0) : (var_1_3 + 8.0))) : ((((var_1_3 + 8.0) < 0 ) ? -(var_1_3 + 8.0) : (var_1_3 + 8.0)))))))) && ((var_1_5 > var_1_4) ? (var_1_6 == ((unsigned char) ((((var_1_7) < (((var_1_8 - var_1_9) - var_1_10))) ? (var_1_7) : (((var_1_8 - var_1_9) - var_1_10)))))) : (var_1_6 == ((unsigned char) 64)))) && ((var_1_2 || (var_1_6 == (var_1_8 + var_1_7))) ? ((var_1_8 >= (var_1_10 * (var_1_7 & var_1_9))) ? (var_1_11 == ((unsigned char) ((var_1_2 || var_1_12) && var_1_13))) : (var_1_11 == ((unsigned char) var_1_14))) : (var_1_11 == ((unsigned char) 0)))) && (var_1_15 == ((unsigned char) var_1_14))
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
