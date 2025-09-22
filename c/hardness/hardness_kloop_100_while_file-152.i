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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
float var_1_3 = 3.2;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 32;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 5;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 256;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 4058586057;
unsigned long int var_1_12 = 4196683688;
unsigned char var_1_13 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 50;
signed short int var_1_17 = -256;
unsigned char var_1_18 = 50;
unsigned short int var_1_19 = 1;
unsigned short int var_1_20 = 2;
signed short int var_1_21 = 8;
signed long int var_1_22 = -10;
signed long int var_1_23 = -5;
signed long int var_1_24 = -1;
signed short int var_1_25 = 25421;
signed long int var_1_26 = 4;
double var_1_27 = 16.2;
double var_1_28 = 31.625;
signed short int var_1_29 = 1;
unsigned char last_1_var_1_13 = 0;
unsigned char last_1_var_1_16 = 50;
unsigned char last_1_var_1_18 = 50;
unsigned short int last_1_var_1_20 = 2;
signed short int last_1_var_1_21 = 8;
signed long int last_1_var_1_26 = 4;
void initially(void) {
}
void step(void) {
 if ((var_1_3 * var_1_27) > var_1_28) {
  var_1_26 = (((((((((last_1_var_1_21) < 0 ) ? -(last_1_var_1_21) : (last_1_var_1_21)))) < (((((2) < 0 ) ? -(2) : (2))))) ? (((((last_1_var_1_21) < 0 ) ? -(last_1_var_1_21) : (last_1_var_1_21)))) : (((((2) < 0 ) ? -(2) : (2)))))) - (last_1_var_1_16 + var_1_25));
 } else {
  var_1_26 = (((((last_1_var_1_20 + (last_1_var_1_20 - 100000000))) > ((1 - (1362038126 - var_1_8)))) ? ((last_1_var_1_20 + (last_1_var_1_20 - 100000000))) : ((1 - (1362038126 - var_1_8)))));
 }
 unsigned char stepLocal_1 = var_1_4;
 if (stepLocal_1 || var_1_10) {
  var_1_9 = (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) - (((((last_1_var_1_21) < (var_1_8)) ? (last_1_var_1_21) : (var_1_8))) + ((((256u) < (last_1_var_1_18)) ? (256u) : (last_1_var_1_18)))));
 } else {
  var_1_9 = (((((var_1_11 - var_1_5)) > (last_1_var_1_18)) ? ((var_1_11 - var_1_5)) : (last_1_var_1_18)));
 }
 unsigned char stepLocal_2 = var_1_4;
 if (stepLocal_2 || last_1_var_1_13) {
  if (! (((((var_1_7) < (var_1_11)) ? (var_1_7) : (var_1_11))) > var_1_9)) {
   var_1_13 = var_1_15;
  }
 } else {
  var_1_13 = var_1_15;
 }
 if (var_1_13) {
  var_1_6 = var_1_5;
 } else {
  var_1_6 = (var_1_7 + ((((var_1_8) < (2)) ? (var_1_8) : (2))));
 }
 if (var_1_13) {
  var_1_16 = (100 + var_1_8);
 }
 if (! ((var_1_11 - var_1_8) <= (10u + var_1_7))) {
  var_1_18 = (var_1_7 + var_1_8);
 } else {
  var_1_18 = var_1_7;
 }
 var_1_29 = var_1_5;
 signed long int stepLocal_0 = last_1_var_1_26;
 if (stepLocal_0 > 1) {
  if (127.625f != (- var_1_3)) {
   if (last_1_var_1_13) {
    var_1_1 = 200;
   }
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_29 >= ((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8)))) {
  var_1_19 = ((((var_1_8) > (var_1_6)) ? (var_1_8) : (var_1_6)));
 } else {
  var_1_19 = 8;
 }
 signed short int stepLocal_5 = var_1_29;
 unsigned long int stepLocal_4 = var_1_19 & var_1_12;
 if (var_1_7 < stepLocal_4) {
  if (((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8))) == stepLocal_5) {
   var_1_20 = (var_1_8 + ((((var_1_5) > (var_1_18)) ? (var_1_5) : (var_1_18))));
  } else {
   var_1_20 = (46758 - ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))));
  }
 }
 unsigned char stepLocal_3 = var_1_1;
 if (var_1_8 < stepLocal_3) {
  var_1_17 = ((((var_1_1) > (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19))))) ? (var_1_1) : (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19))))));
 }
 signed long int stepLocal_7 = (var_1_17 / var_1_22) / ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)));
 unsigned char stepLocal_6 = var_1_5;
 if (stepLocal_6 < (var_1_26 * var_1_17)) {
  if ((var_1_26 | (var_1_8 - var_1_6)) > stepLocal_7) {
   var_1_21 = (var_1_1 - ((var_1_25 - var_1_8) - ((((var_1_18) > (256)) ? (var_1_18) : (256)))));
  }
 } else {
  var_1_21 = ((((var_1_18) < (var_1_7)) ? (var_1_18) : (var_1_7)));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -2147483648);
 assume_abort_if_not(var_1_22 <= 2147483647);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 assume_abort_if_not(var_1_24 != 0);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 24574);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_26 = var_1_26;
}
int property(void) {
 return ((((((((((((last_1_var_1_26 > 1) ? ((127.625f != (- var_1_3)) ? (last_1_var_1_13 ? (var_1_1 == ((unsigned char) 200)) : 1) : (var_1_1 == ((unsigned char) var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) && (var_1_13 ? (var_1_6 == ((unsigned char) var_1_5)) : (var_1_6 == ((unsigned char) (var_1_7 + ((((var_1_8) < (2)) ? (var_1_8) : (2)))))))) && ((var_1_4 || var_1_10) ? (var_1_9 == ((unsigned long int) (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))) - (((((last_1_var_1_21) < (var_1_8)) ? (last_1_var_1_21) : (var_1_8))) + ((((256u) < (last_1_var_1_18)) ? (256u) : (last_1_var_1_18))))))) : (var_1_9 == ((unsigned long int) (((((var_1_11 - var_1_5)) > (last_1_var_1_18)) ? ((var_1_11 - var_1_5)) : (last_1_var_1_18))))))) && ((var_1_4 || last_1_var_1_13) ? ((! (((((var_1_7) < (var_1_11)) ? (var_1_7) : (var_1_11))) > var_1_9)) ? (var_1_13 == ((unsigned char) var_1_15)) : 1) : (var_1_13 == ((unsigned char) var_1_15)))) && (var_1_13 ? (var_1_16 == ((unsigned char) (100 + var_1_8))) : 1)) && ((var_1_8 < var_1_1) ? (var_1_17 == ((signed short int) ((((var_1_1) > (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19))))) ? (var_1_1) : (((((var_1_20) > (var_1_19)) ? (var_1_20) : (var_1_19)))))))) : 1)) && ((! ((var_1_11 - var_1_8) <= (10u + var_1_7))) ? (var_1_18 == ((unsigned char) (var_1_7 + var_1_8))) : (var_1_18 == ((unsigned char) var_1_7)))) && ((var_1_29 >= ((((var_1_9) < (var_1_8)) ? (var_1_9) : (var_1_8)))) ? (var_1_19 == ((unsigned short int) ((((var_1_8) > (var_1_6)) ? (var_1_8) : (var_1_6))))) : (var_1_19 == ((unsigned short int) 8)))) && ((var_1_7 < (var_1_19 & var_1_12)) ? ((((((var_1_9) > (var_1_8)) ? (var_1_9) : (var_1_8))) == var_1_29) ? (var_1_20 == ((unsigned short int) (var_1_8 + ((((var_1_5) > (var_1_18)) ? (var_1_5) : (var_1_18)))))) : (var_1_20 == ((unsigned short int) (46758 - ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))) : 1)) && ((var_1_5 < (var_1_26 * var_1_17)) ? (((var_1_26 | (var_1_8 - var_1_6)) > ((var_1_17 / var_1_22) / ((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))))) ? (var_1_21 == ((signed short int) (var_1_1 - ((var_1_25 - var_1_8) - ((((var_1_18) > (256)) ? (var_1_18) : (256))))))) : 1) : (var_1_21 == ((signed short int) ((((var_1_18) < (var_1_7)) ? (var_1_18) : (var_1_7))))))) && (((var_1_3 * var_1_27) > var_1_28) ? (var_1_26 == ((signed long int) (((((((((last_1_var_1_21) < 0 ) ? -(last_1_var_1_21) : (last_1_var_1_21)))) < (((((2) < 0 ) ? -(2) : (2))))) ? (((((last_1_var_1_21) < 0 ) ? -(last_1_var_1_21) : (last_1_var_1_21)))) : (((((2) < 0 ) ? -(2) : (2)))))) - (last_1_var_1_16 + var_1_25)))) : (var_1_26 == ((signed long int) (((((last_1_var_1_20 + (last_1_var_1_20 - 100000000))) > ((1 - (1362038126 - var_1_8)))) ? ((last_1_var_1_20 + (last_1_var_1_20 - 100000000))) : ((1 - (1362038126 - var_1_8))))))))) && (var_1_29 == ((signed short int) var_1_5))
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
