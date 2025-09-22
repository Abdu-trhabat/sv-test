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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -10;
unsigned char var_1_2 = 0;
float var_1_3 = 32.4;
float var_1_4 = 49.2;
signed short int var_1_5 = 2;
signed short int var_1_6 = -32;
signed short int var_1_7 = 10;
signed short int var_1_8 = 64;
signed short int var_1_9 = 256;
signed char var_1_10 = -5;
signed char var_1_11 = 5;
double var_1_12 = 256.4;
float var_1_13 = 2.6;
float var_1_14 = 128.125;
double var_1_15 = 32.5;
double var_1_16 = 10000000000.25;
signed char var_1_17 = -5;
unsigned char var_1_18 = 1;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 5;
unsigned long int var_1_21 = 10000000;
unsigned long int var_1_22 = 3445332657;
float var_1_23 = -0.25;
float var_1_24 = 9999999.75;
float var_1_25 = 25.75;
float var_1_26 = 64.25;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_3 > var_1_4;
 if (var_1_2 || stepLocal_0) {
  var_1_1 = (var_1_5 + var_1_6);
 } else {
  var_1_1 = ((((((var_1_7 + 1)) < (var_1_8)) ? ((var_1_7 + 1)) : (var_1_8))) - (24762 - var_1_9));
 }
 var_1_10 = var_1_11;
 if (var_1_4 >= (var_1_3 * (var_1_13 + var_1_14))) {
  var_1_12 = (((((var_1_15 - var_1_16)) < (-0.85)) ? ((var_1_15 - var_1_16)) : (-0.85)));
 } else {
  var_1_12 = var_1_16;
 }
 unsigned char stepLocal_1 = var_1_18;
 if (var_1_14 <= ((((var_1_4) < (var_1_12)) ? (var_1_4) : (var_1_12)))) {
  if (var_1_2 || stepLocal_1) {
   var_1_17 = var_1_11;
  } else {
   var_1_17 = 16;
  }
 }
 if (! var_1_2) {
  var_1_19 = (((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))) + var_1_20);
 }
 if (var_1_18) {
  var_1_21 = (((((3346787891u) > (var_1_22)) ? (3346787891u) : (var_1_22))) - var_1_7);
 }
 if (-1 < var_1_6) {
  var_1_23 = (((((var_1_16 - ((((var_1_15) < (var_1_24)) ? (var_1_15) : (var_1_24))))) < (var_1_25)) ? ((var_1_16 - ((((var_1_15) < (var_1_24)) ? (var_1_15) : (var_1_24))))) : (var_1_25)));
 } else {
  var_1_23 = ((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25)));
 }
 signed long int stepLocal_2 = (var_1_20 + var_1_19) - var_1_7;
 if (var_1_15 > var_1_14) {
  if (stepLocal_2 >= var_1_1) {
   if (var_1_2) {
    var_1_26 = var_1_15;
   } else {
    var_1_26 = 9.999999999999923E13f;
   }
  }
 } else {
  var_1_26 = var_1_15;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 || (var_1_3 > var_1_4)) ? (var_1_1 == ((signed short int) (var_1_5 + var_1_6))) : (var_1_1 == ((signed short int) ((((((var_1_7 + 1)) < (var_1_8)) ? ((var_1_7 + 1)) : (var_1_8))) - (24762 - var_1_9))))) && (var_1_10 == ((signed char) var_1_11))) && ((var_1_4 >= (var_1_3 * (var_1_13 + var_1_14))) ? (var_1_12 == ((double) (((((var_1_15 - var_1_16)) < (-0.85)) ? ((var_1_15 - var_1_16)) : (-0.85))))) : (var_1_12 == ((double) var_1_16)))) && ((var_1_14 <= ((((var_1_4) < (var_1_12)) ? (var_1_4) : (var_1_12)))) ? ((var_1_2 || var_1_18) ? (var_1_17 == ((signed char) var_1_11)) : (var_1_17 == ((signed char) 16))) : 1)) && ((! var_1_2) ? (var_1_19 == ((unsigned short int) (((((var_1_7) < (var_1_9)) ? (var_1_7) : (var_1_9))) + var_1_20))) : 1)) && (var_1_18 ? (var_1_21 == ((unsigned long int) (((((3346787891u) > (var_1_22)) ? (3346787891u) : (var_1_22))) - var_1_7))) : 1)) && ((-1 < var_1_6) ? (var_1_23 == ((float) (((((var_1_16 - ((((var_1_15) < (var_1_24)) ? (var_1_15) : (var_1_24))))) < (var_1_25)) ? ((var_1_16 - ((((var_1_15) < (var_1_24)) ? (var_1_15) : (var_1_24))))) : (var_1_25))))) : (var_1_23 == ((float) ((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25))))))) && ((var_1_15 > var_1_14) ? ((((var_1_20 + var_1_19) - var_1_7) >= var_1_1) ? (var_1_2 ? (var_1_26 == ((float) var_1_15)) : (var_1_26 == ((float) 9.999999999999923E13f))) : 1) : (var_1_26 == ((float) var_1_15)))
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
