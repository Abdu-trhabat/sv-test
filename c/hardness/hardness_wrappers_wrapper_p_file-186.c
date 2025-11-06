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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = -5;
signed short int* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 15.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 50.4;
double* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 100;
signed short int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 16;
unsigned char* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 199.5;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 1000.99;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 1.8;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 0.0;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 4.2;
double* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 50;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 128;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 64;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 8;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 16;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 2;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch186Wrapper_P
	if ((*(var_1_2_Pointer)) < (*(var_1_3_Pointer))) {
		if ((*(var_1_3_Pointer)) < (*(var_1_2_Pointer))) {
			(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (abs (128)));
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
		}
	}


	// From: Req2Batch186Wrapper_P
	if ((max ((*(var_1_3_Pointer)) , (*(var_1_2_Pointer)))) > (*(var_1_6_Pointer))) {
		if (((*(var_1_3_Pointer)) / 256.8) >= (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer))) - ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))))) {
			(*(var_1_5_Pointer)) = 64;
		} else {
			(*(var_1_5_Pointer)) = (*(var_1_11_Pointer));
		}
	}


	// From: Req3Batch186Wrapper_P
	if (((*(var_1_13_Pointer)) || ((*(var_1_6_Pointer)) > (*(var_1_3_Pointer)))) || (*(var_1_14_Pointer))) {
		if ((*(var_1_14_Pointer))) {
			(*(var_1_12_Pointer)) = (((*(var_1_15_Pointer)) - ((*(var_1_16_Pointer)) + (*(var_1_17_Pointer)))) + ((*(var_1_18_Pointer)) + 8));
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_18_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427388000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 4611686.018427388000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427388000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 64);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(var_1_2_Pointer)) < (*(var_1_3_Pointer))) ? (((*(var_1_3_Pointer)) < (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_4_Pointer)) + (abs (128))))) : ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_4_Pointer))))) : 1) && (((max ((*(var_1_3_Pointer)) , (*(var_1_2_Pointer)))) > (*(var_1_6_Pointer))) ? ((((*(var_1_3_Pointer)) / 256.8) >= (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer))) - ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))))) ? ((*(var_1_5_Pointer)) == ((unsigned char) 64)) : ((*(var_1_5_Pointer)) == ((unsigned char) (*(var_1_11_Pointer))))) : 1)) && ((((*(var_1_13_Pointer)) || ((*(var_1_6_Pointer)) > (*(var_1_3_Pointer)))) || (*(var_1_14_Pointer))) ? ((*(var_1_14_Pointer)) ? ((*(var_1_12_Pointer)) == ((unsigned char) (((*(var_1_15_Pointer)) - ((*(var_1_16_Pointer)) + (*(var_1_17_Pointer)))) + ((*(var_1_18_Pointer)) + 8)))) : ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_18_Pointer))))) : 1)
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
