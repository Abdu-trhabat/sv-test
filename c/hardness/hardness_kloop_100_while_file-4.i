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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed short int var_1_4 = 31024;
signed short int var_1_5 = 4;
signed short int var_1_6 = 0;
signed char var_1_7 = -2;
signed char var_1_8 = 8;
signed char var_1_9 = 1;
signed char var_1_10 = -1;
signed short int var_1_13 = -8;
float var_1_16 = 15.2;
float var_1_17 = 3.5;
float var_1_18 = 128.1;
float var_1_19 = 3.5;
float var_1_20 = 0.0;
float var_1_21 = 500.8;
unsigned long int var_1_22 = 1000000000;
float var_1_23 = 4.5;
signed char var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned long int var_1_27 = 2;
signed long int var_1_29 = 128;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 200;
unsigned char var_1_32 = 16;
unsigned char var_1_33 = 64;
signed char var_1_34 = 8;
signed char var_1_35 = 4;
signed char var_1_36 = 10;
signed char var_1_37 = 10;
signed char var_1_38 = 2;
signed char var_1_39 = 16;
signed char var_1_40 = 10;
signed char var_1_41 = 4;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 32;
signed char last_1_var_1_7 = -2;
signed short int last_1_var_1_13 = -8;
unsigned long int last_1_var_1_22 = 1000000000;
unsigned char last_1_var_1_25 = 1;
unsigned long int last_1_var_1_27 = 2;
signed long int last_1_var_1_29 = 128;
unsigned char last_1_var_1_42 = 0;
unsigned short int last_1_var_1_45 = 32;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_7 = last_1_var_1_22;
 signed long int stepLocal_6 = last_1_var_1_13;
 if (var_1_35 > stepLocal_7) {
  if (! var_1_26) {
   var_1_42 = (var_1_26 && var_1_43);
  } else {
   var_1_42 = (((var_1_26 || last_1_var_1_25) && var_1_43) && (last_1_var_1_25 && var_1_44));
  }
 } else {
  if ((((((last_1_var_1_29) > (64)) ? (last_1_var_1_29) : (64))) + (last_1_var_1_7 & last_1_var_1_27)) <= stepLocal_6) {
   var_1_42 = var_1_43;
  }
 }
 if (! (last_1_var_1_25 || last_1_var_1_42)) {
  var_1_13 = ((var_1_4 - var_1_5) - var_1_6);
 }
 var_1_16 = (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - (var_1_19 + (var_1_20 - var_1_21)));
 signed char stepLocal_3 = var_1_9;
 if (var_1_20 >= (var_1_16 / var_1_23)) {
  if ((var_1_6 / var_1_24) > stepLocal_3) {
   var_1_22 = var_1_5;
  }
 }
 unsigned char stepLocal_5 = -5 >= (var_1_8 * var_1_22);
 if (stepLocal_5 && var_1_26) {
  var_1_27 = 1u;
 }
 var_1_30 = ((var_1_31 - var_1_32) - ((((5) < (var_1_33)) ? (5) : (var_1_33))));
 unsigned long int stepLocal_1 = - var_1_27;
 unsigned long int stepLocal_0 = var_1_27;
 if (var_1_22 <= stepLocal_0) {
  if (stepLocal_1 > var_1_22) {
   var_1_1 = ((var_1_4 - var_1_5) - var_1_6);
  }
 } else {
  var_1_1 = var_1_6;
 }
 unsigned long int stepLocal_2 = var_1_27;
 if (var_1_8 <= stepLocal_2) {
  var_1_10 = -10;
 } else {
  if ((- (var_1_16 / 0.6f)) > var_1_16) {
   var_1_10 = var_1_9;
  } else {
   var_1_10 = 1;
  }
 }
 if (var_1_16 < var_1_20) {
  if ((~ var_1_4) == var_1_10) {
   var_1_45 = last_1_var_1_45;
  }
 }
 unsigned long int stepLocal_4 = (var_1_45 + var_1_27) * (~ var_1_5);
 if (var_1_27 > stepLocal_4) {
  var_1_25 = var_1_26;
 }
 if ((! (var_1_13 < 16)) && var_1_42) {
  var_1_29 = -32;
 } else {
  var_1_29 = ((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13)));
 }
 if (var_1_13 < var_1_27) {
  var_1_7 = ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)));
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_24 < (var_1_27 * var_1_10)) {
  if (var_1_29 == var_1_27) {
   var_1_34 = (((((var_1_35 + ((((var_1_32) > (var_1_36)) ? (var_1_32) : (var_1_36))))) > (var_1_31)) ? ((var_1_35 + ((((var_1_32) > (var_1_36)) ? (var_1_32) : (var_1_36))))) : (var_1_31)));
  }
 } else {
  var_1_34 = ((((((var_1_32 + var_1_37)) > (var_1_38)) ? ((var_1_32 + var_1_37)) : (var_1_38))) - ((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) > (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41))));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 16382);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 2305843.009213691400e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -128);
 assume_abort_if_not(var_1_24 <= 127);
 assume_abort_if_not(var_1_24 != 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 190);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -1);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_45 = var_1_45;
}
int property(void) {
 return (((((((((((((var_1_22 <= var_1_27) ? (((- var_1_27) > var_1_22) ? (var_1_1 == ((signed short int) ((var_1_4 - var_1_5) - var_1_6))) : 1) : (var_1_1 == ((signed short int) var_1_6))) && ((var_1_13 < var_1_27) ? (var_1_7 == ((signed char) ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) : (var_1_7 == ((signed char) var_1_8)))) && ((var_1_8 <= var_1_27) ? (var_1_10 == ((signed char) -10)) : (((- (var_1_16 / 0.6f)) > var_1_16) ? (var_1_10 == ((signed char) var_1_9)) : (var_1_10 == ((signed char) 1))))) && ((! (last_1_var_1_25 || last_1_var_1_42)) ? (var_1_13 == ((signed short int) ((var_1_4 - var_1_5) - var_1_6))) : 1)) && (var_1_16 == ((float) (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - (var_1_19 + (var_1_20 - var_1_21)))))) && ((var_1_20 >= (var_1_16 / var_1_23)) ? (((var_1_6 / var_1_24) > var_1_9) ? (var_1_22 == ((unsigned long int) var_1_5)) : 1) : 1)) && ((var_1_27 > ((var_1_45 + var_1_27) * (~ var_1_5))) ? (var_1_25 == ((unsigned char) var_1_26)) : 1)) && (((-5 >= (var_1_8 * var_1_22)) && var_1_26) ? (var_1_27 == ((unsigned long int) 1u)) : 1)) && (((! (var_1_13 < 16)) && var_1_42) ? (var_1_29 == ((signed long int) -32)) : (var_1_29 == ((signed long int) ((((var_1_8) > (var_1_13)) ? (var_1_8) : (var_1_13))))))) && (var_1_30 == ((unsigned char) ((var_1_31 - var_1_32) - ((((5) < (var_1_33)) ? (5) : (var_1_33))))))) && ((var_1_24 < (var_1_27 * var_1_10)) ? ((var_1_29 == var_1_27) ? (var_1_34 == ((signed char) (((((var_1_35 + ((((var_1_32) > (var_1_36)) ? (var_1_32) : (var_1_36))))) > (var_1_31)) ? ((var_1_35 + ((((var_1_32) > (var_1_36)) ? (var_1_32) : (var_1_36))))) : (var_1_31))))) : 1) : (var_1_34 == ((signed char) ((((((var_1_32 + var_1_37)) > (var_1_38)) ? ((var_1_32 + var_1_37)) : (var_1_38))) - ((((((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) > (var_1_41)) ? (((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) : (var_1_41)))))))) && ((var_1_35 > last_1_var_1_22) ? ((! var_1_26) ? (var_1_42 == ((unsigned char) (var_1_26 && var_1_43))) : (var_1_42 == ((unsigned char) (((var_1_26 || last_1_var_1_25) && var_1_43) && (last_1_var_1_25 && var_1_44))))) : (((((((last_1_var_1_29) > (64)) ? (last_1_var_1_29) : (64))) + (last_1_var_1_7 & last_1_var_1_27)) <= last_1_var_1_13) ? (var_1_42 == ((unsigned char) var_1_43)) : 1))) && ((var_1_16 < var_1_20) ? (((~ var_1_4) == var_1_10) ? (var_1_45 == ((unsigned short int) last_1_var_1_45)) : 1) : 1)
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
