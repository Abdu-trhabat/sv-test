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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Wrapper_P.c", 13, "reach_error"); }
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
signed long int var_1_1 = 16;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_3 = -64;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = -4;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_6 = 128;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 2;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 32;
signed char* var_1_17_Pointer = &(var_1_17);
signed char var_1_19 = 4;
signed char* var_1_19_Pointer = &(var_1_19);
signed char var_1_20 = 50;
signed char* var_1_20_Pointer = &(var_1_20);
unsigned char var_1_21 = 1;
unsigned char* var_1_21_Pointer = &(var_1_21);
unsigned short int var_1_23 = 64;
unsigned short int* var_1_23_Pointer = &(var_1_23);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;
unsigned char last_1_var_1_21 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch85Wrapper_P
	if (last_1_var_1_21) {
		(*(var_1_1_Pointer)) = (min (((*(var_1_3_Pointer)) + (*(var_1_4_Pointer))) , -16));
	} else {
		if (last_1_var_1_8) {
			(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + -4);
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
		}
	}


	// From: Req6Batch85Wrapper_P
	signed long int stepLocal_0 = (*(var_1_7_Pointer)) * ((*(var_1_1_Pointer)) / (*(var_1_23_Pointer)));
	if (stepLocal_0 == (*(var_1_4_Pointer))) {
		if (! (*(var_1_10_Pointer))) {
			(*(var_1_21_Pointer)) = (*(var_1_12_Pointer));
		} else {
			(*(var_1_21_Pointer)) = (*(var_1_10_Pointer));
		}
	} else {
		(*(var_1_21_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req2Batch85Wrapper_P
	(*(var_1_6_Pointer)) = (min ((max (32 , (*(var_1_7_Pointer)))) , 16));


	// From: Req3Batch85Wrapper_P
	(*(var_1_8_Pointer)) = (((*(var_1_9_Pointer)) || ((*(var_1_10_Pointer)) || (*(var_1_11_Pointer)))) || (*(var_1_12_Pointer)));


	// From: Req4Batch85Wrapper_P
	(*(var_1_13_Pointer)) = (((*(var_1_14_Pointer)) && (*(var_1_15_Pointer))) && (*(var_1_16_Pointer)));


	// From: Req5Batch85Wrapper_P
	if ((*(var_1_8_Pointer))) {
		(*(var_1_17_Pointer)) = ((min ((*(var_1_19_Pointer)) , 100)) - 64);
	} else {
		(*(var_1_17_Pointer)) = ((*(var_1_19_Pointer)) - (*(var_1_20_Pointer)));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1073741823);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	assume_abort_if_not(var_1_23 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	return (((((last_1_var_1_21 ? ((*(var_1_1_Pointer)) == ((signed long int) (min (((*(var_1_3_Pointer)) + (*(var_1_4_Pointer))) , -16)))) : (last_1_var_1_8 ? ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_4_Pointer)) + -4))) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))))) && ((*(var_1_6_Pointer)) == ((unsigned char) (min ((max (32 , (*(var_1_7_Pointer)))) , 16))))) && ((*(var_1_8_Pointer)) == ((unsigned char) (((*(var_1_9_Pointer)) || ((*(var_1_10_Pointer)) || (*(var_1_11_Pointer)))) || (*(var_1_12_Pointer)))))) && ((*(var_1_13_Pointer)) == ((unsigned char) (((*(var_1_14_Pointer)) && (*(var_1_15_Pointer))) && (*(var_1_16_Pointer)))))) && ((*(var_1_8_Pointer)) ? ((*(var_1_17_Pointer)) == ((signed char) ((min ((*(var_1_19_Pointer)) , 100)) - 64))) : ((*(var_1_17_Pointer)) == ((signed char) ((*(var_1_19_Pointer)) - (*(var_1_20_Pointer))))))) && ((((*(var_1_7_Pointer)) * ((*(var_1_1_Pointer)) / (*(var_1_23_Pointer)))) == (*(var_1_4_Pointer))) ? ((! (*(var_1_10_Pointer))) ? ((*(var_1_21_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))) : ((*(var_1_21_Pointer)) == ((unsigned char) (*(var_1_10_Pointer))))) : ((*(var_1_21_Pointer)) == ((unsigned char) (*(var_1_9_Pointer)))))
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
