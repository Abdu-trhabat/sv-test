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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned char var_1_6 = 1;
double var_1_7 = 8.2;
double var_1_9 = 2.2;
double var_1_10 = 3.8;
unsigned char var_1_11 = 8;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 100;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 16;
unsigned long int var_1_19 = 3643136322;
unsigned long int var_1_20 = 2;
signed long int var_1_21 = -1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed long int var_1_25 = 1000000;
signed long int var_1_26 = 50;
double var_1_27 = 2.2;
float var_1_28 = 10000.75;
float var_1_29 = 9.8;
double var_1_30 = 0.0;
double var_1_31 = 0.0;
double var_1_32 = 2.375;
double var_1_33 = 49.5;
double var_1_34 = 127.265;
double var_1_35 = 24.5;
signed long int var_1_36 = -100000000;
unsigned char last_1_var_1_1 = 1;
unsigned long int last_1_var_1_20 = 2;
signed long int last_1_var_1_21 = -1;
unsigned char last_1_var_1_22 = 1;
signed long int last_1_var_1_25 = 1000000;
signed long int last_1_var_1_36 = -100000000;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = ((((var_1_4 / var_1_15)) < (((((-10) > (last_1_var_1_20)) ? (-10) : (last_1_var_1_20))))) ? ((var_1_4 / var_1_15)) : (((((-10) > (last_1_var_1_20)) ? (-10) : (last_1_var_1_20)))));
 if (stepLocal_2 > last_1_var_1_21) {
  var_1_18 = (var_1_19 - var_1_12);
 } else {
  if (last_1_var_1_22) {
   var_1_18 = var_1_15;
  }
 }
 unsigned char stepLocal_1 = (last_1_var_1_20 % 32u) != 16u;
 if (last_1_var_1_1 || stepLocal_1) {
  var_1_11 = (var_1_12 - var_1_13);
 } else {
  if (var_1_6) {
   var_1_11 = var_1_12;
  } else {
   var_1_11 = var_1_13;
  }
 }
 if ((var_1_16 / -128) > (last_1_var_1_36 - ((((256) < (last_1_var_1_25)) ? (256) : (last_1_var_1_25))))) {
  var_1_17 = ((last_1_var_1_36 <= last_1_var_1_25) || var_1_6);
 }
 if (var_1_17) {
  var_1_22 = var_1_6;
 } else {
  var_1_22 = (var_1_23 || var_1_24);
 }
 if (var_1_17) {
  var_1_36 = ((((var_1_4) > (((((-8) < (1)) ? (-8) : (1))))) ? (var_1_4) : (((((-8) < (1)) ? (-8) : (1))))));
 }
 var_1_20 = ((((var_1_15) > (last_1_var_1_25)) ? (var_1_15) : (last_1_var_1_25)));
 if (! (var_1_18 < var_1_20)) {
  var_1_7 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
 }
 if (var_1_6) {
  var_1_14 = (((((var_1_15 - (var_1_16 - 10))) < (var_1_12)) ? ((var_1_15 - (var_1_16 - 10))) : (var_1_12)));
 } else {
  var_1_14 = (((((var_1_15) > (var_1_12)) ? (var_1_15) : (var_1_12))) - var_1_16);
 }
 if ((0.17500000000000004f - var_1_28) > (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) / var_1_29)) {
  var_1_27 = (32.6 - ((var_1_30 + var_1_31) - var_1_32));
 } else {
  if ((((((var_1_10 * var_1_29)) > (var_1_28)) ? ((var_1_10 * var_1_29)) : (var_1_28))) <= ((((0.6) < (var_1_31)) ? (0.6) : (var_1_31)))) {
   var_1_27 = (var_1_30 + (var_1_33 + (var_1_34 + var_1_35)));
  } else {
   var_1_27 = (((((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9))) < 0 ) ? -((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9))) : ((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9)))));
  }
 }
 unsigned long int stepLocal_3 = (var_1_18 * var_1_12) | var_1_15;
 if (stepLocal_3 < (var_1_19 - ((((var_1_11) > (last_1_var_1_21)) ? (var_1_11) : (last_1_var_1_21))))) {
  var_1_21 = (var_1_11 + ((((var_1_16) > (((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20))))) ? (var_1_16) : (((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20)))))));
 } else {
  var_1_21 = var_1_36;
 }
 unsigned long int stepLocal_4 = var_1_18;
 if (var_1_17) {
  if (stepLocal_4 < ((((var_1_12) < (last_1_var_1_25)) ? (var_1_12) : (last_1_var_1_25)))) {
   var_1_25 = var_1_20;
  } else {
   var_1_25 = (((((var_1_14 - var_1_26)) < (-100)) ? ((var_1_14 - var_1_26)) : (-100)));
  }
 } else {
  var_1_25 = (((((var_1_4) > (var_1_15)) ? (var_1_4) : (var_1_15))) - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
 }
 signed long int stepLocal_0 = var_1_21;
 if (stepLocal_0 != (var_1_25 % var_1_4)) {
  var_1_1 = (var_1_22 || (! 0));
 } else {
  var_1_1 = var_1_6;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 63);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 2147483646);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 2305843.009213691400e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 2305843.009213691400e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -230584.3009213691400e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -115292.1504606845700e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 1152921.504606845700e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -115292.1504606845700e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 1152921.504606845700e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_36 = var_1_36;
}
int property(void) {
 return ((((((((((((var_1_21 != (var_1_25 % var_1_4)) ? (var_1_1 == ((unsigned char) (var_1_22 || (! 0)))) : (var_1_1 == ((unsigned char) var_1_6))) && ((! (var_1_18 < var_1_20)) ? (var_1_7 == ((double) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) : 1)) && ((last_1_var_1_1 || ((last_1_var_1_20 % 32u) != 16u)) ? (var_1_11 == ((unsigned char) (var_1_12 - var_1_13))) : (var_1_6 ? (var_1_11 == ((unsigned char) var_1_12)) : (var_1_11 == ((unsigned char) var_1_13))))) && (var_1_6 ? (var_1_14 == ((unsigned char) (((((var_1_15 - (var_1_16 - 10))) < (var_1_12)) ? ((var_1_15 - (var_1_16 - 10))) : (var_1_12))))) : (var_1_14 == ((unsigned char) (((((var_1_15) > (var_1_12)) ? (var_1_15) : (var_1_12))) - var_1_16))))) && (((var_1_16 / -128) > (last_1_var_1_36 - ((((256) < (last_1_var_1_25)) ? (256) : (last_1_var_1_25))))) ? (var_1_17 == ((unsigned char) ((last_1_var_1_36 <= last_1_var_1_25) || var_1_6))) : 1)) && (((((((var_1_4 / var_1_15)) < (((((-10) > (last_1_var_1_20)) ? (-10) : (last_1_var_1_20))))) ? ((var_1_4 / var_1_15)) : (((((-10) > (last_1_var_1_20)) ? (-10) : (last_1_var_1_20)))))) > last_1_var_1_21) ? (var_1_18 == ((unsigned long int) (var_1_19 - var_1_12))) : (last_1_var_1_22 ? (var_1_18 == ((unsigned long int) var_1_15)) : 1))) && (var_1_20 == ((unsigned long int) ((((var_1_15) > (last_1_var_1_25)) ? (var_1_15) : (last_1_var_1_25)))))) && ((((var_1_18 * var_1_12) | var_1_15) < (var_1_19 - ((((var_1_11) > (last_1_var_1_21)) ? (var_1_11) : (last_1_var_1_21))))) ? (var_1_21 == ((signed long int) (var_1_11 + ((((var_1_16) > (((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20))))) ? (var_1_16) : (((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20))))))))) : (var_1_21 == ((signed long int) var_1_36)))) && (var_1_17 ? (var_1_22 == ((unsigned char) var_1_6)) : (var_1_22 == ((unsigned char) (var_1_23 || var_1_24))))) && (var_1_17 ? ((var_1_18 < ((((var_1_12) < (last_1_var_1_25)) ? (var_1_12) : (last_1_var_1_25)))) ? (var_1_25 == ((signed long int) var_1_20)) : (var_1_25 == ((signed long int) (((((var_1_14 - var_1_26)) < (-100)) ? ((var_1_14 - var_1_26)) : (-100)))))) : (var_1_25 == ((signed long int) (((((var_1_4) > (var_1_15)) ? (var_1_4) : (var_1_15))) - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))))) && (((0.17500000000000004f - var_1_28) > (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) / var_1_29)) ? (var_1_27 == ((double) (32.6 - ((var_1_30 + var_1_31) - var_1_32)))) : (((((((var_1_10 * var_1_29)) > (var_1_28)) ? ((var_1_10 * var_1_29)) : (var_1_28))) <= ((((0.6) < (var_1_31)) ? (0.6) : (var_1_31)))) ? (var_1_27 == ((double) (var_1_30 + (var_1_33 + (var_1_34 + var_1_35))))) : (var_1_27 == ((double) (((((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9))) < 0 ) ? -((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9))) : ((((var_1_34) > (var_1_9)) ? (var_1_34) : (var_1_9)))))))))) && (var_1_17 ? (var_1_36 == ((signed long int) ((((var_1_4) > (((((-8) < (1)) ? (-8) : (1))))) ? (var_1_4) : (((((-8) < (1)) ? (-8) : (1)))))))) : 1)
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
