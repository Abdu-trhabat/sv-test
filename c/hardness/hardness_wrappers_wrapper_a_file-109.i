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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[5] = {
 1, 1, 1, 0, 0
};
signed char signed_char_Array_0[3] = {
 64, 64, 16
};
signed long int signed_long_int_Array_0[2] = {
 2, 8
};
signed short int signed_short_int_Array_0[5] = {
 2, 1, -10, 5, 4
};
signed char last_1_signed_char_Array_0_2_ = 16;
signed short int last_1_signed_short_int_Array_0_1_ = 1;
signed short int last_1_signed_short_int_Array_0_3_ = 5;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = signed_char_Array_0[1];
 if (stepLocal_1 <= signed_char_Array_0[0]) {
  signed_long_int_Array_0[1] = (last_1_signed_short_int_Array_0_3_ + (signed_char_Array_0[1] + last_1_signed_short_int_Array_0_1_));
 } else {
  signed_long_int_Array_0[1] = ((((last_1_signed_short_int_Array_0_1_) > (((signed_char_Array_0[0] + 16) - signed_long_int_Array_0[0]))) ? (last_1_signed_short_int_Array_0_1_) : (((signed_char_Array_0[0] + 16) - signed_long_int_Array_0[0]))));
 }
 signed_short_int_Array_0[3] = signed_long_int_Array_0[1];
 signed_short_int_Array_0[1] = (signed_char_Array_0[0] - signed_short_int_Array_0[0]);
 signed short int stepLocal_0 = signed_short_int_Array_0[1];
 if (stepLocal_0 < last_1_signed_char_Array_0_2_) {
  signed_char_Array_0[2] = (signed_char_Array_0[1] - (signed_char_Array_0[0] - 5));
 } else {
  signed_char_Array_0[2] = signed_char_Array_0[1];
 }
 signed_short_int_Array_0[4] = signed_char_Array_0[2];
 signed_short_int_Array_0[2] = signed_char_Array_0[2];
 signed long int stepLocal_3 = signed_long_int_Array_0[1];
 signed long int stepLocal_2 = 2 * (signed_char_Array_0[0] - signed_short_int_Array_0[0]);
 if (stepLocal_2 <= signed_short_int_Array_0[4]) {
  if (signed_char_Array_0[0] < stepLocal_3) {
   BOOL_unsigned_char_Array_0[2] = ((BOOL_unsigned_char_Array_0[3] && BOOL_unsigned_char_Array_0[0]) && BOOL_unsigned_char_Array_0[1]);
  }
 } else {
  BOOL_unsigned_char_Array_0[2] = BOOL_unsigned_char_Array_0[4];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
 BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 0);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 63);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -1);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
}
void updateLastVariables(void) {
 last_1_signed_char_Array_0_2_ = signed_char_Array_0[2];
 last_1_signed_short_int_Array_0_1_ = signed_short_int_Array_0[1];
 last_1_signed_short_int_Array_0_3_ = signed_short_int_Array_0[3];
}
int property(void) {
 return (((((((signed_short_int_Array_0[1] < last_1_signed_char_Array_0_2_) ? (signed_char_Array_0[2] == ((signed char) (signed_char_Array_0[1] - (signed_char_Array_0[0] - 5)))) : (signed_char_Array_0[2] == ((signed char) signed_char_Array_0[1]))) && ((signed_char_Array_0[1] <= signed_char_Array_0[0]) ? (signed_long_int_Array_0[1] == ((signed long int) (last_1_signed_short_int_Array_0_3_ + (signed_char_Array_0[1] + last_1_signed_short_int_Array_0_1_)))) : (signed_long_int_Array_0[1] == ((signed long int) ((((last_1_signed_short_int_Array_0_1_) > (((signed_char_Array_0[0] + 16) - signed_long_int_Array_0[0]))) ? (last_1_signed_short_int_Array_0_1_) : (((signed_char_Array_0[0] + 16) - signed_long_int_Array_0[0])))))))) && (signed_short_int_Array_0[1] == ((signed short int) (signed_char_Array_0[0] - signed_short_int_Array_0[0])))) && (((2 * (signed_char_Array_0[0] - signed_short_int_Array_0[0])) <= signed_short_int_Array_0[4]) ? ((signed_char_Array_0[0] < signed_long_int_Array_0[1]) ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) ((BOOL_unsigned_char_Array_0[3] && BOOL_unsigned_char_Array_0[0]) && BOOL_unsigned_char_Array_0[1]))) : 1) : (BOOL_unsigned_char_Array_0[2] == ((unsigned char) BOOL_unsigned_char_Array_0[4])))) && (signed_short_int_Array_0[4] == ((signed short int) signed_char_Array_0[2]))) && (signed_short_int_Array_0[2] == ((signed short int) signed_char_Array_0[2]))) && (signed_short_int_Array_0[3] == ((signed short int) signed_long_int_Array_0[1]))
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
