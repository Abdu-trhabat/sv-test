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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 2;
signed short int var_1_7 = 16;
double var_1_8 = 24.5;
double var_1_10 = 64.75;
double var_1_11 = 9999.2;
signed long int var_1_12 = -64;
signed char var_1_13 = 100;
signed long int var_1_14 = 256;
float var_1_15 = -0.75;
unsigned long int var_1_16 = 16;
signed short int var_1_17 = -4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_3 && (var_1_5 <= var_1_6);
 if (var_1_2 || stepLocal_0) {
  var_1_1 = var_1_7;
 } else {
  if (var_1_3) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = -32;
  }
 }
 signed long int stepLocal_1 = -5 % var_1_13;
 if (! var_1_4) {
  if (stepLocal_1 == ((((10) > ((var_1_7 / var_1_14))) ? (10) : ((var_1_7 / var_1_14))))) {
   var_1_12 = (var_1_6 - var_1_5);
  }
 }
 var_1_15 = var_1_11;
 var_1_16 = var_1_12;
 var_1_17 = var_1_7;
 if (! (var_1_16 > (var_1_12 + 1))) {
  if (8.5f <= var_1_15) {
   var_1_8 = ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
  } else {
   var_1_8 = var_1_10;
  }
 } else {
  var_1_8 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32767);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -128);
 assume_abort_if_not(var_1_13 <= 127);
 assume_abort_if_not(var_1_13 != 0);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483648);
 assume_abort_if_not(var_1_14 <= 2147483647);
 assume_abort_if_not(var_1_14 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 || (var_1_3 && (var_1_5 <= var_1_6))) ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_3 ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_1 == ((signed short int) -32)))) && ((! (var_1_16 > (var_1_12 + 1))) ? ((8.5f <= var_1_15) ? (var_1_8 == ((double) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) : (var_1_8 == ((double) var_1_10))) : (var_1_8 == ((double) var_1_10)))) && ((! var_1_4) ? (((-5 % var_1_13) == ((((10) > ((var_1_7 / var_1_14))) ? (10) : ((var_1_7 / var_1_14))))) ? (var_1_12 == ((signed long int) (var_1_6 - var_1_5))) : 1) : 1)) && (var_1_15 == ((float) var_1_11))) && (var_1_16 == ((unsigned long int) var_1_12))) && (var_1_17 == ((signed short int) var_1_7))
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
