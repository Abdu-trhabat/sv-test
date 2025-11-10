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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Wrapper_P.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
unsigned short int* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 7.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 255.75;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 99.25;
double* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 55604;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 128;
unsigned short int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 16;
unsigned short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = -4;
signed short int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_10 = 1;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 1;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = -1;
signed long int* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 50;
signed char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch183Wrapper_P
	if (((*(var_1_2_Pointer)) / (*(var_1_3_Pointer))) >= (*(var_1_4_Pointer))) {
		(*(var_1_1_Pointer)) = (((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))) - (*(var_1_7_Pointer)));
	}


	// From: Req3Batch183Wrapper_P
	if ((*(var_1_1_Pointer)) > (*(var_1_7_Pointer))) {
		if ((*(var_1_4_Pointer)) > ((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) {
			(*(var_1_10_Pointer)) = (*(var_1_11_Pointer));
		} else {
			(*(var_1_10_Pointer)) = 0;
		}
	} else {
		(*(var_1_10_Pointer)) = ((*(var_1_11_Pointer)) && (! (*(var_1_12_Pointer))));
	}


	// From: Req4Batch183Wrapper_P
	unsigned short int stepLocal_2 = (*(var_1_5_Pointer));
	unsigned short int stepLocal_1 = (*(var_1_7_Pointer));
	if (stepLocal_1 <= (*(var_1_1_Pointer))) {
		if ((abs ((*(var_1_14_Pointer)))) < stepLocal_2) {
			(*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
		} else {
			(*(var_1_13_Pointer)) = (*(var_1_7_Pointer));
		}
	} else {
		(*(var_1_13_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req2Batch183Wrapper_P
	signed long int stepLocal_0 = max ((*(var_1_13_Pointer)) , (*(var_1_6_Pointer)));
	if ((*(var_1_5_Pointer)) >= stepLocal_0) {
		if (! (*(var_1_10_Pointer))) {
			(*(var_1_8_Pointer)) = (*(var_1_6_Pointer));
		} else {
			(*(var_1_8_Pointer)) = -4;
		}
	} else {
		(*(var_1_8_Pointer)) = (*(var_1_5_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 49150);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) / (*(var_1_3_Pointer))) >= (*(var_1_4_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))) - (*(var_1_7_Pointer))))) : 1) && (((*(var_1_5_Pointer)) >= (max ((*(var_1_13_Pointer)) , (*(var_1_6_Pointer))))) ? ((! (*(var_1_10_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed short int) (*(var_1_6_Pointer)))) : ((*(var_1_8_Pointer)) == ((signed short int) -4))) : ((*(var_1_8_Pointer)) == ((signed short int) (*(var_1_5_Pointer)))))) && (((*(var_1_1_Pointer)) > (*(var_1_7_Pointer))) ? (((*(var_1_4_Pointer)) > ((*(var_1_2_Pointer)) + (*(var_1_3_Pointer)))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_11_Pointer)))) : ((*(var_1_10_Pointer)) == ((unsigned char) 0))) : ((*(var_1_10_Pointer)) == ((unsigned char) ((*(var_1_11_Pointer)) && (! (*(var_1_12_Pointer)))))))) && (((*(var_1_7_Pointer)) <= (*(var_1_1_Pointer))) ? (((abs ((*(var_1_14_Pointer)))) < (*(var_1_5_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_14_Pointer)))) : ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_7_Pointer))))) : ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_5_Pointer)))))
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
