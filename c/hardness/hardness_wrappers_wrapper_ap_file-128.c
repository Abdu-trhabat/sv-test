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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[3] = {
	1, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[3] = {
	64.5, 5.74, 500.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
float float_Array_0[3] = {
	99.8, 0.0, 256.9
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[2] = {
	0, 32
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2][3] = {
	{8, 4, 2}, {4136859421, 8, 1}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[0][2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer = &(unsigned_long_int_Array_0[1][2]);
unsigned short int unsigned_short_int_Array_0[1] = {
	10
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch128Wrapper_AP
	unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) + ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)));
	if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) > stepLocal_0) {
		if (stepLocal_1 >= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) {
			(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		}
	}


	// From: Req2Batch128Wrapper_AP
	unsigned long int stepLocal_3 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
	unsigned char stepLocal_2 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	if (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) || stepLocal_2) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
	} else {
		if (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < stepLocal_3) {
			(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
		} else {
			(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = 0;
		}
	}


	// From: Req3Batch128Wrapper_AP
	if ((~ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) ^ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (abs (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) - (abs ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))));
	}


	// From: Req4Batch128Wrapper_AP
	unsigned long int stepLocal_4 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) << (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
	if (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) <= stepLocal_4) {
		(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 4611686.018427383000e+12F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427383000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -1);
	assume_abort_if_not(signed_char_Array_0[0] <= 127);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1] <= 127);
	unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 2147483647);
	unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967295);
	unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967295);
	unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967295);
	unsigned_long_int_Array_0[0][2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][2] <= 4294967295);
	unsigned_long_int_Array_0[1][2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][2] <= 4294967295);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) + ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) >= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : 1) : 1) && ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))) : ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) 0))))) && (((~ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) ^ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (abs (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) - (abs ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))))) : 1)) && ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) << (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : 1)
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
