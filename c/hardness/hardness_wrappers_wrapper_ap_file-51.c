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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51Wrapper_AP.c", 13, "reach_error"); }
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
	0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[5] = {
	127.5, 10.6, 999999999.4, 100.01, 10.8
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed short int signed_short_int_Array_0[2] = {
	-16, -32
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[7] = {
	2565572511, 500, 1, 2467894503, 2745650083, 8, 2277019112
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[3]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[4]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer = &(unsigned_long_int_Array_0[5]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer = &(unsigned_long_int_Array_0[6]);

// Calibration values

// Last'ed variables
unsigned long int last_1_unsigned_long_int_Array_0_5_ = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch51Wrapper_AP
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) <= last_1_unsigned_long_int_Array_0_5_) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (last_1_unsigned_long_int_Array_0_5_ == (max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) {
			if (last_1_unsigned_long_int_Array_0_5_ < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) {
				(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer));
			}
		}
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer));
	}


	// From: Req2Batch51Wrapper_AP
	unsigned long int stepLocal_1 = (max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	if (stepLocal_1 != (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)))) {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)));
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer));
	}


	// From: Req1Batch51Wrapper_AP
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) >= stepLocal_0) {
			(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (abs ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))));
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + (max ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) + 63.25))));
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -230584.3009213691400e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 2305843.009213691400e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427383000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -461168.6018427383000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -922337.2036854766000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[0] != 0);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 2147483647);
	unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[3] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[3] <= 4294967295);
	unsigned_long_int_Array_0[4] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[4] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[4] <= 4294967294);
	unsigned_long_int_Array_0[6] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[6] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[6] <= 4294967294);
}



void updateLastVariables(void) {
	last_1_unsigned_long_int_Array_0_5_ = unsigned_long_int_Array_0[5];
}

int property(void) {
	return (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) >= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (abs ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + (max ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) + 63.25))))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) && ((((max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) != (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer)))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) <= last_1_unsigned_long_int_Array_0_5_) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (last_1_unsigned_long_int_Array_0_5_ == (max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) ? ((last_1_unsigned_long_int_Array_0_5_ < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var6_Pointer)))) : 1) : 1) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))))
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
