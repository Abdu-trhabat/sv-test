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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 4;
signed long int var_1_7 = -200;
signed long int var_1_8 = 25;
unsigned char var_1_9 = 5;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 32;
float var_1_14 = 15.9;
float var_1_16 = 255.175;
float var_1_17 = 4.875;
float var_1_18 = 3.8;
float var_1_19 = 9.9;
unsigned long int var_1_20 = 10;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = -128;
signed char var_1_25 = 16;
signed char var_1_26 = 25;
signed char var_1_27 = 10;
unsigned char var_1_28 = 50;
signed short int var_1_30 = 32;
signed short int var_1_32 = 200;
double var_1_33 = 99.875;
unsigned short int last_1_var_1_1 = 128;
signed long int last_1_var_1_8 = 25;
signed short int last_1_var_1_30 = 32;
double last_1_var_1_33 = 99.875;
void initially(void) {
}
void step(void) {
 if ((var_1_16 * var_1_17) > (- (- last_1_var_1_33))) {
  if (last_1_var_1_8 == (~ last_1_var_1_8)) {
   if (var_1_4) {
    var_1_21 = var_1_22;
   } else {
    var_1_21 = var_1_23;
   }
  } else {
   var_1_21 = var_1_23;
  }
 } else {
  var_1_21 = var_1_22;
 }
 signed long int stepLocal_1 = last_1_var_1_1;
 if (stepLocal_1 <= ((var_1_5 * last_1_var_1_1) + ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1))))) {
  var_1_7 = last_1_var_1_1;
 } else {
  var_1_7 = ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1)));
 }
 signed long int stepLocal_0 = var_1_7;
 if (stepLocal_0 >= (- (var_1_7 + 8))) {
  if (var_1_21) {
   var_1_1 = var_1_5;
  } else {
   if (var_1_21) {
    var_1_1 = var_1_5;
   } else {
    var_1_1 = 2;
   }
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_21) {
  var_1_9 = var_1_10;
 } else {
  var_1_9 = (var_1_11 - (var_1_12 - (var_1_13 - 10)));
 }
 var_1_33 = var_1_18;
 if (last_1_var_1_8 < ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7)))) {
  if (! var_1_21) {
   var_1_8 = (16 + (last_1_var_1_8 - ((((0) > (var_1_7)) ? (0) : (var_1_7)))));
  } else {
   if ((last_1_var_1_8 > var_1_7) && var_1_21) {
    var_1_8 = var_1_5;
   } else {
    var_1_8 = last_1_var_1_8;
   }
  }
 }
 signed long int stepLocal_2 = var_1_7 + var_1_1;
 if (stepLocal_2 < (var_1_5 ^ var_1_8)) {
  var_1_14 = (var_1_16 + (var_1_17 - var_1_18));
 } else {
  var_1_14 = var_1_18;
 }
 unsigned long int stepLocal_4 = var_1_20 + var_1_8;
 unsigned char stepLocal_3 = var_1_13;
 if (stepLocal_4 <= var_1_7) {
  var_1_19 = ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)));
 } else {
  if (var_1_11 <= stepLocal_3) {
   var_1_19 = var_1_16;
  } else {
   var_1_19 = var_1_17;
  }
 }
 signed long int stepLocal_5 = var_1_7;
 if (var_1_8 >= stepLocal_5) {
  var_1_24 = (((((var_1_13 - var_1_25) < 0 ) ? -(var_1_13 - var_1_25) : (var_1_13 - var_1_25))) + (var_1_26 + var_1_27));
 } else {
  var_1_24 = var_1_25;
 }
 if (((((((((var_1_8) < (var_1_25)) ? (var_1_8) : (var_1_25)))) < (var_1_27)) ? (((((var_1_8) < (var_1_25)) ? (var_1_8) : (var_1_25)))) : (var_1_27))) > var_1_12) {
  if ((var_1_8 / var_1_12) != var_1_13) {
   var_1_28 = var_1_25;
  } else {
   var_1_28 = var_1_13;
  }
 } else {
  var_1_28 = 0;
 }
 unsigned char stepLocal_7 = var_1_21;
 unsigned char stepLocal_6 = var_1_21;
 if (stepLocal_6 && (var_1_25 != var_1_5)) {
  if (stepLocal_7 || (var_1_26 > ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) {
   var_1_30 = ((((last_1_var_1_30) < (((((var_1_26) < ((var_1_28 - var_1_32))) ? (var_1_26) : ((var_1_28 - var_1_32)))))) ? (last_1_var_1_30) : (((((var_1_26) < ((var_1_28 - var_1_32))) ? (var_1_26) : ((var_1_28 - var_1_32)))))));
  } else {
   var_1_30 = var_1_13;
  }
 } else {
  var_1_30 = -16;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 127);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 63);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 31);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -31);
 assume_abort_if_not(var_1_26 <= 32);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -31);
 assume_abort_if_not(var_1_27 <= 31);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_33 = var_1_33;
}
int property(void) {
 return (((((((((((var_1_7 >= (- (var_1_7 + 8))) ? (var_1_21 ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_21 ? (var_1_1 == ((unsigned short int) var_1_5)) : (var_1_1 == ((unsigned short int) 2)))) : (var_1_1 == ((unsigned short int) var_1_5))) && ((last_1_var_1_1 <= ((var_1_5 * last_1_var_1_1) + ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1))))) ? (var_1_7 == ((signed long int) last_1_var_1_1)) : (var_1_7 == ((signed long int) ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1))))))) && ((last_1_var_1_8 < ((((var_1_5) > (var_1_7)) ? (var_1_5) : (var_1_7)))) ? ((! var_1_21) ? (var_1_8 == ((signed long int) (16 + (last_1_var_1_8 - ((((0) > (var_1_7)) ? (0) : (var_1_7))))))) : (((last_1_var_1_8 > var_1_7) && var_1_21) ? (var_1_8 == ((signed long int) var_1_5)) : (var_1_8 == ((signed long int) last_1_var_1_8)))) : 1)) && (var_1_21 ? (var_1_9 == ((unsigned char) var_1_10)) : (var_1_9 == ((unsigned char) (var_1_11 - (var_1_12 - (var_1_13 - 10))))))) && (((var_1_7 + var_1_1) < (var_1_5 ^ var_1_8)) ? (var_1_14 == ((float) (var_1_16 + (var_1_17 - var_1_18)))) : (var_1_14 == ((float) var_1_18)))) && (((var_1_20 + var_1_8) <= var_1_7) ? (var_1_19 == ((float) ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))))) : ((var_1_11 <= var_1_13) ? (var_1_19 == ((float) var_1_16)) : (var_1_19 == ((float) var_1_17))))) && (((var_1_16 * var_1_17) > (- (- last_1_var_1_33))) ? ((last_1_var_1_8 == (~ last_1_var_1_8)) ? (var_1_4 ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_22)))) && ((var_1_8 >= var_1_7) ? (var_1_24 == ((signed char) (((((var_1_13 - var_1_25) < 0 ) ? -(var_1_13 - var_1_25) : (var_1_13 - var_1_25))) + (var_1_26 + var_1_27)))) : (var_1_24 == ((signed char) var_1_25)))) && ((((((((((var_1_8) < (var_1_25)) ? (var_1_8) : (var_1_25)))) < (var_1_27)) ? (((((var_1_8) < (var_1_25)) ? (var_1_8) : (var_1_25)))) : (var_1_27))) > var_1_12) ? (((var_1_8 / var_1_12) != var_1_13) ? (var_1_28 == ((unsigned char) var_1_25)) : (var_1_28 == ((unsigned char) var_1_13))) : (var_1_28 == ((unsigned char) 0)))) && ((var_1_21 && (var_1_25 != var_1_5)) ? ((var_1_21 || (var_1_26 > ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) ? (var_1_30 == ((signed short int) ((((last_1_var_1_30) < (((((var_1_26) < ((var_1_28 - var_1_32))) ? (var_1_26) : ((var_1_28 - var_1_32)))))) ? (last_1_var_1_30) : (((((var_1_26) < ((var_1_28 - var_1_32))) ? (var_1_26) : ((var_1_28 - var_1_32))))))))) : (var_1_30 == ((signed short int) var_1_13))) : (var_1_30 == ((signed short int) -16)))) && (var_1_33 == ((double) var_1_18))
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
