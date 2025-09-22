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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
signed long int var_1_2 = -10;
signed long int var_1_3 = -5;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 5;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 32;
unsigned char var_1_9 = 8;
signed char var_1_10 = 4;
signed char var_1_11 = -1;
signed char var_1_12 = 0;
float var_1_13 = 255.5;
float var_1_17 = 2.5;
float var_1_18 = 255.8;
float var_1_19 = 0.0;
float var_1_20 = 16.125;
float var_1_21 = 1.25;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 100;
unsigned char var_1_24 = 100;
unsigned char var_1_25 = 4;
unsigned char var_1_26 = 64;
unsigned char var_1_27 = 25;
signed long int var_1_28 = -64;
float var_1_29 = 9999.8;
signed char var_1_30 = 1;
double var_1_31 = 3.125;
double var_1_32 = 100000.5;
signed char var_1_33 = -100;
unsigned short int var_1_34 = 41658;
unsigned char last_1_var_1_8 = 32;
float last_1_var_1_13 = 255.5;
unsigned char last_1_var_1_22 = 0;
float last_1_var_1_29 = 9999.8;
double last_1_var_1_31 = 3.125;
void initially(void) {
}
void step(void) {
 if (((((((((last_1_var_1_31) < (last_1_var_1_13)) ? (last_1_var_1_31) : (last_1_var_1_13)))) > (1.0000000000000006E15f)) ? (((((last_1_var_1_31) < (last_1_var_1_13)) ? (last_1_var_1_31) : (last_1_var_1_13)))) : (1.0000000000000006E15f))) < last_1_var_1_29) {
  if (var_1_7) {
   var_1_13 = (((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - ((var_1_19 - var_1_20) + var_1_21));
  }
 }
 if (last_1_var_1_8 >= (var_1_4 - var_1_26)) {
  var_1_28 = (((((var_1_25 - last_1_var_1_22)) < (last_1_var_1_8)) ? ((var_1_25 - last_1_var_1_22)) : (last_1_var_1_8)));
 } else {
  var_1_28 = var_1_12;
 }
 if (var_1_7) {
  if ((var_1_28 / var_1_4) >= 50) {
   var_1_22 = (((var_1_23 + var_1_24) - var_1_25) - (var_1_26 - (50 - var_1_27)));
  } else {
   var_1_22 = var_1_25;
  }
 } else {
  var_1_22 = var_1_5;
 }
 if (var_1_2 <= var_1_3) {
  var_1_1 = (var_1_4 - var_1_5);
 }
 if (var_1_7) {
  if (var_1_5 > var_1_4) {
   if ((16 > var_1_5) || (var_1_1 == ((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))))) {
    var_1_6 = var_1_5;
   } else {
    var_1_6 = (var_1_4 - var_1_5);
   }
  } else {
   var_1_6 = var_1_5;
  }
 } else {
  var_1_6 = var_1_5;
 }
 var_1_10 = (var_1_11 - var_1_12);
 signed long int stepLocal_3 = var_1_28 / var_1_24;
 unsigned char stepLocal_2 = var_1_23;
 if (stepLocal_2 <= var_1_22) {
  if ((var_1_27 - (var_1_25 + var_1_30)) == stepLocal_3) {
   var_1_29 = (var_1_18 - (var_1_19 + ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)))));
  } else {
   var_1_29 = 63.5f;
  }
 } else {
  var_1_29 = var_1_21;
 }
 signed long int stepLocal_5 = var_1_24 - var_1_26;
 signed long int stepLocal_4 = var_1_4 * var_1_12;
 if (stepLocal_4 != 16) {
  if (stepLocal_5 >= var_1_28) {
   var_1_32 = (var_1_20 + var_1_19);
  } else {
   var_1_32 = var_1_19;
  }
 }
 unsigned char stepLocal_6 = var_1_24;
 if (var_1_21 <= 4.2f) {
  if (((((var_1_22) < ((var_1_34 - var_1_26))) ? (var_1_22) : ((var_1_34 - var_1_26)))) == stepLocal_6) {
   var_1_33 = ((((32) < (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))) ? (32) : (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))));
  } else {
   var_1_33 = var_1_30;
  }
 } else {
  var_1_33 = var_1_25;
 }
 signed long int stepLocal_1 = (((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5));
 signed long int stepLocal_0 = var_1_28 / var_1_4;
 if (var_1_1 > stepLocal_1) {
  if (var_1_28 > stepLocal_0) {
   var_1_8 = ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)));
  } else {
   var_1_8 = var_1_9;
  }
 } else {
  var_1_8 = var_1_4;
 }
 if (var_1_13 <= (- var_1_29)) {
  var_1_31 = (var_1_19 + var_1_21);
 } else {
  if ((var_1_4 < (- var_1_8)) && var_1_7) {
   var_1_31 = var_1_21;
  } else {
   var_1_31 = var_1_20;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 2305843.009213691400e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 95);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 95);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 63);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 31);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65535);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
}
int property(void) {
 return (((((((((((var_1_2 <= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : 1) && (var_1_7 ? ((var_1_5 > var_1_4) ? (((16 > var_1_5) || (var_1_1 == ((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))))) ? (var_1_6 == ((unsigned char) var_1_5)) : (var_1_6 == ((unsigned char) (var_1_4 - var_1_5)))) : (var_1_6 == ((unsigned char) var_1_5))) : (var_1_6 == ((unsigned char) var_1_5)))) && ((var_1_1 > ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? ((var_1_28 > (var_1_28 / var_1_4)) ? (var_1_8 == ((unsigned char) ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))))) : (var_1_8 == ((unsigned char) var_1_9))) : (var_1_8 == ((unsigned char) var_1_4)))) && (var_1_10 == ((signed char) (var_1_11 - var_1_12)))) && ((((((((((last_1_var_1_31) < (last_1_var_1_13)) ? (last_1_var_1_31) : (last_1_var_1_13)))) > (1.0000000000000006E15f)) ? (((((last_1_var_1_31) < (last_1_var_1_13)) ? (last_1_var_1_31) : (last_1_var_1_13)))) : (1.0000000000000006E15f))) < last_1_var_1_29) ? (var_1_7 ? (var_1_13 == ((float) (((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - ((var_1_19 - var_1_20) + var_1_21)))) : 1) : 1)) && (var_1_7 ? (((var_1_28 / var_1_4) >= 50) ? (var_1_22 == ((unsigned char) (((var_1_23 + var_1_24) - var_1_25) - (var_1_26 - (50 - var_1_27))))) : (var_1_22 == ((unsigned char) var_1_25))) : (var_1_22 == ((unsigned char) var_1_5)))) && ((last_1_var_1_8 >= (var_1_4 - var_1_26)) ? (var_1_28 == ((signed long int) (((((var_1_25 - last_1_var_1_22)) < (last_1_var_1_8)) ? ((var_1_25 - last_1_var_1_22)) : (last_1_var_1_8))))) : (var_1_28 == ((signed long int) var_1_12)))) && ((var_1_23 <= var_1_22) ? (((var_1_27 - (var_1_25 + var_1_30)) == (var_1_28 / var_1_24)) ? (var_1_29 == ((float) (var_1_18 - (var_1_19 + ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))))))) : (var_1_29 == ((float) 63.5f))) : (var_1_29 == ((float) var_1_21)))) && ((var_1_13 <= (- var_1_29)) ? (var_1_31 == ((double) (var_1_19 + var_1_21))) : (((var_1_4 < (- var_1_8)) && var_1_7) ? (var_1_31 == ((double) var_1_21)) : (var_1_31 == ((double) var_1_20))))) && (((var_1_4 * var_1_12) != 16) ? (((var_1_24 - var_1_26) >= var_1_28) ? (var_1_32 == ((double) (var_1_20 + var_1_19))) : (var_1_32 == ((double) var_1_19))) : 1)) && ((var_1_21 <= 4.2f) ? ((((((var_1_22) < ((var_1_34 - var_1_26))) ? (var_1_22) : ((var_1_34 - var_1_26)))) == var_1_24) ? (var_1_33 == ((signed char) ((((32) < (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30))))) ? (32) : (((((var_1_11) > (var_1_30)) ? (var_1_11) : (var_1_30)))))))) : (var_1_33 == ((signed char) var_1_30))) : (var_1_33 == ((signed char) var_1_25)))
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
