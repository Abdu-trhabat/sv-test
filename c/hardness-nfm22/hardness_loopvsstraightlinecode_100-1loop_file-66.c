// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 64;
unsigned short int var_1_5 = 63575;
unsigned long int var_1_6 = 10;
unsigned long int var_1_8 = 3366149252;
signed long int var_1_9 = -10;
signed long int var_1_11 = 1938698816;
unsigned char var_1_12 = 5;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 64;
double var_1_15 = 99.625;
double var_1_16 = 0.0;
double var_1_17 = 999.5;
double var_1_18 = 9.35;
float var_1_19 = 99.875;
float var_1_20 = 10000.71;
double var_1_21 = 1000.5;
double var_1_23 = 15.25;
signed long int var_1_24 = 8;
unsigned short int var_1_25 = 32;
signed short int var_1_26 = 2;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_32 = 0;
float var_1_33 = 64.75;
float var_1_34 = 9.2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 64;
signed long int last_1_var_1_9 = -10;
unsigned char last_1_var_1_12 = 5;
signed long int last_1_var_1_24 = 8;
unsigned short int last_1_var_1_25 = 32;
unsigned char last_1_var_1_27 = 0;
unsigned char last_1_var_1_29 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch66100_1loop
	signed long int stepLocal_8 = 10000000;
	unsigned long int stepLocal_7 = 128u + last_1_var_1_1;
	if (last_1_var_1_24 >= stepLocal_7) {
		if (stepLocal_8 != var_1_14) {
			var_1_26 = last_1_var_1_25;
		}
	}


	// From: Req3Batch66100_1loop
	if (last_1_var_1_29) {
		if (last_1_var_1_29) {
			var_1_9 = (last_1_var_1_24 + 100);
		} else {
			var_1_9 = (max ((var_1_5 + last_1_var_1_24) , last_1_var_1_9));
		}
	} else {
		var_1_9 = ((var_1_11 - 16) - last_1_var_1_24);
	}


	// From: Req4Batch66100_1loop
	if (last_1_var_1_29) {
		var_1_12 = (64 + var_1_13);
	} else {
		var_1_12 = (32 + (abs (var_1_14 - 2)));
	}


	// From: Req9Batch66100_1loop
	unsigned char stepLocal_4 = var_1_14;
	unsigned char stepLocal_3 = last_1_var_1_27;
	unsigned char stepLocal_2 = last_1_var_1_27;
	if ((var_1_13 * (var_1_5 * last_1_var_1_9)) <= stepLocal_4) {
		var_1_24 = 50;
	} else {
		if (last_1_var_1_27 || stepLocal_2) {
			if (stepLocal_3 || last_1_var_1_27) {
				var_1_24 = last_1_var_1_12;
			}
		} else {
			var_1_24 = var_1_13;
		}
	}


	// From: Req5Batch66100_1loop
	var_1_15 = ((var_1_16 - var_1_17) - var_1_18);


	// From: Req12Batch66100_1loop
	unsigned long int stepLocal_9 = 50u;
	if (stepLocal_9 >= var_1_5) {
		var_1_27 = var_1_28;
	}


	// From: Req8Batch66100_1loop
	if (var_1_27) {
		var_1_23 = (abs (4.5));
	}


	// From: Req7Batch66100_1loop
	signed short int stepLocal_1 = var_1_26;
	signed long int stepLocal_0 = var_1_24;
	if (stepLocal_1 >= (var_1_26 + (var_1_14 * 16))) {
		if (-256 > stepLocal_0) {
			var_1_21 = var_1_17;
		}
	} else {
		var_1_21 = ((min (1.75 , var_1_18)) - (9.9999999995E9 + var_1_17));
	}


	// From: Req13Batch66100_1loop
	signed long int stepLocal_11 = min (var_1_12 , var_1_14);
	unsigned char stepLocal_10 = var_1_27;
	if (var_1_28 && stepLocal_10) {
		var_1_29 = (var_1_28 && var_1_30);
	} else {
		if (stepLocal_11 > (-25 << var_1_9)) {
			var_1_29 = (var_1_27 || var_1_28);
		} else {
			var_1_29 = ((var_1_23 <= (min (var_1_21 , var_1_17))) && var_1_32);
		}
	}


	// From: Req1Batch66100_1loop
	if (last_1_var_1_12 >= last_1_var_1_24) {
		if (last_1_var_1_29) {
			var_1_1 = (var_1_5 - last_1_var_1_12);
		}
	}


	// From: Req14Batch66100_1loop
	unsigned char stepLocal_12 = var_1_26 > var_1_1;
	if (var_1_32 || stepLocal_12) {
		var_1_33 = (min ((var_1_20 + (max (var_1_17 , var_1_34))) , var_1_16));
	} else {
		var_1_33 = var_1_16;
	}


	// From: Req2Batch66100_1loop
	if ((var_1_33 * 8.2) < 10.4) {
		var_1_6 = (var_1_8 - var_1_9);
	}


	// From: Req10Batch66100_1loop
	signed long int stepLocal_6 = 0;
	unsigned long int stepLocal_5 = 25u;
	if (stepLocal_6 >= (max (var_1_6 , var_1_6))) {
		if (var_1_27) {
			var_1_25 = (max ((var_1_5 - var_1_9) , (var_1_12 + var_1_24)));
		}
	} else {
		if (var_1_8 < stepLocal_5) {
			var_1_25 = var_1_6;
		}
	}


	// From: Req6Batch66100_1loop
	if (var_1_33 >= 0.25) {
		var_1_19 = (var_1_17 + var_1_20);
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741822);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 63);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 4611686.018427382800e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return ((((((((((((((last_1_var_1_12 >= last_1_var_1_24) ? (last_1_var_1_29 ? (var_1_1 == ((unsigned short int) (var_1_5 - last_1_var_1_12))) : 1) : 1) && (((var_1_33 * 8.2) < 10.4) ? (var_1_6 == ((unsigned long int) (var_1_8 - var_1_9))) : 1)) && (last_1_var_1_29 ? (last_1_var_1_29 ? (var_1_9 == ((signed long int) (last_1_var_1_24 + 100))) : (var_1_9 == ((signed long int) (max ((var_1_5 + last_1_var_1_24) , last_1_var_1_9))))) : (var_1_9 == ((signed long int) ((var_1_11 - 16) - last_1_var_1_24))))) && (last_1_var_1_29 ? (var_1_12 == ((unsigned char) (64 + var_1_13))) : (var_1_12 == ((unsigned char) (32 + (abs (var_1_14 - 2))))))) && (var_1_15 == ((double) ((var_1_16 - var_1_17) - var_1_18)))) && ((var_1_33 >= 0.25) ? (var_1_19 == ((float) (var_1_17 + var_1_20))) : 1)) && ((var_1_26 >= (var_1_26 + (var_1_14 * 16))) ? ((-256 > var_1_24) ? (var_1_21 == ((double) var_1_17)) : 1) : (var_1_21 == ((double) ((min (1.75 , var_1_18)) - (9.9999999995E9 + var_1_17)))))) && (var_1_27 ? (var_1_23 == ((double) (abs (4.5)))) : 1)) && (((var_1_13 * (var_1_5 * last_1_var_1_9)) <= var_1_14) ? (var_1_24 == ((signed long int) 50)) : ((last_1_var_1_27 || last_1_var_1_27) ? ((last_1_var_1_27 || last_1_var_1_27) ? (var_1_24 == ((signed long int) last_1_var_1_12)) : 1) : (var_1_24 == ((signed long int) var_1_13))))) && ((0 >= (max (var_1_6 , var_1_6))) ? (var_1_27 ? (var_1_25 == ((unsigned short int) (max ((var_1_5 - var_1_9) , (var_1_12 + var_1_24))))) : 1) : ((var_1_8 < 25u) ? (var_1_25 == ((unsigned short int) var_1_6)) : 1))) && ((last_1_var_1_24 >= (128u + last_1_var_1_1)) ? ((10000000 != var_1_14) ? (var_1_26 == ((signed short int) last_1_var_1_25)) : 1) : 1)) && ((50u >= var_1_5) ? (var_1_27 == ((unsigned char) var_1_28)) : 1)) && ((var_1_28 && var_1_27) ? (var_1_29 == ((unsigned char) (var_1_28 && var_1_30))) : (((min (var_1_12 , var_1_14)) > (-25 << var_1_9)) ? (var_1_29 == ((unsigned char) (var_1_27 || var_1_28))) : (var_1_29 == ((unsigned char) ((var_1_23 <= (min (var_1_21 , var_1_17))) && var_1_32)))))) && ((var_1_32 || (var_1_26 > var_1_1)) ? (var_1_33 == ((float) (min ((var_1_20 + (max (var_1_17 , var_1_34))) , var_1_16)))) : (var_1_33 == ((float) var_1_16)))
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
