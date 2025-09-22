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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch45Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 999999.2;
unsigned short int var_1_2 = 5;
signed long int var_1_3 = -25;
signed long int var_1_4 = -2;
signed long int var_1_5 = -25;
double var_1_6 = 0.0;
double var_1_7 = 5.9;
double var_1_8 = 255.6;
unsigned long int var_1_9 = 4;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 1142722175;
unsigned long int var_1_12 = 1231257437;
signed char var_1_13 = -10;
signed char var_1_14 = 100;
signed char var_1_15 = 4;
signed char var_1_16 = 64;
signed char var_1_17 = 1;
signed char var_1_18 = -8;
unsigned char var_1_19 = 4;
void initially(void) {
}
void step(void) {
 if ((var_1_2 / 32) < (((((var_1_3 + var_1_4)) < (var_1_5)) ? ((var_1_3 + var_1_4)) : (var_1_5)))) {
  var_1_1 = ((var_1_6 - var_1_7) - var_1_8);
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_10) {
  var_1_9 = ((var_1_11 + var_1_12) - 5u);
 }
 unsigned long int stepLocal_0 = var_1_12;
 if (var_1_10) {
  var_1_13 = (var_1_14 - ((((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) < (50)) ? (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) : (50))));
 } else {
  if (stepLocal_0 < (((((var_1_4 + var_1_2)) < (var_1_5)) ? ((var_1_4 + var_1_2)) : (var_1_5)))) {
   var_1_13 = (var_1_17 + var_1_18);
  }
 }
 var_1_19 = var_1_16;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 1073741823);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 1073741824);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 / 32) < (((((var_1_3 + var_1_4)) < (var_1_5)) ? ((var_1_3 + var_1_4)) : (var_1_5)))) ? (var_1_1 == ((double) ((var_1_6 - var_1_7) - var_1_8))) : (var_1_1 == ((double) var_1_6))) && (var_1_10 ? (var_1_9 == ((unsigned long int) ((var_1_11 + var_1_12) - 5u))) : 1)) && (var_1_10 ? (var_1_13 == ((signed char) (var_1_14 - ((((((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) < (50)) ? (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) : (50)))))) : ((var_1_12 < (((((var_1_4 + var_1_2)) < (var_1_5)) ? ((var_1_4 + var_1_2)) : (var_1_5)))) ? (var_1_13 == ((signed char) (var_1_17 + var_1_18))) : 1))) && (var_1_19 == ((unsigned char) var_1_16))
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
