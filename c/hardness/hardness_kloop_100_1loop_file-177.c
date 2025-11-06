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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177100_1loop.c", 13, "reach_error"); }
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
float var_1_1 = 5.1;
signed short int var_1_2 = 256;
signed short int var_1_3 = 50;
float var_1_4 = 99999999.7;
float var_1_5 = 0.0;
float var_1_6 = 15.6;
float var_1_7 = 100.75;
float var_1_8 = 64.25;
float var_1_9 = 3.2;
signed char var_1_10 = 8;
signed char var_1_11 = -4;
signed char var_1_12 = 2;
float var_1_13 = 8.875;
signed short int var_1_14 = 256;
float var_1_15 = 99999999999.5;
unsigned long int var_1_16 = 4;
double var_1_17 = 5.5;
unsigned long int var_1_18 = 5;
signed short int var_1_19 = -2;
unsigned char var_1_21 = 10;
unsigned short int var_1_22 = 58545;
unsigned short int var_1_23 = 10;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_27 = 2;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
double var_1_31 = 1.2;
unsigned char var_1_32 = 1;
unsigned short int var_1_33 = 8;
signed long int var_1_34 = 32;
unsigned short int var_1_35 = 23396;
unsigned short int var_1_36 = 58775;
unsigned short int var_1_37 = 64;
unsigned char var_1_38 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_16 = 4;
unsigned char last_1_var_1_25 = 0;
unsigned char last_1_var_1_32 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch177100_1loop
	unsigned long int stepLocal_4 = var_1_18;
	unsigned char stepLocal_3 = last_1_var_1_32;
	if (last_1_var_1_25 || stepLocal_3) {
		if ((last_1_var_1_16 + (var_1_27 + var_1_23)) < stepLocal_4) {
			var_1_25 = ((var_1_27 < var_1_18) || var_1_28);
		} else {
			var_1_25 = var_1_29;
		}
	} else {
		var_1_25 = var_1_30;
	}


	// From: Req1Batch177100_1loop
	if (var_1_2 >= var_1_3) {
		var_1_1 = (abs (var_1_4));
	} else {
		var_1_1 = (((min (var_1_5 , var_1_6)) - var_1_7) + (max ((7.25f - var_1_8) , var_1_9)));
	}


	// From: Req4Batch177100_1loop
	if ((2.8 / var_1_17) < (8.5 - (var_1_5 + var_1_6))) {
		var_1_16 = var_1_18;
	}


	// From: Req11Batch177100_1loop
	var_1_38 = var_1_24;


	// From: Req8Batch177100_1loop
	unsigned long int stepLocal_6 = var_1_16;
	signed long int stepLocal_5 = var_1_38 ^ var_1_24;
	if (var_1_7 < var_1_4) {
		if (var_1_11 == stepLocal_6) {
			if (stepLocal_5 >= var_1_14) {
				var_1_31 = (var_1_9 + var_1_6);
			} else {
				var_1_31 = var_1_7;
			}
		}
	} else {
		var_1_31 = var_1_8;
	}


	// From: Req10Batch177100_1loop
	signed long int stepLocal_7 = var_1_34 - var_1_23;
	if (stepLocal_7 <= var_1_14) {
		if ((var_1_5 + var_1_4) < (63.25f * var_1_17)) {
			var_1_33 = (max ((57861 - (var_1_35 - var_1_27)) , (var_1_36 - (min (var_1_23 , var_1_24)))));
		} else {
			var_1_33 = (var_1_23 + (max ((var_1_35 - var_1_38) , (min (var_1_27 , var_1_37)))));
		}
	} else {
		var_1_33 = var_1_35;
	}


	// From: Req5Batch177100_1loop
	if ((max (var_1_31 , (9999999.4 + var_1_15))) != var_1_7) {
		if (var_1_25) {
			var_1_19 = var_1_11;
		}
	}


	// From: Req6Batch177100_1loop
	signed long int stepLocal_2 = 10;
	signed long int stepLocal_1 = var_1_33 / (var_1_22 - var_1_23);
	if (var_1_33 >= stepLocal_2) {
		if (stepLocal_1 != var_1_14) {
			var_1_21 = var_1_24;
		} else {
			var_1_21 = 32;
		}
	} else {
		var_1_21 = var_1_24;
	}


	// From: Req2Batch177100_1loop
	signed short int stepLocal_0 = var_1_19;
	if (var_1_6 >= var_1_4) {
		if (var_1_33 < stepLocal_0) {
			var_1_10 = (var_1_11 + (abs (var_1_12)));
		} else {
			var_1_10 = var_1_12;
		}
	} else {
		var_1_10 = (abs (var_1_11));
	}


	// From: Req3Batch177100_1loop
	if (var_1_19 >= (var_1_14 - 4)) {
		var_1_13 = ((max (var_1_8 , var_1_7)) - var_1_6);
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req9Batch177100_1loop
	if (var_1_6 >= (99.2f * var_1_5)) {
		if ((var_1_24 * var_1_16) <= var_1_16) {
			if (var_1_25) {
				var_1_32 = var_1_30;
			} else {
				var_1_32 = 0;
			}
		} else {
			var_1_32 = var_1_28;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 32766);
	assume_abort_if_not(var_1_23 != 32767);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -1);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_32 = var_1_32;
}

int property(void) {
	return (((((((((((var_1_2 >= var_1_3) ? (var_1_1 == ((float) (abs (var_1_4)))) : (var_1_1 == ((float) (((min (var_1_5 , var_1_6)) - var_1_7) + (max ((7.25f - var_1_8) , var_1_9)))))) && ((var_1_6 >= var_1_4) ? ((var_1_33 < var_1_19) ? (var_1_10 == ((signed char) (var_1_11 + (abs (var_1_12))))) : (var_1_10 == ((signed char) var_1_12))) : (var_1_10 == ((signed char) (abs (var_1_11)))))) && ((var_1_19 >= (var_1_14 - 4)) ? (var_1_13 == ((float) ((max (var_1_8 , var_1_7)) - var_1_6))) : (var_1_13 == ((float) var_1_15)))) && (((2.8 / var_1_17) < (8.5 - (var_1_5 + var_1_6))) ? (var_1_16 == ((unsigned long int) var_1_18)) : 1)) && (((max (var_1_31 , (9999999.4 + var_1_15))) != var_1_7) ? (var_1_25 ? (var_1_19 == ((signed short int) var_1_11)) : 1) : 1)) && ((var_1_33 >= 10) ? (((var_1_33 / (var_1_22 - var_1_23)) != var_1_14) ? (var_1_21 == ((unsigned char) var_1_24)) : (var_1_21 == ((unsigned char) 32))) : (var_1_21 == ((unsigned char) var_1_24)))) && ((last_1_var_1_25 || last_1_var_1_32) ? (((last_1_var_1_16 + (var_1_27 + var_1_23)) < var_1_18) ? (var_1_25 == ((unsigned char) ((var_1_27 < var_1_18) || var_1_28))) : (var_1_25 == ((unsigned char) var_1_29))) : (var_1_25 == ((unsigned char) var_1_30)))) && ((var_1_7 < var_1_4) ? ((var_1_11 == var_1_16) ? (((var_1_38 ^ var_1_24) >= var_1_14) ? (var_1_31 == ((double) (var_1_9 + var_1_6))) : (var_1_31 == ((double) var_1_7))) : 1) : (var_1_31 == ((double) var_1_8)))) && ((var_1_6 >= (99.2f * var_1_5)) ? (((var_1_24 * var_1_16) <= var_1_16) ? (var_1_25 ? (var_1_32 == ((unsigned char) var_1_30)) : (var_1_32 == ((unsigned char) 0))) : (var_1_32 == ((unsigned char) var_1_28))) : 1)) && (((var_1_34 - var_1_23) <= var_1_14) ? (((var_1_5 + var_1_4) < (63.25f * var_1_17)) ? (var_1_33 == ((unsigned short int) (max ((57861 - (var_1_35 - var_1_27)) , (var_1_36 - (min (var_1_23 , var_1_24))))))) : (var_1_33 == ((unsigned short int) (var_1_23 + (max ((var_1_35 - var_1_38) , (min (var_1_27 , var_1_37)))))))) : (var_1_33 == ((unsigned short int) var_1_35)))) && (var_1_38 == ((unsigned char) var_1_24))
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
