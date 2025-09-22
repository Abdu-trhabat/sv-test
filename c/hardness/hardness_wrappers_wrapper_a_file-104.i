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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 1, 1
};
signed long int signed_long_int_Array_0[2] = {
 128, 256
};
signed short int signed_short_int_Array_0[3] = {
 256, 1, -1
};
unsigned long int unsigned_long_int_Array_0[2] = {
 2080937386, 5
};
signed long int last_1_signed_long_int_Array_0_0_ = 128;
signed long int last_1_signed_long_int_Array_0_1_ = 256;
unsigned long int last_1_unsigned_long_int_Array_0_1_ = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_signed_long_int_Array_0_0_;
 signed long int stepLocal_0 = last_1_signed_long_int_Array_0_0_;
 if (stepLocal_0 > last_1_unsigned_long_int_Array_0_1_) {
  if (stepLocal_1 < ((((last_1_unsigned_long_int_Array_0_1_) < (last_1_signed_long_int_Array_0_0_)) ? (last_1_unsigned_long_int_Array_0_1_) : (last_1_signed_long_int_Array_0_0_)))) {
   signed_long_int_Array_0[1] = last_1_signed_long_int_Array_0_0_;
  }
 } else {
  signed_long_int_Array_0[1] = (((((((last_1_signed_long_int_Array_0_0_) > (last_1_unsigned_long_int_Array_0_1_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_1_))) < 0 ) ? -((((last_1_signed_long_int_Array_0_0_) > (last_1_unsigned_long_int_Array_0_1_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_1_))) : ((((last_1_signed_long_int_Array_0_0_) > (last_1_unsigned_long_int_Array_0_1_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_1_)))));
 }
 if ((~ signed_short_int_Array_0[1]) < signed_short_int_Array_0[0]) {
  unsigned_long_int_Array_0[1] = (((((last_1_signed_long_int_Array_0_0_) > ((unsigned_long_int_Array_0[0] - last_1_signed_long_int_Array_0_1_))) ? (last_1_signed_long_int_Array_0_0_) : ((unsigned_long_int_Array_0[0] - last_1_signed_long_int_Array_0_1_)))) + ((((last_1_signed_long_int_Array_0_1_) > (signed_short_int_Array_0[1])) ? (last_1_signed_long_int_Array_0_1_) : (signed_short_int_Array_0[1]))));
 } else {
  unsigned_long_int_Array_0[1] = (((((unsigned_long_int_Array_0[0]) > (last_1_signed_long_int_Array_0_0_)) ? (unsigned_long_int_Array_0[0]) : (last_1_signed_long_int_Array_0_0_))) + signed_short_int_Array_0[1]);
 }
 if (BOOL_unsigned_char_Array_0[1]) {
  BOOL_unsigned_char_Array_0[2] = (! BOOL_unsigned_char_Array_0[0]);
 }
 if (BOOL_unsigned_char_Array_0[2]) {
  signed_short_int_Array_0[2] = (signed_short_int_Array_0[0] - signed_short_int_Array_0[1]);
 }
 if (signed_long_int_Array_0[1] != unsigned_long_int_Array_0[0]) {
  if (BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[2]) {
   signed_long_int_Array_0[0] = unsigned_long_int_Array_0[1];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
 last_1_unsigned_long_int_Array_0_1_ = unsigned_long_int_Array_0[1];
}
int property(void) {
 return (((((last_1_signed_long_int_Array_0_0_ > last_1_unsigned_long_int_Array_0_1_) ? ((last_1_signed_long_int_Array_0_0_ < ((((last_1_unsigned_long_int_Array_0_1_) < (last_1_signed_long_int_Array_0_0_)) ? (last_1_unsigned_long_int_Array_0_1_) : (last_1_signed_long_int_Array_0_0_)))) ? (signed_long_int_Array_0[1] == ((signed long int) last_1_signed_long_int_Array_0_0_)) : 1) : (signed_long_int_Array_0[1] == ((signed long int) (((((((last_1_signed_long_int_Array_0_0_) > (last_1_unsigned_long_int_Array_0_1_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_1_))) < 0 ) ? -((((last_1_signed_long_int_Array_0_0_) > (last_1_unsigned_long_int_Array_0_1_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_1_))) : ((((last_1_signed_long_int_Array_0_0_) > (last_1_unsigned_long_int_Array_0_1_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_1_)))))))) && (BOOL_unsigned_char_Array_0[1] ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0]))) : 1)) && (BOOL_unsigned_char_Array_0[2] ? (signed_short_int_Array_0[2] == ((signed short int) (signed_short_int_Array_0[0] - signed_short_int_Array_0[1]))) : 1)) && (((~ signed_short_int_Array_0[1]) < signed_short_int_Array_0[0]) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) (((((last_1_signed_long_int_Array_0_0_) > ((unsigned_long_int_Array_0[0] - last_1_signed_long_int_Array_0_1_))) ? (last_1_signed_long_int_Array_0_0_) : ((unsigned_long_int_Array_0[0] - last_1_signed_long_int_Array_0_1_)))) + ((((last_1_signed_long_int_Array_0_1_) > (signed_short_int_Array_0[1])) ? (last_1_signed_long_int_Array_0_1_) : (signed_short_int_Array_0[1])))))) : (unsigned_long_int_Array_0[1] == ((unsigned long int) (((((unsigned_long_int_Array_0[0]) > (last_1_signed_long_int_Array_0_0_)) ? (unsigned_long_int_Array_0[0]) : (last_1_signed_long_int_Array_0_0_))) + signed_short_int_Array_0[1]))))) && ((signed_long_int_Array_0[1] != unsigned_long_int_Array_0[0]) ? ((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[2]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_long_int_Array_0[1])) : 1) : 1)
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
