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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 signed short int var_1_3;
 signed short int var_1_4;
 unsigned char var_1_5;
 unsigned short int var_1_6;
 double var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 double var_1_11;
 signed long int var_1_12;
 unsigned short int var_1_13;
 unsigned char var_1_15;
 float var_1_16;
 unsigned long int var_1_17;
 unsigned char var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10,
 0,
 128,
 1,
 0,
 25,
 256.75,
 63.5,
 1.8,
 0.25,
 16.5,
 -5,
 8,
 128,
 4.6,
 500,
 2
};
unsigned short int last_1_WrapperStruct00_var_1_1 = 10;
signed long int last_1_WrapperStruct00_var_1_12 = -5;
unsigned long int last_1_WrapperStruct00_var_1_17 = 500;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = ~ WrapperStruct00.var_1_6;
 signed long int stepLocal_2 = WrapperStruct00.var_1_15 - WrapperStruct00.var_1_13;
 if (stepLocal_3 <= (((((16 >> WrapperStruct00.var_1_13)) < (last_1_WrapperStruct00_var_1_12)) ? ((16 >> WrapperStruct00.var_1_13)) : (last_1_WrapperStruct00_var_1_12)))) {
  if (stepLocal_2 < (last_1_WrapperStruct00_var_1_1 / -8)) {
   WrapperStruct00.var_1_12 = last_1_WrapperStruct00_var_1_1;
  }
 } else {
  WrapperStruct00.var_1_12 = (last_1_WrapperStruct00_var_1_17 - WrapperStruct00.var_1_13);
 }
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_12;
 unsigned char stepLocal_1 = WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_4;
 signed short int stepLocal_0 = WrapperStruct00.var_1_3;
 if (WrapperStruct00.var_1_2) {
  if (stepLocal_1 && WrapperStruct00.var_1_5) {
   if (stepLocal_0 >= WrapperStruct00.var_1_4) {
    WrapperStruct00.var_1_1 = 5;
   } else {
    WrapperStruct00.var_1_1 = ((((25) < (WrapperStruct00.var_1_6)) ? (25) : (WrapperStruct00.var_1_6)));
   }
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 }
 if (WrapperStruct00.var_1_2) {
  WrapperStruct00.var_1_7 = (((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) + WrapperStruct00.var_1_10) - WrapperStruct00.var_1_11);
 }
 WrapperStruct00.var_1_16 = WrapperStruct00.var_1_8;
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_13;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 65534);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 30);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 255);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
 last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
 last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}
int property(void) {
 return (((((WrapperStruct00.var_1_2 ? (((WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_4) && WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((unsigned short int) 5)) : (WrapperStruct00.var_1_1 == ((unsigned short int) ((((25) < (WrapperStruct00.var_1_6)) ? (25) : (WrapperStruct00.var_1_6)))))) : 1) : (WrapperStruct00.var_1_1 == ((unsigned short int) WrapperStruct00.var_1_6))) && (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_7 == ((double) (((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) + WrapperStruct00.var_1_10) - WrapperStruct00.var_1_11))) : 1)) && (((~ WrapperStruct00.var_1_6) <= (((((16 >> WrapperStruct00.var_1_13)) < (last_1_WrapperStruct00_var_1_12)) ? ((16 >> WrapperStruct00.var_1_13)) : (last_1_WrapperStruct00_var_1_12)))) ? (((WrapperStruct00.var_1_15 - WrapperStruct00.var_1_13) < (last_1_WrapperStruct00_var_1_1 / -8)) ? (WrapperStruct00.var_1_12 == ((signed long int) last_1_WrapperStruct00_var_1_1)) : 1) : (WrapperStruct00.var_1_12 == ((signed long int) (last_1_WrapperStruct00_var_1_17 - WrapperStruct00.var_1_13))))) && (WrapperStruct00.var_1_16 == ((float) WrapperStruct00.var_1_8))) && (WrapperStruct00.var_1_17 == ((unsigned long int) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_13))
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
