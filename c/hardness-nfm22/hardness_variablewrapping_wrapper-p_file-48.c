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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 32.8;
float* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 255.675;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 5.5;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 128.75;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 4.5;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 9.25;
float* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 5;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_11 = 200;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 8;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 4;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 100;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 64;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 200;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 2;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 0;
unsigned char* var_1_19_Pointer = &(var_1_19);
unsigned long int var_1_20 = 1;
unsigned long int* var_1_20_Pointer = &(var_1_20);
signed long int var_1_21 = 64;
signed long int* var_1_21_Pointer = &(var_1_21);
unsigned char var_1_22 = 100;
unsigned char* var_1_22_Pointer = &(var_1_22);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48Wrapper_P
	if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
		if ((*(var_1_3_Pointer)) < (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) + 1.395f)) {
			(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req4Batch48Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_14_Pointer));


	// From: Req5Batch48Wrapper_P
	(*(var_1_21_Pointer)) = (*(var_1_17_Pointer));


	// From: Req6Batch48Wrapper_P
	(*(var_1_22_Pointer)) = 4;


	// From: Req3Batch48Wrapper_P
	signed long int stepLocal_0 = (*(var_1_21_Pointer));
	if ((((*(var_1_17_Pointer)) - (*(var_1_12_Pointer))) - (8 + (*(var_1_18_Pointer)))) > stepLocal_0) {
		(*(var_1_16_Pointer)) = (! (*(var_1_19_Pointer)));
	} else {
		(*(var_1_16_Pointer)) = (*(var_1_19_Pointer));
	}


	// From: Req2Batch48Wrapper_P
	if ((*(var_1_16_Pointer))) {
		if (last_1_var_1_7 != last_1_var_1_7) {
			(*(var_1_7_Pointer)) = (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) - (*(var_1_13_Pointer)));
		} else {
			(*(var_1_7_Pointer)) = ((*(var_1_11_Pointer)) - ((max ((*(var_1_14_Pointer)) , (*(var_1_15_Pointer)))) - (*(var_1_12_Pointer))));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 190);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 63);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 191);
	assume_abort_if_not(var_1_17 <= 255);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
}

int property() {
	return (((((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? (((*(var_1_3_Pointer)) < (((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) + 1.395f)) ? ((*(var_1_1_Pointer)) == ((float) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_6_Pointer))))) : ((*(var_1_1_Pointer)) == ((float) (*(var_1_6_Pointer))))) && ((*(var_1_16_Pointer)) ? ((last_1_var_1_7 != last_1_var_1_7) ? ((*(var_1_7_Pointer)) == ((unsigned char) (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) - (*(var_1_13_Pointer))))) : ((*(var_1_7_Pointer)) == ((unsigned char) ((*(var_1_11_Pointer)) - ((max ((*(var_1_14_Pointer)) , (*(var_1_15_Pointer)))) - (*(var_1_12_Pointer))))))) : 1)) && (((((*(var_1_17_Pointer)) - (*(var_1_12_Pointer))) - (8 + (*(var_1_18_Pointer)))) > (*(var_1_21_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned char) (! (*(var_1_19_Pointer))))) : ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_19_Pointer)))))) && ((*(var_1_20_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer))))) && ((*(var_1_21_Pointer)) == ((signed long int) (*(var_1_17_Pointer))))) && ((*(var_1_22_Pointer)) == ((unsigned char) 4))
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
