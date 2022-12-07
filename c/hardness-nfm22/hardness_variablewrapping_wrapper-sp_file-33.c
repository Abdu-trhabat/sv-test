// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_5;
	unsigned char var_1_7;
	unsigned char var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	float var_1_12;
	signed long int var_1_13;
	unsigned char var_1_14;
	float var_1_15;
	signed long int var_1_16;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	-10,
	4,
	200,
	32,
	256.5,
	-0.25,
	0.30000000000000004,
	49.5,
	-8,
	0,
	0.4,
	-256
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_13 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch33Wrapper_SP
	if ((*(WrapperStruct00_var_1_5_Pointer)) < last_1_WrapperStruct00_var_1_13) {
		(*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_8_Pointer)) + 1);
	}


	// From: Req6Batch33Wrapper_SP
	(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));


	// From: Req4Batch33Wrapper_SP
	unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_7_Pointer));
	if (! (*(WrapperStruct00_var_1_14_Pointer))) {
		(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	} else {
		if (stepLocal_1 > ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
		} else {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
		}
	}


	// From: Req5Batch33Wrapper_SP
	(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));


	// From: Req1Batch33Wrapper_SP
	signed long int stepLocal_0 = ((*(WrapperStruct00_var_1_13_Pointer)) ^ (*(WrapperStruct00_var_1_7_Pointer))) + (*(WrapperStruct00_var_1_16_Pointer));
	if (stepLocal_0 < -1) {
		(*(WrapperStruct00_var_1_1_Pointer)) = 8;
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (128 - ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))));
	}


	// From: Req3Batch33Wrapper_SP
	if ((*(WrapperStruct00_var_1_7_Pointer)) < ((*(WrapperStruct00_var_1_13_Pointer)) & ((*(WrapperStruct00_var_1_7_Pointer)) | (*(WrapperStruct00_var_1_16_Pointer))))) {
		(*(WrapperStruct00_var_1_9_Pointer)) = (abs ((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}

int property() {
	return (((((((((*(WrapperStruct00_var_1_13_Pointer)) ^ (*(WrapperStruct00_var_1_7_Pointer))) + (*(WrapperStruct00_var_1_16_Pointer))) < -1) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 8)) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (128 - ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))))))) && (((*(WrapperStruct00_var_1_5_Pointer)) < last_1_WrapperStruct00_var_1_13) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_8_Pointer)) + 1))) : 1)) && (((*(WrapperStruct00_var_1_7_Pointer)) < ((*(WrapperStruct00_var_1_13_Pointer)) & ((*(WrapperStruct00_var_1_7_Pointer)) | (*(WrapperStruct00_var_1_16_Pointer))))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (abs ((*(WrapperStruct00_var_1_10_Pointer)) + ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))))))) : 1)) && ((! (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer)))) : (((*(WrapperStruct00_var_1_7_Pointer)) > ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_16_Pointer))))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer))))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_7_Pointer))))
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
