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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 128;
unsigned char var_1_2 = 1;
signed short int var_1_9 = -64;
signed short int var_1_12 = 24904;
float var_1_13 = 8.6;
unsigned long int var_1_14 = 3786581991;
float var_1_15 = 31.6;
float var_1_16 = -0.5;
float var_1_17 = 3.75;
float var_1_18 = 3.5;
double var_1_19 = 256.85;
double var_1_21 = 64.6;
signed long int var_1_22 = 8;
signed long int var_1_23 = 1117714559;
signed long int var_1_24 = 128;
double var_1_25 = 64.2;
unsigned long int var_1_26 = 64;
unsigned char var_1_27 = 16;
unsigned char var_1_28 = 10;
unsigned long int var_1_29 = 3600404902;
signed char var_1_30 = -5;
unsigned short int var_1_31 = 32;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 200;
double var_1_35 = 2.75;
double var_1_36 = 63.25;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 4;
double var_1_40 = 7.4;
double var_1_41 = 31.75;
double var_1_42 = 32.2;
signed short int var_1_43 = 10;
signed long int var_1_44 = 10;
unsigned long int var_1_45 = 4;
signed short int var_1_46 = 64;
unsigned char var_1_47 = 128;
signed long int var_1_48 = -4;
unsigned char var_1_49 = 1;
signed char var_1_50 = -32;
signed char var_1_51 = 1;
signed char var_1_52 = 10;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 128;
signed long int last_1_var_1_22 = 8;
signed long int last_1_var_1_24 = 128;
signed char last_1_var_1_30 = -5;
unsigned char last_1_var_1_33 = 16;
unsigned char last_1_var_1_37 = 1;
signed short int last_1_var_1_43 = 10;
signed long int last_1_var_1_44 = 10;
signed short int last_1_var_1_46 = 64;
unsigned char last_1_var_1_49 = 1;
signed char last_1_var_1_50 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch88Amount250
	signed long int stepLocal_7 = last_1_var_1_30;
	signed long int stepLocal_6 = last_1_var_1_30;
	if (var_1_2) {
		if (-5 >= stepLocal_7) {
			if (stepLocal_6 >= last_1_var_1_49) {
				var_1_24 = (last_1_var_1_49 + (5 - last_1_var_1_33));
			} else {
				var_1_24 = (last_1_var_1_24 + (last_1_var_1_30 + last_1_var_1_24));
			}
		} else {
			var_1_24 = (-2 + last_1_var_1_1);
		}
	} else {
		var_1_24 = last_1_var_1_37;
	}


	// From: Req11Batch88Amount250
	unsigned long int stepLocal_11 = var_1_29 & var_1_24;
	if (! var_1_2) {
		var_1_33 = (min ((max (var_1_28 , var_1_27)) , var_1_34));
	} else {
		if (stepLocal_11 >= var_1_12) {
			var_1_33 = (abs (var_1_27 + var_1_28));
		} else {
			if ((256.5 - var_1_17) >= var_1_21) {
				var_1_33 = (max (var_1_34 , var_1_28));
			} else {
				var_1_33 = (min (var_1_34 , var_1_27));
			}
		}
	}


	// From: Req8Batch88Amount250
	signed long int stepLocal_9 = (last_1_var_1_50 * last_1_var_1_22) >> (var_1_27 + var_1_28);
	if (last_1_var_1_33 == stepLocal_9) {
		if (var_1_2) {
			var_1_26 = (var_1_29 - last_1_var_1_37);
		}
	} else {
		var_1_26 = (min ((max ((var_1_29 - last_1_var_1_37) , last_1_var_1_49)) , (abs (var_1_28))));
	}


	// From: Req7Batch88Amount250
	signed long int stepLocal_8 = var_1_33 / var_1_23;
	if (var_1_2) {
		if (stepLocal_8 < 2) {
			var_1_25 = (abs (min (var_1_16 , 64.6)));
		}
	} else {
		if ((var_1_21 + var_1_18) < (var_1_16 + 7.4)) {
			var_1_25 = (min (var_1_16 , var_1_21));
		} else {
			var_1_25 = (var_1_17 - (min (31.5 , var_1_18)));
		}
	}


	// From: Req9Batch88Amount250
	var_1_30 = (var_1_27 + var_1_28);


	// From: Req12Batch88Amount250
	if (var_1_2) {
		var_1_35 = (var_1_21 + (min (var_1_36 , var_1_18)));
	} else {
		var_1_35 = (abs (var_1_18 + var_1_17));
	}


	// From: Req13Batch88Amount250
	if (var_1_18 > (- var_1_35)) {
		var_1_37 = ((var_1_27 + var_1_28) + (var_1_38 + var_1_39));
	}


	// From: Req17Batch88Amount250
	if (var_1_2) {
		var_1_45 = (min (var_1_39 , var_1_38));
	}


	// From: Req20Batch88Amount250
	var_1_49 = (var_1_28 + var_1_39);


	// From: Req10Batch88Amount250
	signed long int stepLocal_10 = ~ var_1_23;
	if ((128 + var_1_28) > stepLocal_10) {
		var_1_31 = ((min ((var_1_27 + var_1_28) , var_1_37)) + (var_1_37 + var_1_49));
	}


	// From: Req21Batch88Amount250
	unsigned short int stepLocal_17 = var_1_31;
	if (stepLocal_17 <= var_1_31) {
		var_1_50 = (min (var_1_27 , (min ((var_1_28 - var_1_39) , (var_1_51 + var_1_52)))));
	} else {
		var_1_50 = var_1_51;
	}


	// From: Req1Batch88Amount250
	signed long int stepLocal_0 = abs (var_1_49);
	if (var_1_30 >= stepLocal_0) {
		var_1_1 = (max (((var_1_50 + var_1_49) + var_1_37) , var_1_37));
	} else {
		var_1_1 = (var_1_37 + var_1_49);
	}


	// From: Req3Batch88Amount250
	unsigned char stepLocal_3 = var_1_37;
	if (((var_1_14 - var_1_33) ^ var_1_50) <= stepLocal_3) {
		var_1_13 = (max (var_1_15 , (min (999.6f , var_1_16))));
	} else {
		var_1_13 = ((var_1_17 + var_1_18) - (abs (var_1_15)));
	}


	// From: Req4Batch88Amount250
	unsigned char stepLocal_5 = var_1_49;
	unsigned short int stepLocal_4 = var_1_31;
	if (stepLocal_4 > var_1_49) {
		var_1_19 = ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25)))));
	} else {
		if ((5 / var_1_12) <= stepLocal_5) {
			var_1_19 = ((var_1_18 - 99.75) + 5.2);
		}
	}


	// From: Req16Batch88Amount250
	if (((var_1_27 + var_1_39) - var_1_38) == (min (var_1_33 , (last_1_var_1_44 * 500)))) {
		if (var_1_2) {
			var_1_44 = (min ((256 - 64) , var_1_50));
		} else {
			var_1_44 = ((min ((max (var_1_28 , 64)) , var_1_31)) + (min ((var_1_38 - var_1_34) , var_1_33)));
		}
	} else {
		var_1_44 = (max (last_1_var_1_44 , ((var_1_33 + var_1_12) + var_1_33)));
	}


	// From: Req19Batch88Amount250
	var_1_48 = var_1_50;


	// From: Req18Batch88Amount250
	unsigned char stepLocal_16 = (var_1_27 - var_1_34) < var_1_33;
	unsigned long int stepLocal_15 = var_1_26;
	unsigned char stepLocal_14 = var_1_27;
	if (stepLocal_15 == var_1_29) {
		var_1_46 = (abs (var_1_12));
	} else {
		if (stepLocal_14 >= (var_1_47 - var_1_39)) {
			if (stepLocal_16 || (last_1_var_1_46 != var_1_39)) {
				var_1_46 = (min (2 , var_1_49));
			} else {
				var_1_46 = ((var_1_38 + var_1_48) + (var_1_39 + (abs (var_1_28))));
			}
		} else {
			var_1_46 = var_1_34;
		}
	}


	// From: Req5Batch88Amount250
	if (var_1_16 == (max (var_1_18 , var_1_19))) {
		if (! var_1_2) {
			var_1_22 = (max (var_1_26 , var_1_33));
		}
	} else {
		if ((var_1_26 | var_1_33) < -5) {
			if (var_1_2 && (var_1_46 == var_1_26)) {
				var_1_22 = (var_1_33 - (var_1_23 - var_1_12));
			} else {
				var_1_22 = var_1_31;
			}
		}
	}


	// From: Req14Batch88Amount250
	signed short int stepLocal_13 = var_1_1;
	signed long int stepLocal_12 = var_1_49 * var_1_23;
	if (stepLocal_12 == var_1_22) {
		if (var_1_39 >= stepLocal_13) {
			if (var_1_36 >= var_1_13) {
				var_1_40 = var_1_17;
			} else {
				if (! (-8 <= (var_1_37 / var_1_12))) {
					var_1_40 = (min (var_1_17 , (abs (var_1_36))));
				}
			}
		}
	} else {
		var_1_40 = ((var_1_18 - (max (var_1_17 , 16.8))) + (var_1_41 - var_1_42));
	}


	// From: Req15Batch88Amount250
	if (var_1_19 < var_1_36) {
		if (var_1_19 < var_1_17) {
			if ((var_1_22 * 64u) != var_1_37) {
				var_1_43 = (var_1_37 + (var_1_38 + var_1_39));
			} else {
				var_1_43 = (max ((var_1_28 - 8) , (abs (var_1_37))));
			}
		} else {
			var_1_43 = (max ((last_1_var_1_43 + (var_1_37 - 1)) , (var_1_33 - var_1_12)));
		}
	}


	// From: Req2Batch88Amount250
	signed long int stepLocal_2 = (min (var_1_50 , var_1_43)) * var_1_49;
	signed long int stepLocal_1 = min (var_1_49 , var_1_43);
	if (stepLocal_2 <= var_1_49) {
		if (stepLocal_1 == var_1_30) {
			var_1_9 = (-2 + (var_1_37 - var_1_37));
		}
	} else {
		if (! var_1_2) {
			if (var_1_2) {
				var_1_9 = ((var_1_12 - (abs (var_1_49))) - 2);
			}
		} else {
			var_1_9 = (max ((max (var_1_49 , var_1_37)) , var_1_37));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 16382);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741823);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 2147483647);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 64);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 127);
	assume_abort_if_not(var_1_47 <= 255);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -63);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -63);
	assume_abort_if_not(var_1_52 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_50 = var_1_50;
}

int property() {
	return (((((((((((((((((((((var_1_30 >= (abs (var_1_49))) ? (var_1_1 == ((signed short int) (max (((var_1_50 + var_1_49) + var_1_37) , var_1_37)))) : (var_1_1 == ((signed short int) (var_1_37 + var_1_49)))) && ((((min (var_1_50 , var_1_43)) * var_1_49) <= var_1_49) ? (((min (var_1_49 , var_1_43)) == var_1_30) ? (var_1_9 == ((signed short int) (-2 + (var_1_37 - var_1_37)))) : 1) : ((! var_1_2) ? (var_1_2 ? (var_1_9 == ((signed short int) ((var_1_12 - (abs (var_1_49))) - 2))) : 1) : (var_1_9 == ((signed short int) (max ((max (var_1_49 , var_1_37)) , var_1_37))))))) && ((((var_1_14 - var_1_33) ^ var_1_50) <= var_1_37) ? (var_1_13 == ((float) (max (var_1_15 , (min (999.6f , var_1_16)))))) : (var_1_13 == ((float) ((var_1_17 + var_1_18) - (abs (var_1_15))))))) && ((var_1_31 > var_1_49) ? (var_1_19 == ((double) ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25))))))) : (((5 / var_1_12) <= var_1_49) ? (var_1_19 == ((double) ((var_1_18 - 99.75) + 5.2))) : 1))) && ((var_1_16 == (max (var_1_18 , var_1_19))) ? ((! var_1_2) ? (var_1_22 == ((signed long int) (max (var_1_26 , var_1_33)))) : 1) : (((var_1_26 | var_1_33) < -5) ? ((var_1_2 && (var_1_46 == var_1_26)) ? (var_1_22 == ((signed long int) (var_1_33 - (var_1_23 - var_1_12)))) : (var_1_22 == ((signed long int) var_1_31))) : 1))) && (var_1_2 ? ((-5 >= last_1_var_1_30) ? ((last_1_var_1_30 >= last_1_var_1_49) ? (var_1_24 == ((signed long int) (last_1_var_1_49 + (5 - last_1_var_1_33)))) : (var_1_24 == ((signed long int) (last_1_var_1_24 + (last_1_var_1_30 + last_1_var_1_24))))) : (var_1_24 == ((signed long int) (-2 + last_1_var_1_1)))) : (var_1_24 == ((signed long int) last_1_var_1_37)))) && (var_1_2 ? (((var_1_33 / var_1_23) < 2) ? (var_1_25 == ((double) (abs (min (var_1_16 , 64.6))))) : 1) : (((var_1_21 + var_1_18) < (var_1_16 + 7.4)) ? (var_1_25 == ((double) (min (var_1_16 , var_1_21)))) : (var_1_25 == ((double) (var_1_17 - (min (31.5 , var_1_18)))))))) && ((last_1_var_1_33 == ((last_1_var_1_50 * last_1_var_1_22) >> (var_1_27 + var_1_28))) ? (var_1_2 ? (var_1_26 == ((unsigned long int) (var_1_29 - last_1_var_1_37))) : 1) : (var_1_26 == ((unsigned long int) (min ((max ((var_1_29 - last_1_var_1_37) , last_1_var_1_49)) , (abs (var_1_28)))))))) && (var_1_30 == ((signed char) (var_1_27 + var_1_28)))) && (((128 + var_1_28) > (~ var_1_23)) ? (var_1_31 == ((unsigned short int) ((min ((var_1_27 + var_1_28) , var_1_37)) + (var_1_37 + var_1_49)))) : 1)) && ((! var_1_2) ? (var_1_33 == ((unsigned char) (min ((max (var_1_28 , var_1_27)) , var_1_34)))) : (((var_1_29 & var_1_24) >= var_1_12) ? (var_1_33 == ((unsigned char) (abs (var_1_27 + var_1_28)))) : (((256.5 - var_1_17) >= var_1_21) ? (var_1_33 == ((unsigned char) (max (var_1_34 , var_1_28)))) : (var_1_33 == ((unsigned char) (min (var_1_34 , var_1_27)))))))) && (var_1_2 ? (var_1_35 == ((double) (var_1_21 + (min (var_1_36 , var_1_18))))) : (var_1_35 == ((double) (abs (var_1_18 + var_1_17)))))) && ((var_1_18 > (- var_1_35)) ? (var_1_37 == ((unsigned char) ((var_1_27 + var_1_28) + (var_1_38 + var_1_39)))) : 1)) && (((var_1_49 * var_1_23) == var_1_22) ? ((var_1_39 >= var_1_1) ? ((var_1_36 >= var_1_13) ? (var_1_40 == ((double) var_1_17)) : ((! (-8 <= (var_1_37 / var_1_12))) ? (var_1_40 == ((double) (min (var_1_17 , (abs (var_1_36)))))) : 1)) : 1) : (var_1_40 == ((double) ((var_1_18 - (max (var_1_17 , 16.8))) + (var_1_41 - var_1_42)))))) && ((var_1_19 < var_1_36) ? ((var_1_19 < var_1_17) ? (((var_1_22 * 64u) != var_1_37) ? (var_1_43 == ((signed short int) (var_1_37 + (var_1_38 + var_1_39)))) : (var_1_43 == ((signed short int) (max ((var_1_28 - 8) , (abs (var_1_37))))))) : (var_1_43 == ((signed short int) (max ((last_1_var_1_43 + (var_1_37 - 1)) , (var_1_33 - var_1_12)))))) : 1)) && ((((var_1_27 + var_1_39) - var_1_38) == (min (var_1_33 , (last_1_var_1_44 * 500)))) ? (var_1_2 ? (var_1_44 == ((signed long int) (min ((256 - 64) , var_1_50)))) : (var_1_44 == ((signed long int) ((min ((max (var_1_28 , 64)) , var_1_31)) + (min ((var_1_38 - var_1_34) , var_1_33)))))) : (var_1_44 == ((signed long int) (max (last_1_var_1_44 , ((var_1_33 + var_1_12) + var_1_33))))))) && (var_1_2 ? (var_1_45 == ((unsigned long int) (min (var_1_39 , var_1_38)))) : 1)) && ((var_1_26 == var_1_29) ? (var_1_46 == ((signed short int) (abs (var_1_12)))) : ((var_1_27 >= (var_1_47 - var_1_39)) ? ((((var_1_27 - var_1_34) < var_1_33) || (last_1_var_1_46 != var_1_39)) ? (var_1_46 == ((signed short int) (min (2 , var_1_49)))) : (var_1_46 == ((signed short int) ((var_1_38 + var_1_48) + (var_1_39 + (abs (var_1_28))))))) : (var_1_46 == ((signed short int) var_1_34))))) && (var_1_48 == ((signed long int) var_1_50))) && (var_1_49 == ((unsigned char) (var_1_28 + var_1_39)))) && ((var_1_31 <= var_1_31) ? (var_1_50 == ((signed char) (min (var_1_27 , (min ((var_1_28 - var_1_39) , (var_1_51 + var_1_52))))))) : (var_1_50 == ((signed char) var_1_51)))
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
