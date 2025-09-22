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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 signed long int var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 signed short int var_1_8;
 double var_1_9;
 double var_1_10;
 unsigned char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 float var_1_17;
 float var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32,
 0,
 5,
 1,
 100,
 32,
 1,
 9.3,
 31.2,
 0,
 1,
 -32,
 -32,
 -50,
 -16,
 99999999999999.2,
 4.9
};
unsigned char last_1_WrapperStruct00_var_1_1 = 32;
signed short int last_1_WrapperStruct00_var_1_8 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6));
 if (((last_1_WrapperStruct00_var_1_1 * last_1_WrapperStruct00_var_1_8) * last_1_WrapperStruct00_var_1_8) < stepLocal_0) {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
 } else {
  WrapperStruct00.var_1_1 = 10;
 }
 if ((- WrapperStruct00.var_1_9) >= WrapperStruct00.var_1_10) {
  if (WrapperStruct00.var_1_11) {
   WrapperStruct00.var_1_8 = ((((((((WrapperStruct00.var_1_2) < (last_1_WrapperStruct00_var_1_8)) ? (WrapperStruct00.var_1_2) : (last_1_WrapperStruct00_var_1_8))) + ((((WrapperStruct00.var_1_1) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_3)))) < 0 ) ? -(((((WrapperStruct00.var_1_2) < (last_1_WrapperStruct00_var_1_8)) ? (WrapperStruct00.var_1_2) : (last_1_WrapperStruct00_var_1_8))) + ((((WrapperStruct00.var_1_1) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_3)))) : (((((WrapperStruct00.var_1_2) < (last_1_WrapperStruct00_var_1_8)) ? (WrapperStruct00.var_1_2) : (last_1_WrapperStruct00_var_1_8))) + ((((WrapperStruct00.var_1_1) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_3))))));
  } else {
   WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_1);
  }
 }
 if (2.8f == WrapperStruct00.var_1_10) {
  WrapperStruct00.var_1_12 = (((((((((WrapperStruct00.var_1_13) > (16)) ? (WrapperStruct00.var_1_13) : (16)))) > (WrapperStruct00.var_1_14)) ? (((((WrapperStruct00.var_1_13) > (16)) ? (WrapperStruct00.var_1_13) : (16)))) : (WrapperStruct00.var_1_14))) + WrapperStruct00.var_1_15);
 }
 WrapperStruct00.var_1_16 = ((((-4) < (WrapperStruct00.var_1_14)) ? (-4) : (WrapperStruct00.var_1_14)));
 if (WrapperStruct00.var_1_1 > (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_16)) {
  WrapperStruct00.var_1_17 = WrapperStruct00.var_1_18;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}
int property(void) {
 return (((((((last_1_WrapperStruct00_var_1_1 * last_1_WrapperStruct00_var_1_8) * last_1_WrapperStruct00_var_1_8) < ((((WrapperStruct00.var_1_5) > (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6)))) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_1 == ((unsigned char) 10))) && (((- WrapperStruct00.var_1_9) >= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_11 ? (WrapperStruct00.var_1_8 == ((signed short int) ((((((((WrapperStruct00.var_1_2) < (last_1_WrapperStruct00_var_1_8)) ? (WrapperStruct00.var_1_2) : (last_1_WrapperStruct00_var_1_8))) + ((((WrapperStruct00.var_1_1) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_3)))) < 0 ) ? -(((((WrapperStruct00.var_1_2) < (last_1_WrapperStruct00_var_1_8)) ? (WrapperStruct00.var_1_2) : (last_1_WrapperStruct00_var_1_8))) + ((((WrapperStruct00.var_1_1) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_3)))) : (((((WrapperStruct00.var_1_2) < (last_1_WrapperStruct00_var_1_8)) ? (WrapperStruct00.var_1_2) : (last_1_WrapperStruct00_var_1_8))) + ((((WrapperStruct00.var_1_1) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1) : (WrapperStruct00.var_1_3)))))))) : (WrapperStruct00.var_1_8 == ((signed short int) (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_1)))) : 1)) && ((2.8f == WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_12 == ((signed char) (((((((((WrapperStruct00.var_1_13) > (16)) ? (WrapperStruct00.var_1_13) : (16)))) > (WrapperStruct00.var_1_14)) ? (((((WrapperStruct00.var_1_13) > (16)) ? (WrapperStruct00.var_1_13) : (16)))) : (WrapperStruct00.var_1_14))) + WrapperStruct00.var_1_15))) : 1)) && (WrapperStruct00.var_1_16 == ((signed char) ((((-4) < (WrapperStruct00.var_1_14)) ? (-4) : (WrapperStruct00.var_1_14)))))) && ((WrapperStruct00.var_1_1 > (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_17 == ((float) WrapperStruct00.var_1_18)) : 1)
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
