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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch52stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
unsigned char var_1_2 = 16;
unsigned char var_1_3 = 32;
signed long int var_1_4 = -32;
signed long int var_1_5 = 8;
unsigned char var_1_6 = 1;
unsigned long int var_1_7 = 64;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 16;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -50;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 4;
double var_1_18 = 100.5;
double var_1_19 = 4.2;
unsigned char var_1_20 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_2 * (~ var_1_3);
 signed long int stepLocal_0 = var_1_4;
 if (stepLocal_1 >= var_1_4) {
  if (stepLocal_0 <= var_1_5) {
   var_1_1 = (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))) - var_1_3);
  }
 } else {
  if (var_1_6) {
   var_1_1 = var_1_2;
  } else {
   var_1_1 = var_1_3;
  }
 }
 unsigned char stepLocal_2 = var_1_3;
 if (stepLocal_2 < (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) {
  if (var_1_6) {
   var_1_7 = var_1_9;
  }
 }
 unsigned char stepLocal_3 = var_1_2;
 if ((64 - var_1_3) >= stepLocal_3) {
  if (! var_1_6) {
   var_1_11 = var_1_10;
  }
 }
 var_1_12 = (var_1_13 && var_1_14);
 unsigned char stepLocal_5 = var_1_8 < var_1_16;
 signed long int stepLocal_4 = var_1_1;
 if (stepLocal_5 && var_1_12) {
  var_1_15 = ((((var_1_10) > ((var_1_16 - var_1_2))) ? (var_1_10) : ((var_1_16 - var_1_2))));
 } else {
  if (var_1_10 < stepLocal_4) {
   var_1_15 = var_1_8;
  } else {
   var_1_15 = var_1_10;
  }
 }
 var_1_17 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 signed long int stepLocal_6 = var_1_1 + var_1_11;
 if (stepLocal_6 < var_1_8) {
  if (! var_1_13) {
   var_1_18 = var_1_19;
  }
 }
 unsigned char stepLocal_7 = var_1_17;
 if (((var_1_10 | var_1_2) % (var_1_8 + var_1_9)) != stepLocal_7) {
  if (var_1_12) {
   var_1_20 = 5;
  } else {
   var_1_20 = var_1_10;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 127);
 assume_abort_if_not(var_1_8 <= 255);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 255);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 * (~ var_1_3)) >= var_1_4) ? ((var_1_4 <= var_1_5) ? (var_1_1 == ((signed long int) (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))) - var_1_3))) : 1) : (var_1_6 ? (var_1_1 == ((signed long int) var_1_2)) : (var_1_1 == ((signed long int) var_1_3)))) && ((var_1_3 < (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) ? (var_1_6 ? (var_1_7 == ((unsigned long int) var_1_9)) : 1) : 1)) && (((64 - var_1_3) >= var_1_2) ? ((! var_1_6) ? (var_1_11 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_12 == ((unsigned char) (var_1_13 && var_1_14)))) && (((var_1_8 < var_1_16) && var_1_12) ? (var_1_15 == ((signed long int) ((((var_1_10) > ((var_1_16 - var_1_2))) ? (var_1_10) : ((var_1_16 - var_1_2)))))) : ((var_1_10 < var_1_1) ? (var_1_15 == ((signed long int) var_1_8)) : (var_1_15 == ((signed long int) var_1_10))))) && (var_1_17 == ((unsigned char) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) && (((var_1_1 + var_1_11) < var_1_8) ? ((! var_1_13) ? (var_1_18 == ((double) var_1_19)) : 1) : 1)) && ((((var_1_10 | var_1_2) % (var_1_8 + var_1_9)) != var_1_17) ? (var_1_12 ? (var_1_20 == ((unsigned char) 5)) : (var_1_20 == ((unsigned char) var_1_10))) : 1)
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
