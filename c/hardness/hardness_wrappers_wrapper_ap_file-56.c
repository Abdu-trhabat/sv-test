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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
	{0, 0, 0}, {0, 0, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[0][2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer = &(BOOL_unsigned_char_Array_0[1][2]);
double double_Array_0[2] = {
	10.5, 99.25
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
signed char signed_char_Array_0[1] = {
	10
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[1] = {
	32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[2] = {
	4, 5
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned char unsigned_char_Array_0[2][3] = {
	{8, 64, 128}, {2, 16, 1}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][2]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch56Wrapper_AP
	if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) >> (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))));
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) + (min (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + 1) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))));
	}


	// From: Req2Batch56Wrapper_AP
	unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
	unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || stepLocal_0) {
			if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > stepLocal_1) {
				(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
			}
		}
	}


	// From: Req3Batch56Wrapper_AP
	if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
	}


	// From: Req4Batch56Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) >= ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) << (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) {
			if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
				(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer));
			} else {
				(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = 1;
			}
		} else {
			(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer));
		}
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	BOOL_unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] <= 0);
	BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 1);
	assume_abort_if_not(signed_char_Array_0[0] <= 14);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 64);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
	unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][2] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) >> (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) ((min ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) + (min (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + 1) , (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) : 1) : 1) : 1)) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : 1)) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) >= ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) << (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) 1))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)))))
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
