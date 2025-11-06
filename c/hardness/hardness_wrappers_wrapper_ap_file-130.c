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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[7] = {
	15.125, 32.6, 10.9, 4.5, 25.25, 15.25, 128.2
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[5]);
double* double_Array_0_arraydouble_Array_0arrayVar6_Pointer = &(double_Array_0[6]);
signed char signed_char_Array_0[2][2] = {
	{100, -16}, {5, -128}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[7] = {
	64, 1, 4, 16, 4, 0, 256
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[5]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer = &(signed_long_int_Array_0[6]);

// Calibration values

// Last'ed variables
double last_1_double_Array_0_6_ = 128.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch130Wrapper_AP
	if (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (max ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) <= last_1_double_Array_0_6_) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = ((max ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) - 50);
	}


	// From: Req3Batch130Wrapper_AP
	signed long int stepLocal_3 = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
	signed long int stepLocal_2 = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (100 - (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) <= stepLocal_3) {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer));
			} else {
				if (stepLocal_2 <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
					(*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)));
				} else {
					(*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer));
				}
			}
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
	}


	// From: Req1Batch130Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) & (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer));
	signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer));
	if (stepLocal_1 <= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) / (min (-25 , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
	} else {
		if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) != stepLocal_0) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
		} else {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = 5;
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
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -461168.6018427383000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854776000e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= -461168.6018427383000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427383000e+12F && double_Array_0[4] >= 1.0e-20F ));
	double_Array_0[5] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[5] >= -922337.2036854766000e+13F && double_Array_0[5] <= -1.0e-20F) || (double_Array_0[5] <= 9223372.036854766000e+12F && double_Array_0[5] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -1);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 127);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[3] != 0);
	signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483647);
	signed_long_int_Array_0[5] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[5] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[5] <= 2147483647);
	signed_long_int_Array_0[6] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[6] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[6] <= 2147483647);
}



void updateLastVariables(void) {
	last_1_double_Array_0_6_ = double_Array_0[6];
}

int property(void) {
	return (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) & (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) <= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) / (min (-25 , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) 5)))) && ((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (max ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) <= last_1_double_Array_0_6_) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) ((max ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) - 50))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) : ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (100 - (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))
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
