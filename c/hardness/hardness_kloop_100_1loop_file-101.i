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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
double var_1_4 = 2.5;
unsigned long int var_1_5 = 16;
unsigned short int var_1_6 = 32;
double var_1_7 = 4.125;
unsigned short int var_1_8 = 19107;
unsigned short int var_1_9 = 5;
unsigned short int var_1_10 = 100;
unsigned short int var_1_11 = 10;
signed long int var_1_12 = -1;
signed char var_1_14 = -100;
double var_1_15 = 64.75;
double var_1_16 = 127.5;
double var_1_17 = 99999999.5;
signed char var_1_18 = 32;
signed char var_1_19 = -25;
signed char var_1_20 = 8;
signed char var_1_21 = 32;
unsigned short int var_1_22 = 10;
signed char var_1_23 = -2;
signed char var_1_24 = 5;
signed short int var_1_25 = -1;
unsigned long int var_1_26 = 50;
signed char var_1_27 = -32;
double var_1_28 = 255.5;
double var_1_30 = 255.6;
signed long int var_1_31 = 0;
float var_1_32 = 9999999999.3;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 5;
double var_1_37 = 1000000000.5;
signed long int last_1_var_1_12 = -1;
unsigned long int last_1_var_1_26 = 50;
double last_1_var_1_28 = 255.5;
unsigned char last_1_var_1_34 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = 49194 - (var_1_9 + var_1_10);
 unsigned long int stepLocal_1 = last_1_var_1_26;
 if (last_1_var_1_34) {
  var_1_12 = var_1_9;
 } else {
  if (var_1_8 != stepLocal_1) {
   if (last_1_var_1_12 < stepLocal_2) {
    var_1_12 = (last_1_var_1_12 - var_1_8);
   }
  }
 }
 var_1_34 = var_1_35;
 var_1_36 = var_1_21;
 var_1_37 = var_1_30;
 if (var_1_4 < var_1_7) {
  if (var_1_34) {
   var_1_6 = ((var_1_8 - (var_1_9 + var_1_10)) + var_1_11);
  } else {
   var_1_6 = var_1_8;
  }
 }
 signed long int stepLocal_5 = 0;
 if (var_1_8 >= stepLocal_5) {
  if (! var_1_34) {
   var_1_22 = ((((var_1_9) > (var_1_21)) ? (var_1_9) : (var_1_21)));
  } else {
   var_1_22 = var_1_9;
  }
 } else {
  var_1_22 = var_1_8;
 }
 if (var_1_34) {
  var_1_23 = ((((var_1_18) < ((var_1_20 - var_1_24))) ? (var_1_18) : ((var_1_20 - var_1_24))));
 } else {
  var_1_23 = (var_1_19 + var_1_18);
 }
 if ((var_1_11 + var_1_10) < var_1_5) {
  if (var_1_6 < var_1_12) {
   var_1_28 = var_1_30;
  }
 }
 if (var_1_37 >= (var_1_28 + var_1_30)) {
  var_1_31 = ((((var_1_23) < (var_1_8)) ? (var_1_23) : (var_1_8)));
 } else {
  if ((var_1_37 / var_1_32) > var_1_37) {
   var_1_31 = (var_1_12 - var_1_24);
  }
 }
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 || stepLocal_0) {
  if ((- last_1_var_1_28) <= -0.033) {
   var_1_1 = (3824271162u - var_1_5);
  } else {
   var_1_1 = ((((128u) < (var_1_5)) ? (128u) : (var_1_5)));
  }
 }
 if ((var_1_20 == (var_1_12 & var_1_1)) || (var_1_28 > var_1_37)) {
  var_1_25 = -32;
 }
 if (-8 > var_1_20) {
  if (var_1_34 && ((var_1_21 | var_1_1) >= var_1_8)) {
   if (var_1_36 >= (((((var_1_25 / var_1_27)) < (var_1_10)) ? ((var_1_25 / var_1_27)) : (var_1_10)))) {
    if (var_1_34) {
     var_1_26 = var_1_8;
    }
   } else {
    var_1_26 = var_1_24;
   }
  }
 } else {
  var_1_26 = var_1_21;
 }
 unsigned long int stepLocal_4 = var_1_26;
 unsigned char stepLocal_3 = var_1_34;
 if (((var_1_4 + var_1_7) + (var_1_15 * var_1_16)) >= var_1_17) {
  if (stepLocal_4 >= (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))) * var_1_8)) {
   var_1_14 = (var_1_18 + var_1_19);
  }
 } else {
  if (stepLocal_3 || ((var_1_31 * -10) != var_1_18)) {
   if (var_1_34) {
    var_1_14 = (var_1_20 - var_1_21);
   } else {
    var_1_14 = -32;
   }
  } else {
   var_1_14 = var_1_21;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 8192);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 8191);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -128);
 assume_abort_if_not(var_1_27 <= 127);
 assume_abort_if_not(var_1_27 != 0);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_34 = var_1_34;
}
int property(void) {
 return (((((((((((((var_1_2 || var_1_3) ? (((- last_1_var_1_28) <= -0.033) ? (var_1_1 == ((unsigned long int) (3824271162u - var_1_5))) : (var_1_1 == ((unsigned long int) ((((128u) < (var_1_5)) ? (128u) : (var_1_5)))))) : 1) && ((var_1_4 < var_1_7) ? (var_1_34 ? (var_1_6 == ((unsigned short int) ((var_1_8 - (var_1_9 + var_1_10)) + var_1_11))) : (var_1_6 == ((unsigned short int) var_1_8))) : 1)) && (last_1_var_1_34 ? (var_1_12 == ((signed long int) var_1_9)) : ((var_1_8 != last_1_var_1_26) ? ((last_1_var_1_12 < (49194 - (var_1_9 + var_1_10))) ? (var_1_12 == ((signed long int) (last_1_var_1_12 - var_1_8))) : 1) : 1))) && ((((var_1_4 + var_1_7) + (var_1_15 * var_1_16)) >= var_1_17) ? ((var_1_26 >= (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))) * var_1_8)) ? (var_1_14 == ((signed char) (var_1_18 + var_1_19))) : 1) : ((var_1_34 || ((var_1_31 * -10) != var_1_18)) ? (var_1_34 ? (var_1_14 == ((signed char) (var_1_20 - var_1_21))) : (var_1_14 == ((signed char) -32))) : (var_1_14 == ((signed char) var_1_21))))) && ((var_1_8 >= 0) ? ((! var_1_34) ? (var_1_22 == ((unsigned short int) ((((var_1_9) > (var_1_21)) ? (var_1_9) : (var_1_21))))) : (var_1_22 == ((unsigned short int) var_1_9))) : (var_1_22 == ((unsigned short int) var_1_8)))) && (var_1_34 ? (var_1_23 == ((signed char) ((((var_1_18) < ((var_1_20 - var_1_24))) ? (var_1_18) : ((var_1_20 - var_1_24)))))) : (var_1_23 == ((signed char) (var_1_19 + var_1_18))))) && (((var_1_20 == (var_1_12 & var_1_1)) || (var_1_28 > var_1_37)) ? (var_1_25 == ((signed short int) -32)) : 1)) && ((-8 > var_1_20) ? ((var_1_34 && ((var_1_21 | var_1_1) >= var_1_8)) ? ((var_1_36 >= (((((var_1_25 / var_1_27)) < (var_1_10)) ? ((var_1_25 / var_1_27)) : (var_1_10)))) ? (var_1_34 ? (var_1_26 == ((unsigned long int) var_1_8)) : 1) : (var_1_26 == ((unsigned long int) var_1_24))) : 1) : (var_1_26 == ((unsigned long int) var_1_21)))) && (((var_1_11 + var_1_10) < var_1_5) ? ((var_1_6 < var_1_12) ? (var_1_28 == ((double) var_1_30)) : 1) : 1)) && ((var_1_37 >= (var_1_28 + var_1_30)) ? (var_1_31 == ((signed long int) ((((var_1_23) < (var_1_8)) ? (var_1_23) : (var_1_8))))) : (((var_1_37 / var_1_32) > var_1_37) ? (var_1_31 == ((signed long int) (var_1_12 - var_1_24))) : 1))) && (var_1_34 == ((unsigned char) var_1_35))) && (var_1_36 == ((unsigned char) var_1_21))) && (var_1_37 == ((double) var_1_30))
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
