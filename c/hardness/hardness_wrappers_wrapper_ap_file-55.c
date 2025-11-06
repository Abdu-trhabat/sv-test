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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_AP.c", 13, "reach_error"); }
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
	1.8, 63.5, 0.25, 256.75, 16.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
float float_Array_0[1] = {
	4.6
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed long int signed_long_int_Array_0[1] = {
	-5
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[2] = {
	1, 128
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned char unsigned_char_Array_0[2] = {
	128, 2
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[1] = {
	500
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[3] = {
	8, 25, 10
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = -5;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 500;
unsigned short int last_1_unsigned_short_int_Array_0_2_ = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch55Wrapper_AP
	signed long int stepLocal_3 = ~ (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	signed long int stepLocal_2 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
	if (stepLocal_3 <= (min ((16 >> (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) , last_1_signed_long_int_Array_0_0_))) {
		if (stepLocal_2 < (last_1_unsigned_short_int_Array_0_2_ / -8)) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = last_1_unsigned_short_int_Array_0_2_;
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (last_1_unsigned_long_int_Array_0_0_ - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
	}


	// From: Req5Batch55Wrapper_AP
	(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));


	// From: Req1Batch55Wrapper_AP
	unsigned char stepLocal_1 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	signed short int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if (stepLocal_1 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			if (stepLocal_0 >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) {
				(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = 5;
			} else {
				(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (min (25 , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))));
			}
		}
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	}


	// From: Req2Batch55Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) + (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)));
	}


	// From: Req4Batch55Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));


	// From: Req6Batch55Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 2305843.009213691400e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 2305843.009213691400e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854766000e+12F && double_Array_0[4] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 1);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 30);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
	last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
	last_1_unsigned_short_int_Array_0_2_ = unsigned_short_int_Array_0[2];
}

int property(void) {
	return ((((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) 5)) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (min (25 , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))))) : 1) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) + (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))) : 1)) && (((~ (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) <= (min ((16 >> (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) , last_1_signed_long_int_Array_0_0_))) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (last_1_unsigned_short_int_Array_0_2_ / -8)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) last_1_unsigned_short_int_Array_0_2_)) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (last_1_unsigned_long_int_Array_0_0_ - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))
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
