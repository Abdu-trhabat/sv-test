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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
unsigned short int var_1_5 = 50;
unsigned long int var_1_6 = 0;
unsigned char var_1_7 = 5;
unsigned char var_1_8 = 64;
double var_1_9 = 0.19999999999999996;
signed long int var_1_10 = 10;
signed long int var_1_11 = -256;
double var_1_12 = 100.5;
double var_1_13 = 4.8;
unsigned short int var_1_14 = 32;
unsigned char var_1_15 = 16;
unsigned short int var_1_17 = 50;
unsigned short int var_1_18 = 32;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 128;
double var_1_25 = 200.2;
float var_1_26 = 15.875;
float var_1_27 = 99.5;
double var_1_28 = 15.5;
double var_1_29 = 1.375;
double var_1_30 = 2.2;
signed short int var_1_31 = 0;
unsigned long int var_1_33 = 0;
unsigned long int var_1_35 = 1242031767;
unsigned long int var_1_36 = 1921477797;
unsigned short int last_1_var_1_1 = 32;
unsigned long int last_1_var_1_6 = 0;
double last_1_var_1_9 = 0.19999999999999996;
unsigned short int last_1_var_1_14 = 32;
unsigned char last_1_var_1_15 = 16;
unsigned char last_1_var_1_19 = 1;
double last_1_var_1_25 = 200.2;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_4 = var_1_18;
 signed long int stepLocal_3 = (var_1_18 * var_1_21) + last_1_var_1_15;
 if (last_1_var_1_19) {
  if (stepLocal_4 != ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1)))) {
   if (stepLocal_3 >= var_1_17) {
    if ((var_1_13 + last_1_var_1_25) > var_1_28) {
     var_1_33 = ((var_1_8 + var_1_24) + last_1_var_1_14);
    } else {
     var_1_33 = ((((((var_1_35 + var_1_36) - last_1_var_1_6)) > (last_1_var_1_14)) ? (((var_1_35 + var_1_36) - last_1_var_1_6)) : (last_1_var_1_14)));
    }
   } else {
    var_1_33 = (((((var_1_21) < (var_1_8)) ? (var_1_21) : (var_1_8))) + ((((last_1_var_1_6) < (8u)) ? (last_1_var_1_6) : (8u))));
   }
  } else {
   var_1_33 = var_1_5;
  }
 } else {
  var_1_33 = var_1_36;
 }
 if ((var_1_26 - var_1_27) < 199.5f) {
  var_1_25 = ((var_1_28 + var_1_29) + (((((16.4 - var_1_30)) > (var_1_12)) ? ((16.4 - var_1_30)) : (var_1_12))));
 }
 if (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) < var_1_25) {
  if ((var_1_33 % ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) > var_1_8) {
   var_1_9 = (var_1_12 + var_1_13);
  }
 }
 if (last_1_var_1_9 < (- (var_1_13 * last_1_var_1_9))) {
  var_1_14 = 256;
 }
 signed long int stepLocal_1 = var_1_20 - var_1_21;
 if (stepLocal_1 < ((var_1_33 * var_1_14) / var_1_17)) {
  var_1_19 = (! var_1_22);
 }
 if (! ((- 9.9999999999925E11) >= var_1_25)) {
  if (var_1_25 >= var_1_9) {
   if (var_1_25 < 7.5) {
    if (var_1_19) {
     var_1_1 = var_1_5;
    } else {
     var_1_1 = 64;
    }
   } else {
    var_1_1 = var_1_5;
   }
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_5;
 }
 if ((- 128) <= var_1_5) {
  var_1_6 = ((((10u + var_1_5) < 0 ) ? -(10u + var_1_5) : (10u + var_1_5)));
 } else {
  var_1_6 = var_1_14;
 }
 unsigned long int stepLocal_0 = var_1_33 / (var_1_17 + var_1_18);
 if (var_1_1 < stepLocal_0) {
  var_1_15 = ((((4) > (var_1_8)) ? (4) : (var_1_8)));
 } else {
  var_1_15 = var_1_8;
 }
 if ((var_1_33 * var_1_10) >= var_1_14) {
  var_1_31 = var_1_6;
 }
 unsigned char stepLocal_2 = var_1_20;
 if (var_1_12 > var_1_25) {
  var_1_23 = (var_1_24 - var_1_21);
 } else {
  if (var_1_19) {
   if ((var_1_11 % var_1_10) > stepLocal_2) {
    var_1_23 = var_1_21;
   } else {
    var_1_23 = var_1_24;
   }
  }
 }
 if (((((var_1_1) > (-128)) ? (var_1_1) : (-128))) < (var_1_5 * var_1_6)) {
  var_1_7 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 32768);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 127);
 assume_abort_if_not(var_1_20 <= 255);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 1073741823);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1073741824);
 assume_abort_if_not(var_1_36 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_25 = var_1_25;
}
int property(void) {
 return (((((((((((! ((- 9.9999999999925E11) >= var_1_25)) ? ((var_1_25 >= var_1_9) ? ((var_1_25 < 7.5) ? (var_1_19 ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_1 == ((unsigned short int) 64))) : (var_1_1 == ((unsigned short int) var_1_5))) : (var_1_1 == ((unsigned short int) var_1_5))) : (var_1_1 == ((unsigned short int) var_1_5))) && (((- 128) <= var_1_5) ? (var_1_6 == ((unsigned long int) ((((10u + var_1_5) < 0 ) ? -(10u + var_1_5) : (10u + var_1_5))))) : (var_1_6 == ((unsigned long int) var_1_14)))) && ((((((var_1_1) > (-128)) ? (var_1_1) : (-128))) < (var_1_5 * var_1_6)) ? (var_1_7 == ((unsigned char) var_1_8)) : 1)) && ((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) < var_1_25) ? (((var_1_33 % ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) > var_1_8) ? (var_1_9 == ((double) (var_1_12 + var_1_13))) : 1) : 1)) && ((last_1_var_1_9 < (- (var_1_13 * last_1_var_1_9))) ? (var_1_14 == ((unsigned short int) 256)) : 1)) && ((var_1_1 < (var_1_33 / (var_1_17 + var_1_18))) ? (var_1_15 == ((unsigned char) ((((4) > (var_1_8)) ? (4) : (var_1_8))))) : (var_1_15 == ((unsigned char) var_1_8)))) && (((var_1_20 - var_1_21) < ((var_1_33 * var_1_14) / var_1_17)) ? (var_1_19 == ((unsigned char) (! var_1_22))) : 1)) && ((var_1_12 > var_1_25) ? (var_1_23 == ((unsigned char) (var_1_24 - var_1_21))) : (var_1_19 ? (((var_1_11 % var_1_10) > var_1_20) ? (var_1_23 == ((unsigned char) var_1_21)) : (var_1_23 == ((unsigned char) var_1_24))) : 1))) && (((var_1_26 - var_1_27) < 199.5f) ? (var_1_25 == ((double) ((var_1_28 + var_1_29) + (((((16.4 - var_1_30)) > (var_1_12)) ? ((16.4 - var_1_30)) : (var_1_12)))))) : 1)) && (((var_1_33 * var_1_10) >= var_1_14) ? (var_1_31 == ((signed short int) var_1_6)) : 1)) && (last_1_var_1_19 ? ((var_1_18 != ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1)))) ? ((((var_1_18 * var_1_21) + last_1_var_1_15) >= var_1_17) ? (((var_1_13 + last_1_var_1_25) > var_1_28) ? (var_1_33 == ((unsigned long int) ((var_1_8 + var_1_24) + last_1_var_1_14))) : (var_1_33 == ((unsigned long int) ((((((var_1_35 + var_1_36) - last_1_var_1_6)) > (last_1_var_1_14)) ? (((var_1_35 + var_1_36) - last_1_var_1_6)) : (last_1_var_1_14)))))) : (var_1_33 == ((unsigned long int) (((((var_1_21) < (var_1_8)) ? (var_1_21) : (var_1_8))) + ((((last_1_var_1_6) < (8u)) ? (last_1_var_1_6) : (8u))))))) : (var_1_33 == ((unsigned long int) var_1_5))) : (var_1_33 == ((unsigned long int) var_1_36)))
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
