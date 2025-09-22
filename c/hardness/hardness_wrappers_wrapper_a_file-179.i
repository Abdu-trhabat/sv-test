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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Wrapper_A.c", 13, "reach_error"); }
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
 1, 0
};
double double_Array_0[2][2][2] = {
 {{9.5, 1.974}, {10.25, 127.25}}, {{32.4, 63.5}, {15.75, 8.8}}
};
unsigned short int unsigned_short_int_Array_0[3] = {
 1, 32, 200
};
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[1];
 if (stepLocal_0 && (! BOOL_unsigned_char_Array_0[0])) {
  double_Array_0[1][1][1] = (((((double_Array_0[0][1][1]) < (double_Array_0[1][0][1])) ? (double_Array_0[0][1][1]) : (double_Array_0[1][0][1]))) + 7.5);
 }
 if (double_Array_0[1][1][1] > (double_Array_0[0][1][1] * double_Array_0[1][0][1])) {
  if (double_Array_0[1][1][1] <= double_Array_0[1][0][1]) {
   if (double_Array_0[1][0][1] > double_Array_0[0][1][1]) {
    double_Array_0[0][0][1] = (double_Array_0[0][1][1] + (((((double_Array_0[1][1][0]) > (double_Array_0[0][1][0])) ? (double_Array_0[1][1][0]) : (double_Array_0[0][1][0]))) - double_Array_0[0][0][0]));
   } else {
    double_Array_0[0][0][1] = ((((double_Array_0[1][1][0]) < 0 ) ? -(double_Array_0[1][1][0]) : (double_Array_0[1][1][0])));
   }
  } else {
   double_Array_0[0][0][1] = double_Array_0[0][1][0];
  }
 } else {
  double_Array_0[0][0][1] = double_Array_0[0][1][1];
 }
 if (double_Array_0[1][0][1] > double_Array_0[0][1][0]) {
  unsigned_short_int_Array_0[1] = (((29089 - unsigned_short_int_Array_0[2]) - 8) + 16);
 } else {
  unsigned_short_int_Array_0[1] = ((((unsigned_short_int_Array_0[2]) < (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[2]) : (unsigned_short_int_Array_0[0])));
 }
 double_Array_0[1][0][0] = double_Array_0[1][1][0];
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0][0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0][0] >= 0.0F && double_Array_0[0][0][0] <= -1.0e-20F) || (double_Array_0[0][0][0] <= 4611686.018427383000e+12F && double_Array_0[0][0][0] >= 1.0e-20F ));
 double_Array_0[0][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][0] >= 0.0F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 4611686.018427383000e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
 double_Array_0[1][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][0] >= 0.0F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 4611686.018427383000e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
 double_Array_0[1][0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][1] >= -461168.6018427383000e+13F && double_Array_0[1][0][1] <= -1.0e-20F) || (double_Array_0[1][0][1] <= 4611686.018427383000e+12F && double_Array_0[1][0][1] >= 1.0e-20F ));
 double_Array_0[0][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][1] >= -461168.6018427383000e+13F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 4611686.018427383000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 8192);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((BOOL_unsigned_char_Array_0[1] && (! BOOL_unsigned_char_Array_0[0])) ? (double_Array_0[1][1][1] == ((double) (((((double_Array_0[0][1][1]) < (double_Array_0[1][0][1])) ? (double_Array_0[0][1][1]) : (double_Array_0[1][0][1]))) + 7.5))) : 1) && ((double_Array_0[1][1][1] > (double_Array_0[0][1][1] * double_Array_0[1][0][1])) ? ((double_Array_0[1][1][1] <= double_Array_0[1][0][1]) ? ((double_Array_0[1][0][1] > double_Array_0[0][1][1]) ? (double_Array_0[0][0][1] == ((double) (double_Array_0[0][1][1] + (((((double_Array_0[1][1][0]) > (double_Array_0[0][1][0])) ? (double_Array_0[1][1][0]) : (double_Array_0[0][1][0]))) - double_Array_0[0][0][0])))) : (double_Array_0[0][0][1] == ((double) ((((double_Array_0[1][1][0]) < 0 ) ? -(double_Array_0[1][1][0]) : (double_Array_0[1][1][0])))))) : (double_Array_0[0][0][1] == ((double) double_Array_0[0][1][0]))) : (double_Array_0[0][0][1] == ((double) double_Array_0[0][1][1])))) && ((double_Array_0[1][0][1] > double_Array_0[0][1][0]) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (((29089 - unsigned_short_int_Array_0[2]) - 8) + 16))) : (unsigned_short_int_Array_0[1] == ((unsigned short int) ((((unsigned_short_int_Array_0[2]) < (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[2]) : (unsigned_short_int_Array_0[0]))))))) && (double_Array_0[1][0][0] == ((double) double_Array_0[1][1][0]))
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
