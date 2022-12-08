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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	unsigned char var_1_3;
	float var_1_4;
	signed long int var_1_5;
	double var_1_9;
	double var_1_12;
	double var_1_13;
	double var_1_14;
	double var_1_15;
	signed char var_1_16;
	signed char var_1_17;
	unsigned short int var_1_18;
	unsigned short int var_1_19;
	unsigned short int var_1_20;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	1000000000.1,
	1,
	8.2,
	-32,
	100.5,
	25.25,
	63.6,
	0.0,
	0.8,
	-8,
	8,
	2,
	50,
	0
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned short int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
unsigned short int* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);

// Calibration values

// Last'ed variables
double last_1_WrapperStruct00_var_1_9 = 100.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch65Wrapper_SP
	if (0.625f > last_1_WrapperStruct00_var_1_9) {
		if ((*(WrapperStruct00_var_1_3_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_4_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_4_Pointer))));
	}


	// From: Req4Batch65Wrapper_SP
	(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));


	// From: Req5Batch65Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));


	// From: Req6Batch65Wrapper_SP
	(*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));


	// From: Req3Batch65Wrapper_SP
	if ((*(WrapperStruct00_var_1_3_Pointer))) {
		if ((*(WrapperStruct00_var_1_20_Pointer)) >= (((*(WrapperStruct00_var_1_18_Pointer)) - (*(WrapperStruct00_var_1_20_Pointer))) * 64)) {
			(*(WrapperStruct00_var_1_9_Pointer)) = ((min ((*(WrapperStruct00_var_1_12_Pointer)) , 50.5)) - (*(WrapperStruct00_var_1_13_Pointer)));
		}
	} else {
		if ((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_1_Pointer))) {
			(*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) - ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))));
		}
	}


	// From: Req2Batch65Wrapper_SP
	if ((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) {
		(*(WrapperStruct00_var_1_5_Pointer)) = ((max ((*(WrapperStruct00_var_1_20_Pointer)) , -64)) + (((*(WrapperStruct00_var_1_20_Pointer)) + -2) + (*(WrapperStruct00_var_1_18_Pointer))));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 4611686.018427382800e+12F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 126);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 65534);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_9 = WrapperStruct00.var_1_9;
}

int property() {
	return ((((((0.625f > last_1_WrapperStruct00_var_1_9) ? ((*(WrapperStruct00_var_1_3_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (abs ((*(WrapperStruct00_var_1_4_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (abs ((*(WrapperStruct00_var_1_4_Pointer))))))) && (((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed long int) ((max ((*(WrapperStruct00_var_1_20_Pointer)) , -64)) + (((*(WrapperStruct00_var_1_20_Pointer)) + -2) + (*(WrapperStruct00_var_1_18_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_3_Pointer)) ? (((*(WrapperStruct00_var_1_20_Pointer)) >= (((*(WrapperStruct00_var_1_18_Pointer)) - (*(WrapperStruct00_var_1_20_Pointer))) * 64)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) ((min ((*(WrapperStruct00_var_1_12_Pointer)) , 50.5)) - (*(WrapperStruct00_var_1_13_Pointer))))) : 1) : (((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((double) ((*(WrapperStruct00_var_1_13_Pointer)) - ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer)))))) : 1))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_17_Pointer))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_19_Pointer))))
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
