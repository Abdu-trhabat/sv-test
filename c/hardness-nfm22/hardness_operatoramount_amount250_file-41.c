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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 100000;
unsigned long int var_1_7 = 128;
unsigned long int var_1_8 = 4;
signed long int var_1_9 = -5;
signed long int var_1_10 = 1484384233;
float var_1_15 = 15.88;
signed long int var_1_17 = -1;
float var_1_18 = 32.4;
float var_1_19 = 9.2;
float var_1_20 = 5.75;
double var_1_21 = 999999999999999.8;
unsigned short int var_1_22 = 44379;
unsigned short int var_1_23 = 8;
double var_1_24 = 1.7;
double var_1_25 = 15.75;
double var_1_26 = 10.2;
unsigned char var_1_27 = 1;
double var_1_28 = 0.0;
double var_1_29 = 24.2;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 1;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 50;
unsigned long int var_1_34 = 8;
unsigned long int var_1_36 = 4091253961;
float var_1_37 = 8.7;
float var_1_38 = 99999999.125;
float var_1_39 = 0.5;
float var_1_40 = 0.0;
double var_1_41 = 32.5;
double var_1_42 = 64.8;
signed short int var_1_43 = -16;
signed short int var_1_44 = 16978;
signed char var_1_45 = -8;
signed char var_1_46 = 64;
signed char var_1_47 = -50;
double var_1_48 = 16.3;
signed long int var_1_49 = -1;
float var_1_50 = 127.4;
unsigned short int var_1_51 = 500;
unsigned short int var_1_52 = 46907;
unsigned short int var_1_53 = 52395;
unsigned long int var_1_54 = 0;
unsigned char var_1_55 = 0;
signed short int var_1_56 = 32;
signed short int var_1_58 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = -5;
unsigned char last_1_var_1_32 = 8;
signed char last_1_var_1_45 = -8;
unsigned long int last_1_var_1_54 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch41Amount250
	if (last_1_var_1_9 >= last_1_var_1_32) {
		if ((max (var_1_47 , last_1_var_1_32)) >= (last_1_var_1_54 / var_1_7)) {
			var_1_51 = (max (var_1_44 , var_1_33));
		} else {
			if ((- last_1_var_1_32) >= 256u) {
				if (last_1_var_1_45 < var_1_22) {
					var_1_51 = ((max (var_1_52 , var_1_53)) - (min ((last_1_var_1_45 + var_1_33) , (abs (var_1_44)))));
				} else {
					if (var_1_30 && ((last_1_var_1_32 >> var_1_44) < var_1_47)) {
						var_1_51 = (min (var_1_44 , var_1_33));
					} else {
						var_1_51 = last_1_var_1_32;
					}
				}
			} else {
				var_1_51 = ((abs (var_1_53)) - last_1_var_1_32);
			}
		}
	} else {
		var_1_51 = (var_1_52 - var_1_33);
	}


	// From: Req10Batch41Amount250
	unsigned short int stepLocal_6 = var_1_51;
	if ((-64 << var_1_51) >= stepLocal_6) {
		var_1_41 = ((var_1_28 - var_1_38) - var_1_29);
	}


	// From: Req16Batch41Amount250
	signed long int stepLocal_11 = var_1_33 + var_1_51;
	unsigned short int stepLocal_10 = var_1_51;
	if (-5 < stepLocal_11) {
		if (((~ 0) / var_1_17) < stepLocal_10) {
			var_1_50 = (abs (4.1f));
		} else {
			var_1_50 = (var_1_20 - (max (var_1_40 , var_1_28)));
		}
	} else {
		var_1_50 = (((abs (var_1_25)) + var_1_24) + (max (var_1_19 , -0.8f)));
	}


	// From: Req7Batch41Amount250
	signed long int stepLocal_4 = 61405 - var_1_23;
	if (stepLocal_4 > last_1_var_1_32) {
		var_1_32 = var_1_33;
	}


	// From: Req2Batch41Amount250
	if (var_1_32 >= (var_1_32 / var_1_8)) {
		var_1_9 = ((var_1_10 - var_1_51) - var_1_32);
	} else {
		var_1_9 = ((min ((var_1_10 - var_1_51) , var_1_32)) - (max (var_1_32 , var_1_32)));
	}


	// From: Req11Batch41Amount250
	if ((- 50.6f) >= var_1_50) {
		var_1_42 = (var_1_28 - var_1_29);
	}


	// From: Req5Batch41Amount250
	if (var_1_27) {
		var_1_26 = (max (63.75 , ((var_1_28 - 128.6) - (var_1_29 + 8.5))));
	} else {
		if (var_1_30) {
			var_1_26 = (var_1_19 + var_1_29);
		} else {
			if (var_1_32 > var_1_7) {
				var_1_26 = (var_1_20 - var_1_29);
			} else {
				var_1_26 = (var_1_29 + 64.25);
			}
		}
	}


	// From: Req6Batch41Amount250
	if (! var_1_27) {
		var_1_31 = (var_1_51 + var_1_32);
	} else {
		if (! var_1_27) {
			var_1_31 = var_1_32;
		}
	}


	// From: Req18Batch41Amount250
	if (var_1_27 && var_1_55) {
		var_1_54 = (abs ((max (var_1_51 , var_1_44)) + var_1_9));
	} else {
		if (var_1_51 <= var_1_51) {
			var_1_54 = var_1_36;
		} else {
			var_1_54 = (var_1_36 - 2u);
		}
	}


	// From: Req8Batch41Amount250
	if (((max (var_1_54 , var_1_8)) + var_1_10) == (var_1_51 * var_1_17)) {
		var_1_34 = (var_1_36 - var_1_54);
	} else {
		var_1_34 = var_1_51;
	}


	// From: Req9Batch41Amount250
	unsigned char stepLocal_5 = var_1_32;
	if (var_1_27) {
		var_1_37 = (var_1_29 + (max ((var_1_38 - var_1_39) , var_1_18)));
	} else {
		if (var_1_39 <= 10.25f) {
			var_1_37 = ((var_1_29 + var_1_38) - ((max (var_1_28 , var_1_40)) - var_1_39));
		} else {
			if (stepLocal_5 <= var_1_34) {
				var_1_37 = var_1_38;
			} else {
				var_1_37 = (abs (var_1_28));
			}
		}
	}


	// From: Req3Batch41Amount250
	unsigned long int stepLocal_1 = (var_1_32 / var_1_17) / var_1_8;
	unsigned short int stepLocal_0 = var_1_51;
	if (var_1_41 != (min ((min (var_1_42 , 7.375f)) , var_1_37))) {
		if (stepLocal_1 > var_1_51) {
			var_1_15 = ((abs (var_1_18 + var_1_19)) - var_1_20);
		}
	} else {
		if (var_1_51 != stepLocal_0) {
			var_1_15 = var_1_19;
		} else {
			var_1_15 = var_1_20;
		}
	}


	// From: Req14Batch41Amount250
	if (var_1_42 == var_1_37) {
		var_1_48 = (25.25 - (var_1_40 - var_1_38));
	} else {
		if (var_1_39 == (max (var_1_42 , var_1_38))) {
			var_1_48 = var_1_19;
		} else {
			var_1_48 = var_1_19;
		}
	}


	// From: Req1Batch41Amount250
	if ((- var_1_15) == var_1_37) {
		var_1_1 = (min (((abs (var_1_51)) + var_1_32) , var_1_51));
	} else {
		if (var_1_32 != (var_1_51 / (min (var_1_7 , var_1_8)))) {
			var_1_1 = (min (100000000u , (min ((2998348225u - var_1_32) , var_1_51))));
		}
	}


	// From: Req13Batch41Amount250
	unsigned long int stepLocal_9 = min (var_1_54 , var_1_22);
	unsigned char stepLocal_8 = var_1_30;
	if (var_1_27 && stepLocal_8) {
		var_1_45 = (abs (min (var_1_46 , var_1_47)));
	} else {
		if (stepLocal_9 != var_1_1) {
			var_1_45 = var_1_46;
		} else {
			var_1_45 = (max (var_1_47 , var_1_46));
		}
	}


	// From: Req12Batch41Amount250
	unsigned long int stepLocal_7 = var_1_32 * (2u << var_1_32);
	if (! var_1_27) {
		if (var_1_30) {
			var_1_43 = (min (var_1_1 , var_1_33));
		} else {
			var_1_43 = (abs (var_1_33 - (var_1_44 - var_1_1)));
		}
	} else {
		if (var_1_51 < stepLocal_7) {
			var_1_43 = ((max (var_1_1 , var_1_33)) - var_1_44);
		}
	}


	// From: Req19Batch41Amount250
	signed long int stepLocal_13 = var_1_10;
	signed long int stepLocal_12 = min (var_1_46 , var_1_32);
	if (var_1_30) {
		if (var_1_50 <= ((var_1_39 - var_1_40) * var_1_28)) {
			var_1_56 = (min (var_1_46 , (var_1_33 - var_1_32)));
		}
	} else {
		if (((var_1_32 / var_1_7) >> var_1_34) > stepLocal_13) {
			if ((var_1_53 + var_1_43) < stepLocal_12) {
				var_1_56 = var_1_32;
			} else {
				var_1_56 = var_1_32;
			}
		}
	}


	// From: Req20Batch41Amount250
	if (var_1_55) {
		var_1_58 = (((var_1_33 - var_1_31) + (var_1_45 + var_1_45)) + var_1_47);
	} else {
		var_1_58 = ((max (var_1_45 , var_1_46)) + var_1_45);
	}


	// From: Req4Batch41Amount250
	unsigned short int stepLocal_3 = var_1_51;
	signed short int stepLocal_2 = var_1_56;
	if (stepLocal_2 >= var_1_54) {
		if ((var_1_22 - var_1_32) < stepLocal_3) {
			var_1_21 = (max (var_1_18 , var_1_19));
		}
	} else {
		var_1_21 = ((256.8 - (abs (var_1_19))) + (var_1_24 + var_1_25));
	}


	// From: Req15Batch41Amount250
	if (var_1_27) {
		if (var_1_21 < 24.8f) {
			var_1_49 = (max (((var_1_51 + var_1_22) - var_1_51) , (abs (var_1_1))));
		} else {
			var_1_49 = var_1_34;
		}
	} else {
		var_1_49 = (min (var_1_10 , var_1_33));
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967295);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741822);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -230584.3009213691390e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691390e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -230584.3009213691390e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 4611686.018427382800e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 2147483647);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 4611686.018427382800e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 16383);
	assume_abort_if_not(var_1_44 <= 32766);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -126);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -126);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 32767);
	assume_abort_if_not(var_1_52 <= 65534);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 1);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_54 = var_1_54;
}

int property() {
	return (((((((((((((((((((((- var_1_15) == var_1_37) ? (var_1_1 == ((unsigned long int) (min (((abs (var_1_51)) + var_1_32) , var_1_51)))) : ((var_1_32 != (var_1_51 / (min (var_1_7 , var_1_8)))) ? (var_1_1 == ((unsigned long int) (min (100000000u , (min ((2998348225u - var_1_32) , var_1_51)))))) : 1)) && ((var_1_32 >= (var_1_32 / var_1_8)) ? (var_1_9 == ((signed long int) ((var_1_10 - var_1_51) - var_1_32))) : (var_1_9 == ((signed long int) ((min ((var_1_10 - var_1_51) , var_1_32)) - (max (var_1_32 , var_1_32))))))) && ((var_1_41 != (min ((min (var_1_42 , 7.375f)) , var_1_37))) ? ((((var_1_32 / var_1_17) / var_1_8) > var_1_51) ? (var_1_15 == ((float) ((abs (var_1_18 + var_1_19)) - var_1_20))) : 1) : ((var_1_51 != var_1_51) ? (var_1_15 == ((float) var_1_19)) : (var_1_15 == ((float) var_1_20))))) && ((var_1_56 >= var_1_54) ? (((var_1_22 - var_1_32) < var_1_51) ? (var_1_21 == ((double) (max (var_1_18 , var_1_19)))) : 1) : (var_1_21 == ((double) ((256.8 - (abs (var_1_19))) + (var_1_24 + var_1_25)))))) && (var_1_27 ? (var_1_26 == ((double) (max (63.75 , ((var_1_28 - 128.6) - (var_1_29 + 8.5)))))) : (var_1_30 ? (var_1_26 == ((double) (var_1_19 + var_1_29))) : ((var_1_32 > var_1_7) ? (var_1_26 == ((double) (var_1_20 - var_1_29))) : (var_1_26 == ((double) (var_1_29 + 64.25))))))) && ((! var_1_27) ? (var_1_31 == ((signed long int) (var_1_51 + var_1_32))) : ((! var_1_27) ? (var_1_31 == ((signed long int) var_1_32)) : 1))) && (((61405 - var_1_23) > last_1_var_1_32) ? (var_1_32 == ((unsigned char) var_1_33)) : 1)) && ((((max (var_1_54 , var_1_8)) + var_1_10) == (var_1_51 * var_1_17)) ? (var_1_34 == ((unsigned long int) (var_1_36 - var_1_54))) : (var_1_34 == ((unsigned long int) var_1_51)))) && (var_1_27 ? (var_1_37 == ((float) (var_1_29 + (max ((var_1_38 - var_1_39) , var_1_18))))) : ((var_1_39 <= 10.25f) ? (var_1_37 == ((float) ((var_1_29 + var_1_38) - ((max (var_1_28 , var_1_40)) - var_1_39)))) : ((var_1_32 <= var_1_34) ? (var_1_37 == ((float) var_1_38)) : (var_1_37 == ((float) (abs (var_1_28)))))))) && (((-64 << var_1_51) >= var_1_51) ? (var_1_41 == ((double) ((var_1_28 - var_1_38) - var_1_29))) : 1)) && (((- 50.6f) >= var_1_50) ? (var_1_42 == ((double) (var_1_28 - var_1_29))) : 1)) && ((! var_1_27) ? (var_1_30 ? (var_1_43 == ((signed short int) (min (var_1_1 , var_1_33)))) : (var_1_43 == ((signed short int) (abs (var_1_33 - (var_1_44 - var_1_1)))))) : ((var_1_51 < (var_1_32 * (2u << var_1_32))) ? (var_1_43 == ((signed short int) ((max (var_1_1 , var_1_33)) - var_1_44))) : 1))) && ((var_1_27 && var_1_30) ? (var_1_45 == ((signed char) (abs (min (var_1_46 , var_1_47))))) : (((min (var_1_54 , var_1_22)) != var_1_1) ? (var_1_45 == ((signed char) var_1_46)) : (var_1_45 == ((signed char) (max (var_1_47 , var_1_46))))))) && ((var_1_42 == var_1_37) ? (var_1_48 == ((double) (25.25 - (var_1_40 - var_1_38)))) : ((var_1_39 == (max (var_1_42 , var_1_38))) ? (var_1_48 == ((double) var_1_19)) : (var_1_48 == ((double) var_1_19))))) && (var_1_27 ? ((var_1_21 < 24.8f) ? (var_1_49 == ((signed long int) (max (((var_1_51 + var_1_22) - var_1_51) , (abs (var_1_1)))))) : (var_1_49 == ((signed long int) var_1_34))) : (var_1_49 == ((signed long int) (min (var_1_10 , var_1_33)))))) && ((-5 < (var_1_33 + var_1_51)) ? ((((~ 0) / var_1_17) < var_1_51) ? (var_1_50 == ((float) (abs (4.1f)))) : (var_1_50 == ((float) (var_1_20 - (max (var_1_40 , var_1_28)))))) : (var_1_50 == ((float) (((abs (var_1_25)) + var_1_24) + (max (var_1_19 , -0.8f))))))) && ((last_1_var_1_9 >= last_1_var_1_32) ? (((max (var_1_47 , last_1_var_1_32)) >= (last_1_var_1_54 / var_1_7)) ? (var_1_51 == ((unsigned short int) (max (var_1_44 , var_1_33)))) : (((- last_1_var_1_32) >= 256u) ? ((last_1_var_1_45 < var_1_22) ? (var_1_51 == ((unsigned short int) ((max (var_1_52 , var_1_53)) - (min ((last_1_var_1_45 + var_1_33) , (abs (var_1_44))))))) : ((var_1_30 && ((last_1_var_1_32 >> var_1_44) < var_1_47)) ? (var_1_51 == ((unsigned short int) (min (var_1_44 , var_1_33)))) : (var_1_51 == ((unsigned short int) last_1_var_1_32)))) : (var_1_51 == ((unsigned short int) ((abs (var_1_53)) - last_1_var_1_32))))) : (var_1_51 == ((unsigned short int) (var_1_52 - var_1_33))))) && ((var_1_27 && var_1_55) ? (var_1_54 == ((unsigned long int) (abs ((max (var_1_51 , var_1_44)) + var_1_9)))) : ((var_1_51 <= var_1_51) ? (var_1_54 == ((unsigned long int) var_1_36)) : (var_1_54 == ((unsigned long int) (var_1_36 - 2u)))))) && (var_1_30 ? ((var_1_50 <= ((var_1_39 - var_1_40) * var_1_28)) ? (var_1_56 == ((signed short int) (min (var_1_46 , (var_1_33 - var_1_32))))) : 1) : ((((var_1_32 / var_1_7) >> var_1_34) > var_1_10) ? (((var_1_53 + var_1_43) < (min (var_1_46 , var_1_32))) ? (var_1_56 == ((signed short int) var_1_32)) : (var_1_56 == ((signed short int) var_1_32))) : 1))) && (var_1_55 ? (var_1_58 == ((signed short int) (((var_1_33 - var_1_31) + (var_1_45 + var_1_45)) + var_1_47))) : (var_1_58 == ((signed short int) ((max (var_1_45 , var_1_46)) + var_1_45))))
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
