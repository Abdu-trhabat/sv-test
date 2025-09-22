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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 64;
signed long int var_1_2 = -2;
signed long int var_1_3 = 2;
signed long int var_1_5 = 16;
signed long int var_1_6 = 4;
unsigned long int var_1_7 = 0;
unsigned long int var_1_8 = 2259497370;
unsigned long int var_1_9 = 1673155679;
unsigned long int var_1_10 = 256;
float var_1_11 = 31.5;
float var_1_12 = 0.0;
float var_1_13 = 1.2;
float var_1_14 = 100000000000000.2;
float var_1_15 = 31.4;
unsigned long int var_1_16 = 256;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 32;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 16;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
signed short int var_1_29 = -256;
signed long int var_1_30 = 64;
float var_1_31 = 100.75;
unsigned long int var_1_32 = 8;
double var_1_33 = 24.6;
float var_1_34 = 255.5;
unsigned short int var_1_35 = 50;
unsigned short int var_1_36 = 62689;
unsigned long int last_1_var_1_1 = 64;
unsigned long int last_1_var_1_16 = 256;
unsigned short int last_1_var_1_35 = 50;
void initially(void) {
}
void step(void) {
 if ((var_1_6 + (last_1_var_1_35 * last_1_var_1_1)) < last_1_var_1_16) {
  var_1_33 = (var_1_13 + var_1_14);
 }
 signed long int stepLocal_0 = var_1_3;
 if (var_1_2 <= stepLocal_0) {
  var_1_11 = ((var_1_12 - ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) - var_1_15);
 } else {
  var_1_11 = var_1_15;
 }
 unsigned char stepLocal_1 = var_1_17;
 if (stepLocal_1 && (var_1_18 && var_1_19)) {
  var_1_16 = var_1_6;
 } else {
  var_1_16 = ((((5u) > ((var_1_8 - var_1_3))) ? (5u) : ((var_1_8 - var_1_3))));
 }
 if (var_1_5 != ((var_1_9 - var_1_21) - var_1_25)) {
  var_1_27 = var_1_28;
 }
 var_1_34 = ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12)));
 if (var_1_27) {
  var_1_20 = var_1_21;
 }
 if (var_1_14 >= var_1_33) {
  if (var_1_27) {
   var_1_22 = (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))) + var_1_25);
  } else {
   var_1_22 = var_1_21;
  }
 } else {
  var_1_22 = var_1_26;
 }
 if (var_1_6 == (var_1_20 - (50 + var_1_10))) {
  var_1_30 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  if (var_1_27 || var_1_19) {
   var_1_30 = var_1_26;
  }
 }
 unsigned long int stepLocal_4 = var_1_30 % var_1_32;
 if (((var_1_20 ^ var_1_16) + var_1_9) != stepLocal_4) {
  var_1_31 = ((var_1_12 - var_1_13) - var_1_14);
 } else {
  var_1_31 = 15.2f;
 }
 if (((((((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) < ((var_1_3 * var_1_30))) ? (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) : ((var_1_3 * var_1_30)))) < (var_1_5 - var_1_6)) {
  var_1_1 = ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6)));
 } else {
  var_1_1 = (var_1_8 - (var_1_9 - var_1_10));
 }
 unsigned long int stepLocal_3 = var_1_26 / var_1_9;
 signed long int stepLocal_2 = 5;
 if (var_1_26 < stepLocal_2) {
  var_1_29 = ((var_1_30 + var_1_23) - var_1_24);
 } else {
  if (var_1_6 <= stepLocal_3) {
   var_1_29 = (var_1_24 + var_1_25);
  } else {
   var_1_29 = -2;
  }
 }
 if (var_1_1 != var_1_9) {
  if (var_1_33 >= var_1_13) {
   var_1_35 = ((var_1_36 - var_1_25) - var_1_16);
  } else {
   if (var_1_1 <= (- (var_1_29 + var_1_25))) {
    if (var_1_10 <= (var_1_16 & var_1_26)) {
     var_1_35 = (var_1_36 - var_1_21);
    } else {
     var_1_35 = (var_1_21 + var_1_26);
    }
   } else {
    if (var_1_27) {
     var_1_35 = (var_1_23 + 16);
    } else {
     var_1_35 = var_1_16;
    }
   }
  }
 } else {
  var_1_35 = var_1_23;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483647);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 1073741823);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1073741823);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 assume_abort_if_not(var_1_32 != 0);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 49150);
 assume_abort_if_not(var_1_36 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_35 = var_1_35;
}
int property(void) {
 return ((((((((((((((((((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) < ((var_1_3 * var_1_30))) ? (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) : ((var_1_3 * var_1_30)))) < (var_1_5 - var_1_6)) ? (var_1_1 == ((unsigned long int) ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))))) : (var_1_1 == ((unsigned long int) (var_1_8 - (var_1_9 - var_1_10))))) && ((var_1_2 <= var_1_3) ? (var_1_11 == ((float) ((var_1_12 - ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) - var_1_15))) : (var_1_11 == ((float) var_1_15)))) && ((var_1_17 && (var_1_18 && var_1_19)) ? (var_1_16 == ((unsigned long int) var_1_6)) : (var_1_16 == ((unsigned long int) ((((5u) > ((var_1_8 - var_1_3))) ? (5u) : ((var_1_8 - var_1_3)))))))) && (var_1_27 ? (var_1_20 == ((unsigned char) var_1_21)) : 1)) && ((var_1_14 >= var_1_33) ? (var_1_27 ? (var_1_22 == ((unsigned char) (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24))) + var_1_25))) : (var_1_22 == ((unsigned char) var_1_21))) : (var_1_22 == ((unsigned char) var_1_26)))) && ((var_1_5 != ((var_1_9 - var_1_21) - var_1_25)) ? (var_1_27 == ((unsigned char) var_1_28)) : 1)) && ((var_1_26 < 5) ? (var_1_29 == ((signed short int) ((var_1_30 + var_1_23) - var_1_24))) : ((var_1_6 <= (var_1_26 / var_1_9)) ? (var_1_29 == ((signed short int) (var_1_24 + var_1_25))) : (var_1_29 == ((signed short int) -2))))) && ((var_1_6 == (var_1_20 - (50 + var_1_10))) ? (var_1_30 == ((signed long int) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : ((var_1_27 || var_1_19) ? (var_1_30 == ((signed long int) var_1_26)) : 1))) && ((((var_1_20 ^ var_1_16) + var_1_9) != (var_1_30 % var_1_32)) ? (var_1_31 == ((float) ((var_1_12 - var_1_13) - var_1_14))) : (var_1_31 == ((float) 15.2f)))) && (((var_1_6 + (last_1_var_1_35 * last_1_var_1_1)) < last_1_var_1_16) ? (var_1_33 == ((double) (var_1_13 + var_1_14))) : 1)) && (var_1_34 == ((float) ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12)))))) && ((var_1_1 != var_1_9) ? ((var_1_33 >= var_1_13) ? (var_1_35 == ((unsigned short int) ((var_1_36 - var_1_25) - var_1_16))) : ((var_1_1 <= (- (var_1_29 + var_1_25))) ? ((var_1_10 <= (var_1_16 & var_1_26)) ? (var_1_35 == ((unsigned short int) (var_1_36 - var_1_21))) : (var_1_35 == ((unsigned short int) (var_1_21 + var_1_26)))) : (var_1_27 ? (var_1_35 == ((unsigned short int) (var_1_23 + 16))) : (var_1_35 == ((unsigned short int) var_1_16))))) : (var_1_35 == ((unsigned short int) var_1_23)))
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
