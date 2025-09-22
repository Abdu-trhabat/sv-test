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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 99999999.4;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 8;
unsigned long int var_1_4 = 4;
double var_1_5 = 50.5;
unsigned short int var_1_6 = 2;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 5;
signed long int var_1_9 = -2;
unsigned long int var_1_10 = 3471304280;
unsigned long int var_1_11 = 10;
unsigned long int var_1_12 = 10000;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 2711030523;
unsigned long int var_1_15 = 5;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 16;
unsigned short int var_1_21 = 8;
signed char var_1_22 = 16;
signed char var_1_23 = 2;
signed char var_1_24 = 16;
signed char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
double var_1_30 = 3.4;
double var_1_31 = 25.625;
double var_1_32 = 49.5;
double var_1_33 = 256.875;
double var_1_34 = 10.8;
double var_1_35 = 31.3;
double var_1_36 = 4.4;
unsigned short int var_1_37 = 16;
signed short int var_1_39 = 8;
signed char var_1_40 = 16;
signed char var_1_41 = 1;
signed long int last_1_var_1_9 = -2;
unsigned long int last_1_var_1_12 = 10000;
unsigned short int last_1_var_1_37 = 16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = var_1_13;
 if (var_1_7 || stepLocal_3) {
  var_1_12 = (var_1_14 - var_1_11);
 } else {
  var_1_12 = ((((var_1_11) < (((((var_1_8) > ((last_1_var_1_37 + var_1_15))) ? (var_1_8) : ((last_1_var_1_37 + var_1_15)))))) ? (var_1_11) : (((((var_1_8) > ((last_1_var_1_37 + var_1_15))) ? (var_1_8) : ((last_1_var_1_37 + var_1_15)))))));
 }
 signed long int stepLocal_7 = last_1_var_1_37;
 unsigned char stepLocal_6 = var_1_18;
 unsigned long int stepLocal_5 = var_1_4;
 if (((var_1_3 + last_1_var_1_12) + last_1_var_1_9) >= stepLocal_5) {
  if (stepLocal_6 != (last_1_var_1_12 + var_1_2)) {
   if (var_1_2 <= stepLocal_7) {
    var_1_26 = var_1_28;
   }
  } else {
   var_1_26 = var_1_29;
  }
 } else {
  var_1_26 = var_1_29;
 }
 unsigned long int stepLocal_2 = (var_1_10 - var_1_8) - var_1_11;
 if ((last_1_var_1_9 / var_1_4) != stepLocal_2) {
  var_1_9 = (var_1_8 - last_1_var_1_9);
 } else {
  if (var_1_26) {
   var_1_9 = var_1_8;
  }
 }
 unsigned char stepLocal_8 = var_1_26;
 if (var_1_28 || stepLocal_8) {
  var_1_30 = ((((var_1_5) < (var_1_31)) ? (var_1_5) : (var_1_31)));
 } else {
  var_1_30 = ((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))) - var_1_34) + ((((((((var_1_35) < (1.625)) ? (var_1_35) : (1.625)))) < (1.875)) ? (((((var_1_35) < (1.625)) ? (var_1_35) : (1.625)))) : (1.875))));
 }
 if (var_1_5 < var_1_30) {
  if ((- var_1_5) < var_1_30) {
   if (var_1_26) {
    var_1_6 = var_1_8;
   } else {
    var_1_6 = 500;
   }
  }
 }
 unsigned long int stepLocal_4 = - (- var_1_14);
 if (var_1_6 >= stepLocal_4) {
  var_1_21 = var_1_17;
 }
 unsigned long int stepLocal_1 = 25u / var_1_4;
 unsigned long int stepLocal_0 = ~ var_1_4;
 if ((var_1_2 + var_1_3) != stepLocal_1) {
  if (stepLocal_0 > var_1_2) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = 100.75;
  }
 }
 if (var_1_26) {
  var_1_16 = ((((var_1_17) < ((((((var_1_18 + var_1_19)) > (var_1_20)) ? ((var_1_18 + var_1_19)) : (var_1_20))))) ? (var_1_17) : ((((((var_1_18 + var_1_19)) > (var_1_20)) ? ((var_1_18 + var_1_19)) : (var_1_20))))));
 } else {
  if (var_1_26) {
   var_1_16 = var_1_18;
  }
 }
 var_1_22 = ((var_1_23 + var_1_24) - var_1_25);
 var_1_36 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 signed char stepLocal_11 = var_1_25;
 if (stepLocal_11 < var_1_18) {
  var_1_40 = (var_1_39 - ((((var_1_41) < (var_1_25)) ? (var_1_41) : (var_1_25))));
 } else {
  if (var_1_1 >= (var_1_34 - var_1_32)) {
   var_1_40 = var_1_25;
  } else {
   var_1_40 = var_1_24;
  }
 }
 unsigned long int stepLocal_10 = (var_1_25 * var_1_20) + var_1_12;
 signed long int stepLocal_9 = (var_1_19 + var_1_25) - var_1_17;
 if (var_1_21 != stepLocal_9) {
  if (! (var_1_34 > var_1_31)) {
   if (stepLocal_10 >= ((((64u >> var_1_39) < 0 ) ? -(64u >> var_1_39) : (64u >> var_1_39)))) {
    var_1_37 = (var_1_24 + var_1_19);
   } else {
    if (var_1_26) {
     var_1_37 = var_1_18;
    } else {
     var_1_37 = var_1_19;
    }
   }
  } else {
   var_1_37 = var_1_17;
  }
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
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 3221225471);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 31);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_37 = var_1_37;
}
int property(void) {
 return (((((((((((((var_1_2 + var_1_3) != (25u / var_1_4)) ? (((~ var_1_4) > var_1_2) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 100.75))) : 1) && ((var_1_5 < var_1_30) ? (((- var_1_5) < var_1_30) ? (var_1_26 ? (var_1_6 == ((unsigned short int) var_1_8)) : (var_1_6 == ((unsigned short int) 500))) : 1) : 1)) && (((last_1_var_1_9 / var_1_4) != ((var_1_10 - var_1_8) - var_1_11)) ? (var_1_9 == ((signed long int) (var_1_8 - last_1_var_1_9))) : (var_1_26 ? (var_1_9 == ((signed long int) var_1_8)) : 1))) && ((var_1_7 || var_1_13) ? (var_1_12 == ((unsigned long int) (var_1_14 - var_1_11))) : (var_1_12 == ((unsigned long int) ((((var_1_11) < (((((var_1_8) > ((last_1_var_1_37 + var_1_15))) ? (var_1_8) : ((last_1_var_1_37 + var_1_15)))))) ? (var_1_11) : (((((var_1_8) > ((last_1_var_1_37 + var_1_15))) ? (var_1_8) : ((last_1_var_1_37 + var_1_15))))))))))) && (var_1_26 ? (var_1_16 == ((unsigned char) ((((var_1_17) < ((((((var_1_18 + var_1_19)) > (var_1_20)) ? ((var_1_18 + var_1_19)) : (var_1_20))))) ? (var_1_17) : ((((((var_1_18 + var_1_19)) > (var_1_20)) ? ((var_1_18 + var_1_19)) : (var_1_20)))))))) : (var_1_26 ? (var_1_16 == ((unsigned char) var_1_18)) : 1))) && ((var_1_6 >= (- (- var_1_14))) ? (var_1_21 == ((unsigned short int) var_1_17)) : 1)) && (var_1_22 == ((signed char) ((var_1_23 + var_1_24) - var_1_25)))) && ((((var_1_3 + last_1_var_1_12) + last_1_var_1_9) >= var_1_4) ? ((var_1_18 != (last_1_var_1_12 + var_1_2)) ? ((var_1_2 <= last_1_var_1_37) ? (var_1_26 == ((unsigned char) var_1_28)) : 1) : (var_1_26 == ((unsigned char) var_1_29))) : (var_1_26 == ((unsigned char) var_1_29)))) && ((var_1_28 || var_1_26) ? (var_1_30 == ((double) ((((var_1_5) < (var_1_31)) ? (var_1_5) : (var_1_31))))) : (var_1_30 == ((double) ((((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))) - var_1_34) + ((((((((var_1_35) < (1.625)) ? (var_1_35) : (1.625)))) < (1.875)) ? (((((var_1_35) < (1.625)) ? (var_1_35) : (1.625)))) : (1.875)))))))) && (var_1_36 == ((double) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) && ((var_1_21 != ((var_1_19 + var_1_25) - var_1_17)) ? ((! (var_1_34 > var_1_31)) ? ((((var_1_25 * var_1_20) + var_1_12) >= ((((64u >> var_1_39) < 0 ) ? -(64u >> var_1_39) : (64u >> var_1_39)))) ? (var_1_37 == ((unsigned short int) (var_1_24 + var_1_19))) : (var_1_26 ? (var_1_37 == ((unsigned short int) var_1_18)) : (var_1_37 == ((unsigned short int) var_1_19)))) : (var_1_37 == ((unsigned short int) var_1_17))) : 1)) && ((var_1_25 < var_1_18) ? (var_1_40 == ((signed char) (var_1_39 - ((((var_1_41) < (var_1_25)) ? (var_1_41) : (var_1_25)))))) : ((var_1_1 >= (var_1_34 - var_1_32)) ? (var_1_40 == ((signed char) var_1_25)) : (var_1_40 == ((signed char) var_1_24))))
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
