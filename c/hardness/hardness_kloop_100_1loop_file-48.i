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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
signed short int var_1_6 = 0;
signed short int var_1_7 = -1;
float var_1_8 = 128.5;
float var_1_9 = 127.75;
float var_1_10 = 31.8;
float var_1_11 = 32.5;
unsigned char var_1_12 = 8;
unsigned char var_1_13 = 100;
unsigned char var_1_14 = 25;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 16;
double var_1_17 = 64.8;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed char var_1_21 = -100;
signed long int var_1_22 = -1;
float var_1_23 = 5.6;
float var_1_24 = 50.88;
signed short int var_1_25 = -5;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 5;
signed short int var_1_29 = -64;
unsigned char var_1_30 = 1;
unsigned long int var_1_32 = 16;
unsigned char last_1_var_1_18 = 1;
float last_1_var_1_23 = 5.6;
signed short int last_1_var_1_25 = -5;
unsigned char last_1_var_1_26 = 1;
signed short int last_1_var_1_29 = -64;
void initially(void) {
}
void step(void) {
 if ((((((var_1_13) > (0)) ? (var_1_13) : (0))) - last_1_var_1_25) >= last_1_var_1_29) {
  var_1_17 = (var_1_10 + var_1_9);
 } else {
  if (last_1_var_1_18) {
   var_1_17 = var_1_9;
  }
 }
 if (var_1_3) {
  var_1_18 = (var_1_19 || ((var_1_10 > var_1_17) && var_1_20));
 } else {
  var_1_18 = ((! (! var_1_19)) || var_1_20);
 }
 signed long int stepLocal_10 = last_1_var_1_25;
 if (last_1_var_1_23 <= (var_1_24 * ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))))) {
  if (stepLocal_10 > (- (- var_1_6))) {
   var_1_32 = last_1_var_1_25;
  } else {
   var_1_32 = var_1_13;
  }
 } else {
  var_1_32 = var_1_27;
 }
 if (var_1_32 <= (- var_1_32)) {
  var_1_23 = ((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9))) - var_1_24) + var_1_11);
 } else {
  var_1_23 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
 }
 var_1_8 = ((var_1_9 - var_1_10) + var_1_11);
 unsigned long int stepLocal_8 = 10u / var_1_13;
 if (! var_1_20) {
  if (stepLocal_8 < (var_1_22 + last_1_var_1_26)) {
   var_1_26 = ((((var_1_13) < ((var_1_27 - var_1_28))) ? (var_1_13) : ((var_1_27 - var_1_28))));
  } else {
   var_1_26 = (var_1_16 + var_1_15);
  }
 }
 unsigned char stepLocal_9 = var_1_30;
 if (stepLocal_9 && var_1_3) {
  if ((var_1_10 - (var_1_9 + var_1_24)) == var_1_8) {
   var_1_29 = ((((var_1_14) < (((((1) < (var_1_6)) ? (1) : (var_1_6))))) ? (var_1_14) : (((((1) < (var_1_6)) ? (1) : (var_1_6))))));
  }
 } else {
  var_1_29 = 1000;
 }
 signed short int stepLocal_1 = var_1_29;
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 || stepLocal_0) {
  if (stepLocal_1 >= var_1_32) {
   var_1_1 = (var_1_6 + var_1_7);
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_7;
 }
 signed long int stepLocal_7 = -32;
 unsigned char stepLocal_6 = var_1_10 <= (- var_1_9);
 unsigned long int stepLocal_5 = var_1_32;
 if (stepLocal_7 > (~ var_1_1)) {
  if (stepLocal_6 || (10 > 8)) {
   if (var_1_1 > stepLocal_5) {
    var_1_25 = var_1_1;
   }
  }
 } else {
  var_1_25 = var_1_14;
 }
 signed short int stepLocal_3 = var_1_25;
 signed short int stepLocal_2 = var_1_25;
 if (stepLocal_2 >= var_1_32) {
  var_1_12 = ((var_1_13 - var_1_14) + (100 - (var_1_15 - var_1_16)));
 } else {
  if (stepLocal_3 <= 100) {
   var_1_12 = ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)));
  } else {
   var_1_12 = var_1_13;
  }
 }
 signed long int stepLocal_4 = ((((var_1_16) < (var_1_13)) ? (var_1_16) : (var_1_13))) / var_1_22;
 if (((25 + var_1_12) / var_1_15) > stepLocal_4) {
  var_1_21 = ((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14)));
 } else {
  var_1_21 = var_1_14;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 31);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483648);
 assume_abort_if_not(var_1_22 <= 2147483647);
 assume_abort_if_not(var_1_22 != 0);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
}
int property(void) {
 return (((((((((((var_1_2 || var_1_3) ? ((var_1_29 >= var_1_32) ? (var_1_1 == ((signed short int) (var_1_6 + var_1_7))) : (var_1_1 == ((signed short int) var_1_7))) : (var_1_1 == ((signed short int) var_1_7))) && (var_1_8 == ((float) ((var_1_9 - var_1_10) + var_1_11)))) && ((var_1_25 >= var_1_32) ? (var_1_12 == ((unsigned char) ((var_1_13 - var_1_14) + (100 - (var_1_15 - var_1_16))))) : ((var_1_25 <= 100) ? (var_1_12 == ((unsigned char) ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13))))) : (var_1_12 == ((unsigned char) var_1_13))))) && (((((((var_1_13) > (0)) ? (var_1_13) : (0))) - last_1_var_1_25) >= last_1_var_1_29) ? (var_1_17 == ((double) (var_1_10 + var_1_9))) : (last_1_var_1_18 ? (var_1_17 == ((double) var_1_9)) : 1))) && (var_1_3 ? (var_1_18 == ((unsigned char) (var_1_19 || ((var_1_10 > var_1_17) && var_1_20)))) : (var_1_18 == ((unsigned char) ((! (! var_1_19)) || var_1_20))))) && ((((25 + var_1_12) / var_1_15) > (((((var_1_16) < (var_1_13)) ? (var_1_16) : (var_1_13))) / var_1_22)) ? (var_1_21 == ((signed char) ((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))) : (var_1_21 == ((signed char) var_1_14)))) && ((var_1_32 <= (- var_1_32)) ? (var_1_23 == ((float) ((((((var_1_10) < (var_1_9)) ? (var_1_10) : (var_1_9))) - var_1_24) + var_1_11))) : (var_1_23 == ((float) ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) && ((-32 > (~ var_1_1)) ? (((var_1_10 <= (- var_1_9)) || (10 > 8)) ? ((var_1_1 > var_1_32) ? (var_1_25 == ((signed short int) var_1_1)) : 1) : 1) : (var_1_25 == ((signed short int) var_1_14)))) && ((! var_1_20) ? (((10u / var_1_13) < (var_1_22 + last_1_var_1_26)) ? (var_1_26 == ((unsigned char) ((((var_1_13) < ((var_1_27 - var_1_28))) ? (var_1_13) : ((var_1_27 - var_1_28)))))) : (var_1_26 == ((unsigned char) (var_1_16 + var_1_15)))) : 1)) && ((var_1_30 && var_1_3) ? (((var_1_10 - (var_1_9 + var_1_24)) == var_1_8) ? (var_1_29 == ((signed short int) ((((var_1_14) < (((((1) < (var_1_6)) ? (1) : (var_1_6))))) ? (var_1_14) : (((((1) < (var_1_6)) ? (1) : (var_1_6)))))))) : 1) : (var_1_29 == ((signed short int) 1000)))) && ((last_1_var_1_23 <= (var_1_24 * ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))))) ? ((last_1_var_1_25 > (- (- var_1_6))) ? (var_1_32 == ((unsigned long int) last_1_var_1_25)) : (var_1_32 == ((unsigned long int) var_1_13))) : (var_1_32 == ((unsigned long int) var_1_27)))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
