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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 100;
float var_1_6 = 3.8;
float var_1_10 = 64.4;
float var_1_11 = 127.9;
float var_1_12 = 15.6;
double var_1_13 = 15.2;
double var_1_14 = 2.25;
double var_1_15 = 3.75;
unsigned short int var_1_16 = 16;
unsigned short int var_1_17 = 25;
unsigned short int var_1_18 = 25075;
unsigned short int var_1_19 = 32362;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_23 = 500;
unsigned long int var_1_24 = 4019329384;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
double var_1_28 = 199.4;
double var_1_29 = 256.05;
double var_1_30 = 7.5;
double var_1_31 = 0.0;
double var_1_32 = 256.25;
unsigned long int var_1_33 = 256;
unsigned char var_1_34 = 5;
unsigned long int var_1_35 = 3431355261;
unsigned long int var_1_36 = 2880533971;
unsigned long int var_1_37 = 1519246022;
unsigned long int var_1_38 = 1688457792;
unsigned long int var_1_39 = 1139245385;
signed short int var_1_40 = 32;
unsigned char var_1_41 = 0;
double last_1_var_1_13 = 15.2;
unsigned short int last_1_var_1_16 = 16;
unsigned short int last_1_var_1_17 = 25;
unsigned char last_1_var_1_20 = 100;
unsigned long int last_1_var_1_23 = 500;
unsigned char last_1_var_1_25 = 1;
double last_1_var_1_28 = 199.4;
unsigned char last_1_var_1_41 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = last_1_var_1_41;
 unsigned char stepLocal_1 = last_1_var_1_41;
 if (stepLocal_1 && (((((last_1_var_1_13) > (last_1_var_1_28)) ? (last_1_var_1_13) : (last_1_var_1_28))) < 32.6)) {
  if (stepLocal_2 || last_1_var_1_25) {
   if ((16.9f * (last_1_var_1_28 / var_1_10)) < last_1_var_1_13) {
    var_1_6 = var_1_11;
   } else {
    var_1_6 = var_1_12;
   }
  }
 } else {
  var_1_6 = var_1_11;
 }
 unsigned long int stepLocal_8 = (last_1_var_1_23 / var_1_34) * 8;
 signed long int stepLocal_7 = - last_1_var_1_17;
 if (var_1_19 <= stepLocal_7) {
  if (var_1_22 > stepLocal_8) {
   var_1_33 = ((((((var_1_35 - 2u)) < (((((var_1_24) > (var_1_36)) ? (var_1_24) : (var_1_36))))) ? ((var_1_35 - 2u)) : (((((var_1_24) > (var_1_36)) ? (var_1_24) : (var_1_36)))))) - var_1_19);
  }
 } else {
  var_1_33 = ((var_1_37 + ((((var_1_38) > (1480291245u)) ? (var_1_38) : (1480291245u)))) - (var_1_39 - last_1_var_1_16));
 }
 if (last_1_var_1_41) {
  if (var_1_14 <= var_1_12) {
   var_1_16 = (last_1_var_1_20 + last_1_var_1_23);
  } else {
   var_1_16 = last_1_var_1_20;
  }
 }
 var_1_40 = var_1_21;
 var_1_41 = var_1_26;
 unsigned short int stepLocal_4 = var_1_16;
 if (var_1_41) {
  if (var_1_41) {
   if ((var_1_33 / var_1_18) < stepLocal_4) {
    var_1_23 = ((((var_1_40) < (var_1_16)) ? (var_1_40) : (var_1_16)));
   } else {
    var_1_23 = (var_1_24 - var_1_16);
   }
  }
 }
 if (var_1_12 > var_1_11) {
  var_1_13 = (31.4 - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))));
 } else {
  if (var_1_12 < (var_1_15 - var_1_14)) {
   if (var_1_41) {
    var_1_13 = var_1_11;
   } else {
    var_1_13 = var_1_14;
   }
  } else {
   var_1_13 = var_1_11;
  }
 }
 if (var_1_41) {
  var_1_20 = (var_1_21 + var_1_22);
 }
 signed long int stepLocal_6 = 0;
 if (stepLocal_6 <= ((var_1_16 * -1) & (var_1_23 & var_1_19))) {
  var_1_28 = ((((var_1_14) < (var_1_11)) ? (var_1_14) : (var_1_11)));
 } else {
  var_1_28 = ((((var_1_11) > (((var_1_29 + var_1_30) - (var_1_31 - var_1_32)))) ? (var_1_11) : (((var_1_29 + var_1_30) - (var_1_31 - var_1_32)))));
 }
 unsigned long int stepLocal_5 = var_1_24;
 if ((((((200.25) < (var_1_6)) ? (200.25) : (var_1_6))) + var_1_12) < ((var_1_13 + var_1_28) + var_1_14)) {
  if (var_1_22 < stepLocal_5) {
   var_1_25 = var_1_26;
  } else {
   var_1_25 = var_1_27;
  }
 } else {
  var_1_25 = var_1_27;
 }
 unsigned short int stepLocal_3 = var_1_16;
 if (var_1_33 != stepLocal_3) {
  var_1_17 = (((var_1_18 + var_1_19) - var_1_16) - ((((1) > (var_1_20)) ? (1) : (var_1_20))));
 } else {
  var_1_17 = var_1_18;
 }
 unsigned char stepLocal_0 = ! var_1_41;
 if (((var_1_17 * var_1_16) >= var_1_23) && stepLocal_0) {
  var_1_1 = var_1_17;
 } else {
  var_1_1 = var_1_16;
 }
}
void updateVariables(void) {
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 24575);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 24575);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 255);
 assume_abort_if_not(var_1_34 != 0);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 3221225470);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 2147483647);
 assume_abort_if_not(var_1_36 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 1073741823);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 1073741824);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 1073741823);
 assume_abort_if_not(var_1_39 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_41 = var_1_41;
}
int property(void) {
 return ((((((((((((((var_1_17 * var_1_16) >= var_1_23) && (! var_1_41)) ? (var_1_1 == ((signed short int) var_1_17)) : (var_1_1 == ((signed short int) var_1_16))) && ((last_1_var_1_41 && (((((last_1_var_1_13) > (last_1_var_1_28)) ? (last_1_var_1_13) : (last_1_var_1_28))) < 32.6)) ? ((last_1_var_1_41 || last_1_var_1_25) ? (((16.9f * (last_1_var_1_28 / var_1_10)) < last_1_var_1_13) ? (var_1_6 == ((float) var_1_11)) : (var_1_6 == ((float) var_1_12))) : 1) : (var_1_6 == ((float) var_1_11)))) && ((var_1_12 > var_1_11) ? (var_1_13 == ((double) (31.4 - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))))) : ((var_1_12 < (var_1_15 - var_1_14)) ? (var_1_41 ? (var_1_13 == ((double) var_1_11)) : (var_1_13 == ((double) var_1_14))) : (var_1_13 == ((double) var_1_11))))) && (last_1_var_1_41 ? ((var_1_14 <= var_1_12) ? (var_1_16 == ((unsigned short int) (last_1_var_1_20 + last_1_var_1_23))) : (var_1_16 == ((unsigned short int) last_1_var_1_20))) : 1)) && ((var_1_33 != var_1_16) ? (var_1_17 == ((unsigned short int) (((var_1_18 + var_1_19) - var_1_16) - ((((1) > (var_1_20)) ? (1) : (var_1_20)))))) : (var_1_17 == ((unsigned short int) var_1_18)))) && (var_1_41 ? (var_1_20 == ((unsigned char) (var_1_21 + var_1_22))) : 1)) && (var_1_41 ? (var_1_41 ? (((var_1_33 / var_1_18) < var_1_16) ? (var_1_23 == ((unsigned long int) ((((var_1_40) < (var_1_16)) ? (var_1_40) : (var_1_16))))) : (var_1_23 == ((unsigned long int) (var_1_24 - var_1_16)))) : 1) : 1)) && (((((((200.25) < (var_1_6)) ? (200.25) : (var_1_6))) + var_1_12) < ((var_1_13 + var_1_28) + var_1_14)) ? ((var_1_22 < var_1_24) ? (var_1_25 == ((unsigned char) var_1_26)) : (var_1_25 == ((unsigned char) var_1_27))) : (var_1_25 == ((unsigned char) var_1_27)))) && ((0 <= ((var_1_16 * -1) & (var_1_23 & var_1_19))) ? (var_1_28 == ((double) ((((var_1_14) < (var_1_11)) ? (var_1_14) : (var_1_11))))) : (var_1_28 == ((double) ((((var_1_11) > (((var_1_29 + var_1_30) - (var_1_31 - var_1_32)))) ? (var_1_11) : (((var_1_29 + var_1_30) - (var_1_31 - var_1_32))))))))) && ((var_1_19 <= (- last_1_var_1_17)) ? ((var_1_22 > ((last_1_var_1_23 / var_1_34) * 8)) ? (var_1_33 == ((unsigned long int) ((((((var_1_35 - 2u)) < (((((var_1_24) > (var_1_36)) ? (var_1_24) : (var_1_36))))) ? ((var_1_35 - 2u)) : (((((var_1_24) > (var_1_36)) ? (var_1_24) : (var_1_36)))))) - var_1_19))) : 1) : (var_1_33 == ((unsigned long int) ((var_1_37 + ((((var_1_38) > (1480291245u)) ? (var_1_38) : (1480291245u)))) - (var_1_39 - last_1_var_1_16)))))) && (var_1_40 == ((signed short int) var_1_21))) && (var_1_41 == ((unsigned char) var_1_26))
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
