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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4Amount250.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
signed short int var_1_4 = 31024;
signed short int var_1_5 = 4;
signed short int var_1_6 = 0;
signed short int var_1_7 = -16;
signed long int var_1_8 = 32;
unsigned short int var_1_9 = 41562;
signed short int var_1_10 = 64;
unsigned char var_1_11 = 1;
float var_1_13 = 8.75;
float var_1_14 = 256.2;
signed long int var_1_15 = -2;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 8;
unsigned short int var_1_19 = 10000;
unsigned short int var_1_20 = 10000;
unsigned short int var_1_21 = 23008;
signed long int var_1_22 = 2;
signed char var_1_23 = 32;
signed char var_1_24 = 32;
double var_1_25 = 1.375;
signed short int var_1_26 = -100;
unsigned long int var_1_27 = 32;
signed char var_1_28 = -128;
signed char var_1_29 = 8;
signed char var_1_30 = 16;
signed char var_1_31 = 8;
signed char var_1_32 = -4;
signed char var_1_33 = -10;
signed char var_1_34 = 2;
signed char var_1_35 = -8;
signed char var_1_36 = 1;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 64;
unsigned short int var_1_40 = 10;
unsigned short int var_1_41 = 54754;
signed short int var_1_42 = -100;
unsigned char var_1_43 = 0;
signed char var_1_44 = -2;
signed char var_1_45 = -16;
double var_1_46 = 255.75;
double var_1_47 = 32.3;
double var_1_48 = 0.0;
double var_1_49 = 32.5;
double var_1_50 = 15.25;
double var_1_51 = 0.8;
double var_1_52 = 3.2;
double var_1_53 = 0.19999999999999996;
double var_1_54 = 15.75;
unsigned long int var_1_55 = 64;
signed long int var_1_56 = 256;
signed long int var_1_57 = 256;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_10 = 64;
signed long int last_1_var_1_22 = 2;
signed long int last_1_var_1_56 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch4Amount250
	signed long int stepLocal_14 = last_1_var_1_56;
	signed long int stepLocal_13 = var_1_41 * var_1_36;
	if (last_1_var_1_10 < stepLocal_13) {
		if (last_1_var_1_22 >= stepLocal_14) {
			var_1_46 = (var_1_47 - ((abs (var_1_48)) - (abs (var_1_49))));
		} else {
			if ((min (var_1_47 , var_1_13)) != var_1_14) {
				var_1_46 = ((var_1_50 - var_1_51) + var_1_49);
			} else {
				if (var_1_11) {
					var_1_46 = (min (var_1_49 , var_1_48));
				} else {
					var_1_46 = (max (var_1_47 , ((min (3.2 , var_1_50)) + var_1_52)));
				}
			}
		}
	} else {
		if (var_1_49 > 10.5) {
			var_1_46 = ((max ((max (var_1_47 , var_1_51)) , var_1_50)) - var_1_53);
		} else {
			var_1_46 = (var_1_53 - (var_1_50 + (var_1_54 + 4.625)));
		}
	}


	// From: Req7Batch4Amount250
	signed long int stepLocal_7 = -256;
	if (var_1_7 >= stepLocal_7) {
		var_1_26 = ((min (var_1_20 , (max (var_1_19 , var_1_23)))) - var_1_5);
	} else {
		var_1_26 = (4 + var_1_24);
	}


	// From: Req9Batch4Amount250
	if (var_1_24 < (max (var_1_20 , var_1_6))) {
		var_1_28 = (((var_1_29 + var_1_30) + var_1_23) - var_1_31);
	}


	// From: Req12Batch4Amount250
	if (var_1_11) {
		var_1_37 = (min (var_1_23 , (max (var_1_31 , var_1_24))));
	} else {
		var_1_37 = ((200 - var_1_29) - ((max (var_1_38 , var_1_39)) - var_1_30));
	}


	// From: Req15Batch4Amount250
	if ((var_1_6 + var_1_29) == -500) {
		var_1_43 = var_1_30;
	}


	// From: Req17Batch4Amount250
	if (var_1_16) {
		var_1_45 = (var_1_31 - (max (var_1_23 , var_1_29)));
	} else {
		var_1_45 = ((abs (var_1_29)) - var_1_31);
	}


	// From: Req19Batch4Amount250
	if (var_1_11) {
		var_1_55 = var_1_23;
	}


	// From: Req20Batch4Amount250
	if (var_1_16) {
		var_1_56 = var_1_41;
	}


	// From: Req6Batch4Amount250
	signed long int stepLocal_6 = (10 + var_1_23) - var_1_24;
	if (stepLocal_6 > ((max (var_1_20 , var_1_5)) - var_1_9)) {
		var_1_22 = var_1_56;
	} else {
		if ((var_1_46 + (3.375 * var_1_46)) <= (abs (var_1_46))) {
			var_1_22 = (var_1_5 - (32 + var_1_56));
		} else {
			var_1_22 = (var_1_6 - (abs (var_1_56)));
		}
	}


	// From: Req2Batch4Amount250
	signed long int stepLocal_4 = 5 * var_1_6;
	signed short int stepLocal_3 = var_1_4;
	if (stepLocal_3 <= var_1_55) {
		if (((min (64513 , var_1_9)) - var_1_4) >= stepLocal_4) {
			var_1_8 = (max (var_1_6 , var_1_7));
		} else {
			var_1_8 = (var_1_5 - (abs (var_1_4)));
		}
	} else {
		var_1_8 = var_1_5;
	}


	// From: Req4Batch4Amount250
	if ((var_1_7 + var_1_4) <= var_1_6) {
		var_1_15 = (min (-4 , var_1_56));
	}


	// From: Req13Batch4Amount250
	unsigned long int stepLocal_11 = (var_1_55 - var_1_21) / -10;
	if ((var_1_24 ^ var_1_5) < stepLocal_11) {
		var_1_40 = var_1_24;
	} else {
		var_1_40 = ((var_1_41 - (var_1_20 - var_1_39)) - var_1_31);
	}


	// From: Req16Batch4Amount250
	if (var_1_9 >= var_1_22) {
		if ((var_1_14 * var_1_13) <= var_1_25) {
			var_1_44 = (var_1_23 + var_1_30);
		}
	}


	// From: Req1Batch4Amount250
	signed long int stepLocal_2 = var_1_8;
	signed long int stepLocal_1 = var_1_56 * (var_1_8 + var_1_4);
	signed long int stepLocal_0 = var_1_56;
	if (var_1_56 <= stepLocal_2) {
		if ((- var_1_8) > stepLocal_0) {
			var_1_1 = ((var_1_4 - var_1_5) - var_1_6);
		}
	} else {
		if (stepLocal_1 > var_1_6) {
			var_1_1 = (var_1_5 + var_1_7);
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req8Batch4Amount250
	unsigned short int stepLocal_8 = var_1_20;
	if (stepLocal_8 < 64) {
		var_1_27 = (min (var_1_9 , var_1_40));
	}


	// From: Req21Batch4Amount250
	unsigned long int stepLocal_15 = var_1_27;
	if (stepLocal_15 < var_1_24) {
		var_1_57 = ((abs (var_1_34)) - (max (var_1_6 , var_1_24)));
	} else {
		if ((- var_1_46) != var_1_46) {
			var_1_57 = var_1_15;
		}
	}


	// From: Req5Batch4Amount250
	signed short int stepLocal_5 = var_1_5;
	if ((var_1_27 / var_1_9) != stepLocal_5) {
		var_1_17 = (min (32 , var_1_5));
	} else {
		var_1_17 = (((var_1_19 + var_1_20) + var_1_21) - var_1_6);
	}


	// From: Req10Batch4Amount250
	signed long int stepLocal_10 = var_1_30 ^ var_1_20;
	signed short int stepLocal_9 = var_1_4;
	if (var_1_24 <= stepLocal_9) {
		if (! (var_1_30 == var_1_5)) {
			var_1_32 = (var_1_23 + ((var_1_29 - var_1_30) + (min (var_1_33 , var_1_34))));
		}
	} else {
		if (! var_1_16) {
			if (((var_1_29 & var_1_57) / 8u) < stepLocal_10) {
				var_1_32 = var_1_33;
			} else {
				var_1_32 = (var_1_29 + var_1_34);
			}
		} else {
			var_1_32 = (var_1_31 - var_1_29);
		}
	}


	// From: Req11Batch4Amount250
	if (var_1_11) {
		if ((- var_1_19) > var_1_4) {
			var_1_35 = (var_1_29 - var_1_30);
		} else {
			if (var_1_5 >= 2) {
				var_1_35 = (5 + var_1_29);
			} else {
				if (((var_1_30 << var_1_27) * var_1_7) >= ((min (var_1_17 , var_1_5)) << var_1_9)) {
					if ((var_1_23 << var_1_22) != var_1_4) {
						var_1_35 = (var_1_23 - var_1_30);
					} else {
						var_1_35 = (min (var_1_30 , (var_1_36 - var_1_23)));
					}
				} else {
					var_1_35 = (var_1_23 + var_1_30);
				}
			}
		}
	} else {
		var_1_35 = (var_1_30 - 8);
	}


	// From: Req14Batch4Amount250
	signed long int stepLocal_12 = -8 / var_1_38;
	if (stepLocal_12 >= ((var_1_17 / var_1_21) / var_1_20)) {
		var_1_42 = (max (-200 , var_1_45));
	} else {
		var_1_42 = (max ((max (var_1_34 , var_1_36)) , var_1_4));
	}


	// From: Req3Batch4Amount250
	if ((abs (var_1_57)) > var_1_6) {
		if (var_1_4 > var_1_7) {
			if ((var_1_9 >= (var_1_4 * var_1_22)) && var_1_11) {
				var_1_10 = (var_1_4 - 500);
			}
		} else {
			if (-5 >= (min (var_1_7 , var_1_22))) {
				var_1_10 = var_1_7;
			} else {
				if (var_1_22 > (var_1_9 - 32)) {
					var_1_10 = (min ((min (var_1_5 , var_1_6)) , var_1_7));
				} else {
					if ((abs (- var_1_46)) >= var_1_46) {
						var_1_10 = var_1_7;
					} else {
						var_1_10 = 64;
					}
				}
			}
		}
	} else {
		var_1_10 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 16382);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 8191);
	assume_abort_if_not(var_1_19 <= 16384);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 8192);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16384);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 31);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -31);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 49150);
	assume_abort_if_not(var_1_41 <= 65534);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= -461168.6018427383000e+13F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_56 = var_1_56;
}

int property(void) {
	return (((((((((((((((((((((var_1_56 <= var_1_8) ? (((- var_1_8) > var_1_56) ? (var_1_1 == ((signed short int) ((var_1_4 - var_1_5) - var_1_6))) : 1) : (((var_1_56 * (var_1_8 + var_1_4)) > var_1_6) ? (var_1_1 == ((signed short int) (var_1_5 + var_1_7))) : (var_1_1 == ((signed short int) var_1_6)))) && ((var_1_4 <= var_1_55) ? ((((min (64513 , var_1_9)) - var_1_4) >= (5 * var_1_6)) ? (var_1_8 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_8 == ((signed long int) (var_1_5 - (abs (var_1_4)))))) : (var_1_8 == ((signed long int) var_1_5)))) && (((abs (var_1_57)) > var_1_6) ? ((var_1_4 > var_1_7) ? (((var_1_9 >= (var_1_4 * var_1_22)) && var_1_11) ? (var_1_10 == ((signed short int) (var_1_4 - 500))) : 1) : ((-5 >= (min (var_1_7 , var_1_22))) ? (var_1_10 == ((signed short int) var_1_7)) : ((var_1_22 > (var_1_9 - 32)) ? (var_1_10 == ((signed short int) (min ((min (var_1_5 , var_1_6)) , var_1_7)))) : (((abs (- var_1_46)) >= var_1_46) ? (var_1_10 == ((signed short int) var_1_7)) : (var_1_10 == ((signed short int) 64)))))) : (var_1_10 == ((signed short int) var_1_7)))) && (((var_1_7 + var_1_4) <= var_1_6) ? (var_1_15 == ((signed long int) (min (-4 , var_1_56)))) : 1)) && (((var_1_27 / var_1_9) != var_1_5) ? (var_1_17 == ((unsigned short int) (min (32 , var_1_5)))) : (var_1_17 == ((unsigned short int) (((var_1_19 + var_1_20) + var_1_21) - var_1_6))))) && ((((10 + var_1_23) - var_1_24) > ((max (var_1_20 , var_1_5)) - var_1_9)) ? (var_1_22 == ((signed long int) var_1_56)) : (((var_1_46 + (3.375 * var_1_46)) <= (abs (var_1_46))) ? (var_1_22 == ((signed long int) (var_1_5 - (32 + var_1_56)))) : (var_1_22 == ((signed long int) (var_1_6 - (abs (var_1_56)))))))) && ((var_1_7 >= -256) ? (var_1_26 == ((signed short int) ((min (var_1_20 , (max (var_1_19 , var_1_23)))) - var_1_5))) : (var_1_26 == ((signed short int) (4 + var_1_24))))) && ((var_1_20 < 64) ? (var_1_27 == ((unsigned long int) (min (var_1_9 , var_1_40)))) : 1)) && ((var_1_24 < (max (var_1_20 , var_1_6))) ? (var_1_28 == ((signed char) (((var_1_29 + var_1_30) + var_1_23) - var_1_31))) : 1)) && ((var_1_24 <= var_1_4) ? ((! (var_1_30 == var_1_5)) ? (var_1_32 == ((signed char) (var_1_23 + ((var_1_29 - var_1_30) + (min (var_1_33 , var_1_34)))))) : 1) : ((! var_1_16) ? ((((var_1_29 & var_1_57) / 8u) < (var_1_30 ^ var_1_20)) ? (var_1_32 == ((signed char) var_1_33)) : (var_1_32 == ((signed char) (var_1_29 + var_1_34)))) : (var_1_32 == ((signed char) (var_1_31 - var_1_29)))))) && (var_1_11 ? (((- var_1_19) > var_1_4) ? (var_1_35 == ((signed char) (var_1_29 - var_1_30))) : ((var_1_5 >= 2) ? (var_1_35 == ((signed char) (5 + var_1_29))) : ((((var_1_30 << var_1_27) * var_1_7) >= ((min (var_1_17 , var_1_5)) << var_1_9)) ? (((var_1_23 << var_1_22) != var_1_4) ? (var_1_35 == ((signed char) (var_1_23 - var_1_30))) : (var_1_35 == ((signed char) (min (var_1_30 , (var_1_36 - var_1_23)))))) : (var_1_35 == ((signed char) (var_1_23 + var_1_30)))))) : (var_1_35 == ((signed char) (var_1_30 - 8))))) && (var_1_11 ? (var_1_37 == ((unsigned char) (min (var_1_23 , (max (var_1_31 , var_1_24)))))) : (var_1_37 == ((unsigned char) ((200 - var_1_29) - ((max (var_1_38 , var_1_39)) - var_1_30)))))) && (((var_1_24 ^ var_1_5) < ((var_1_55 - var_1_21) / -10)) ? (var_1_40 == ((unsigned short int) var_1_24)) : (var_1_40 == ((unsigned short int) ((var_1_41 - (var_1_20 - var_1_39)) - var_1_31))))) && (((-8 / var_1_38) >= ((var_1_17 / var_1_21) / var_1_20)) ? (var_1_42 == ((signed short int) (max (-200 , var_1_45)))) : (var_1_42 == ((signed short int) (max ((max (var_1_34 , var_1_36)) , var_1_4)))))) && (((var_1_6 + var_1_29) == -500) ? (var_1_43 == ((unsigned char) var_1_30)) : 1)) && ((var_1_9 >= var_1_22) ? (((var_1_14 * var_1_13) <= var_1_25) ? (var_1_44 == ((signed char) (var_1_23 + var_1_30))) : 1) : 1)) && (var_1_16 ? (var_1_45 == ((signed char) (var_1_31 - (max (var_1_23 , var_1_29))))) : (var_1_45 == ((signed char) ((abs (var_1_29)) - var_1_31))))) && ((last_1_var_1_10 < (var_1_41 * var_1_36)) ? ((last_1_var_1_22 >= last_1_var_1_56) ? (var_1_46 == ((double) (var_1_47 - ((abs (var_1_48)) - (abs (var_1_49)))))) : (((min (var_1_47 , var_1_13)) != var_1_14) ? (var_1_46 == ((double) ((var_1_50 - var_1_51) + var_1_49))) : (var_1_11 ? (var_1_46 == ((double) (min (var_1_49 , var_1_48)))) : (var_1_46 == ((double) (max (var_1_47 , ((min (3.2 , var_1_50)) + var_1_52)))))))) : ((var_1_49 > 10.5) ? (var_1_46 == ((double) ((max ((max (var_1_47 , var_1_51)) , var_1_50)) - var_1_53))) : (var_1_46 == ((double) (var_1_53 - (var_1_50 + (var_1_54 + 4.625)))))))) && (var_1_11 ? (var_1_55 == ((unsigned long int) var_1_23)) : 1)) && (var_1_16 ? (var_1_56 == ((signed long int) var_1_41)) : 1)) && ((var_1_27 < var_1_24) ? (var_1_57 == ((signed long int) ((abs (var_1_34)) - (max (var_1_6 , var_1_24))))) : (((- var_1_46) != var_1_46) ? (var_1_57 == ((signed long int) var_1_15)) : 1))
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
