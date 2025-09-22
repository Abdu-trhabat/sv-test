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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_3;
 signed char var_1_4;
 signed char var_1_5;
 signed long int var_1_6;
 signed long int var_1_8;
 signed short int var_1_9;
 double var_1_10;
 double var_1_11;
 unsigned short int var_1_12;
 float var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -16,
 0,
 64,
 64,
 -64,
 4,
 8,
 32.5,
 1.6,
 32,
 15.5,
 0,
 0
};
signed long int last_1_WrapperStruct00_var_1_6 = -64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = WrapperStruct00.var_1_8 + WrapperStruct00.var_1_5;
 if (WrapperStruct00.var_1_13 < WrapperStruct00.var_1_10) {
  if (stepLocal_1 <= (~ (WrapperStruct00.var_1_3 % WrapperStruct00.var_1_9))) {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_9;
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_5;
  }
 }
 WrapperStruct00.var_1_14 = WrapperStruct00.var_1_15;
 if (! WrapperStruct00.var_1_14) {
  if (! WrapperStruct00.var_1_14) {
   WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_3 + -32);
  } else {
   WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 - ((((WrapperStruct00.var_1_5) < (16)) ? (WrapperStruct00.var_1_5) : (16))));
  }
 }
 signed long int stepLocal_0 = (((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_12));
 if (stepLocal_0 <= (WrapperStruct00.var_1_4 * (WrapperStruct00.var_1_8 >> WrapperStruct00.var_1_9))) {
  if ((- WrapperStruct00.var_1_10) >= WrapperStruct00.var_1_11) {
   WrapperStruct00.var_1_6 = WrapperStruct00.var_1_9;
  } else {
   WrapperStruct00.var_1_6 = last_1_WrapperStruct00_var_1_6;
  }
 } else {
  WrapperStruct00.var_1_6 = WrapperStruct00.var_1_12;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 63);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 126);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 30);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 0);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
}
int property(void) {
 return ((((! WrapperStruct00.var_1_14) ? ((! WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_1 == ((signed char) (WrapperStruct00.var_1_3 + -32))) : (WrapperStruct00.var_1_1 == ((signed char) (WrapperStruct00.var_1_4 - ((((WrapperStruct00.var_1_5) < (16)) ? (WrapperStruct00.var_1_5) : (16))))))) : 1) && ((((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_12))) <= (WrapperStruct00.var_1_4 * (WrapperStruct00.var_1_8 >> WrapperStruct00.var_1_9))) ? (((- WrapperStruct00.var_1_10) >= WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_6 == ((signed long int) WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_6 == ((signed long int) last_1_WrapperStruct00_var_1_6))) : (WrapperStruct00.var_1_6 == ((signed long int) WrapperStruct00.var_1_12)))) && ((WrapperStruct00.var_1_13 < WrapperStruct00.var_1_10) ? (((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_5) <= (~ (WrapperStruct00.var_1_3 % WrapperStruct00.var_1_9))) ? (WrapperStruct00.var_1_12 == ((unsigned short int) WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_12 == ((unsigned short int) WrapperStruct00.var_1_5))) : 1)) && (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_15))
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
