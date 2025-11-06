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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7850_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = -4;
signed long int var_1_2 = 0;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 2;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 8;
double var_1_8 = 1.875;
signed long int var_1_9 = -4;
double var_1_10 = 63.5;
double var_1_11 = 255.375;
double var_1_12 = 999999999.525;
double var_1_13 = 63.75;
double var_1_14 = 0.625;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 1;
unsigned short int var_1_20 = 50;
unsigned short int var_1_21 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -4;
unsigned short int last_1_var_1_6 = 10;
unsigned short int last_1_var_1_21 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch7850_1loop
	if ((abs (var_1_4)) > last_1_var_1_1) {
		var_1_15 = (max (last_1_var_1_21 , (var_1_5 + var_1_4)));
	}


	// From: Req1Batch7850_1loop
	var_1_1 = (abs (var_1_2));


	// From: Req2Batch7850_1loop
	signed long int stepLocal_0 = var_1_1;
	if (stepLocal_0 < var_1_2) {
		var_1_3 = (max (var_1_4 , var_1_5));
	}


	// From: Req3Batch7850_1loop
	signed long int stepLocal_2 = -256;
	unsigned char stepLocal_1 = var_1_5;
	if ((var_1_2 ^ var_1_1) < stepLocal_2) {
		var_1_6 = (abs (max ((max (var_1_5 , var_1_4)) , (last_1_var_1_6 + var_1_7))));
	} else {
		if (stepLocal_1 <= 50) {
			var_1_6 = last_1_var_1_6;
		}
	}


	// From: Req4Batch7850_1loop
	if (var_1_1 < (var_1_5 % (max (32 , var_1_9)))) {
		var_1_8 = (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14));
	} else {
		if (var_1_13 <= (var_1_14 + var_1_11)) {
			var_1_8 = var_1_12;
		}
	}


	// From: Req6Batch7850_1loop
	var_1_16 = (var_1_17 + (var_1_18 + (abs (var_1_19))));


	// From: Req8Batch7850_1loop
	signed long int stepLocal_3 = (var_1_2 * var_1_17) & (var_1_6 * var_1_18);
	if (var_1_15 == stepLocal_3) {
		var_1_21 = (var_1_4 + 128);
	}


	// From: Req7Batch7850_1loop
	var_1_20 = (max ((var_1_5 + var_1_21) , var_1_4));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483646);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -31);
	assume_abort_if_not(var_1_19 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	return (((((((var_1_1 == ((signed long int) (abs (var_1_2)))) && ((var_1_1 < var_1_2) ? (var_1_3 == ((unsigned char) (max (var_1_4 , var_1_5)))) : 1)) && (((var_1_2 ^ var_1_1) < -256) ? (var_1_6 == ((unsigned short int) (abs (max ((max (var_1_5 , var_1_4)) , (last_1_var_1_6 + var_1_7)))))) : ((var_1_5 <= 50) ? (var_1_6 == ((unsigned short int) last_1_var_1_6)) : 1))) && ((var_1_1 < (var_1_5 % (max (32 , var_1_9)))) ? (var_1_8 == ((double) (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14)))) : ((var_1_13 <= (var_1_14 + var_1_11)) ? (var_1_8 == ((double) var_1_12)) : 1))) && (((abs (var_1_4)) > last_1_var_1_1) ? (var_1_15 == ((unsigned short int) (max (last_1_var_1_21 , (var_1_5 + var_1_4))))) : 1)) && (var_1_16 == ((signed char) (var_1_17 + (var_1_18 + (abs (var_1_19))))))) && (var_1_20 == ((unsigned short int) (max ((var_1_5 + var_1_21) , var_1_4))))) && ((var_1_15 == ((var_1_2 * var_1_17) & (var_1_6 * var_1_18))) ? (var_1_21 == ((unsigned short int) (var_1_4 + 128))) : 1)
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
