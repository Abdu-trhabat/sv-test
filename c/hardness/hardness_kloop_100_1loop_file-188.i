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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 0;
unsigned long int var_1_2 = 32;
signed char var_1_4 = -2;
signed char var_1_5 = 10;
signed char var_1_6 = 16;
unsigned char var_1_7 = 10;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 32;
signed short int var_1_10 = -2;
double var_1_11 = 4.3;
double var_1_12 = 50.9;
float var_1_13 = 255.38;
float var_1_14 = 24.4;
float var_1_15 = 9.4;
float var_1_16 = 99.5;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
signed short int var_1_20 = 2;
signed long int var_1_21 = -10000;
signed long int var_1_22 = 2096822345;
double var_1_23 = 2.5;
unsigned short int var_1_24 = 64;
unsigned short int var_1_26 = 28853;
unsigned short int var_1_27 = 30770;
unsigned short int var_1_28 = 65395;
unsigned char var_1_29 = 8;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 10;
unsigned char var_1_32 = 0;
unsigned char last_1_var_1_17 = 1;
signed short int last_1_var_1_20 = 2;
unsigned short int last_1_var_1_24 = 64;
unsigned char last_1_var_1_30 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_2 * last_1_var_1_24) == (last_1_var_1_20 >> 1u)) {
  if (last_1_var_1_17) {
   if (last_1_var_1_30) {
    var_1_17 = var_1_19;
   }
  }
 } else {
  var_1_17 = 0;
 }
 if (var_1_2 != (- 16u)) {
  if (var_1_17) {
   var_1_1 = (var_1_4 + (var_1_5 - var_1_6));
  } else {
   if (var_1_5 >= var_1_6) {
    var_1_1 = var_1_6;
   } else {
    var_1_1 = var_1_5;
   }
  }
 } else {
  var_1_1 = 0;
 }
 var_1_9 = var_1_8;
 var_1_21 = (128 - (var_1_22 - var_1_8));
 unsigned long int stepLocal_0 = var_1_2;
 if ((var_1_21 + -8) != stepLocal_0) {
  var_1_7 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
 }
 if (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < var_1_8) {
  if (var_1_9 < var_1_2) {
   var_1_10 = (((((500 - var_1_8)) < (((((var_1_21) > ((var_1_6 + 100))) ? (var_1_21) : ((var_1_6 + 100)))))) ? ((500 - var_1_8)) : (((((var_1_21) > ((var_1_6 + 100))) ? (var_1_21) : ((var_1_6 + 100)))))));
  } else {
   var_1_10 = ((((var_1_6) > (var_1_21)) ? (var_1_6) : (var_1_21)));
  }
 }
 if (var_1_17) {
  var_1_20 = ((((var_1_4) < (((((var_1_8) > (var_1_21)) ? (var_1_8) : (var_1_21))))) ? (var_1_4) : (((((var_1_8) > (var_1_21)) ? (var_1_8) : (var_1_21))))));
 } else {
  var_1_20 = (var_1_7 + ((var_1_8 + var_1_7) - var_1_5));
 }
 signed long int stepLocal_5 = var_1_5 + var_1_20;
 if ((((((var_1_31) > (var_1_27)) ? (var_1_31) : (var_1_27))) / var_1_22) >= stepLocal_5) {
  var_1_30 = (! (! (var_1_19 || var_1_32)));
 } else {
  var_1_30 = var_1_19;
 }
 unsigned char stepLocal_4 = var_1_17;
 if (var_1_30 && stepLocal_4) {
  if (var_1_19) {
   if (var_1_17) {
    var_1_24 = ((29019 + (var_1_26 - var_1_21)) - (var_1_27 - var_1_6));
   }
  } else {
   var_1_24 = ((((((((var_1_28) < (35068)) ? (var_1_28) : (35068))) - (var_1_27 - var_1_5)) < 0 ) ? -(((((var_1_28) < (35068)) ? (var_1_28) : (35068))) - (var_1_27 - var_1_5)) : (((((var_1_28) < (35068)) ? (var_1_28) : (35068))) - (var_1_27 - var_1_5))));
  }
 } else {
  var_1_24 = (var_1_28 - var_1_8);
 }
 if (var_1_30) {
  var_1_29 = (var_1_6 + var_1_5);
 }
 unsigned short int stepLocal_2 = var_1_24;
 signed long int stepLocal_1 = (((var_1_29) < ((var_1_6 * var_1_4))) ? (var_1_29) : ((var_1_6 * var_1_4)));
 if (var_1_29 > stepLocal_1) {
  if (var_1_2 < stepLocal_2) {
   var_1_11 = var_1_12;
  } else {
   var_1_11 = 0.4;
  }
 }
 if (var_1_11 == var_1_12) {
  var_1_13 = (var_1_14 + (var_1_15 - var_1_16));
 } else {
  var_1_13 = var_1_15;
 }
 unsigned char stepLocal_3 = var_1_8;
 if (var_1_11 > 127.8) {
  var_1_23 = (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) + var_1_16);
 } else {
  if (stepLocal_3 > var_1_21) {
   var_1_23 = var_1_16;
  } else {
   var_1_23 = var_1_14;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= 1073741823);
 assume_abort_if_not(var_1_22 <= 2147483646);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 24575);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 16383);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 32767);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_30 = var_1_30;
}
int property(void) {
 return (((((((((((((var_1_2 != (- 16u)) ? (var_1_17 ? (var_1_1 == ((signed char) (var_1_4 + (var_1_5 - var_1_6)))) : ((var_1_5 >= var_1_6) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) var_1_5)))) : (var_1_1 == ((signed char) 0))) && (((var_1_21 + -8) != var_1_2) ? (var_1_7 == ((unsigned char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : 1)) && (var_1_9 == ((unsigned char) var_1_8))) && ((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < var_1_8) ? ((var_1_9 < var_1_2) ? (var_1_10 == ((signed short int) (((((500 - var_1_8)) < (((((var_1_21) > ((var_1_6 + 100))) ? (var_1_21) : ((var_1_6 + 100)))))) ? ((500 - var_1_8)) : (((((var_1_21) > ((var_1_6 + 100))) ? (var_1_21) : ((var_1_6 + 100))))))))) : (var_1_10 == ((signed short int) ((((var_1_6) > (var_1_21)) ? (var_1_6) : (var_1_21)))))) : 1)) && ((var_1_29 > ((((var_1_29) < ((var_1_6 * var_1_4))) ? (var_1_29) : ((var_1_6 * var_1_4))))) ? ((var_1_2 < var_1_24) ? (var_1_11 == ((double) var_1_12)) : (var_1_11 == ((double) 0.4))) : 1)) && ((var_1_11 == var_1_12) ? (var_1_13 == ((float) (var_1_14 + (var_1_15 - var_1_16)))) : (var_1_13 == ((float) var_1_15)))) && (((var_1_2 * last_1_var_1_24) == (last_1_var_1_20 >> 1u)) ? (last_1_var_1_17 ? (last_1_var_1_30 ? (var_1_17 == ((unsigned char) var_1_19)) : 1) : 1) : (var_1_17 == ((unsigned char) 0)))) && (var_1_17 ? (var_1_20 == ((signed short int) ((((var_1_4) < (((((var_1_8) > (var_1_21)) ? (var_1_8) : (var_1_21))))) ? (var_1_4) : (((((var_1_8) > (var_1_21)) ? (var_1_8) : (var_1_21)))))))) : (var_1_20 == ((signed short int) (var_1_7 + ((var_1_8 + var_1_7) - var_1_5)))))) && (var_1_21 == ((signed long int) (128 - (var_1_22 - var_1_8))))) && ((var_1_11 > 127.8) ? (var_1_23 == ((double) (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) + var_1_16))) : ((var_1_8 > var_1_21) ? (var_1_23 == ((double) var_1_16)) : (var_1_23 == ((double) var_1_14))))) && ((var_1_30 && var_1_17) ? (var_1_19 ? (var_1_17 ? (var_1_24 == ((unsigned short int) ((29019 + (var_1_26 - var_1_21)) - (var_1_27 - var_1_6)))) : 1) : (var_1_24 == ((unsigned short int) ((((((((var_1_28) < (35068)) ? (var_1_28) : (35068))) - (var_1_27 - var_1_5)) < 0 ) ? -(((((var_1_28) < (35068)) ? (var_1_28) : (35068))) - (var_1_27 - var_1_5)) : (((((var_1_28) < (35068)) ? (var_1_28) : (35068))) - (var_1_27 - var_1_5))))))) : (var_1_24 == ((unsigned short int) (var_1_28 - var_1_8))))) && (var_1_30 ? (var_1_29 == ((unsigned char) (var_1_6 + var_1_5))) : 1)) && (((((((var_1_31) > (var_1_27)) ? (var_1_31) : (var_1_27))) / var_1_22) >= (var_1_5 + var_1_20)) ? (var_1_30 == ((unsigned char) (! (! (var_1_19 || var_1_32))))) : (var_1_30 == ((unsigned char) var_1_19)))
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
