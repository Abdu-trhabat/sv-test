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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
	0.4, 100000000.2
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[2] = {
	15.2, 10.8
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
	8
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[5] = {
	4, 2, -4, -32, 10
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[3]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[4]);
unsigned char unsigned_char_Array_0[2][2] = {
	{4, 2}, {10, 100}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch118Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	}


	// From: Req5Batch118Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));


	// From: Req1Batch118Wrapper_AP
	signed long int stepLocal_0 = 4;
	if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) < stepLocal_0) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - 5);
	}


	// From: Req2Batch118Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == stepLocal_1) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) = ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) + (max ((64 + 8) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))));
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + 4);
	}


	// From: Req3Batch118Wrapper_AP
	if (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >= (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))) {
			if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) >= 127.25f) {
				(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
			}
		}
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = 16;
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 16383);
	signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[3] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 127);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) < 4) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - 5)))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) == ((unsigned char) ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) + (max ((64 + 8) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + 4))))) && ((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >= (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) >= 127.25f) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))) : 1) : 1) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) 16)))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))
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
