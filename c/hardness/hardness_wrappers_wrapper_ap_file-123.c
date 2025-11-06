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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
	255.75, 4.35, 2.75
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
signed long int signed_long_int_Array_0[2][2] = {
	{0, 5}, {100000, 4}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed short int signed_short_int_Array_0[1] = {
	8
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	5, 64
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
	1, 100
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch123Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
	unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || stepLocal_0) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = ((256 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) - (min ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))));
	} else {
		if (stepLocal_1 <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
		}
	}


	// From: Req2Batch123Wrapper_AP
	unsigned char stepLocal_3 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) >= stepLocal_2) {
			if ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) && stepLocal_3) {
				(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
			} else {
				(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = 5;
			}
		} else {
			(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
		}
	}


	// From: Req3Batch123Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (max ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))));


	// From: Req4Batch123Wrapper_AP
	unsigned char stepLocal_5 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	signed long int stepLocal_4 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) * ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) >= stepLocal_4) {
		if (stepLocal_5 && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = 5;
		} else {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
		}
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
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
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483646);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
	signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][1] <= 1073741823);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[0] != 0);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) ((256 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) - (min ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) : (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) 5))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (max ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))))) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) * ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) 5)) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))
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
