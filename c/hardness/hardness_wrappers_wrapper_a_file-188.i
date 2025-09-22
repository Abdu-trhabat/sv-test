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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 1
};
signed char signed_char_Array_0[3] = {
 -4, -2, -16
};
signed long int signed_long_int_Array_0[2][2] = {
 {2, 10000000}, {-2, 10}
};
signed short int signed_short_int_Array_0[1] = {
 -25
};
unsigned char unsigned_char_Array_0[7] = {
 243, 4, 64, 1, 32, 10, 0
};
signed long int last_1_signed_long_int_Array_0_1__0_ = -2;
signed short int last_1_signed_short_int_Array_0_0_ = -25;
unsigned char last_1_unsigned_char_Array_0_1_ = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_unsigned_char_Array_0_1_;
 unsigned char stepLocal_0 = last_1_unsigned_char_Array_0_1_ != last_1_signed_short_int_Array_0_0_;
 if (last_1_signed_short_int_Array_0_0_ != stepLocal_1) {
  if (stepLocal_0 && (signed_long_int_Array_0[1][1] < signed_long_int_Array_0[0][1])) {
   signed_char_Array_0[2] = signed_char_Array_0[1];
  }
 }
 unsigned char stepLocal_2 = BOOL_unsigned_char_Array_0[1];
 if (stepLocal_2 && BOOL_unsigned_char_Array_0[0]) {
  signed_long_int_Array_0[1][0] = ((256 - signed_long_int_Array_0[0][0]) + last_1_signed_long_int_Array_0_1__0_);
 }
 signed_short_int_Array_0[0] = unsigned_char_Array_0[6];
 signed_char_Array_0[0] = unsigned_char_Array_0[0];
 if (((((signed_long_int_Array_0[1][0]) < 0 ) ? -(signed_long_int_Array_0[1][0]) : (signed_long_int_Array_0[1][0]))) <= signed_long_int_Array_0[1][0]) {
  if (signed_char_Array_0[2] <= signed_long_int_Array_0[1][0]) {
   unsigned_char_Array_0[1] = (((unsigned_char_Array_0[0] - 4) - ((((unsigned_char_Array_0[4]) > (unsigned_char_Array_0[5])) ? (unsigned_char_Array_0[4]) : (unsigned_char_Array_0[5])))) - (unsigned_char_Array_0[2] - unsigned_char_Array_0[3]));
  } else {
   unsigned_char_Array_0[1] = (((((unsigned_char_Array_0[6]) < (unsigned_char_Array_0[4])) ? (unsigned_char_Array_0[6]) : (unsigned_char_Array_0[4]))) + (unsigned_char_Array_0[5] + unsigned_char_Array_0[3]));
  }
 } else {
  unsigned_char_Array_0[1] = 64;
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 1073741823);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 222);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 127);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 63);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 63);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 63);
 unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[6] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[6] <= 127);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_1__0_ = signed_long_int_Array_0[1][0];
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
 last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}
int property(void) {
 return (((((last_1_signed_short_int_Array_0_0_ != last_1_unsigned_char_Array_0_1_) ? (((last_1_unsigned_char_Array_0_1_ != last_1_signed_short_int_Array_0_0_) && (signed_long_int_Array_0[1][1] < signed_long_int_Array_0[0][1])) ? (signed_char_Array_0[2] == ((signed char) signed_char_Array_0[1])) : 1) : 1) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[1][0] == ((signed long int) ((256 - signed_long_int_Array_0[0][0]) + last_1_signed_long_int_Array_0_1__0_))) : 1)) && ((((((signed_long_int_Array_0[1][0]) < 0 ) ? -(signed_long_int_Array_0[1][0]) : (signed_long_int_Array_0[1][0]))) <= signed_long_int_Array_0[1][0]) ? ((signed_char_Array_0[2] <= signed_long_int_Array_0[1][0]) ? (unsigned_char_Array_0[1] == ((unsigned char) (((unsigned_char_Array_0[0] - 4) - ((((unsigned_char_Array_0[4]) > (unsigned_char_Array_0[5])) ? (unsigned_char_Array_0[4]) : (unsigned_char_Array_0[5])))) - (unsigned_char_Array_0[2] - unsigned_char_Array_0[3])))) : (unsigned_char_Array_0[1] == ((unsigned char) (((((unsigned_char_Array_0[6]) < (unsigned_char_Array_0[4])) ? (unsigned_char_Array_0[6]) : (unsigned_char_Array_0[4]))) + (unsigned_char_Array_0[5] + unsigned_char_Array_0[3]))))) : (unsigned_char_Array_0[1] == ((unsigned char) 64)))) && (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[6]))) && (signed_char_Array_0[0] == ((signed char) unsigned_char_Array_0[0]))
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
