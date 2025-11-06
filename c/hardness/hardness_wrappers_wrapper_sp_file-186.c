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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	double var_1_2;
	double var_1_3;
	signed short int var_1_4;
	unsigned char var_1_5;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
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
	-5,
	15.5,
	50.4,
	100,
	16,
	199.5,
	1000.99,
	1.8,
	0.0,
	4.2,
	50,
	128,
	1,
	0,
	64,
	8,
	16,
	2
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch186Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) {
		if ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_2_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (abs (128)));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
		}
	}


	// From: Req2Batch186Wrapper_SP
	if ((max ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_2_Pointer)))) > (*(WrapperStruct00_var_1_6_Pointer))) {
		if (((*(WrapperStruct00_var_1_3_Pointer)) / 256.8) >= (((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) - ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) {
			(*(WrapperStruct00_var_1_5_Pointer)) = 64;
		} else {
			(*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		}
	}


	// From: Req3Batch186Wrapper_SP
	if (((*(WrapperStruct00_var_1_13_Pointer)) || ((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_3_Pointer)))) || (*(WrapperStruct00_var_1_14_Pointer))) {
		if ((*(WrapperStruct00_var_1_14_Pointer))) {
			(*(WrapperStruct00_var_1_12_Pointer)) = (((*(WrapperStruct00_var_1_15_Pointer)) - ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_17_Pointer)))) + ((*(WrapperStruct00_var_1_18_Pointer)) + 8));
		} else {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 4611686.018427388000e+12F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 63);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 32);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 31);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 64);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(WrapperStruct00_var_1_2_Pointer)) < (*(WrapperStruct00_var_1_3_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_4_Pointer)) + (abs (128))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_4_Pointer))))) : 1) && (((max ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_2_Pointer)))) > (*(WrapperStruct00_var_1_6_Pointer))) ? ((((*(WrapperStruct00_var_1_3_Pointer)) / 256.8) >= (((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) - ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) 64)) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer))))) : 1)) && ((((*(WrapperStruct00_var_1_13_Pointer)) || ((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_3_Pointer)))) || (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_14_Pointer)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_15_Pointer)) - ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_17_Pointer)))) + ((*(WrapperStruct00_var_1_18_Pointer)) + 8)))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer))))) : 1)
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
