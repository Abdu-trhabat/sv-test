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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed long int var_1_2 = 1238955036;
signed long int var_1_3 = 200;
signed long int var_1_4 = -32;
signed long int var_1_5 = 16;
signed long int var_1_6 = 64;
signed long int var_1_7 = -64;
signed long int var_1_8 = -5;
unsigned char var_1_9 = 0;
signed char var_1_10 = 8;
unsigned char var_1_11 = 1;
signed char var_1_12 = -50;
signed char var_1_13 = 5;
signed short int var_1_14 = 64;
signed short int var_1_15 = -50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch150normal
	signed long int stepLocal_1 = var_1_6;
	signed long int stepLocal_0 = (var_1_5 % var_1_6) + var_1_7;
	if ((var_1_2 * (min (var_1_4 , var_1_3))) <= stepLocal_0) {
		if (stepLocal_1 >= (max (var_1_8 , var_1_2))) {
			var_1_1 = (((var_1_5 % var_1_6) >= (-4 + var_1_2)) && var_1_9);
		} else {
			var_1_1 = 1;
		}
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req2Batch150normal
	unsigned char stepLocal_2 = var_1_11;
	if (var_1_9) {
		if (var_1_1 || stepLocal_2) {
			var_1_10 = (min ((var_1_12 + (-5 + var_1_13)) , -4));
		} else {
			var_1_10 = var_1_12;
		}
	} else {
		var_1_10 = var_1_13;
	}


	// From: Req3Batch150normal
	var_1_14 = var_1_12;


	// From: Req4Batch150normal
	signed long int stepLocal_3 = var_1_8;
	if (stepLocal_3 < (var_1_4 * -8)) {
		var_1_15 = 2;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741823);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -31);
	assume_abort_if_not(var_1_13 <= 31);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 * (min (var_1_4 , var_1_3))) <= ((var_1_5 % var_1_6) + var_1_7)) ? ((var_1_6 >= (max (var_1_8 , var_1_2))) ? (var_1_1 == ((unsigned char) (((var_1_5 % var_1_6) >= (-4 + var_1_2)) && var_1_9))) : (var_1_1 == ((unsigned char) 1))) : (var_1_1 == ((unsigned char) var_1_9))) && (var_1_9 ? ((var_1_1 || var_1_11) ? (var_1_10 == ((signed char) (min ((var_1_12 + (-5 + var_1_13)) , -4)))) : (var_1_10 == ((signed char) var_1_12))) : (var_1_10 == ((signed char) var_1_13)))) && (var_1_14 == ((signed short int) var_1_12))) && ((var_1_8 < (var_1_4 * -8)) ? (var_1_15 == ((signed short int) 2)) : 1)
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
