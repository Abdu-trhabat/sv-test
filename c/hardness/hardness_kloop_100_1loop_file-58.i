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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_4 = 64;
signed long int var_1_6 = -1;
signed short int var_1_7 = 8;
signed short int var_1_8 = -2;
signed short int var_1_9 = -5;
signed short int var_1_10 = 1;
unsigned long int var_1_11 = 1000;
signed char var_1_12 = -128;
unsigned long int var_1_13 = 3229788856;
signed char var_1_14 = 16;
signed char var_1_15 = -50;
signed long int var_1_16 = -8;
unsigned long int var_1_17 = 128;
unsigned long int var_1_19 = 2;
float var_1_20 = 31.2;
float var_1_21 = 7.8;
float var_1_22 = 4.2;
float var_1_23 = 4.75;
float var_1_24 = 32.75;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 50;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 10;
float var_1_30 = 32.48;
double var_1_31 = 255.2;
signed char var_1_32 = 8;
signed char var_1_33 = -32;
signed char var_1_34 = -8;
signed char var_1_35 = 2;
signed char var_1_36 = 1;
signed char var_1_37 = 32;
signed char var_1_38 = 4;
signed char var_1_39 = -1;
signed char var_1_40 = 8;
float var_1_41 = 127.5;
unsigned short int var_1_42 = 1;
signed short int last_1_var_1_7 = 8;
unsigned long int last_1_var_1_11 = 1000;
signed long int last_1_var_1_16 = -8;
unsigned long int last_1_var_1_17 = 128;
signed char last_1_var_1_32 = 8;
unsigned short int last_1_var_1_42 = 1;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (((-256) > ((last_1_var_1_11 / var_1_6))) ? (-256) : ((last_1_var_1_11 / var_1_6)));
 if ((last_1_var_1_7 / (8 + var_1_4)) > stepLocal_0) {
  var_1_1 = last_1_var_1_7;
 } else {
  var_1_1 = 2;
 }
 if (var_1_2) {
  var_1_7 = (var_1_1 + (((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8))) + (var_1_9 + var_1_10)));
 } else {
  var_1_7 = (var_1_10 + var_1_1);
 }
 if (var_1_2) {
  var_1_11 = (var_1_4 + last_1_var_1_16);
 }
 unsigned char stepLocal_3 = var_1_2;
 if (stepLocal_3 || (((((last_1_var_1_42) > (last_1_var_1_32)) ? (last_1_var_1_42) : (last_1_var_1_32))) < ((((var_1_15) < (last_1_var_1_16)) ? (var_1_15) : (last_1_var_1_16))))) {
  var_1_17 = ((((1u) > ((var_1_4 + last_1_var_1_17))) ? (1u) : ((var_1_4 + last_1_var_1_17))));
 } else {
  var_1_17 = var_1_19;
 }
 if (var_1_2) {
  var_1_20 = (((((var_1_21 - var_1_22)) < ((var_1_23 - var_1_24))) ? ((var_1_21 - var_1_22)) : ((var_1_23 - var_1_24))));
 } else {
  if (((var_1_4 - var_1_1) == var_1_15) || var_1_25) {
   var_1_20 = var_1_22;
  }
 }
 if (var_1_25) {
  if (var_1_2) {
   var_1_26 = ((((var_1_4) > (var_1_27)) ? (var_1_4) : (var_1_27)));
  } else {
   var_1_26 = (((((4) < (var_1_4)) ? (4) : (var_1_4))) + ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))));
  }
 }
 if (var_1_2 && var_1_25) {
  var_1_30 = ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23)));
 }
 var_1_31 = ((((((((var_1_24) < (var_1_22)) ? (var_1_24) : (var_1_22)))) < ((var_1_23 - var_1_21))) ? (((((var_1_24) < (var_1_22)) ? (var_1_24) : (var_1_22)))) : ((var_1_23 - var_1_21))));
 var_1_41 = var_1_22;
 var_1_42 = 256;
 unsigned long int stepLocal_2 = var_1_17;
 if (var_1_6 >= stepLocal_2) {
  var_1_16 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
 } else {
  var_1_16 = (32 + var_1_42);
 }
 unsigned long int stepLocal_1 = (((var_1_26) < ((var_1_13 - var_1_17))) ? (var_1_26) : ((var_1_13 - var_1_17)));
 if (var_1_17 <= stepLocal_1) {
  var_1_12 = ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)));
 }
 if (var_1_25) {
  if (var_1_15 > (var_1_12 * var_1_11)) {
   if (! var_1_2) {
    var_1_32 = (var_1_33 + var_1_34);
   } else {
    var_1_32 = ((((var_1_34 + var_1_33) < 0 ) ? -(var_1_34 + var_1_33) : (var_1_34 + var_1_33)));
   }
  } else {
   var_1_32 = (var_1_35 - var_1_36);
  }
 } else {
  if (var_1_31 > ((((var_1_22) < (15.615f)) ? (var_1_22) : (15.615f)))) {
   var_1_32 = (var_1_34 + ((((var_1_37 - var_1_38) < 0 ) ? -(var_1_37 - var_1_38) : (var_1_37 - var_1_38))));
  } else {
   if (var_1_2) {
    var_1_32 = (var_1_37 + var_1_38);
   } else {
    if (var_1_17 == var_1_29) {
     if ((- var_1_17) >= var_1_4) {
      var_1_32 = ((var_1_39 + var_1_40) + var_1_38);
     }
    } else {
     var_1_32 = var_1_35;
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -8191);
 assume_abort_if_not(var_1_8 <= 8192);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -4095);
 assume_abort_if_not(var_1_9 <= 4096);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -4095);
 assume_abort_if_not(var_1_10 <= 4095);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -63);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -1);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -31);
 assume_abort_if_not(var_1_39 <= 32);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -31);
 assume_abort_if_not(var_1_40 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_42 = var_1_42;
}
int property(void) {
 return ((((((((((((((last_1_var_1_7 / (8 + var_1_4)) > ((((-256) > ((last_1_var_1_11 / var_1_6))) ? (-256) : ((last_1_var_1_11 / var_1_6))))) ? (var_1_1 == ((unsigned short int) last_1_var_1_7)) : (var_1_1 == ((unsigned short int) 2))) && (var_1_2 ? (var_1_7 == ((signed short int) (var_1_1 + (((((var_1_4) > (var_1_8)) ? (var_1_4) : (var_1_8))) + (var_1_9 + var_1_10))))) : (var_1_7 == ((signed short int) (var_1_10 + var_1_1))))) && (var_1_2 ? (var_1_11 == ((unsigned long int) (var_1_4 + last_1_var_1_16))) : 1)) && ((var_1_17 <= ((((var_1_26) < ((var_1_13 - var_1_17))) ? (var_1_26) : ((var_1_13 - var_1_17))))) ? (var_1_12 == ((signed char) ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))))) : 1)) && ((var_1_6 >= var_1_17) ? (var_1_16 == ((signed long int) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : (var_1_16 == ((signed long int) (32 + var_1_42))))) && ((var_1_2 || (((((last_1_var_1_42) > (last_1_var_1_32)) ? (last_1_var_1_42) : (last_1_var_1_32))) < ((((var_1_15) < (last_1_var_1_16)) ? (var_1_15) : (last_1_var_1_16))))) ? (var_1_17 == ((unsigned long int) ((((1u) > ((var_1_4 + last_1_var_1_17))) ? (1u) : ((var_1_4 + last_1_var_1_17)))))) : (var_1_17 == ((unsigned long int) var_1_19)))) && (var_1_2 ? (var_1_20 == ((float) (((((var_1_21 - var_1_22)) < ((var_1_23 - var_1_24))) ? ((var_1_21 - var_1_22)) : ((var_1_23 - var_1_24)))))) : ((((var_1_4 - var_1_1) == var_1_15) || var_1_25) ? (var_1_20 == ((float) var_1_22)) : 1))) && (var_1_25 ? (var_1_2 ? (var_1_26 == ((unsigned char) ((((var_1_4) > (var_1_27)) ? (var_1_4) : (var_1_27))))) : (var_1_26 == ((unsigned char) (((((4) < (var_1_4)) ? (4) : (var_1_4))) + ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))))) : 1)) && ((var_1_2 && var_1_25) ? (var_1_30 == ((float) ((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))))) : 1)) && (var_1_31 == ((double) ((((((((var_1_24) < (var_1_22)) ? (var_1_24) : (var_1_22)))) < ((var_1_23 - var_1_21))) ? (((((var_1_24) < (var_1_22)) ? (var_1_24) : (var_1_22)))) : ((var_1_23 - var_1_21))))))) && (var_1_25 ? ((var_1_15 > (var_1_12 * var_1_11)) ? ((! var_1_2) ? (var_1_32 == ((signed char) (var_1_33 + var_1_34))) : (var_1_32 == ((signed char) ((((var_1_34 + var_1_33) < 0 ) ? -(var_1_34 + var_1_33) : (var_1_34 + var_1_33)))))) : (var_1_32 == ((signed char) (var_1_35 - var_1_36)))) : ((var_1_31 > ((((var_1_22) < (15.615f)) ? (var_1_22) : (15.615f)))) ? (var_1_32 == ((signed char) (var_1_34 + ((((var_1_37 - var_1_38) < 0 ) ? -(var_1_37 - var_1_38) : (var_1_37 - var_1_38)))))) : (var_1_2 ? (var_1_32 == ((signed char) (var_1_37 + var_1_38))) : ((var_1_17 == var_1_29) ? (((- var_1_17) >= var_1_4) ? (var_1_32 == ((signed char) ((var_1_39 + var_1_40) + var_1_38))) : 1) : (var_1_32 == ((signed char) var_1_35))))))) && (var_1_41 == ((float) var_1_22))) && (var_1_42 == ((unsigned short int) 256))
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
