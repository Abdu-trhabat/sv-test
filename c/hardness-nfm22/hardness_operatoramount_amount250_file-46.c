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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.25;
double var_1_2 = 4.6;
double var_1_3 = 1.25;
double var_1_4 = 0.0;
double var_1_5 = 2.8;
double var_1_6 = 7.8;
double var_1_7 = 100000000000000.72;
double var_1_8 = 10.3;
double var_1_9 = 64.875;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 3400562154;
unsigned short int var_1_13 = 5;
unsigned short int var_1_15 = 62040;
unsigned short int var_1_16 = 33955;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 2;
signed long int var_1_22 = 16;
signed long int var_1_23 = 2065264923;
signed long int var_1_24 = 2037605328;
signed short int var_1_25 = -64;
unsigned long int var_1_30 = 256;
unsigned short int var_1_33 = 2;
signed char var_1_34 = -4;
signed short int var_1_35 = -16;
signed char var_1_36 = 2;
signed char var_1_37 = 16;
signed char var_1_38 = 10;
signed char var_1_39 = 50;
double var_1_40 = 1.625;
signed char var_1_41 = 25;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
signed char var_1_46 = 5;
unsigned char var_1_47 = 16;
unsigned char var_1_48 = 128;
unsigned char var_1_49 = 200;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned long int var_1_52 = 0;
double var_1_53 = 1000000000.6;
double var_1_54 = 0.0;
double var_1_55 = 0.0;
signed long int var_1_56 = 4;
signed char var_1_57 = -2;
unsigned char var_1_58 = 8;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 64;
unsigned char var_1_61 = 8;
double var_1_62 = 15.85;
unsigned short int var_1_64 = 50;
unsigned long int var_1_65 = 2;
unsigned long int var_1_66 = 8;
unsigned long int var_1_67 = 4013441877;
unsigned long int var_1_68 = 1829025219;
double var_1_69 = 99999999999999.8;
signed short int var_1_70 = 256;
signed short int var_1_71 = 50;
signed short int var_1_72 = -1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 16;
double last_1_var_1_40 = 1.625;
unsigned char last_1_var_1_42 = 0;
unsigned char last_1_var_1_47 = 16;
unsigned char last_1_var_1_50 = 0;
double last_1_var_1_53 = 1000000000.6;
signed char last_1_var_1_57 = -2;
unsigned char last_1_var_1_58 = 8;
unsigned long int last_1_var_1_65 = 2;
signed short int last_1_var_1_71 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req21Batch46Amount250
	unsigned char stepLocal_16 = var_1_59;
	if (last_1_var_1_18 > stepLocal_16) {
		if (last_1_var_1_42) {
			if (last_1_var_1_40 >= last_1_var_1_53) {
				var_1_62 = (max (var_1_6 , var_1_7));
			}
		} else {
			var_1_62 = ((var_1_5 + var_1_54) - var_1_6);
		}
	}


	// From: Req15Batch46Amount250
	unsigned char stepLocal_8 = var_1_45 || var_1_43;
	if (stepLocal_8 && (last_1_var_1_57 < (last_1_var_1_47 - last_1_var_1_58))) {
		var_1_50 = (var_1_45 && (last_1_var_1_42 || (var_1_44 || var_1_51)));
	}


	// From: Req12Batch46Amount250
	if (last_1_var_1_71 <= (var_1_15 - (32 + var_1_36))) {
		var_1_42 = (last_1_var_1_50 && (var_1_43 || var_1_44));
	} else {
		var_1_42 = (! var_1_45);
	}


	// From: Req25Batch46Amount250
	if (var_1_42) {
		var_1_69 = var_1_7;
	} else {
		var_1_69 = var_1_54;
	}


	// From: Req14Batch46Amount250
	unsigned long int stepLocal_7 = last_1_var_1_65;
	unsigned long int stepLocal_6 = var_1_11 + var_1_36;
	if (stepLocal_6 <= last_1_var_1_58) {
		var_1_47 = (var_1_48 - var_1_37);
	} else {
		if (stepLocal_7 != ((max (-128 , last_1_var_1_58)) / (abs (var_1_15)))) {
			var_1_47 = ((var_1_49 - (5 + 4)) - var_1_36);
		} else {
			var_1_47 = (max (var_1_37 , var_1_36));
		}
	}


	// From: Req8Batch46Amount250
	if (var_1_24 == var_1_15) {
		var_1_33 = var_1_47;
	}


	// From: Req9Batch46Amount250
	if (((var_1_47 - var_1_47) % (min (var_1_19 , var_1_35))) > var_1_33) {
		var_1_34 = (abs (var_1_36 - var_1_37));
	} else {
		var_1_34 = (min (var_1_37 , (var_1_38 + var_1_39)));
	}


	// From: Req1Batch46Amount250
	if (16.75 > (var_1_2 - var_1_3)) {
		var_1_1 = ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9)));
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req13Batch46Amount250
	var_1_46 = (min (-100 , var_1_39));


	// From: Req20Batch46Amount250
	signed long int stepLocal_15 = var_1_35 >> var_1_15;
	if ((var_1_49 - (32 + var_1_59)) >= stepLocal_15) {
		var_1_58 = ((100 - var_1_59) + (var_1_60 - var_1_61));
	} else {
		var_1_58 = (max (var_1_59 , var_1_49));
	}


	// From: Req26Batch46Amount250
	var_1_70 = var_1_47;


	// From: Req23Batch46Amount250
	if (var_1_44) {
		if ((var_1_2 / var_1_54) < (- var_1_62)) {
			if (-1 == var_1_36) {
				var_1_65 = (abs (var_1_61));
			} else {
				var_1_65 = (min (var_1_16 , var_1_33));
			}
		}
	} else {
		var_1_65 = (max ((var_1_11 - var_1_47) , var_1_46));
	}


	// From: Req22Batch46Amount250
	unsigned char stepLocal_17 = var_1_50;
	if ((var_1_37 > var_1_33) || stepLocal_17) {
		var_1_64 = (max (((var_1_36 + var_1_61) + var_1_47) , var_1_15));
	}


	// From: Req3Batch46Amount250
	unsigned char stepLocal_0 = var_1_42;
	if (stepLocal_0 && ((50u >> var_1_58) < var_1_11)) {
		var_1_13 = ((abs (max (var_1_15 , var_1_16))) - var_1_47);
	}


	// From: Req4Batch46Amount250
	unsigned char stepLocal_2 = var_1_50;
	signed long int stepLocal_1 = ~ (var_1_58 / var_1_19);
	if (stepLocal_1 >= var_1_15) {
		var_1_18 = (min (var_1_16 , var_1_13));
	} else {
		if (var_1_50) {
			if (stepLocal_2 && var_1_42) {
				var_1_18 = var_1_16;
			}
		} else {
			var_1_18 = (max (((1000u + var_1_16) + var_1_64) , var_1_11));
		}
	}


	// From: Req16Batch46Amount250
	if (((var_1_7 + var_1_8) * var_1_62) <= var_1_9) {
		var_1_52 = var_1_48;
	} else {
		var_1_52 = (var_1_47 + (max ((var_1_23 - var_1_47) , 4u)));
	}


	// From: Req6Batch46Amount250
	var_1_25 = (max ((var_1_58 - (min (var_1_47 , var_1_47))) , var_1_34));


	// From: Req2Batch46Amount250
	var_1_10 = (var_1_11 - var_1_58);


	// From: Req7Batch46Amount250
	unsigned long int stepLocal_3 = var_1_65 ^ -2;
	if (((min (var_1_58 , var_1_47)) - (var_1_47 + var_1_47)) <= stepLocal_3) {
		var_1_30 = (var_1_64 + (var_1_15 + var_1_65));
	}


	// From: Req17Batch46Amount250
	signed long int stepLocal_11 = var_1_23;
	signed long int stepLocal_10 = var_1_37 - var_1_36;
	signed long int stepLocal_9 = (min (1 , 0)) - (var_1_58 + var_1_13);
	if ((var_1_46 + var_1_48) >= stepLocal_11) {
		if ((var_1_23 / var_1_35) == stepLocal_9) {
			var_1_53 = (var_1_9 - var_1_8);
		} else {
			var_1_53 = ((0.44999999999999996 + (max (var_1_5 , 4.8))) - 10.5);
		}
	} else {
		if (stepLocal_10 <= var_1_30) {
			var_1_53 = var_1_6;
		} else {
			var_1_53 = (((var_1_54 - var_1_55) + (min (var_1_7 , 15.03))) - var_1_5);
		}
	}


	// From: Req5Batch46Amount250
	if (var_1_9 == (min (var_1_7 , (var_1_3 / 100.2)))) {
		var_1_22 = (var_1_47 - ((max (var_1_23 , var_1_24)) - var_1_52));
	}


	// From: Req24Batch46Amount250
	if ((- 499.25f) >= var_1_69) {
		var_1_66 = ((var_1_67 - (1000000000u - var_1_16)) - ((var_1_68 - var_1_25) - var_1_47));
	} else {
		var_1_66 = var_1_24;
	}


	// From: Req27Batch46Amount250
	if (var_1_43) {
		var_1_71 = var_1_22;
	} else {
		var_1_71 = var_1_58;
	}


	// From: Req28Batch46Amount250
	unsigned long int stepLocal_18 = var_1_18;
	if (stepLocal_18 == (min (var_1_48 , var_1_10))) {
		if (var_1_54 < 9.9999999992E9) {
			var_1_72 = (var_1_18 - var_1_47);
		}
	} else {
		var_1_72 = var_1_39;
	}


	// From: Req11Batch46Amount250
	unsigned char stepLocal_5 = var_1_47;
	if (stepLocal_5 != (var_1_65 * var_1_30)) {
		var_1_41 = (max ((var_1_36 - var_1_37) , (-4 + var_1_39)));
	} else {
		var_1_41 = (var_1_36 - var_1_37);
	}


	// From: Req18Batch46Amount250
	var_1_56 = (max ((var_1_48 - var_1_64) , (abs (var_1_22))));


	// From: Req19Batch46Amount250
	unsigned long int stepLocal_14 = max ((max (200 , var_1_64)) , var_1_10);
	unsigned long int stepLocal_13 = max (var_1_38 , var_1_10);
	unsigned long int stepLocal_12 = var_1_10;
	if (stepLocal_14 < var_1_49) {
		var_1_57 = var_1_36;
	} else {
		if (stepLocal_12 <= var_1_66) {
			if ((- var_1_16) > stepLocal_13) {
				var_1_57 = (var_1_39 + var_1_38);
			} else {
				var_1_57 = (var_1_38 + var_1_39);
			}
		} else {
			var_1_57 = (var_1_37 - 1);
		}
	}


	// From: Req10Batch46Amount250
	unsigned char stepLocal_4 = var_1_35 < var_1_72;
	if ((var_1_9 * var_1_5) >= (- (var_1_3 + var_1_6))) {
		var_1_40 = ((abs (var_1_8)) + 3.5);
	} else {
		if (var_1_42 && stepLocal_4) {
			var_1_40 = (var_1_6 - var_1_4);
		} else {
			var_1_40 = var_1_9;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 4611686.018427382800e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32768);
	assume_abort_if_not(var_1_19 <= 32767);
	assume_abort_if_not(var_1_19 != 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741823);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32768);
	assume_abort_if_not(var_1_35 <= 32767);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 127);
	assume_abort_if_not(var_1_48 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 190);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 2305843.009213691390e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 63);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 3221225470);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 1610612735);
	assume_abort_if_not(var_1_68 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_71 = var_1_71;
}

int property() {
	return ((((((((((((((((((((((((((((16.75 > (var_1_2 - var_1_3)) ? (var_1_1 == ((double) ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9))))) : (var_1_1 == ((double) (abs (var_1_4))))) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_58)))) && ((var_1_42 && ((50u >> var_1_58) < var_1_11)) ? (var_1_13 == ((unsigned short int) ((abs (max (var_1_15 , var_1_16))) - var_1_47))) : 1)) && (((~ (var_1_58 / var_1_19)) >= var_1_15) ? (var_1_18 == ((unsigned long int) (min (var_1_16 , var_1_13)))) : (var_1_50 ? ((var_1_50 && var_1_42) ? (var_1_18 == ((unsigned long int) var_1_16)) : 1) : (var_1_18 == ((unsigned long int) (max (((1000u + var_1_16) + var_1_64) , var_1_11))))))) && ((var_1_9 == (min (var_1_7 , (var_1_3 / 100.2)))) ? (var_1_22 == ((signed long int) (var_1_47 - ((max (var_1_23 , var_1_24)) - var_1_52)))) : 1)) && (var_1_25 == ((signed short int) (max ((var_1_58 - (min (var_1_47 , var_1_47))) , var_1_34))))) && ((((min (var_1_58 , var_1_47)) - (var_1_47 + var_1_47)) <= (var_1_65 ^ -2)) ? (var_1_30 == ((unsigned long int) (var_1_64 + (var_1_15 + var_1_65)))) : 1)) && ((var_1_24 == var_1_15) ? (var_1_33 == ((unsigned short int) var_1_47)) : 1)) && ((((var_1_47 - var_1_47) % (min (var_1_19 , var_1_35))) > var_1_33) ? (var_1_34 == ((signed char) (abs (var_1_36 - var_1_37)))) : (var_1_34 == ((signed char) (min (var_1_37 , (var_1_38 + var_1_39))))))) && (((var_1_9 * var_1_5) >= (- (var_1_3 + var_1_6))) ? (var_1_40 == ((double) ((abs (var_1_8)) + 3.5))) : ((var_1_42 && (var_1_35 < var_1_72)) ? (var_1_40 == ((double) (var_1_6 - var_1_4))) : (var_1_40 == ((double) var_1_9))))) && ((var_1_47 != (var_1_65 * var_1_30)) ? (var_1_41 == ((signed char) (max ((var_1_36 - var_1_37) , (-4 + var_1_39))))) : (var_1_41 == ((signed char) (var_1_36 - var_1_37))))) && ((last_1_var_1_71 <= (var_1_15 - (32 + var_1_36))) ? (var_1_42 == ((unsigned char) (last_1_var_1_50 && (var_1_43 || var_1_44)))) : (var_1_42 == ((unsigned char) (! var_1_45))))) && (var_1_46 == ((signed char) (min (-100 , var_1_39))))) && (((var_1_11 + var_1_36) <= last_1_var_1_58) ? (var_1_47 == ((unsigned char) (var_1_48 - var_1_37))) : ((last_1_var_1_65 != ((max (-128 , last_1_var_1_58)) / (abs (var_1_15)))) ? (var_1_47 == ((unsigned char) ((var_1_49 - (5 + 4)) - var_1_36))) : (var_1_47 == ((unsigned char) (max (var_1_37 , var_1_36))))))) && (((var_1_45 || var_1_43) && (last_1_var_1_57 < (last_1_var_1_47 - last_1_var_1_58))) ? (var_1_50 == ((unsigned char) (var_1_45 && (last_1_var_1_42 || (var_1_44 || var_1_51))))) : 1)) && ((((var_1_7 + var_1_8) * var_1_62) <= var_1_9) ? (var_1_52 == ((unsigned long int) var_1_48)) : (var_1_52 == ((unsigned long int) (var_1_47 + (max ((var_1_23 - var_1_47) , 4u))))))) && (((var_1_46 + var_1_48) >= var_1_23) ? (((var_1_23 / var_1_35) == ((min (1 , 0)) - (var_1_58 + var_1_13))) ? (var_1_53 == ((double) (var_1_9 - var_1_8))) : (var_1_53 == ((double) ((0.44999999999999996 + (max (var_1_5 , 4.8))) - 10.5)))) : (((var_1_37 - var_1_36) <= var_1_30) ? (var_1_53 == ((double) var_1_6)) : (var_1_53 == ((double) (((var_1_54 - var_1_55) + (min (var_1_7 , 15.03))) - var_1_5)))))) && (var_1_56 == ((signed long int) (max ((var_1_48 - var_1_64) , (abs (var_1_22))))))) && (((max ((max (200 , var_1_64)) , var_1_10)) < var_1_49) ? (var_1_57 == ((signed char) var_1_36)) : ((var_1_10 <= var_1_66) ? (((- var_1_16) > (max (var_1_38 , var_1_10))) ? (var_1_57 == ((signed char) (var_1_39 + var_1_38))) : (var_1_57 == ((signed char) (var_1_38 + var_1_39)))) : (var_1_57 == ((signed char) (var_1_37 - 1)))))) && (((var_1_49 - (32 + var_1_59)) >= (var_1_35 >> var_1_15)) ? (var_1_58 == ((unsigned char) ((100 - var_1_59) + (var_1_60 - var_1_61)))) : (var_1_58 == ((unsigned char) (max (var_1_59 , var_1_49)))))) && ((last_1_var_1_18 > var_1_59) ? (last_1_var_1_42 ? ((last_1_var_1_40 >= last_1_var_1_53) ? (var_1_62 == ((double) (max (var_1_6 , var_1_7)))) : 1) : (var_1_62 == ((double) ((var_1_5 + var_1_54) - var_1_6)))) : 1)) && (((var_1_37 > var_1_33) || var_1_50) ? (var_1_64 == ((unsigned short int) (max (((var_1_36 + var_1_61) + var_1_47) , var_1_15)))) : 1)) && (var_1_44 ? (((var_1_2 / var_1_54) < (- var_1_62)) ? ((-1 == var_1_36) ? (var_1_65 == ((unsigned long int) (abs (var_1_61)))) : (var_1_65 == ((unsigned long int) (min (var_1_16 , var_1_33))))) : 1) : (var_1_65 == ((unsigned long int) (max ((var_1_11 - var_1_47) , var_1_46)))))) && (((- 499.25f) >= var_1_69) ? (var_1_66 == ((unsigned long int) ((var_1_67 - (1000000000u - var_1_16)) - ((var_1_68 - var_1_25) - var_1_47)))) : (var_1_66 == ((unsigned long int) var_1_24)))) && (var_1_42 ? (var_1_69 == ((double) var_1_7)) : (var_1_69 == ((double) var_1_54)))) && (var_1_70 == ((signed short int) var_1_47))) && (var_1_43 ? (var_1_71 == ((signed short int) var_1_22)) : (var_1_71 == ((signed short int) var_1_58)))) && ((var_1_18 == (min (var_1_48 , var_1_10))) ? ((var_1_54 < 9.9999999992E9) ? (var_1_72 == ((signed short int) (var_1_18 - var_1_47))) : 1) : (var_1_72 == ((signed short int) var_1_39)))
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
