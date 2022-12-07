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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_5;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	double var_1_11;
	signed long int var_1_12;
	unsigned char var_1_14;
	float var_1_15;
	unsigned long int var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	10,
	0,
	0,
	256.75,
	63.5,
	1.8,
	0.25,
	16.5,
	-5,
	128,
	4.6,
	500,
	2,
	100
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_12 = -5;
unsigned char last_1_WrapperStruct00_var_1_17 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch55Wrapper_SP
	unsigned char stepLocal_1 = last_1_WrapperStruct00_var_1_12 >= last_1_WrapperStruct00_var_1_17;
	signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_17;
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		if (stepLocal_1 && (*(WrapperStruct00_var_1_5_Pointer))) {
			if (last_1_WrapperStruct00_var_1_12 >= stepLocal_0) {
				(*(WrapperStruct00_var_1_1_Pointer)) = 5;
			} else {
				(*(WrapperStruct00_var_1_1_Pointer)) = (min (25 , last_1_WrapperStruct00_var_1_17));
			}
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = last_1_WrapperStruct00_var_1_17;
	}


	// From: Req2Batch55Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		(*(WrapperStruct00_var_1_7_Pointer)) = ((((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))) + (*(WrapperStruct00_var_1_10_Pointer))) - (*(WrapperStruct00_var_1_11_Pointer)));
	}


	// From: Req4Batch55Wrapper_SP
	(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));


	// From: Req5Batch55Wrapper_SP
	(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));


	// From: Req6Batch55Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));


	// From: Req3Batch55Wrapper_SP
	signed long int stepLocal_3 = min ((-4 >> (*(WrapperStruct00_var_1_1_Pointer))) , (*(WrapperStruct00_var_1_1_Pointer)));
	signed long int stepLocal_2 = (*(WrapperStruct00_var_1_1_Pointer)) / -8;
	if ((~ (*(WrapperStruct00_var_1_17_Pointer))) <= stepLocal_3) {
		if (((*(WrapperStruct00_var_1_14_Pointer)) - 64) < stepLocal_2) {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 255);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 254);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
	last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}

int property() {
	return ((((((*(WrapperStruct00_var_1_2_Pointer)) ? (((last_1_WrapperStruct00_var_1_12 >= last_1_WrapperStruct00_var_1_17) && (*(WrapperStruct00_var_1_5_Pointer))) ? ((last_1_WrapperStruct00_var_1_12 >= last_1_WrapperStruct00_var_1_17) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) 5)) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (min (25 , last_1_WrapperStruct00_var_1_17))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) last_1_WrapperStruct00_var_1_17))) && ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) ((((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_9_Pointer))) + (*(WrapperStruct00_var_1_10_Pointer))) - (*(WrapperStruct00_var_1_11_Pointer))))) : 1)) && (((~ (*(WrapperStruct00_var_1_17_Pointer))) <= (min ((-4 >> (*(WrapperStruct00_var_1_1_Pointer))) , (*(WrapperStruct00_var_1_1_Pointer))))) ? ((((*(WrapperStruct00_var_1_14_Pointer)) - 64) < ((*(WrapperStruct00_var_1_1_Pointer)) / -8)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_1_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((float) (*(WrapperStruct00_var_1_8_Pointer))))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_14_Pointer))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer))))
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
