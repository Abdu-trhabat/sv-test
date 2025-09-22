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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 9.5;
double var_1_4 = 16.5;
unsigned short int var_1_5 = 5;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25268;
unsigned short int var_1_10 = 10;
unsigned short int var_1_11 = 52309;
unsigned short int var_1_13 = 256;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
double var_1_19 = 127.2;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 10;
signed short int var_1_22 = -2;
signed short int var_1_23 = 32;
float var_1_24 = 1.167;
unsigned long int var_1_25 = 3728868955;
float var_1_26 = 3.875;
float var_1_27 = 999.75;
float var_1_28 = 0.65;
float var_1_29 = 5.25;
float var_1_30 = 0.0;
float var_1_31 = 0.0;
float var_1_32 = 15.5;
double var_1_33 = 25.75;
double var_1_35 = 4.8;
unsigned char var_1_36 = 100;
unsigned char var_1_37 = 0;
signed short int var_1_38 = 10;
signed short int var_1_39 = 10;
signed long int var_1_40 = -1;
signed long int var_1_41 = 0;
void initially(void) {
}
void step(void) {
 var_1_35 = (var_1_30 - var_1_29);
 if (var_1_28 <= var_1_26) {
  var_1_37 = (! var_1_18);
 }
 var_1_39 = var_1_8;
 var_1_40 = var_1_25;
 var_1_41 = var_1_8;
 signed long int stepLocal_0 = var_1_41;
 if (var_1_40 > stepLocal_0) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_1 = var_1_4;
 }
 signed long int stepLocal_4 = var_1_40;
 unsigned short int stepLocal_3 = var_1_10;
 if ((var_1_9 << var_1_13) != stepLocal_4) {
  if (stepLocal_3 >= (var_1_9 * var_1_13)) {
   var_1_16 = var_1_17;
  } else {
   var_1_16 = var_1_18;
  }
 } else {
  var_1_16 = var_1_18;
 }
 if (var_1_37) {
  var_1_22 = (((((var_1_20) > (((((var_1_23) > (var_1_21)) ? (var_1_23) : (var_1_21))))) ? (var_1_20) : (((((var_1_23) > (var_1_21)) ? (var_1_23) : (var_1_21)))))) - ((((-8) < 0 ) ? -(-8) : (-8))));
 } else {
  var_1_22 = var_1_8;
 }
 signed long int stepLocal_7 = var_1_41;
 if (((((var_1_11) < (var_1_41)) ? (var_1_11) : (var_1_41))) >= stepLocal_7) {
  var_1_33 = ((((50.4) < 0 ) ? -(50.4) : (50.4)));
 }
 unsigned long int stepLocal_8 = var_1_25 * var_1_20;
 if (var_1_41 >= stepLocal_8) {
  var_1_36 = ((((16) < (var_1_21)) ? (16) : (var_1_21)));
 }
 if ((var_1_29 - var_1_32) > var_1_26) {
  var_1_38 = ((((-4) > (var_1_21)) ? (-4) : (var_1_21)));
 } else {
  var_1_38 = (var_1_21 + (var_1_40 - var_1_8));
 }
 if ((var_1_4 * var_1_33) == var_1_33) {
  if (var_1_16) {
   var_1_5 = (((10000 + var_1_8) + var_1_9) - var_1_10);
  } else {
   var_1_5 = (var_1_11 - var_1_8);
  }
 } else {
  if (var_1_37) {
   var_1_5 = var_1_13;
  } else {
   var_1_5 = var_1_9;
  }
 }
 signed long int stepLocal_1 = var_1_11 - var_1_8;
 if (var_1_9 <= stepLocal_1) {
  if (var_1_37) {
   if (var_1_16) {
    var_1_14 = var_1_8;
   }
  }
 }
 signed long int stepLocal_2 = var_1_41 * var_1_14;
 if (stepLocal_2 < (var_1_11 / ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) {
  var_1_15 = ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)));
 } else {
  var_1_15 = var_1_8;
 }
 signed long int stepLocal_6 = var_1_41;
 signed long int stepLocal_5 = ((((var_1_20 - var_1_21)) < (var_1_41)) ? ((var_1_20 - var_1_21)) : (var_1_41));
 if (stepLocal_6 > ((((2) < 0 ) ? -(2) : (2)))) {
  var_1_19 = var_1_4;
 } else {
  if (stepLocal_5 >= (var_1_15 - var_1_13)) {
   var_1_19 = var_1_4;
  } else {
   var_1_19 = 2.2;
  }
 }
 if (((var_1_25 - var_1_11) - var_1_10) != var_1_15) {
  if (var_1_15 > var_1_40) {
   var_1_24 = ((((var_1_4) > ((var_1_26 + var_1_27))) ? (var_1_4) : ((var_1_26 + var_1_27))));
  } else {
   var_1_24 = ((var_1_28 + var_1_29) - (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_32));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 8192);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 16384);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 127);
 assume_abort_if_not(var_1_20 <= 255);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -1);
 assume_abort_if_not(var_1_23 <= 32766);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 3221225471);
 assume_abort_if_not(var_1_25 <= 4294967295);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((((((var_1_40 > var_1_41) ? (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_1 == ((double) var_1_4))) && (((var_1_4 * var_1_33) == var_1_33) ? (var_1_16 ? (var_1_5 == ((unsigned short int) (((10000 + var_1_8) + var_1_9) - var_1_10))) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_8)))) : (var_1_37 ? (var_1_5 == ((unsigned short int) var_1_13)) : (var_1_5 == ((unsigned short int) var_1_9))))) && ((var_1_9 <= (var_1_11 - var_1_8)) ? (var_1_37 ? (var_1_16 ? (var_1_14 == ((unsigned short int) var_1_8)) : 1) : 1) : 1)) && (((var_1_41 * var_1_14) < (var_1_11 / ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_15 == ((unsigned short int) ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))))) : (var_1_15 == ((unsigned short int) var_1_8)))) && (((var_1_9 << var_1_13) != var_1_40) ? ((var_1_10 >= (var_1_9 * var_1_13)) ? (var_1_16 == ((unsigned char) var_1_17)) : (var_1_16 == ((unsigned char) var_1_18))) : (var_1_16 == ((unsigned char) var_1_18)))) && ((var_1_41 > ((((2) < 0 ) ? -(2) : (2)))) ? (var_1_19 == ((double) var_1_4)) : (((((((var_1_20 - var_1_21)) < (var_1_41)) ? ((var_1_20 - var_1_21)) : (var_1_41))) >= (var_1_15 - var_1_13)) ? (var_1_19 == ((double) var_1_4)) : (var_1_19 == ((double) 2.2))))) && (var_1_37 ? (var_1_22 == ((signed short int) (((((var_1_20) > (((((var_1_23) > (var_1_21)) ? (var_1_23) : (var_1_21))))) ? (var_1_20) : (((((var_1_23) > (var_1_21)) ? (var_1_23) : (var_1_21)))))) - ((((-8) < 0 ) ? -(-8) : (-8)))))) : (var_1_22 == ((signed short int) var_1_8)))) && ((((var_1_25 - var_1_11) - var_1_10) != var_1_15) ? ((var_1_15 > var_1_40) ? (var_1_24 == ((float) ((((var_1_4) > ((var_1_26 + var_1_27))) ? (var_1_4) : ((var_1_26 + var_1_27)))))) : (var_1_24 == ((float) ((var_1_28 + var_1_29) - (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - var_1_32))))) : 1)) && ((((((var_1_11) < (var_1_41)) ? (var_1_11) : (var_1_41))) >= var_1_41) ? (var_1_33 == ((double) ((((50.4) < 0 ) ? -(50.4) : (50.4))))) : 1)) && (var_1_35 == ((double) (var_1_30 - var_1_29)))) && ((var_1_41 >= (var_1_25 * var_1_20)) ? (var_1_36 == ((unsigned char) ((((16) < (var_1_21)) ? (16) : (var_1_21))))) : 1)) && ((var_1_28 <= var_1_26) ? (var_1_37 == ((unsigned char) (! var_1_18))) : 1)) && (((var_1_29 - var_1_32) > var_1_26) ? (var_1_38 == ((signed short int) ((((-4) > (var_1_21)) ? (-4) : (var_1_21))))) : (var_1_38 == ((signed short int) (var_1_21 + (var_1_40 - var_1_8)))))) && (var_1_39 == ((signed short int) var_1_8))) && (var_1_40 == ((signed long int) var_1_25))) && (var_1_41 == ((signed long int) var_1_8))
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
