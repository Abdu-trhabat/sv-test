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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
signed long int var_1_5 = 256;
signed long int var_1_6 = -1;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 16;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 25;
unsigned long int var_1_20 = 3844860889;
unsigned long int var_1_21 = 2027643041;
unsigned long int var_1_22 = 4;
signed long int var_1_23 = 0;
signed long int var_1_25 = 1929320600;
unsigned char var_1_27 = 100;
unsigned char var_1_28 = 32;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 8;
double var_1_32 = 100000000000000.1;
double var_1_34 = 4.5;
double var_1_35 = 5.75;
double var_1_36 = 4.8;
double var_1_37 = 9.1;
double var_1_38 = 3.75;
signed long int var_1_39 = 0;
signed long int var_1_42 = 16;
unsigned char var_1_43 = 0;
double var_1_44 = 8.8;
double var_1_45 = 4.6;
unsigned short int var_1_46 = 1;
unsigned short int var_1_48 = 49087;
signed long int var_1_49 = -25;
signed long int var_1_50 = 1000000000;
unsigned short int var_1_51 = 4;
signed char var_1_53 = -64;
unsigned short int var_1_54 = 61802;
float var_1_55 = 127.25;
signed char var_1_56 = 64;
signed char var_1_57 = 2;
signed char var_1_58 = 8;
signed char var_1_59 = 100;
signed char var_1_60 = 1;
signed char var_1_61 = 4;
signed char var_1_62 = 25;
signed long int var_1_63 = -10;
unsigned long int var_1_65 = 256;
unsigned char var_1_66 = 200;
signed long int var_1_68 = 1;
unsigned short int var_1_69 = 10;
unsigned short int var_1_71 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
unsigned char last_1_var_1_10 = 0;
unsigned long int last_1_var_1_19 = 25;
unsigned long int last_1_var_1_22 = 4;
signed long int last_1_var_1_23 = 0;
unsigned char last_1_var_1_27 = 100;
double last_1_var_1_32 = 100000000000000.1;
signed long int last_1_var_1_39 = 0;
unsigned char last_1_var_1_43 = 0;
unsigned short int last_1_var_1_46 = 1;
unsigned short int last_1_var_1_51 = 4;
float last_1_var_1_55 = 127.25;
signed long int last_1_var_1_68 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch87Amount250
	if ((last_1_var_1_22 + last_1_var_1_1) == (last_1_var_1_1 / (min (var_1_5 , var_1_6)))) {
		var_1_1 = (var_1_7 - var_1_8);
	}


	// From: Req2Batch87Amount250
	var_1_9 = ((min (var_1_8 , var_1_1)) + var_1_7);


	// From: Req10Batch87Amount250
	var_1_42 = (var_1_31 + var_1_9);


	// From: Req12Batch87Amount250
	signed long int stepLocal_9 = var_1_5;
	unsigned long int stepLocal_8 = last_1_var_1_19;
	if (stepLocal_8 < (var_1_31 * last_1_var_1_22)) {
		if (((min (last_1_var_1_32 , var_1_37)) / (max (var_1_44 , var_1_45))) >= (max (16.5 , 256.5))) {
			var_1_46 = (var_1_8 + (abs (var_1_30)));
		} else {
			if (stepLocal_9 <= last_1_var_1_27) {
				var_1_46 = (var_1_48 - (var_1_30 + last_1_var_1_23));
			} else {
				var_1_46 = last_1_var_1_68;
			}
		}
	}


	// From: Req11Batch87Amount250
	if (var_1_37 >= (last_1_var_1_55 / (max (var_1_44 , var_1_45)))) {
		if (last_1_var_1_39 > (var_1_30 / var_1_7)) {
			var_1_43 = var_1_15;
		} else {
			var_1_43 = ((var_1_14 && var_1_17) && var_1_18);
		}
	}


	// From: Req3Batch87Amount250
	unsigned char stepLocal_0 = var_1_43;
	if (last_1_var_1_10) {
		if (stepLocal_0 || var_1_43) {
			var_1_10 = var_1_14;
		} else {
			var_1_10 = ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)));
		}
	} else {
		var_1_10 = (var_1_16 || var_1_15);
	}


	// From: Req7Batch87Amount250
	if (var_1_10) {
		var_1_27 = (((32 + var_1_28) + (abs (var_1_29))) - (var_1_30 + (var_1_31 + 25)));
	} else {
		var_1_27 = (max ((max (var_1_31 , 8)) , var_1_28));
	}


	// From: Req17Batch87Amount250
	signed long int stepLocal_14 = (min (var_1_30 , 4)) - var_1_25;
	unsigned char stepLocal_13 = var_1_43;
	if (var_1_10 && stepLocal_13) {
		if ((var_1_5 >> (max (32u , var_1_31))) > stepLocal_14) {
			var_1_57 = ((var_1_31 + var_1_58) + var_1_28);
		} else {
			var_1_57 = ((var_1_59 - var_1_28) - ((var_1_31 + var_1_60) + var_1_61));
		}
	}


	// From: Req4Batch87Amount250
	if (last_1_var_1_43 && var_1_16) {
		if (var_1_18) {
			var_1_19 = (var_1_20 - (var_1_21 - (last_1_var_1_46 + var_1_8)));
		}
	}


	// From: Req13Batch87Amount250
	if (var_1_10) {
		if (-5 < (max ((var_1_21 / var_1_6) , -10))) {
			var_1_49 = (((var_1_48 + var_1_9) - (var_1_50 - var_1_30)) + (var_1_9 - var_1_7));
		} else {
			if (var_1_10) {
				var_1_49 = ((var_1_9 - (2 + var_1_8)) + var_1_28);
			}
		}
	}


	// From: Req15Batch87Amount250
	if (var_1_15) {
		var_1_55 = (var_1_38 + 5.825f);
	} else {
		var_1_55 = (var_1_37 + var_1_38);
	}


	// From: Req21Batch87Amount250
	var_1_68 = 100;


	// From: Req22Batch87Amount250
	var_1_69 = var_1_1;


	// From: Req5Batch87Amount250
	signed long int stepLocal_1 = 0;
	if (last_1_var_1_22 >= stepLocal_1) {
		var_1_22 = last_1_var_1_22;
	} else {
		var_1_22 = (min (var_1_21 , (min (var_1_42 , var_1_7))));
	}


	// From: Req14Batch87Amount250
	signed char stepLocal_11 = var_1_57;
	signed long int stepLocal_10 = var_1_25 - 4;
	if ((var_1_57 * var_1_19) != stepLocal_10) {
		if (((last_1_var_1_51 + var_1_48) / (min (var_1_6 , var_1_53))) != stepLocal_11) {
			var_1_51 = (((var_1_54 - 64) - var_1_29) - (last_1_var_1_51 + var_1_30));
		}
	} else {
		var_1_51 = (var_1_28 + var_1_7);
	}


	// From: Req19Batch87Amount250
	signed long int stepLocal_17 = var_1_68;
	if (stepLocal_17 < var_1_19) {
		if (var_1_43) {
			var_1_63 = (var_1_1 + var_1_54);
		}
	}


	// From: Req8Batch87Amount250
	if ((- var_1_55) <= ((var_1_34 + var_1_35) - var_1_36)) {
		var_1_32 = (min (var_1_34 , var_1_35));
	} else {
		var_1_32 = (min ((31.2 + var_1_37) , (var_1_34 - (9.2010793473522852E18 - var_1_38))));
	}


	// From: Req16Batch87Amount250
	signed long int stepLocal_12 = var_1_68;
	if (stepLocal_12 > (var_1_28 / (min (var_1_53 , var_1_29)))) {
		var_1_56 = (min (var_1_28 , (max (var_1_30 , var_1_31))));
	} else {
		var_1_56 = (max (var_1_28 , var_1_30));
	}


	// From: Req23Batch87Amount250
	signed long int stepLocal_20 = var_1_60 / 50;
	if (stepLocal_20 >= var_1_28) {
		if (var_1_32 > var_1_44) {
			var_1_71 = (((var_1_54 - var_1_31) - var_1_30) - 100);
		}
	} else {
		var_1_71 = var_1_29;
	}


	// From: Req9Batch87Amount250
	unsigned short int stepLocal_7 = var_1_51;
	unsigned short int stepLocal_6 = var_1_9;
	if (stepLocal_6 < ((var_1_63 / var_1_7) & last_1_var_1_39)) {
		if ((32 >> var_1_46) < stepLocal_7) {
			if (var_1_55 >= var_1_35) {
				var_1_39 = (min (var_1_46 , var_1_19));
			}
		}
	}


	// From: Req20Batch87Amount250
	signed long int stepLocal_19 = (min (var_1_28 , var_1_60)) - var_1_8;
	signed long int stepLocal_18 = (var_1_66 - var_1_60) - var_1_31;
	if (stepLocal_18 > -25) {
		var_1_65 = (max ((abs (var_1_20)) , var_1_30));
	} else {
		if (var_1_15) {
			if (stepLocal_19 <= ((max (var_1_50 , var_1_56)) - var_1_21)) {
				var_1_65 = (max (var_1_54 , var_1_20));
			} else {
				var_1_65 = ((var_1_25 - var_1_61) + ((min (8u , 32u)) + (max (var_1_54 , var_1_51))));
			}
		} else {
			var_1_65 = var_1_50;
		}
	}


	// From: Req18Batch87Amount250
	unsigned char stepLocal_16 = (var_1_25 / var_1_59) <= (var_1_5 * var_1_8);
	signed long int stepLocal_15 = var_1_39;
	if (var_1_44 < (var_1_32 * var_1_55)) {
		if ((var_1_39 * var_1_31) <= stepLocal_15) {
			if (stepLocal_16 && ((var_1_46 / var_1_28) < var_1_48)) {
				var_1_62 = (max (var_1_61 , var_1_60));
			} else {
				var_1_62 = (min (var_1_59 , (-1 - (var_1_28 + var_1_60))));
			}
		} else {
			var_1_62 = (max (var_1_30 , var_1_28));
		}
	}


	// From: Req6Batch87Amount250
	signed long int stepLocal_5 = var_1_46 ^ (abs (var_1_8));
	unsigned long int stepLocal_4 = max ((var_1_7 * var_1_65) , (var_1_6 * var_1_51));
	unsigned char stepLocal_3 = var_1_7;
	unsigned char stepLocal_2 = var_1_16;
	if (stepLocal_3 == last_1_var_1_23) {
		if (stepLocal_5 <= ((var_1_69 / var_1_7) / -1)) {
			var_1_23 = (2 - var_1_7);
		} else {
			if (stepLocal_2 || ((var_1_7 * 64) <= var_1_51)) {
				var_1_23 = (var_1_51 - (var_1_25 - 4));
			} else {
				if (stepLocal_4 >= (max (var_1_46 , -25))) {
					var_1_23 = last_1_var_1_23;
				} else {
					var_1_23 = var_1_27;
				}
			}
		}
	} else {
		var_1_23 = var_1_69;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483646);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 32);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 64);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 64);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427387900e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427387900e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= 536870911);
	assume_abort_if_not(var_1_50 <= 1073741823);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -128);
	assume_abort_if_not(var_1_53 <= 127);
	assume_abort_if_not(var_1_53 != 0);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 57342);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -31);
	assume_abort_if_not(var_1_58 <= 31);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 62);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 31);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 191);
	assume_abort_if_not(var_1_66 <= 255);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_68 = var_1_68;
}

int property() {
	return ((((((((((((((((((((((((last_1_var_1_22 + last_1_var_1_1) == (last_1_var_1_1 / (min (var_1_5 , var_1_6)))) ? (var_1_1 == ((unsigned char) (var_1_7 - var_1_8))) : 1) && (var_1_9 == ((unsigned short int) ((min (var_1_8 , var_1_1)) + var_1_7)))) && (last_1_var_1_10 ? ((var_1_43 || var_1_43) ? (var_1_10 == ((unsigned char) var_1_14)) : (var_1_10 == ((unsigned char) ((var_1_14 && (var_1_15 || var_1_16)) || ((! var_1_17) || (! var_1_18)))))) : (var_1_10 == ((unsigned char) (var_1_16 || var_1_15))))) && ((last_1_var_1_43 && var_1_16) ? (var_1_18 ? (var_1_19 == ((unsigned long int) (var_1_20 - (var_1_21 - (last_1_var_1_46 + var_1_8))))) : 1) : 1)) && ((last_1_var_1_22 >= 0) ? (var_1_22 == ((unsigned long int) last_1_var_1_22)) : (var_1_22 == ((unsigned long int) (min (var_1_21 , (min (var_1_42 , var_1_7)))))))) && ((var_1_7 == last_1_var_1_23) ? (((var_1_46 ^ (abs (var_1_8))) <= ((var_1_69 / var_1_7) / -1)) ? (var_1_23 == ((signed long int) (2 - var_1_7))) : ((var_1_16 || ((var_1_7 * 64) <= var_1_51)) ? (var_1_23 == ((signed long int) (var_1_51 - (var_1_25 - 4)))) : (((max ((var_1_7 * var_1_65) , (var_1_6 * var_1_51))) >= (max (var_1_46 , -25))) ? (var_1_23 == ((signed long int) last_1_var_1_23)) : (var_1_23 == ((signed long int) var_1_27))))) : (var_1_23 == ((signed long int) var_1_69)))) && (var_1_10 ? (var_1_27 == ((unsigned char) (((32 + var_1_28) + (abs (var_1_29))) - (var_1_30 + (var_1_31 + 25))))) : (var_1_27 == ((unsigned char) (max ((max (var_1_31 , 8)) , var_1_28)))))) && (((- var_1_55) <= ((var_1_34 + var_1_35) - var_1_36)) ? (var_1_32 == ((double) (min (var_1_34 , var_1_35)))) : (var_1_32 == ((double) (min ((31.2 + var_1_37) , (var_1_34 - (9.2010793473522852E18 - var_1_38)))))))) && ((var_1_9 < ((var_1_63 / var_1_7) & last_1_var_1_39)) ? (((32 >> var_1_46) < var_1_51) ? ((var_1_55 >= var_1_35) ? (var_1_39 == ((signed long int) (min (var_1_46 , var_1_19)))) : 1) : 1) : 1)) && (var_1_42 == ((signed long int) (var_1_31 + var_1_9)))) && ((var_1_37 >= (last_1_var_1_55 / (max (var_1_44 , var_1_45)))) ? ((last_1_var_1_39 > (var_1_30 / var_1_7)) ? (var_1_43 == ((unsigned char) var_1_15)) : (var_1_43 == ((unsigned char) ((var_1_14 && var_1_17) && var_1_18)))) : 1)) && ((last_1_var_1_19 < (var_1_31 * last_1_var_1_22)) ? ((((min (last_1_var_1_32 , var_1_37)) / (max (var_1_44 , var_1_45))) >= (max (16.5 , 256.5))) ? (var_1_46 == ((unsigned short int) (var_1_8 + (abs (var_1_30))))) : ((var_1_5 <= last_1_var_1_27) ? (var_1_46 == ((unsigned short int) (var_1_48 - (var_1_30 + last_1_var_1_23)))) : (var_1_46 == ((unsigned short int) last_1_var_1_68)))) : 1)) && (var_1_10 ? ((-5 < (max ((var_1_21 / var_1_6) , -10))) ? (var_1_49 == ((signed long int) (((var_1_48 + var_1_9) - (var_1_50 - var_1_30)) + (var_1_9 - var_1_7)))) : (var_1_10 ? (var_1_49 == ((signed long int) ((var_1_9 - (2 + var_1_8)) + var_1_28))) : 1)) : 1)) && (((var_1_57 * var_1_19) != (var_1_25 - 4)) ? ((((last_1_var_1_51 + var_1_48) / (min (var_1_6 , var_1_53))) != var_1_57) ? (var_1_51 == ((unsigned short int) (((var_1_54 - 64) - var_1_29) - (last_1_var_1_51 + var_1_30)))) : 1) : (var_1_51 == ((unsigned short int) (var_1_28 + var_1_7))))) && (var_1_15 ? (var_1_55 == ((float) (var_1_38 + 5.825f))) : (var_1_55 == ((float) (var_1_37 + var_1_38))))) && ((var_1_68 > (var_1_28 / (min (var_1_53 , var_1_29)))) ? (var_1_56 == ((signed char) (min (var_1_28 , (max (var_1_30 , var_1_31)))))) : (var_1_56 == ((signed char) (max (var_1_28 , var_1_30)))))) && ((var_1_10 && var_1_43) ? (((var_1_5 >> (max (32u , var_1_31))) > ((min (var_1_30 , 4)) - var_1_25)) ? (var_1_57 == ((signed char) ((var_1_31 + var_1_58) + var_1_28))) : (var_1_57 == ((signed char) ((var_1_59 - var_1_28) - ((var_1_31 + var_1_60) + var_1_61))))) : 1)) && ((var_1_44 < (var_1_32 * var_1_55)) ? (((var_1_39 * var_1_31) <= var_1_39) ? ((((var_1_25 / var_1_59) <= (var_1_5 * var_1_8)) && ((var_1_46 / var_1_28) < var_1_48)) ? (var_1_62 == ((signed char) (max (var_1_61 , var_1_60)))) : (var_1_62 == ((signed char) (min (var_1_59 , (-1 - (var_1_28 + var_1_60))))))) : (var_1_62 == ((signed char) (max (var_1_30 , var_1_28))))) : 1)) && ((var_1_68 < var_1_19) ? (var_1_43 ? (var_1_63 == ((signed long int) (var_1_1 + var_1_54))) : 1) : 1)) && ((((var_1_66 - var_1_60) - var_1_31) > -25) ? (var_1_65 == ((unsigned long int) (max ((abs (var_1_20)) , var_1_30)))) : (var_1_15 ? ((((min (var_1_28 , var_1_60)) - var_1_8) <= ((max (var_1_50 , var_1_56)) - var_1_21)) ? (var_1_65 == ((unsigned long int) (max (var_1_54 , var_1_20)))) : (var_1_65 == ((unsigned long int) ((var_1_25 - var_1_61) + ((min (8u , 32u)) + (max (var_1_54 , var_1_51))))))) : (var_1_65 == ((unsigned long int) var_1_50))))) && (var_1_68 == ((signed long int) 100))) && (var_1_69 == ((unsigned short int) var_1_1))) && (((var_1_60 / 50) >= var_1_28) ? ((var_1_32 > var_1_44) ? (var_1_71 == ((unsigned short int) (((var_1_54 - var_1_31) - var_1_30) - 100))) : 1) : (var_1_71 == ((unsigned short int) var_1_29)))
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
