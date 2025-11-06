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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
unsigned long int var_1_3 = 32;
unsigned char var_1_4 = 0;
unsigned char var_1_7 = 0;
signed long int var_1_8 = -256;
signed long int var_1_9 = 64;
signed long int var_1_10 = 1631328499;
signed long int var_1_11 = 100;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned long int var_1_14 = 128;
unsigned long int var_1_15 = 1681092003;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 8;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 8;
unsigned char var_1_22 = 1;
double var_1_23 = 2.25;
double var_1_24 = 99999999999.6;
float var_1_25 = 1000.15;
float var_1_26 = 24.5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
signed short int var_1_30 = 10;
signed short int var_1_31 = 32518;
signed char var_1_32 = -64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_8 = -256;
unsigned long int last_1_var_1_14 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch158Amount100
	unsigned char stepLocal_2 = last_1_var_1_1;
	if (stepLocal_2 && (last_1_var_1_14 > (last_1_var_1_8 + last_1_var_1_14))) {
		var_1_8 = (last_1_var_1_8 - (min (var_1_9 , (var_1_10 - var_1_11))));
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req4Batch158Amount100
	if (-8 == var_1_3) {
		var_1_14 = var_1_8;
	} else {
		if (! var_1_13) {
			var_1_14 = ((var_1_10 + var_1_15) - var_1_9);
		} else {
			var_1_14 = (max (var_1_11 , var_1_10));
		}
	}


	// From: Req3Batch158Amount100
	if (var_1_9 == (var_1_8 + var_1_3)) {
		var_1_12 = (var_1_7 || var_1_13);
	} else {
		if (var_1_13) {
			var_1_12 = (! var_1_7);
		}
	}


	// From: Req10Batch158Amount100
	unsigned long int stepLocal_8 = var_1_14;
	unsigned char stepLocal_7 = var_1_19;
	if ((2 % var_1_20) > stepLocal_7) {
		if (stepLocal_8 == var_1_21) {
			var_1_30 = (abs (var_1_14));
		} else {
			var_1_30 = (var_1_19 + var_1_22);
		}
	} else {
		var_1_30 = (var_1_14 - (max ((var_1_31 - var_1_19) , var_1_22)));
	}


	// From: Req11Batch158Amount100
	unsigned long int stepLocal_9 = (max (var_1_14 , var_1_20)) + var_1_14;
	if (stepLocal_9 < (abs (var_1_22))) {
		if (! (var_1_20 <= var_1_21)) {
			var_1_32 = var_1_21;
		} else {
			var_1_32 = var_1_22;
		}
	} else {
		var_1_32 = var_1_21;
	}


	// From: Req1Batch158Amount100
	unsigned long int stepLocal_1 = 128u;
	unsigned long int stepLocal_0 = (- var_1_14) + var_1_8;
	if (var_1_12) {
		if (stepLocal_1 < var_1_14) {
			var_1_1 = (! var_1_4);
		} else {
			if (stepLocal_0 < var_1_14) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = var_1_4;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req5Batch158Amount100
	unsigned char stepLocal_3 = var_1_1;
	if (var_1_4 && stepLocal_3) {
		var_1_16 = (max (var_1_17 , (var_1_18 + var_1_19)));
	} else {
		var_1_16 = (5 + ((var_1_20 - var_1_21) + var_1_22));
	}


	// From: Req6Batch158Amount100
	unsigned char stepLocal_5 = var_1_1;
	signed long int stepLocal_4 = var_1_19 << var_1_11;
	if (stepLocal_5 && var_1_12) {
		if (var_1_15 == stepLocal_4) {
			var_1_23 = var_1_24;
		} else {
			var_1_23 = 2.75;
		}
	}


	// From: Req7Batch158Amount100
	if (! var_1_7) {
		var_1_25 = (max (var_1_24 , var_1_26));
	} else {
		if ((max (var_1_30 , var_1_22)) > (var_1_10 * var_1_14)) {
			var_1_25 = var_1_24;
		} else {
			var_1_25 = var_1_26;
		}
	}


	// From: Req8Batch158Amount100
	if (var_1_24 >= ((var_1_26 + var_1_25) + var_1_23)) {
		var_1_27 = (min (1 , var_1_19));
	} else {
		var_1_27 = var_1_19;
	}


	// From: Req9Batch158Amount100
	unsigned char stepLocal_6 = var_1_2;
	if (stepLocal_6 || var_1_1) {
		var_1_28 = ((var_1_2 && var_1_7) || (var_1_13 || var_1_29));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741824);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 64);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	return ((((((((((var_1_12 ? ((128u < var_1_14) ? (var_1_1 == ((unsigned char) (! var_1_4))) : ((((- var_1_14) + var_1_8) < var_1_14) ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_4)))) : (var_1_1 == ((unsigned char) var_1_7))) && ((last_1_var_1_1 && (last_1_var_1_14 > (last_1_var_1_8 + last_1_var_1_14))) ? (var_1_8 == ((signed long int) (last_1_var_1_8 - (min (var_1_9 , (var_1_10 - var_1_11)))))) : (var_1_8 == ((signed long int) var_1_10)))) && ((var_1_9 == (var_1_8 + var_1_3)) ? (var_1_12 == ((unsigned char) (var_1_7 || var_1_13))) : (var_1_13 ? (var_1_12 == ((unsigned char) (! var_1_7))) : 1))) && ((-8 == var_1_3) ? (var_1_14 == ((unsigned long int) var_1_8)) : ((! var_1_13) ? (var_1_14 == ((unsigned long int) ((var_1_10 + var_1_15) - var_1_9))) : (var_1_14 == ((unsigned long int) (max (var_1_11 , var_1_10))))))) && ((var_1_4 && var_1_1) ? (var_1_16 == ((unsigned char) (max (var_1_17 , (var_1_18 + var_1_19))))) : (var_1_16 == ((unsigned char) (5 + ((var_1_20 - var_1_21) + var_1_22)))))) && ((var_1_1 && var_1_12) ? ((var_1_15 == (var_1_19 << var_1_11)) ? (var_1_23 == ((double) var_1_24)) : (var_1_23 == ((double) 2.75))) : 1)) && ((! var_1_7) ? (var_1_25 == ((float) (max (var_1_24 , var_1_26)))) : (((max (var_1_30 , var_1_22)) > (var_1_10 * var_1_14)) ? (var_1_25 == ((float) var_1_24)) : (var_1_25 == ((float) var_1_26))))) && ((var_1_24 >= ((var_1_26 + var_1_25) + var_1_23)) ? (var_1_27 == ((unsigned char) (min (1 , var_1_19)))) : (var_1_27 == ((unsigned char) var_1_19)))) && ((var_1_2 || var_1_1) ? (var_1_28 == ((unsigned char) ((var_1_2 && var_1_7) || (var_1_13 || var_1_29)))) : 1)) && (((2 % var_1_20) > var_1_19) ? ((var_1_14 == var_1_21) ? (var_1_30 == ((signed short int) (abs (var_1_14)))) : (var_1_30 == ((signed short int) (var_1_19 + var_1_22)))) : (var_1_30 == ((signed short int) (var_1_14 - (max ((var_1_31 - var_1_19) , var_1_22))))))) && ((((max (var_1_14 , var_1_20)) + var_1_14) < (abs (var_1_22))) ? ((! (var_1_20 <= var_1_21)) ? (var_1_32 == ((signed char) var_1_21)) : (var_1_32 == ((signed char) var_1_22))) : (var_1_32 == ((signed char) var_1_21)))
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
