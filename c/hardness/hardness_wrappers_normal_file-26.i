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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
double var_1_2 = 255.5;
double var_1_3 = 1.25;
signed short int var_1_4 = 1;
signed short int var_1_5 = -10;
signed short int var_1_6 = -1;
signed short int var_1_7 = 5;
signed short int var_1_8 = 4;
signed short int var_1_9 = 0;
signed short int var_1_10 = -32;
signed short int var_1_11 = 1;
float var_1_12 = 1.125;
float var_1_13 = 199.5;
float var_1_14 = 100000000000000.3;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 2;
unsigned long int var_1_17 = 50;
signed long int var_1_19 = -32;
float var_1_20 = 8.75;
void initially(void) {
}
void step(void) {
 if (var_1_2 > var_1_3) {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = (((((var_1_6 - ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) < ((var_1_9 + ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))) ? ((var_1_6 - ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) : ((var_1_9 + ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))));
 }
 var_1_12 = ((0.85f - var_1_13) + var_1_14);
 if ((- var_1_8) >= (var_1_4 / ((((-4) < 0 ) ? -(-4) : (-4))))) {
  var_1_15 = var_1_16;
 }
 signed long int stepLocal_0 = var_1_7 * (var_1_1 / var_1_19);
 if ((var_1_5 + (var_1_11 + var_1_15)) != stepLocal_0) {
  var_1_17 = (((((10u) < ((var_1_15 + var_1_8))) ? (10u) : ((var_1_15 + var_1_8)))) + var_1_7);
 }
 var_1_20 = var_1_13;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -16383);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 assume_abort_if_not(var_1_19 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 > var_1_3) ? (var_1_1 == ((signed short int) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((signed short int) (((((var_1_6 - ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) < ((var_1_9 + ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))) ? ((var_1_6 - ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) : ((var_1_9 + ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))))))) && (var_1_12 == ((float) ((0.85f - var_1_13) + var_1_14)))) && (((- var_1_8) >= (var_1_4 / ((((-4) < 0 ) ? -(-4) : (-4))))) ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && (((var_1_5 + (var_1_11 + var_1_15)) != (var_1_7 * (var_1_1 / var_1_19))) ? (var_1_17 == ((unsigned long int) (((((10u) < ((var_1_15 + var_1_8))) ? (10u) : ((var_1_15 + var_1_8)))) + var_1_7))) : 1)) && (var_1_20 == ((float) var_1_13))
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
