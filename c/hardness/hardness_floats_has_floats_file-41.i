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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -16;
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 8;
unsigned char var_1_5 = 0;
signed char var_1_6 = -8;
signed char var_1_7 = 5;
unsigned short int var_1_8 = 2;
unsigned short int var_1_9 = 8;
unsigned short int var_1_10 = 64;
unsigned char var_1_11 = 0;
double var_1_12 = 0.0;
unsigned long int var_1_13 = 4062678883;
double var_1_14 = -5.0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (var_1_2 & 0u) * var_1_3;
 if (stepLocal_0 > var_1_4) {
  if (var_1_5) {
   var_1_1 = ((16 + var_1_6) + var_1_7);
  } else {
   var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_5) {
  var_1_8 = (var_1_9 + var_1_10);
 } else {
  if ((var_1_10 > var_1_4) || var_1_11) {
   var_1_8 = var_1_9;
  } else {
   var_1_8 = var_1_10;
  }
 }
 unsigned char stepLocal_2 = var_1_5;
 unsigned long int stepLocal_1 = (var_1_13 - var_1_8) - var_1_10;
 if (stepLocal_2 && (var_1_9 < var_1_2)) {
  if (var_1_3 == stepLocal_1) {
   var_1_12 = ((((var_1_14) < (8.0)) ? (var_1_14) : (8.0)));
  } else {
   var_1_12 = var_1_14;
  }
 } else {
  var_1_12 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -31);
 assume_abort_if_not(var_1_6 <= 31);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 3221225471);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 & 0u) * var_1_3) > var_1_4) ? (var_1_5 ? (var_1_1 == ((signed char) ((16 + var_1_6) + var_1_7))) : (var_1_1 == ((signed char) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) : (var_1_1 == ((signed char) var_1_6))) && (var_1_5 ? (var_1_8 == ((unsigned short int) (var_1_9 + var_1_10))) : (((var_1_10 > var_1_4) || var_1_11) ? (var_1_8 == ((unsigned short int) var_1_9)) : (var_1_8 == ((unsigned short int) var_1_10))))) && ((var_1_5 && (var_1_9 < var_1_2)) ? ((var_1_3 == ((var_1_13 - var_1_8) - var_1_10)) ? (var_1_12 == ((double) ((((var_1_14) < (8.0)) ? (var_1_14) : (8.0))))) : (var_1_12 == ((double) var_1_14))) : (var_1_12 == ((double) var_1_14)))
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
