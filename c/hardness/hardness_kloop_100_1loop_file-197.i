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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
float var_1_2 = 2.75;
float var_1_3 = 0.6799999999999999;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 100000;
signed long int var_1_10 = 32;
signed long int var_1_11 = -16;
signed long int var_1_12 = -128;
signed long int var_1_13 = -10;
unsigned long int var_1_14 = 25;
unsigned long int var_1_15 = 3255637944;
unsigned long int var_1_16 = 128;
unsigned short int var_1_17 = 32;
unsigned long int var_1_18 = 500;
unsigned short int var_1_19 = 5;
signed char var_1_20 = -5;
signed short int var_1_21 = 32;
signed char var_1_22 = 5;
signed short int var_1_23 = -4;
signed short int var_1_24 = 10;
signed short int var_1_25 = 256;
signed short int var_1_26 = 10;
float var_1_27 = 8.45;
float var_1_28 = 3.5;
signed long int var_1_29 = -64;
signed long int var_1_31 = 1513595777;
unsigned long int var_1_32 = 64;
float var_1_33 = 0.125;
float var_1_34 = 63.6;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 8;
signed long int var_1_38 = -2;
signed long int var_1_39 = 1203185678;
double var_1_40 = 5.375;
signed long int var_1_41 = 5;
signed long int var_1_42 = 0;
signed short int var_1_43 = 25;
unsigned char var_1_44 = 0;
signed long int last_1_var_1_38 = -2;
void initially(void) {
}
void step(void) {
 var_1_14 = (var_1_15 - var_1_16);
 unsigned long int stepLocal_0 = var_1_16;
 if (var_1_5) {
  if (stepLocal_0 < (var_1_14 + (var_1_15 % var_1_18))) {
   var_1_17 = 256;
  } else {
   var_1_17 = var_1_19;
  }
 }
 unsigned char stepLocal_1 = var_1_6;
 if (stepLocal_1 || ((var_1_11 * var_1_14) == (var_1_16 | -256))) {
  var_1_20 = (((50 - var_1_22) + 1) - 2);
 }
 unsigned long int stepLocal_3 = var_1_18;
 if (stepLocal_3 == var_1_22) {
  var_1_25 = ((((var_1_26) < (var_1_22)) ? (var_1_26) : (var_1_22)));
 }
 var_1_27 = var_1_28;
 signed long int stepLocal_4 = var_1_21 - var_1_24;
 if (var_1_17 != stepLocal_4) {
  var_1_29 = ((var_1_31 - var_1_19) - var_1_22);
 } else {
  var_1_29 = var_1_13;
 }
 var_1_35 = ((((((((((((32) < (var_1_22)) ? (32) : (var_1_22)))) > (var_1_36)) ? (((((32) < (var_1_22)) ? (32) : (var_1_22)))) : (var_1_36)))) < ((128 - var_1_37))) ? (((((((((32) < (var_1_22)) ? (32) : (var_1_22)))) > (var_1_36)) ? (((((32) < (var_1_22)) ? (32) : (var_1_22)))) : (var_1_36)))) : ((128 - var_1_37))));
 var_1_43 = var_1_37;
 var_1_44 = var_1_6;
 if (var_1_2 != var_1_3) {
  var_1_1 = ((var_1_44 || (var_1_5 && var_1_6)) && var_1_7);
 } else {
  if (var_1_3 > var_1_2) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_6;
  }
 }
 if (var_1_3 <= var_1_2) {
  if (var_1_2 >= var_1_3) {
   var_1_9 = ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) + var_1_13);
  } else {
   if (var_1_44) {
    var_1_9 = var_1_11;
   } else {
    var_1_9 = -16;
   }
  }
 } else {
  var_1_9 = var_1_10;
 }
 unsigned char stepLocal_2 = var_1_6;
 if (var_1_8 || stepLocal_2) {
  var_1_23 = (((((var_1_22 - var_1_24) + var_1_29) < 0 ) ? -((var_1_22 - var_1_24) + var_1_29) : ((var_1_22 - var_1_24) + var_1_29)));
 } else {
  var_1_23 = (var_1_24 + var_1_29);
 }
 signed long int stepLocal_6 = var_1_19 / var_1_31;
 signed long int stepLocal_5 = var_1_9;
 if (var_1_27 >= ((var_1_33 - var_1_34) * (- var_1_27))) {
  var_1_32 = (var_1_15 - ((((var_1_16) > (var_1_24)) ? (var_1_16) : (var_1_24))));
 } else {
  if (var_1_19 != stepLocal_5) {
   var_1_32 = (var_1_24 + var_1_16);
  } else {
   if (var_1_16 >= stepLocal_6) {
    var_1_32 = var_1_16;
   } else {
    var_1_32 = 256u;
   }
  }
 }
 signed long int stepLocal_7 = var_1_37 + (var_1_21 * var_1_11);
 if (stepLocal_7 >= last_1_var_1_38) {
  var_1_38 = ((var_1_37 + var_1_36) - (var_1_39 - var_1_19));
 } else {
  if (var_1_40 >= (var_1_27 + var_1_3)) {
   var_1_38 = ((var_1_22 + var_1_41) - var_1_39);
  } else {
   var_1_38 = (var_1_42 - var_1_32);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -536870911);
 assume_abort_if_not(var_1_10 <= 536870912);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -536870911);
 assume_abort_if_not(var_1_11 <= 536870912);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -536870911);
 assume_abort_if_not(var_1_12 <= 536870911);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -1073741823);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 2147483647);
 assume_abort_if_not(var_1_15 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 4294967295);
 assume_abort_if_not(var_1_18 != 0);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 31);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 16383);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32767);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= 1073741822);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 1073741823);
 assume_abort_if_not(var_1_39 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -1);
 assume_abort_if_not(var_1_42 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_38 = var_1_38;
}
int property(void) {
 return ((((((((((((((var_1_2 != var_1_3) ? (var_1_1 == ((unsigned char) ((var_1_44 || (var_1_5 && var_1_6)) && var_1_7))) : ((var_1_3 > var_1_2) ? (var_1_1 == ((unsigned char) var_1_8)) : (var_1_1 == ((unsigned char) var_1_6)))) && ((var_1_3 <= var_1_2) ? ((var_1_2 >= var_1_3) ? (var_1_9 == ((signed long int) ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) + var_1_13))) : (var_1_44 ? (var_1_9 == ((signed long int) var_1_11)) : (var_1_9 == ((signed long int) -16)))) : (var_1_9 == ((signed long int) var_1_10)))) && (var_1_14 == ((unsigned long int) (var_1_15 - var_1_16)))) && (var_1_5 ? ((var_1_16 < (var_1_14 + (var_1_15 % var_1_18))) ? (var_1_17 == ((unsigned short int) 256)) : (var_1_17 == ((unsigned short int) var_1_19))) : 1)) && ((var_1_6 || ((var_1_11 * var_1_14) == (var_1_16 | -256))) ? (var_1_20 == ((signed char) (((50 - var_1_22) + 1) - 2))) : 1)) && ((var_1_8 || var_1_6) ? (var_1_23 == ((signed short int) (((((var_1_22 - var_1_24) + var_1_29) < 0 ) ? -((var_1_22 - var_1_24) + var_1_29) : ((var_1_22 - var_1_24) + var_1_29))))) : (var_1_23 == ((signed short int) (var_1_24 + var_1_29))))) && ((var_1_18 == var_1_22) ? (var_1_25 == ((signed short int) ((((var_1_26) < (var_1_22)) ? (var_1_26) : (var_1_22))))) : 1)) && (var_1_27 == ((float) var_1_28))) && ((var_1_17 != (var_1_21 - var_1_24)) ? (var_1_29 == ((signed long int) ((var_1_31 - var_1_19) - var_1_22))) : (var_1_29 == ((signed long int) var_1_13)))) && ((var_1_27 >= ((var_1_33 - var_1_34) * (- var_1_27))) ? (var_1_32 == ((unsigned long int) (var_1_15 - ((((var_1_16) > (var_1_24)) ? (var_1_16) : (var_1_24)))))) : ((var_1_19 != var_1_9) ? (var_1_32 == ((unsigned long int) (var_1_24 + var_1_16))) : ((var_1_16 >= (var_1_19 / var_1_31)) ? (var_1_32 == ((unsigned long int) var_1_16)) : (var_1_32 == ((unsigned long int) 256u)))))) && (var_1_35 == ((unsigned char) ((((((((((((32) < (var_1_22)) ? (32) : (var_1_22)))) > (var_1_36)) ? (((((32) < (var_1_22)) ? (32) : (var_1_22)))) : (var_1_36)))) < ((128 - var_1_37))) ? (((((((((32) < (var_1_22)) ? (32) : (var_1_22)))) > (var_1_36)) ? (((((32) < (var_1_22)) ? (32) : (var_1_22)))) : (var_1_36)))) : ((128 - var_1_37))))))) && (((var_1_37 + (var_1_21 * var_1_11)) >= last_1_var_1_38) ? (var_1_38 == ((signed long int) ((var_1_37 + var_1_36) - (var_1_39 - var_1_19)))) : ((var_1_40 >= (var_1_27 + var_1_3)) ? (var_1_38 == ((signed long int) ((var_1_22 + var_1_41) - var_1_39))) : (var_1_38 == ((signed long int) (var_1_42 - var_1_32)))))) && (var_1_43 == ((signed short int) var_1_37))) && (var_1_44 == ((unsigned char) var_1_6))
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
