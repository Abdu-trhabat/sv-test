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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[2][2] = {
 {5.25, 128.2}, {15.4, 25.8}
};
signed long int signed_long_int_Array_0[2] = {
 -4, -256
};
unsigned char unsigned_char_Array_0[2] = {
 1, 100
};
unsigned short int unsigned_short_int_Array_0[1] = {
 5
};
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 5;
void initially(void) {
}
void step(void) {
 if ((signed_long_int_Array_0[0] + last_1_unsigned_short_int_Array_0_0_) < signed_long_int_Array_0[1]) {
  if (last_1_unsigned_short_int_Array_0_0_ > signed_long_int_Array_0[1]) {
   unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
  }
 }
 if (! BOOL_unsigned_char_Array_0[1]) {
  double_Array_0[1][1] = (double_Array_0[0][1] - double_Array_0[1][0]);
 } else {
  double_Array_0[1][1] = ((((16.2) < (double_Array_0[0][1])) ? (16.2) : (double_Array_0[0][1])));
 }
 if ((double_Array_0[0][1] + (double_Array_0[1][0] + double_Array_0[1][1])) != double_Array_0[1][1]) {
  if (BOOL_unsigned_char_Array_0[1]) {
   if ((- unsigned_char_Array_0[1]) <= signed_long_int_Array_0[0]) {
    if (BOOL_unsigned_char_Array_0[0]) {
     double_Array_0[0][0] = double_Array_0[1][0];
    }
   } else {
    double_Array_0[0][0] = double_Array_0[0][1];
   }
  } else {
   double_Array_0[0][0] = double_Array_0[0][1];
  }
 } else {
  double_Array_0[0][0] = double_Array_0[0][1];
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  if ((double_Array_0[1][0] * (double_Array_0[0][1] - 5.3)) <= double_Array_0[0][0]) {
   unsigned_short_int_Array_0[0] = unsigned_char_Array_0[1];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854766000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables(void) {
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}
int property(void) {
 return ((((! BOOL_unsigned_char_Array_0[1]) ? (double_Array_0[1][1] == ((double) (double_Array_0[0][1] - double_Array_0[1][0]))) : (double_Array_0[1][1] == ((double) ((((16.2) < (double_Array_0[0][1])) ? (16.2) : (double_Array_0[0][1])))))) && (((double_Array_0[0][1] + (double_Array_0[1][0] + double_Array_0[1][1])) != double_Array_0[1][1]) ? (BOOL_unsigned_char_Array_0[1] ? (((- unsigned_char_Array_0[1]) <= signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[0][0] == ((double) double_Array_0[1][0])) : 1) : (double_Array_0[0][0] == ((double) double_Array_0[0][1]))) : (double_Array_0[0][0] == ((double) double_Array_0[0][1]))) : (double_Array_0[0][0] == ((double) double_Array_0[0][1])))) && (((signed_long_int_Array_0[0] + last_1_unsigned_short_int_Array_0_0_) < signed_long_int_Array_0[1]) ? ((last_1_unsigned_short_int_Array_0_0_ > signed_long_int_Array_0[1]) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : 1) : 1)) && (BOOL_unsigned_char_Array_0[0] ? (((double_Array_0[1][0] * (double_Array_0[0][1] - 5.3)) <= double_Array_0[0][0]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[1])) : 1) : 1)
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
