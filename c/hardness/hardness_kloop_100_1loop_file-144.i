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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_2 = 1;
signed char var_1_3 = 2;
signed char var_1_4 = 0;
double var_1_5 = 50.5;
double var_1_7 = 8.5;
double var_1_8 = 7.375;
unsigned short int var_1_9 = 256;
unsigned long int var_1_11 = 1;
unsigned long int var_1_12 = 1949491854;
unsigned long int var_1_13 = 1000000000;
signed short int var_1_14 = -2;
unsigned short int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
float var_1_18 = 50.75;
signed long int var_1_20 = -64;
unsigned long int var_1_21 = 256;
signed long int var_1_22 = 2045056629;
unsigned short int var_1_23 = 25;
unsigned char var_1_24 = 1;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_31 = 0;
signed char var_1_32 = -10;
signed long int var_1_33 = 100;
double last_1_var_1_5 = 50.5;
unsigned short int last_1_var_1_9 = 256;
unsigned long int last_1_var_1_11 = 1;
unsigned short int last_1_var_1_15 = 8;
unsigned char last_1_var_1_16 = 0;
signed long int last_1_var_1_20 = -64;
unsigned char last_1_var_1_27 = 0;
signed long int last_1_var_1_33 = 100;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_5 > var_1_7) {
  if (last_1_var_1_16) {
   var_1_9 = ((var_1_2 + var_1_3) + var_1_4);
  } else {
   var_1_9 = var_1_2;
  }
 } else {
  var_1_9 = var_1_2;
 }
 if (var_1_2 >= ((var_1_3 + last_1_var_1_9) ^ var_1_12)) {
  if (! last_1_var_1_16) {
   if (((1 + var_1_26) <= last_1_var_1_20) || (var_1_4 < last_1_var_1_11)) {
    var_1_27 = (! var_1_29);
   } else {
    var_1_27 = ((last_1_var_1_15 < last_1_var_1_33) || (last_1_var_1_16 || (var_1_17 || var_1_29)));
   }
  } else {
   var_1_27 = ((10000 > last_1_var_1_20) && var_1_31);
  }
 } else {
  var_1_27 = 0;
 }
 var_1_16 = (! (var_1_27 || var_1_17));
 if (last_1_var_1_27) {
  var_1_11 = ((var_1_12 - (var_1_13 - 128u)) + var_1_3);
 } else {
  if (16 <= var_1_13) {
   var_1_11 = var_1_12;
  } else {
   var_1_11 = var_1_13;
  }
 }
 var_1_33 = var_1_11;
 unsigned long int stepLocal_2 = (- var_1_13) / (3056966758u - var_1_21);
 if (stepLocal_2 < (var_1_12 * last_1_var_1_33)) {
  var_1_20 = (last_1_var_1_33 - var_1_21);
 } else {
  var_1_20 = ((var_1_22 - (var_1_13 - 16)) - var_1_2);
 }
 if (10 > var_1_20) {
  var_1_15 = var_1_4;
 } else {
  var_1_15 = ((((var_1_4) < (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))) ? (var_1_4) : (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))));
 }
 var_1_1 = ((100 - var_1_2) - ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))));
 if (! var_1_16) {
  var_1_23 = var_1_2;
 } else {
  var_1_23 = ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2)));
 }
 var_1_32 = var_1_3;
 var_1_14 = var_1_32;
 signed long int stepLocal_1 = - 16;
 signed char stepLocal_0 = var_1_4;
 if ((var_1_20 & var_1_9) >= stepLocal_0) {
  if (stepLocal_1 <= var_1_9) {
   var_1_5 = var_1_7;
  } else {
   var_1_5 = var_1_8;
  }
 }
 if (((var_1_5 + var_1_8) + var_1_7) > var_1_5) {
  if (var_1_11 < var_1_4) {
   var_1_18 = var_1_8;
  } else {
   var_1_18 = var_1_7;
  }
 }
 if ((var_1_8 != var_1_5) || var_1_17) {
  if (var_1_16) {
   var_1_24 = (var_1_26 - var_1_3);
  } else {
   if (var_1_9 <= var_1_11) {
    var_1_24 = var_1_3;
   } else {
    var_1_24 = ((((var_1_3) > (var_1_26)) ? (var_1_3) : (var_1_26)));
   }
  }
 } else {
  var_1_24 = var_1_4;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 63);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 536870911);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 2147483646);
 assume_abort_if_not(var_1_21 != 2147483647);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= 1073741822);
 assume_abort_if_not(var_1_22 <= 2147483646);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_33 = var_1_33;
}
int property(void) {
 return (((((((((((((var_1_1 == ((signed char) ((100 - var_1_2) - ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))))) && (((var_1_20 & var_1_9) >= var_1_4) ? (((- 16) <= var_1_9) ? (var_1_5 == ((double) var_1_7)) : (var_1_5 == ((double) var_1_8))) : 1)) && ((last_1_var_1_5 > var_1_7) ? (last_1_var_1_16 ? (var_1_9 == ((unsigned short int) ((var_1_2 + var_1_3) + var_1_4))) : (var_1_9 == ((unsigned short int) var_1_2))) : (var_1_9 == ((unsigned short int) var_1_2)))) && (last_1_var_1_27 ? (var_1_11 == ((unsigned long int) ((var_1_12 - (var_1_13 - 128u)) + var_1_3))) : ((16 <= var_1_13) ? (var_1_11 == ((unsigned long int) var_1_12)) : (var_1_11 == ((unsigned long int) var_1_13))))) && (var_1_14 == ((signed short int) var_1_32))) && ((10 > var_1_20) ? (var_1_15 == ((unsigned short int) var_1_4)) : (var_1_15 == ((unsigned short int) ((((var_1_4) < (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2))))) ? (var_1_4) : (((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2)))))))))) && (var_1_16 == ((unsigned char) (! (var_1_27 || var_1_17))))) && ((((var_1_5 + var_1_8) + var_1_7) > var_1_5) ? ((var_1_11 < var_1_4) ? (var_1_18 == ((float) var_1_8)) : (var_1_18 == ((float) var_1_7))) : 1)) && ((((- var_1_13) / (3056966758u - var_1_21)) < (var_1_12 * last_1_var_1_33)) ? (var_1_20 == ((signed long int) (last_1_var_1_33 - var_1_21))) : (var_1_20 == ((signed long int) ((var_1_22 - (var_1_13 - 16)) - var_1_2))))) && ((! var_1_16) ? (var_1_23 == ((unsigned short int) var_1_2)) : (var_1_23 == ((unsigned short int) ((((var_1_4) < (var_1_2)) ? (var_1_4) : (var_1_2))))))) && (((var_1_8 != var_1_5) || var_1_17) ? (var_1_16 ? (var_1_24 == ((unsigned char) (var_1_26 - var_1_3))) : ((var_1_9 <= var_1_11) ? (var_1_24 == ((unsigned char) var_1_3)) : (var_1_24 == ((unsigned char) ((((var_1_3) > (var_1_26)) ? (var_1_3) : (var_1_26))))))) : (var_1_24 == ((unsigned char) var_1_4)))) && ((var_1_2 >= ((var_1_3 + last_1_var_1_9) ^ var_1_12)) ? ((! last_1_var_1_16) ? ((((1 + var_1_26) <= last_1_var_1_20) || (var_1_4 < last_1_var_1_11)) ? (var_1_27 == ((unsigned char) (! var_1_29))) : (var_1_27 == ((unsigned char) ((last_1_var_1_15 < last_1_var_1_33) || (last_1_var_1_16 || (var_1_17 || var_1_29)))))) : (var_1_27 == ((unsigned char) ((10000 > last_1_var_1_20) && var_1_31)))) : (var_1_27 == ((unsigned char) 0)))) && (var_1_32 == ((signed char) var_1_3))) && (var_1_33 == ((signed long int) var_1_11))
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
