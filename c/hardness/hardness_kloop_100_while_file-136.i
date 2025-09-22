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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
unsigned char var_1_4 = 64;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 32;
unsigned short int var_1_8 = 50;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 58966;
signed char var_1_11 = 0;
double var_1_12 = 2.5;
double var_1_13 = 0.5;
double var_1_14 = 0.3;
double var_1_15 = 9.6;
signed char var_1_17 = 2;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
signed char var_1_21 = -100;
unsigned long int var_1_22 = 100;
unsigned short int var_1_23 = 8;
unsigned short int var_1_24 = 8;
signed char var_1_25 = -1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
signed short int var_1_30 = -8;
signed short int var_1_31 = 10;
double var_1_32 = -0.5;
double var_1_33 = 100000000000.2;
unsigned long int var_1_34 = 1;
signed long int var_1_35 = 100;
unsigned long int var_1_36 = 0;
double var_1_37 = 0.5;
unsigned short int last_1_var_1_8 = 50;
signed char last_1_var_1_25 = -1;
unsigned char last_1_var_1_26 = 1;
unsigned long int last_1_var_1_36 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = ((((4) < (var_1_6)) ? (4) : (var_1_6))) - 128;
 signed long int stepLocal_4 = last_1_var_1_25;
 if (stepLocal_4 == last_1_var_1_8) {
  if ((last_1_var_1_36 * last_1_var_1_8) > stepLocal_5) {
   var_1_21 = 0;
  } else {
   var_1_21 = var_1_17;
  }
 } else {
  var_1_21 = var_1_17;
 }
 var_1_26 = ((var_1_27 && (last_1_var_1_26 || var_1_28)) && (! var_1_29));
 signed long int stepLocal_7 = -1;
 if (stepLocal_7 != ((((var_1_10) > ((var_1_24 / var_1_6))) ? (var_1_10) : ((var_1_24 / var_1_6))))) {
  var_1_32 = ((((var_1_13) < (((((var_1_12) > (var_1_33)) ? (var_1_12) : (var_1_33))))) ? (var_1_13) : (((((var_1_12) > (var_1_33)) ? (var_1_12) : (var_1_33))))));
 } else {
  var_1_32 = var_1_13;
 }
 var_1_35 = 1;
 var_1_37 = 255.8;
 signed long int stepLocal_0 = var_1_7 - var_1_4;
 if (stepLocal_0 == (var_1_6 + var_1_35)) {
  if (var_1_26) {
   var_1_8 = (var_1_10 - var_1_7);
  } else {
   var_1_8 = var_1_7;
  }
 }
 if (((var_1_12 + var_1_13) - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) > var_1_32) {
  if (64.25f > (var_1_15 * var_1_13)) {
   var_1_11 = var_1_17;
  }
 }
 if ((256u >> ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) == (var_1_35 + (var_1_8 * 128u))) {
  var_1_22 = var_1_19;
 } else {
  var_1_22 = var_1_35;
 }
 if (var_1_8 >= var_1_7) {
  var_1_34 = var_1_10;
 }
 var_1_36 = var_1_22;
 if (var_1_8 < var_1_36) {
  var_1_1 = ((((((var_1_4 + 64)) < (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_4 + 64)) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) - var_1_7);
 } else {
  if (var_1_4 > 5) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = var_1_5;
  }
 }
 signed long int stepLocal_3 = var_1_17 % var_1_10;
 signed long int stepLocal_2 = 10;
 unsigned long int stepLocal_1 = var_1_36;
 if (((var_1_22 / var_1_6) % var_1_5) < stepLocal_3) {
  if (stepLocal_2 > var_1_6) {
   if (16 <= stepLocal_1) {
    var_1_18 = (128 - (((((64) < (var_1_4)) ? (64) : (var_1_4))) - var_1_19));
   } else {
    if (! (var_1_9 || var_1_20)) {
     var_1_18 = ((((((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) < (var_1_19)) ? (((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) : (var_1_19)));
    } else {
     var_1_18 = var_1_6;
    }
   }
  } else {
   var_1_18 = var_1_4;
  }
 }
 if (var_1_19 <= ((var_1_21 * var_1_35) | ((((var_1_36) < (5)) ? (var_1_36) : (5))))) {
  var_1_30 = (var_1_31 + var_1_36);
 } else {
  var_1_30 = var_1_36;
 }
 signed short int stepLocal_6 = var_1_30;
 if (var_1_22 <= stepLocal_6) {
  var_1_25 = var_1_17;
 } else {
  var_1_25 = ((((var_1_19) < (((((var_1_23) > (var_1_17)) ? (var_1_23) : (var_1_17))))) ? (var_1_19) : (((((var_1_23) > (var_1_17)) ? (var_1_23) : (var_1_17))))));
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 127);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427388000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427388000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 31);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 31);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -16383);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_36 = var_1_36;
}
int property(void) {
 return ((((((((((((((var_1_8 < var_1_36) ? (var_1_1 == ((unsigned char) ((((((var_1_4 + 64)) < (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_4 + 64)) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) - var_1_7))) : ((var_1_4 > 5) ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_5)))) && (((var_1_7 - var_1_4) == (var_1_6 + var_1_35)) ? (var_1_26 ? (var_1_8 == ((unsigned short int) (var_1_10 - var_1_7))) : (var_1_8 == ((unsigned short int) var_1_7))) : 1)) && ((((var_1_12 + var_1_13) - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) > var_1_32) ? ((64.25f > (var_1_15 * var_1_13)) ? (var_1_11 == ((signed char) var_1_17)) : 1) : 1)) && ((((var_1_22 / var_1_6) % var_1_5) < (var_1_17 % var_1_10)) ? ((10 > var_1_6) ? ((16 <= var_1_36) ? (var_1_18 == ((unsigned char) (128 - (((((64) < (var_1_4)) ? (64) : (var_1_4))) - var_1_19)))) : ((! (var_1_9 || var_1_20)) ? (var_1_18 == ((unsigned char) ((((((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) < (var_1_19)) ? (((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) : (var_1_19))))) : (var_1_18 == ((unsigned char) var_1_6)))) : (var_1_18 == ((unsigned char) var_1_4))) : 1)) && ((last_1_var_1_25 == last_1_var_1_8) ? (((last_1_var_1_36 * last_1_var_1_8) > (((((4) < (var_1_6)) ? (4) : (var_1_6))) - 128)) ? (var_1_21 == ((signed char) 0)) : (var_1_21 == ((signed char) var_1_17))) : (var_1_21 == ((signed char) var_1_17)))) && (((256u >> ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) == (var_1_35 + (var_1_8 * 128u))) ? (var_1_22 == ((unsigned long int) var_1_19)) : (var_1_22 == ((unsigned long int) var_1_35)))) && ((var_1_22 <= var_1_30) ? (var_1_25 == ((signed char) var_1_17)) : (var_1_25 == ((signed char) ((((var_1_19) < (((((var_1_23) > (var_1_17)) ? (var_1_23) : (var_1_17))))) ? (var_1_19) : (((((var_1_23) > (var_1_17)) ? (var_1_23) : (var_1_17)))))))))) && (var_1_26 == ((unsigned char) ((var_1_27 && (last_1_var_1_26 || var_1_28)) && (! var_1_29))))) && ((var_1_19 <= ((var_1_21 * var_1_35) | ((((var_1_36) < (5)) ? (var_1_36) : (5))))) ? (var_1_30 == ((signed short int) (var_1_31 + var_1_36))) : (var_1_30 == ((signed short int) var_1_36)))) && ((-1 != ((((var_1_10) > ((var_1_24 / var_1_6))) ? (var_1_10) : ((var_1_24 / var_1_6))))) ? (var_1_32 == ((double) ((((var_1_13) < (((((var_1_12) > (var_1_33)) ? (var_1_12) : (var_1_33))))) ? (var_1_13) : (((((var_1_12) > (var_1_33)) ? (var_1_12) : (var_1_33)))))))) : (var_1_32 == ((double) var_1_13)))) && ((var_1_8 >= var_1_7) ? (var_1_34 == ((unsigned long int) var_1_10)) : 1)) && (var_1_35 == ((signed long int) 1))) && (var_1_36 == ((unsigned long int) var_1_22))) && (var_1_37 == ((double) 255.8))
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
