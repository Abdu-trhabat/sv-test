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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110Amount100.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed long int var_1_2 = -10;
signed long int var_1_3 = -10;
signed char var_1_4 = -8;
signed char var_1_5 = 32;
signed char var_1_6 = -10;
signed char var_1_7 = 10;
signed char var_1_8 = 10;
signed long int var_1_9 = 10;
float var_1_10 = 64.6;
unsigned char var_1_11 = 0;
float var_1_12 = 3.6;
unsigned short int var_1_13 = 1;
unsigned short int var_1_14 = 50298;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 10;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 64;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 23922;
unsigned short int var_1_25 = 10000;
signed char var_1_26 = 50;
signed char var_1_27 = 2;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 32;
float var_1_33 = 4.2;
float var_1_34 = 128.25;
float var_1_35 = 31.5;
unsigned long int var_1_36 = 256;
signed short int var_1_37 = 16;

// Calibration values

// Last'ed variables
signed char last_1_var_1_26 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch110Amount100
	unsigned char stepLocal_7 = var_1_6 > last_1_var_1_26;
	if (var_1_11) {
		if (stepLocal_7 && var_1_16) {
			var_1_28 = (! var_1_29);
		}
	} else {
		if (var_1_29) {
			var_1_28 = var_1_30;
		} else {
			var_1_28 = var_1_31;
		}
	}


	// From: Req7Batch110Amount100
	if (var_1_28) {
		var_1_23 = (((abs (var_1_24)) - (var_1_25 - 32)) + 10);
	} else {
		var_1_23 = var_1_22;
	}


	// From: Req5Batch110Amount100
	unsigned char stepLocal_4 = var_1_18;
	signed long int stepLocal_3 = 32;
	if (stepLocal_4 || var_1_16) {
		if ((-25 + var_1_3) > stepLocal_3) {
			var_1_17 = var_1_5;
		}
	}


	// From: Req10Batch110Amount100
	unsigned short int stepLocal_8 = var_1_25;
	if (((var_1_33 + 9.4f) - (var_1_34 + var_1_35)) <= (- (var_1_12 / 32.5f))) {
		var_1_32 = (max ((min (var_1_21 , var_1_7)) , var_1_22));
	} else {
		if ((16u * var_1_36) < stepLocal_8) {
			if (var_1_28) {
				var_1_32 = var_1_22;
			} else {
				var_1_32 = 4;
			}
		}
	}


	// From: Req11Batch110Amount100
	var_1_37 = var_1_4;


	// From: Req1Batch110Amount100
	signed long int stepLocal_0 = 8;
	if (stepLocal_0 < (var_1_17 % var_1_3)) {
		var_1_1 = ((max ((var_1_4 + 16) , var_1_5)) + (var_1_6 + (var_1_7 - var_1_8)));
	} else {
		var_1_1 = (max (var_1_4 , var_1_5));
	}


	// From: Req2Batch110Amount100
	signed long int stepLocal_1 = var_1_17;
	if (stepLocal_1 < (var_1_3 | -10)) {
		var_1_9 = var_1_8;
	}


	// From: Req3Batch110Amount100
	if (var_1_23 != var_1_4) {
		if (var_1_28 && (var_1_3 > (var_1_2 ^ var_1_9))) {
			var_1_10 = var_1_12;
		} else {
			var_1_10 = 16.75f;
		}
	} else {
		var_1_10 = var_1_12;
	}


	// From: Req4Batch110Amount100
	signed char stepLocal_2 = var_1_6;
	if ((var_1_14 - var_1_8) >= stepLocal_2) {
		var_1_13 = var_1_8;
	} else {
		if ((var_1_12 * var_1_10) < var_1_10) {
			if (var_1_28) {
				var_1_13 = var_1_8;
			} else {
				var_1_13 = 0;
			}
		} else {
			var_1_13 = var_1_7;
		}
	}


	// From: Req8Batch110Amount100
	signed long int stepLocal_6 = var_1_17;
	signed long int stepLocal_5 = var_1_37 >> var_1_27;
	if (var_1_28) {
		if (stepLocal_5 > (var_1_2 * (max (var_1_20 , var_1_13)))) {
			if (var_1_9 <= stepLocal_6) {
				var_1_26 = var_1_4;
			} else {
				var_1_26 = var_1_27;
			}
		} else {
			var_1_26 = var_1_7;
		}
	} else {
		var_1_26 = var_1_7;
	}


	// From: Req6Batch110Amount100
	if (var_1_7 >= ((var_1_8 << var_1_9) | (var_1_4 * var_1_26))) {
		var_1_19 = ((var_1_20 + (max (var_1_21 , var_1_22))) - (min (5 , 16)));
	} else {
		if (var_1_26 != (var_1_21 / var_1_22)) {
			var_1_19 = var_1_22;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -31);
	assume_abort_if_not(var_1_4 <= 32);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 32);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 31);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 31);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65535);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 64);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 64);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 16383);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 8191);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 6);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427388000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427388000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427388000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967295);
}



void updateLastVariables(void) {
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	return (((((((((((8 < (var_1_17 % var_1_3)) ? (var_1_1 == ((signed char) ((max ((var_1_4 + 16) , var_1_5)) + (var_1_6 + (var_1_7 - var_1_8))))) : (var_1_1 == ((signed char) (max (var_1_4 , var_1_5))))) && ((var_1_17 < (var_1_3 | -10)) ? (var_1_9 == ((signed long int) var_1_8)) : 1)) && ((var_1_23 != var_1_4) ? ((var_1_28 && (var_1_3 > (var_1_2 ^ var_1_9))) ? (var_1_10 == ((float) var_1_12)) : (var_1_10 == ((float) 16.75f))) : (var_1_10 == ((float) var_1_12)))) && (((var_1_14 - var_1_8) >= var_1_6) ? (var_1_13 == ((unsigned short int) var_1_8)) : (((var_1_12 * var_1_10) < var_1_10) ? (var_1_28 ? (var_1_13 == ((unsigned short int) var_1_8)) : (var_1_13 == ((unsigned short int) 0))) : (var_1_13 == ((unsigned short int) var_1_7))))) && ((var_1_18 || var_1_16) ? (((-25 + var_1_3) > 32) ? (var_1_17 == ((signed long int) var_1_5)) : 1) : 1)) && ((var_1_7 >= ((var_1_8 << var_1_9) | (var_1_4 * var_1_26))) ? (var_1_19 == ((unsigned char) ((var_1_20 + (max (var_1_21 , var_1_22))) - (min (5 , 16))))) : ((var_1_26 != (var_1_21 / var_1_22)) ? (var_1_19 == ((unsigned char) var_1_22)) : 1))) && (var_1_28 ? (var_1_23 == ((unsigned short int) (((abs (var_1_24)) - (var_1_25 - 32)) + 10))) : (var_1_23 == ((unsigned short int) var_1_22)))) && (var_1_28 ? (((var_1_37 >> var_1_27) > (var_1_2 * (max (var_1_20 , var_1_13)))) ? ((var_1_9 <= var_1_17) ? (var_1_26 == ((signed char) var_1_4)) : (var_1_26 == ((signed char) var_1_27))) : (var_1_26 == ((signed char) var_1_7))) : (var_1_26 == ((signed char) var_1_7)))) && (var_1_11 ? (((var_1_6 > last_1_var_1_26) && var_1_16) ? (var_1_28 == ((unsigned char) (! var_1_29))) : 1) : (var_1_29 ? (var_1_28 == ((unsigned char) var_1_30)) : (var_1_28 == ((unsigned char) var_1_31))))) && ((((var_1_33 + 9.4f) - (var_1_34 + var_1_35)) <= (- (var_1_12 / 32.5f))) ? (var_1_32 == ((unsigned char) (max ((min (var_1_21 , var_1_7)) , var_1_22)))) : (((16u * var_1_36) < var_1_25) ? (var_1_28 ? (var_1_32 == ((unsigned char) var_1_22)) : (var_1_32 == ((unsigned char) 4))) : 1))) && (var_1_37 == ((signed short int) var_1_4))
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
