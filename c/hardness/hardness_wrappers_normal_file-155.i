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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
unsigned short int var_1_4 = 1000;
unsigned short int var_1_5 = 64;
signed long int var_1_6 = 64;
unsigned char var_1_7 = 1;
signed char var_1_8 = -64;
signed long int var_1_9 = 1623884356;
signed char var_1_10 = 16;
signed char var_1_11 = 50;
signed char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = -128;
signed short int var_1_15 = -25;
signed long int last_1_var_1_6 = 64;
signed short int last_1_var_1_15 = -25;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_6 < last_1_var_1_15) {
  var_1_1 = (var_1_4 + (var_1_5 + 64));
 }
 var_1_13 = var_1_11;
 var_1_14 = var_1_11;
 var_1_15 = var_1_5;
 if (last_1_var_1_6 > var_1_15) {
  if (var_1_5 > last_1_var_1_6) {
   if (var_1_4 != (16 | var_1_5)) {
    if (! var_1_7) {
     var_1_6 = var_1_5;
    } else {
     var_1_6 = var_1_15;
    }
   }
  } else {
   var_1_6 = var_1_1;
  }
 } else {
  var_1_6 = var_1_4;
 }
 signed long int stepLocal_0 = var_1_6;
 if (stepLocal_0 == (var_1_1 - (var_1_9 - var_1_5))) {
  var_1_8 = ((((((((-16) > ((var_1_10 - var_1_11))) ? (-16) : ((var_1_10 - var_1_11))))) < (var_1_12)) ? (((((-16) > ((var_1_10 - var_1_11))) ? (-16) : ((var_1_10 - var_1_11))))) : (var_1_12)));
 } else {
  var_1_8 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1073741823);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 return ((((((last_1_var_1_6 < last_1_var_1_15) ? (var_1_1 == ((unsigned short int) (var_1_4 + (var_1_5 + 64)))) : 1) && ((last_1_var_1_6 > var_1_15) ? ((var_1_5 > last_1_var_1_6) ? ((var_1_4 != (16 | var_1_5)) ? ((! var_1_7) ? (var_1_6 == ((signed long int) var_1_5)) : (var_1_6 == ((signed long int) var_1_15))) : 1) : (var_1_6 == ((signed long int) var_1_1))) : (var_1_6 == ((signed long int) var_1_4)))) && ((var_1_6 == (var_1_1 - (var_1_9 - var_1_5))) ? (var_1_8 == ((signed char) ((((((((-16) > ((var_1_10 - var_1_11))) ? (-16) : ((var_1_10 - var_1_11))))) < (var_1_12)) ? (((((-16) > ((var_1_10 - var_1_11))) ? (-16) : ((var_1_10 - var_1_11))))) : (var_1_12))))) : (var_1_8 == ((signed char) var_1_10)))) && (var_1_13 == ((unsigned char) var_1_11))) && (var_1_14 == ((signed char) var_1_11))) && (var_1_15 == ((signed short int) var_1_5))
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
