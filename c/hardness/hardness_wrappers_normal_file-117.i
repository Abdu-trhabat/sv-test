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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 8;
unsigned long int var_1_6 = 1000;
unsigned long int var_1_7 = 64;
double var_1_8 = 4.75;
double var_1_9 = 99.25;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed long int var_1_16 = -2;
signed long int var_1_17 = 256;
signed long int var_1_18 = 1504831784;
double var_1_19 = 256.75;
double var_1_20 = 16.75;
double var_1_21 = 128.79;
double var_1_22 = 9.5;
double var_1_23 = 1.4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_11;
 if (var_1_4 && stepLocal_0) {
  var_1_10 = ((var_1_12 || var_1_13) || (var_1_14 || var_1_15));
 }
 unsigned char stepLocal_1 = var_1_14;
 if (var_1_13 && stepLocal_1) {
  var_1_19 = (((((var_1_20 - var_1_21)) < (((((((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) > (var_1_23)) ? (((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) : (var_1_23))))) ? ((var_1_20 - var_1_21)) : (((((((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) > (var_1_23)) ? (((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) : (var_1_23))))));
 } else {
  var_1_19 = var_1_21;
 }
 if ((var_1_5 >= var_1_6) || var_1_10) {
  if (var_1_10) {
   var_1_1 = 4u;
  } else {
   var_1_1 = ((((var_1_7) > (32u)) ? (var_1_7) : (32u)));
  }
 }
 if (var_1_10) {
  var_1_8 = var_1_9;
 }
 if ((- var_1_9) < var_1_19) {
  var_1_16 = (var_1_17 - (var_1_18 - 5));
 } else {
  var_1_16 = (32 - var_1_18);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967295);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483646);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_5 >= var_1_6) || var_1_10) ? (var_1_10 ? (var_1_1 == ((unsigned long int) 4u)) : (var_1_1 == ((unsigned long int) ((((var_1_7) > (32u)) ? (var_1_7) : (32u)))))) : 1) && (var_1_10 ? (var_1_8 == ((double) var_1_9)) : 1)) && ((var_1_4 && var_1_11) ? (var_1_10 == ((unsigned char) ((var_1_12 || var_1_13) || (var_1_14 || var_1_15)))) : 1)) && (((- var_1_9) < var_1_19) ? (var_1_16 == ((signed long int) (var_1_17 - (var_1_18 - 5)))) : (var_1_16 == ((signed long int) (32 - var_1_18))))) && ((var_1_13 && var_1_14) ? (var_1_19 == ((double) (((((var_1_20 - var_1_21)) < (((((((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) > (var_1_23)) ? (((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) : (var_1_23))))) ? ((var_1_20 - var_1_21)) : (((((((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) > (var_1_23)) ? (((((var_1_9) > (var_1_22)) ? (var_1_9) : (var_1_22)))) : (var_1_23)))))))) : (var_1_19 == ((double) var_1_21)))
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
