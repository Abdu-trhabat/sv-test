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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 10;
unsigned char var_1_3 = 32;
signed long int var_1_4 = 64;
signed long int var_1_5 = 2;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
double var_1_9 = 16.5;
double var_1_10 = 7.5;
double var_1_11 = 256.4;
double var_1_12 = 0.0;
double var_1_13 = 24.8;
unsigned char var_1_14 = 25;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 32;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 1;
unsigned long int var_1_20 = 2348711285;
signed short int var_1_21 = -16;
signed short int var_1_22 = 4;
float var_1_23 = 7.1;
float var_1_24 = 99.5;
double var_1_25 = 0.5;
unsigned long int var_1_26 = 8;
signed char var_1_27 = 8;
signed char var_1_29 = -16;
signed char var_1_30 = 50;
double var_1_31 = 31.8;
double var_1_32 = 100000000000.5;
double var_1_33 = 24.25;
unsigned char last_1_var_1_18 = 0;
signed short int last_1_var_1_21 = -16;
void initially(void) {
}
void step(void) {
 if ((var_1_2 * var_1_3) < (var_1_4 | var_1_5)) {
  var_1_1 = (last_1_var_1_18 && var_1_7);
 } else {
  var_1_1 = var_1_8;
 }
 if (var_1_7 && var_1_1) {
  if (var_1_7 || var_1_1) {
   var_1_18 = (! var_1_8);
  }
 } else {
  var_1_18 = var_1_7;
 }
 signed long int stepLocal_1 = 256 << last_1_var_1_21;
 if (stepLocal_1 < var_1_16) {
  var_1_19 = (var_1_20 - var_1_15);
 } else {
  var_1_19 = (var_1_20 - last_1_var_1_21);
 }
 unsigned char stepLocal_2 = var_1_8;
 if (stepLocal_2 || var_1_7) {
  var_1_22 = ((((((((var_1_17 - var_1_19)) > (10)) ? ((var_1_17 - var_1_19)) : (10))) < 0 ) ? -(((((var_1_17 - var_1_19)) > (10)) ? ((var_1_17 - var_1_19)) : (10))) : (((((var_1_17 - var_1_19)) > (10)) ? ((var_1_17 - var_1_19)) : (10)))));
 }
 unsigned long int stepLocal_3 = var_1_19;
 if (stepLocal_3 <= (var_1_20 / 2u)) {
  var_1_26 = (4187159452u - ((((var_1_19) > (((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))))) ? (var_1_19) : (((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19)))))));
 }
 signed long int stepLocal_0 = var_1_4;
 if (stepLocal_0 <= (var_1_3 + var_1_2)) {
  var_1_9 = (var_1_10 - (var_1_11 + (var_1_12 - var_1_13)));
 } else {
  var_1_9 = (var_1_12 - var_1_11);
 }
 var_1_14 = (((((128) < (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? (128) : (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))))) - var_1_17);
 if (var_1_18) {
  var_1_23 = ((var_1_12 - var_1_13) + ((((var_1_24 + 9.375f) < 0 ) ? -(var_1_24 + 9.375f) : (var_1_24 + 9.375f))));
 } else {
  var_1_23 = ((((((var_1_13 - 0.15000000000000002f) + var_1_24)) < (7.6f)) ? (((var_1_13 - 0.15000000000000002f) + var_1_24)) : (7.6f)));
 }
 if (var_1_10 >= (var_1_11 + -0.6)) {
  var_1_25 = (var_1_13 - var_1_11);
 }
 unsigned char stepLocal_5 = var_1_8;
 if ((((((var_1_10 / var_1_12)) < (var_1_13)) ? ((var_1_10 / var_1_12)) : (var_1_13))) >= var_1_11) {
  var_1_31 = ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12)));
 } else {
  if (var_1_18) {
   if (var_1_7 && stepLocal_5) {
    var_1_31 = (var_1_13 - var_1_10);
   } else {
    var_1_31 = (((((var_1_13 - var_1_12)) < (var_1_11)) ? ((var_1_13 - var_1_12)) : (var_1_11)));
   }
  } else {
   var_1_31 = ((((var_1_10) < (10000.4)) ? (var_1_10) : (10000.4)));
  }
 }
 var_1_32 = var_1_11;
 var_1_33 = var_1_24;
 if (var_1_31 < var_1_13) {
  if ((5 * var_1_14) <= (var_1_26 - var_1_15)) {
   var_1_21 = var_1_22;
  } else {
   var_1_21 = var_1_14;
  }
 } else {
  var_1_21 = var_1_22;
 }
 unsigned long int stepLocal_4 = ((((var_1_17) > (var_1_19)) ? (var_1_17) : (var_1_19))) + (var_1_19 / var_1_16);
 if (stepLocal_4 < ((((var_1_19) > ((var_1_21 ^ var_1_19))) ? (var_1_19) : ((var_1_21 ^ var_1_19))))) {
  var_1_27 = (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 2305843.009213691400e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -230584.3009213691400e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -126);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -126);
 assume_abort_if_not(var_1_30 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 return (((((((((((((((var_1_2 * var_1_3) < (var_1_4 | var_1_5)) ? (var_1_1 == ((unsigned char) (last_1_var_1_18 && var_1_7))) : (var_1_1 == ((unsigned char) var_1_8))) && ((var_1_4 <= (var_1_3 + var_1_2)) ? (var_1_9 == ((double) (var_1_10 - (var_1_11 + (var_1_12 - var_1_13))))) : (var_1_9 == ((double) (var_1_12 - var_1_11))))) && (var_1_14 == ((unsigned char) (((((128) < (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) ? (128) : (((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))))) - var_1_17)))) && ((var_1_7 && var_1_1) ? ((var_1_7 || var_1_1) ? (var_1_18 == ((unsigned char) (! var_1_8))) : 1) : (var_1_18 == ((unsigned char) var_1_7)))) && (((256 << last_1_var_1_21) < var_1_16) ? (var_1_19 == ((unsigned long int) (var_1_20 - var_1_15))) : (var_1_19 == ((unsigned long int) (var_1_20 - last_1_var_1_21))))) && ((var_1_31 < var_1_13) ? (((5 * var_1_14) <= (var_1_26 - var_1_15)) ? (var_1_21 == ((signed short int) var_1_22)) : (var_1_21 == ((signed short int) var_1_14))) : (var_1_21 == ((signed short int) var_1_22)))) && ((var_1_8 || var_1_7) ? (var_1_22 == ((signed short int) ((((((((var_1_17 - var_1_19)) > (10)) ? ((var_1_17 - var_1_19)) : (10))) < 0 ) ? -(((((var_1_17 - var_1_19)) > (10)) ? ((var_1_17 - var_1_19)) : (10))) : (((((var_1_17 - var_1_19)) > (10)) ? ((var_1_17 - var_1_19)) : (10))))))) : 1)) && (var_1_18 ? (var_1_23 == ((float) ((var_1_12 - var_1_13) + ((((var_1_24 + 9.375f) < 0 ) ? -(var_1_24 + 9.375f) : (var_1_24 + 9.375f)))))) : (var_1_23 == ((float) ((((((var_1_13 - 0.15000000000000002f) + var_1_24)) < (7.6f)) ? (((var_1_13 - 0.15000000000000002f) + var_1_24)) : (7.6f))))))) && ((var_1_10 >= (var_1_11 + -0.6)) ? (var_1_25 == ((double) (var_1_13 - var_1_11))) : 1)) && ((var_1_19 <= (var_1_20 / 2u)) ? (var_1_26 == ((unsigned long int) (4187159452u - ((((var_1_19) > (((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))))) ? (var_1_19) : (((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))))))))) : 1)) && (((((((var_1_17) > (var_1_19)) ? (var_1_17) : (var_1_19))) + (var_1_19 / var_1_16)) < ((((var_1_19) > ((var_1_21 ^ var_1_19))) ? (var_1_19) : ((var_1_21 ^ var_1_19))))) ? (var_1_27 == ((signed char) (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))) : 1)) && (((((((var_1_10 / var_1_12)) < (var_1_13)) ? ((var_1_10 / var_1_12)) : (var_1_13))) >= var_1_11) ? (var_1_31 == ((double) ((((var_1_13) > (var_1_12)) ? (var_1_13) : (var_1_12))))) : (var_1_18 ? ((var_1_7 && var_1_8) ? (var_1_31 == ((double) (var_1_13 - var_1_10))) : (var_1_31 == ((double) (((((var_1_13 - var_1_12)) < (var_1_11)) ? ((var_1_13 - var_1_12)) : (var_1_11)))))) : (var_1_31 == ((double) ((((var_1_10) < (10000.4)) ? (var_1_10) : (10000.4)))))))) && (var_1_32 == ((double) var_1_11))) && (var_1_33 == ((double) var_1_24))
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
