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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_7;
	signed short int var_1_8;
	signed short int var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	signed char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned short int var_1_18;
	unsigned short int var_1_19;
	float var_1_20;
	float var_1_21;
	signed short int var_1_22;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	16,
	32,
	20113,
	100,
	100,
	-1,
	16,
	1,
	0,
	1,
	10,
	256,
	32.5,
	127.4,
	128
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned short int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
float* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
float* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
signed short int* WrapperStruct00_var_1_22_Pointer = &(WrapperStruct00.var_1_22);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch97Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));


	// From: Req5Batch97Wrapper_SP
	(*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_21_Pointer));


	// From: Req6Batch97Wrapper_SP
	(*(WrapperStruct00_var_1_22_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));


	// From: Req3Batch97Wrapper_SP
	if (127.5f > (*(WrapperStruct00_var_1_20_Pointer))) {
		(*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_13_Pointer)) = (((*(WrapperStruct00_var_1_20_Pointer)) >= (*(WrapperStruct00_var_1_20_Pointer))) || (*(WrapperStruct00_var_1_15_Pointer)));
	}


	// From: Req2Batch97Wrapper_SP
	if ((*(WrapperStruct00_var_1_18_Pointer)) == (*(WrapperStruct00_var_1_7_Pointer))) {
		(*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) + ((*(WrapperStruct00_var_1_12_Pointer)) + -25));
	} else {
		if (((32 * -25) | (*(WrapperStruct00_var_1_22_Pointer))) >= (*(WrapperStruct00_var_1_11_Pointer))) {
			if ((*(WrapperStruct00_var_1_13_Pointer))) {
				(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
			}
		}
	}


	// From: Req1Batch97Wrapper_SP
	if ((*(WrapperStruct00_var_1_13_Pointer))) {
		if ((*(WrapperStruct00_var_1_10_Pointer)) > (*(WrapperStruct00_var_1_22_Pointer))) {
			if ((*(WrapperStruct00_var_1_13_Pointer))) {
				(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) - ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))));
			} else {
				(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
			}
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = 8;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -31);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 65534);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_21 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return ((((((*(WrapperStruct00_var_1_13_Pointer)) ? (((*(WrapperStruct00_var_1_10_Pointer)) > (*(WrapperStruct00_var_1_22_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_7_Pointer)) - ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer)))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_18_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 8))) : 1) && (((*(WrapperStruct00_var_1_18_Pointer)) == (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_11_Pointer)) + ((*(WrapperStruct00_var_1_12_Pointer)) + -25)))) : ((((32 * -25) | (*(WrapperStruct00_var_1_22_Pointer))) >= (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_12_Pointer)))) : 1) : 1))) && ((127.5f > (*(WrapperStruct00_var_1_20_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_15_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_20_Pointer)) >= (*(WrapperStruct00_var_1_20_Pointer))) || (*(WrapperStruct00_var_1_15_Pointer))))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((float) (*(WrapperStruct00_var_1_21_Pointer))))) && ((*(WrapperStruct00_var_1_22_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_12_Pointer))))
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
