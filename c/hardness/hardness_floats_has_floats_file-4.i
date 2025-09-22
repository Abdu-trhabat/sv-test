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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 5;
signed short int var_1_3 = -25;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 25;
unsigned short int var_1_7 = 4;
unsigned char var_1_8 = 4;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 8;
unsigned long int var_1_12 = 10;
float var_1_14 = -2.0;
unsigned long int var_1_16 = 3599463024;
float var_1_17 = -10.0;
float var_1_18 = -16.0;
signed char var_1_19 = 10;
signed char var_1_20 = 10;
void initially(void) {
}
void step(void) {
 var_1_7 = var_1_5;
 var_1_17 = var_1_18;
 var_1_19 = var_1_20;
 if ((- (var_1_17 / var_1_14)) > var_1_17) {
  var_1_12 = (16u + var_1_7);
 } else {
  var_1_12 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (((((var_1_16 - var_1_6) < 0 ) ? -(var_1_16 - var_1_6) : (var_1_16 - var_1_6))))) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (((((var_1_16 - var_1_6) < 0 ) ? -(var_1_16 - var_1_6) : (var_1_16 - var_1_6))))));
 }
 unsigned long int stepLocal_1 = var_1_12;
 unsigned long int stepLocal_0 = var_1_12;
 if ((var_1_12 / var_1_3) >= stepLocal_0) {
  if ((- var_1_3) > stepLocal_1) {
   var_1_1 = ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)));
  }
 }
 signed long int stepLocal_2 = var_1_5 - 64;
 if ((var_1_12 / var_1_3) != stepLocal_2) {
  var_1_8 = ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
 } else {
  var_1_8 = ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_12 / var_1_3) >= var_1_12) ? (((- var_1_3) > var_1_12) ? (var_1_1 == ((unsigned short int) ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1) : 1) && (var_1_7 == ((unsigned short int) var_1_5))) && (((var_1_12 / var_1_3) != (var_1_5 - 64)) ? (var_1_8 == ((unsigned char) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) : (var_1_8 == ((unsigned char) ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))))))) && (((- (var_1_17 / var_1_14)) > var_1_17) ? (var_1_12 == ((unsigned long int) (16u + var_1_7))) : (var_1_12 == ((unsigned long int) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (((((var_1_16 - var_1_6) < 0 ) ? -(var_1_16 - var_1_6) : (var_1_16 - var_1_6))))) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (((((var_1_16 - var_1_6) < 0 ) ? -(var_1_16 - var_1_6) : (var_1_16 - var_1_6)))))))))) && (var_1_17 == ((float) var_1_18))) && (var_1_19 == ((signed char) var_1_20))
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
