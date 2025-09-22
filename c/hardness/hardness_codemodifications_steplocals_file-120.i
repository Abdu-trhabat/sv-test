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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 4.8;
signed char var_1_2 = -4;
signed char var_1_3 = -16;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
float var_1_6 = 10000000000000.95;
float var_1_7 = 2.8;
float var_1_8 = 32.7;
float var_1_9 = 256.4;
double var_1_10 = 8.125;
signed short int var_1_11 = 16;
signed short int var_1_12 = 32;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 25;
signed long int var_1_18 = -1;
unsigned char var_1_19 = 2;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 58772;
unsigned char var_1_22 = 0;
void initially(void) {
}
void step(void) {
 signed char stepLocal_0 = var_1_2;
 if (stepLocal_0 <= var_1_3) {
  if (! (var_1_4 && var_1_5)) {
   var_1_1 = (var_1_6 + (((((var_1_7 - var_1_8)) > (var_1_9)) ? ((var_1_7 - var_1_8)) : (var_1_9))));
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_9;
 }
 if (var_1_3 != var_1_2) {
  if (var_1_4) {
   if ((var_1_7 + var_1_1) >= (var_1_8 / 0.5f)) {
    var_1_10 = var_1_6;
   } else {
    var_1_10 = var_1_8;
   }
  }
 }
 var_1_11 = ((((var_1_2) < (((((var_1_3) > (var_1_12)) ? (var_1_3) : (var_1_12))))) ? (var_1_2) : (((((var_1_3) > (var_1_12)) ? (var_1_3) : (var_1_12))))));
 if (var_1_5) {
  var_1_13 = (var_1_14 && (! var_1_15));
 }
 if (! var_1_5) {
  var_1_16 = var_1_17;
 }
 signed long int stepLocal_2 = - (var_1_16 % var_1_19);
 signed long int stepLocal_1 = 128 / -100;
 if (stepLocal_2 >= var_1_12) {
  if (((var_1_12 * var_1_2) ^ (8 & var_1_11)) <= stepLocal_1) {
   var_1_18 = ((var_1_19 - var_1_17) + var_1_16);
  }
 } else {
  var_1_18 = var_1_17;
 }
 if (var_1_14 || var_1_15) {
  var_1_20 = (var_1_21 - ((((var_1_19) < (var_1_17)) ? (var_1_19) : (var_1_17))));
 }
 var_1_22 = var_1_14;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 255);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 <= var_1_3) ? ((! (var_1_4 && var_1_5)) ? (var_1_1 == ((float) (var_1_6 + (((((var_1_7 - var_1_8)) > (var_1_9)) ? ((var_1_7 - var_1_8)) : (var_1_9)))))) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) var_1_9))) && ((var_1_3 != var_1_2) ? (var_1_4 ? (((var_1_7 + var_1_1) >= (var_1_8 / 0.5f)) ? (var_1_10 == ((double) var_1_6)) : (var_1_10 == ((double) var_1_8))) : 1) : 1)) && (var_1_11 == ((signed short int) ((((var_1_2) < (((((var_1_3) > (var_1_12)) ? (var_1_3) : (var_1_12))))) ? (var_1_2) : (((((var_1_3) > (var_1_12)) ? (var_1_3) : (var_1_12))))))))) && (var_1_5 ? (var_1_13 == ((unsigned char) (var_1_14 && (! var_1_15)))) : 1)) && ((! var_1_5) ? (var_1_16 == ((unsigned char) var_1_17)) : 1)) && (((- (var_1_16 % var_1_19)) >= var_1_12) ? ((((var_1_12 * var_1_2) ^ (8 & var_1_11)) <= (128 / -100)) ? (var_1_18 == ((signed long int) ((var_1_19 - var_1_17) + var_1_16))) : 1) : (var_1_18 == ((signed long int) var_1_17)))) && ((var_1_14 || var_1_15) ? (var_1_20 == ((unsigned short int) (var_1_21 - ((((var_1_19) < (var_1_17)) ? (var_1_19) : (var_1_17)))))) : 1)) && (var_1_22 == ((unsigned char) var_1_14))
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
