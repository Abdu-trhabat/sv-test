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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Wrapper_P.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 8;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 8;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 1000;
unsigned long int* var_1_6_Pointer = &(var_1_6);
unsigned long int var_1_7 = 64;
unsigned long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 4.75;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 99.25;
double* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = -2;
signed long int* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = 256;
signed long int* var_1_17_Pointer = &(var_1_17);
signed long int var_1_18 = 1504831784;
signed long int* var_1_18_Pointer = &(var_1_18);
double var_1_19 = 256.75;
double* var_1_19_Pointer = &(var_1_19);
double var_1_20 = 16.75;
double* var_1_20_Pointer = &(var_1_20);
double var_1_21 = 128.79;
double* var_1_21_Pointer = &(var_1_21);
double var_1_22 = 9.5;
double* var_1_22_Pointer = &(var_1_22);
double var_1_23 = 1.4;
double* var_1_23_Pointer = &(var_1_23);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch117Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_11_Pointer));
	if ((*(var_1_4_Pointer)) && stepLocal_0) {
		(*(var_1_10_Pointer)) = (((*(var_1_12_Pointer)) || (*(var_1_13_Pointer))) || ((*(var_1_14_Pointer)) || (*(var_1_15_Pointer))));
	}


	// From: Req5Batch117Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_14_Pointer));
	if ((*(var_1_13_Pointer)) && stepLocal_1) {
		(*(var_1_19_Pointer)) = (min (((*(var_1_20_Pointer)) - (*(var_1_21_Pointer))) , (max ((max ((*(var_1_9_Pointer)) , (*(var_1_22_Pointer)))) , (*(var_1_23_Pointer))))));
	} else {
		(*(var_1_19_Pointer)) = (*(var_1_21_Pointer));
	}


	// From: Req1Batch117Wrapper_P
	if (((*(var_1_5_Pointer)) >= (*(var_1_6_Pointer))) || (*(var_1_10_Pointer))) {
		if ((*(var_1_10_Pointer))) {
			(*(var_1_1_Pointer)) = 4u;
		} else {
			(*(var_1_1_Pointer)) = (max ((*(var_1_7_Pointer)) , 32u));
		}
	}


	// From: Req2Batch117Wrapper_P
	if ((*(var_1_10_Pointer))) {
		(*(var_1_8_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req4Batch117Wrapper_P
	if ((- (*(var_1_9_Pointer))) < (*(var_1_19_Pointer))) {
		(*(var_1_16_Pointer)) = ((*(var_1_17_Pointer)) - ((*(var_1_18_Pointer)) - 5));
	} else {
		(*(var_1_16_Pointer)) = (32 - (*(var_1_18_Pointer)));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483646);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((*(var_1_5_Pointer)) >= (*(var_1_6_Pointer))) || (*(var_1_10_Pointer))) ? ((*(var_1_10_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned long int) 4u)) : ((*(var_1_1_Pointer)) == ((unsigned long int) (max ((*(var_1_7_Pointer)) , 32u))))) : 1) && ((*(var_1_10_Pointer)) ? ((*(var_1_8_Pointer)) == ((double) (*(var_1_9_Pointer)))) : 1)) && (((*(var_1_4_Pointer)) && (*(var_1_11_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (((*(var_1_12_Pointer)) || (*(var_1_13_Pointer))) || ((*(var_1_14_Pointer)) || (*(var_1_15_Pointer)))))) : 1)) && (((- (*(var_1_9_Pointer))) < (*(var_1_19_Pointer))) ? ((*(var_1_16_Pointer)) == ((signed long int) ((*(var_1_17_Pointer)) - ((*(var_1_18_Pointer)) - 5)))) : ((*(var_1_16_Pointer)) == ((signed long int) (32 - (*(var_1_18_Pointer))))))) && (((*(var_1_13_Pointer)) && (*(var_1_14_Pointer))) ? ((*(var_1_19_Pointer)) == ((double) (min (((*(var_1_20_Pointer)) - (*(var_1_21_Pointer))) , (max ((max ((*(var_1_9_Pointer)) , (*(var_1_22_Pointer)))) , (*(var_1_23_Pointer)))))))) : ((*(var_1_19_Pointer)) == ((double) (*(var_1_21_Pointer)))))
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
