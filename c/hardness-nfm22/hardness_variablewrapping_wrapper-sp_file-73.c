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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned char var_1_6;
	double var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	float var_1_12;
	float var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	float var_1_16;
	signed char var_1_17;
	signed char var_1_18;
	signed long int var_1_19;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	5.5,
	1,
	-0.41,
	25,
	100,
	1,
	15.75,
	1.6,
	0,
	0,
	16.5,
	10,
	-10,
	-16
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed long int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);

// Calibration values

// Last'ed variables
float last_1_WrapperStruct00_var_1_12 = 15.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch73Wrapper_SP
	if ((*(WrapperStruct00_var_1_6_Pointer))) {
		(*(WrapperStruct00_var_1_8_Pointer)) = (max ((*(WrapperStruct00_var_1_9_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer))));
	} else {
		if (last_1_WrapperStruct00_var_1_12 < (last_1_WrapperStruct00_var_1_12 + (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (min ((*(WrapperStruct00_var_1_9_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer))));
		}
	}


	// From: Req5Batch73Wrapper_SP
	(*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));


	// From: Req3Batch73Wrapper_SP
	if ((*(WrapperStruct00_var_1_19_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) {
		if ((*(WrapperStruct00_var_1_6_Pointer))) {
			(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) - (abs (99999.25f)));
		} else {
			if ((*(WrapperStruct00_var_1_14_Pointer)) && (*(WrapperStruct00_var_1_15_Pointer))) {
				(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer)));
			} else {
				(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
			}
		}
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
	}


	// From: Req1Batch73Wrapper_SP
	signed long int stepLocal_0 = max ((*(WrapperStruct00_var_1_8_Pointer)) , ((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_19_Pointer))));
	if ((*(WrapperStruct00_var_1_8_Pointer)) <= stepLocal_0) {
		if (! (*(WrapperStruct00_var_1_6_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
		}
	}


	// From: Req4Batch73Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
}



void updateVariables() {
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 126);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
}

int property() {
	return ((((((*(WrapperStruct00_var_1_8_Pointer)) <= (max ((*(WrapperStruct00_var_1_8_Pointer)) , ((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_19_Pointer)))))) ? ((! (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_7_Pointer))))) : 1) && ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (max ((*(WrapperStruct00_var_1_9_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))))) : ((last_1_WrapperStruct00_var_1_12 < (last_1_WrapperStruct00_var_1_12 + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (min ((*(WrapperStruct00_var_1_9_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))))) : 1))) && (((*(WrapperStruct00_var_1_19_Pointer)) > (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((float) ((*(WrapperStruct00_var_1_13_Pointer)) - (abs (99999.25f))))) : (((*(WrapperStruct00_var_1_14_Pointer)) && (*(WrapperStruct00_var_1_15_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((float) ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((float) (*(WrapperStruct00_var_1_16_Pointer)))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((float) (*(WrapperStruct00_var_1_13_Pointer)))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_18_Pointer))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer))))
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
