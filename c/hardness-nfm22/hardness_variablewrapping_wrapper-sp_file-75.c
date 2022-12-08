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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_7;
	signed long int var_1_8;
	double var_1_10;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	float var_1_18;
	float var_1_19;
	signed char var_1_20;
	signed char var_1_21;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	32,
	32,
	-100,
	5.95,
	128,
	200,
	8,
	0,
	128,
	1,
	2.25,
	16.875,
	-4,
	10
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
float* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
float* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
signed char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
signed char* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_8 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch75Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));


	// From: Req5Batch75Wrapper_SP
	(*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_21_Pointer));


	// From: Req2Batch75Wrapper_SP
	if (((*(WrapperStruct00_var_1_18_Pointer)) / (*(WrapperStruct00_var_1_10_Pointer))) >= ((*(WrapperStruct00_var_1_18_Pointer)) / 128.6)) {
		(*(WrapperStruct00_var_1_8_Pointer)) = (((*(WrapperStruct00_var_1_20_Pointer)) + ((*(WrapperStruct00_var_1_7_Pointer)) + last_1_WrapperStruct00_var_1_8)) - (*(WrapperStruct00_var_1_20_Pointer)));
	} else {
		if ((*(WrapperStruct00_var_1_18_Pointer)) <= (*(WrapperStruct00_var_1_10_Pointer))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = 256;
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_20_Pointer));
		}
	}


	// From: Req1Batch75Wrapper_SP
	signed long int stepLocal_0 = ((*(WrapperStruct00_var_1_8_Pointer)) * (*(WrapperStruct00_var_1_20_Pointer))) * (*(WrapperStruct00_var_1_8_Pointer));
	if (stepLocal_0 < (max ((*(WrapperStruct00_var_1_20_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer))))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	}


	// From: Req3Batch75Wrapper_SP
	if (((*(WrapperStruct00_var_1_1_Pointer)) == ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))) && (*(WrapperStruct00_var_1_15_Pointer))) {
		if ((*(WrapperStruct00_var_1_15_Pointer))) {
			(*(WrapperStruct00_var_1_12_Pointer)) = (max (((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) , (*(WrapperStruct00_var_1_7_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_10 != 0.0F);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 255);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_19 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_19 <= -1.0e-20F) || (WrapperStruct00.var_1_19 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_19 >= 1.0e-20F ));
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 126);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}

int property() {
	return ((((((((*(WrapperStruct00_var_1_8_Pointer)) * (*(WrapperStruct00_var_1_20_Pointer))) * (*(WrapperStruct00_var_1_8_Pointer))) < (max ((*(WrapperStruct00_var_1_20_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer))))) && ((((*(WrapperStruct00_var_1_18_Pointer)) / (*(WrapperStruct00_var_1_10_Pointer))) >= ((*(WrapperStruct00_var_1_18_Pointer)) / 128.6)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (((*(WrapperStruct00_var_1_20_Pointer)) + ((*(WrapperStruct00_var_1_7_Pointer)) + last_1_WrapperStruct00_var_1_8)) - (*(WrapperStruct00_var_1_20_Pointer))))) : (((*(WrapperStruct00_var_1_18_Pointer)) <= (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) 256)) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_20_Pointer))))))) && ((((*(WrapperStruct00_var_1_1_Pointer)) == ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))) && (*(WrapperStruct00_var_1_15_Pointer))) ? ((*(WrapperStruct00_var_1_15_Pointer)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (max (((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) , (*(WrapperStruct00_var_1_7_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_17_Pointer)))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((float) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_21_Pointer))))
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
