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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	signed long int var_1_2;
	signed long int var_1_3;
	signed long int var_1_4;
	signed long int var_1_5;
	signed long int var_1_6;
	signed char var_1_7;
	signed long int var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	signed short int var_1_12;
	signed short int var_1_13;
	signed short int var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
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
	-128,
	50,
	-1,
	0,
	10000,
	0,
	-1,
	32,
	32,
	-4,
	-4,
	-32,
	128,
	1000,
	0,
	0
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables
signed short int last_1_WrapperStruct00_var_1_12 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch59Wrapper_SP
	if ((max ((*(WrapperStruct00_var_1_2_Pointer)) , 1)) <= (256 + (*(WrapperStruct00_var_1_3_Pointer)))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((((*(WrapperStruct00_var_1_4_Pointer)) - 128) + (*(WrapperStruct00_var_1_5_Pointer))) + (*(WrapperStruct00_var_1_6_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)));
	}


	// From: Req2Batch59Wrapper_SP
	if ((*(WrapperStruct00_var_1_6_Pointer)) > ((*(WrapperStruct00_var_1_2_Pointer)) * ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))))) {
		if ((*(WrapperStruct00_var_1_8_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) {
			(*(WrapperStruct00_var_1_7_Pointer)) = (((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_11_Pointer)));
		} else {
			(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
	}


	// From: Req3Batch59Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer)) > (abs ((*(WrapperStruct00_var_1_4_Pointer))))) {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)));
	} else {
		if ((*(WrapperStruct00_var_1_15_Pointer)) || (*(WrapperStruct00_var_1_16_Pointer))) {
			if (2 < (*(WrapperStruct00_var_1_5_Pointer))) {
				(*(WrapperStruct00_var_1_12_Pointer)) = last_1_WrapperStruct00_var_1_12;
			}
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 536870912);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -536870911);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 536870911);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1073741823);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -31);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 32);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -31);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 31);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 32766);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
}

int property(void) {
	return ((((max ((*(WrapperStruct00_var_1_2_Pointer)) , 1)) <= (256 + (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((((*(WrapperStruct00_var_1_4_Pointer)) - 128) + (*(WrapperStruct00_var_1_5_Pointer))) + (*(WrapperStruct00_var_1_6_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)))))) && (((*(WrapperStruct00_var_1_6_Pointer)) > ((*(WrapperStruct00_var_1_2_Pointer)) * ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))))) ? (((*(WrapperStruct00_var_1_8_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) (((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_11_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_10_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_11_Pointer)))))) && (((*(WrapperStruct00_var_1_1_Pointer)) > (abs ((*(WrapperStruct00_var_1_4_Pointer))))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))))) : (((*(WrapperStruct00_var_1_15_Pointer)) || (*(WrapperStruct00_var_1_16_Pointer))) ? ((2 < (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) last_1_WrapperStruct00_var_1_12)) : 1) : 1))
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
