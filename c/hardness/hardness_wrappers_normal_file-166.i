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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
signed short int var_1_2 = -8;
signed short int var_1_3 = -64;
unsigned short int var_1_4 = 128;
signed long int var_1_5 = 256;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed long int var_1_8 = 1583182084;
float var_1_9 = 16.75;
unsigned short int var_1_11 = 43731;
unsigned short int var_1_12 = 8;
double var_1_13 = 100000000000.8;
double var_1_14 = 7.5;
double var_1_15 = 100000000.5;
float var_1_16 = 2.4;
unsigned long int var_1_17 = 2;
float var_1_18 = 9.975;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_0 = var_1_2;
 if (stepLocal_0 < var_1_3) {
  var_1_1 = var_1_4;
 }
 var_1_17 = var_1_11;
 var_1_18 = var_1_16;
 unsigned char stepLocal_1 = var_1_6;
 if (stepLocal_1 || var_1_7) {
  var_1_5 = ((((var_1_17) < ((var_1_4 - (var_1_8 - 100000)))) ? (var_1_17) : ((var_1_4 - (var_1_8 - 100000)))));
 } else {
  var_1_5 = 10;
 }
 signed long int stepLocal_4 = var_1_8;
 unsigned char stepLocal_3 = var_1_6;
 unsigned long int stepLocal_2 = var_1_17 + var_1_5;
 if (var_1_5 > stepLocal_4) {
  if (stepLocal_3 && (var_1_5 < (var_1_11 - var_1_12))) {
   if (stepLocal_2 < (var_1_12 | 100)) {
    if (9.99999999999999E13 <= ((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))))) {
     var_1_9 = var_1_16;
    } else {
     var_1_9 = 15.4f;
    }
   } else {
    var_1_9 = var_1_16;
   }
  } else {
   var_1_9 = 7.25f;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 1073741823);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65535);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 < var_1_3) ? (var_1_1 == ((unsigned short int) var_1_4)) : 1) && ((var_1_6 || var_1_7) ? (var_1_5 == ((signed long int) ((((var_1_17) < ((var_1_4 - (var_1_8 - 100000)))) ? (var_1_17) : ((var_1_4 - (var_1_8 - 100000))))))) : (var_1_5 == ((signed long int) 10)))) && ((var_1_5 > var_1_8) ? ((var_1_6 && (var_1_5 < (var_1_11 - var_1_12))) ? (((var_1_17 + var_1_5) < (var_1_12 | 100)) ? ((9.99999999999999E13 <= ((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))))) ? (var_1_9 == ((float) var_1_16)) : (var_1_9 == ((float) 15.4f))) : (var_1_9 == ((float) var_1_16))) : (var_1_9 == ((float) 7.25f))) : 1)) && (var_1_17 == ((unsigned long int) var_1_11))) && (var_1_18 == ((float) var_1_16))
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
