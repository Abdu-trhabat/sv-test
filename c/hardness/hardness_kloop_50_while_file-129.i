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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12950_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 5.2;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 5;
unsigned long int var_1_4 = 5;
float var_1_5 = 255.875;
float var_1_6 = 1.75;
float var_1_7 = 16.25;
float var_1_8 = 0.44999999999999996;
float var_1_9 = 3.6;
signed long int var_1_10 = 1506006796;
signed long int var_1_11 = 500;
signed long int var_1_12 = 2;
signed short int var_1_13 = 0;
signed short int var_1_14 = 32;
signed short int var_1_15 = 0;
signed short int var_1_16 = 8;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
double var_1_21 = 9.5;
double var_1_22 = 128.8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 0;
double var_1_26 = 24.5;
double var_1_27 = 3.5;
unsigned char last_1_var_1_17 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_2 ^ var_1_3) != var_1_4) {
  var_1_1 = (var_1_5 + var_1_6);
 } else {
  var_1_1 = (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) - 32.4f);
 }
 if (((var_1_10 - var_1_11) - var_1_12) < var_1_2) {
  var_1_9 = var_1_8;
 }
 if ((var_1_10 ^ var_1_2) >= (var_1_4 | var_1_12)) {
  if (var_1_10 != (~ var_1_11)) {
   var_1_13 = (var_1_14 + ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))));
  } else {
   var_1_13 = var_1_14;
  }
 }
 if (! last_1_var_1_17) {
  var_1_17 = var_1_19;
 } else {
  var_1_17 = ((! var_1_19) && var_1_20);
 }
 var_1_21 = (1.000000005E8 - (7.46417232161781E18 - var_1_22));
 unsigned char stepLocal_2 = var_1_19;
 unsigned long int stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = var_1_24 - 16;
 if (var_1_17 || stepLocal_2) {
  if (stepLocal_0 >= var_1_14) {
   if (var_1_2 < stepLocal_1) {
    var_1_23 = var_1_25;
   }
  } else {
   var_1_23 = var_1_25;
  }
 } else {
  var_1_23 = var_1_25;
 }
 signed long int stepLocal_3 = -8;
 if (stepLocal_3 < var_1_13) {
  var_1_26 = ((((var_1_22) > (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27)))))) ? (var_1_22) : (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27)))))));
 } else {
  var_1_26 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741824);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -16383);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -16383);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -16383);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 255);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return ((((((((var_1_2 ^ var_1_3) != var_1_4) ? (var_1_1 == ((float) (var_1_5 + var_1_6))) : (var_1_1 == ((float) (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) - 32.4f)))) && ((((var_1_10 - var_1_11) - var_1_12) < var_1_2) ? (var_1_9 == ((float) var_1_8)) : 1)) && (((var_1_10 ^ var_1_2) >= (var_1_4 | var_1_12)) ? ((var_1_10 != (~ var_1_11)) ? (var_1_13 == ((signed short int) (var_1_14 + ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))))) : (var_1_13 == ((signed short int) var_1_14))) : 1)) && ((! last_1_var_1_17) ? (var_1_17 == ((unsigned char) var_1_19)) : (var_1_17 == ((unsigned char) ((! var_1_19) && var_1_20))))) && (var_1_21 == ((double) (1.000000005E8 - (7.46417232161781E18 - var_1_22))))) && ((var_1_17 || var_1_19) ? (((var_1_24 - 16) >= var_1_14) ? ((var_1_2 < var_1_4) ? (var_1_23 == ((unsigned char) var_1_25)) : 1) : (var_1_23 == ((unsigned char) var_1_25))) : (var_1_23 == ((unsigned char) var_1_25)))) && ((-8 < var_1_13) ? (var_1_26 == ((double) ((((var_1_22) > (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27)))))) ? (var_1_22) : (((((var_1_8) > ((var_1_7 - var_1_27))) ? (var_1_8) : ((var_1_7 - var_1_27))))))))) : (var_1_26 == ((double) var_1_8)))
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
