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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2][2] = {
	{16.9, 4.6}, {9.875, 9.375}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
signed short int signed_short_int_Array_0[2][2] = {
	{10, 0}, {1, 25}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
unsigned char unsigned_char_Array_0[3] = {
	1, 128, 64
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[5] = {
	0, 2, 25, 2762957886, 2
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[3]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[4]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch90Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) = (min (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))));
	}


	// From: Req3Batch90Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (((max ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) >= (- (32.25 * (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
			} else {
				(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
			}
		} else {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
		}
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
	}


	// From: Req4Batch90Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));


	// From: Req5Batch90Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));


	// From: Req2Batch90Wrapper_AP
	unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	signed short int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
	if (stepLocal_0 != (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) {
		if (stepLocal_1 >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
			} else {
				(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
			}
		} else {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
		}
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854776000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -922337.2036854776000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32766);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 16383);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 16383);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 2147483647);
	unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[3] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[3] <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) == ((signed short int) (min (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) : 1) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) != (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) ? ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))))) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((((max ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) >= (- (32.25 * (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
