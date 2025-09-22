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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -100;
unsigned char var_1_2 = 200;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 8;
signed long int var_1_5 = 64;
signed long int var_1_6 = 25;
unsigned char var_1_7 = 16;
signed long int var_1_8 = -4;
unsigned char var_1_9 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 256;
unsigned short int var_1_18 = 0;
signed short int var_1_19 = -100;
signed short int var_1_20 = 32;
unsigned char var_1_21 = 1;
signed short int var_1_23 = -256;
float var_1_24 = -0.5;
float var_1_25 = 255.8;
float var_1_26 = 31.2;
float var_1_27 = 0.5;
unsigned char var_1_28 = 32;
unsigned char var_1_29 = 64;
unsigned short int var_1_30 = 16;
double var_1_31 = 255.9;
double var_1_32 = 100.5;
unsigned short int var_1_33 = 39141;
unsigned short int var_1_34 = 52589;
signed long int last_1_var_1_1 = -100;
unsigned char last_1_var_1_14 = 0;
signed short int last_1_var_1_19 = -100;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_7 = ((((last_1_var_1_19) > (last_1_var_1_1)) ? (last_1_var_1_19) : (last_1_var_1_1))) <= 0;
 if (stepLocal_7 && var_1_13) {
  if (last_1_var_1_14) {
   var_1_21 = var_1_16;
  }
 }
 if ((var_1_2 - (var_1_3 - var_1_4)) == var_1_5) {
  if ((var_1_3 + var_1_5) >= (var_1_4 / var_1_2)) {
   if (var_1_5 > var_1_4) {
    var_1_1 = (var_1_4 + var_1_6);
   } else {
    var_1_1 = var_1_2;
   }
  }
 } else {
  var_1_1 = var_1_2;
 }
 unsigned char stepLocal_1 = var_1_5 < (var_1_3 - var_1_4);
 unsigned char stepLocal_0 = var_1_4;
 if (stepLocal_1 || (var_1_6 > (var_1_8 * var_1_1))) {
  if (var_1_5 >= stepLocal_0) {
   var_1_7 = 2;
  } else {
   var_1_7 = var_1_4;
  }
 } else {
  var_1_7 = var_1_3;
 }
 var_1_24 = (var_1_25 + ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))));
 if (! var_1_12) {
  var_1_28 = ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_29) - var_1_4);
 } else {
  var_1_28 = ((((((((var_1_29) < (var_1_4)) ? (var_1_29) : (var_1_4)))) > (var_1_3)) ? (((((var_1_29) < (var_1_4)) ? (var_1_29) : (var_1_4)))) : (var_1_3)));
 }
 if ((var_1_24 / var_1_31) > var_1_32) {
  var_1_30 = (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_4);
 }
 unsigned char stepLocal_5 = var_1_12;
 signed long int stepLocal_4 = var_1_1;
 if ((var_1_28 / (2571661009u - var_1_2)) != stepLocal_4) {
  if (stepLocal_5 && var_1_21) {
   var_1_17 = 2;
  }
 } else {
  if (var_1_21) {
   var_1_17 = var_1_18;
  } else {
   var_1_17 = var_1_2;
  }
 }
 unsigned char stepLocal_6 = var_1_1 >= var_1_30;
 if (var_1_21 || stepLocal_6) {
  var_1_20 = (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) + var_1_4);
 } else {
  var_1_20 = (var_1_4 - (((((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))) < 0 ) ? -((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))) : ((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))))));
 }
 unsigned short int stepLocal_3 = var_1_17;
 signed long int stepLocal_2 = var_1_6;
 if (stepLocal_2 < ((((var_1_2) > (var_1_4)) ? (var_1_2) : (var_1_4)))) {
  if (var_1_4 >= stepLocal_3) {
   var_1_14 = var_1_12;
  } else {
   var_1_14 = (var_1_15 && var_1_16);
  }
 } else {
  var_1_14 = var_1_15;
 }
 var_1_19 = ((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_20)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_20)));
 if (var_1_1 != (var_1_4 ^ var_1_1)) {
  if (var_1_14) {
   if (var_1_21) {
    var_1_9 = (var_1_12 || (! (! var_1_13)));
   }
  } else {
   var_1_9 = var_1_13;
  }
 }
 unsigned char stepLocal_8 = var_1_14;
 if ((var_1_1 > var_1_18) || stepLocal_8) {
  var_1_23 = (((((var_1_3 + (var_1_2 - var_1_1))) < (var_1_4)) ? ((var_1_3 + (var_1_2 - var_1_1))) : (var_1_4)));
 } else {
  var_1_23 = (var_1_2 - var_1_1);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 127);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 63);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 64);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 assume_abort_if_not(var_1_31 != 0.0F);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 32767);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
}
int property(void) {
 return (((((((((((((var_1_2 - (var_1_3 - var_1_4)) == var_1_5) ? (((var_1_3 + var_1_5) >= (var_1_4 / var_1_2)) ? ((var_1_5 > var_1_4) ? (var_1_1 == ((signed long int) (var_1_4 + var_1_6))) : (var_1_1 == ((signed long int) var_1_2))) : 1) : (var_1_1 == ((signed long int) var_1_2))) && (((var_1_5 < (var_1_3 - var_1_4)) || (var_1_6 > (var_1_8 * var_1_1))) ? ((var_1_5 >= var_1_4) ? (var_1_7 == ((unsigned char) 2)) : (var_1_7 == ((unsigned char) var_1_4))) : (var_1_7 == ((unsigned char) var_1_3)))) && ((var_1_1 != (var_1_4 ^ var_1_1)) ? (var_1_14 ? (var_1_21 ? (var_1_9 == ((unsigned char) (var_1_12 || (! (! var_1_13))))) : 1) : (var_1_9 == ((unsigned char) var_1_13))) : 1)) && ((var_1_6 < ((((var_1_2) > (var_1_4)) ? (var_1_2) : (var_1_4)))) ? ((var_1_4 >= var_1_17) ? (var_1_14 == ((unsigned char) var_1_12)) : (var_1_14 == ((unsigned char) (var_1_15 && var_1_16)))) : (var_1_14 == ((unsigned char) var_1_15)))) && (((var_1_28 / (2571661009u - var_1_2)) != var_1_1) ? ((var_1_12 && var_1_21) ? (var_1_17 == ((unsigned short int) 2)) : 1) : (var_1_21 ? (var_1_17 == ((unsigned short int) var_1_18)) : (var_1_17 == ((unsigned short int) var_1_2))))) && (var_1_19 == ((signed short int) ((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_20)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_20)))))) && ((var_1_21 || (var_1_1 >= var_1_30)) ? (var_1_20 == ((signed short int) (((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) + var_1_4))) : (var_1_20 == ((signed short int) (var_1_4 - (((((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))) < 0 ) ? -((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3))) : ((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3)))))))))) && (((((((last_1_var_1_19) > (last_1_var_1_1)) ? (last_1_var_1_19) : (last_1_var_1_1))) <= 0) && var_1_13) ? (last_1_var_1_14 ? (var_1_21 == ((unsigned char) var_1_16)) : 1) : 1)) && (((var_1_1 > var_1_18) || var_1_14) ? (var_1_23 == ((signed short int) (((((var_1_3 + (var_1_2 - var_1_1))) < (var_1_4)) ? ((var_1_3 + (var_1_2 - var_1_1))) : (var_1_4))))) : (var_1_23 == ((signed short int) (var_1_2 - var_1_1))))) && (var_1_24 == ((float) (var_1_25 + ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))))) && ((! var_1_12) ? (var_1_28 == ((unsigned char) ((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) + var_1_29) - var_1_4))) : (var_1_28 == ((unsigned char) ((((((((var_1_29) < (var_1_4)) ? (var_1_29) : (var_1_4)))) > (var_1_3)) ? (((((var_1_29) < (var_1_4)) ? (var_1_29) : (var_1_4)))) : (var_1_3))))))) && (((var_1_24 / var_1_31) > var_1_32) ? (var_1_30 == ((unsigned short int) (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_4))) : 1)
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
