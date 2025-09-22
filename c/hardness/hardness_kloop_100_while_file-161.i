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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 9.3;
float var_1_4 = 4.5;
float var_1_5 = 0.0;
float var_1_6 = 2.4;
float var_1_7 = 50.1;
float var_1_8 = 0.8;
float var_1_9 = 32.5;
float var_1_11 = 2.5;
unsigned char var_1_12 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned long int var_1_17 = 128;
unsigned long int var_1_19 = 10;
unsigned long int var_1_20 = 100;
unsigned long int var_1_21 = 64;
unsigned long int var_1_22 = 16;
unsigned long int var_1_23 = 1000000000;
unsigned long int var_1_24 = 1000000000;
unsigned long int var_1_25 = 5;
unsigned long int var_1_26 = 2423617290;
unsigned long int var_1_27 = 3834940609;
signed long int var_1_28 = 8;
signed long int var_1_29 = 1139103981;
double var_1_30 = 8.7;
double var_1_31 = 8.2;
double var_1_32 = 8.25;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 128;
double var_1_35 = 999999999999.6;
signed char var_1_36 = -16;
signed char var_1_37 = -32;
signed char var_1_38 = -5;
signed char var_1_39 = 32;
signed char var_1_40 = 10;
unsigned short int var_1_41 = 50;
signed char var_1_42 = 1;
unsigned short int var_1_43 = 22432;
signed long int var_1_44 = 32;
signed long int var_1_45 = -64;
void initially(void) {
}
void step(void) {
 var_1_11 = (var_1_4 - (8.321944475028179E18f - var_1_8));
 unsigned long int stepLocal_2 = var_1_26 - (var_1_29 - 128u);
 if (var_1_21 > stepLocal_2) {
  if (9.2 == (var_1_31 - var_1_5)) {
   var_1_30 = var_1_32;
  } else {
   var_1_30 = var_1_9;
  }
 } else {
  var_1_30 = var_1_32;
 }
 if (var_1_15 || (var_1_5 > ((((-0.5f) < 0 ) ? -(-0.5f) : (-0.5f))))) {
  var_1_33 = var_1_34;
 }
 var_1_35 = (2.5 - var_1_4);
 if (! var_1_15) {
  var_1_36 = ((((var_1_37) > ((var_1_38 + ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))))) ? (var_1_37) : ((var_1_38 + ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))))));
 }
 var_1_44 = var_1_25;
 var_1_45 = var_1_37;
 if ((var_1_30 * var_1_5) > ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) {
  if (! (var_1_4 != var_1_9)) {
   var_1_12 = var_1_15;
  }
 } else {
  var_1_12 = var_1_16;
 }
 signed long int stepLocal_1 = var_1_45 % 10;
 if (stepLocal_1 < ((var_1_29 - var_1_23) << var_1_22)) {
  var_1_28 = ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)));
 }
 if (var_1_28 >= (var_1_28 / -4)) {
  var_1_1 = (var_1_4 - (var_1_5 - var_1_6));
 } else {
  if (64.075 <= var_1_5) {
   var_1_1 = (var_1_6 + ((((var_1_7) < ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9)))));
  } else {
   if (! var_1_12) {
    var_1_1 = var_1_5;
   }
  }
 }
 if (var_1_1 == var_1_11) {
  var_1_20 = (((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))) + ((1000000000u + var_1_23) - (var_1_24 - var_1_25)));
 } else {
  var_1_20 = (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) - var_1_24);
 }
 unsigned long int stepLocal_5 = var_1_21;
 unsigned long int stepLocal_4 = var_1_25 >> var_1_42;
 signed long int stepLocal_3 = var_1_29;
 if ((var_1_20 - var_1_34) > stepLocal_5) {
  if (stepLocal_4 < var_1_34) {
   var_1_41 = ((((var_1_20) > (var_1_34)) ? (var_1_20) : (var_1_34)));
  } else {
   var_1_41 = var_1_42;
  }
 } else {
  if (var_1_39 < stepLocal_3) {
   var_1_41 = ((var_1_43 - var_1_42) + (((((10 + var_1_34)) > (var_1_20)) ? ((10 + var_1_34)) : (var_1_20))));
  } else {
   var_1_41 = (var_1_20 + var_1_42);
  }
 }
 signed long int stepLocal_0 = var_1_45;
 if (var_1_30 == ((((49.25) > ((- var_1_6))) ? (49.25) : ((- var_1_6))))) {
  if (! var_1_12) {
   if ((var_1_28 * var_1_41) > stepLocal_0) {
    var_1_17 = var_1_19;
   } else {
    var_1_17 = 256u;
   }
  }
 } else {
  var_1_17 = var_1_19;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 536870912);
 assume_abort_if_not(var_1_23 <= 1073741823);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 536870911);
 assume_abort_if_not(var_1_24 <= 1073741823);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 536870911);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= 1073741823);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 31);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16383);
 assume_abort_if_not(var_1_43 <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((((var_1_28 >= (var_1_28 / -4)) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - var_1_6)))) : ((64.075 <= var_1_5) ? (var_1_1 == ((float) (var_1_6 + ((((var_1_7) < ((var_1_8 - var_1_9))) ? (var_1_7) : ((var_1_8 - var_1_9))))))) : ((! var_1_12) ? (var_1_1 == ((float) var_1_5)) : 1))) && (var_1_11 == ((float) (var_1_4 - (8.321944475028179E18f - var_1_8))))) && (((var_1_30 * var_1_5) > ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) ? ((! (var_1_4 != var_1_9)) ? (var_1_12 == ((unsigned char) var_1_15)) : 1) : (var_1_12 == ((unsigned char) var_1_16)))) && ((var_1_30 == ((((49.25) > ((- var_1_6))) ? (49.25) : ((- var_1_6))))) ? ((! var_1_12) ? (((var_1_28 * var_1_41) > var_1_45) ? (var_1_17 == ((unsigned long int) var_1_19)) : (var_1_17 == ((unsigned long int) 256u))) : 1) : (var_1_17 == ((unsigned long int) var_1_19)))) && ((var_1_1 == var_1_11) ? (var_1_20 == ((unsigned long int) (((((var_1_21) > (var_1_22)) ? (var_1_21) : (var_1_22))) + ((1000000000u + var_1_23) - (var_1_24 - var_1_25))))) : (var_1_20 == ((unsigned long int) (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) - var_1_24))))) && (((var_1_45 % 10) < ((var_1_29 - var_1_23) << var_1_22)) ? (var_1_28 == ((signed long int) ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))))) : 1)) && ((var_1_21 > (var_1_26 - (var_1_29 - 128u))) ? ((9.2 == (var_1_31 - var_1_5)) ? (var_1_30 == ((double) var_1_32)) : (var_1_30 == ((double) var_1_9))) : (var_1_30 == ((double) var_1_32)))) && ((var_1_15 || (var_1_5 > ((((-0.5f) < 0 ) ? -(-0.5f) : (-0.5f))))) ? (var_1_33 == ((unsigned char) var_1_34)) : 1)) && (var_1_35 == ((double) (2.5 - var_1_4)))) && ((! var_1_15) ? (var_1_36 == ((signed char) ((((var_1_37) > ((var_1_38 + ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))))) ? (var_1_37) : ((var_1_38 + ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40))))))))) : 1)) && (((var_1_20 - var_1_34) > var_1_21) ? (((var_1_25 >> var_1_42) < var_1_34) ? (var_1_41 == ((unsigned short int) ((((var_1_20) > (var_1_34)) ? (var_1_20) : (var_1_34))))) : (var_1_41 == ((unsigned short int) var_1_42))) : ((var_1_39 < var_1_29) ? (var_1_41 == ((unsigned short int) ((var_1_43 - var_1_42) + (((((10 + var_1_34)) > (var_1_20)) ? ((10 + var_1_34)) : (var_1_20)))))) : (var_1_41 == ((unsigned short int) (var_1_20 + var_1_42)))))) && (var_1_44 == ((signed long int) var_1_25))) && (var_1_45 == ((signed long int) var_1_37))
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
