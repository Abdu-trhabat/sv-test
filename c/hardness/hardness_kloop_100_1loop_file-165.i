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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
double var_1_2 = 3.5;
double var_1_3 = 9.25;
double var_1_4 = 99.5;
signed short int var_1_5 = 64;
signed short int var_1_6 = 50;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
double var_1_10 = 10000000000000.6;
unsigned char var_1_11 = 0;
signed short int var_1_12 = -8;
signed short int var_1_13 = 0;
signed short int var_1_14 = 8;
signed short int var_1_15 = 10;
signed short int var_1_16 = -5;
signed short int var_1_17 = -1;
signed short int var_1_18 = 2;
signed short int var_1_19 = -32;
signed short int var_1_20 = 16;
double var_1_21 = 7.75;
unsigned long int var_1_22 = 3048050979;
unsigned long int var_1_23 = 10;
unsigned long int var_1_24 = 1;
double var_1_25 = 127.5;
signed char var_1_26 = -1;
signed char var_1_27 = 32;
signed char var_1_28 = 1;
signed char var_1_29 = -8;
signed char var_1_30 = 1;
signed long int var_1_31 = -8;
signed char var_1_32 = -10;
float var_1_33 = 128.8;
float var_1_34 = 0.0;
float var_1_35 = 8.2;
double var_1_36 = 4.75;
signed long int var_1_37 = 5;
signed long int var_1_38 = 64;
signed short int last_1_var_1_12 = -8;
double last_1_var_1_36 = 4.75;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_36 < (var_1_2 - var_1_10)) {
  if (var_1_8) {
   var_1_9 = (! var_1_11);
  }
 } else {
  var_1_9 = var_1_11;
 }
 if ((var_1_2 - 63.5) >= ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) {
  var_1_1 = (var_1_5 + (var_1_6 + 100));
 } else {
  if (var_1_7 && var_1_8) {
   var_1_1 = var_1_6;
  }
 }
 signed short int stepLocal_0 = var_1_6;
 if (((((((((200) > (var_1_5)) ? (200) : (var_1_5)))) < (last_1_var_1_12)) ? (((((200) > (var_1_5)) ? (200) : (var_1_5)))) : (last_1_var_1_12))) > stepLocal_0) {
  var_1_12 = (((((var_1_13) < (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (var_1_13) : (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) - var_1_14);
 } else {
  var_1_12 = (((((((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6)))) > ((var_1_16 + var_1_17))) ? (((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6)))) : ((var_1_16 + var_1_17)))) + var_1_5);
 }
 signed short int stepLocal_2 = var_1_13;
 unsigned char stepLocal_1 = var_1_9;
 if (stepLocal_1 && var_1_11) {
  if (var_1_16 < stepLocal_2) {
   var_1_18 = var_1_19;
  } else {
   var_1_18 = ((((((((var_1_5) > ((var_1_14 - var_1_20))) ? (var_1_5) : ((var_1_14 - var_1_20))))) < (((((var_1_13) > (var_1_17)) ? (var_1_13) : (var_1_17))))) ? (((((var_1_5) > ((var_1_14 - var_1_20))) ? (var_1_5) : ((var_1_14 - var_1_20))))) : (((((var_1_13) > (var_1_17)) ? (var_1_13) : (var_1_17))))));
  }
 }
 unsigned long int stepLocal_3 = (var_1_22 - var_1_14) + var_1_20;
 if (stepLocal_3 < ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) {
  var_1_21 = ((((-0.25) < (var_1_25)) ? (-0.25) : (var_1_25)));
 } else {
  var_1_21 = var_1_25;
 }
 var_1_26 = (((((var_1_27) < (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_27) : (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))))) + (1 - var_1_30));
 if (var_1_9) {
  var_1_33 = (199.6f - (var_1_34 - var_1_35));
 } else {
  var_1_33 = var_1_35;
 }
 if (var_1_35 < (var_1_21 + (- var_1_10))) {
  var_1_37 = (var_1_20 - 50);
 } else {
  var_1_37 = ((var_1_20 - var_1_30) + (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) + var_1_17));
 }
 var_1_38 = var_1_20;
 signed short int stepLocal_4 = var_1_17;
 if (stepLocal_4 >= (var_1_28 ^ var_1_37)) {
  var_1_32 = (16 - var_1_30);
 }
 if (var_1_9 || ((var_1_14 - 200) != (var_1_13 - var_1_30))) {
  var_1_31 = ((((var_1_15) < (((var_1_28 + var_1_1) + var_1_29))) ? (var_1_15) : (((var_1_28 + var_1_1) + var_1_29))));
 } else {
  if ((128u >= var_1_22) || var_1_9) {
   var_1_31 = var_1_27;
  } else {
   var_1_31 = var_1_28;
  }
 }
 signed long int stepLocal_6 = var_1_37 & var_1_31;
 signed long int stepLocal_5 = var_1_38;
 if (stepLocal_6 > var_1_15) {
  if (var_1_1 > stepLocal_5) {
   var_1_36 = (var_1_35 + 31.4);
  } else {
   if (var_1_11) {
    var_1_36 = var_1_34;
   } else {
    var_1_36 = var_1_35;
   }
  }
 } else {
  var_1_36 = var_1_25;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -8191);
 assume_abort_if_not(var_1_6 <= 8192);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -16383);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -8191);
 assume_abort_if_not(var_1_16 <= 8192);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -8191);
 assume_abort_if_not(var_1_17 <= 8191);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -63);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -63);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_36 = var_1_36;
}
int property(void) {
 return (((((((((((((var_1_2 - 63.5) >= ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) ? (var_1_1 == ((signed short int) (var_1_5 + (var_1_6 + 100)))) : ((var_1_7 && var_1_8) ? (var_1_1 == ((signed short int) var_1_6)) : 1)) && ((last_1_var_1_36 < (var_1_2 - var_1_10)) ? (var_1_8 ? (var_1_9 == ((unsigned char) (! var_1_11))) : 1) : (var_1_9 == ((unsigned char) var_1_11)))) && ((((((((((200) > (var_1_5)) ? (200) : (var_1_5)))) < (last_1_var_1_12)) ? (((((200) > (var_1_5)) ? (200) : (var_1_5)))) : (last_1_var_1_12))) > var_1_6) ? (var_1_12 == ((signed short int) (((((var_1_13) < (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (var_1_13) : (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) - var_1_14))) : (var_1_12 == ((signed short int) (((((((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6)))) > ((var_1_16 + var_1_17))) ? (((((var_1_15) > (var_1_6)) ? (var_1_15) : (var_1_6)))) : ((var_1_16 + var_1_17)))) + var_1_5))))) && ((var_1_9 && var_1_11) ? ((var_1_16 < var_1_13) ? (var_1_18 == ((signed short int) var_1_19)) : (var_1_18 == ((signed short int) ((((((((var_1_5) > ((var_1_14 - var_1_20))) ? (var_1_5) : ((var_1_14 - var_1_20))))) < (((((var_1_13) > (var_1_17)) ? (var_1_13) : (var_1_17))))) ? (((((var_1_5) > ((var_1_14 - var_1_20))) ? (var_1_5) : ((var_1_14 - var_1_20))))) : (((((var_1_13) > (var_1_17)) ? (var_1_13) : (var_1_17))))))))) : 1)) && ((((var_1_22 - var_1_14) + var_1_20) < ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))) ? (var_1_21 == ((double) ((((-0.25) < (var_1_25)) ? (-0.25) : (var_1_25))))) : (var_1_21 == ((double) var_1_25)))) && (var_1_26 == ((signed char) (((((var_1_27) < (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))))) ? (var_1_27) : (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))))) + (1 - var_1_30))))) && ((var_1_9 || ((var_1_14 - 200) != (var_1_13 - var_1_30))) ? (var_1_31 == ((signed long int) ((((var_1_15) < (((var_1_28 + var_1_1) + var_1_29))) ? (var_1_15) : (((var_1_28 + var_1_1) + var_1_29)))))) : (((128u >= var_1_22) || var_1_9) ? (var_1_31 == ((signed long int) var_1_27)) : (var_1_31 == ((signed long int) var_1_28))))) && ((var_1_17 >= (var_1_28 ^ var_1_37)) ? (var_1_32 == ((signed char) (16 - var_1_30))) : 1)) && (var_1_9 ? (var_1_33 == ((float) (199.6f - (var_1_34 - var_1_35)))) : (var_1_33 == ((float) var_1_35)))) && (((var_1_37 & var_1_31) > var_1_15) ? ((var_1_1 > var_1_38) ? (var_1_36 == ((double) (var_1_35 + 31.4))) : (var_1_11 ? (var_1_36 == ((double) var_1_34)) : (var_1_36 == ((double) var_1_35)))) : (var_1_36 == ((double) var_1_25)))) && ((var_1_35 < (var_1_21 + (- var_1_10))) ? (var_1_37 == ((signed long int) (var_1_20 - 50))) : (var_1_37 == ((signed long int) ((var_1_20 - var_1_30) + (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) + var_1_17)))))) && (var_1_38 == ((signed long int) var_1_20))
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
