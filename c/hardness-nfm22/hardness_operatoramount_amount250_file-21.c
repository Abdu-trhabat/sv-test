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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 1000000000;
unsigned long int var_1_9 = 100;
unsigned long int var_1_10 = 3437293494;
signed short int var_1_13 = 256;
float var_1_15 = 5.75;
float var_1_16 = 8.6;
signed long int var_1_23 = -256;
signed long int var_1_24 = 2121421491;
float var_1_25 = 0.19999999999999996;
float var_1_26 = 25.875;
float var_1_27 = 5.2;
float var_1_28 = 100000000000000.16;
unsigned short int var_1_29 = 256;
float var_1_32 = 4.375;
unsigned short int var_1_33 = 62160;
unsigned short int var_1_34 = 5;
unsigned short int var_1_35 = 10000;
unsigned long int var_1_37 = 2;
signed short int var_1_38 = 256;
signed char var_1_39 = -4;
unsigned long int var_1_40 = 3785201378;
unsigned long int var_1_41 = 4051174246;
signed char var_1_42 = 16;
signed char var_1_43 = 10;
signed char var_1_44 = 10;
signed char var_1_45 = -4;
signed char var_1_46 = -16;
signed char var_1_47 = 5;
unsigned char var_1_48 = 8;
unsigned char var_1_49 = 128;
unsigned long int var_1_50 = 128;
signed short int var_1_52 = 16;
unsigned short int var_1_53 = 10;
unsigned short int var_1_54 = 48101;
unsigned long int var_1_56 = 10;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 1;
signed short int var_1_59 = -4;
signed short int var_1_60 = 64;
signed short int var_1_61 = 20285;
signed char var_1_62 = 32;
double var_1_63 = 127.8;
double var_1_64 = 255.5;
double var_1_65 = 99999999.5;
double var_1_66 = 31.8;
signed char var_1_67 = 10;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_13 = 256;
float last_1_var_1_25 = 0.19999999999999996;
unsigned short int last_1_var_1_29 = 256;
unsigned short int last_1_var_1_34 = 5;
unsigned long int last_1_var_1_37 = 2;
signed char last_1_var_1_39 = -4;
unsigned char last_1_var_1_48 = 8;
unsigned long int last_1_var_1_50 = 128;
signed short int last_1_var_1_52 = 16;
unsigned long int last_1_var_1_56 = 10;
unsigned char last_1_var_1_57 = 1;
signed short int last_1_var_1_59 = -4;
double last_1_var_1_63 = 127.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch21Amount250
	unsigned char stepLocal_10 = last_1_var_1_59 < (last_1_var_1_13 ^ last_1_var_1_29);
	unsigned long int stepLocal_9 = 50u;
	if (stepLocal_10 && last_1_var_1_57) {
		if (stepLocal_9 == var_1_33) {
			var_1_34 = (last_1_var_1_48 + ((abs (20096)) - (var_1_35 - last_1_var_1_48)));
		} else {
			var_1_34 = (var_1_33 - last_1_var_1_48);
		}
	} else {
		var_1_34 = (last_1_var_1_48 + last_1_var_1_48);
	}


	// From: Req14Batch21Amount250
	if ((- var_1_49) > last_1_var_1_37) {
		if (last_1_var_1_57 || (last_1_var_1_29 >= last_1_var_1_50)) {
			var_1_53 = var_1_33;
		} else {
			var_1_53 = (min (var_1_33 , ((abs (var_1_54)) - (last_1_var_1_13 + last_1_var_1_48))));
		}
	}


	// From: Req6Batch21Amount250
	signed long int stepLocal_8 = last_1_var_1_34;
	signed long int stepLocal_7 = var_1_6;
	unsigned char stepLocal_6 = var_1_27 <= (last_1_var_1_63 / var_1_32);
	signed long int stepLocal_5 = last_1_var_1_39;
	if (stepLocal_8 <= last_1_var_1_34) {
		if ((var_1_26 / (min (32.75f , var_1_32))) >= last_1_var_1_25) {
			var_1_29 = (var_1_33 - (last_1_var_1_48 + last_1_var_1_48));
		} else {
			var_1_29 = (max (last_1_var_1_48 , last_1_var_1_48));
		}
	} else {
		if (stepLocal_5 > (-1 + (min (last_1_var_1_34 , last_1_var_1_29)))) {
			if (stepLocal_7 <= last_1_var_1_29) {
				if ((last_1_var_1_39 < last_1_var_1_34) && stepLocal_6) {
					var_1_29 = last_1_var_1_48;
				}
			} else {
				var_1_29 = last_1_var_1_48;
			}
		} else {
			var_1_29 = last_1_var_1_48;
		}
	}


	// From: Req16Batch21Amount250
	if (last_1_var_1_29 < last_1_var_1_48) {
		var_1_57 = var_1_58;
	}


	// From: Req11Batch21Amount250
	if ((var_1_10 - var_1_35) == (min (var_1_40 , 256u))) {
		if (var_1_33 > var_1_24) {
			if (var_1_26 > (var_1_27 + var_1_15)) {
				var_1_48 = ((abs (var_1_49)) - var_1_43);
			} else {
				if (last_1_var_1_57) {
					var_1_48 = var_1_49;
				} else {
					var_1_48 = var_1_49;
				}
			}
		} else {
			var_1_48 = var_1_43;
		}
	}


	// From: Req20Batch21Amount250
	var_1_63 = (128.4 - (var_1_64 + (var_1_65 + var_1_66)));


	// From: Req1Batch21Amount250
	if ((min (var_1_63 , var_1_63)) > var_1_63) {
		var_1_1 = (((var_1_5 + var_1_6) - var_1_53) - var_1_34);
	} else {
		var_1_1 = (var_1_5 - 2);
	}


	// From: Req5Batch21Amount250
	unsigned short int stepLocal_4 = var_1_29;
	if (var_1_63 >= (abs (var_1_63))) {
		if (var_1_57) {
			var_1_25 = (abs ((abs (var_1_26)) - var_1_27));
		} else {
			if (var_1_48 >= stepLocal_4) {
				var_1_25 = (var_1_27 - var_1_28);
			}
		}
	} else {
		var_1_25 = var_1_26;
	}


	// From: Req8Batch21Amount250
	if (var_1_63 < var_1_15) {
		if (var_1_57 || var_1_57) {
			var_1_37 = (var_1_5 + var_1_48);
		}
	} else {
		var_1_37 = (3058099590u - (max ((1334474812u - 10u) , var_1_5)));
	}


	// From: Req9Batch21Amount250
	if (var_1_57 && var_1_57) {
		if (var_1_57 && var_1_57) {
			var_1_38 = (var_1_48 + var_1_48);
		} else {
			if (var_1_57) {
				var_1_38 = (10 + var_1_48);
			} else {
				var_1_38 = (abs (var_1_48 - var_1_48));
			}
		}
	}


	// From: Req19Batch21Amount250
	unsigned long int stepLocal_13 = var_1_37;
	if (stepLocal_13 < (abs (var_1_34))) {
		var_1_62 = var_1_44;
	} else {
		var_1_62 = var_1_46;
	}


	// From: Req21Batch21Amount250
	if (! var_1_57) {
		if (var_1_37 == 25) {
			var_1_67 = var_1_43;
		}
	}


	// From: Req17Batch21Amount250
	unsigned char stepLocal_12 = var_1_48;
	if (stepLocal_12 != var_1_38) {
		var_1_59 = (abs (var_1_1));
	} else {
		var_1_59 = (max (var_1_45 , (max (var_1_42 , -16))));
	}


	// From: Req2Batch21Amount250
	signed long int stepLocal_0 = var_1_34 + var_1_6;
	if (var_1_59 >= stepLocal_0) {
		var_1_9 = ((max (var_1_10 , 3867474704u)) - ((var_1_34 + var_1_29) + var_1_34));
	}


	// From: Req10Batch21Amount250
	if ((max (var_1_10 , var_1_48)) > ((min (var_1_40 , var_1_41)) - var_1_53)) {
		if ((max (var_1_40 , -256)) >= var_1_6) {
			if ((last_1_var_1_39 * var_1_9) != var_1_53) {
				var_1_39 = (var_1_42 - var_1_43);
			}
		}
	} else {
		var_1_39 = (var_1_44 + ((max (var_1_45 , var_1_46)) + var_1_47));
	}


	// From: Req15Batch21Amount250
	signed long int stepLocal_11 = var_1_24 + var_1_6;
	if (-1000000 >= stepLocal_11) {
		if (var_1_57) {
			var_1_56 = (var_1_10 - (min (var_1_48 , (abs (last_1_var_1_56)))));
		} else {
			var_1_56 = (var_1_10 - 50u);
		}
	} else {
		var_1_56 = var_1_9;
	}


	// From: Req18Batch21Amount250
	if (var_1_57) {
		var_1_60 = (var_1_48 - var_1_43);
	} else {
		if ((var_1_35 <= var_1_37) && var_1_58) {
			if (var_1_44 == var_1_41) {
				var_1_60 = ((var_1_43 + var_1_49) + var_1_45);
			} else {
				if (((var_1_53 / var_1_49) > var_1_46) && ((min (var_1_48 , var_1_6)) > var_1_48)) {
					var_1_60 = (min ((var_1_42 - (var_1_61 - var_1_35)) , var_1_48));
				}
			}
		} else {
			var_1_60 = ((var_1_46 + (var_1_49 + -128)) + var_1_47);
		}
	}


	// From: Req4Batch21Amount250
	signed long int stepLocal_3 = var_1_53 * (max (var_1_67 , var_1_48));
	unsigned long int stepLocal_2 = var_1_5 / var_1_10;
	signed long int stepLocal_1 = var_1_5;
	if ((128u + var_1_48) > stepLocal_2) {
		if (stepLocal_3 < var_1_48) {
			if (var_1_59 < stepLocal_1) {
				var_1_23 = (var_1_5 - (var_1_24 - var_1_34));
			} else {
				var_1_23 = var_1_48;
			}
		} else {
			var_1_23 = var_1_53;
		}
	} else {
		var_1_23 = (abs (var_1_62));
	}


	// From: Req13Batch21Amount250
	if (16.75f > var_1_63) {
		var_1_52 = var_1_48;
	} else {
		if (((var_1_6 << var_1_29) / var_1_49) >= ((var_1_59 * last_1_var_1_52) % var_1_35)) {
			var_1_52 = (min (var_1_44 , -5));
		} else {
			var_1_52 = var_1_48;
		}
	}


	// From: Req3Batch21Amount250
	if (var_1_57) {
		if ((var_1_15 - var_1_16) >= ((var_1_63 + var_1_25) + var_1_25)) {
			var_1_13 = (max (((var_1_48 + var_1_48) - var_1_48) , var_1_39));
		} else {
			var_1_13 = ((abs (var_1_48)) + (max ((var_1_39 + var_1_39) , (abs (var_1_48)))));
		}
	}


	// From: Req12Batch21Amount250
	if ((var_1_48 - var_1_35) < var_1_53) {
		var_1_50 = var_1_6;
	} else {
		if (last_1_var_1_50 <= var_1_10) {
			var_1_50 = (max (var_1_60 , var_1_56));
		} else {
			var_1_50 = var_1_60;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 536870911);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 536870911);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 8191);
	assume_abort_if_not(var_1_35 <= 16383);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967295);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967295);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -1);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -63);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -31);
	assume_abort_if_not(var_1_45 <= 32);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -31);
	assume_abort_if_not(var_1_46 <= 32);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -31);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 32767);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 1);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= 16383);
	assume_abort_if_not(var_1_61 <= 32766);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691390e+12F && var_1_66 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_63 = var_1_63;
}

int property() {
	return ((((((((((((((((((((((min (var_1_63 , var_1_63)) > var_1_63) ? (var_1_1 == ((signed long int) (((var_1_5 + var_1_6) - var_1_53) - var_1_34))) : (var_1_1 == ((signed long int) (var_1_5 - 2)))) && ((var_1_59 >= (var_1_34 + var_1_6)) ? (var_1_9 == ((unsigned long int) ((max (var_1_10 , 3867474704u)) - ((var_1_34 + var_1_29) + var_1_34)))) : 1)) && (var_1_57 ? (((var_1_15 - var_1_16) >= ((var_1_63 + var_1_25) + var_1_25)) ? (var_1_13 == ((signed short int) (max (((var_1_48 + var_1_48) - var_1_48) , var_1_39)))) : (var_1_13 == ((signed short int) ((abs (var_1_48)) + (max ((var_1_39 + var_1_39) , (abs (var_1_48)))))))) : 1)) && (((128u + var_1_48) > (var_1_5 / var_1_10)) ? (((var_1_53 * (max (var_1_67 , var_1_48))) < var_1_48) ? ((var_1_59 < var_1_5) ? (var_1_23 == ((signed long int) (var_1_5 - (var_1_24 - var_1_34)))) : (var_1_23 == ((signed long int) var_1_48))) : (var_1_23 == ((signed long int) var_1_53))) : (var_1_23 == ((signed long int) (abs (var_1_62)))))) && ((var_1_63 >= (abs (var_1_63))) ? (var_1_57 ? (var_1_25 == ((float) (abs ((abs (var_1_26)) - var_1_27)))) : ((var_1_48 >= var_1_29) ? (var_1_25 == ((float) (var_1_27 - var_1_28))) : 1)) : (var_1_25 == ((float) var_1_26)))) && ((last_1_var_1_34 <= last_1_var_1_34) ? (((var_1_26 / (min (32.75f , var_1_32))) >= last_1_var_1_25) ? (var_1_29 == ((unsigned short int) (var_1_33 - (last_1_var_1_48 + last_1_var_1_48)))) : (var_1_29 == ((unsigned short int) (max (last_1_var_1_48 , last_1_var_1_48))))) : ((last_1_var_1_39 > (-1 + (min (last_1_var_1_34 , last_1_var_1_29)))) ? ((var_1_6 <= last_1_var_1_29) ? (((last_1_var_1_39 < last_1_var_1_34) && (var_1_27 <= (last_1_var_1_63 / var_1_32))) ? (var_1_29 == ((unsigned short int) last_1_var_1_48)) : 1) : (var_1_29 == ((unsigned short int) last_1_var_1_48))) : (var_1_29 == ((unsigned short int) last_1_var_1_48))))) && (((last_1_var_1_59 < (last_1_var_1_13 ^ last_1_var_1_29)) && last_1_var_1_57) ? ((50u == var_1_33) ? (var_1_34 == ((unsigned short int) (last_1_var_1_48 + ((abs (20096)) - (var_1_35 - last_1_var_1_48))))) : (var_1_34 == ((unsigned short int) (var_1_33 - last_1_var_1_48)))) : (var_1_34 == ((unsigned short int) (last_1_var_1_48 + last_1_var_1_48))))) && ((var_1_63 < var_1_15) ? ((var_1_57 || var_1_57) ? (var_1_37 == ((unsigned long int) (var_1_5 + var_1_48))) : 1) : (var_1_37 == ((unsigned long int) (3058099590u - (max ((1334474812u - 10u) , var_1_5))))))) && ((var_1_57 && var_1_57) ? ((var_1_57 && var_1_57) ? (var_1_38 == ((signed short int) (var_1_48 + var_1_48))) : (var_1_57 ? (var_1_38 == ((signed short int) (10 + var_1_48))) : (var_1_38 == ((signed short int) (abs (var_1_48 - var_1_48)))))) : 1)) && (((max (var_1_10 , var_1_48)) > ((min (var_1_40 , var_1_41)) - var_1_53)) ? (((max (var_1_40 , -256)) >= var_1_6) ? (((last_1_var_1_39 * var_1_9) != var_1_53) ? (var_1_39 == ((signed char) (var_1_42 - var_1_43))) : 1) : 1) : (var_1_39 == ((signed char) (var_1_44 + ((max (var_1_45 , var_1_46)) + var_1_47)))))) && (((var_1_10 - var_1_35) == (min (var_1_40 , 256u))) ? ((var_1_33 > var_1_24) ? ((var_1_26 > (var_1_27 + var_1_15)) ? (var_1_48 == ((unsigned char) ((abs (var_1_49)) - var_1_43))) : (last_1_var_1_57 ? (var_1_48 == ((unsigned char) var_1_49)) : (var_1_48 == ((unsigned char) var_1_49)))) : (var_1_48 == ((unsigned char) var_1_43))) : 1)) && (((var_1_48 - var_1_35) < var_1_53) ? (var_1_50 == ((unsigned long int) var_1_6)) : ((last_1_var_1_50 <= var_1_10) ? (var_1_50 == ((unsigned long int) (max (var_1_60 , var_1_56)))) : (var_1_50 == ((unsigned long int) var_1_60))))) && ((16.75f > var_1_63) ? (var_1_52 == ((signed short int) var_1_48)) : ((((var_1_6 << var_1_29) / var_1_49) >= ((var_1_59 * last_1_var_1_52) % var_1_35)) ? (var_1_52 == ((signed short int) (min (var_1_44 , -5)))) : (var_1_52 == ((signed short int) var_1_48))))) && (((- var_1_49) > last_1_var_1_37) ? ((last_1_var_1_57 || (last_1_var_1_29 >= last_1_var_1_50)) ? (var_1_53 == ((unsigned short int) var_1_33)) : (var_1_53 == ((unsigned short int) (min (var_1_33 , ((abs (var_1_54)) - (last_1_var_1_13 + last_1_var_1_48))))))) : 1)) && ((-1000000 >= (var_1_24 + var_1_6)) ? (var_1_57 ? (var_1_56 == ((unsigned long int) (var_1_10 - (min (var_1_48 , (abs (last_1_var_1_56))))))) : (var_1_56 == ((unsigned long int) (var_1_10 - 50u)))) : (var_1_56 == ((unsigned long int) var_1_9)))) && ((last_1_var_1_29 < last_1_var_1_48) ? (var_1_57 == ((unsigned char) var_1_58)) : 1)) && ((var_1_48 != var_1_38) ? (var_1_59 == ((signed short int) (abs (var_1_1)))) : (var_1_59 == ((signed short int) (max (var_1_45 , (max (var_1_42 , -16)))))))) && (var_1_57 ? (var_1_60 == ((signed short int) (var_1_48 - var_1_43))) : (((var_1_35 <= var_1_37) && var_1_58) ? ((var_1_44 == var_1_41) ? (var_1_60 == ((signed short int) ((var_1_43 + var_1_49) + var_1_45))) : ((((var_1_53 / var_1_49) > var_1_46) && ((min (var_1_48 , var_1_6)) > var_1_48)) ? (var_1_60 == ((signed short int) (min ((var_1_42 - (var_1_61 - var_1_35)) , var_1_48)))) : 1)) : (var_1_60 == ((signed short int) ((var_1_46 + (var_1_49 + -128)) + var_1_47)))))) && ((var_1_37 < (abs (var_1_34))) ? (var_1_62 == ((signed char) var_1_44)) : (var_1_62 == ((signed char) var_1_46)))) && (var_1_63 == ((double) (128.4 - (var_1_64 + (var_1_65 + var_1_66)))))) && ((! var_1_57) ? ((var_1_37 == 25) ? (var_1_67 == ((signed char) var_1_43)) : 1) : 1)
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
