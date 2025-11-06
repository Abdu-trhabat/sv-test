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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47Wrapper_P.c", 13, "reach_error"); }
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
double var_1_1 = 24.575;
double* var_1_1_Pointer = &(var_1_1);
double var_1_2 = -0.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 128.5;
double* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 2;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 32;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -128;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 256;
signed long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 3.5;
double* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 16;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 16;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 4;
signed char* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 8;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 3.8;
double* var_1_15_Pointer = &(var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch47Wrapper_P
	if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
		if (((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))) >= ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) {
			(*(var_1_1_Pointer)) = (abs ((*(var_1_8_Pointer))));
		}
	} else {
		if ((*(var_1_6_Pointer)) > (*(var_1_7_Pointer))) {
			(*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
		}
	}


	// From: Req3Batch47Wrapper_P
	unsigned char stepLocal_0 = ! (*(var_1_13_Pointer));
	if (stepLocal_0 || (*(var_1_14_Pointer))) {
		if (! (*(var_1_14_Pointer))) {
			(*(var_1_12_Pointer)) = (abs (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer)))));
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_5_Pointer));
		}
	}


	// From: Req4Batch47Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_8_Pointer));


	// From: Req2Batch47Wrapper_P
	if (-4 > (*(var_1_12_Pointer))) {
		if ((~ (*(var_1_12_Pointer))) <= (*(var_1_12_Pointer))) {
			(*(var_1_9_Pointer)) = (abs ((*(var_1_10_Pointer)) + (*(var_1_11_Pointer))));
		}
	} else {
		(*(var_1_9_Pointer)) = (*(var_1_10_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? ((((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))) >= ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) ? ((*(var_1_1_Pointer)) == ((double) (abs ((*(var_1_8_Pointer)))))) : 1) : (((*(var_1_6_Pointer)) > (*(var_1_7_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) (*(var_1_8_Pointer)))) : 1)) && ((-4 > (*(var_1_12_Pointer))) ? (((~ (*(var_1_12_Pointer))) <= (*(var_1_12_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed char) (abs ((*(var_1_10_Pointer)) + (*(var_1_11_Pointer)))))) : 1) : ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_10_Pointer)))))) && (((! (*(var_1_13_Pointer))) || (*(var_1_14_Pointer))) ? ((! (*(var_1_14_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed long int) (abs (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer))))))) : ((*(var_1_12_Pointer)) == ((signed long int) (*(var_1_5_Pointer))))) : 1)) && ((*(var_1_15_Pointer)) == ((double) (*(var_1_8_Pointer))))
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
