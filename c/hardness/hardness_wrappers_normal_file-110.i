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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
signed long int var_1_3 = 1;
signed long int var_1_4 = -10;
signed long int var_1_5 = -1000;
signed long int var_1_6 = -16;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
double var_1_10 = 15.15;
unsigned long int var_1_11 = 2518712764;
unsigned long int var_1_12 = 100;
double var_1_13 = 0.125;
signed short int var_1_14 = 8;
signed short int var_1_15 = -32;
signed short int var_1_16 = 2;
signed short int var_1_17 = 16;
signed short int var_1_18 = 10;
signed short int var_1_19 = 64;
signed char var_1_20 = -1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) / var_1_6;
 if (var_1_3 != stepLocal_0) {
  var_1_1 = (! var_1_7);
 } else {
  var_1_1 = ((var_1_7 && var_1_8) && var_1_9);
 }
 if (var_1_3 <= (var_1_6 * ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) {
  if ((((((var_1_6 * var_1_4)) < ((var_1_11 - var_1_12))) ? ((var_1_6 * var_1_4)) : ((var_1_11 - var_1_12)))) > ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) {
   var_1_10 = var_1_13;
  }
 }
 if (var_1_1) {
  var_1_14 = (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_17);
 } else {
  var_1_14 = (var_1_18 - var_1_19);
 }
 signed long int stepLocal_1 = var_1_5;
 if (stepLocal_1 <= (var_1_12 << ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) {
  var_1_20 = -64;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -16383);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -16383);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -16383);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_3 != (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) / var_1_6)) ? (var_1_1 == ((unsigned char) (! var_1_7))) : (var_1_1 == ((unsigned char) ((var_1_7 && var_1_8) && var_1_9)))) && ((var_1_3 <= (var_1_6 * ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) ? (((((((var_1_6 * var_1_4)) < ((var_1_11 - var_1_12))) ? ((var_1_6 * var_1_4)) : ((var_1_11 - var_1_12)))) > ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) ? (var_1_10 == ((double) var_1_13)) : 1) : 1)) && (var_1_1 ? (var_1_14 == ((signed short int) (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_17))) : (var_1_14 == ((signed short int) (var_1_18 - var_1_19))))) && ((var_1_5 <= (var_1_12 << ((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))))) ? (var_1_20 == ((signed char) -64)) : 1)
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
