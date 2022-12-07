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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	signed short int var_1_3;
	unsigned short int var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned long int var_1_12;
	float var_1_13;
	float var_1_14;
	float var_1_15;
	float var_1_16;
	unsigned long int var_1_17;
	unsigned char var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	5,
	-25,
	4,
	4,
	4,
	8,
	10,
	99.6,
	127.5,
	16.5,
	256.5,
	4288034294,
	0
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_12 = 10;
unsigned char last_1_WrapperStruct00_var_1_18 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch4Wrapper_SP
	unsigned long int stepLocal_2 = last_1_WrapperStruct00_var_1_12 / (*(WrapperStruct00_var_1_3_Pointer));
	if (stepLocal_2 != (last_1_WrapperStruct00_var_1_18 - 64)) {
		(*(WrapperStruct00_var_1_8_Pointer)) = (max ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_8_Pointer)) = (min ((*(WrapperStruct00_var_1_11_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer))));
	}


	// From: Req4Batch4Wrapper_SP
	if ((- ((*(WrapperStruct00_var_1_13_Pointer)) / 0.6f)) > (((*(WrapperStruct00_var_1_14_Pointer)) + 3.25f) / (min ((*(WrapperStruct00_var_1_15_Pointer)) , (*(WrapperStruct00_var_1_16_Pointer)))))) {
		(*(WrapperStruct00_var_1_12_Pointer)) = (500u + (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)));
	}


	// From: Req5Batch4Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));


	// From: Req2Batch4Wrapper_SP
	(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));


	// From: Req1Batch4Wrapper_SP
	signed long int stepLocal_1 = - (*(WrapperStruct00_var_1_3_Pointer));
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_7_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer));
	if (stepLocal_0 >= (*(WrapperStruct00_var_1_7_Pointer))) {
		if (stepLocal_1 > (*(WrapperStruct00_var_1_7_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (min ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_18_Pointer))));
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_15 != 0.0F);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_16 != 0.0F);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 4294967294);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
	last_1_WrapperStruct00_var_1_18 = WrapperStruct00.var_1_18;
}

int property() {
	return (((((((*(WrapperStruct00_var_1_7_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_7_Pointer))) ? (((- (*(WrapperStruct00_var_1_3_Pointer))) > (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (min ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_18_Pointer)))))) : 1) : 1) && ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_18_Pointer))))) && (((last_1_WrapperStruct00_var_1_12 / (*(WrapperStruct00_var_1_3_Pointer))) != (last_1_WrapperStruct00_var_1_18 - 64)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (max ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (min ((*(WrapperStruct00_var_1_11_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))))))) && (((- ((*(WrapperStruct00_var_1_13_Pointer)) / 0.6f)) > (((*(WrapperStruct00_var_1_14_Pointer)) + 3.25f) / (min ((*(WrapperStruct00_var_1_15_Pointer)) , (*(WrapperStruct00_var_1_16_Pointer)))))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (500u + (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer))))
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
