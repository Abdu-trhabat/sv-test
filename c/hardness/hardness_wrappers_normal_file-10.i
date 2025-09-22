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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned long int var_1_2 = 8;
double var_1_3 = 9.15;
signed char var_1_4 = 2;
double var_1_6 = 1000000.875;
double var_1_7 = 49.25;
double var_1_8 = -0.8;
double var_1_9 = 100000000000.6;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
double var_1_16 = 24.125;
double var_1_17 = 0.7;
double var_1_18 = 0.0;
double var_1_19 = 25.7;
double var_1_21 = -0.375;
double last_1_var_1_3 = 9.15;
void initially(void) {
}
void step(void) {
 var_1_1 = var_1_2;
 unsigned long int stepLocal_0 = var_1_1;
 if (var_1_4 < stepLocal_0) {
  var_1_3 = -0.5;
 } else {
  if ((- last_1_var_1_3) == (var_1_6 - var_1_7)) {
   var_1_3 = var_1_8;
  } else {
   var_1_3 = var_1_9;
  }
 }
 if (var_1_11) {
  if (var_1_2 <= 1u) {
   var_1_10 = (! (var_1_12 && (var_1_13 || var_1_14)));
  } else {
   var_1_10 = (! (var_1_14 && var_1_13));
  }
 } else {
  var_1_10 = (! var_1_15);
 }
 if (var_1_10) {
  var_1_16 = (var_1_17 - (var_1_18 - var_1_19));
 } else {
  if ((var_1_10 || var_1_15) && (var_1_6 <= var_1_8)) {
   var_1_16 = var_1_21;
  } else {
   var_1_16 = 64.5;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_3 = var_1_3;
}
int property(void) {
 return (((var_1_1 == ((unsigned long int) var_1_2)) && ((var_1_4 < var_1_1) ? (var_1_3 == ((double) -0.5)) : (((- last_1_var_1_3) == (var_1_6 - var_1_7)) ? (var_1_3 == ((double) var_1_8)) : (var_1_3 == ((double) var_1_9))))) && (var_1_11 ? ((var_1_2 <= 1u) ? (var_1_10 == ((unsigned char) (! (var_1_12 && (var_1_13 || var_1_14))))) : (var_1_10 == ((unsigned char) (! (var_1_14 && var_1_13))))) : (var_1_10 == ((unsigned char) (! var_1_15))))) && (var_1_10 ? (var_1_16 == ((double) (var_1_17 - (var_1_18 - var_1_19)))) : (((var_1_10 || var_1_15) && (var_1_6 <= var_1_8)) ? (var_1_16 == ((double) var_1_21)) : (var_1_16 == ((double) 64.5))))
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
