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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Amount100.c", 13, "reach_error"); }
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
signed long int var_1_2 = 2;
signed long int var_1_3 = 4;
signed short int var_1_6 = 4;
signed short int var_1_7 = 10;
signed short int var_1_8 = 200;
signed short int var_1_9 = -4;
unsigned char var_1_10 = 10;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 50;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 4;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 10;
float var_1_19 = 10.75;
float var_1_22 = 1.75;
float var_1_23 = 100.4;
float var_1_24 = 255.5;
float var_1_25 = 49.75;
float var_1_26 = 100000000000.5;
float var_1_27 = 200.4;
float var_1_28 = 8.4;
signed char var_1_29 = -4;
double var_1_30 = 63.5;
double var_1_31 = 24.6;
unsigned long int var_1_32 = 2;
unsigned char var_1_33 = 0;
signed char var_1_34 = -100;
signed char var_1_35 = 50;
unsigned short int var_1_36 = 64;
unsigned short int var_1_37 = 61563;
signed long int var_1_38 = -1;
double var_1_39 = 5.2;
double var_1_40 = 128.2;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
signed char var_1_44 = -25;
signed char var_1_45 = -1;
double last_1_var_1_39 = 5.2;
void initially(void) {
}
void step(void) {
 if (var_1_11 || var_1_33) {
  var_1_32 = (var_1_7 + var_1_12);
 } else {
  if (last_1_var_1_39 > 500.5f) {
   var_1_32 = (3328784126u - var_1_18);
  }
 }
 if ((var_1_2 - var_1_3) > ((var_1_32 * -256) + var_1_32)) {
  var_1_1 = (((((var_1_6 - (var_1_7 + var_1_8))) > (var_1_9)) ? ((var_1_6 - (var_1_7 + var_1_8))) : (var_1_9)));
 } else {
  var_1_1 = var_1_9;
 }
 if (var_1_32 > (var_1_32 / 1)) {
  var_1_30 = (((((var_1_26) < (var_1_31)) ? (var_1_26) : (var_1_31))) + var_1_28);
 } else {
  var_1_30 = var_1_26;
 }
 unsigned long int stepLocal_2 = var_1_32;
 signed long int stepLocal_1 = - ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
 if (var_1_14 == stepLocal_1) {
  if (stepLocal_2 > var_1_18) {
   var_1_34 = ((var_1_16 + var_1_35) - var_1_15);
  } else {
   var_1_34 = var_1_15;
  }
 } else {
  var_1_34 = var_1_15;
 }
 if ((- (var_1_37 - var_1_14)) <= (var_1_2 / ((((var_1_17) < (var_1_38)) ? (var_1_17) : (var_1_38))))) {
  var_1_36 = (var_1_16 + (var_1_13 + var_1_35));
 }
 unsigned char stepLocal_4 = var_1_15;
 unsigned long int stepLocal_3 = (var_1_7 / var_1_38) ^ (- var_1_32);
 if (var_1_36 > stepLocal_3) {
  if (var_1_11) {
   if (var_1_16 <= stepLocal_4) {
    var_1_41 = (var_1_33 && var_1_42);
   } else {
    var_1_41 = (var_1_33 || var_1_43);
   }
  }
 }
 if (var_1_41) {
  var_1_10 = ((((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) < ((var_1_14 + (var_1_15 + var_1_16)))) ? (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) : ((var_1_14 + (var_1_15 + var_1_16)))));
 } else {
  var_1_10 = (var_1_17 - var_1_18);
 }
 signed long int stepLocal_0 = ~ var_1_6;
 if (((((var_1_32) < (var_1_8)) ? (var_1_32) : (var_1_8))) < stepLocal_0) {
  if (var_1_41) {
   var_1_29 = var_1_16;
  }
 } else {
  var_1_29 = var_1_15;
 }
 unsigned char stepLocal_6 = var_1_13;
 unsigned char stepLocal_5 = var_1_10;
 if (stepLocal_5 < ((((var_1_9) < (((((var_1_18) < (var_1_8)) ? (var_1_18) : (var_1_8))))) ? (var_1_9) : (((((var_1_18) < (var_1_8)) ? (var_1_18) : (var_1_8))))))) {
  if (var_1_41) {
   var_1_44 = var_1_15;
  } else {
   if (stepLocal_6 >= var_1_35) {
    var_1_44 = var_1_35;
   } else {
    var_1_44 = var_1_45;
   }
  }
 } else {
  var_1_44 = 4;
 }
 if (var_1_41) {
  var_1_39 = ((((var_1_27) > (((((var_1_26) < (var_1_23)) ? (var_1_26) : (var_1_23))))) ? (var_1_27) : (((((var_1_26) < (var_1_23)) ? (var_1_26) : (var_1_23))))));
 } else {
  var_1_39 = (var_1_28 + (3.75 + (var_1_27 - var_1_40)));
 }
 if ((- var_1_30) < var_1_39) {
  var_1_19 = (((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) < 0 ) ? -((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) : ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))));
 } else {
  var_1_19 = (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) + (var_1_27 + var_1_28)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 64);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65535);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -2147483648);
 assume_abort_if_not(var_1_38 <= 2147483647);
 assume_abort_if_not(var_1_38 != 0);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_39 = var_1_39;
}
int property(void) {
 return ((((((((((((var_1_2 - var_1_3) > ((var_1_32 * -256) + var_1_32)) ? (var_1_1 == ((signed short int) (((((var_1_6 - (var_1_7 + var_1_8))) > (var_1_9)) ? ((var_1_6 - (var_1_7 + var_1_8))) : (var_1_9))))) : (var_1_1 == ((signed short int) var_1_9))) && (var_1_41 ? (var_1_10 == ((unsigned char) ((((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) < ((var_1_14 + (var_1_15 + var_1_16)))) ? (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))) : ((var_1_14 + (var_1_15 + var_1_16))))))) : (var_1_10 == ((unsigned char) (var_1_17 - var_1_18))))) && (((- var_1_30) < var_1_39) ? (var_1_19 == ((float) (((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) < 0 ) ? -((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) : ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))))) : (var_1_19 == ((float) (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) - (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) + (var_1_27 + var_1_28))))))) && ((((((var_1_32) < (var_1_8)) ? (var_1_32) : (var_1_8))) < (~ var_1_6)) ? (var_1_41 ? (var_1_29 == ((signed char) var_1_16)) : 1) : (var_1_29 == ((signed char) var_1_15)))) && ((var_1_32 > (var_1_32 / 1)) ? (var_1_30 == ((double) (((((var_1_26) < (var_1_31)) ? (var_1_26) : (var_1_31))) + var_1_28))) : (var_1_30 == ((double) var_1_26)))) && ((var_1_11 || var_1_33) ? (var_1_32 == ((unsigned long int) (var_1_7 + var_1_12))) : ((last_1_var_1_39 > 500.5f) ? (var_1_32 == ((unsigned long int) (3328784126u - var_1_18))) : 1))) && ((var_1_14 == (- ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? ((var_1_32 > var_1_18) ? (var_1_34 == ((signed char) ((var_1_16 + var_1_35) - var_1_15))) : (var_1_34 == ((signed char) var_1_15))) : (var_1_34 == ((signed char) var_1_15)))) && (((- (var_1_37 - var_1_14)) <= (var_1_2 / ((((var_1_17) < (var_1_38)) ? (var_1_17) : (var_1_38))))) ? (var_1_36 == ((unsigned short int) (var_1_16 + (var_1_13 + var_1_35)))) : 1)) && (var_1_41 ? (var_1_39 == ((double) ((((var_1_27) > (((((var_1_26) < (var_1_23)) ? (var_1_26) : (var_1_23))))) ? (var_1_27) : (((((var_1_26) < (var_1_23)) ? (var_1_26) : (var_1_23)))))))) : (var_1_39 == ((double) (var_1_28 + (3.75 + (var_1_27 - var_1_40))))))) && ((var_1_36 > ((var_1_7 / var_1_38) ^ (- var_1_32))) ? (var_1_11 ? ((var_1_16 <= var_1_15) ? (var_1_41 == ((unsigned char) (var_1_33 && var_1_42))) : (var_1_41 == ((unsigned char) (var_1_33 || var_1_43)))) : 1) : 1)) && ((var_1_10 < ((((var_1_9) < (((((var_1_18) < (var_1_8)) ? (var_1_18) : (var_1_8))))) ? (var_1_9) : (((((var_1_18) < (var_1_8)) ? (var_1_18) : (var_1_8))))))) ? (var_1_41 ? (var_1_44 == ((signed char) var_1_15)) : ((var_1_13 >= var_1_35) ? (var_1_44 == ((signed char) var_1_35)) : (var_1_44 == ((signed char) var_1_45)))) : (var_1_44 == ((signed char) 4)))
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
