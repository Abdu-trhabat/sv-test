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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 signed short int var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 unsigned long int var_1_11;
 unsigned long int var_1_12;
 signed long int var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 256,
 1,
 1,
 0,
 -1,
 256,
 1,
 5,
 2080937386,
 128
};
signed long int last_1_WrapperStruct00_var_1_1 = 256;
unsigned long int last_1_WrapperStruct00_var_1_11 = 5;
signed long int last_1_WrapperStruct00_var_1_13 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_WrapperStruct00_var_1_13;
 signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_13;
 if (stepLocal_0 > last_1_WrapperStruct00_var_1_11) {
  if (stepLocal_1 < ((((last_1_WrapperStruct00_var_1_11) < (last_1_WrapperStruct00_var_1_13)) ? (last_1_WrapperStruct00_var_1_11) : (last_1_WrapperStruct00_var_1_13)))) {
   WrapperStruct00.var_1_1 = last_1_WrapperStruct00_var_1_13;
  }
 } else {
  WrapperStruct00.var_1_1 = (((((((last_1_WrapperStruct00_var_1_13) > (last_1_WrapperStruct00_var_1_11)) ? (last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_11))) < 0 ) ? -((((last_1_WrapperStruct00_var_1_13) > (last_1_WrapperStruct00_var_1_11)) ? (last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_11))) : ((((last_1_WrapperStruct00_var_1_13) > (last_1_WrapperStruct00_var_1_11)) ? (last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_11)))));
 }
 if ((~ WrapperStruct00.var_1_10) < WrapperStruct00.var_1_9) {
  WrapperStruct00.var_1_11 = (((((last_1_WrapperStruct00_var_1_13) > ((WrapperStruct00.var_1_12 - last_1_WrapperStruct00_var_1_1))) ? (last_1_WrapperStruct00_var_1_13) : ((WrapperStruct00.var_1_12 - last_1_WrapperStruct00_var_1_1)))) + ((((last_1_WrapperStruct00_var_1_1) > (WrapperStruct00.var_1_10)) ? (last_1_WrapperStruct00_var_1_1) : (WrapperStruct00.var_1_10))));
 } else {
  WrapperStruct00.var_1_11 = (((((WrapperStruct00.var_1_12) > (last_1_WrapperStruct00_var_1_13)) ? (WrapperStruct00.var_1_12) : (last_1_WrapperStruct00_var_1_13))) + WrapperStruct00.var_1_10);
 }
 if (WrapperStruct00.var_1_6) {
  WrapperStruct00.var_1_5 = (! WrapperStruct00.var_1_7);
 }
 if (WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10);
 }
 if (WrapperStruct00.var_1_1 != WrapperStruct00.var_1_12) {
  if (WrapperStruct00.var_1_7 || WrapperStruct00.var_1_5) {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_11;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 32766);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}
int property(void) {
 return (((((last_1_WrapperStruct00_var_1_13 > last_1_WrapperStruct00_var_1_11) ? ((last_1_WrapperStruct00_var_1_13 < ((((last_1_WrapperStruct00_var_1_11) < (last_1_WrapperStruct00_var_1_13)) ? (last_1_WrapperStruct00_var_1_11) : (last_1_WrapperStruct00_var_1_13)))) ? (WrapperStruct00.var_1_1 == ((signed long int) last_1_WrapperStruct00_var_1_13)) : 1) : (WrapperStruct00.var_1_1 == ((signed long int) (((((((last_1_WrapperStruct00_var_1_13) > (last_1_WrapperStruct00_var_1_11)) ? (last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_11))) < 0 ) ? -((((last_1_WrapperStruct00_var_1_13) > (last_1_WrapperStruct00_var_1_11)) ? (last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_11))) : ((((last_1_WrapperStruct00_var_1_13) > (last_1_WrapperStruct00_var_1_11)) ? (last_1_WrapperStruct00_var_1_13) : (last_1_WrapperStruct00_var_1_11)))))))) && (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_5 == ((unsigned char) (! WrapperStruct00.var_1_7))) : 1)) && (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_8 == ((signed short int) (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) : 1)) && (((~ WrapperStruct00.var_1_10) < WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((unsigned long int) (((((last_1_WrapperStruct00_var_1_13) > ((WrapperStruct00.var_1_12 - last_1_WrapperStruct00_var_1_1))) ? (last_1_WrapperStruct00_var_1_13) : ((WrapperStruct00.var_1_12 - last_1_WrapperStruct00_var_1_1)))) + ((((last_1_WrapperStruct00_var_1_1) > (WrapperStruct00.var_1_10)) ? (last_1_WrapperStruct00_var_1_1) : (WrapperStruct00.var_1_10)))))) : (WrapperStruct00.var_1_11 == ((unsigned long int) (((((WrapperStruct00.var_1_12) > (last_1_WrapperStruct00_var_1_13)) ? (WrapperStruct00.var_1_12) : (last_1_WrapperStruct00_var_1_13))) + WrapperStruct00.var_1_10))))) && ((WrapperStruct00.var_1_1 != WrapperStruct00.var_1_12) ? ((WrapperStruct00.var_1_7 || WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_11)) : 1) : 1)
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
