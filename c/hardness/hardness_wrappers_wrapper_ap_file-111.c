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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2] = {
	0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[5] = {
	5.375, 7.5, 32.5, 64.15, 255.8
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
float float_Array_0[2] = {
	8.5, 50.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed long int signed_long_int_Array_0[2] = {
	-256, -100
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{32, 32}, {10000, 2}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);

// Calibration values

// Last'ed variables
double last_1_double_Array_0_2_ = 32.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch111Wrapper_AP
	unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (min (1.25 , (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))));
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || stepLocal_0) {
			(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = ((abs ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)));
		}
	}


	// From: Req4Batch111Wrapper_AP
	unsigned short int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
	if (stepLocal_1 >= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) {
		if (last_1_double_Array_0_2_ > (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
			if ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
				(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
			} else {
				(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer));
			}
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
	}


	// From: Req2Batch111Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) != (max (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) , (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) {
		if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
			}
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	}


	// From: Req3Batch111Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (32 + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -461168.6018427383000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427383000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -922337.2036854766000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483647);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 16384);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 8191);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 16383);
	unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 8191);
}



void updateLastVariables(void) {
	last_1_double_Array_0_2_ = double_Array_0[2];
}

int property(void) {
	return (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (min (1.25 , (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) : (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) ((abs ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : 1)) && (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) != (max (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) , (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) : 1) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (32 + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))))) : 1)) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) >= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((last_1_double_Array_0_2_ > (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))
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
