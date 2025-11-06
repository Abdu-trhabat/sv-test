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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 100;
signed long int var_1_8 = -256;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 200;
signed char var_1_14 = 16;
float var_1_15 = 0.5;
float var_1_16 = 31.2;
float var_1_17 = 8.2;
float var_1_18 = 25.5;
float var_1_19 = 0.4;
float var_1_20 = 256.5;
float var_1_22 = 2.75;
float var_1_23 = 255.5;
signed char var_1_24 = 2;
signed char var_1_25 = 5;
signed char var_1_26 = -10;
signed char var_1_27 = -32;
unsigned short int var_1_28 = 128;
signed long int var_1_29 = -2;
signed long int var_1_31 = 50;
signed long int var_1_32 = -10000000;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
signed char var_1_35 = -5;
unsigned short int var_1_36 = 36165;
unsigned short int var_1_37 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
float last_1_var_1_15 = 0.5;
signed long int last_1_var_1_32 = -10000000;
unsigned char last_1_var_1_33 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch63Amount100
	if (var_1_31 > last_1_var_1_32) {
		var_1_33 = (var_1_10 && var_1_34);
	}


	// From: Req2Batch63Amount100
	if (last_1_var_1_33) {
		var_1_8 = (max (var_1_6 , var_1_7));
	} else {
		var_1_8 = (25 + var_1_6);
	}


	// From: Req4Batch63Amount100
	if (var_1_11) {
		var_1_12 = var_1_6;
	}


	// From: Req5Batch63Amount100
	signed long int stepLocal_1 = (var_1_6 + var_1_14) - var_1_7;
	if (var_1_10) {
		var_1_13 = var_1_7;
	} else {
		if (stepLocal_1 >= var_1_8) {
			var_1_13 = var_1_14;
		} else {
			var_1_13 = var_1_5;
		}
	}


	// From: Req1Batch63Amount100
	if (((last_1_var_1_1 / -2) <= var_1_8) && var_1_33) {
		var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
	} else {
		var_1_1 = (var_1_6 + var_1_7);
	}


	// From: Req10Batch63Amount100
	if (var_1_11) {
		var_1_32 = (var_1_8 + (var_1_5 + (min (var_1_1 , var_1_8))));
	}


	// From: Req3Batch63Amount100
	unsigned char stepLocal_0 = var_1_8 < var_1_13;
	if (stepLocal_0 && var_1_33) {
		var_1_9 = ((var_1_8 > var_1_13) || var_1_10);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req6Batch63Amount100
	unsigned char stepLocal_2 = var_1_10;
	if ((last_1_var_1_15 / var_1_17) < var_1_18) {
		var_1_15 = (var_1_19 - var_1_20);
	} else {
		if (stepLocal_2 || (var_1_32 < var_1_1)) {
			var_1_15 = (var_1_22 + var_1_23);
		}
	}


	// From: Req9Batch63Amount100
	unsigned char stepLocal_6 = ! var_1_11;
	signed long int stepLocal_5 = (var_1_6 & var_1_8) % var_1_5;
	if (stepLocal_5 >= (var_1_32 / var_1_31)) {
		if ((var_1_15 >= var_1_16) && stepLocal_6) {
			var_1_29 = (min (var_1_13 , var_1_25));
		} else {
			var_1_29 = (abs (abs (var_1_27)));
		}
	}


	// From: Req12Batch63Amount100
	if (! ((var_1_36 - var_1_5) >= (var_1_1 ^ var_1_32))) {
		if (var_1_33) {
			var_1_35 = var_1_26;
		} else {
			var_1_35 = (min ((var_1_14 - var_1_6) , var_1_5));
		}
	} else {
		var_1_35 = ((max (var_1_26 , var_1_14)) + -2);
	}


	// From: Req13Batch63Amount100
	var_1_37 = (abs ((var_1_6 + var_1_5) + var_1_29));


	// From: Req8Batch63Amount100
	signed long int stepLocal_4 = var_1_29;
	if (var_1_10) {
		if ((- var_1_13) >= stepLocal_4) {
			if (var_1_9) {
				var_1_28 = var_1_6;
			}
		}
	}


	// From: Req7Batch63Amount100
	signed long int stepLocal_3 = (abs (var_1_28)) - var_1_5;
	if ((min (var_1_8 , (abs (var_1_28)))) <= stepLocal_3) {
		var_1_24 = (min ((var_1_6 + (max (var_1_14 , var_1_25))) , (var_1_26 + var_1_27)));
	} else {
		var_1_24 = var_1_26;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	assume_abort_if_not(var_1_31 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65535);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return (((((((((((((((last_1_var_1_1 / -2) <= var_1_8) && var_1_33) ? (var_1_1 == ((unsigned char) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned char) (var_1_6 + var_1_7)))) && (last_1_var_1_33 ? (var_1_8 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_8 == ((signed long int) (25 + var_1_6))))) && (((var_1_8 < var_1_13) && var_1_33) ? (var_1_9 == ((unsigned char) ((var_1_8 > var_1_13) || var_1_10))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && (var_1_11 ? (var_1_12 == ((unsigned char) var_1_6)) : 1)) && (var_1_10 ? (var_1_13 == ((unsigned char) var_1_7)) : ((((var_1_6 + var_1_14) - var_1_7) >= var_1_8) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) var_1_5))))) && (((last_1_var_1_15 / var_1_17) < var_1_18) ? (var_1_15 == ((float) (var_1_19 - var_1_20))) : ((var_1_10 || (var_1_32 < var_1_1)) ? (var_1_15 == ((float) (var_1_22 + var_1_23))) : 1))) && (((min (var_1_8 , (abs (var_1_28)))) <= ((abs (var_1_28)) - var_1_5)) ? (var_1_24 == ((signed char) (min ((var_1_6 + (max (var_1_14 , var_1_25))) , (var_1_26 + var_1_27))))) : (var_1_24 == ((signed char) var_1_26)))) && (var_1_10 ? (((- var_1_13) >= var_1_29) ? (var_1_9 ? (var_1_28 == ((unsigned short int) var_1_6)) : 1) : 1) : 1)) && ((((var_1_6 & var_1_8) % var_1_5) >= (var_1_32 / var_1_31)) ? (((var_1_15 >= var_1_16) && (! var_1_11)) ? (var_1_29 == ((signed long int) (min (var_1_13 , var_1_25)))) : (var_1_29 == ((signed long int) (abs (abs (var_1_27)))))) : 1)) && (var_1_11 ? (var_1_32 == ((signed long int) (var_1_8 + (var_1_5 + (min (var_1_1 , var_1_8)))))) : 1)) && ((var_1_31 > last_1_var_1_32) ? (var_1_33 == ((unsigned char) (var_1_10 && var_1_34))) : 1)) && ((! ((var_1_36 - var_1_5) >= (var_1_1 ^ var_1_32))) ? (var_1_33 ? (var_1_35 == ((signed char) var_1_26)) : (var_1_35 == ((signed char) (min ((var_1_14 - var_1_6) , var_1_5))))) : (var_1_35 == ((signed char) ((max (var_1_26 , var_1_14)) + -2))))) && (var_1_37 == ((unsigned short int) (abs ((var_1_6 + var_1_5) + var_1_29))))
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
