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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	double var_1_2;
	double var_1_3;
	unsigned char var_1_4;
	double var_1_5;
	unsigned long int var_1_6;
	unsigned long int var_1_7;
	unsigned long int var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	signed char var_1_12;
	unsigned short int var_1_13;
	signed short int var_1_14;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	64.5,
	8.5,
	3.2,
	0,
	100000000.4,
	64,
	8,
	16,
	64,
	100,
	2,
	5,
	8,
	-8
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch124Wrapper_SP
	unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_4_Pointer));
	if (! ((*(WrapperStruct00_var_1_2_Pointer)) == (15.2 + (*(WrapperStruct00_var_1_3_Pointer))))) {
		if (stepLocal_0 && ((*(WrapperStruct00_var_1_2_Pointer)) == (*(WrapperStruct00_var_1_3_Pointer)))) {
			if ((*(WrapperStruct00_var_1_4_Pointer))) {
				(*(WrapperStruct00_var_1_1_Pointer)) = (2.5 - (*(WrapperStruct00_var_1_5_Pointer)));
			} else {
				(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
			}
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
	}


	// From: Req2Batch124Wrapper_SP
	(*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer)));


	// From: Req3Batch124Wrapper_SP
	unsigned long int stepLocal_1 = max ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_7_Pointer)));
	if ((abs ((*(WrapperStruct00_var_1_6_Pointer)))) < stepLocal_1) {
		(*(WrapperStruct00_var_1_9_Pointer)) = (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) - (abs ((*(WrapperStruct00_var_1_12_Pointer)))));
	}


	// From: Req5Batch124Wrapper_SP
	(*(WrapperStruct00_var_1_14_Pointer)) = 16;


	// From: Req4Batch124Wrapper_SP
	if ((*(WrapperStruct00_var_1_4_Pointer))) {
		if ((*(WrapperStruct00_var_1_5_Pointer)) > 99.4) {
			if ((*(WrapperStruct00_var_1_14_Pointer)) >= (*(WrapperStruct00_var_1_6_Pointer))) {
				(*(WrapperStruct00_var_1_13_Pointer)) = (min ((*(WrapperStruct00_var_1_10_Pointer)) , 256));
			}
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 62);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -126);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((! ((*(WrapperStruct00_var_1_2_Pointer)) == (15.2 + (*(WrapperStruct00_var_1_3_Pointer))))) ? (((*(WrapperStruct00_var_1_4_Pointer)) && ((*(WrapperStruct00_var_1_2_Pointer)) == (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (2.5 - (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_5_Pointer))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_5_Pointer))))) && ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer)))))) && (((abs ((*(WrapperStruct00_var_1_6_Pointer)))) < (max ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_7_Pointer))))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) - (abs ((*(WrapperStruct00_var_1_12_Pointer))))))) : 1)) && ((*(WrapperStruct00_var_1_4_Pointer)) ? (((*(WrapperStruct00_var_1_5_Pointer)) > 99.4) ? (((*(WrapperStruct00_var_1_14_Pointer)) >= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned short int) (min ((*(WrapperStruct00_var_1_10_Pointer)) , 256)))) : 1) : 1) : 1)) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed short int) 16))
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
