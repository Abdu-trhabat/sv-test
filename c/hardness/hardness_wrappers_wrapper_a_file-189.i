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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {0, 1}, {0, 0}
};
float float_Array_0[2][2] = {
 {4.5, 5.25}, {24.5, 0.9}
};
signed long int signed_long_int_Array_0[1] = {
 5
};
unsigned char unsigned_char_Array_0[2] = {
 64, 8
};
unsigned long int unsigned_long_int_Array_0[1] = {
 4
};
unsigned short int unsigned_short_int_Array_0[2] = {
 60381, 0
};
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 0;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[1];
 if (last_1_BOOL_unsigned_char_Array_0_1__1_) {
  if (stepLocal_1 < last_1_unsigned_long_int_Array_0_0_) {
   float_Array_0[0][1] = float_Array_0[0][0];
  }
 } else {
  float_Array_0[0][1] = float_Array_0[0][0];
 }
 if (64.8f <= float_Array_0[0][1]) {
  unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
 }
 signed long int stepLocal_2 = signed_long_int_Array_0[0];
 if (unsigned_char_Array_0[0] <= stepLocal_2) {
  if (! (unsigned_short_int_Array_0[1] <= unsigned_short_int_Array_0[0])) {
   unsigned_long_int_Array_0[0] = (((((((((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) > (unsigned_short_int_Array_0[0])) ? ((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) : (unsigned_short_int_Array_0[0])))) > (unsigned_short_int_Array_0[1])) ? ((((((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) > (unsigned_short_int_Array_0[0])) ? ((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) : (unsigned_short_int_Array_0[0])))) : (unsigned_short_int_Array_0[1])));
  }
 } else {
  unsigned_long_int_Array_0[0] = unsigned_short_int_Array_0[1];
 }
 if (BOOL_unsigned_char_Array_0[0][1]) {
  BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
 } else {
  BOOL_unsigned_char_Array_0[1][1] = (! BOOL_unsigned_char_Array_0[0][0]);
 }
 unsigned long int stepLocal_0 = (((unsigned_long_int_Array_0[0]) < (unsigned_char_Array_0[0])) ? (unsigned_long_int_Array_0[0]) : (unsigned_char_Array_0[0]));
 if (stepLocal_0 >= unsigned_long_int_Array_0[0]) {
  float_Array_0[1][1] = ((((float_Array_0[0][0] - float_Array_0[1][0]) < 0 ) ? -(float_Array_0[0][0] - float_Array_0[1][0]) : (float_Array_0[0][0] - float_Array_0[1][0])));
 } else {
  float_Array_0[1][1] = ((((float_Array_0[1][0]) < 0 ) ? -(float_Array_0[1][0]) : (float_Array_0[1][0])));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854766000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854766000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property(void) {
 return ((((BOOL_unsigned_char_Array_0[0][1] ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0][0])))) && ((((((unsigned_long_int_Array_0[0]) < (unsigned_char_Array_0[0])) ? (unsigned_long_int_Array_0[0]) : (unsigned_char_Array_0[0]))) >= unsigned_long_int_Array_0[0]) ? (float_Array_0[1][1] == ((float) ((((float_Array_0[0][0] - float_Array_0[1][0]) < 0 ) ? -(float_Array_0[0][0] - float_Array_0[1][0]) : (float_Array_0[0][0] - float_Array_0[1][0]))))) : (float_Array_0[1][1] == ((float) ((((float_Array_0[1][0]) < 0 ) ? -(float_Array_0[1][0]) : (float_Array_0[1][0]))))))) && (last_1_BOOL_unsigned_char_Array_0_1__1_ ? (((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[1]) < last_1_unsigned_long_int_Array_0_0_) ? (float_Array_0[0][1] == ((float) float_Array_0[0][0])) : 1) : (float_Array_0[0][1] == ((float) float_Array_0[0][0])))) && ((64.8f <= float_Array_0[0][1]) ? (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])) : 1)) && ((unsigned_char_Array_0[0] <= signed_long_int_Array_0[0]) ? ((! (unsigned_short_int_Array_0[1] <= unsigned_short_int_Array_0[0])) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) (((((((((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) > (unsigned_short_int_Array_0[0])) ? ((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) : (unsigned_short_int_Array_0[0])))) > (unsigned_short_int_Array_0[1])) ? ((((((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) > (unsigned_short_int_Array_0[0])) ? ((unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) : (unsigned_short_int_Array_0[0])))) : (unsigned_short_int_Array_0[1]))))) : 1) : (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_short_int_Array_0[1])))
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
