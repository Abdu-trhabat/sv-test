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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch29Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	float var_1_3;
	float var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	2.5,
	9.3,
	3.4,
	32,
	1,
	8,
	5,
	1,
	1,
	8
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch29Wrapper_SP
	(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));


	// From: Req6Batch29Wrapper_SP
	(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));


	// From: Req1Batch29Wrapper_SP
	if ((*(WrapperStruct00_var_1_12_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
	} else {
		if (! ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_4_Pointer)))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_3_Pointer))));
		}
	}


	// From: Req2Batch29Wrapper_SP
	if (((*(WrapperStruct00_var_1_1_Pointer)) + 8.125) > ((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))) {
		(*(WrapperStruct00_var_1_5_Pointer)) = (max (((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))) , (*(WrapperStruct00_var_1_14_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
	}


	// From: Req3Batch29Wrapper_SP
	signed long int stepLocal_0 = 5 * (*(WrapperStruct00_var_1_14_Pointer));
	if ((min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_1_Pointer)))) == (*(WrapperStruct00_var_1_1_Pointer))) {
		if ((*(WrapperStruct00_var_1_14_Pointer)) > stepLocal_0) {
			if ((*(WrapperStruct00_var_1_1_Pointer)) < ((*(WrapperStruct00_var_1_1_Pointer)) * 256.5f)) {
				(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
			}
		}
	}


	// From: Req4Batch29Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}



void updateLastVariables() {
}

int property() {
	return ((((((*(WrapperStruct00_var_1_12_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_3_Pointer)))) : ((! ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (abs ((*(WrapperStruct00_var_1_3_Pointer)))))) : 1)) && ((((*(WrapperStruct00_var_1_1_Pointer)) + 8.125) > ((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned short int) (max (((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))) , (*(WrapperStruct00_var_1_14_Pointer)))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_14_Pointer)))))) && (((min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_1_Pointer)))) == (*(WrapperStruct00_var_1_1_Pointer))) ? (((*(WrapperStruct00_var_1_14_Pointer)) > (5 * (*(WrapperStruct00_var_1_14_Pointer)))) ? (((*(WrapperStruct00_var_1_1_Pointer)) < ((*(WrapperStruct00_var_1_1_Pointer)) * 256.5f)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_14_Pointer)))) : 1) : 1) : 1)) && (((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_13_Pointer))))) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer))))
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
