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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	signed char var_1_4;
	signed char var_1_5;
	unsigned char var_1_6;
	unsigned short int var_1_7;
	unsigned short int var_1_8;
	signed short int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
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
	1,
	5,
	8,
	1,
	128,
	4,
	-256,
	0,
	1,
	0
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_6 = 1;
unsigned char last_1_WrapperStruct00_var_1_10 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch147Wrapper_SP
	if (last_1_WrapperStruct00_var_1_10 || last_1_WrapperStruct00_var_1_6) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_4_Pointer)) - 50) + (*(WrapperStruct00_var_1_5_Pointer)));
	}


	// From: Req3Batch147Wrapper_SP
	if ((128 | (*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))) {
		if ((((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) + (50 << (*(WrapperStruct00_var_1_5_Pointer)))) > -128) {
			(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
		} else {
			(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
	}


	// From: Req4Batch147Wrapper_SP
	if ((*(WrapperStruct00_var_1_8_Pointer)) > ((*(WrapperStruct00_var_1_7_Pointer)) + ((*(WrapperStruct00_var_1_9_Pointer)) & (*(WrapperStruct00_var_1_4_Pointer))))) {
		if ((4 / (*(WrapperStruct00_var_1_7_Pointer))) <= (*(WrapperStruct00_var_1_4_Pointer))) {
			(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		} else {
			(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
	}


	// From: Req2Batch147Wrapper_SP
	signed char stepLocal_0 = (*(WrapperStruct00_var_1_5_Pointer));
	if (((10 / (*(WrapperStruct00_var_1_7_Pointer))) / (*(WrapperStruct00_var_1_8_Pointer))) >= stepLocal_0) {
		(*(WrapperStruct00_var_1_6_Pointer)) = 1;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 63);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 63);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 0);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}

int property(void) {
	return ((((last_1_WrapperStruct00_var_1_10 || last_1_WrapperStruct00_var_1_6) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (((*(WrapperStruct00_var_1_4_Pointer)) - 50) + (*(WrapperStruct00_var_1_5_Pointer))))) : 1) && ((((10 / (*(WrapperStruct00_var_1_7_Pointer))) / (*(WrapperStruct00_var_1_8_Pointer))) >= (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) 1)) : 1)) && (((128 | (*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))) ? (((((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) + (50 << (*(WrapperStruct00_var_1_5_Pointer)))) > -128) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_1_Pointer)))))) && (((*(WrapperStruct00_var_1_8_Pointer)) > ((*(WrapperStruct00_var_1_7_Pointer)) + ((*(WrapperStruct00_var_1_9_Pointer)) & (*(WrapperStruct00_var_1_4_Pointer))))) ? (((4 / (*(WrapperStruct00_var_1_7_Pointer))) <= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))))
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
