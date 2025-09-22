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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 2;
unsigned char var_1_2 = 0;
signed char var_1_3 = 10;
signed char var_1_4 = 64;
signed char var_1_5 = 5;
signed long int var_1_6 = 64;
double var_1_7 = 4.175;
unsigned char var_1_9 = 100;
unsigned short int var_1_10 = 128;
float var_1_11 = 10.6;
float var_1_12 = 16.25;
float var_1_13 = 0.0;
float var_1_14 = 127.2;
double var_1_15 = 0.75;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 10;
signed char var_1_19 = -25;
signed char var_1_20 = -8;
signed char var_1_21 = -50;
unsigned short int var_1_22 = 8;
signed short int var_1_23 = 2;
signed short int var_1_24 = 20543;
signed short int var_1_25 = 10000;
unsigned short int var_1_26 = 2;
unsigned short int var_1_27 = 58717;
unsigned char var_1_28 = 4;
signed short int var_1_29 = 16635;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 10;
signed short int var_1_36 = 2;
signed long int last_1_var_1_1 = 2;
unsigned short int last_1_var_1_22 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_5 | (last_1_var_1_1 ^ var_1_4);
 signed long int stepLocal_1 = last_1_var_1_1;
 if ((last_1_var_1_1 * (var_1_4 * var_1_5)) < stepLocal_1) {
  if (last_1_var_1_22 != stepLocal_2) {
   if (var_1_2) {
    var_1_7 = 8.5;
   }
  }
 }
 signed long int stepLocal_0 = 500 * var_1_6;
 if (var_1_2) {
  if ((var_1_3 - (var_1_4 - var_1_5)) >= stepLocal_0) {
   var_1_1 = var_1_4;
  }
 } else {
  var_1_1 = var_1_4;
 }
 var_1_10 = ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4)));
 var_1_11 = (var_1_12 - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))));
 if (var_1_2) {
  var_1_15 = ((((((((var_1_14) > (var_1_12)) ? (var_1_14) : (var_1_12)))) < (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (((((var_1_14) > (var_1_12)) ? (var_1_14) : (var_1_12)))) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))));
 } else {
  if (var_1_1 < var_1_4) {
   if (var_1_16 || var_1_17) {
    var_1_15 = var_1_14;
   } else {
    var_1_15 = var_1_13;
   }
  } else {
   var_1_15 = var_1_14;
  }
 }
 signed char stepLocal_3 = var_1_3;
 if (var_1_5 != stepLocal_3) {
  var_1_19 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 } else {
  var_1_19 = (((((var_1_5) < (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_5) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) + var_1_21);
 }
 if ((- ((((var_1_12) < (var_1_7)) ? (var_1_12) : (var_1_7)))) >= var_1_11) {
  var_1_36 = var_1_20;
 }
 if (var_1_1 != 10) {
  var_1_9 = ((((var_1_4) > (2)) ? (var_1_4) : (2)));
 } else {
  if (var_1_10 > (var_1_1 / 128)) {
   if (var_1_2) {
    var_1_9 = var_1_4;
   } else {
    var_1_9 = var_1_5;
   }
  } else {
   var_1_9 = var_1_4;
  }
 }
 if (var_1_7 >= var_1_15) {
  var_1_23 = (var_1_10 - var_1_9);
 } else {
  var_1_23 = ((var_1_24 - (var_1_25 - var_1_9)) - ((((var_1_10) < (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) ? (var_1_10) : (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4)))))));
 }
 if ((var_1_7 + 32.7) != ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) {
  var_1_28 = var_1_4;
 } else {
  if (var_1_24 > (var_1_9 - (var_1_29 - var_1_1))) {
   var_1_28 = ((((((var_1_5 + var_1_30) + (var_1_4 - var_1_31))) < (((((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) < ((var_1_34 - var_1_35))) ? (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) : ((var_1_34 - var_1_35)))))) ? (((var_1_5 + var_1_30) + (var_1_4 - var_1_31))) : (((((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) < ((var_1_34 - var_1_35))) ? (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) : ((var_1_34 - var_1_35)))))));
  }
 }
 var_1_26 = ((var_1_27 - (var_1_25 - var_1_28)) - var_1_23);
 if (((((var_1_36) > (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (var_1_36) : (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) > (var_1_26 + var_1_1)) {
  var_1_18 = var_1_5;
 }
 if (var_1_14 < var_1_12) {
  var_1_22 = ((((var_1_5) < (var_1_26)) ? (var_1_5) : (var_1_26)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 6917529.027641074000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -63);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 16382);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 8191);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 49150);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= 16383);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
}
int property(void) {
 return ((((((((((((var_1_2 ? (((var_1_3 - (var_1_4 - var_1_5)) >= (500 * var_1_6)) ? (var_1_1 == ((signed long int) var_1_4)) : 1) : (var_1_1 == ((signed long int) var_1_4))) && (((last_1_var_1_1 * (var_1_4 * var_1_5)) < last_1_var_1_1) ? ((last_1_var_1_22 != (var_1_5 | (last_1_var_1_1 ^ var_1_4))) ? (var_1_2 ? (var_1_7 == ((double) 8.5)) : 1) : 1) : 1)) && ((var_1_1 != 10) ? (var_1_9 == ((unsigned char) ((((var_1_4) > (2)) ? (var_1_4) : (2))))) : ((var_1_10 > (var_1_1 / 128)) ? (var_1_2 ? (var_1_9 == ((unsigned char) var_1_4)) : (var_1_9 == ((unsigned char) var_1_5))) : (var_1_9 == ((unsigned char) var_1_4))))) && (var_1_10 == ((unsigned short int) ((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4)))))) && (var_1_11 == ((float) (var_1_12 - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))))))) && (var_1_2 ? (var_1_15 == ((double) ((((((((var_1_14) > (var_1_12)) ? (var_1_14) : (var_1_12)))) < (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (((((var_1_14) > (var_1_12)) ? (var_1_14) : (var_1_12)))) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) : ((var_1_1 < var_1_4) ? ((var_1_16 || var_1_17) ? (var_1_15 == ((double) var_1_14)) : (var_1_15 == ((double) var_1_13))) : (var_1_15 == ((double) var_1_14))))) && ((((((var_1_36) > (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (var_1_36) : (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) > (var_1_26 + var_1_1)) ? (var_1_18 == ((unsigned char) var_1_5)) : 1)) && ((var_1_5 != var_1_3) ? (var_1_19 == ((signed char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : (var_1_19 == ((signed char) (((((var_1_5) < (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_5) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) + var_1_21))))) && ((var_1_14 < var_1_12) ? (var_1_22 == ((unsigned short int) ((((var_1_5) < (var_1_26)) ? (var_1_5) : (var_1_26))))) : 1)) && ((var_1_7 >= var_1_15) ? (var_1_23 == ((signed short int) (var_1_10 - var_1_9))) : (var_1_23 == ((signed short int) ((var_1_24 - (var_1_25 - var_1_9)) - ((((var_1_10) < (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))) ? (var_1_10) : (((((var_1_5) < (var_1_4)) ? (var_1_5) : (var_1_4))))))))))) && (var_1_26 == ((unsigned short int) ((var_1_27 - (var_1_25 - var_1_28)) - var_1_23)))) && (((var_1_7 + 32.7) != ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) ? (var_1_28 == ((unsigned char) var_1_4)) : ((var_1_24 > (var_1_9 - (var_1_29 - var_1_1))) ? (var_1_28 == ((unsigned char) ((((((var_1_5 + var_1_30) + (var_1_4 - var_1_31))) < (((((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) < ((var_1_34 - var_1_35))) ? (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) : ((var_1_34 - var_1_35)))))) ? (((var_1_5 + var_1_30) + (var_1_4 - var_1_31))) : (((((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) < ((var_1_34 - var_1_35))) ? (((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) : ((var_1_34 - var_1_35))))))))) : 1))) && (((- ((((var_1_12) < (var_1_7)) ? (var_1_12) : (var_1_7)))) >= var_1_11) ? (var_1_36 == ((signed short int) var_1_20)) : 1)
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
