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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
signed long int var_1_2 = -200;
signed long int var_1_3 = -2;
unsigned long int var_1_4 = 4042214920;
unsigned long int var_1_5 = 10;
unsigned char var_1_6 = 8;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 32;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 10;
signed short int var_1_16 = 16;
unsigned short int var_1_17 = 128;
double var_1_18 = 31.5;
double var_1_19 = 16.5;
double var_1_20 = 32.1;
double var_1_21 = 63.25;
unsigned short int var_1_22 = 128;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 64;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 200;
signed long int var_1_28 = -128;
signed short int var_1_29 = -25;
signed char var_1_31 = 5;
signed char var_1_33 = 10;
signed char var_1_34 = -5;
signed char var_1_35 = -8;
float var_1_36 = 256.075;
float var_1_37 = 127.75;
unsigned long int var_1_38 = 64;
signed long int last_1_var_1_28 = -128;
unsigned long int last_1_var_1_38 = 64;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_5 = - last_1_var_1_38;
 if (last_1_var_1_28 <= stepLocal_5) {
  var_1_23 = ((var_1_24 + var_1_25) - var_1_9);
 }
 if (var_1_2 >= var_1_3) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  if ((var_1_2 / 5) <= -64) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = var_1_5;
  }
 }
 var_1_35 = var_1_33;
 var_1_36 = var_1_37;
 var_1_38 = var_1_27;
 unsigned long int stepLocal_7 = (var_1_27 - var_1_25) + var_1_38;
 unsigned char stepLocal_6 = var_1_27;
 if (var_1_12) {
  if (last_1_var_1_28 > stepLocal_7) {
   if ((var_1_23 / var_1_25) > stepLocal_6) {
    var_1_28 = var_1_16;
   } else {
    var_1_28 = -16;
   }
  }
 }
 if (var_1_28 > -10) {
  if (var_1_38 > (256u * var_1_28)) {
   var_1_13 = 0;
  } else {
   var_1_13 = var_1_12;
  }
 }
 unsigned long int stepLocal_4 = var_1_5 / ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16)));
 unsigned char stepLocal_3 = var_1_23;
 if (stepLocal_3 < var_1_28) {
  if (stepLocal_4 >= var_1_38) {
   var_1_14 = 5;
  }
 }
 if ((((((var_1_28 / var_1_24)) < (var_1_4)) ? ((var_1_28 / var_1_24)) : (var_1_4))) < ((((var_1_38) < (500u)) ? (var_1_38) : (500u)))) {
  var_1_26 = (var_1_27 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))));
 }
 if (var_1_1 > var_1_28) {
  if (var_1_22 <= var_1_5) {
   var_1_29 = (((((var_1_38) < ((var_1_26 + var_1_25))) ? (var_1_38) : ((var_1_26 + var_1_25)))) + ((((var_1_27 + var_1_24) < 0 ) ? -(var_1_27 + var_1_24) : (var_1_27 + var_1_24))));
  }
 } else {
  if (var_1_5 > var_1_27) {
   var_1_29 = var_1_28;
  }
 }
 if (! var_1_13) {
  if (var_1_28 >= var_1_1) {
   var_1_6 = (var_1_8 - var_1_9);
  } else {
   if (var_1_28 <= var_1_1) {
    var_1_6 = var_1_8;
   }
  }
 } else {
  var_1_6 = var_1_9;
 }
 unsigned char stepLocal_2 = (var_1_1 / 10) >= var_1_9;
 unsigned long int stepLocal_1 = var_1_38;
 unsigned long int stepLocal_0 = var_1_38;
 if (stepLocal_0 < var_1_8) {
  if (var_1_13 || stepLocal_2) {
   var_1_10 = (! (! var_1_11));
  } else {
   if (var_1_4 >= stepLocal_1) {
    var_1_10 = var_1_12;
   } else {
    var_1_10 = var_1_11;
   }
  }
 } else {
  var_1_10 = 1;
 }
 if ((var_1_18 - ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))) <= var_1_21) {
  var_1_17 = (((((4 + var_1_8)) > ((var_1_22 + (var_1_29 + var_1_9)))) ? ((4 + var_1_8)) : ((var_1_22 + (var_1_29 + var_1_9)))));
 } else {
  var_1_17 = var_1_8;
 }
 if (var_1_10) {
  var_1_31 = ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 2147483647);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 127);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -32768);
 assume_abort_if_not(var_1_16 <= 32767);
 assume_abort_if_not(var_1_16 != 0);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 63);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 64);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -127);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_28 = var_1_28;
 last_1_var_1_38 = var_1_38;
}
int property(void) {
 return ((((((((((((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_5))) : (((var_1_2 / 5) <= -64) ? (var_1_1 == ((unsigned long int) var_1_4)) : (var_1_1 == ((unsigned long int) var_1_5)))) && ((! var_1_13) ? ((var_1_28 >= var_1_1) ? (var_1_6 == ((unsigned char) (var_1_8 - var_1_9))) : ((var_1_28 <= var_1_1) ? (var_1_6 == ((unsigned char) var_1_8)) : 1)) : (var_1_6 == ((unsigned char) var_1_9)))) && ((var_1_38 < var_1_8) ? ((var_1_13 || ((var_1_1 / 10) >= var_1_9)) ? (var_1_10 == ((unsigned char) (! (! var_1_11)))) : ((var_1_4 >= var_1_38) ? (var_1_10 == ((unsigned char) var_1_12)) : (var_1_10 == ((unsigned char) var_1_11)))) : (var_1_10 == ((unsigned char) 1)))) && ((var_1_28 > -10) ? ((var_1_38 > (256u * var_1_28)) ? (var_1_13 == ((unsigned char) 0)) : (var_1_13 == ((unsigned char) var_1_12))) : 1)) && ((var_1_23 < var_1_28) ? (((var_1_5 / ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16)))) >= var_1_38) ? (var_1_14 == ((unsigned char) 5)) : 1) : 1)) && (((var_1_18 - ((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))) <= var_1_21) ? (var_1_17 == ((unsigned short int) (((((4 + var_1_8)) > ((var_1_22 + (var_1_29 + var_1_9)))) ? ((4 + var_1_8)) : ((var_1_22 + (var_1_29 + var_1_9))))))) : (var_1_17 == ((unsigned short int) var_1_8)))) && ((last_1_var_1_28 <= (- last_1_var_1_38)) ? (var_1_23 == ((unsigned char) ((var_1_24 + var_1_25) - var_1_9))) : 1)) && (((((((var_1_28 / var_1_24)) < (var_1_4)) ? ((var_1_28 / var_1_24)) : (var_1_4))) < ((((var_1_38) < (500u)) ? (var_1_38) : (500u)))) ? (var_1_26 == ((unsigned char) (var_1_27 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) : 1)) && (var_1_12 ? ((last_1_var_1_28 > ((var_1_27 - var_1_25) + var_1_38)) ? (((var_1_23 / var_1_25) > var_1_27) ? (var_1_28 == ((signed long int) var_1_16)) : (var_1_28 == ((signed long int) -16))) : 1) : 1)) && ((var_1_1 > var_1_28) ? ((var_1_22 <= var_1_5) ? (var_1_29 == ((signed short int) (((((var_1_38) < ((var_1_26 + var_1_25))) ? (var_1_38) : ((var_1_26 + var_1_25)))) + ((((var_1_27 + var_1_24) < 0 ) ? -(var_1_27 + var_1_24) : (var_1_27 + var_1_24)))))) : 1) : ((var_1_5 > var_1_27) ? (var_1_29 == ((signed short int) var_1_28)) : 1))) && (var_1_10 ? (var_1_31 == ((signed char) ((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))))) : 1)) && (var_1_35 == ((signed char) var_1_33))) && (var_1_36 == ((float) var_1_37))) && (var_1_38 == ((unsigned long int) var_1_27))
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
