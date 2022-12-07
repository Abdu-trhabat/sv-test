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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch91Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	float var_1_2;
	unsigned long int var_1_3;
	unsigned long int var_1_4;
	signed short int var_1_5;
	float var_1_6;
	float var_1_7;
	signed short int var_1_8;
	unsigned long int var_1_9;
	unsigned long int var_1_10;
	unsigned long int var_1_11;
	signed short int var_1_12;
	signed short int var_1_14;
	signed short int var_1_15;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	100000000,
	49.25,
	64,
	64,
	1,
	8.4,
	-0.25,
	-4,
	64,
	16,
	10,
	100,
	128,
	10
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch91Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) >= 50.4f) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (max ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_4_Pointer))));
	}


	// From: Req2Batch91Wrapper_SP
	if ((*(WrapperStruct00_var_1_3_Pointer)) == ((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer)))) {
		if ((*(WrapperStruct00_var_1_2_Pointer)) >= ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
		} else {
			(*(WrapperStruct00_var_1_5_Pointer)) = 32;
		}
	} else {
		(*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	}


	// From: Req3Batch91Wrapper_SP
	if (! ((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer)))) {
		(*(WrapperStruct00_var_1_9_Pointer)) = (min ((min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_4_Pointer)))) , (max ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))))));
	} else {
		(*(WrapperStruct00_var_1_9_Pointer)) = (max ((*(WrapperStruct00_var_1_11_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer))));
	}


	// From: Req4Batch91Wrapper_SP
	if ((*(WrapperStruct00_var_1_10_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) {
		if (63.1 >= (*(WrapperStruct00_var_1_7_Pointer))) {
			if ((*(WrapperStruct00_var_1_7_Pointer)) >= (*(WrapperStruct00_var_1_2_Pointer))) {
				(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer)));
			} else {
				(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
			}
		}
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967294);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967294);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967294);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
}



void updateLastVariables() {
}

int property() {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) >= 50.4f) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (max ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_4_Pointer)))))) : 1) && (((*(WrapperStruct00_var_1_3_Pointer)) == ((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer)))) ? (((*(WrapperStruct00_var_1_2_Pointer)) >= ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed short int) 32))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_8_Pointer)))))) && ((! ((*(WrapperStruct00_var_1_4_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) (min ((min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_4_Pointer)))) , (max ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) (max ((*(WrapperStruct00_var_1_11_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))))))) && (((*(WrapperStruct00_var_1_10_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) ? ((63.1 >= (*(WrapperStruct00_var_1_7_Pointer))) ? (((*(WrapperStruct00_var_1_7_Pointer)) >= (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_14_Pointer))))) : 1) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_15_Pointer)))))
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
