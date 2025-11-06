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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct0;

struct WrapperStruct0 {
	unsigned long int var_1_1;
	unsigned short int var_1_3;
	unsigned char var_1_5;
	unsigned char var_1_7;
	unsigned long int var_1_8;
	unsigned long int var_1_9;
	unsigned long int var_1_10;
	double var_1_11;
	double var_1_12;
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
struct WrapperStruct0 WrapperStruct0 = {
	64,
	32,
	0,
	0,
	256,
	32,
	4,
	64.375,
	5.8
};
unsigned long int* WrapperStruct0_var_1_1_Pointer = &(WrapperStruct0.var_1_1);
unsigned short int* WrapperStruct0_var_1_3_Pointer = &(WrapperStruct0.var_1_3);
unsigned char* WrapperStruct0_var_1_5_Pointer = &(WrapperStruct0.var_1_5);
unsigned char* WrapperStruct0_var_1_7_Pointer = &(WrapperStruct0.var_1_7);
unsigned long int* WrapperStruct0_var_1_8_Pointer = &(WrapperStruct0.var_1_8);
unsigned long int* WrapperStruct0_var_1_9_Pointer = &(WrapperStruct0.var_1_9);
unsigned long int* WrapperStruct0_var_1_10_Pointer = &(WrapperStruct0.var_1_10);
double* WrapperStruct0_var_1_11_Pointer = &(WrapperStruct0.var_1_11);
double* WrapperStruct0_var_1_12_Pointer = &(WrapperStruct0.var_1_12);

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct0_var_1_1 = 64;
unsigned long int last_1_WrapperStruct0_var_1_8 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch191Wrapper_SP
	unsigned long int stepLocal_0 = last_1_WrapperStruct0_var_1_8 / (*(WrapperStruct0_var_1_3_Pointer));
	if (stepLocal_0 == last_1_WrapperStruct0_var_1_1) {
		(*(WrapperStruct0_var_1_1_Pointer)) = (max (25u , last_1_WrapperStruct0_var_1_8));
	} else {
		(*(WrapperStruct0_var_1_1_Pointer)) = last_1_WrapperStruct0_var_1_8;
	}


	// From: Req3Batch191Wrapper_SP
	unsigned long int stepLocal_2 = (*(WrapperStruct0_var_1_1_Pointer)) ^ (256u / (*(WrapperStruct0_var_1_3_Pointer)));
	if (stepLocal_2 < (*(WrapperStruct0_var_1_1_Pointer))) {
		(*(WrapperStruct0_var_1_8_Pointer)) = (((*(WrapperStruct0_var_1_1_Pointer)) + (*(WrapperStruct0_var_1_3_Pointer))) + (min ((*(WrapperStruct0_var_1_9_Pointer)) , (*(WrapperStruct0_var_1_10_Pointer)))));
	} else {
		(*(WrapperStruct0_var_1_8_Pointer)) = (min ((*(WrapperStruct0_var_1_1_Pointer)) , ((*(WrapperStruct0_var_1_10_Pointer)) + (*(WrapperStruct0_var_1_3_Pointer)))));
	}


	// From: Req2Batch191Wrapper_SP
	unsigned long int stepLocal_1 = - 64u;
	if (stepLocal_1 >= (*(WrapperStruct0_var_1_3_Pointer))) {
		(*(WrapperStruct0_var_1_5_Pointer)) = (! (*(WrapperStruct0_var_1_7_Pointer)));
	}


	// From: Req4Batch191Wrapper_SP
	unsigned long int stepLocal_4 = abs ((*(WrapperStruct0_var_1_1_Pointer)));
	unsigned long int stepLocal_3 = max ((*(WrapperStruct0_var_1_8_Pointer)) , (- 2));
	if (stepLocal_3 < ((*(WrapperStruct0_var_1_9_Pointer)) - (*(WrapperStruct0_var_1_3_Pointer)))) {
		if ((*(WrapperStruct0_var_1_9_Pointer)) <= stepLocal_4) {
			(*(WrapperStruct0_var_1_11_Pointer)) = (*(WrapperStruct0_var_1_12_Pointer));
		}
	} else {
		(*(WrapperStruct0_var_1_11_Pointer)) = (*(WrapperStruct0_var_1_12_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct0.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct0.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct0.var_1_3 <= 65535);
	assume_abort_if_not(WrapperStruct0.var_1_3 != 0);
	WrapperStruct0.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct0.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct0.var_1_7 <= 0);
	WrapperStruct0.var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct0.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct0.var_1_9 <= 2147483647);
	WrapperStruct0.var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct0.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct0.var_1_10 <= 2147483647);
	WrapperStruct0.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct0.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct0.var_1_12 <= -1.0e-20F) || (WrapperStruct0.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct0.var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct0_var_1_1 = WrapperStruct0.var_1_1;
	last_1_WrapperStruct0_var_1_8 = WrapperStruct0.var_1_8;
}

int property(void) {
	return (((((last_1_WrapperStruct0_var_1_8 / (*(WrapperStruct0_var_1_3_Pointer))) == last_1_WrapperStruct0_var_1_1) ? ((*(WrapperStruct0_var_1_1_Pointer)) == ((unsigned long int) (max (25u , last_1_WrapperStruct0_var_1_8)))) : ((*(WrapperStruct0_var_1_1_Pointer)) == ((unsigned long int) last_1_WrapperStruct0_var_1_8))) && (((- 64u) >= (*(WrapperStruct0_var_1_3_Pointer))) ? ((*(WrapperStruct0_var_1_5_Pointer)) == ((unsigned char) (! (*(WrapperStruct0_var_1_7_Pointer))))) : 1)) && ((((*(WrapperStruct0_var_1_1_Pointer)) ^ (256u / (*(WrapperStruct0_var_1_3_Pointer)))) < (*(WrapperStruct0_var_1_1_Pointer))) ? ((*(WrapperStruct0_var_1_8_Pointer)) == ((unsigned long int) (((*(WrapperStruct0_var_1_1_Pointer)) + (*(WrapperStruct0_var_1_3_Pointer))) + (min ((*(WrapperStruct0_var_1_9_Pointer)) , (*(WrapperStruct0_var_1_10_Pointer))))))) : ((*(WrapperStruct0_var_1_8_Pointer)) == ((unsigned long int) (min ((*(WrapperStruct0_var_1_1_Pointer)) , ((*(WrapperStruct0_var_1_10_Pointer)) + (*(WrapperStruct0_var_1_3_Pointer))))))))) && (((max ((*(WrapperStruct0_var_1_8_Pointer)) , (- 2))) < ((*(WrapperStruct0_var_1_9_Pointer)) - (*(WrapperStruct0_var_1_3_Pointer)))) ? (((*(WrapperStruct0_var_1_9_Pointer)) <= (abs ((*(WrapperStruct0_var_1_1_Pointer))))) ? ((*(WrapperStruct0_var_1_11_Pointer)) == ((double) (*(WrapperStruct0_var_1_12_Pointer)))) : 1) : ((*(WrapperStruct0_var_1_11_Pointer)) == ((double) (*(WrapperStruct0_var_1_12_Pointer)))))
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
