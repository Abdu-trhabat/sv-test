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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed long int var_1_2 = -5;
signed short int var_1_4 = 128;
signed long int var_1_5 = -50;
signed long int var_1_6 = 100000;
double var_1_7 = 127.8;
double var_1_8 = 3.5;
double var_1_9 = 9.7;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 10;
signed long int var_1_12 = 200;
unsigned char var_1_13 = 0;
double var_1_14 = 63.25;
signed long int var_1_15 = 64;
void initially(void) {
}
void step(void) {
 var_1_5 = (32 - var_1_6);
 signed long int stepLocal_2 = var_1_5;
 signed long int stepLocal_1 = (var_1_10 - var_1_11) * var_1_5;
 if (var_1_2 >= stepLocal_2) {
  var_1_7 = (var_1_8 - var_1_9);
 } else {
  if (stepLocal_1 <= (var_1_6 / var_1_12)) {
   var_1_7 = var_1_8;
  } else {
   if (var_1_13) {
    var_1_7 = (5.2 + var_1_14);
   }
  }
 }
 if (var_1_4 >= (var_1_11 << var_1_6)) {
  var_1_15 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
 } else {
  if (var_1_13) {
   var_1_15 = -4;
  }
 }
 signed long int stepLocal_0 = var_1_15 + 5;
 if (10 > stepLocal_0) {
  if (127.625f != (- var_1_7)) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = -10;
  }
 } else {
  var_1_1 = var_1_4;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 255);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((10 > (var_1_15 + 5)) ? ((127.625f != (- var_1_7)) ? (var_1_1 == ((signed short int) var_1_4)) : (var_1_1 == ((signed short int) -10))) : (var_1_1 == ((signed short int) var_1_4))) && (var_1_5 == ((signed long int) (32 - var_1_6)))) && ((var_1_2 >= var_1_5) ? (var_1_7 == ((double) (var_1_8 - var_1_9))) : ((((var_1_10 - var_1_11) * var_1_5) <= (var_1_6 / var_1_12)) ? (var_1_7 == ((double) var_1_8)) : (var_1_13 ? (var_1_7 == ((double) (5.2 + var_1_14))) : 1)))) && ((var_1_4 >= (var_1_11 << var_1_6)) ? (var_1_15 == ((signed long int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_13 ? (var_1_15 == ((signed long int) -4)) : 1))
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
