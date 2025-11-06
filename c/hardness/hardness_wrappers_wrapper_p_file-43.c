// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 64;
signed short int* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 4.5;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 64.8;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 64.4;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 0.2;
float* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = 10000;
signed short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 1;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 50;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 8;
signed short int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = 5;
signed short int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 2;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 100;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 100;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 128;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 2;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 1;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 0;
unsigned char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 2;
unsigned char* var_1_20_Pointer = &(var_1_20);
unsigned long int var_1_21 = 32;
unsigned long int* var_1_21_Pointer = &(var_1_21);
unsigned short int var_1_22 = 4;
unsigned short int* var_1_22_Pointer = &(var_1_22);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch43Wrapper_P
	signed long int stepLocal_1 = -25;
	signed long int stepLocal_0 = (*(var_1_9_Pointer)) << (*(var_1_10_Pointer));
	if ((*(var_1_12_Pointer)) > stepLocal_0) {
		if (((*(var_1_9_Pointer)) / (*(var_1_7_Pointer))) > stepLocal_1) {
			(*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
		} else {
			(*(var_1_13_Pointer)) = 100;
		}
	}


	// From: Req3Batch43Wrapper_P
	(*(var_1_15_Pointer)) = (abs ((*(var_1_16_Pointer)) - (*(var_1_17_Pointer))));


	// From: Req4Batch43Wrapper_P
	if ((*(var_1_6_Pointer))) {
		(*(var_1_18_Pointer)) = ((*(var_1_11_Pointer)) && (*(var_1_19_Pointer)));
	}


	// From: Req5Batch43Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_16_Pointer));


	// From: Req6Batch43Wrapper_P
	(*(var_1_21_Pointer)) = (*(var_1_9_Pointer));


	// From: Req7Batch43Wrapper_P
	(*(var_1_22_Pointer)) = 10;


	// From: Req1Batch43Wrapper_P
	if ((*(var_1_2_Pointer)) != (max ((*(var_1_3_Pointer)) , ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))))) {
		if ((*(var_1_18_Pointer))) {
			(*(var_1_1_Pointer)) = ((((*(var_1_7_Pointer)) - 32) + ((*(var_1_8_Pointer)) + (*(var_1_9_Pointer)))) - (*(var_1_10_Pointer)));
		}
	} else {
		if ((*(var_1_18_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_12_Pointer));
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 8192);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 8191);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((*(var_1_2_Pointer)) != (max ((*(var_1_3_Pointer)) , ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))))) ? ((*(var_1_18_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) ((((*(var_1_7_Pointer)) - 32) + ((*(var_1_8_Pointer)) + (*(var_1_9_Pointer)))) - (*(var_1_10_Pointer))))) : 1) : ((*(var_1_18_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_12_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_8_Pointer)))))) && (((*(var_1_12_Pointer)) > ((*(var_1_9_Pointer)) << (*(var_1_10_Pointer)))) ? ((((*(var_1_9_Pointer)) / (*(var_1_7_Pointer))) > -25) ? ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_14_Pointer)))) : ((*(var_1_13_Pointer)) == ((unsigned char) 100))) : 1)) && ((*(var_1_15_Pointer)) == ((unsigned char) (abs ((*(var_1_16_Pointer)) - (*(var_1_17_Pointer))))))) && ((*(var_1_6_Pointer)) ? ((*(var_1_18_Pointer)) == ((unsigned char) ((*(var_1_11_Pointer)) && (*(var_1_19_Pointer))))) : 1)) && ((*(var_1_20_Pointer)) == ((unsigned char) (*(var_1_16_Pointer))))) && ((*(var_1_21_Pointer)) == ((unsigned long int) (*(var_1_9_Pointer))))) && ((*(var_1_22_Pointer)) == ((unsigned short int) 10))
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
