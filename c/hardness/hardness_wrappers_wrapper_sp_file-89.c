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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_3;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	signed char var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	unsigned char var_1_11;
	signed long int var_1_13;
	unsigned short int var_1_14;
	unsigned short int var_1_15;
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
	0,
	4,
	0,
	1,
	0,
	-1,
	-1,
	-50,
	0,
	100,
	16,
	25
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch89Wrapper_SP
	(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));


	// From: Req6Batch89Wrapper_SP
	(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));


	// From: Req2Batch89Wrapper_SP
	unsigned short int stepLocal_0 = (*(WrapperStruct00_var_1_15_Pointer));
	if ((*(WrapperStruct00_var_1_13_Pointer)) > stepLocal_0) {
		(*(WrapperStruct00_var_1_8_Pointer)) = (min ((-4 + (*(WrapperStruct00_var_1_9_Pointer))) , (*(WrapperStruct00_var_1_10_Pointer))));
	}


	// From: Req5Batch89Wrapper_SP
	(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));


	// From: Req1Batch89Wrapper_SP
	if (((*(WrapperStruct00_var_1_14_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_13_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) && (*(WrapperStruct00_var_1_6_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) && (*(WrapperStruct00_var_1_7_Pointer)));
	}


	// From: Req3Batch89Wrapper_SP
	if (((*(WrapperStruct00_var_1_15_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) > (*(WrapperStruct00_var_1_10_Pointer))) {
		if ((*(WrapperStruct00_var_1_7_Pointer)) && (*(WrapperStruct00_var_1_1_Pointer))) {
			if ((*(WrapperStruct00_var_1_8_Pointer)) < (*(WrapperStruct00_var_1_14_Pointer))) {
				if ((*(WrapperStruct00_var_1_3_Pointer)) <= (8 ^ (*(WrapperStruct00_var_1_8_Pointer)))) {
					(*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
				} else {
					(*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) && (! (*(WrapperStruct00_var_1_7_Pointer))));
				}
			} else {
				(*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
			}
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((*(WrapperStruct00_var_1_14_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_13_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_5_Pointer)) && (*(WrapperStruct00_var_1_6_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_5_Pointer)) && (*(WrapperStruct00_var_1_7_Pointer)))))) && (((*(WrapperStruct00_var_1_13_Pointer)) > (*(WrapperStruct00_var_1_15_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (min ((-4 + (*(WrapperStruct00_var_1_9_Pointer))) , (*(WrapperStruct00_var_1_10_Pointer)))))) : 1)) && ((((*(WrapperStruct00_var_1_15_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) > (*(WrapperStruct00_var_1_10_Pointer))) ? (((*(WrapperStruct00_var_1_7_Pointer)) && (*(WrapperStruct00_var_1_1_Pointer))) ? (((*(WrapperStruct00_var_1_8_Pointer)) < (*(WrapperStruct00_var_1_14_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) <= (8 ^ (*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_5_Pointer)) && (! (*(WrapperStruct00_var_1_7_Pointer))))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer))))) : 1) : 1)) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_10_Pointer))))) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_15_Pointer))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_3_Pointer))))
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
