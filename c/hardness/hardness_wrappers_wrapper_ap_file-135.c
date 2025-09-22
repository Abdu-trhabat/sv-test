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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135Wrapper_AP.c", 13, "reach_error"); }
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
	1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[1] = {
	1.75
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[2][2] = {
	{99999999999.2, 500.25}, {9999.75, 31.6}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed long int signed_long_int_Array_0[1] = {
	-4
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	128, 5
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2] = {
	256, 16
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[1] = {
	128
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);

// Calibration values

// Last'ed variables
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch135Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + 256.4f) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)));
		} else {
			(*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)));
		}
	}


	// From: Req2Batch135Wrapper_AP
	if (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) || ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) >= 127.5f)) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = 100;
		}
	}


	// From: Req3Batch135Wrapper_AP
	unsigned char stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	if (stepLocal_0 < (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) * ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) * last_1_unsigned_short_int_Array_0_0_))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (max ((min (last_1_unsigned_short_int_Array_0_0_ , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))));
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) , last_1_unsigned_short_int_Array_0_0_)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
	}


	// From: Req4Batch135Wrapper_AP
	if (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) / (min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -461168.6018427383000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854766000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427383000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[0] != 0);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[1] != 0);
}



void updateLastVariables(void) {
	last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}

int property(void) {
	return ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + 256.4f) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) : 1) && ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) || ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) >= 127.5f)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) 100)) : 1))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) < (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) * ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) * last_1_unsigned_short_int_Array_0_0_))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (max ((min (last_1_unsigned_short_int_Array_0_0_ , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) , last_1_unsigned_short_int_Array_0_0_)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))))) && ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) / (min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) : 1)
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
