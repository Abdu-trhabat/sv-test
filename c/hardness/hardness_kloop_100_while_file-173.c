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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch173100_while.c", 13, "reach_error"); }
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
float var_1_1 = 49.4;
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 1;
unsigned long int var_1_4 = 5;
float var_1_5 = 3.6;
float var_1_6 = 3.8;
signed short int var_1_7 = 64;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 10;
signed short int var_1_11 = 18539;
signed short int var_1_12 = 5;
signed short int var_1_13 = 10;
float var_1_14 = 15.5;
float var_1_15 = 25.5;
float var_1_16 = 0.4;
float var_1_17 = 128.625;
unsigned char var_1_18 = 16;
unsigned short int var_1_19 = 0;
unsigned short int var_1_20 = 0;
signed char var_1_21 = -1;
unsigned char var_1_22 = 25;
unsigned char var_1_24 = 2;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 64;
signed long int var_1_27 = 10;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 32;
signed char var_1_32 = -5;
signed char var_1_33 = 100;
signed char var_1_34 = 32;
signed char var_1_35 = 32;
float var_1_36 = 499.4;
float var_1_37 = 500.6;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_28 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch173100_while
	if (last_1_var_1_28) {
		var_1_24 = (min ((max (var_1_20 , var_1_19)) , 128));
	} else {
		var_1_24 = ((var_1_25 + var_1_26) - var_1_19);
	}


	// From: Req10Batch173100_while
	var_1_31 = (var_1_11 + (min (var_1_20 , (max (var_1_24 , var_1_12)))));


	// From: Req9Batch173100_while
	if (var_1_24 > (var_1_31 * var_1_25)) {
		var_1_28 = (! var_1_29);
	} else {
		var_1_28 = ((2u < (var_1_2 | var_1_12)) && var_1_30);
	}


	// From: Req1Batch173100_while
	unsigned long int stepLocal_0 = var_1_4;
	if ((var_1_2 % var_1_3) <= stepLocal_0) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req2Batch173100_while
	unsigned long int stepLocal_2 = var_1_3;
	unsigned char stepLocal_1 = var_1_8;
	if (stepLocal_2 >= var_1_4) {
		if (stepLocal_1 || var_1_9) {
			var_1_7 = (var_1_10 - (var_1_11 - (min (var_1_12 , var_1_13))));
		}
	} else {
		if (var_1_8) {
			var_1_7 = var_1_10;
		}
	}


	// From: Req3Batch173100_while
	unsigned char stepLocal_4 = var_1_9;
	unsigned char stepLocal_3 = var_1_9;
	if ((var_1_7 > (abs (var_1_13))) && stepLocal_3) {
		if (var_1_8 && stepLocal_4) {
			var_1_14 = (var_1_5 - var_1_6);
		}
	} else {
		var_1_14 = ((var_1_15 - var_1_16) + var_1_17);
	}


	// From: Req5Batch173100_while
	unsigned long int stepLocal_6 = var_1_3;
	if (! (var_1_17 > 1.875f)) {
		var_1_21 = (max (var_1_20 , var_1_19));
	} else {
		if (stepLocal_6 <= var_1_31) {
			var_1_21 = var_1_20;
		}
	}


	// From: Req12Batch173100_while
	signed long int stepLocal_7 = -5;
	if (var_1_33 < stepLocal_7) {
		if ((var_1_16 - var_1_15) > (var_1_6 / (min (var_1_36 , var_1_37)))) {
			var_1_35 = var_1_20;
		} else {
			var_1_35 = var_1_34;
		}
	}


	// From: Req4Batch173100_while
	signed long int stepLocal_5 = -128;
	if ((var_1_12 << (var_1_19 + var_1_20)) <= stepLocal_5) {
		if (var_1_28) {
			var_1_18 = var_1_20;
		}
	}


	// From: Req8Batch173100_while
	if (! (var_1_3 != var_1_19)) {
		if (var_1_28) {
			if (var_1_28) {
				var_1_27 = var_1_7;
			}
		}
	}


	// From: Req11Batch173100_while
	if (var_1_28) {
		var_1_32 = ((var_1_33 - (50 - 10)) - var_1_20);
	} else {
		var_1_32 = ((var_1_33 - (var_1_34 - var_1_19)) - var_1_20);
	}


	// From: Req6Batch173100_while
	if (var_1_28) {
		if (var_1_28) {
			if (var_1_14 != (var_1_14 * (var_1_15 * var_1_5))) {
				if (var_1_19 >= var_1_20) {
					if (var_1_27 < var_1_3) {
						if (var_1_28 && (var_1_14 > var_1_5)) {
							var_1_22 = var_1_20;
						} else {
							var_1_22 = var_1_19;
						}
					} else {
						var_1_22 = var_1_20;
					}
				} else {
					var_1_22 = var_1_19;
				}
			}
		} else {
			var_1_22 = var_1_20;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 16383);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 63);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 64);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 62);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 31);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_28 = var_1_28;
}

int property(void) {
	return (((((((((((((var_1_2 % var_1_3) <= var_1_4) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_3 >= var_1_4) ? ((var_1_8 || var_1_9) ? (var_1_7 == ((signed short int) (var_1_10 - (var_1_11 - (min (var_1_12 , var_1_13)))))) : 1) : (var_1_8 ? (var_1_7 == ((signed short int) var_1_10)) : 1))) && (((var_1_7 > (abs (var_1_13))) && var_1_9) ? ((var_1_8 && var_1_9) ? (var_1_14 == ((float) (var_1_5 - var_1_6))) : 1) : (var_1_14 == ((float) ((var_1_15 - var_1_16) + var_1_17))))) && (((var_1_12 << (var_1_19 + var_1_20)) <= -128) ? (var_1_28 ? (var_1_18 == ((unsigned char) var_1_20)) : 1) : 1)) && ((! (var_1_17 > 1.875f)) ? (var_1_21 == ((signed char) (max (var_1_20 , var_1_19)))) : ((var_1_3 <= var_1_31) ? (var_1_21 == ((signed char) var_1_20)) : 1))) && (var_1_28 ? (var_1_28 ? ((var_1_14 != (var_1_14 * (var_1_15 * var_1_5))) ? ((var_1_19 >= var_1_20) ? ((var_1_27 < var_1_3) ? ((var_1_28 && (var_1_14 > var_1_5)) ? (var_1_22 == ((unsigned char) var_1_20)) : (var_1_22 == ((unsigned char) var_1_19))) : (var_1_22 == ((unsigned char) var_1_20))) : (var_1_22 == ((unsigned char) var_1_19))) : 1) : (var_1_22 == ((unsigned char) var_1_20))) : 1)) && (last_1_var_1_28 ? (var_1_24 == ((unsigned char) (min ((max (var_1_20 , var_1_19)) , 128)))) : (var_1_24 == ((unsigned char) ((var_1_25 + var_1_26) - var_1_19))))) && ((! (var_1_3 != var_1_19)) ? (var_1_28 ? (var_1_28 ? (var_1_27 == ((signed long int) var_1_7)) : 1) : 1) : 1)) && ((var_1_24 > (var_1_31 * var_1_25)) ? (var_1_28 == ((unsigned char) (! var_1_29))) : (var_1_28 == ((unsigned char) ((2u < (var_1_2 | var_1_12)) && var_1_30))))) && (var_1_31 == ((signed long int) (var_1_11 + (min (var_1_20 , (max (var_1_24 , var_1_12)))))))) && (var_1_28 ? (var_1_32 == ((signed char) ((var_1_33 - (50 - 10)) - var_1_20))) : (var_1_32 == ((signed char) ((var_1_33 - (var_1_34 - var_1_19)) - var_1_20))))) && ((var_1_33 < -5) ? (((var_1_16 - var_1_15) > (var_1_6 / (min (var_1_36 , var_1_37)))) ? (var_1_35 == ((signed char) var_1_20)) : (var_1_35 == ((signed char) var_1_34))) : 1)
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
