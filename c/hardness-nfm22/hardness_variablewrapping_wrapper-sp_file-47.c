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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct0;

struct WrapperStruct0 {
	double var_1_1;
	double var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	signed long int var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	double var_1_15;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct0 WrapperStruct0 = {
	24.575,
	3.5,
	16,
	16,
	4,
	8,
	1,
	1,
	3.8
};
double* WrapperStruct0_var_1_1_Pointer = &(WrapperStruct0.var_1_1);
double* WrapperStruct0_var_1_8_Pointer = &(WrapperStruct0.var_1_8);
signed char* WrapperStruct0_var_1_9_Pointer = &(WrapperStruct0.var_1_9);
signed char* WrapperStruct0_var_1_10_Pointer = &(WrapperStruct0.var_1_10);
signed char* WrapperStruct0_var_1_11_Pointer = &(WrapperStruct0.var_1_11);
signed long int* WrapperStruct0_var_1_12_Pointer = &(WrapperStruct0.var_1_12);
unsigned char* WrapperStruct0_var_1_13_Pointer = &(WrapperStruct0.var_1_13);
unsigned char* WrapperStruct0_var_1_14_Pointer = &(WrapperStruct0.var_1_14);
double* WrapperStruct0_var_1_15_Pointer = &(WrapperStruct0.var_1_15);

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct0_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch47Wrapper_SP
	if (-4 > last_1_WrapperStruct0_var_1_12) {
		if ((~ last_1_WrapperStruct0_var_1_12) <= last_1_WrapperStruct0_var_1_12) {
			(*(WrapperStruct0_var_1_9_Pointer)) = (abs ((*(WrapperStruct0_var_1_10_Pointer)) + (*(WrapperStruct0_var_1_11_Pointer))));
		}
	} else {
		(*(WrapperStruct0_var_1_9_Pointer)) = (*(WrapperStruct0_var_1_10_Pointer));
	}


	// From: Req3Batch47Wrapper_SP
	unsigned char stepLocal_0 = ! (*(WrapperStruct0_var_1_13_Pointer));
	if (stepLocal_0 || (*(WrapperStruct0_var_1_14_Pointer))) {
		if (! (*(WrapperStruct0_var_1_14_Pointer))) {
			(*(WrapperStruct0_var_1_12_Pointer)) = (abs (min ((*(WrapperStruct0_var_1_9_Pointer)) , (*(WrapperStruct0_var_1_9_Pointer)))));
		} else {
			(*(WrapperStruct0_var_1_12_Pointer)) = (*(WrapperStruct0_var_1_9_Pointer));
		}
	}


	// From: Req4Batch47Wrapper_SP
	(*(WrapperStruct0_var_1_15_Pointer)) = (*(WrapperStruct0_var_1_8_Pointer));


	// From: Req1Batch47Wrapper_SP
	if ((*(WrapperStruct0_var_1_15_Pointer)) <= (*(WrapperStruct0_var_1_15_Pointer))) {
		if (((*(WrapperStruct0_var_1_12_Pointer)) + (*(WrapperStruct0_var_1_12_Pointer))) >= ((*(WrapperStruct0_var_1_12_Pointer)) + (*(WrapperStruct0_var_1_9_Pointer)))) {
			(*(WrapperStruct0_var_1_1_Pointer)) = (abs ((*(WrapperStruct0_var_1_8_Pointer))));
		}
	} else {
		if ((*(WrapperStruct0_var_1_12_Pointer)) > (*(WrapperStruct0_var_1_9_Pointer))) {
			(*(WrapperStruct0_var_1_1_Pointer)) = (*(WrapperStruct0_var_1_8_Pointer));
		}
	}
}



void updateVariables() {
	WrapperStruct0.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct0.var_1_8 >= -922337.2036854765600e+13F && WrapperStruct0.var_1_8 <= -1.0e-20F) || (WrapperStruct0.var_1_8 <= 9223372.036854765600e+12F && WrapperStruct0.var_1_8 >= 1.0e-20F ));
	WrapperStruct0.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct0.var_1_10 >= -63);
	assume_abort_if_not(WrapperStruct0.var_1_10 <= 63);
	WrapperStruct0.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct0.var_1_11 >= -63);
	assume_abort_if_not(WrapperStruct0.var_1_11 <= 63);
	WrapperStruct0.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct0.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct0.var_1_13 <= 1);
	WrapperStruct0.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct0.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct0.var_1_14 <= 1);
}



void updateLastVariables() {
	last_1_WrapperStruct0_var_1_12 = WrapperStruct0.var_1_12;
}

int property() {
	return (((((*(WrapperStruct0_var_1_15_Pointer)) <= (*(WrapperStruct0_var_1_15_Pointer))) ? ((((*(WrapperStruct0_var_1_12_Pointer)) + (*(WrapperStruct0_var_1_12_Pointer))) >= ((*(WrapperStruct0_var_1_12_Pointer)) + (*(WrapperStruct0_var_1_9_Pointer)))) ? ((*(WrapperStruct0_var_1_1_Pointer)) == ((double) (abs ((*(WrapperStruct0_var_1_8_Pointer)))))) : 1) : (((*(WrapperStruct0_var_1_12_Pointer)) > (*(WrapperStruct0_var_1_9_Pointer))) ? ((*(WrapperStruct0_var_1_1_Pointer)) == ((double) (*(WrapperStruct0_var_1_8_Pointer)))) : 1)) && ((-4 > last_1_WrapperStruct0_var_1_12) ? (((~ last_1_WrapperStruct0_var_1_12) <= last_1_WrapperStruct0_var_1_12) ? ((*(WrapperStruct0_var_1_9_Pointer)) == ((signed char) (abs ((*(WrapperStruct0_var_1_10_Pointer)) + (*(WrapperStruct0_var_1_11_Pointer)))))) : 1) : ((*(WrapperStruct0_var_1_9_Pointer)) == ((signed char) (*(WrapperStruct0_var_1_10_Pointer)))))) && (((! (*(WrapperStruct0_var_1_13_Pointer))) || (*(WrapperStruct0_var_1_14_Pointer))) ? ((! (*(WrapperStruct0_var_1_14_Pointer))) ? ((*(WrapperStruct0_var_1_12_Pointer)) == ((signed long int) (abs (min ((*(WrapperStruct0_var_1_9_Pointer)) , (*(WrapperStruct0_var_1_9_Pointer))))))) : ((*(WrapperStruct0_var_1_12_Pointer)) == ((signed long int) (*(WrapperStruct0_var_1_9_Pointer))))) : 1)) && ((*(WrapperStruct0_var_1_15_Pointer)) == ((double) (*(WrapperStruct0_var_1_8_Pointer))))
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
