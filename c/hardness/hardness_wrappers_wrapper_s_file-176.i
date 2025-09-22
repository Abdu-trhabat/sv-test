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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 double var_1_4;
 signed long int var_1_5;
 double var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 64,
 1192640562,
 2,
 255.6,
 -1,
 64.25,
 -256,
 -32,
 0,
 50,
 5,
 1,
 1
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_1 = ((10000000 + 5) - (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3));
 if (! (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3)) {
  WrapperStruct00.var_1_7 = ((((WrapperStruct00.var_1_2) < (((((WrapperStruct00.var_1_3) < (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_3) : (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8)))))))) ? (WrapperStruct00.var_1_2) : (((((WrapperStruct00.var_1_3) < (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_3) : (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8)))))))));
 }
 unsigned long int stepLocal_2 = (((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_1)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_1));
 if (stepLocal_2 >= WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_9 = (16 + WrapperStruct00.var_1_11);
 }
 if ((WrapperStruct00.var_1_2 * WrapperStruct00.var_1_1) <= WrapperStruct00.var_1_7) {
  WrapperStruct00.var_1_12 = WrapperStruct00.var_1_13;
 }
 signed long int stepLocal_1 = WrapperStruct00.var_1_7 * (WrapperStruct00.var_1_2 * WrapperStruct00.var_1_3);
 signed long int stepLocal_0 = WrapperStruct00.var_1_2;
 if (stepLocal_0 > WrapperStruct00.var_1_3) {
  if (stepLocal_1 > (-1 / WrapperStruct00.var_1_5)) {
   WrapperStruct00.var_1_4 = WrapperStruct00.var_1_6;
  } else {
   WrapperStruct00.var_1_4 = 63.75;
  }
 } else {
  WrapperStruct00.var_1_4 = 10.2;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483646);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1073741823);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483646);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967295);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_1 == ((signed long int) ((10000000 + 5) - (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3)))) && ((WrapperStruct00.var_1_2 > WrapperStruct00.var_1_3) ? (((WrapperStruct00.var_1_7 * (WrapperStruct00.var_1_2 * WrapperStruct00.var_1_3)) > (-1 / WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4 == ((double) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_4 == ((double) 63.75))) : (WrapperStruct00.var_1_4 == ((double) 10.2)))) && ((! (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_7 == ((signed long int) ((((WrapperStruct00.var_1_2) < (((((WrapperStruct00.var_1_3) < (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_3) : (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8)))))))) ? (WrapperStruct00.var_1_2) : (((((WrapperStruct00.var_1_3) < (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8))))) ? (WrapperStruct00.var_1_3) : (((((-128) > (WrapperStruct00.var_1_8)) ? (-128) : (WrapperStruct00.var_1_8))))))))))) : 1)) && ((((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_1)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_1))) >= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_9 == ((unsigned char) (16 + WrapperStruct00.var_1_11))) : 1)) && (((WrapperStruct00.var_1_2 * WrapperStruct00.var_1_1) <= WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_13)) : 1)
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
