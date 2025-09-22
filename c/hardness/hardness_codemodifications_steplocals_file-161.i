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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
unsigned long int var_1_2 = 128;
unsigned long int var_1_3 = 1;
unsigned short int var_1_4 = 51684;
unsigned short int var_1_5 = 500;
unsigned short int var_1_6 = 2;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 61769;
unsigned long int var_1_9 = 2;
unsigned long int var_1_10 = 4248305371;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 0;
float var_1_13 = 4.8;
float var_1_14 = 25.3;
float var_1_15 = 256.75;
signed char var_1_16 = -10;
signed char var_1_17 = -100;
signed char var_1_18 = -2;
signed char var_1_19 = -10;
signed char var_1_20 = -2;
signed char var_1_21 = -5;
float var_1_22 = 1.5;
unsigned char var_1_23 = 1;
signed char var_1_24 = -1;
signed char var_1_25 = 5;
signed char var_1_26 = 5;
float var_1_27 = 500.25;
signed long int var_1_28 = -5;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_3;
 if (var_1_2 == stepLocal_0) {
  var_1_1 = (var_1_4 - (var_1_5 + var_1_6));
 } else {
  if (var_1_7) {
   var_1_1 = ((var_1_8 - var_1_6) - var_1_5);
  } else {
   var_1_1 = var_1_6;
  }
 }
 unsigned short int stepLocal_1 = var_1_5;
 if (((((var_1_6 * 4u) < 0 ) ? -(var_1_6 * 4u) : (var_1_6 * 4u))) != stepLocal_1) {
  var_1_9 = (var_1_10 - 50u);
 }
 var_1_11 = (64 + var_1_12);
 var_1_13 = ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)));
 unsigned char stepLocal_2 = var_1_11;
 if (stepLocal_2 >= var_1_8) {
  var_1_16 = ((((var_1_17) < (0)) ? (var_1_17) : (0)));
 } else {
  var_1_16 = (((((((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) + ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) > (var_1_17)) ? ((((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) + ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_17)));
 }
 if (var_1_7 || var_1_23) {
  var_1_22 = ((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)));
 }
 if (var_1_8 >= (- var_1_1)) {
  var_1_24 = (var_1_25 - var_1_26);
 } else {
  var_1_24 = 64;
 }
 if (-25 <= var_1_12) {
  if (! var_1_7) {
   var_1_27 = var_1_15;
  } else {
   if ((var_1_5 + var_1_28) < var_1_6) {
    var_1_27 = ((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14)));
   } else {
    var_1_27 = var_1_15;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 32767);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 49150);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 2147483647);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -63);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 == var_1_3) ? (var_1_1 == ((unsigned short int) (var_1_4 - (var_1_5 + var_1_6)))) : (var_1_7 ? (var_1_1 == ((unsigned short int) ((var_1_8 - var_1_6) - var_1_5))) : (var_1_1 == ((unsigned short int) var_1_6)))) && ((((((var_1_6 * 4u) < 0 ) ? -(var_1_6 * 4u) : (var_1_6 * 4u))) != var_1_5) ? (var_1_9 == ((unsigned long int) (var_1_10 - 50u))) : 1)) && (var_1_11 == ((unsigned char) (64 + var_1_12)))) && (var_1_13 == ((float) ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))))) && ((var_1_11 >= var_1_8) ? (var_1_16 == ((signed char) ((((var_1_17) < (0)) ? (var_1_17) : (0))))) : (var_1_16 == ((signed char) (((((((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) + ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) > (var_1_17)) ? ((((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))) + ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_17))))))) && ((var_1_7 || var_1_23) ? (var_1_22 == ((float) ((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14))))) : 1)) && ((var_1_8 >= (- var_1_1)) ? (var_1_24 == ((signed char) (var_1_25 - var_1_26))) : (var_1_24 == ((signed char) 64)))) && ((-25 <= var_1_12) ? ((! var_1_7) ? (var_1_27 == ((float) var_1_15)) : (((var_1_5 + var_1_28) < var_1_6) ? (var_1_27 == ((float) ((((var_1_15) > (var_1_14)) ? (var_1_15) : (var_1_14))))) : (var_1_27 == ((float) var_1_15)))) : 1)
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
