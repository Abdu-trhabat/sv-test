// Prototype declarations of the functions used to communicate with the model checkers
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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[2][2][2] = {
	{{5.2, 63.7}, {255.6, 7.6}}, {{0.0, 9.25}, {100000000000.625, 31.5}}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[0][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[1][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar6_Pointer = &(double_Array_0[0][1][1]);
double* double_Array_0_arraydouble_Array_0arrayVar7_Pointer = &(double_Array_0[1][1][1]);
float float_Array_0[1] = {
	2.6
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed long int signed_long_int_Array_0[1] = {
	-32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	64, 25
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[3] = {
	3973916150, 100, 16
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch134Wrapper_AP
	unsigned char stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	if (stepLocal_0 > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) {
		if (((min ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) - 8.88) < (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) {
			(*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (abs ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))));
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
	}


	// From: Req2Batch134Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) {
		if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)));
		}
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
	}


	// From: Req3Batch134Wrapper_AP
	unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (max ((200.5f - 4.25f) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))));
	} else {
		if ((max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) >= stepLocal_1) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		} else {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0][0] >= -461168.6018427383000e+13F && double_Array_0[0][0][0] <= -1.0e-20F) || (double_Array_0[0][0][0] <= 4611686.018427383000e+12F && double_Array_0[0][0][0] >= 1.0e-20F ));
	double_Array_0[1][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0][0] >= 4611686.018427383000e+12F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 9223372.036854766000e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
	double_Array_0[0][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][0] >= 0.0F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 9223372.036854766000e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
	double_Array_0[1][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1][0] >= -922337.2036854776000e+13F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 9223372.036854776000e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
	double_Array_0[0][0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0][1] >= -922337.2036854776000e+13F && double_Array_0[0][0][1] <= -1.0e-20F) || (double_Array_0[0][0][1] <= 9223372.036854776000e+12F && double_Array_0[0][0][1] >= 1.0e-20F ));
	double_Array_0[1][0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0][1] >= 0.0F && double_Array_0[1][0][1] <= -1.0e-20F) || (double_Array_0[1][0][1] <= 9223372.036854776000e+12F && double_Array_0[1][0][1] >= 1.0e-20F ));
	double_Array_0[0][1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][1] >= 0.0F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854776000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 3221225470);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((((min ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) - 8.88) < (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (abs ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) : 1) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (max ((200.5f - 4.25f) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))))) : (((max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))))
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
