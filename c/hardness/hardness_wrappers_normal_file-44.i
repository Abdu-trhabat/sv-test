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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch44normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 32;
signed char var_1_2 = -32;
signed char var_1_3 = -25;
signed char var_1_4 = -64;
signed char var_1_5 = -1;
signed char var_1_6 = 50;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
double var_1_12 = 10.5;
double var_1_13 = 32.1;
double var_1_14 = 4.6;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
float var_1_18 = 50.75;
float var_1_19 = 32.6;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) / var_1_7;
 if (stepLocal_1 > (var_1_5 - var_1_6)) {
  if (stepLocal_0 <= var_1_6) {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_3;
 }
 if ((var_1_12 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) >= var_1_14) {
  var_1_11 = (((var_1_6 < var_1_1) && var_1_15) || (var_1_16 || var_1_17));
 }
 var_1_18 = var_1_19;
 signed char stepLocal_3 = var_1_2;
 signed long int stepLocal_2 = var_1_2 * (var_1_4 * var_1_6);
 if (var_1_11) {
  if (var_1_1 > stepLocal_3) {
   var_1_8 = (! var_1_10);
  } else {
   if ((var_1_1 % var_1_7) < stepLocal_2) {
    var_1_8 = var_1_10;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 255);
 assume_abort_if_not(var_1_7 != 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_4 > (var_1_5 - var_1_6)) ? (((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) / var_1_7) <= var_1_6) ? (var_1_1 == ((signed long int) var_1_7)) : 1) : (var_1_1 == ((signed long int) var_1_3))) && (var_1_11 ? ((var_1_1 > var_1_2) ? (var_1_8 == ((unsigned char) (! var_1_10))) : (((var_1_1 % var_1_7) < (var_1_2 * (var_1_4 * var_1_6))) ? (var_1_8 == ((unsigned char) var_1_10)) : 1)) : 1)) && (((var_1_12 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) >= var_1_14) ? (var_1_11 == ((unsigned char) (((var_1_6 < var_1_1) && var_1_15) || (var_1_16 || var_1_17)))) : 1)) && (var_1_18 == ((float) var_1_19))
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
