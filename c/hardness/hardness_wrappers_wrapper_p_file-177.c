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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Wrapper_P.c", 13, "reach_error"); }
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
double var_1_1 = 32.5;
double* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_2 = 128;
unsigned short int* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 8;
unsigned short int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = -64;
signed long int* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 127.5;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 31.124;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 15.125;
double* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 5;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 256;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 5;
unsigned short int* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 1000000000.6;
double* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 54889;
unsigned short int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = -1;
signed short int* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch177Wrapper_P
	signed long int stepLocal_2 = min (5 , ((*(var_1_2_Pointer)) * (*(var_1_3_Pointer))));
	signed long int stepLocal_1 = (*(var_1_2_Pointer)) * ((*(var_1_3_Pointer)) * 50);
	unsigned short int stepLocal_0 = (*(var_1_3_Pointer));
	if (stepLocal_2 <= (*(var_1_4_Pointer))) {
		if ((*(var_1_2_Pointer)) > stepLocal_0) {
			if ((- (*(var_1_4_Pointer))) == stepLocal_1) {
				(*(var_1_1_Pointer)) = (max (((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))) , (*(var_1_7_Pointer))));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req2Batch177Wrapper_P
	if (((*(var_1_2_Pointer)) * (*(var_1_4_Pointer))) >= -32) {
		(*(var_1_8_Pointer)) = (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) + 64);
	} else {
		(*(var_1_8_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req3Batch177Wrapper_P
	unsigned short int stepLocal_4 = (*(var_1_9_Pointer));
	unsigned short int stepLocal_3 = (*(var_1_8_Pointer));
	if ((*(var_1_10_Pointer)) >= stepLocal_3) {
		if (stepLocal_4 < (((*(var_1_12_Pointer)) - (*(var_1_10_Pointer))) << (*(var_1_8_Pointer)))) {
			(*(var_1_11_Pointer)) = (*(var_1_7_Pointer));
		}
	}


	// From: Req4Batch177Wrapper_P
	(*(var_1_13_Pointer)) = (*(var_1_10_Pointer));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16384);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 32767);
	assume_abort_if_not(var_1_12 <= 65535);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((min (5 , ((*(var_1_2_Pointer)) * (*(var_1_3_Pointer))))) <= (*(var_1_4_Pointer))) ? (((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? (((- (*(var_1_4_Pointer))) == ((*(var_1_2_Pointer)) * ((*(var_1_3_Pointer)) * 50))) ? ((*(var_1_1_Pointer)) == ((double) (max (((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))) , (*(var_1_7_Pointer)))))) : 1) : 1) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_6_Pointer))))) && ((((*(var_1_2_Pointer)) * (*(var_1_4_Pointer))) >= -32) ? ((*(var_1_8_Pointer)) == ((unsigned short int) (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) + 64))) : ((*(var_1_8_Pointer)) == ((unsigned short int) (*(var_1_9_Pointer)))))) && (((*(var_1_10_Pointer)) >= (*(var_1_8_Pointer))) ? (((*(var_1_9_Pointer)) < (((*(var_1_12_Pointer)) - (*(var_1_10_Pointer))) << (*(var_1_8_Pointer)))) ? ((*(var_1_11_Pointer)) == ((double) (*(var_1_7_Pointer)))) : 1) : 1)) && ((*(var_1_13_Pointer)) == ((signed short int) (*(var_1_10_Pointer))))
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
