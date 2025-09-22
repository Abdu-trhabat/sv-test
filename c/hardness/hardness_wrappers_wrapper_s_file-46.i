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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 double var_1_2;
 signed char var_1_4;
 signed long int var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_10;
 unsigned short int var_1_11;
 unsigned short int var_1_12;
 unsigned short int var_1_13;
 unsigned short int var_1_14;
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
 1,
 31.75,
 -8,
 -64,
 0,
 0,
 1,
 1,
 25,
 64436,
 56375,
 49255,
 0
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_11 = (((((WrapperStruct00.var_1_12) < (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))))) ? (WrapperStruct00.var_1_12) : (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14)))))) - 32);
 WrapperStruct00.var_1_15 = WrapperStruct00.var_1_10;
 signed long int stepLocal_1 = -32;
 signed long int stepLocal_0 = WrapperStruct00.var_1_11 / WrapperStruct00.var_1_4;
 if ((- WrapperStruct00.var_1_2) >= 16.75) {
  if (stepLocal_0 >= WrapperStruct00.var_1_5) {
   if (((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_11))) > stepLocal_1) {
    WrapperStruct00.var_1_1 = 0;
   } else {
    WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_6 || WrapperStruct00.var_1_7);
   }
  } else {
   if (WrapperStruct00.var_1_6) {
    WrapperStruct00.var_1_1 = 1;
   } else {
    WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
   }
  }
 } else {
  WrapperStruct00.var_1_1 = 1;
 }
 if (1 == (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_11)) {
  if (((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_4) + WrapperStruct00.var_1_11) >= WrapperStruct00.var_1_11) {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_10;
  } else {
   WrapperStruct00.var_1_8 = WrapperStruct00.var_1_6;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 65534);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 65534);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((- WrapperStruct00.var_1_2) >= 16.75) ? (((WrapperStruct00.var_1_11 / WrapperStruct00.var_1_4) >= WrapperStruct00.var_1_5) ? ((((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_11))) > -32) ? (WrapperStruct00.var_1_1 == ((unsigned char) 0)) : (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_6 || WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_1 == ((unsigned char) 1)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_1 == ((unsigned char) 1))) && ((1 == (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_11)) ? ((((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_4) + WrapperStruct00.var_1_11) >= WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_6))) : 1)) && (WrapperStruct00.var_1_11 == ((unsigned short int) (((((WrapperStruct00.var_1_12) < (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14))))) ? (WrapperStruct00.var_1_12) : (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_14)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_14)))))) - 32)))) && (WrapperStruct00.var_1_15 == ((unsigned char) WrapperStruct00.var_1_10))
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
