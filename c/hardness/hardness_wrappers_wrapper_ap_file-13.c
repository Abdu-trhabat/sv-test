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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13Wrapper_AP.c", 13, "reach_error"); }
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
	0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[2][2] = {
	{4.375, 100.75}, {7.65, 32.4}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed char signed_char_Array_0[3] = {
	16, 10, 16
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed long int signed_long_int_Array_0[1] = {
	1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[5] = {
	4, 50, 256, 8, 25
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[3]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[4]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch13Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) = (max ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))));
	}


	// From: Req2Batch13Wrapper_AP
	if (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
		}
	}


	// From: Req3Batch13Wrapper_AP
	signed char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) < stepLocal_0) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)));
	}


	// From: Req4Batch13Wrapper_AP
	unsigned short int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) > stepLocal_1) {
		if (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * (- (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) < (- (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
		}
	} else {
		if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) / (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) {
			if ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) > (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
			}
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
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854776000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854776000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	assume_abort_if_not(float_Array_0[1][1] != 0.0F);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -1);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65534);
	unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[3] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[3] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) == ((unsigned short int) (max ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))) : 1) && ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) : 1))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) < (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) ? ((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * (- (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) < (- (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) : 1) : (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) / (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) > (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) : 1) : 1))
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
