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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166100_while.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10000;
signed char var_1_9 = 1;
signed long int var_1_10 = 0;
signed long int var_1_11 = 2;
signed char var_1_12 = 0;
unsigned long int var_1_13 = 64;
signed short int var_1_15 = -16;
signed long int var_1_16 = 10000000;
signed long int var_1_17 = -2;
signed long int var_1_18 = -32;
float var_1_19 = 1.2;
float var_1_20 = 32.375;
float var_1_21 = 49.5;
signed short int var_1_22 = 5;
signed short int var_1_23 = 10;
signed short int var_1_24 = 19432;
signed short int var_1_25 = 256;
float var_1_26 = 3.8;
signed char var_1_27 = -4;
unsigned char var_1_28 = 32;
unsigned char last_1_var_1_1 = 1;
signed char last_1_var_1_12 = 0;
unsigned long int last_1_var_1_13 = 64;
signed short int last_1_var_1_15 = -16;
signed long int last_1_var_1_17 = -2;
float last_1_var_1_26 = 3.8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_7 = last_1_var_1_1;
 unsigned long int stepLocal_6 = last_1_var_1_13 >> ((((var_1_11) < (var_1_23)) ? (var_1_11) : (var_1_23)));
 if (stepLocal_7 && var_1_7) {
  if (stepLocal_6 != last_1_var_1_15) {
   if (((((63.4) < (last_1_var_1_26)) ? (63.4) : (last_1_var_1_26))) <= var_1_20) {
    var_1_22 = (((((var_1_9) > ((var_1_24 - var_1_23))) ? (var_1_9) : ((var_1_24 - var_1_23)))) - var_1_11);
   }
  } else {
   var_1_22 = ((((((var_1_11) < (var_1_25)) ? (var_1_11) : (var_1_25))) - var_1_9) + last_1_var_1_12);
  }
 } else {
  var_1_22 = 32;
 }
 if (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) > (~ last_1_var_1_17)) {
  if (-128 <= last_1_var_1_17) {
   var_1_13 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
  }
 } else {
  var_1_13 = var_1_9;
 }
 unsigned long int stepLocal_0 = var_1_13;
 if ((var_1_9 >> (var_1_10 + var_1_11)) <= stepLocal_0) {
  var_1_8 = (((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_11)) < (16)) ? ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_11)) : (16)));
 } else {
  var_1_8 = var_1_10;
 }
 if (var_1_7) {
  if (var_1_16 > var_1_13) {
   var_1_19 = (var_1_20 + var_1_21);
  }
 }
 if (var_1_22 <= ((((var_1_13) > (var_1_22)) ? (var_1_13) : (var_1_22)))) {
  var_1_1 = var_1_5;
 } else {
  if (var_1_5 && var_1_6) {
   if (var_1_22 >= var_1_13) {
    var_1_1 = var_1_5;
   } else {
    var_1_1 = var_1_7;
   }
  }
 }
 unsigned short int stepLocal_1 = var_1_8;
 if (stepLocal_1 > var_1_22) {
  var_1_12 = var_1_11;
 }
 signed long int stepLocal_3 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) / ((((var_1_11) < (var_1_16)) ? (var_1_11) : (var_1_16)));
 signed long int stepLocal_2 = var_1_22 / var_1_11;
 if (stepLocal_3 > var_1_10) {
  if (stepLocal_2 > var_1_13) {
   var_1_15 = (((((var_1_11 - var_1_9) < 0 ) ? -(var_1_11 - var_1_9) : (var_1_11 - var_1_9))) - var_1_10);
  } else {
   var_1_15 = var_1_11;
  }
 } else {
  var_1_15 = var_1_9;
 }
 if (var_1_1) {
  var_1_26 = (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) + var_1_21);
 }
 signed long int stepLocal_5 = 256;
 unsigned char stepLocal_4 = var_1_1;
 if (stepLocal_4 && var_1_5) {
  var_1_17 = ((var_1_8 - var_1_10) + var_1_13);
 } else {
  if (stepLocal_5 == (var_1_9 / ((((-64) < (1000000)) ? (-64) : (1000000))))) {
   var_1_17 = (((((var_1_13) < (var_1_8)) ? (var_1_13) : (var_1_8))) + var_1_18);
  } else {
   var_1_17 = var_1_10;
  }
 }
 if (var_1_17 != ((-128 % var_1_16) * var_1_22)) {
  var_1_27 = ((((var_1_23) < (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_23) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))));
 } else {
  var_1_27 = var_1_10;
 }
 if ((- (- var_1_26)) < (var_1_20 * ((((var_1_26) < (var_1_21)) ? (var_1_26) : (var_1_21))))) {
  var_1_28 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 3);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 3);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -1073741823);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 15);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 16382);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_26 = var_1_26;
}
int property(void) {
 return (((((((((((var_1_22 <= ((((var_1_13) > (var_1_22)) ? (var_1_13) : (var_1_22)))) ? (var_1_1 == ((unsigned char) var_1_5)) : ((var_1_5 && var_1_6) ? ((var_1_22 >= var_1_13) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_7))) : 1)) && (((var_1_9 >> (var_1_10 + var_1_11)) <= var_1_13) ? (var_1_8 == ((unsigned short int) (((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_11)) < (16)) ? ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_11)) : (16))))) : (var_1_8 == ((unsigned short int) var_1_10)))) && ((var_1_8 > var_1_22) ? (var_1_12 == ((signed char) var_1_11)) : 1)) && ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) > (~ last_1_var_1_17)) ? ((-128 <= last_1_var_1_17) ? (var_1_13 == ((unsigned long int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : 1) : (var_1_13 == ((unsigned long int) var_1_9)))) && (((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) / ((((var_1_11) < (var_1_16)) ? (var_1_11) : (var_1_16)))) > var_1_10) ? (((var_1_22 / var_1_11) > var_1_13) ? (var_1_15 == ((signed short int) (((((var_1_11 - var_1_9) < 0 ) ? -(var_1_11 - var_1_9) : (var_1_11 - var_1_9))) - var_1_10))) : (var_1_15 == ((signed short int) var_1_11))) : (var_1_15 == ((signed short int) var_1_9)))) && ((var_1_1 && var_1_5) ? (var_1_17 == ((signed long int) ((var_1_8 - var_1_10) + var_1_13))) : ((256 == (var_1_9 / ((((-64) < (1000000)) ? (-64) : (1000000))))) ? (var_1_17 == ((signed long int) (((((var_1_13) < (var_1_8)) ? (var_1_13) : (var_1_8))) + var_1_18))) : (var_1_17 == ((signed long int) var_1_10))))) && (var_1_7 ? ((var_1_16 > var_1_13) ? (var_1_19 == ((float) (var_1_20 + var_1_21))) : 1) : 1)) && ((last_1_var_1_1 && var_1_7) ? (((last_1_var_1_13 >> ((((var_1_11) < (var_1_23)) ? (var_1_11) : (var_1_23)))) != last_1_var_1_15) ? ((((((63.4) < (last_1_var_1_26)) ? (63.4) : (last_1_var_1_26))) <= var_1_20) ? (var_1_22 == ((signed short int) (((((var_1_9) > ((var_1_24 - var_1_23))) ? (var_1_9) : ((var_1_24 - var_1_23)))) - var_1_11))) : 1) : (var_1_22 == ((signed short int) ((((((var_1_11) < (var_1_25)) ? (var_1_11) : (var_1_25))) - var_1_9) + last_1_var_1_12)))) : (var_1_22 == ((signed short int) 32)))) && (var_1_1 ? (var_1_26 == ((float) (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) + var_1_21))) : 1)) && ((var_1_17 != ((-128 % var_1_16) * var_1_22)) ? (var_1_27 == ((signed char) ((((var_1_23) < (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_23) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))))) : (var_1_27 == ((signed char) var_1_10)))) && (((- (- var_1_26)) < (var_1_20 * ((((var_1_26) < (var_1_21)) ? (var_1_26) : (var_1_21))))) ? (var_1_28 == ((unsigned char) var_1_11)) : 1)
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
