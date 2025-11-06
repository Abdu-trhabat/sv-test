// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
	3.75, 255.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[3] = {
	255.5, 63.5, 128.75
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed long int signed_long_int_Array_0[2] = {
	10, 10
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[1] = {
	-256
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2][2][2] = {
	{{2, 0}, {128, 10}}, {{25, 5}, {16, 32}}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[0][1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer = &(unsigned_char_Array_0[1][1][1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch82Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (max ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))));
		}
	}


	// From: Req2Batch82Wrapper_AP
	signed long int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) / -2;
	if (stepLocal_0 >= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) | (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) = (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))));
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))));
	}


	// From: Req4Batch82Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));


	// From: Req5Batch82Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));


	// From: Req6Batch82Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));


	// From: Req3Batch82Wrapper_AP
	unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) >= stepLocal_1) {
		if ((max ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) , ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) <= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))));
		} else {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)));
			}
		}
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	unsigned_char_Array_0[1][0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0][0] <= 254);
	unsigned_char_Array_0[0][1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1][0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0][1][0] <= 254);
	unsigned_char_Array_0[1][1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][1][0] <= 127);
	unsigned_char_Array_0[1][0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0][1] <= 254);
	unsigned_char_Array_0[0][1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1][1] <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (max ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) , (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) : 1) : 1) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) / -2) >= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) | (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) == ((unsigned char) (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))))))) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? (((max ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) , ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) <= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))))) : 1)) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))
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
