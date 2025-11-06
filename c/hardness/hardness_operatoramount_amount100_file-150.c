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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150Amount100.c", 13, "reach_error"); }
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
signed long int var_1_1 = 5;
signed long int var_1_2 = -64;
unsigned char var_1_3 = 25;
unsigned short int var_1_4 = 500;
signed long int var_1_5 = -4;
signed long int var_1_6 = 0;
unsigned char var_1_7 = 25;
unsigned char var_1_8 = 8;
unsigned char var_1_9 = 32;
unsigned char var_1_10 = 0;
unsigned char var_1_13 = 0;
float var_1_14 = 5.059;
unsigned long int var_1_15 = 4;
signed long int var_1_16 = 4;
float var_1_17 = 5.25;
float var_1_18 = 99.625;
float var_1_19 = 99.44;
float var_1_20 = 10.5;
signed long int var_1_21 = -1;
float var_1_22 = 4.6;
float var_1_23 = 0.2;
unsigned char var_1_24 = 1;
signed long int var_1_25 = 0;
signed short int var_1_26 = 64;
signed char var_1_27 = 1;
signed char var_1_28 = 4;
signed char var_1_29 = 1;
signed char var_1_30 = 32;
signed char var_1_32 = 8;
signed short int var_1_33 = 1;
unsigned long int var_1_34 = 16;
signed short int var_1_35 = 5;
unsigned char var_1_36 = 0;
signed short int var_1_37 = 128;
signed short int var_1_38 = -200;
signed short int var_1_39 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 5;
unsigned char last_1_var_1_36 = 0;
signed short int last_1_var_1_37 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch150Amount100
	signed long int stepLocal_5 = last_1_var_1_1;
	unsigned char stepLocal_4 = last_1_var_1_36;
	if ((var_1_4 >= var_1_2) && stepLocal_4) {
		if (stepLocal_5 <= 5) {
			var_1_26 = var_1_8;
		}
	}


	// From: Req1Batch150Amount100
	var_1_1 = var_1_2;


	// From: Req2Batch150Amount100
	signed long int stepLocal_1 = var_1_2;
	signed long int stepLocal_0 = var_1_5 | var_1_6;
	if (stepLocal_1 <= (~ var_1_1)) {
		if (((var_1_2 & var_1_1) / var_1_4) <= stepLocal_0) {
			var_1_3 = (max ((max (var_1_7 , var_1_8)) , var_1_9));
		}
	} else {
		var_1_3 = var_1_9;
	}


	// From: Req4Batch150Amount100
	signed long int stepLocal_2 = var_1_1;
	if ((var_1_1 >> var_1_15) == stepLocal_2) {
		var_1_14 = 0.5f;
	} else {
		var_1_14 = ((max (var_1_17 , var_1_18)) - var_1_19);
	}


	// From: Req6Batch150Amount100
	if (var_1_16 >= var_1_9) {
		if ((var_1_1 + var_1_5) > (max (var_1_6 , var_1_25))) {
			var_1_24 = 0;
		} else {
			var_1_24 = var_1_13;
		}
	}


	// From: Req8Batch150Amount100
	if (var_1_24) {
		var_1_27 = (var_1_32 + var_1_30);
	}


	// From: Req9Batch150Amount100
	if (var_1_8 <= (32 << (var_1_34 - 8u))) {
		if (var_1_24) {
			var_1_33 = var_1_35;
		}
	}


	// From: Req11Batch150Amount100
	signed long int stepLocal_7 = var_1_16;
	signed short int stepLocal_6 = var_1_33;
	if (! (last_1_var_1_37 <= 2)) {
		var_1_37 = (var_1_30 - var_1_8);
	} else {
		if (var_1_32 > stepLocal_7) {
			if (stepLocal_6 == last_1_var_1_37) {
				var_1_37 = var_1_3;
			} else {
				var_1_37 = ((abs (var_1_30)) + var_1_9);
			}
		} else {
			var_1_37 = (var_1_27 + var_1_3);
		}
	}


	// From: Req12Batch150Amount100
	if (var_1_26 <= (abs (var_1_34 / var_1_30))) {
		var_1_38 = (var_1_39 - (17213 - var_1_9));
	} else {
		var_1_38 = var_1_28;
	}


	// From: Req5Batch150Amount100
	unsigned long int stepLocal_3 = (var_1_33 - var_1_15) / var_1_4;
	if (! (var_1_16 == var_1_21)) {
		var_1_20 = (var_1_22 + var_1_23);
	} else {
		if ((var_1_7 - 25) <= stepLocal_3) {
			var_1_20 = var_1_18;
		} else {
			var_1_20 = var_1_17;
		}
	}


	// From: Req10Batch150Amount100
	if ((max ((var_1_17 + var_1_18) , var_1_22)) <= var_1_20) {
		var_1_36 = (! var_1_13);
	} else {
		if (var_1_26 < var_1_1) {
			if (var_1_9 <= var_1_29) {
				var_1_36 = (last_1_var_1_36 || var_1_13);
			} else {
				if (! var_1_13) {
					var_1_36 = (! var_1_13);
				}
			}
		}
	}


	// From: Req3Batch150Amount100
	if (((var_1_2 % var_1_4) > var_1_1) || var_1_36) {
		if (var_1_36) {
			var_1_10 = var_1_13;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 15);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 31);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 31);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 12);
	assume_abort_if_not(var_1_34 <= 25);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32767);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_37 = var_1_37;
}

int property(void) {
	return (((((((((((var_1_1 == ((signed long int) var_1_2)) && ((var_1_2 <= (~ var_1_1)) ? ((((var_1_2 & var_1_1) / var_1_4) <= (var_1_5 | var_1_6)) ? (var_1_3 == ((unsigned char) (max ((max (var_1_7 , var_1_8)) , var_1_9)))) : 1) : (var_1_3 == ((unsigned char) var_1_9)))) && ((((var_1_2 % var_1_4) > var_1_1) || var_1_36) ? (var_1_36 ? (var_1_10 == ((unsigned char) var_1_13)) : 1) : 1)) && (((var_1_1 >> var_1_15) == var_1_1) ? (var_1_14 == ((float) 0.5f)) : (var_1_14 == ((float) ((max (var_1_17 , var_1_18)) - var_1_19))))) && ((! (var_1_16 == var_1_21)) ? (var_1_20 == ((float) (var_1_22 + var_1_23))) : (((var_1_7 - 25) <= ((var_1_33 - var_1_15) / var_1_4)) ? (var_1_20 == ((float) var_1_18)) : (var_1_20 == ((float) var_1_17))))) && ((var_1_16 >= var_1_9) ? (((var_1_1 + var_1_5) > (max (var_1_6 , var_1_25))) ? (var_1_24 == ((unsigned char) 0)) : (var_1_24 == ((unsigned char) var_1_13))) : 1)) && (((var_1_4 >= var_1_2) && last_1_var_1_36) ? ((last_1_var_1_1 <= 5) ? (var_1_26 == ((signed short int) var_1_8)) : 1) : 1)) && (var_1_24 ? (var_1_27 == ((signed char) (var_1_32 + var_1_30))) : 1)) && ((var_1_8 <= (32 << (var_1_34 - 8u))) ? (var_1_24 ? (var_1_33 == ((signed short int) var_1_35)) : 1) : 1)) && (((max ((var_1_17 + var_1_18) , var_1_22)) <= var_1_20) ? (var_1_36 == ((unsigned char) (! var_1_13))) : ((var_1_26 < var_1_1) ? ((var_1_9 <= var_1_29) ? (var_1_36 == ((unsigned char) (last_1_var_1_36 || var_1_13))) : ((! var_1_13) ? (var_1_36 == ((unsigned char) (! var_1_13))) : 1)) : 1))) && ((! (last_1_var_1_37 <= 2)) ? (var_1_37 == ((signed short int) (var_1_30 - var_1_8))) : ((var_1_32 > var_1_16) ? ((var_1_33 == last_1_var_1_37) ? (var_1_37 == ((signed short int) var_1_3)) : (var_1_37 == ((signed short int) ((abs (var_1_30)) + var_1_9)))) : (var_1_37 == ((signed short int) (var_1_27 + var_1_3)))))) && ((var_1_26 <= (abs (var_1_34 / var_1_30))) ? (var_1_38 == ((signed short int) (var_1_39 - (17213 - var_1_9)))) : (var_1_38 == ((signed short int) var_1_28)))
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
