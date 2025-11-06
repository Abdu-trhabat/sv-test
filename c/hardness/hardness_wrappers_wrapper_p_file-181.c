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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Wrapper_P.c", 13, "reach_error"); }
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
double var_1_1 = 127.25;
double* var_1_1_Pointer = &(var_1_1);
unsigned short int var_1_2 = 0;
unsigned short int* var_1_2_Pointer = &(var_1_2);
double var_1_5 = 255.1;
double* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 50;
signed short int* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 2;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 16;
unsigned short int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = 50;
signed short int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 10000;
signed short int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = 10000;
signed short int* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 128;
signed short int* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 10;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 128;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 1;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 0;
unsigned char* var_1_19_Pointer = &(var_1_19);
float var_1_20 = 64.5;
float* var_1_20_Pointer = &(var_1_20);
double var_1_21 = 100000000000.25;
double* var_1_21_Pointer = &(var_1_21);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch181Wrapper_P
	if (last_1_var_1_18) {
		(*(var_1_6_Pointer)) = ((*(var_1_7_Pointer)) || (*(var_1_8_Pointer)));
	}


	// From: Req5Batch181Wrapper_P
	(*(var_1_18_Pointer)) = ((*(var_1_6_Pointer)) || (*(var_1_19_Pointer)));


	// From: Req1Batch181Wrapper_P
	if ((((*(var_1_2_Pointer)) > 25) && (*(var_1_18_Pointer))) && (*(var_1_18_Pointer))) {
		if ((*(var_1_18_Pointer))) {
			(*(var_1_1_Pointer)) = ((*(var_1_5_Pointer)) + 100.5);
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req3Batch181Wrapper_P
	if ((*(var_1_6_Pointer))) {
		if ((*(var_1_2_Pointer)) >= ((64753 - (*(var_1_10_Pointer))) + (*(var_1_11_Pointer)))) {
			(*(var_1_9_Pointer)) = ((*(var_1_12_Pointer)) - 128);
		}
	} else {
		(*(var_1_9_Pointer)) = ((((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))) - 1) - (*(var_1_15_Pointer)));
	}


	// From: Req4Batch181Wrapper_P
	if (((*(var_1_6_Pointer)) || (*(var_1_18_Pointer))) || (*(var_1_7_Pointer))) {
		(*(var_1_16_Pointer)) = (*(var_1_17_Pointer));
	}


	// From: Req6Batch181Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_5_Pointer));


	// From: Req7Batch181Wrapper_P
	(*(var_1_21_Pointer)) = (*(var_1_5_Pointer));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65535);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 8191);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 8191);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	return ((((((((((*(var_1_2_Pointer)) > 25) && (*(var_1_18_Pointer))) && (*(var_1_18_Pointer))) ? ((*(var_1_18_Pointer)) ? ((*(var_1_1_Pointer)) == ((double) ((*(var_1_5_Pointer)) + 100.5))) : 1) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_5_Pointer))))) && (last_1_var_1_18 ? ((*(var_1_6_Pointer)) == ((unsigned char) ((*(var_1_7_Pointer)) || (*(var_1_8_Pointer))))) : 1)) && ((*(var_1_6_Pointer)) ? (((*(var_1_2_Pointer)) >= ((64753 - (*(var_1_10_Pointer))) + (*(var_1_11_Pointer)))) ? ((*(var_1_9_Pointer)) == ((signed short int) ((*(var_1_12_Pointer)) - 128))) : 1) : ((*(var_1_9_Pointer)) == ((signed short int) ((((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))) - 1) - (*(var_1_15_Pointer))))))) && ((((*(var_1_6_Pointer)) || (*(var_1_18_Pointer))) || (*(var_1_7_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))) : 1)) && ((*(var_1_18_Pointer)) == ((unsigned char) ((*(var_1_6_Pointer)) || (*(var_1_19_Pointer)))))) && ((*(var_1_20_Pointer)) == ((float) (*(var_1_5_Pointer))))) && ((*(var_1_21_Pointer)) == ((double) (*(var_1_5_Pointer))))
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
