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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	signed char var_1_2;
	signed char var_1_3;
	signed char var_1_4;
	signed char var_1_5;
	signed char var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	signed short int var_1_10;
	unsigned short int var_1_11;
	unsigned char var_1_13;
	unsigned short int var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
	float var_1_17;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	32,
	2,
	8,
	0,
	32,
	10,
	1000000.625,
	16.65,
	15.5,
	500,
	8,
	0,
	100,
	0,
	0,
	2.4
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
float* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch92Wrapper_SP
	(*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))) - (max ((*(WrapperStruct00_var_1_4_Pointer)) , ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))))));


	// From: Req2Batch92Wrapper_SP
	signed long int stepLocal_0 = (~ (*(WrapperStruct00_var_1_5_Pointer))) * ((*(WrapperStruct00_var_1_6_Pointer)) & (*(WrapperStruct00_var_1_3_Pointer)));
	if (stepLocal_0 >= (*(WrapperStruct00_var_1_4_Pointer))) {
		(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	} else {
		(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
	}


	// From: Req3Batch92Wrapper_SP
	(*(WrapperStruct00_var_1_10_Pointer)) = (abs ((*(WrapperStruct00_var_1_2_Pointer))));


	// From: Req5Batch92Wrapper_SP
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer)) / (*(WrapperStruct00_var_1_14_Pointer));
	if (stepLocal_1 < -100) {
		(*(WrapperStruct00_var_1_13_Pointer)) = (! (! (! (*(WrapperStruct00_var_1_15_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer)));
	}


	// From: Req6Batch92Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));


	// From: Req4Batch92Wrapper_SP
	if (! (*(WrapperStruct00_var_1_13_Pointer))) {
		(*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) + ((max ((*(WrapperStruct00_var_1_6_Pointer)) , 1)) + 64));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 63);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 63);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 126);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 63);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 63);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_14 != 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 0);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))) - (max ((*(WrapperStruct00_var_1_4_Pointer)) , ((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer)))))))) && ((((~ (*(WrapperStruct00_var_1_5_Pointer))) * ((*(WrapperStruct00_var_1_6_Pointer)) & (*(WrapperStruct00_var_1_3_Pointer)))) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) (*(WrapperStruct00_var_1_9_Pointer)))))) && ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) (abs ((*(WrapperStruct00_var_1_2_Pointer))))))) && ((! (*(WrapperStruct00_var_1_13_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_5_Pointer)) + ((max ((*(WrapperStruct00_var_1_6_Pointer)) , 1)) + 64)))) : 1)) && ((((*(WrapperStruct00_var_1_6_Pointer)) / (*(WrapperStruct00_var_1_14_Pointer))) < -100) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (! (! (! (*(WrapperStruct00_var_1_15_Pointer))))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_15_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer))))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((float) (*(WrapperStruct00_var_1_8_Pointer))))
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
