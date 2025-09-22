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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 256.6;
unsigned short int var_1_3 = 5;
signed long int var_1_4 = 32;
signed long int var_1_5 = 16;
double var_1_6 = 10000.5;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 32;
unsigned char var_1_9 = 0;
signed short int var_1_10 = -32;
float var_1_11 = 64.2;
float var_1_12 = 50.75;
float var_1_13 = 255.8;
signed short int var_1_14 = 1;
signed short int var_1_15 = 8;
signed short int var_1_16 = 2;
signed short int var_1_17 = 256;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_4;
 signed long int stepLocal_1 = var_1_3 + var_1_5;
 if (var_1_8 >= stepLocal_2) {
  if (stepLocal_1 >= var_1_8) {
   var_1_7 = var_1_9;
  }
 }
 signed long int stepLocal_0 = ((((var_1_4) < (-5)) ? (var_1_4) : (-5))) + var_1_5;
 if (var_1_7) {
  if (((((var_1_3) < (0)) ? (var_1_3) : (0))) <= stepLocal_0) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = 24.2;
  }
 } else {
  var_1_1 = 15.5;
 }
 if ((var_1_11 - ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) <= (var_1_1 * var_1_6)) {
  var_1_10 = ((((((var_1_14 + var_1_15)) > (var_1_16)) ? ((var_1_14 + var_1_15)) : (var_1_16))) - var_1_17);
 } else {
  var_1_10 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_7 ? ((((((var_1_3) < (0)) ? (var_1_3) : (0))) <= (((((var_1_4) < (-5)) ? (var_1_4) : (-5))) + var_1_5)) ? (var_1_1 == ((double) var_1_6)) : (var_1_1 == ((double) 24.2))) : (var_1_1 == ((double) 15.5))) && ((var_1_8 >= var_1_4) ? (((var_1_3 + var_1_5) >= var_1_8) ? (var_1_7 == ((unsigned char) var_1_9)) : 1) : 1)) && (((var_1_11 - ((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) <= (var_1_1 * var_1_6)) ? (var_1_10 == ((signed short int) ((((((var_1_14 + var_1_15)) > (var_1_16)) ? ((var_1_14 + var_1_15)) : (var_1_16))) - var_1_17))) : (var_1_10 == ((signed short int) var_1_14)))
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
