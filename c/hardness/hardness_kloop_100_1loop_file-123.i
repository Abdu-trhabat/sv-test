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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -32;
signed short int var_1_4 = -128;
signed short int var_1_5 = -50;
unsigned char var_1_7 = 0;
signed short int var_1_8 = 0;
unsigned short int var_1_9 = 128;
unsigned short int var_1_10 = 1;
unsigned char var_1_12 = 0;
signed char var_1_13 = 2;
signed char var_1_14 = -10;
signed char var_1_15 = 1;
signed char var_1_16 = -50;
unsigned char var_1_17 = 0;
signed char var_1_18 = 32;
signed char var_1_19 = -1;
signed char var_1_20 = -1;
double var_1_21 = 15.2;
double var_1_22 = 8.25;
signed long int var_1_23 = 10;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 10;
unsigned char var_1_27 = 10;
float var_1_28 = 31.4;
float var_1_31 = 9.75;
signed short int var_1_32 = -16;
unsigned long int var_1_33 = 10;
unsigned char var_1_34 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
double var_1_39 = 63.8;
unsigned char var_1_40 = 0;
unsigned short int last_1_var_1_9 = 128;
signed long int last_1_var_1_23 = 10;
unsigned long int last_1_var_1_33 = 10;
unsigned char last_1_var_1_34 = 0;
unsigned char last_1_var_1_38 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_38) {
  var_1_9 = var_1_10;
 } else {
  if (last_1_var_1_33 >= var_1_5) {
   if (((var_1_10 + var_1_4) < last_1_var_1_33) && last_1_var_1_34) {
    var_1_9 = var_1_10;
   } else {
    var_1_9 = 2;
   }
  } else {
   var_1_9 = var_1_10;
  }
 }
 if (-25 > (last_1_var_1_23 * last_1_var_1_9)) {
  var_1_34 = (var_1_36 && var_1_37);
 }
 var_1_21 = (((((((4.2) < (var_1_22)) ? (4.2) : (var_1_22))) < 0 ) ? -((((4.2) < (var_1_22)) ? (4.2) : (var_1_22))) : ((((4.2) < (var_1_22)) ? (4.2) : (var_1_22)))));
 signed char stepLocal_4 = var_1_18;
 if (var_1_4 < stepLocal_4) {
  var_1_24 = ((((var_1_25) < (((((var_1_26) < (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_26) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))) ? (var_1_25) : (((((var_1_26) < (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_26) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))));
 }
 signed short int stepLocal_5 = var_1_8;
 if (var_1_27 < stepLocal_5) {
  var_1_32 = -32;
 }
 if ((var_1_25 >= var_1_9) || var_1_34) {
  if (((((var_1_21 / var_1_31) < 0 ) ? -(var_1_21 / var_1_31) : (var_1_21 / var_1_31))) > var_1_22) {
   var_1_28 = 9.25f;
  }
 } else {
  var_1_28 = var_1_22;
 }
 unsigned char stepLocal_9 = var_1_24;
 unsigned char stepLocal_8 = var_1_34;
 unsigned char stepLocal_7 = var_1_34;
 if (var_1_20 >= stepLocal_9) {
  if (var_1_7) {
   if (stepLocal_8 && var_1_17) {
    if ((var_1_28 * var_1_21) >= (var_1_22 / ((((var_1_31) < (var_1_39)) ? (var_1_31) : (var_1_39))))) {
     if ((var_1_37 || var_1_17) || stepLocal_7) {
      var_1_38 = (var_1_12 || var_1_36);
     }
    } else {
     var_1_38 = var_1_36;
    }
   } else {
    var_1_38 = 0;
   }
  } else {
   var_1_38 = 0;
  }
 } else {
  var_1_38 = var_1_40;
 }
 unsigned char stepLocal_2 = var_1_38 && var_1_34;
 if (var_1_38 && stepLocal_2) {
  var_1_16 = ((((((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_18)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_18)))) > (100)) ? (((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_18)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_18)))) : (100)));
 } else {
  var_1_16 = (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_15);
 }
 signed short int stepLocal_3 = var_1_4;
 if (var_1_9 > stepLocal_3) {
  var_1_23 = (var_1_32 + ((var_1_16 + var_1_18) + var_1_5));
 }
 signed long int stepLocal_6 = var_1_5 / var_1_4;
 if (stepLocal_6 >= ((var_1_18 + var_1_26) + (var_1_20 + var_1_23))) {
  var_1_33 = var_1_32;
 }
 unsigned long int stepLocal_0 = (var_1_23 + var_1_33) / ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 if (stepLocal_0 <= var_1_33) {
  if (var_1_34) {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_8;
 }
 signed long int stepLocal_1 = 25 % ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
 if (stepLocal_1 == ((var_1_10 - 100000) + var_1_1)) {
  if (var_1_38) {
   var_1_13 = (var_1_14 + var_1_15);
  }
 } else {
  var_1_13 = var_1_15;
 }
 if (var_1_1 <= var_1_18) {
  var_1_19 = (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_20);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32767);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 assume_abort_if_not(var_1_31 != 0.0F);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 assume_abort_if_not(var_1_39 != 0.0F);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_38 = var_1_38;
}
int property(void) {
 return (((((((((((((((var_1_23 + var_1_33) / ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) <= var_1_33) ? (var_1_34 ? (var_1_1 == ((signed short int) var_1_8)) : 1) : (var_1_1 == ((signed short int) var_1_8))) && (last_1_var_1_38 ? (var_1_9 == ((unsigned short int) var_1_10)) : ((last_1_var_1_33 >= var_1_5) ? ((((var_1_10 + var_1_4) < last_1_var_1_33) && last_1_var_1_34) ? (var_1_9 == ((unsigned short int) var_1_10)) : (var_1_9 == ((unsigned short int) 2))) : (var_1_9 == ((unsigned short int) var_1_10))))) && (((25 % ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) == ((var_1_10 - 100000) + var_1_1)) ? (var_1_38 ? (var_1_13 == ((signed char) (var_1_14 + var_1_15))) : 1) : (var_1_13 == ((signed char) var_1_15)))) && ((var_1_38 && (var_1_38 && var_1_34)) ? (var_1_16 == ((signed char) ((((((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_18)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_18)))) > (100)) ? (((((((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_18)) ? (((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) : (var_1_18)))) : (100))))) : (var_1_16 == ((signed char) (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_15))))) && ((var_1_1 <= var_1_18) ? (var_1_19 == ((signed char) (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_20))) : 1)) && (var_1_21 == ((double) (((((((4.2) < (var_1_22)) ? (4.2) : (var_1_22))) < 0 ) ? -((((4.2) < (var_1_22)) ? (4.2) : (var_1_22))) : ((((4.2) < (var_1_22)) ? (4.2) : (var_1_22)))))))) && ((var_1_9 > var_1_4) ? (var_1_23 == ((signed long int) (var_1_32 + ((var_1_16 + var_1_18) + var_1_5)))) : 1)) && ((var_1_4 < var_1_18) ? (var_1_24 == ((unsigned char) ((((var_1_25) < (((((var_1_26) < (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_26) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))) ? (var_1_25) : (((((var_1_26) < (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (var_1_26) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))))))) : 1)) && (((var_1_25 >= var_1_9) || var_1_34) ? ((((((var_1_21 / var_1_31) < 0 ) ? -(var_1_21 / var_1_31) : (var_1_21 / var_1_31))) > var_1_22) ? (var_1_28 == ((float) 9.25f)) : 1) : (var_1_28 == ((float) var_1_22)))) && ((var_1_27 < var_1_8) ? (var_1_32 == ((signed short int) -32)) : 1)) && (((var_1_5 / var_1_4) >= ((var_1_18 + var_1_26) + (var_1_20 + var_1_23))) ? (var_1_33 == ((unsigned long int) var_1_32)) : 1)) && ((-25 > (last_1_var_1_23 * last_1_var_1_9)) ? (var_1_34 == ((unsigned char) (var_1_36 && var_1_37))) : 1)) && ((var_1_20 >= var_1_24) ? (var_1_7 ? ((var_1_34 && var_1_17) ? (((var_1_28 * var_1_21) >= (var_1_22 / ((((var_1_31) < (var_1_39)) ? (var_1_31) : (var_1_39))))) ? (((var_1_37 || var_1_17) || var_1_34) ? (var_1_38 == ((unsigned char) (var_1_12 || var_1_36))) : 1) : (var_1_38 == ((unsigned char) var_1_36))) : (var_1_38 == ((unsigned char) 0))) : (var_1_38 == ((unsigned char) 0))) : (var_1_38 == ((unsigned char) var_1_40)))
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
