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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 4;
float var_1_6 = 63.375;
float var_1_7 = 2.875;
float var_1_8 = 128.6;
float var_1_9 = 128.75;
signed char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed char var_1_12 = 4;
signed char var_1_13 = 32;
signed char var_1_14 = 32;
signed char var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 2;
unsigned char var_1_23 = 128;
signed char var_1_24 = -100;
signed char var_1_25 = 5;
float var_1_26 = 16.5;
float var_1_27 = 63.5;
double var_1_28 = 0.75;
double var_1_29 = 9.25;
double var_1_30 = 0.0;
double var_1_31 = 127.25;
double var_1_32 = 1.25;
float var_1_33 = 0.95;
unsigned char var_1_34 = 128;
float var_1_35 = 99.6;
unsigned long int var_1_36 = 5;
signed char var_1_37 = 0;
float var_1_38 = 0.25;
unsigned short int var_1_39 = 0;
signed char var_1_40 = -64;
signed char var_1_41 = 16;
unsigned char var_1_43 = 2;
unsigned char var_1_44 = 200;
unsigned char var_1_45 = 200;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 8;
unsigned char var_1_49 = 8;
signed long int var_1_50 = 1;
signed long int var_1_51 = 1880014643;
signed long int var_1_52 = 1000000000;
unsigned long int var_1_53 = 16;
signed long int var_1_54 = 1852597136;
unsigned long int var_1_55 = 1811387003;
unsigned long int var_1_56 = 2103772385;
signed long int var_1_58 = -500;
unsigned long int var_1_59 = 3684680272;
signed long int var_1_60 = -2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
signed char last_1_var_1_10 = 1;
unsigned char last_1_var_1_21 = 2;
float last_1_var_1_26 = 16.5;
double last_1_var_1_28 = 0.75;
unsigned long int last_1_var_1_36 = 5;
signed char last_1_var_1_37 = 0;
signed char last_1_var_1_40 = -64;
unsigned char last_1_var_1_43 = 2;
signed long int last_1_var_1_50 = 1;
signed long int last_1_var_1_58 = -500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch71Amount250
	if ((last_1_var_1_1 * var_1_34) >= var_1_51) {
		if (! ((abs (var_1_12)) >= (last_1_var_1_10 | last_1_var_1_1))) {
			if (var_1_8 < last_1_var_1_28) {
				if ((- (last_1_var_1_37 + last_1_var_1_43)) > (var_1_59 - var_1_56)) {
					var_1_58 = (last_1_var_1_1 + var_1_52);
				} else {
					var_1_58 = (min ((var_1_52 - (max (var_1_47 , var_1_44))) , (max (var_1_25 , last_1_var_1_10))));
				}
			} else {
				if (var_1_55 > 2u) {
					if (var_1_51 <= ((last_1_var_1_21 + last_1_var_1_40) | (last_1_var_1_37 / var_1_46))) {
						var_1_58 = var_1_25;
					} else {
						var_1_58 = var_1_13;
					}
				} else {
					var_1_58 = -100000000;
				}
			}
		} else {
			var_1_58 = var_1_41;
		}
	} else {
		var_1_58 = var_1_34;
	}


	// From: Req4Batch71Amount250
	signed long int stepLocal_2 = last_1_var_1_50;
	signed char stepLocal_1 = var_1_12;
	unsigned long int stepLocal_0 = last_1_var_1_36;
	if (var_1_15 > stepLocal_0) {
		if (last_1_var_1_58 > stepLocal_2) {
			if (last_1_var_1_26 > (var_1_8 + 50.5)) {
				var_1_16 = (var_1_11 && (var_1_18 || var_1_19));
			} else {
				var_1_16 = (! var_1_20);
			}
		} else {
			var_1_16 = ((64 > -10) || var_1_20);
		}
	} else {
		if ((last_1_var_1_50 + var_1_14) >= stepLocal_1) {
			if (last_1_var_1_26 == var_1_7) {
				var_1_16 = ((var_1_18 || (! var_1_20)) || var_1_19);
			}
		} else {
			if (var_1_20) {
				var_1_16 = (var_1_18 && var_1_19);
			} else {
				var_1_16 = var_1_18;
			}
		}
	}


	// From: Req3Batch71Amount250
	if (var_1_16) {
		var_1_10 = var_1_12;
	} else {
		var_1_10 = (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4);
	}


	// From: Req10Batch71Amount250
	unsigned char stepLocal_7 = var_1_23;
	unsigned char stepLocal_6 = var_1_23;
	if (stepLocal_7 <= (var_1_34 - var_1_14)) {
		if ((min ((var_1_14 * var_1_15) , (var_1_10 - var_1_5))) <= stepLocal_6) {
			var_1_33 = var_1_8;
		} else {
			var_1_33 = (max ((var_1_7 + var_1_32) , (var_1_35 - var_1_31)));
		}
	}


	// From: Req2Batch71Amount250
	var_1_6 = (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9));


	// From: Req6Batch71Amount250
	var_1_24 = (((var_1_15 - 1) + var_1_25) + var_1_14);


	// From: Req8Batch71Amount250
	signed long int stepLocal_5 = abs (min (var_1_15 , var_1_12));
	if (stepLocal_5 <= var_1_23) {
		var_1_28 = var_1_8;
	}


	// From: Req12Batch71Amount250
	var_1_37 = (((var_1_15 + 4) + var_1_14) - var_1_13);


	// From: Req13Batch71Amount250
	if (var_1_20) {
		var_1_38 = (abs (99.25f));
	} else {
		var_1_38 = (var_1_32 + 9.99999999999975E12f);
	}


	// From: Req14Batch71Amount250
	if (! var_1_18) {
		if (var_1_19) {
			var_1_39 = var_1_14;
		} else {
			var_1_39 = (max (var_1_15 , var_1_13));
		}
	} else {
		var_1_39 = 8;
	}


	// From: Req7Batch71Amount250
	if ((var_1_38 != 49.5) || var_1_16) {
		var_1_26 = (max ((var_1_7 - var_1_27) , var_1_9));
	}


	// From: Req9Batch71Amount250
	if (var_1_6 <= ((min (var_1_9 , var_1_7)) * (- var_1_38))) {
		var_1_29 = (min (((var_1_30 - var_1_7) - (var_1_31 + var_1_32)) , var_1_27));
	} else {
		var_1_29 = (var_1_7 + (var_1_32 - var_1_31));
	}


	// From: Req16Batch71Amount250
	unsigned char stepLocal_8 = var_1_30 >= var_1_35;
	if ((var_1_38 + var_1_29) <= var_1_6) {
		var_1_43 = (((min (var_1_44 , var_1_45)) - var_1_13) - var_1_15);
	} else {
		if ((var_1_38 / var_1_30) > var_1_6) {
			if (var_1_16 && stepLocal_8) {
				var_1_43 = ((var_1_46 - 25) + var_1_15);
			}
		} else {
			var_1_43 = ((var_1_13 + (var_1_15 + var_1_47)) + (var_1_14 + (var_1_48 + var_1_49)));
		}
	}


	// From: Req1Batch71Amount250
	if (var_1_26 == var_1_33) {
		var_1_1 = (min (var_1_5 , 0));
	}


	// From: Req20Batch71Amount250
	unsigned char stepLocal_13 = var_1_19;
	if ((var_1_16 || (var_1_1 > var_1_52)) && stepLocal_13) {
		var_1_60 = (var_1_47 + (min (var_1_37 , var_1_49)));
	} else {
		if (var_1_16) {
			var_1_60 = var_1_13;
		}
	}


	// From: Req18Batch71Amount250
	signed long int stepLocal_12 = var_1_60 - var_1_52;
	if (var_1_30 >= (var_1_27 / 15.4)) {
		var_1_53 = (max (var_1_46 , (min ((min (var_1_58 , var_1_60)) , (max (var_1_14 , var_1_15))))));
	} else {
		if (stepLocal_12 < ((var_1_54 - var_1_60) - var_1_5)) {
			if (var_1_16) {
				var_1_53 = ((var_1_54 + var_1_55) - (var_1_56 - var_1_58));
			} else {
				var_1_53 = (max ((var_1_15 + (var_1_58 + var_1_5)) , 2u));
			}
		} else {
			var_1_53 = (max ((var_1_49 + (var_1_52 + var_1_44)) , var_1_39));
		}
	}


	// From: Req5Batch71Amount250
	signed char stepLocal_4 = var_1_13;
	unsigned long int stepLocal_3 = var_1_53;
	if (var_1_20) {
		if (stepLocal_4 <= var_1_12) {
			if (stepLocal_3 > var_1_37) {
				var_1_21 = (var_1_14 + var_1_13);
			} else {
				var_1_21 = (var_1_23 - var_1_14);
			}
		}
	} else {
		var_1_21 = var_1_13;
	}


	// From: Req15Batch71Amount250
	if ((var_1_13 / var_1_14) >= var_1_58) {
		var_1_40 = ((var_1_15 - var_1_13) + (abs (var_1_25 + var_1_41)));
	} else {
		if ((5 * (var_1_43 - 1)) <= ((var_1_14 * var_1_58) << var_1_41)) {
			if (256 == var_1_24) {
				var_1_40 = var_1_41;
			} else {
				if (var_1_31 != var_1_9) {
					var_1_40 = var_1_12;
				}
			}
		} else {
			var_1_40 = (abs (var_1_13));
		}
	}


	// From: Req11Batch71Amount250
	if ((- var_1_35) > var_1_9) {
		var_1_36 = (var_1_53 + var_1_37);
	} else {
		var_1_36 = ((var_1_5 + var_1_53) + var_1_15);
	}


	// From: Req17Batch71Amount250
	unsigned char stepLocal_11 = var_1_23;
	unsigned long int stepLocal_10 = var_1_15 - var_1_53;
	signed long int stepLocal_9 = var_1_41 / (max (var_1_23 , 32));
	if ((4 / var_1_44) > stepLocal_10) {
		if (var_1_6 <= var_1_9) {
			var_1_50 = 2;
		}
	} else {
		if (var_1_43 == stepLocal_11) {
			if (stepLocal_9 >= var_1_43) {
				var_1_50 = last_1_var_1_50;
			} else {
				var_1_50 = ((var_1_51 - (var_1_52 - var_1_48)) - var_1_23);
			}
		} else {
			var_1_50 = var_1_43;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 31);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -31);
	assume_abort_if_not(var_1_25 <= 31);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 4611686.018427382800e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 255);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -31);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 190);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 190);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 31);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1073741822);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= 536870911);
	assume_abort_if_not(var_1_52 <= 1073741823);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= 1073741823);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 1073741824);
	assume_abort_if_not(var_1_55 <= 2147483647);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 1073741823);
	assume_abort_if_not(var_1_56 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_58 = var_1_58;
}

int property() {
	return ((((((((((((((((((((var_1_26 == var_1_33) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 0)))) : 1) && (var_1_6 == ((float) (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9))))) && (var_1_16 ? (var_1_10 == ((signed char) var_1_12)) : (var_1_10 == ((signed char) (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4))))) && ((var_1_15 > last_1_var_1_36) ? ((last_1_var_1_58 > last_1_var_1_50) ? ((last_1_var_1_26 > (var_1_8 + 50.5)) ? (var_1_16 == ((unsigned char) (var_1_11 && (var_1_18 || var_1_19)))) : (var_1_16 == ((unsigned char) (! var_1_20)))) : (var_1_16 == ((unsigned char) ((64 > -10) || var_1_20)))) : (((last_1_var_1_50 + var_1_14) >= var_1_12) ? ((last_1_var_1_26 == var_1_7) ? (var_1_16 == ((unsigned char) ((var_1_18 || (! var_1_20)) || var_1_19))) : 1) : (var_1_20 ? (var_1_16 == ((unsigned char) (var_1_18 && var_1_19))) : (var_1_16 == ((unsigned char) var_1_18)))))) && (var_1_20 ? ((var_1_13 <= var_1_12) ? ((var_1_53 > var_1_37) ? (var_1_21 == ((unsigned char) (var_1_14 + var_1_13))) : (var_1_21 == ((unsigned char) (var_1_23 - var_1_14)))) : 1) : (var_1_21 == ((unsigned char) var_1_13)))) && (var_1_24 == ((signed char) (((var_1_15 - 1) + var_1_25) + var_1_14)))) && (((var_1_38 != 49.5) || var_1_16) ? (var_1_26 == ((float) (max ((var_1_7 - var_1_27) , var_1_9)))) : 1)) && (((abs (min (var_1_15 , var_1_12))) <= var_1_23) ? (var_1_28 == ((double) var_1_8)) : 1)) && ((var_1_6 <= ((min (var_1_9 , var_1_7)) * (- var_1_38))) ? (var_1_29 == ((double) (min (((var_1_30 - var_1_7) - (var_1_31 + var_1_32)) , var_1_27)))) : (var_1_29 == ((double) (var_1_7 + (var_1_32 - var_1_31)))))) && ((var_1_23 <= (var_1_34 - var_1_14)) ? (((min ((var_1_14 * var_1_15) , (var_1_10 - var_1_5))) <= var_1_23) ? (var_1_33 == ((float) var_1_8)) : (var_1_33 == ((float) (max ((var_1_7 + var_1_32) , (var_1_35 - var_1_31)))))) : 1)) && (((- var_1_35) > var_1_9) ? (var_1_36 == ((unsigned long int) (var_1_53 + var_1_37))) : (var_1_36 == ((unsigned long int) ((var_1_5 + var_1_53) + var_1_15))))) && (var_1_37 == ((signed char) (((var_1_15 + 4) + var_1_14) - var_1_13)))) && (var_1_20 ? (var_1_38 == ((float) (abs (99.25f)))) : (var_1_38 == ((float) (var_1_32 + 9.99999999999975E12f))))) && ((! var_1_18) ? (var_1_19 ? (var_1_39 == ((unsigned short int) var_1_14)) : (var_1_39 == ((unsigned short int) (max (var_1_15 , var_1_13))))) : (var_1_39 == ((unsigned short int) 8)))) && (((var_1_13 / var_1_14) >= var_1_58) ? (var_1_40 == ((signed char) ((var_1_15 - var_1_13) + (abs (var_1_25 + var_1_41))))) : (((5 * (var_1_43 - 1)) <= ((var_1_14 * var_1_58) << var_1_41)) ? ((256 == var_1_24) ? (var_1_40 == ((signed char) var_1_41)) : ((var_1_31 != var_1_9) ? (var_1_40 == ((signed char) var_1_12)) : 1)) : (var_1_40 == ((signed char) (abs (var_1_13))))))) && (((var_1_38 + var_1_29) <= var_1_6) ? (var_1_43 == ((unsigned char) (((min (var_1_44 , var_1_45)) - var_1_13) - var_1_15))) : (((var_1_38 / var_1_30) > var_1_6) ? ((var_1_16 && (var_1_30 >= var_1_35)) ? (var_1_43 == ((unsigned char) ((var_1_46 - 25) + var_1_15))) : 1) : (var_1_43 == ((unsigned char) ((var_1_13 + (var_1_15 + var_1_47)) + (var_1_14 + (var_1_48 + var_1_49)))))))) && (((4 / var_1_44) > (var_1_15 - var_1_53)) ? ((var_1_6 <= var_1_9) ? (var_1_50 == ((signed long int) 2)) : 1) : ((var_1_43 == var_1_23) ? (((var_1_41 / (max (var_1_23 , 32))) >= var_1_43) ? (var_1_50 == ((signed long int) last_1_var_1_50)) : (var_1_50 == ((signed long int) ((var_1_51 - (var_1_52 - var_1_48)) - var_1_23)))) : (var_1_50 == ((signed long int) var_1_43))))) && ((var_1_30 >= (var_1_27 / 15.4)) ? (var_1_53 == ((unsigned long int) (max (var_1_46 , (min ((min (var_1_58 , var_1_60)) , (max (var_1_14 , var_1_15)))))))) : (((var_1_60 - var_1_52) < ((var_1_54 - var_1_60) - var_1_5)) ? (var_1_16 ? (var_1_53 == ((unsigned long int) ((var_1_54 + var_1_55) - (var_1_56 - var_1_58)))) : (var_1_53 == ((unsigned long int) (max ((var_1_15 + (var_1_58 + var_1_5)) , 2u))))) : (var_1_53 == ((unsigned long int) (max ((var_1_49 + (var_1_52 + var_1_44)) , var_1_39))))))) && (((last_1_var_1_1 * var_1_34) >= var_1_51) ? ((! ((abs (var_1_12)) >= (last_1_var_1_10 | last_1_var_1_1))) ? ((var_1_8 < last_1_var_1_28) ? (((- (last_1_var_1_37 + last_1_var_1_43)) > (var_1_59 - var_1_56)) ? (var_1_58 == ((signed long int) (last_1_var_1_1 + var_1_52))) : (var_1_58 == ((signed long int) (min ((var_1_52 - (max (var_1_47 , var_1_44))) , (max (var_1_25 , last_1_var_1_10))))))) : ((var_1_55 > 2u) ? ((var_1_51 <= ((last_1_var_1_21 + last_1_var_1_40) | (last_1_var_1_37 / var_1_46))) ? (var_1_58 == ((signed long int) var_1_25)) : (var_1_58 == ((signed long int) var_1_13))) : (var_1_58 == ((signed long int) -100000000)))) : (var_1_58 == ((signed long int) var_1_41))) : (var_1_58 == ((signed long int) var_1_34)))) && (((var_1_16 || (var_1_1 > var_1_52)) && var_1_19) ? (var_1_60 == ((signed long int) (var_1_47 + (min (var_1_37 , var_1_49))))) : (var_1_16 ? (var_1_60 == ((signed long int) var_1_13)) : 1))
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
