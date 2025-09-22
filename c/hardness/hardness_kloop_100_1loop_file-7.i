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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 5;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 128;
signed char var_1_6 = -8;
signed long int var_1_7 = 64;
signed short int var_1_8 = -16;
signed long int var_1_9 = 10000;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 223;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 4;
float var_1_17 = 3.6;
unsigned char var_1_18 = 0;
float var_1_19 = 128.25;
float var_1_20 = 0.0;
float var_1_21 = 31.5;
float var_1_22 = 5.2;
double var_1_23 = 10000000000000.5;
unsigned long int var_1_24 = 4285199284;
unsigned long int var_1_25 = 1672778826;
unsigned char var_1_26 = 1;
float var_1_27 = 0.0;
float var_1_28 = 128.5;
unsigned char var_1_29 = 0;
signed long int var_1_30 = -64;
signed long int var_1_31 = 1834576175;
signed long int var_1_32 = -1625680342;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
signed char var_1_35 = 2;
unsigned long int var_1_36 = 50;
unsigned long int var_1_37 = 3853578120;
float var_1_38 = 2.9;
float var_1_39 = 10.2;
float var_1_40 = 200.8;
unsigned short int var_1_41 = 16;
float last_1_var_1_17 = 3.6;
double last_1_var_1_23 = 10000000000000.5;
unsigned char last_1_var_1_26 = 1;
unsigned char last_1_var_1_33 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = last_1_var_1_26;
 if (last_1_var_1_33 && stepLocal_1) {
  var_1_17 = (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - (var_1_20 - var_1_21));
 } else {
  var_1_17 = ((var_1_20 - var_1_21) - var_1_22);
 }
 signed long int stepLocal_2 = var_1_31;
 if ((var_1_13 * var_1_9) > stepLocal_2) {
  if ((last_1_var_1_17 * var_1_20) >= last_1_var_1_23) {
   var_1_33 = var_1_34;
  } else {
   var_1_33 = var_1_29;
  }
 } else {
  var_1_33 = var_1_29;
 }
 unsigned char stepLocal_5 = var_1_15;
 unsigned char stepLocal_4 = var_1_33;
 if (var_1_18 && stepLocal_4) {
  var_1_38 = var_1_20;
 } else {
  if (stepLocal_5 < 128) {
   if (! var_1_11) {
    var_1_38 = ((((((var_1_39 + var_1_40) + var_1_21)) > (var_1_20)) ? (((var_1_39 + var_1_40) + var_1_21)) : (var_1_20)));
   } else {
    var_1_38 = (var_1_39 + var_1_40);
   }
  } else {
   var_1_38 = ((((var_1_20) > (var_1_28)) ? (var_1_20) : (var_1_28)));
  }
 }
 unsigned long int stepLocal_0 = var_1_3;
 if (var_1_2 > stepLocal_0) {
  if (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < var_1_17) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = -1;
  }
 } else {
  var_1_1 = var_1_6;
 }
 var_1_30 = ((var_1_31 - var_1_14) - (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) - var_1_15));
 var_1_35 = (((((((-1) < 0 ) ? -(-1) : (-1))) < 0 ) ? -((((-1) < 0 ) ? -(-1) : (-1))) : ((((-1) < 0 ) ? -(-1) : (-1)))));
 signed long int stepLocal_3 = -25;
 if (stepLocal_3 <= (~ var_1_15)) {
  var_1_36 = ((var_1_25 - var_1_16) + var_1_12);
 } else {
  var_1_36 = (((((var_1_32) > (var_1_37)) ? (var_1_32) : (var_1_37))) - var_1_30);
 }
 if ((var_1_6 / var_1_8) > var_1_36) {
  var_1_7 = ((var_1_9 - 256) + var_1_6);
 } else {
  var_1_7 = ((((var_1_8) < (-500)) ? (var_1_8) : (-500)));
 }
 if ((var_1_21 - (var_1_27 - var_1_28)) >= var_1_17) {
  var_1_26 = var_1_29;
 } else {
  var_1_26 = (var_1_33 && var_1_29);
 }
 if (var_1_36 <= (var_1_24 - (var_1_25 - var_1_13))) {
  var_1_23 = (((((var_1_21 - 10000.25)) > (((((256.625) > (var_1_20)) ? (256.625) : (var_1_20))))) ? ((var_1_21 - 10000.25)) : (((((256.625) > (var_1_20)) ? (256.625) : (var_1_20))))));
 } else {
  if (((((var_1_17) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_17) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) >= (var_1_22 + var_1_17)) {
   var_1_23 = var_1_22;
  } else {
   var_1_23 = (var_1_21 - var_1_22);
  }
 }
 if (! var_1_26) {
  var_1_10 = (((var_1_12 - var_1_13) - ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) - var_1_16);
 } else {
  var_1_10 = (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_14);
 }
 var_1_41 = var_1_10;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32768);
 assume_abort_if_not(var_1_8 <= 32767);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 222);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 1073741823);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 4611686.018427388000e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427388000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= 1073741822);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483646);
 assume_abort_if_not(var_1_32 <= -1073741823);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -230584.3009213691400e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_33 = var_1_33;
}
int property(void) {
 return ((((((((((((var_1_2 > var_1_3) ? ((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < var_1_17) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) -1))) : (var_1_1 == ((signed char) var_1_6))) && (((var_1_6 / var_1_8) > var_1_36) ? (var_1_7 == ((signed long int) ((var_1_9 - 256) + var_1_6))) : (var_1_7 == ((signed long int) ((((var_1_8) < (-500)) ? (var_1_8) : (-500))))))) && ((! var_1_26) ? (var_1_10 == ((unsigned char) (((var_1_12 - var_1_13) - ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))) - var_1_16))) : (var_1_10 == ((unsigned char) (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_14))))) && ((last_1_var_1_33 && last_1_var_1_26) ? (var_1_17 == ((float) (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - (var_1_20 - var_1_21)))) : (var_1_17 == ((float) ((var_1_20 - var_1_21) - var_1_22))))) && ((var_1_36 <= (var_1_24 - (var_1_25 - var_1_13))) ? (var_1_23 == ((double) (((((var_1_21 - 10000.25)) > (((((256.625) > (var_1_20)) ? (256.625) : (var_1_20))))) ? ((var_1_21 - 10000.25)) : (((((256.625) > (var_1_20)) ? (256.625) : (var_1_20)))))))) : ((((((var_1_17) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_17) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) >= (var_1_22 + var_1_17)) ? (var_1_23 == ((double) var_1_22)) : (var_1_23 == ((double) (var_1_21 - var_1_22)))))) && (((var_1_21 - (var_1_27 - var_1_28)) >= var_1_17) ? (var_1_26 == ((unsigned char) var_1_29)) : (var_1_26 == ((unsigned char) (var_1_33 && var_1_29))))) && (var_1_30 == ((signed long int) ((var_1_31 - var_1_14) - (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) - var_1_15))))) && (((var_1_13 * var_1_9) > var_1_31) ? (((last_1_var_1_17 * var_1_20) >= last_1_var_1_23) ? (var_1_33 == ((unsigned char) var_1_34)) : (var_1_33 == ((unsigned char) var_1_29))) : (var_1_33 == ((unsigned char) var_1_29)))) && (var_1_35 == ((signed char) (((((((-1) < 0 ) ? -(-1) : (-1))) < 0 ) ? -((((-1) < 0 ) ? -(-1) : (-1))) : ((((-1) < 0 ) ? -(-1) : (-1)))))))) && ((-25 <= (~ var_1_15)) ? (var_1_36 == ((unsigned long int) ((var_1_25 - var_1_16) + var_1_12))) : (var_1_36 == ((unsigned long int) (((((var_1_32) > (var_1_37)) ? (var_1_32) : (var_1_37))) - var_1_30))))) && ((var_1_18 && var_1_33) ? (var_1_38 == ((float) var_1_20)) : ((var_1_15 < 128) ? ((! var_1_11) ? (var_1_38 == ((float) ((((((var_1_39 + var_1_40) + var_1_21)) > (var_1_20)) ? (((var_1_39 + var_1_40) + var_1_21)) : (var_1_20))))) : (var_1_38 == ((float) (var_1_39 + var_1_40)))) : (var_1_38 == ((float) ((((var_1_20) > (var_1_28)) ? (var_1_20) : (var_1_28)))))))) && (var_1_41 == ((unsigned short int) var_1_10))
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
