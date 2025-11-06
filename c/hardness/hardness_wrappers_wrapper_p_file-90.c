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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = 25;
signed short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed short int var_1_3 = 0;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 1;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 10;
signed short int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 2;
unsigned long int* var_1_6_Pointer = &(var_1_6);
unsigned long int var_1_7 = 2762957886;
unsigned long int* var_1_7_Pointer = &(var_1_7);
unsigned long int var_1_8 = 2;
unsigned long int* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_10 = 0;
unsigned long int* var_1_10_Pointer = &(var_1_10);
unsigned long int var_1_11 = 25;
unsigned long int* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 16.9;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 9.875;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 4.6;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 9.375;
double* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 128;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 64;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch90Wrapper_P
	if ((*(var_1_2_Pointer))) {
		(*(var_1_1_Pointer)) = (min (((*(var_1_3_Pointer)) + (*(var_1_4_Pointer))) , (*(var_1_5_Pointer))));
	}


	// From: Req3Batch90Wrapper_P
	if (! (*(var_1_2_Pointer))) {
		if (((max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer)))) - (*(var_1_14_Pointer))) >= (- (32.25 * (*(var_1_15_Pointer))))) {
			if ((*(var_1_2_Pointer))) {
				(*(var_1_11_Pointer)) = (*(var_1_10_Pointer));
			} else {
				(*(var_1_11_Pointer)) = (*(var_1_8_Pointer));
			}
		} else {
			(*(var_1_11_Pointer)) = (*(var_1_8_Pointer));
		}
	} else {
		(*(var_1_11_Pointer)) = (*(var_1_10_Pointer));
	}


	// From: Req4Batch90Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_17_Pointer));


	// From: Req5Batch90Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_17_Pointer));


	// From: Req2Batch90Wrapper_P
	unsigned long int stepLocal_1 = (*(var_1_7_Pointer)) - (*(var_1_8_Pointer));
	signed short int stepLocal_0 = (*(var_1_1_Pointer));
	if (stepLocal_0 != (min ((*(var_1_3_Pointer)) , (*(var_1_5_Pointer))))) {
		if (stepLocal_1 >= (*(var_1_11_Pointer))) {
			if ((*(var_1_2_Pointer))) {
				(*(var_1_6_Pointer)) = (*(var_1_8_Pointer));
			} else {
				(*(var_1_6_Pointer)) = (*(var_1_10_Pointer));
			}
		} else {
			(*(var_1_6_Pointer)) = (*(var_1_8_Pointer));
		}
	} else {
		(*(var_1_6_Pointer)) = (*(var_1_8_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 2147483647);
	assume_abort_if_not(var_1_7 <= 4294967295);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed short int) (min (((*(var_1_3_Pointer)) + (*(var_1_4_Pointer))) , (*(var_1_5_Pointer)))))) : 1) && (((*(var_1_1_Pointer)) != (min ((*(var_1_3_Pointer)) , (*(var_1_5_Pointer))))) ? ((((*(var_1_7_Pointer)) - (*(var_1_8_Pointer))) >= (*(var_1_11_Pointer))) ? ((*(var_1_2_Pointer)) ? ((*(var_1_6_Pointer)) == ((unsigned long int) (*(var_1_8_Pointer)))) : ((*(var_1_6_Pointer)) == ((unsigned long int) (*(var_1_10_Pointer))))) : ((*(var_1_6_Pointer)) == ((unsigned long int) (*(var_1_8_Pointer))))) : ((*(var_1_6_Pointer)) == ((unsigned long int) (*(var_1_8_Pointer)))))) && ((! (*(var_1_2_Pointer))) ? ((((max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer)))) - (*(var_1_14_Pointer))) >= (- (32.25 * (*(var_1_15_Pointer))))) ? ((*(var_1_2_Pointer)) ? ((*(var_1_11_Pointer)) == ((unsigned long int) (*(var_1_10_Pointer)))) : ((*(var_1_11_Pointer)) == ((unsigned long int) (*(var_1_8_Pointer))))) : ((*(var_1_11_Pointer)) == ((unsigned long int) (*(var_1_8_Pointer))))) : ((*(var_1_11_Pointer)) == ((unsigned long int) (*(var_1_10_Pointer)))))) && ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_17_Pointer))))) && ((*(var_1_18_Pointer)) == ((unsigned char) (*(var_1_17_Pointer))))
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
