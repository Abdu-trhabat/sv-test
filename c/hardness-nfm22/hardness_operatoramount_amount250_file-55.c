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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 50;
unsigned short int var_1_15 = 8;
unsigned short int var_1_16 = 45236;
unsigned short int var_1_17 = 60002;
unsigned short int var_1_18 = 26921;
signed long int var_1_19 = -32;
float var_1_20 = 10.3;
double var_1_21 = 4.625;
signed long int var_1_23 = 1000000000;
unsigned short int var_1_24 = 16;
unsigned char var_1_26 = 4;
unsigned char var_1_27 = 32;
signed char var_1_28 = 4;
signed char var_1_30 = 64;
double var_1_31 = 128.75;
double var_1_32 = 8.5;
float var_1_33 = 64.62;
float var_1_34 = 1.35;
float var_1_35 = 63.5;
float var_1_36 = 31.7;
float var_1_37 = 32.75;
unsigned long int var_1_38 = 2;
unsigned long int var_1_40 = 2718795108;
signed short int var_1_42 = -8;
unsigned char var_1_43 = 1;
double var_1_44 = 32.5;
double var_1_45 = 99999999999.2;
double var_1_46 = 256.25;
double var_1_47 = 8.375;
signed char var_1_48 = 32;
signed char var_1_49 = 10;
signed char var_1_50 = 8;
unsigned long int var_1_51 = 25;
unsigned long int var_1_53 = 1109891875;
unsigned long int var_1_54 = 1615670944;
unsigned long int var_1_55 = 1625303397;
double var_1_56 = -0.5;
double var_1_58 = 9.9;
double var_1_59 = 99999.75;
double var_1_60 = 64.5;
double var_1_61 = 500.75;
signed long int var_1_62 = 5;
signed short int var_1_63 = 16;
unsigned short int var_1_65 = 8;
signed long int var_1_66 = 256;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 0;
unsigned short int var_1_70 = 5;
unsigned short int var_1_71 = 24445;
signed long int var_1_72 = 1;
double var_1_73 = 32.25;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = -2;
unsigned short int last_1_var_1_15 = 8;
signed long int last_1_var_1_19 = -32;
unsigned short int last_1_var_1_24 = 16;
unsigned char last_1_var_1_26 = 4;
float last_1_var_1_33 = 64.62;
unsigned long int last_1_var_1_38 = 2;
signed short int last_1_var_1_42 = -8;
double last_1_var_1_44 = 32.5;
double last_1_var_1_56 = -0.5;
signed long int last_1_var_1_62 = 5;
signed short int last_1_var_1_63 = 16;
signed long int last_1_var_1_66 = 256;
unsigned char last_1_var_1_67 = 0;
unsigned char last_1_var_1_68 = 0;
unsigned short int last_1_var_1_70 = 5;
double last_1_var_1_73 = 32.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch55Amount250
	if (last_1_var_1_62 < last_1_var_1_66) {
		var_1_65 = var_1_4;
	}


	// From: Req15Batch55Amount250
	if ((var_1_4 >> last_1_var_1_15) < var_1_16) {
		var_1_51 = var_1_11;
	} else {
		if (16 <= last_1_var_1_66) {
			if (last_1_var_1_68) {
				if ((last_1_var_1_15 * (last_1_var_1_42 / var_1_30)) < last_1_var_1_1) {
					var_1_51 = (var_1_40 - (var_1_13 + (var_1_50 + var_1_49)));
				} else {
					var_1_51 = (abs (16u));
				}
			} else {
				var_1_51 = (var_1_17 + var_1_30);
			}
		} else {
			if (last_1_var_1_67 < (var_1_27 * last_1_var_1_26)) {
				var_1_51 = ((var_1_53 + var_1_54) - last_1_var_1_15);
			} else {
				var_1_51 = (((min (var_1_54 , var_1_53)) - var_1_30) + ((var_1_55 - var_1_11) - (var_1_18 + var_1_27)));
			}
		}
	}


	// From: Req2Batch55Amount250
	if (var_1_5 > (var_1_51 % var_1_7)) {
		var_1_6 = var_1_5;
	} else {
		var_1_6 = (var_1_5 + var_1_7);
	}


	// From: Req5Batch55Amount250
	if (var_1_10 != (last_1_var_1_73 / var_1_20)) {
		if (((max (var_1_10 , var_1_20)) / var_1_21) == (last_1_var_1_73 + last_1_var_1_44)) {
			if ((max (var_1_4 , var_1_12)) < (max ((max (last_1_var_1_19 , var_1_7)) , last_1_var_1_38))) {
				var_1_19 = var_1_11;
			} else {
				var_1_19 = (var_1_4 - ((var_1_23 + 1000000000) - (abs (var_1_5))));
			}
		}
	}


	// From: Req4Batch55Amount250
	if (31.25 < var_1_10) {
		var_1_15 = (var_1_16 - last_1_var_1_38);
	} else {
		var_1_15 = ((var_1_17 - (min (last_1_var_1_38 , var_1_4))) - (var_1_18 - 25));
	}


	// From: Req7Batch55Amount250
	signed long int stepLocal_1 = last_1_var_1_63;
	if ((- var_1_16) <= stepLocal_1) {
		if ((last_1_var_1_33 * var_1_21) < (var_1_20 * var_1_10)) {
			var_1_26 = (var_1_12 + (100 - var_1_27));
		} else {
			var_1_26 = var_1_12;
		}
	} else {
		var_1_26 = var_1_13;
	}


	// From: Req9Batch55Amount250
	var_1_31 = var_1_32;


	// From: Req10Batch55Amount250
	if (var_1_31 < (var_1_32 * (var_1_34 - var_1_35))) {
		if (var_1_10 > (var_1_35 - 64.5f)) {
			var_1_33 = var_1_32;
		}
	} else {
		var_1_33 = ((min (var_1_36 , 9.625f)) - var_1_37);
	}


	// From: Req17Batch55Amount250
	var_1_62 = (min (var_1_23 , var_1_16));


	// From: Req22Batch55Amount250
	var_1_68 = (var_1_43 || var_1_69);


	// From: Req23Batch55Amount250
	if (var_1_68) {
		var_1_70 = ((var_1_18 + var_1_71) - last_1_var_1_70);
	}


	// From: Req24Batch55Amount250
	var_1_72 = var_1_13;


	// From: Req25Batch55Amount250
	var_1_73 = 4.75;


	// From: Req20Batch55Amount250
	if (var_1_68) {
		var_1_66 = var_1_65;
	}


	// From: Req18Batch55Amount250
	if ((var_1_6 * var_1_26) != var_1_18) {
		if (var_1_68 && (var_1_12 <= (10 * var_1_13))) {
			var_1_63 = (min (var_1_17 , var_1_11));
		}
	} else {
		var_1_63 = (var_1_5 + ((var_1_30 + 64) - var_1_26));
	}


	// From: Req8Batch55Amount250
	unsigned char stepLocal_2 = var_1_68;
	if (stepLocal_2 && var_1_68) {
		var_1_28 = ((var_1_30 - var_1_27) - var_1_4);
	}


	// From: Req13Batch55Amount250
	signed long int stepLocal_6 = var_1_66;
	if (var_1_7 >= stepLocal_6) {
		if (var_1_68) {
			if (var_1_68) {
				var_1_44 = (max (var_1_32 , 49.4));
			} else {
				var_1_44 = (var_1_36 - (var_1_45 + var_1_46));
			}
		} else {
			var_1_44 = (max (var_1_45 , (min (var_1_37 , (var_1_46 + var_1_47)))));
		}
	} else {
		var_1_44 = (var_1_47 + (abs (max (var_1_46 , var_1_45))));
	}


	// From: Req21Batch55Amount250
	if (var_1_68) {
		var_1_67 = var_1_11;
	} else {
		var_1_67 = var_1_13;
	}


	// From: Req11Batch55Amount250
	signed char stepLocal_3 = var_1_5;
	if (var_1_19 > stepLocal_3) {
		if ((64.05f * var_1_10) != var_1_44) {
			var_1_38 = (min (var_1_51 , var_1_15));
		} else {
			var_1_38 = (var_1_40 - (min (var_1_16 , (var_1_17 + var_1_51))));
		}
	} else {
		var_1_38 = var_1_67;
	}


	// From: Req1Batch55Amount250
	if (-2 == var_1_65) {
		if ((var_1_65 * var_1_28) <= -500) {
			var_1_1 = (abs (2 - var_1_4));
		} else {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (var_1_5 + 5);
	}


	// From: Req3Batch55Amount250
	unsigned char stepLocal_0 = (var_1_44 / var_1_10) < 255.625f;
	if (stepLocal_0 && (var_1_7 < (var_1_5 * -100))) {
		var_1_8 = (max (((var_1_11 + var_1_12) - var_1_4) , var_1_13));
	} else {
		if (var_1_68) {
			var_1_8 = var_1_4;
		} else {
			var_1_8 = var_1_13;
		}
	}


	// From: Req6Batch55Amount250
	if (! var_1_68) {
		if ((! var_1_68) && var_1_68) {
			var_1_24 = (var_1_17 - last_1_var_1_24);
		}
	} else {
		if ((var_1_11 - var_1_17) < var_1_67) {
			var_1_24 = ((var_1_17 - var_1_13) - var_1_12);
		} else {
			var_1_24 = (min (var_1_12 , var_1_17));
		}
	}


	// From: Req14Batch55Amount250
	unsigned char stepLocal_8 = var_1_38 <= var_1_26;
	signed char stepLocal_7 = var_1_1;
	if (var_1_68 || stepLocal_8) {
		var_1_48 = var_1_5;
	} else {
		if (stepLocal_7 >= (var_1_15 + var_1_65)) {
			if (var_1_68) {
				var_1_48 = (var_1_5 + (max (var_1_27 , (var_1_49 - var_1_50))));
			} else {
				var_1_48 = (var_1_49 - var_1_4);
			}
		} else {
			var_1_48 = var_1_30;
		}
	}


	// From: Req16Batch55Amount250
	signed long int stepLocal_10 = (var_1_13 - 64) & var_1_12;
	unsigned char stepLocal_9 = var_1_67;
	if (var_1_15 < stepLocal_9) {
		if (var_1_73 != (- last_1_var_1_56)) {
			if (var_1_68) {
				var_1_56 = (min (var_1_36 , var_1_45));
			} else {
				var_1_56 = ((min (var_1_45 , var_1_46)) + (200.8 - var_1_58));
			}
		} else {
			if (stepLocal_10 != ((2 | var_1_23) / var_1_18)) {
				var_1_56 = (var_1_46 + (var_1_59 + (var_1_60 + var_1_61)));
			} else {
				var_1_56 = var_1_58;
			}
		}
	} else {
		var_1_56 = var_1_37;
	}


	// From: Req12Batch55Amount250
	unsigned char stepLocal_5 = var_1_30 > (var_1_63 + var_1_7);
	signed long int stepLocal_4 = abs (- var_1_12);
	if (var_1_68) {
		if (var_1_8 > stepLocal_4) {
			if (stepLocal_5 || var_1_68) {
				var_1_42 = var_1_26;
			} else {
				var_1_42 = var_1_19;
			}
		} else {
			var_1_42 = ((var_1_11 + var_1_13) - var_1_30);
		}
	} else {
		var_1_42 = (var_1_26 + 25);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 64);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 49150);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	assume_abort_if_not(var_1_20 != 0.0F);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 536870911);
	assume_abort_if_not(var_1_23 <= 1073741823);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 62);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427382800e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 1073741823);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 1073741824);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 1610612735);
	assume_abort_if_not(var_1_55 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691390e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691390e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -115292.1504606845700e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 1152921.504606845700e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -115292.1504606845700e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 1152921.504606845700e+12F && var_1_61 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 16384);
	assume_abort_if_not(var_1_71 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
}

int property() {
	return (((((((((((((((((((((((((-2 == var_1_65) ? (((var_1_65 * var_1_28) <= -500) ? (var_1_1 == ((signed char) (abs (2 - var_1_4)))) : (var_1_1 == ((signed char) (abs (var_1_4))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (var_1_51 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_44 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) (max (((var_1_11 + var_1_12) - var_1_4) , var_1_13)))) : (var_1_68 ? (var_1_8 == ((unsigned char) var_1_4)) : (var_1_8 == ((unsigned char) var_1_13))))) && ((31.25 < var_1_10) ? (var_1_15 == ((unsigned short int) (var_1_16 - last_1_var_1_38))) : (var_1_15 == ((unsigned short int) ((var_1_17 - (min (last_1_var_1_38 , var_1_4))) - (var_1_18 - 25)))))) && ((var_1_10 != (last_1_var_1_73 / var_1_20)) ? ((((max (var_1_10 , var_1_20)) / var_1_21) == (last_1_var_1_73 + last_1_var_1_44)) ? (((max (var_1_4 , var_1_12)) < (max ((max (last_1_var_1_19 , var_1_7)) , last_1_var_1_38))) ? (var_1_19 == ((signed long int) var_1_11)) : (var_1_19 == ((signed long int) (var_1_4 - ((var_1_23 + 1000000000) - (abs (var_1_5))))))) : 1) : 1)) && ((! var_1_68) ? (((! var_1_68) && var_1_68) ? (var_1_24 == ((unsigned short int) (var_1_17 - last_1_var_1_24))) : 1) : (((var_1_11 - var_1_17) < var_1_67) ? (var_1_24 == ((unsigned short int) ((var_1_17 - var_1_13) - var_1_12))) : (var_1_24 == ((unsigned short int) (min (var_1_12 , var_1_17))))))) && (((- var_1_16) <= last_1_var_1_63) ? (((last_1_var_1_33 * var_1_21) < (var_1_20 * var_1_10)) ? (var_1_26 == ((unsigned char) (var_1_12 + (100 - var_1_27)))) : (var_1_26 == ((unsigned char) var_1_12))) : (var_1_26 == ((unsigned char) var_1_13)))) && ((var_1_68 && var_1_68) ? (var_1_28 == ((signed char) ((var_1_30 - var_1_27) - var_1_4))) : 1)) && (var_1_31 == ((double) var_1_32))) && ((var_1_31 < (var_1_32 * (var_1_34 - var_1_35))) ? ((var_1_10 > (var_1_35 - 64.5f)) ? (var_1_33 == ((float) var_1_32)) : 1) : (var_1_33 == ((float) ((min (var_1_36 , 9.625f)) - var_1_37))))) && ((var_1_19 > var_1_5) ? (((64.05f * var_1_10) != var_1_44) ? (var_1_38 == ((unsigned long int) (min (var_1_51 , var_1_15)))) : (var_1_38 == ((unsigned long int) (var_1_40 - (min (var_1_16 , (var_1_17 + var_1_51))))))) : (var_1_38 == ((unsigned long int) var_1_67)))) && (var_1_68 ? ((var_1_8 > (abs (- var_1_12))) ? (((var_1_30 > (var_1_63 + var_1_7)) || var_1_68) ? (var_1_42 == ((signed short int) var_1_26)) : (var_1_42 == ((signed short int) var_1_19))) : (var_1_42 == ((signed short int) ((var_1_11 + var_1_13) - var_1_30)))) : (var_1_42 == ((signed short int) (var_1_26 + 25))))) && ((var_1_7 >= var_1_66) ? (var_1_68 ? (var_1_68 ? (var_1_44 == ((double) (max (var_1_32 , 49.4)))) : (var_1_44 == ((double) (var_1_36 - (var_1_45 + var_1_46))))) : (var_1_44 == ((double) (max (var_1_45 , (min (var_1_37 , (var_1_46 + var_1_47)))))))) : (var_1_44 == ((double) (var_1_47 + (abs (max (var_1_46 , var_1_45)))))))) && ((var_1_68 || (var_1_38 <= var_1_26)) ? (var_1_48 == ((signed char) var_1_5)) : ((var_1_1 >= (var_1_15 + var_1_65)) ? (var_1_68 ? (var_1_48 == ((signed char) (var_1_5 + (max (var_1_27 , (var_1_49 - var_1_50)))))) : (var_1_48 == ((signed char) (var_1_49 - var_1_4)))) : (var_1_48 == ((signed char) var_1_30))))) && (((var_1_4 >> last_1_var_1_15) < var_1_16) ? (var_1_51 == ((unsigned long int) var_1_11)) : ((16 <= last_1_var_1_66) ? (last_1_var_1_68 ? (((last_1_var_1_15 * (last_1_var_1_42 / var_1_30)) < last_1_var_1_1) ? (var_1_51 == ((unsigned long int) (var_1_40 - (var_1_13 + (var_1_50 + var_1_49))))) : (var_1_51 == ((unsigned long int) (abs (16u))))) : (var_1_51 == ((unsigned long int) (var_1_17 + var_1_30)))) : ((last_1_var_1_67 < (var_1_27 * last_1_var_1_26)) ? (var_1_51 == ((unsigned long int) ((var_1_53 + var_1_54) - last_1_var_1_15))) : (var_1_51 == ((unsigned long int) (((min (var_1_54 , var_1_53)) - var_1_30) + ((var_1_55 - var_1_11) - (var_1_18 + var_1_27))))))))) && ((var_1_15 < var_1_67) ? ((var_1_73 != (- last_1_var_1_56)) ? (var_1_68 ? (var_1_56 == ((double) (min (var_1_36 , var_1_45)))) : (var_1_56 == ((double) ((min (var_1_45 , var_1_46)) + (200.8 - var_1_58))))) : ((((var_1_13 - 64) & var_1_12) != ((2 | var_1_23) / var_1_18)) ? (var_1_56 == ((double) (var_1_46 + (var_1_59 + (var_1_60 + var_1_61))))) : (var_1_56 == ((double) var_1_58)))) : (var_1_56 == ((double) var_1_37)))) && (var_1_62 == ((signed long int) (min (var_1_23 , var_1_16))))) && (((var_1_6 * var_1_26) != var_1_18) ? ((var_1_68 && (var_1_12 <= (10 * var_1_13))) ? (var_1_63 == ((signed short int) (min (var_1_17 , var_1_11)))) : 1) : (var_1_63 == ((signed short int) (var_1_5 + ((var_1_30 + 64) - var_1_26)))))) && ((last_1_var_1_62 < last_1_var_1_66) ? (var_1_65 == ((unsigned short int) var_1_4)) : 1)) && (var_1_68 ? (var_1_66 == ((signed long int) var_1_65)) : 1)) && (var_1_68 ? (var_1_67 == ((unsigned char) var_1_11)) : (var_1_67 == ((unsigned char) var_1_13)))) && (var_1_68 == ((unsigned char) (var_1_43 || var_1_69)))) && (var_1_68 ? (var_1_70 == ((unsigned short int) ((var_1_18 + var_1_71) - last_1_var_1_70))) : 1)) && (var_1_72 == ((signed long int) var_1_13))) && (var_1_73 == ((double) 4.75))
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
