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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 32;
unsigned char var_1_4 = 0;
signed short int var_1_6 = -100;
double var_1_7 = 100000.0;
signed short int var_1_8 = 16;
signed short int var_1_9 = 8;
double var_1_10 = 2.0;
double var_1_11 = 256.0;
double var_1_12 = 16.0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
double var_1_15 = 256.0;
double var_1_16 = -128.0;
signed char var_1_17 = 4;
unsigned long int var_1_18 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = var_1_13;
 signed short int stepLocal_1 = var_1_6;
 if (var_1_8 < stepLocal_1) {
  if (var_1_4) {
   if (stepLocal_2 || var_1_14) {
    var_1_12 = (var_1_10 - var_1_11);
   } else {
    var_1_12 = (var_1_15 + var_1_16);
   }
  }
 }
 var_1_17 = 1;
 var_1_18 = var_1_9;
 if (((((var_1_12) < (-10.0f)) ? (var_1_12) : (-10.0f))) <= var_1_12) {
  if (var_1_4) {
   var_1_1 = ((((1) < (16)) ? (1) : (16)));
  }
 } else {
  if (((((64) < (var_1_18)) ? (64) : (var_1_18))) == -16) {
   var_1_1 = var_1_6;
  }
 }
 unsigned long int stepLocal_0 = var_1_6 & var_1_18;
 if ((((((var_1_8 - var_1_9)) > ((~ var_1_18))) ? ((var_1_8 - var_1_9)) : ((~ var_1_18)))) == stepLocal_0) {
  var_1_7 = (var_1_10 - var_1_11);
 } else {
  var_1_7 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -32767);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_12) < (-10.0f)) ? (var_1_12) : (-10.0f))) <= var_1_12) ? (var_1_4 ? (var_1_1 == ((signed short int) ((((1) < (16)) ? (1) : (16))))) : 1) : ((((((64) < (var_1_18)) ? (64) : (var_1_18))) == -16) ? (var_1_1 == ((signed short int) var_1_6)) : 1)) && (((((((var_1_8 - var_1_9)) > ((~ var_1_18))) ? ((var_1_8 - var_1_9)) : ((~ var_1_18)))) == (var_1_6 & var_1_18)) ? (var_1_7 == ((double) (var_1_10 - var_1_11))) : (var_1_7 == ((double) var_1_10)))) && ((var_1_8 < var_1_6) ? (var_1_4 ? ((var_1_13 || var_1_14) ? (var_1_12 == ((double) (var_1_10 - var_1_11))) : (var_1_12 == ((double) (var_1_15 + var_1_16)))) : 1) : 1)) && (var_1_17 == ((signed char) 1))) && (var_1_18 == ((unsigned long int) var_1_9))
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
