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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_3;
	signed long int var_1_4;
	unsigned char var_1_5;
	double var_1_6;
	double var_1_7;
	signed char var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	1,
	8,
	-2,
	0,
	31.5,
	100000000000000.9,
	-4,
	5,
	10,
	5,
	1,
	1
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);

// Calibration values

// Last'ed variables
signed char last_1_WrapperStruct00_var_1_8 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch76Wrapper_SP
	signed long int stepLocal_0 = (- 5) + last_1_WrapperStruct00_var_1_8;
	if (stepLocal_0 >= last_1_WrapperStruct00_var_1_8) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (! (*(WrapperStruct00_var_1_5_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
	}


	// From: Req3Batch76Wrapper_SP
	if (-25 >= (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_8_Pointer)) = (min ((*(WrapperStruct00_var_1_9_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer))));
	} else {
		if ((*(WrapperStruct00_var_1_10_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) - 16);
		} else {
			if ((*(WrapperStruct00_var_1_1_Pointer))) {
				(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
			}
		}
	}


	// From: Req2Batch76Wrapper_SP
	signed char stepLocal_1 = (*(WrapperStruct00_var_1_8_Pointer));
	if (stepLocal_1 <= (*(WrapperStruct00_var_1_8_Pointer))) {
		if ((*(WrapperStruct00_var_1_1_Pointer))) {
			(*(WrapperStruct00_var_1_6_Pointer)) = (3.17 - (max (127.2 , (*(WrapperStruct00_var_1_7_Pointer)))));
		}
	}


	// From: Req4Batch76Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer))) {
		if (((*(WrapperStruct00_var_1_7_Pointer)) >= 24.2) || (*(WrapperStruct00_var_1_5_Pointer))) {
			(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) || (! (*(WrapperStruct00_var_1_13_Pointer))));
		} else {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 126);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}

int property() {
	return ((((((- 5) + last_1_WrapperStruct00_var_1_8) >= last_1_WrapperStruct00_var_1_8) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer))))) && (((*(WrapperStruct00_var_1_8_Pointer)) <= (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (3.17 - (max (127.2 , (*(WrapperStruct00_var_1_7_Pointer))))))) : 1) : 1)) && ((-25 >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (min ((*(WrapperStruct00_var_1_9_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))))) : (((*(WrapperStruct00_var_1_10_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_11_Pointer)) - 16))) : ((*(WrapperStruct00_var_1_1_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_9_Pointer)))) : 1)))) && ((*(WrapperStruct00_var_1_1_Pointer)) ? ((((*(WrapperStruct00_var_1_7_Pointer)) >= 24.2) || (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_5_Pointer)) || (! (*(WrapperStruct00_var_1_13_Pointer)))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_13_Pointer)))))
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
