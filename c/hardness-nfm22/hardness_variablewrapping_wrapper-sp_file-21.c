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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct0;

struct WrapperStruct0 {
	unsigned short int var_1_1;
	unsigned char var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	unsigned char var_1_12;
	signed short int var_1_13;
	float var_1_14;
	float var_1_15;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct0 WrapperStruct0 = {
	32,
	0,
	15.6,
	15.4,
	32.2,
	1,
	256,
	5.75,
	8.6
};
unsigned short int* WrapperStruct0_var_1_1_Pointer = &(WrapperStruct0.var_1_1);
unsigned char* WrapperStruct0_var_1_7_Pointer = &(WrapperStruct0.var_1_7);
double* WrapperStruct0_var_1_8_Pointer = &(WrapperStruct0.var_1_8);
double* WrapperStruct0_var_1_9_Pointer = &(WrapperStruct0.var_1_9);
double* WrapperStruct0_var_1_10_Pointer = &(WrapperStruct0.var_1_10);
unsigned char* WrapperStruct0_var_1_12_Pointer = &(WrapperStruct0.var_1_12);
signed short int* WrapperStruct0_var_1_13_Pointer = &(WrapperStruct0.var_1_13);
float* WrapperStruct0_var_1_14_Pointer = &(WrapperStruct0.var_1_14);
float* WrapperStruct0_var_1_15_Pointer = &(WrapperStruct0.var_1_15);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct0_var_1_7 = 0;
signed short int last_1_WrapperStruct0_var_1_13 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch21Wrapper_SP
	if ((last_1_WrapperStruct0_var_1_13 + (max (last_1_WrapperStruct0_var_1_13 , last_1_WrapperStruct0_var_1_13))) < (last_1_WrapperStruct0_var_1_13 * last_1_WrapperStruct0_var_1_13)) {
		if (last_1_WrapperStruct0_var_1_13 < (last_1_WrapperStruct0_var_1_13 - last_1_WrapperStruct0_var_1_13)) {
			if (last_1_WrapperStruct0_var_1_13 != (abs (min (last_1_WrapperStruct0_var_1_13 , last_1_WrapperStruct0_var_1_13)))) {
				(*(WrapperStruct0_var_1_1_Pointer)) = last_1_WrapperStruct0_var_1_13;
			}
		}
	} else {
		(*(WrapperStruct0_var_1_1_Pointer)) = last_1_WrapperStruct0_var_1_13;
	}


	// From: Req3Batch21Wrapper_SP
	if ((*(WrapperStruct0_var_1_12_Pointer))) {
		if (((*(WrapperStruct0_var_1_14_Pointer)) - (*(WrapperStruct0_var_1_15_Pointer))) >= (((*(WrapperStruct0_var_1_8_Pointer)) + (*(WrapperStruct0_var_1_10_Pointer))) + (*(WrapperStruct0_var_1_9_Pointer)))) {
			(*(WrapperStruct0_var_1_13_Pointer)) = (max ((*(WrapperStruct0_var_1_1_Pointer)) , (*(WrapperStruct0_var_1_1_Pointer))));
		} else {
			(*(WrapperStruct0_var_1_13_Pointer)) = (*(WrapperStruct0_var_1_1_Pointer));
		}
	}


	// From: Req2Batch21Wrapper_SP
	if ((min ((*(WrapperStruct0_var_1_8_Pointer)) , (*(WrapperStruct0_var_1_9_Pointer)))) <= (*(WrapperStruct0_var_1_10_Pointer))) {
		if (last_1_WrapperStruct0_var_1_7 && ((*(WrapperStruct0_var_1_1_Pointer)) >= (*(WrapperStruct0_var_1_1_Pointer)))) {
			(*(WrapperStruct0_var_1_7_Pointer)) = 0;
		}
	} else {
		(*(WrapperStruct0_var_1_7_Pointer)) = (*(WrapperStruct0_var_1_12_Pointer));
	}
}



void updateVariables() {
	WrapperStruct0.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct0.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct0.var_1_8 <= -1.0e-20F) || (WrapperStruct0.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct0.var_1_8 >= 1.0e-20F ));
	WrapperStruct0.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct0.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct0.var_1_9 <= -1.0e-20F) || (WrapperStruct0.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct0.var_1_9 >= 1.0e-20F ));
	WrapperStruct0.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct0.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct0.var_1_10 <= -1.0e-20F) || (WrapperStruct0.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct0.var_1_10 >= 1.0e-20F ));
	WrapperStruct0.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct0.var_1_12 >= 1);
	assume_abort_if_not(WrapperStruct0.var_1_12 <= 1);
	WrapperStruct0.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct0.var_1_14 >= 0.0F && WrapperStruct0.var_1_14 <= -1.0e-20F) || (WrapperStruct0.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct0.var_1_14 >= 1.0e-20F ));
	WrapperStruct0.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct0.var_1_15 >= 0.0F && WrapperStruct0.var_1_15 <= -1.0e-20F) || (WrapperStruct0.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct0.var_1_15 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_WrapperStruct0_var_1_7 = WrapperStruct0.var_1_7;
	last_1_WrapperStruct0_var_1_13 = WrapperStruct0.var_1_13;
}

int property() {
	return ((((last_1_WrapperStruct0_var_1_13 + (max (last_1_WrapperStruct0_var_1_13 , last_1_WrapperStruct0_var_1_13))) < (last_1_WrapperStruct0_var_1_13 * last_1_WrapperStruct0_var_1_13)) ? ((last_1_WrapperStruct0_var_1_13 < (last_1_WrapperStruct0_var_1_13 - last_1_WrapperStruct0_var_1_13)) ? ((last_1_WrapperStruct0_var_1_13 != (abs (min (last_1_WrapperStruct0_var_1_13 , last_1_WrapperStruct0_var_1_13)))) ? ((*(WrapperStruct0_var_1_1_Pointer)) == ((unsigned short int) last_1_WrapperStruct0_var_1_13)) : 1) : 1) : ((*(WrapperStruct0_var_1_1_Pointer)) == ((unsigned short int) last_1_WrapperStruct0_var_1_13))) && (((min ((*(WrapperStruct0_var_1_8_Pointer)) , (*(WrapperStruct0_var_1_9_Pointer)))) <= (*(WrapperStruct0_var_1_10_Pointer))) ? ((last_1_WrapperStruct0_var_1_7 && ((*(WrapperStruct0_var_1_1_Pointer)) >= (*(WrapperStruct0_var_1_1_Pointer)))) ? ((*(WrapperStruct0_var_1_7_Pointer)) == ((unsigned char) 0)) : 1) : ((*(WrapperStruct0_var_1_7_Pointer)) == ((unsigned char) (*(WrapperStruct0_var_1_12_Pointer)))))) && ((*(WrapperStruct0_var_1_12_Pointer)) ? ((((*(WrapperStruct0_var_1_14_Pointer)) - (*(WrapperStruct0_var_1_15_Pointer))) >= (((*(WrapperStruct0_var_1_8_Pointer)) + (*(WrapperStruct0_var_1_10_Pointer))) + (*(WrapperStruct0_var_1_9_Pointer)))) ? ((*(WrapperStruct0_var_1_13_Pointer)) == ((signed short int) (max ((*(WrapperStruct0_var_1_1_Pointer)) , (*(WrapperStruct0_var_1_1_Pointer)))))) : ((*(WrapperStruct0_var_1_13_Pointer)) == ((signed short int) (*(WrapperStruct0_var_1_1_Pointer))))) : 1)
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
