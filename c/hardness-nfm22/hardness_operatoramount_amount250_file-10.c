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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 0;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 20453;
signed short int var_1_10 = -5;
unsigned char var_1_12 = 5;
unsigned short int var_1_13 = 63501;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 200;
unsigned char var_1_16 = 32;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 4;
unsigned long int var_1_20 = 32;
signed long int var_1_21 = 32;
signed long int var_1_22 = 10;
signed long int var_1_23 = 1409985475;
signed char var_1_24 = 32;
signed char var_1_25 = 16;
unsigned char var_1_26 = 0;
unsigned char var_1_30 = 0;
signed long int var_1_31 = 256;
unsigned long int var_1_32 = 4067269237;
signed long int var_1_33 = 1000000000;
signed short int var_1_35 = -5;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 200;
signed long int var_1_39 = 10000000;
unsigned short int var_1_40 = 16;
float var_1_41 = 31.4;
float var_1_42 = 16.432;
float var_1_43 = 9999.5;
float var_1_44 = 100000000.125;
float var_1_45 = 99.8;
float var_1_46 = 127.8;
float var_1_47 = 10.5;
unsigned long int var_1_48 = 256;
unsigned long int var_1_49 = 4093040982;
unsigned short int var_1_52 = 4;
unsigned short int var_1_53 = 46499;
unsigned short int var_1_54 = 25950;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
signed char var_1_59 = -16;
signed char var_1_60 = 0;
signed char var_1_61 = 10;
signed char var_1_62 = 8;
signed char var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 10;
unsigned char var_1_68 = 100;
unsigned char var_1_69 = 100;
signed short int var_1_70 = -8;
signed char var_1_71 = -5;
unsigned long int var_1_72 = 16;
signed short int var_1_73 = -2;
unsigned short int var_1_74 = 0;
double var_1_75 = 99999.7;
double var_1_76 = 15.5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_22 = 10;
signed long int last_1_var_1_31 = 256;
unsigned char last_1_var_1_36 = 1;
unsigned short int last_1_var_1_38 = 200;
unsigned long int last_1_var_1_48 = 256;
unsigned char last_1_var_1_55 = 1;
unsigned char last_1_var_1_58 = 0;
unsigned char last_1_var_1_64 = 0;
unsigned long int last_1_var_1_72 = 16;
unsigned short int last_1_var_1_74 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch10Amount250
	if (last_1_var_1_72 < var_1_23) {
		var_1_26 = 0;
	} else {
		if (last_1_var_1_36 || (last_1_var_1_58 || (last_1_var_1_55 || last_1_var_1_58))) {
			var_1_26 = var_1_30;
		}
	}


	// From: Req7Batch10Amount250
	if (var_1_26) {
		var_1_24 = var_1_25;
	}


	// From: Req21Batch10Amount250
	unsigned short int stepLocal_17 = var_1_13;
	signed long int stepLocal_16 = var_1_16 / var_1_53;
	unsigned char stepLocal_15 = var_1_16 > var_1_63;
	signed long int stepLocal_14 = var_1_23;
	if (((last_1_var_1_74 * var_1_7) % var_1_53) == stepLocal_14) {
		var_1_67 = (var_1_18 + var_1_63);
	} else {
		if ((last_1_var_1_22 ^ var_1_15) == stepLocal_16) {
			if ((var_1_54 + var_1_49) >= stepLocal_17) {
				if (last_1_var_1_58 || stepLocal_15) {
					var_1_67 = (max ((var_1_15 - (var_1_63 + var_1_61)) , 16));
				}
			} else {
				var_1_67 = ((var_1_68 + var_1_69) - (max (var_1_17 , var_1_61)));
			}
		} else {
			var_1_67 = (var_1_16 + var_1_18);
		}
	}


	// From: Req11Batch10Amount250
	if ((abs (var_1_16)) == (min (var_1_14 , var_1_17))) {
		var_1_36 = var_1_30;
	} else {
		var_1_36 = (! var_1_37);
	}


	// From: Req12Batch10Amount250
	signed long int stepLocal_8 = var_1_18 / var_1_14;
	if (var_1_30) {
		if ((var_1_16 % var_1_39) != stepLocal_8) {
			var_1_38 = (min ((max ((var_1_14 + 200) , var_1_18)) , last_1_var_1_38));
		}
	} else {
		var_1_38 = ((55986 - (abs (16))) - 5);
	}


	// From: Req19Batch10Amount250
	var_1_59 = ((var_1_60 - var_1_61) + (var_1_62 - var_1_63));


	// From: Req20Batch10Amount250
	unsigned char stepLocal_13 = var_1_43 > var_1_45;
	if (stepLocal_13 && (var_1_18 > 8)) {
		var_1_64 = ((var_1_56 && (var_1_37 && var_1_65)) && var_1_66);
	} else {
		var_1_64 = (last_1_var_1_64 || (var_1_56 && var_1_37));
	}


	// From: Req22Batch10Amount250
	var_1_70 = var_1_7;


	// From: Req23Batch10Amount250
	var_1_71 = var_1_25;


	// From: Req25Batch10Amount250
	var_1_73 = (abs (var_1_25));


	// From: Req4Batch10Amount250
	signed long int stepLocal_3 = (min (var_1_17 , var_1_15)) << var_1_73;
	if ((var_1_67 - var_1_7) == stepLocal_3) {
		var_1_20 = (2u + var_1_14);
	}


	// From: Req26Batch10Amount250
	if (var_1_37) {
		if (var_1_64) {
			if (((min (var_1_47 , var_1_46)) - (var_1_75 + var_1_76)) != 10.25) {
				var_1_74 = var_1_62;
			} else {
				var_1_74 = var_1_67;
			}
		} else {
			var_1_74 = var_1_54;
		}
	} else {
		var_1_74 = var_1_69;
	}


	// From: Req3Batch10Amount250
	signed long int stepLocal_2 = 4;
	unsigned long int stepLocal_1 = 2670268651u - var_1_67;
	if (var_1_67 >= stepLocal_2) {
		if (! ((var_1_13 - var_1_20) <= 64)) {
			if (stepLocal_1 < var_1_8) {
				var_1_12 = ((min (var_1_14 , var_1_15)) - (max ((max (var_1_16 , var_1_17)) , (abs (var_1_18)))));
			} else {
				var_1_12 = var_1_15;
			}
		} else {
			if (var_1_64) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = (1 + var_1_17);
			}
		}
	}


	// From: Req6Batch10Amount250
	var_1_22 = ((var_1_23 - 4) - var_1_12);


	// From: Req18Batch10Amount250
	unsigned char stepLocal_12 = var_1_18;
	if (stepLocal_12 > var_1_23) {
		var_1_58 = ((var_1_12 <= var_1_38) || var_1_56);
	} else {
		var_1_58 = (var_1_30 || var_1_57);
	}


	// From: Req2Batch10Amount250
	var_1_10 = (var_1_12 - var_1_67);


	// From: Req13Batch10Amount250
	var_1_40 = (max (var_1_12 , (max (var_1_15 , var_1_7))));


	// From: Req5Batch10Amount250
	unsigned short int stepLocal_4 = var_1_40;
	if (stepLocal_4 > (- (var_1_20 * 8))) {
		var_1_21 = (var_1_13 + var_1_12);
	}


	// From: Req10Batch10Amount250
	if (var_1_26) {
		if (var_1_21 <= var_1_8) {
			var_1_35 = (var_1_12 + 64);
		} else {
			var_1_35 = ((var_1_24 + var_1_25) + var_1_38);
		}
	} else {
		var_1_35 = ((max (var_1_18 , var_1_17)) + (abs (var_1_15)));
	}


	// From: Req15Batch10Amount250
	signed long int stepLocal_11 = var_1_22;
	signed long int stepLocal_10 = (var_1_40 * var_1_39) & var_1_67;
	if (stepLocal_10 > var_1_35) {
		var_1_48 = (var_1_49 - last_1_var_1_48);
	} else {
		if (var_1_36) {
			var_1_48 = (var_1_49 - ((var_1_35 + var_1_13) + var_1_7));
		} else {
			if (stepLocal_11 <= last_1_var_1_48) {
				var_1_48 = (var_1_17 + var_1_33);
			} else {
				var_1_48 = (var_1_13 + (min (var_1_17 , (last_1_var_1_48 + var_1_12))));
			}
		}
	}


	// From: Req17Batch10Amount250
	if (! last_1_var_1_55) {
		if (var_1_16 < var_1_48) {
			var_1_55 = (((var_1_37 && last_1_var_1_55) || (! var_1_30)) && (var_1_58 || var_1_56));
		} else {
			var_1_55 = (! (! var_1_57));
		}
	}


	// From: Req24Batch10Amount250
	if (var_1_56) {
		var_1_72 = var_1_35;
	} else {
		var_1_72 = var_1_15;
	}


	// From: Req14Batch10Amount250
	unsigned long int stepLocal_9 = (max (var_1_48 , var_1_22)) + var_1_67;
	if (((var_1_70 * var_1_72) * (var_1_67 * var_1_7)) == stepLocal_9) {
		var_1_41 = (var_1_42 + var_1_43);
	} else {
		if (var_1_36) {
			var_1_41 = ((abs (var_1_43)) + (var_1_44 + (max (var_1_45 , 63.8f))));
		} else {
			var_1_41 = ((abs (var_1_42)) - (max (var_1_46 , var_1_47)));
		}
	}


	// From: Req16Batch10Amount250
	if (var_1_55) {
		if (var_1_41 >= (max (var_1_45 , (- var_1_41)))) {
			var_1_52 = (var_1_12 + (abs (var_1_21)));
		} else {
			var_1_52 = (var_1_53 - ((min (var_1_8 , var_1_54)) - var_1_14));
		}
	} else {
		var_1_52 = (min (var_1_8 , var_1_7));
	}


	// From: Req1Batch10Amount250
	unsigned long int stepLocal_0 = var_1_20;
	if (stepLocal_0 <= 32) {
		if (var_1_41 < var_1_41) {
			var_1_1 = (var_1_20 + var_1_12);
		}
	} else {
		var_1_1 = ((var_1_67 + (var_1_7 - var_1_20)) + (var_1_8 - var_1_67));
	}


	// From: Req9Batch10Amount250
	unsigned char stepLocal_7 = var_1_18;
	unsigned char stepLocal_6 = var_1_17;
	unsigned short int stepLocal_5 = var_1_8;
	if (var_1_13 <= stepLocal_7) {
		if (((var_1_8 + var_1_59) % (max (var_1_7 , 10))) >= stepLocal_6) {
			var_1_31 = (var_1_8 - (max (var_1_7 , last_1_var_1_31)));
		} else {
			var_1_31 = (var_1_14 - var_1_13);
		}
	} else {
		if ((min (var_1_40 , (var_1_32 - var_1_18))) >= stepLocal_5) {
			var_1_31 = (var_1_67 + (var_1_18 - (var_1_33 - var_1_67)));
		} else {
			if (var_1_41 <= (min ((max (var_1_41 , 31.5f)) , var_1_41))) {
				var_1_31 = (min (var_1_59 , var_1_13));
			} else {
				var_1_31 = (max ((8 - 100) , var_1_17));
			}
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65535);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741822);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 536870911);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_39 >= -2147483648);
	assume_abort_if_not(var_1_39 <= 2147483647);
	assume_abort_if_not(var_1_39 != 0);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -230584.3009213691390e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691390e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -230584.3009213691390e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691390e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854765600e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 16383);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 63);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 1);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 63);
	assume_abort_if_not(var_1_68 <= 127);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 64);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427387900e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427387900e+12F && var_1_76 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
}

int property() {
	return ((((((((((((((((((((((((((var_1_20 <= 32) ? ((var_1_41 < var_1_41) ? (var_1_1 == ((unsigned short int) (var_1_20 + var_1_12))) : 1) : (var_1_1 == ((unsigned short int) ((var_1_67 + (var_1_7 - var_1_20)) + (var_1_8 - var_1_67))))) && (var_1_10 == ((signed short int) (var_1_12 - var_1_67)))) && ((var_1_67 >= 4) ? ((! ((var_1_13 - var_1_20) <= 64)) ? (((2670268651u - var_1_67) < var_1_8) ? (var_1_12 == ((unsigned char) ((min (var_1_14 , var_1_15)) - (max ((max (var_1_16 , var_1_17)) , (abs (var_1_18))))))) : (var_1_12 == ((unsigned char) var_1_15))) : (var_1_64 ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) (1 + var_1_17))))) : 1)) && (((var_1_67 - var_1_7) == ((min (var_1_17 , var_1_15)) << var_1_73)) ? (var_1_20 == ((unsigned long int) (2u + var_1_14))) : 1)) && ((var_1_40 > (- (var_1_20 * 8))) ? (var_1_21 == ((signed long int) (var_1_13 + var_1_12))) : 1)) && (var_1_22 == ((signed long int) ((var_1_23 - 4) - var_1_12)))) && (var_1_26 ? (var_1_24 == ((signed char) var_1_25)) : 1)) && ((last_1_var_1_72 < var_1_23) ? (var_1_26 == ((unsigned char) 0)) : ((last_1_var_1_36 || (last_1_var_1_58 || (last_1_var_1_55 || last_1_var_1_58))) ? (var_1_26 == ((unsigned char) var_1_30)) : 1))) && ((var_1_13 <= var_1_18) ? ((((var_1_8 + var_1_59) % (max (var_1_7 , 10))) >= var_1_17) ? (var_1_31 == ((signed long int) (var_1_8 - (max (var_1_7 , last_1_var_1_31))))) : (var_1_31 == ((signed long int) (var_1_14 - var_1_13)))) : (((min (var_1_40 , (var_1_32 - var_1_18))) >= var_1_8) ? (var_1_31 == ((signed long int) (var_1_67 + (var_1_18 - (var_1_33 - var_1_67))))) : ((var_1_41 <= (min ((max (var_1_41 , 31.5f)) , var_1_41))) ? (var_1_31 == ((signed long int) (min (var_1_59 , var_1_13)))) : (var_1_31 == ((signed long int) (max ((8 - 100) , var_1_17)))))))) && (var_1_26 ? ((var_1_21 <= var_1_8) ? (var_1_35 == ((signed short int) (var_1_12 + 64))) : (var_1_35 == ((signed short int) ((var_1_24 + var_1_25) + var_1_38)))) : (var_1_35 == ((signed short int) ((max (var_1_18 , var_1_17)) + (abs (var_1_15))))))) && (((abs (var_1_16)) == (min (var_1_14 , var_1_17))) ? (var_1_36 == ((unsigned char) var_1_30)) : (var_1_36 == ((unsigned char) (! var_1_37))))) && (var_1_30 ? (((var_1_16 % var_1_39) != (var_1_18 / var_1_14)) ? (var_1_38 == ((unsigned short int) (min ((max ((var_1_14 + 200) , var_1_18)) , last_1_var_1_38)))) : 1) : (var_1_38 == ((unsigned short int) ((55986 - (abs (16))) - 5))))) && (var_1_40 == ((unsigned short int) (max (var_1_12 , (max (var_1_15 , var_1_7))))))) && ((((var_1_70 * var_1_72) * (var_1_67 * var_1_7)) == ((max (var_1_48 , var_1_22)) + var_1_67)) ? (var_1_41 == ((float) (var_1_42 + var_1_43))) : (var_1_36 ? (var_1_41 == ((float) ((abs (var_1_43)) + (var_1_44 + (max (var_1_45 , 63.8f)))))) : (var_1_41 == ((float) ((abs (var_1_42)) - (max (var_1_46 , var_1_47)))))))) && ((((var_1_40 * var_1_39) & var_1_67) > var_1_35) ? (var_1_48 == ((unsigned long int) (var_1_49 - last_1_var_1_48))) : (var_1_36 ? (var_1_48 == ((unsigned long int) (var_1_49 - ((var_1_35 + var_1_13) + var_1_7)))) : ((var_1_22 <= last_1_var_1_48) ? (var_1_48 == ((unsigned long int) (var_1_17 + var_1_33))) : (var_1_48 == ((unsigned long int) (var_1_13 + (min (var_1_17 , (last_1_var_1_48 + var_1_12)))))))))) && (var_1_55 ? ((var_1_41 >= (max (var_1_45 , (- var_1_41)))) ? (var_1_52 == ((unsigned short int) (var_1_12 + (abs (var_1_21))))) : (var_1_52 == ((unsigned short int) (var_1_53 - ((min (var_1_8 , var_1_54)) - var_1_14))))) : (var_1_52 == ((unsigned short int) (min (var_1_8 , var_1_7)))))) && ((! last_1_var_1_55) ? ((var_1_16 < var_1_48) ? (var_1_55 == ((unsigned char) (((var_1_37 && last_1_var_1_55) || (! var_1_30)) && (var_1_58 || var_1_56)))) : (var_1_55 == ((unsigned char) (! (! var_1_57))))) : 1)) && ((var_1_18 > var_1_23) ? (var_1_58 == ((unsigned char) ((var_1_12 <= var_1_38) || var_1_56))) : (var_1_58 == ((unsigned char) (var_1_30 || var_1_57))))) && (var_1_59 == ((signed char) ((var_1_60 - var_1_61) + (var_1_62 - var_1_63))))) && (((var_1_43 > var_1_45) && (var_1_18 > 8)) ? (var_1_64 == ((unsigned char) ((var_1_56 && (var_1_37 && var_1_65)) && var_1_66))) : (var_1_64 == ((unsigned char) (last_1_var_1_64 || (var_1_56 && var_1_37)))))) && ((((last_1_var_1_74 * var_1_7) % var_1_53) == var_1_23) ? (var_1_67 == ((unsigned char) (var_1_18 + var_1_63))) : (((last_1_var_1_22 ^ var_1_15) == (var_1_16 / var_1_53)) ? (((var_1_54 + var_1_49) >= var_1_13) ? ((last_1_var_1_58 || (var_1_16 > var_1_63)) ? (var_1_67 == ((unsigned char) (max ((var_1_15 - (var_1_63 + var_1_61)) , 16)))) : 1) : (var_1_67 == ((unsigned char) ((var_1_68 + var_1_69) - (max (var_1_17 , var_1_61)))))) : (var_1_67 == ((unsigned char) (var_1_16 + var_1_18)))))) && (var_1_70 == ((signed short int) var_1_7))) && (var_1_71 == ((signed char) var_1_25))) && (var_1_56 ? (var_1_72 == ((unsigned long int) var_1_35)) : (var_1_72 == ((unsigned long int) var_1_15)))) && (var_1_73 == ((signed short int) (abs (var_1_25))))) && (var_1_37 ? (var_1_64 ? ((((min (var_1_47 , var_1_46)) - (var_1_75 + var_1_76)) != 10.25) ? (var_1_74 == ((unsigned short int) var_1_62)) : (var_1_74 == ((unsigned short int) var_1_67))) : (var_1_74 == ((unsigned short int) var_1_54))) : (var_1_74 == ((unsigned short int) var_1_69)))
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
