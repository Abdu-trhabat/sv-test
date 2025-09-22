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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17850_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
signed char var_1_2 = -1;
signed char var_1_3 = 5;
signed long int var_1_4 = -4;
signed long int var_1_5 = 256;
signed long int var_1_7 = -64;
signed long int var_1_8 = 8;
signed char var_1_9 = 5;
unsigned short int var_1_10 = 128;
signed char var_1_11 = -8;
signed char var_1_12 = -10;
signed long int var_1_13 = -5;
signed short int var_1_14 = -256;
signed short int var_1_15 = 128;
signed long int var_1_16 = 4;
signed long int var_1_17 = -8;
unsigned char var_1_18 = 1;
signed long int last_1_var_1_1 = 10;
signed long int last_1_var_1_7 = -64;
signed long int last_1_var_1_17 = -8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_10 / ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)));
 signed long int stepLocal_1 = last_1_var_1_17;
 if (stepLocal_1 <= last_1_var_1_7) {
  if (stepLocal_2 < last_1_var_1_7) {
   var_1_13 = ((((((var_1_10 - var_1_16) + last_1_var_1_1)) < (var_1_14)) ? (((var_1_10 - var_1_16) + last_1_var_1_1)) : (var_1_14)));
  }
 }
 signed char stepLocal_4 = var_1_11;
 signed long int stepLocal_3 = (((var_1_13) > (var_1_15)) ? (var_1_13) : (var_1_15));
 if (var_1_10 <= stepLocal_3) {
  if (((((var_1_13) > (last_1_var_1_17)) ? (var_1_13) : (last_1_var_1_17))) >= stepLocal_4) {
   var_1_17 = var_1_10;
  } else {
   var_1_17 = var_1_16;
  }
 } else {
  var_1_17 = var_1_10;
 }
 var_1_18 = 0;
 if (((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) != (2 + (var_1_4 + var_1_5))) {
  if (! var_1_18) {
   if (var_1_5 != var_1_3) {
    var_1_1 = var_1_2;
   } else {
    var_1_1 = var_1_3;
   }
  } else {
   var_1_1 = var_1_3;
  }
 } else {
  var_1_1 = var_1_2;
 }
 signed long int stepLocal_0 = var_1_13;
 if ((100 + (var_1_1 / var_1_10)) != stepLocal_0) {
  var_1_9 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 } else {
  var_1_9 = var_1_11;
 }
 if (var_1_4 > var_1_9) {
  if (var_1_1 <= var_1_8) {
   if (var_1_4 < var_1_1) {
    if (var_1_18) {
     var_1_7 = var_1_9;
    } else {
     var_1_7 = 1;
    }
   }
  }
 } else {
  var_1_7 = var_1_9;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32768);
 assume_abort_if_not(var_1_14 <= 32767);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32768);
 assume_abort_if_not(var_1_15 <= 32767);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1073741823);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 return ((((((((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) != (2 + (var_1_4 + var_1_5))) ? ((! var_1_18) ? ((var_1_5 != var_1_3) ? (var_1_1 == ((signed long int) var_1_2)) : (var_1_1 == ((signed long int) var_1_3))) : (var_1_1 == ((signed long int) var_1_3))) : (var_1_1 == ((signed long int) var_1_2))) && ((var_1_4 > var_1_9) ? ((var_1_1 <= var_1_8) ? ((var_1_4 < var_1_1) ? (var_1_18 ? (var_1_7 == ((signed long int) var_1_9)) : (var_1_7 == ((signed long int) 1))) : 1) : 1) : (var_1_7 == ((signed long int) var_1_9)))) && (((100 + (var_1_1 / var_1_10)) != var_1_13) ? (var_1_9 == ((signed char) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12))))) : (var_1_9 == ((signed char) var_1_11)))) && ((last_1_var_1_17 <= last_1_var_1_7) ? (((var_1_10 / ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))) < last_1_var_1_7) ? (var_1_13 == ((signed long int) ((((((var_1_10 - var_1_16) + last_1_var_1_1)) < (var_1_14)) ? (((var_1_10 - var_1_16) + last_1_var_1_1)) : (var_1_14))))) : 1) : 1)) && ((var_1_10 <= ((((var_1_13) > (var_1_15)) ? (var_1_13) : (var_1_15)))) ? ((((((var_1_13) > (last_1_var_1_17)) ? (var_1_13) : (last_1_var_1_17))) >= var_1_11) ? (var_1_17 == ((signed long int) var_1_10)) : (var_1_17 == ((signed long int) var_1_16))) : (var_1_17 == ((signed long int) var_1_10)))) && (var_1_18 == ((unsigned char) 0))
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
