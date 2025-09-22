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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_4;
 signed char var_1_5;
 unsigned char var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 signed short int var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
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
 5,
 8,
 1,
 128,
 4,
 -256,
 0,
 1,
 0
};
unsigned char last_1_WrapperStruct00_var_1_6 = 1;
unsigned char last_1_WrapperStruct00_var_1_10 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_WrapperStruct00_var_1_10 || last_1_WrapperStruct00_var_1_6) {
  WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_4 - 50) + WrapperStruct00.var_1_5);
 }
 if ((128 | WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_8)) {
  if (((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_8) + (50 << WrapperStruct00.var_1_5)) > -128) {
   WrapperStruct00.var_1_9 = WrapperStruct00.var_1_4;
  } else {
   WrapperStruct00.var_1_9 = WrapperStruct00.var_1_5;
  }
 } else {
  WrapperStruct00.var_1_9 = WrapperStruct00.var_1_1;
 }
 if (WrapperStruct00.var_1_8 > (WrapperStruct00.var_1_7 + (WrapperStruct00.var_1_9 & WrapperStruct00.var_1_4))) {
  if ((4 / WrapperStruct00.var_1_7) <= WrapperStruct00.var_1_4) {
   WrapperStruct00.var_1_10 = WrapperStruct00.var_1_11;
  } else {
   WrapperStruct00.var_1_10 = WrapperStruct00.var_1_12;
  }
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_12;
 }
 signed char stepLocal_0 = WrapperStruct00.var_1_5;
 if (((10 / WrapperStruct00.var_1_7) / WrapperStruct00.var_1_8) >= stepLocal_0) {
  WrapperStruct00.var_1_6 = 1;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 63);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 63);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 0);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property(void) {
 return ((((last_1_WrapperStruct00_var_1_10 || last_1_WrapperStruct00_var_1_6) ? (WrapperStruct00.var_1_1 == ((signed char) ((WrapperStruct00.var_1_4 - 50) + WrapperStruct00.var_1_5))) : 1) && ((((10 / WrapperStruct00.var_1_7) / WrapperStruct00.var_1_8) >= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_6 == ((unsigned char) 1)) : 1)) && (((128 | WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_8)) ? ((((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_8) + (50 << WrapperStruct00.var_1_5)) > -128) ? (WrapperStruct00.var_1_9 == ((signed short int) WrapperStruct00.var_1_4)) : (WrapperStruct00.var_1_9 == ((signed short int) WrapperStruct00.var_1_5))) : (WrapperStruct00.var_1_9 == ((signed short int) WrapperStruct00.var_1_1)))) && ((WrapperStruct00.var_1_8 > (WrapperStruct00.var_1_7 + (WrapperStruct00.var_1_9 & WrapperStruct00.var_1_4))) ? (((4 / WrapperStruct00.var_1_7) <= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_12))) : (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_12)))
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
