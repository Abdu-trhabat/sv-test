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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 32;
signed long int* var_1_1_Pointer = &(var_1_1);
signed char var_1_3 = -25;
signed char* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = -64;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = -1;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 50;
signed char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 10.5;
double* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 0;
unsigned char* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 50.75;
float* var_1_18_Pointer = &(var_1_18);
float var_1_19 = 32.6;
float* var_1_19_Pointer = &(var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch44Wrapper_P
	signed long int stepLocal_1 = (min ((*(var_1_4_Pointer)) , (*(var_1_3_Pointer)))) / (*(var_1_7_Pointer));
	signed long int stepLocal_0 = (*(var_1_5_Pointer)) - (*(var_1_6_Pointer));
	if ((*(var_1_4_Pointer)) > stepLocal_0) {
		if (stepLocal_1 <= (*(var_1_6_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
	}


	// From: Req4Batch44Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_19_Pointer));


	// From: Req3Batch44Wrapper_P
	if (((*(var_1_12_Pointer)) - (abs ((*(var_1_18_Pointer))))) >= (*(var_1_18_Pointer))) {
		(*(var_1_11_Pointer)) = ((((*(var_1_6_Pointer)) < (*(var_1_1_Pointer))) && (*(var_1_15_Pointer))) || ((*(var_1_16_Pointer)) || (*(var_1_17_Pointer))));
	}


	// From: Req2Batch44Wrapper_P
	signed long int stepLocal_3 = (*(var_1_1_Pointer));
	signed long int stepLocal_2 = (*(var_1_1_Pointer)) * ((*(var_1_1_Pointer)) * (*(var_1_6_Pointer)));
	if ((*(var_1_11_Pointer))) {
		if (stepLocal_3 > (*(var_1_1_Pointer))) {
			(*(var_1_8_Pointer)) = (! (*(var_1_10_Pointer)));
		} else {
			if (((*(var_1_1_Pointer)) % (*(var_1_7_Pointer))) < stepLocal_2) {
				(*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 255);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((*(var_1_4_Pointer)) > ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer)))) ? ((((min ((*(var_1_4_Pointer)) , (*(var_1_3_Pointer)))) / (*(var_1_7_Pointer))) <= (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_7_Pointer)))) : 1) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_3_Pointer))))) && ((*(var_1_11_Pointer)) ? (((*(var_1_1_Pointer)) > (*(var_1_1_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned char) (! (*(var_1_10_Pointer))))) : ((((*(var_1_1_Pointer)) % (*(var_1_7_Pointer))) < ((*(var_1_1_Pointer)) * ((*(var_1_1_Pointer)) * (*(var_1_6_Pointer))))) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_10_Pointer)))) : 1)) : 1)) && ((((*(var_1_12_Pointer)) - (abs ((*(var_1_18_Pointer))))) >= (*(var_1_18_Pointer))) ? ((*(var_1_11_Pointer)) == ((unsigned char) ((((*(var_1_6_Pointer)) < (*(var_1_1_Pointer))) && (*(var_1_15_Pointer))) || ((*(var_1_16_Pointer)) || (*(var_1_17_Pointer)))))) : 1)) && ((*(var_1_18_Pointer)) == ((float) (*(var_1_19_Pointer))))
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
