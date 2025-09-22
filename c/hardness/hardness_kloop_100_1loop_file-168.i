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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -16;
signed long int var_1_2 = -25;
signed long int var_1_3 = 1;
signed long int var_1_4 = 100;
signed char var_1_5 = -25;
signed char var_1_6 = 50;
signed char var_1_7 = -4;
signed char var_1_8 = -4;
signed long int var_1_9 = -128;
signed char var_1_10 = 32;
signed char var_1_11 = 8;
signed char var_1_12 = 0;
signed char var_1_13 = -16;
unsigned char var_1_14 = 10;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 2;
signed short int var_1_17 = 128;
unsigned char var_1_19 = 25;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 100;
float var_1_23 = 31.25;
float var_1_24 = 4.2;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned long int var_1_28 = 1;
unsigned long int var_1_29 = 2101275753;
unsigned long int var_1_30 = 1800740177;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 1;
unsigned char last_1_var_1_19 = 25;
unsigned long int last_1_var_1_28 = 1;
unsigned char last_1_var_1_32 = 1;
void initially(void) {
}
void step(void) {
 if ((((((last_1_var_1_28) > (var_1_10)) ? (last_1_var_1_28) : (var_1_10))) / var_1_21) != ((-1 - 1) / var_1_25)) {
  if (last_1_var_1_32) {
   var_1_26 = var_1_27;
  } else {
   var_1_26 = 1;
  }
 }
 var_1_28 = ((((last_1_var_1_19) < (((var_1_29 + var_1_30) - var_1_25))) ? (last_1_var_1_19) : (((var_1_29 + var_1_30) - var_1_25))));
 unsigned long int stepLocal_2 = (var_1_6 + -8) * var_1_28;
 if (stepLocal_2 == ((((var_1_28) > ((var_1_5 % var_1_9))) ? (var_1_28) : ((var_1_5 % var_1_9))))) {
  var_1_8 = (((((5) < (var_1_10)) ? (5) : (var_1_10))) - var_1_11);
 }
 signed char stepLocal_3 = var_1_13;
 if (var_1_28 <= stepLocal_3) {
  var_1_14 = ((var_1_15 + var_1_16) + var_1_11);
 }
 signed long int stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = var_1_4;
 if (var_1_2 <= stepLocal_0) {
  if ((-1 / var_1_5) < stepLocal_1) {
   var_1_1 = (((((((((((-1) < 0 ) ? -(-1) : (-1))) < 0 ) ? -((((-1) < 0 ) ? -(-1) : (-1))) : ((((-1) < 0 ) ? -(-1) : (-1)))))) > (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) ? ((((((((-1) < 0 ) ? -(-1) : (-1))) < 0 ) ? -((((-1) < 0 ) ? -(-1) : (-1))) : ((((-1) < 0 ) ? -(-1) : (-1)))))) : (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))));
  } else {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (! (var_1_28 <= var_1_14)) {
  var_1_12 = (((((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) < 0 ) ? -((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) : ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13)))));
 } else {
  var_1_12 = var_1_6;
 }
 if (var_1_14 == (var_1_28 + var_1_30)) {
  var_1_35 = var_1_27;
 }
 if (var_1_26) {
  var_1_19 = (var_1_20 - (var_1_15 + var_1_16));
 } else {
  if (var_1_5 >= ((((var_1_8) < (var_1_28)) ? (var_1_8) : (var_1_28)))) {
   var_1_19 = (var_1_15 + (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))) - var_1_16));
  } else {
   if (! (var_1_28 < ((((var_1_5) < (256)) ? (var_1_5) : (256))))) {
    if ((- var_1_23) < (10.4f + var_1_24)) {
     var_1_19 = ((((((((var_1_20 - 10)) < ((var_1_15 + var_1_22))) ? ((var_1_20 - 10)) : ((var_1_15 + var_1_22)))) < 0 ) ? -(((((var_1_20 - 10)) < ((var_1_15 + var_1_22))) ? ((var_1_20 - 10)) : ((var_1_15 + var_1_22)))) : (((((var_1_20 - 10)) < ((var_1_15 + var_1_22))) ? ((var_1_20 - 10)) : ((var_1_15 + var_1_22))))));
    } else {
     var_1_19 = (((((var_1_20) < (var_1_25)) ? (var_1_20) : (var_1_25))) - 32);
    }
   } else {
    var_1_19 = var_1_25;
   }
  }
 }
 unsigned char stepLocal_5 = var_1_25;
 unsigned char stepLocal_4 = var_1_26;
 if (stepLocal_5 < var_1_19) {
  if (stepLocal_4 || ((var_1_21 / 16) > var_1_14)) {
   var_1_31 = ((var_1_23 <= var_1_24) && var_1_27);
  }
 } else {
  var_1_31 = var_1_27;
 }
 if ((var_1_1 < var_1_28) || var_1_31) {
  var_1_17 = ((((var_1_10) > ((var_1_7 + var_1_1))) ? (var_1_10) : ((var_1_7 + var_1_1))));
 }
 unsigned long int stepLocal_6 = var_1_21 * ((((var_1_28) > (var_1_6)) ? (var_1_28) : (var_1_6)));
 if (var_1_17 < stepLocal_6) {
  var_1_32 = (var_1_33 && var_1_34);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -128);
 assume_abort_if_not(var_1_5 <= 127);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -126);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 64);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 127);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 63);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 63);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 1073741823);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 1073741824);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return (((((((((((var_1_2 <= var_1_4) ? (((-1 / var_1_5) < var_1_3) ? (var_1_1 == ((signed char) (((((((((((-1) < 0 ) ? -(-1) : (-1))) < 0 ) ? -((((-1) < 0 ) ? -(-1) : (-1))) : ((((-1) < 0 ) ? -(-1) : (-1)))))) > (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))))) ? ((((((((-1) < 0 ) ? -(-1) : (-1))) < 0 ) ? -((((-1) < 0 ) ? -(-1) : (-1))) : ((((-1) < 0 ) ? -(-1) : (-1)))))) : (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))))))) : (var_1_1 == ((signed char) var_1_6))) : (var_1_1 == ((signed char) var_1_7))) && ((((var_1_6 + -8) * var_1_28) == ((((var_1_28) > ((var_1_5 % var_1_9))) ? (var_1_28) : ((var_1_5 % var_1_9))))) ? (var_1_8 == ((signed char) (((((5) < (var_1_10)) ? (5) : (var_1_10))) - var_1_11))) : 1)) && ((! (var_1_28 <= var_1_14)) ? (var_1_12 == ((signed char) (((((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) < 0 ) ? -((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))) : ((((var_1_11) > (var_1_13)) ? (var_1_11) : (var_1_13))))))) : (var_1_12 == ((signed char) var_1_6)))) && ((var_1_28 <= var_1_13) ? (var_1_14 == ((unsigned char) ((var_1_15 + var_1_16) + var_1_11))) : 1)) && (((var_1_1 < var_1_28) || var_1_31) ? (var_1_17 == ((signed short int) ((((var_1_10) > ((var_1_7 + var_1_1))) ? (var_1_10) : ((var_1_7 + var_1_1)))))) : 1)) && (var_1_26 ? (var_1_19 == ((unsigned char) (var_1_20 - (var_1_15 + var_1_16)))) : ((var_1_5 >= ((((var_1_8) < (var_1_28)) ? (var_1_8) : (var_1_28)))) ? (var_1_19 == ((unsigned char) (var_1_15 + (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))) - var_1_16)))) : ((! (var_1_28 < ((((var_1_5) < (256)) ? (var_1_5) : (256))))) ? (((- var_1_23) < (10.4f + var_1_24)) ? (var_1_19 == ((unsigned char) ((((((((var_1_20 - 10)) < ((var_1_15 + var_1_22))) ? ((var_1_20 - 10)) : ((var_1_15 + var_1_22)))) < 0 ) ? -(((((var_1_20 - 10)) < ((var_1_15 + var_1_22))) ? ((var_1_20 - 10)) : ((var_1_15 + var_1_22)))) : (((((var_1_20 - 10)) < ((var_1_15 + var_1_22))) ? ((var_1_20 - 10)) : ((var_1_15 + var_1_22)))))))) : (var_1_19 == ((unsigned char) (((((var_1_20) < (var_1_25)) ? (var_1_20) : (var_1_25))) - 32)))) : (var_1_19 == ((unsigned char) var_1_25)))))) && (((((((last_1_var_1_28) > (var_1_10)) ? (last_1_var_1_28) : (var_1_10))) / var_1_21) != ((-1 - 1) / var_1_25)) ? (last_1_var_1_32 ? (var_1_26 == ((unsigned char) var_1_27)) : (var_1_26 == ((unsigned char) 1))) : 1)) && (var_1_28 == ((unsigned long int) ((((last_1_var_1_19) < (((var_1_29 + var_1_30) - var_1_25))) ? (last_1_var_1_19) : (((var_1_29 + var_1_30) - var_1_25))))))) && ((var_1_25 < var_1_19) ? ((var_1_26 || ((var_1_21 / 16) > var_1_14)) ? (var_1_31 == ((unsigned char) ((var_1_23 <= var_1_24) && var_1_27))) : 1) : (var_1_31 == ((unsigned char) var_1_27)))) && ((var_1_17 < (var_1_21 * ((((var_1_28) > (var_1_6)) ? (var_1_28) : (var_1_6))))) ? (var_1_32 == ((unsigned char) (var_1_33 && var_1_34))) : 1)) && ((var_1_14 == (var_1_28 + var_1_30)) ? (var_1_35 == ((unsigned char) var_1_27)) : 1)
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
