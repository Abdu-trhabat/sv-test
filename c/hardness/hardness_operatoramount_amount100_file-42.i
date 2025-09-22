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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 50.75;
double var_1_3 = 8.5;
double var_1_4 = 64.5;
double var_1_5 = 9.3;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 2;
double var_1_12 = 127.6;
unsigned char var_1_13 = 0;
unsigned long int var_1_14 = 1000;
unsigned long int var_1_15 = 10000000;
unsigned short int var_1_16 = 64;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 8;
float var_1_20 = 256.6;
float var_1_21 = 1.4;
signed char var_1_22 = -8;
signed char var_1_23 = 1;
signed char var_1_24 = 2;
signed char var_1_25 = -64;
signed char var_1_26 = 50;
signed char var_1_27 = 2;
signed char var_1_28 = 0;
signed char var_1_29 = -10;
unsigned long int var_1_30 = 0;
signed short int var_1_31 = -100;
unsigned char var_1_32 = 5;
unsigned char last_1_var_1_6 = 1;
unsigned char last_1_var_1_17 = 5;
unsigned char last_1_var_1_32 = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_17;
 if (last_1_var_1_32 >= stepLocal_0) {
  var_1_16 = ((((last_1_var_1_32) < ((128 + ((((last_1_var_1_17) < (var_1_11)) ? (last_1_var_1_17) : (var_1_11)))))) ? (last_1_var_1_32) : ((128 + ((((last_1_var_1_17) < (var_1_11)) ? (last_1_var_1_17) : (var_1_11)))))));
 }
 if (var_1_5 != (- var_1_4)) {
  var_1_6 = (last_1_var_1_6 && var_1_8);
 } else {
  var_1_6 = var_1_9;
 }
 var_1_10 = var_1_11;
 var_1_12 = (var_1_3 + ((((1000000.75) < (var_1_5)) ? (1000000.75) : (var_1_5))));
 if (var_1_6) {
  var_1_17 = (var_1_18 - var_1_19);
 } else {
  var_1_17 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
 }
 if (var_1_8) {
  var_1_30 = var_1_18;
 }
 if (var_1_6) {
  var_1_14 = (var_1_16 + var_1_11);
 } else {
  var_1_14 = (((var_1_11 + var_1_16) + ((((var_1_16) > (128u)) ? (var_1_16) : (128u)))) + var_1_15);
 }
 if (var_1_12 <= 2.25) {
  var_1_1 = ((((2.5) < (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) ? (2.5) : (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))));
 } else {
  var_1_1 = ((((((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) > (var_1_4)) ? (((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) : (var_1_4)));
 }
 if ((- (- var_1_5)) >= var_1_1) {
  if (var_1_9) {
   var_1_20 = (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_4);
  } else {
   var_1_20 = (((((var_1_4 + 128.5f)) > ((4.125f - var_1_21))) ? ((var_1_4 + 128.5f)) : ((4.125f - var_1_21))));
  }
 } else {
  var_1_20 = var_1_3;
 }
 if (var_1_12 > 16.8) {
  var_1_22 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
 } else {
  if ((- var_1_1) >= ((var_1_5 + var_1_12) + var_1_1)) {
   var_1_22 = var_1_23;
  } else {
   var_1_22 = var_1_24;
  }
 }
 if (var_1_9) {
  var_1_25 = var_1_24;
 } else {
  if (var_1_5 == var_1_1) {
   var_1_25 = (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) + ((((var_1_27) > (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_27) : (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))))));
  } else {
   var_1_25 = (16 - 10);
  }
 }
 if (var_1_12 > var_1_1) {
  if (var_1_6 && var_1_9) {
   if (var_1_11 > var_1_16) {
    var_1_13 = var_1_11;
   } else {
    var_1_13 = 16;
   }
  } else {
   var_1_13 = var_1_11;
  }
 } else {
  var_1_13 = var_1_11;
 }
 if (! var_1_9) {
  var_1_31 = ((((((var_1_10 + var_1_13)) < ((var_1_14 + var_1_18))) ? ((var_1_10 + var_1_13)) : ((var_1_14 + var_1_18)))) + ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (var_1_23)) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (var_1_23))));
 }
 if (var_1_22 < ((((var_1_15) > (var_1_31)) ? (var_1_15) : (var_1_31)))) {
  var_1_32 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -230584.3009213691400e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691400e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -230584.3009213691400e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -126);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -127);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -63);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -63);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -63);
 assume_abort_if_not(var_1_29 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return ((((((((((((((var_1_12 <= 2.25) ? (var_1_1 == ((double) ((((2.5) < (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) ? (2.5) : (((var_1_3 + var_1_4) + ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))))) : (var_1_1 == ((double) ((((((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) > (var_1_4)) ? (((((7.6) > (var_1_3)) ? (7.6) : (var_1_3)))) : (var_1_4)))))) && ((var_1_5 != (- var_1_4)) ? (var_1_6 == ((unsigned char) (last_1_var_1_6 && var_1_8))) : (var_1_6 == ((unsigned char) var_1_9)))) && (var_1_10 == ((unsigned char) var_1_11))) && (var_1_12 == ((double) (var_1_3 + ((((1000000.75) < (var_1_5)) ? (1000000.75) : (var_1_5))))))) && ((var_1_12 > var_1_1) ? ((var_1_6 && var_1_9) ? ((var_1_11 > var_1_16) ? (var_1_13 == ((unsigned char) var_1_11)) : (var_1_13 == ((unsigned char) 16))) : (var_1_13 == ((unsigned char) var_1_11))) : (var_1_13 == ((unsigned char) var_1_11)))) && (var_1_6 ? (var_1_14 == ((unsigned long int) (var_1_16 + var_1_11))) : (var_1_14 == ((unsigned long int) (((var_1_11 + var_1_16) + ((((var_1_16) > (128u)) ? (var_1_16) : (128u)))) + var_1_15))))) && ((last_1_var_1_32 >= last_1_var_1_17) ? (var_1_16 == ((unsigned short int) ((((last_1_var_1_32) < ((128 + ((((last_1_var_1_17) < (var_1_11)) ? (last_1_var_1_17) : (var_1_11)))))) ? (last_1_var_1_32) : ((128 + ((((last_1_var_1_17) < (var_1_11)) ? (last_1_var_1_17) : (var_1_11))))))))) : 1)) && (var_1_6 ? (var_1_17 == ((unsigned char) (var_1_18 - var_1_19))) : (var_1_17 == ((unsigned char) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))) && (((- (- var_1_5)) >= var_1_1) ? (var_1_9 ? (var_1_20 == ((float) (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + var_1_4))) : (var_1_20 == ((float) (((((var_1_4 + 128.5f)) > ((4.125f - var_1_21))) ? ((var_1_4 + 128.5f)) : ((4.125f - var_1_21))))))) : (var_1_20 == ((float) var_1_3)))) && ((var_1_12 > 16.8) ? (var_1_22 == ((signed char) ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) : (((- var_1_1) >= ((var_1_5 + var_1_12) + var_1_1)) ? (var_1_22 == ((signed char) var_1_23)) : (var_1_22 == ((signed char) var_1_24))))) && (var_1_9 ? (var_1_25 == ((signed char) var_1_24)) : ((var_1_5 == var_1_1) ? (var_1_25 == ((signed char) (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) + ((((var_1_27) > (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_27) : (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))))))))) : (var_1_25 == ((signed char) (16 - 10)))))) && (var_1_8 ? (var_1_30 == ((unsigned long int) var_1_18)) : 1)) && ((! var_1_9) ? (var_1_31 == ((signed short int) ((((((var_1_10 + var_1_13)) < ((var_1_14 + var_1_18))) ? ((var_1_10 + var_1_13)) : ((var_1_14 + var_1_18)))) + ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (var_1_23)) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (var_1_23)))))) : 1)) && ((var_1_22 < ((((var_1_15) > (var_1_31)) ? (var_1_15) : (var_1_31)))) ? (var_1_32 == ((unsigned char) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) : 1)
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
