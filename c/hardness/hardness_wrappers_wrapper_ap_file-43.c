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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{1, 0}, {1, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
float float_Array_0[2][2] = {
	{0.2, 64.8}, {64.4, 4.5}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed short int signed_short_int_Array_0[2][3] = {
	{5, 8, 10000}, {50, 1, 64}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[0][2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer = &(signed_short_int_Array_0[1][2]);
unsigned char unsigned_char_Array_0[2][3] = {
	{2, 128, 100}, {2, 2, 100}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][2]);
unsigned long int unsigned_long_int_Array_0[1] = {
	32
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[1] = {
	4
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch43Wrapper_AP
	signed long int stepLocal_1 = -25;
	signed long int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer));
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) > stepLocal_0) {
		if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) > stepLocal_1) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
		} else {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = 100;
		}
	}


	// From: Req3Batch43Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))));


	// From: Req4Batch43Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)));
	}


	// From: Req5Batch43Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));


	// From: Req6Batch43Wrapper_AP
	(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));


	// From: Req7Batch43Wrapper_AP
	(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = 10;


	// From: Req1Batch43Wrapper_AP
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) != (max ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) , ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) = ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) - 32) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
		}
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32766);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 8191);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 8192);
	signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][2] >= 8191);
	assume_abort_if_not(signed_short_int_Array_0[0][2] <= 16383);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
	unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
	unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) != (max ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) , ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) == ((signed short int) ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) - 32) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))) : 1) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))) ? ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) > -25) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) 100))) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (abs ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) 10))
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
