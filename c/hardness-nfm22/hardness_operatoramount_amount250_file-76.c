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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 8;
double var_1_19 = 3.25;
double var_1_20 = 256.25;
double var_1_21 = 0.4;
double var_1_22 = 50.35;
double var_1_23 = 100.8;
signed short int var_1_24 = 200;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 3244026400;
unsigned char var_1_27 = 32;
signed short int var_1_28 = -256;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 128;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 1671264176;
unsigned long int var_1_33 = 64;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 128;
signed short int var_1_41 = 16;
signed short int var_1_43 = -50;
unsigned short int var_1_44 = 8;
unsigned short int var_1_45 = 25;
float var_1_46 = 10.75;
float var_1_47 = 0.0;
float var_1_48 = 0.0;
float var_1_49 = 255.5;
double var_1_50 = 4.484;
unsigned char var_1_51 = 32;
unsigned char var_1_52 = 10;
unsigned char var_1_53 = 0;
signed char var_1_54 = 4;
unsigned char var_1_55 = 64;
unsigned char var_1_56 = 32;
float var_1_57 = 50.8;
signed char var_1_58 = -2;
signed char var_1_59 = 4;
signed char var_1_60 = -4;
signed char var_1_61 = 10;
unsigned short int var_1_62 = 5;
signed long int var_1_63 = -500;
unsigned short int var_1_64 = 128;
double var_1_65 = 256.375;
unsigned long int var_1_66 = 4;
unsigned long int var_1_67 = 3301509793;
signed long int var_1_68 = 16;
unsigned char var_1_69 = 10;
unsigned char var_1_70 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_25 = 2;
unsigned long int last_1_var_1_33 = 64;
unsigned char last_1_var_1_36 = 0;
unsigned char last_1_var_1_39 = 64;
double last_1_var_1_50 = 4.484;
unsigned char last_1_var_1_51 = 32;
unsigned short int last_1_var_1_62 = 5;
signed long int last_1_var_1_63 = -500;
unsigned short int last_1_var_1_64 = 128;
double last_1_var_1_65 = 256.375;
unsigned long int last_1_var_1_66 = 4;
signed long int last_1_var_1_68 = 16;
unsigned char last_1_var_1_70 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req16Batch76Amount250
	signed long int stepLocal_8 = (var_1_29 + last_1_var_1_62) >> last_1_var_1_25;
	unsigned char stepLocal_7 = last_1_var_1_51 < (last_1_var_1_33 * var_1_26);
	signed long int stepLocal_6 = last_1_var_1_51;
	if (var_1_4 && stepLocal_7) {
		if (stepLocal_6 < last_1_var_1_51) {
			var_1_50 = (var_1_47 - var_1_48);
		} else {
			if (var_1_47 == var_1_49) {
				var_1_50 = (var_1_20 - (max (16.2 , var_1_48)));
			} else {
				if (last_1_var_1_70 >= stepLocal_8) {
					var_1_50 = var_1_23;
				} else {
					var_1_50 = var_1_49;
				}
			}
		}
	}


	// From: Req17Batch76Amount250
	signed long int stepLocal_10 = var_1_52 - var_1_54;
	unsigned char stepLocal_9 = var_1_35;
	if (64u >= stepLocal_9) {
		var_1_51 = (min (var_1_30 , (var_1_35 + (var_1_52 + var_1_53))));
	} else {
		if (stepLocal_10 >= last_1_var_1_68) {
			var_1_51 = var_1_35;
		} else {
			var_1_51 = (((var_1_55 + var_1_56) - var_1_53) + (min (var_1_35 , var_1_54)));
		}
	}


	// From: Req6Batch76Amount250
	unsigned char stepLocal_0 = (last_1_var_1_39 + 5) > var_1_28;
	if ((last_1_var_1_50 <= last_1_var_1_65) && stepLocal_0) {
		if (last_1_var_1_36) {
			var_1_27 = (max (var_1_29 , var_1_30));
		}
	} else {
		var_1_27 = (min (var_1_30 , var_1_29));
	}


	// From: Req9Batch76Amount250
	signed long int stepLocal_5 = last_1_var_1_51;
	unsigned char stepLocal_4 = var_1_35;
	signed long int stepLocal_3 = min (var_1_35 , last_1_var_1_64);
	signed long int stepLocal_2 = last_1_var_1_70;
	if (stepLocal_2 < (abs (last_1_var_1_51))) {
		if (last_1_var_1_39 > stepLocal_5) {
			if ((var_1_30 & (- 1)) < stepLocal_3) {
				if (var_1_26 > stepLocal_4) {
					var_1_36 = var_1_38;
				}
			} else {
				var_1_36 = var_1_4;
			}
		} else {
			var_1_36 = 0;
		}
	} else {
		var_1_36 = var_1_9;
	}


	// From: Req1Batch76Amount250
	if (! (var_1_36 || var_1_36)) {
		var_1_1 = (var_1_4 || var_1_5);
	} else {
		var_1_1 = ((var_1_6 && var_1_7) && (var_1_8 && var_1_9));
	}


	// From: Req18Batch76Amount250
	if (var_1_36) {
		var_1_57 = (var_1_21 - (max (var_1_47 , (var_1_48 + var_1_49))));
	}


	// From: Req23Batch76Amount250
	unsigned char stepLocal_12 = var_1_1;
	if (var_1_57 <= (min (9.25f , (25.6f - var_1_47)))) {
		if (var_1_1 || stepLocal_12) {
			var_1_65 = (min (9.5 , var_1_23));
		} else {
			var_1_65 = (min (var_1_22 , (var_1_48 + var_1_49)));
		}
	}


	// From: Req3Batch76Amount250
	if (var_1_5) {
		var_1_19 = (min ((var_1_20 - var_1_21) , (min (var_1_22 , var_1_23))));
	}


	// From: Req5Batch76Amount250
	var_1_25 = (var_1_26 - 25u);


	// From: Req10Batch76Amount250
	if (var_1_6) {
		var_1_39 = (var_1_40 - var_1_35);
	} else {
		var_1_39 = var_1_35;
	}


	// From: Req14Batch76Amount250
	var_1_45 = var_1_35;


	// From: Req15Batch76Amount250
	var_1_46 = (((var_1_47 + var_1_48) - var_1_49) - var_1_21);


	// From: Req19Batch76Amount250
	unsigned char stepLocal_11 = var_1_6 && var_1_9;
	if (stepLocal_11 && ((- var_1_21) >= var_1_48)) {
		if (var_1_6) {
			if (var_1_57 > (var_1_48 + var_1_49)) {
				if (((var_1_65 + var_1_46) + var_1_57) != (var_1_23 / (abs (var_1_48)))) {
					var_1_58 = ((var_1_59 + 8) + var_1_56);
				} else {
					var_1_58 = ((var_1_53 - var_1_56) + (max ((min (var_1_59 , var_1_60)) , (var_1_61 - 5))));
				}
			} else {
				var_1_58 = (var_1_56 + (min (var_1_60 , var_1_61)));
			}
		}
	} else {
		var_1_58 = (max (((var_1_56 + 5) - (var_1_61 + var_1_53)) , var_1_59));
	}


	// From: Req22Batch76Amount250
	var_1_64 = (max (var_1_29 , var_1_55));


	// From: Req26Batch76Amount250
	signed long int stepLocal_14 = 56484 - var_1_56;
	if (stepLocal_14 != var_1_39) {
		var_1_69 = var_1_35;
	}


	// From: Req27Batch76Amount250
	if (var_1_38) {
		var_1_70 = (min ((max ((var_1_40 - var_1_55) , (min (var_1_35 , var_1_53)))) , var_1_61));
	} else {
		var_1_70 = var_1_54;
	}


	// From: Req8Batch76Amount250
	signed long int stepLocal_1 = var_1_34 - var_1_35;
	if ((var_1_50 + (var_1_21 - var_1_20)) <= var_1_19) {
		var_1_33 = var_1_32;
	} else {
		if (stepLocal_1 <= 128) {
			var_1_33 = (((var_1_64 + var_1_30) + var_1_27) + var_1_32);
		}
	}


	// From: Req25Batch76Amount250
	unsigned char stepLocal_13 = var_1_27;
	if (var_1_5) {
		if (stepLocal_13 < var_1_34) {
			if (var_1_1) {
				var_1_68 = var_1_53;
			} else {
				var_1_68 = var_1_51;
			}
		} else {
			var_1_68 = -50;
		}
	}


	// From: Req7Batch76Amount250
	if (var_1_36) {
		if (var_1_22 == var_1_20) {
			var_1_31 = (var_1_26 - (var_1_32 - (var_1_29 + var_1_69)));
		} else {
			if ((max (var_1_69 , var_1_27)) > var_1_64) {
				var_1_31 = var_1_27;
			} else {
				var_1_31 = (abs (16u));
			}
		}
	} else {
		var_1_31 = ((var_1_32 - var_1_69) + var_1_27);
	}


	// From: Req20Batch76Amount250
	if (var_1_59 == (max (var_1_39 , var_1_64))) {
		var_1_62 = (max ((max (var_1_70 , var_1_31)) , var_1_53));
	} else {
		var_1_62 = (abs (abs (var_1_56)));
	}


	// From: Req2Batch76Amount250
	if (var_1_57 != (- var_1_46)) {
		if (var_1_36) {
			var_1_10 = (var_1_39 - (var_1_69 + (var_1_27 + var_1_70)));
		} else {
			if (var_1_4) {
				var_1_10 = var_1_70;
			}
		}
	} else {
		var_1_10 = var_1_27;
	}


	// From: Req4Batch76Amount250
	var_1_24 = (max ((var_1_51 - var_1_39) , (50 + (min (var_1_39 , var_1_70)))));


	// From: Req12Batch76Amount250
	if (var_1_1) {
		var_1_43 = ((min (var_1_27 , var_1_40)) + var_1_69);
	} else {
		var_1_43 = (abs (var_1_39));
	}


	// From: Req13Batch76Amount250
	if (((var_1_70 * var_1_64) % var_1_40) >= (var_1_33 % var_1_26)) {
		if (var_1_36) {
			var_1_44 = (max ((var_1_27 + var_1_27) , var_1_40));
		} else {
			var_1_44 = var_1_35;
		}
	} else {
		var_1_44 = var_1_27;
	}


	// From: Req21Batch76Amount250
	if (var_1_61 >= var_1_60) {
		var_1_63 = (max ((min (var_1_45 , (last_1_var_1_63 - var_1_39))) , var_1_62));
	}


	// From: Req24Batch76Amount250
	if (var_1_38) {
		var_1_66 = (last_1_var_1_66 + var_1_30);
	} else {
		var_1_66 = ((var_1_67 - var_1_44) - ((var_1_27 + var_1_51) + (abs (var_1_34))));
	}


	// From: Req11Batch76Amount250
	if (((var_1_20 + var_1_65) * var_1_57) >= 128.75) {
		if ((var_1_57 + var_1_20) >= (var_1_21 + var_1_22)) {
			var_1_41 = ((var_1_63 - var_1_51) + (min (var_1_70 , (var_1_39 - var_1_35))));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741823);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 255);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 127);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 2305843.009213691390e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 2305843.009213691390e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 64);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 31);
	assume_abort_if_not(var_1_55 <= 64);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 32);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -31);
	assume_abort_if_not(var_1_59 <= 32);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -63);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 3221225470);
	assume_abort_if_not(var_1_67 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
}

int property() {
	return (((((((((((((((((((((((((((! (var_1_36 || var_1_36)) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : (var_1_1 == ((unsigned char) ((var_1_6 && var_1_7) && (var_1_8 && var_1_9))))) && ((var_1_57 != (- var_1_46)) ? (var_1_36 ? (var_1_10 == ((signed short int) (var_1_39 - (var_1_69 + (var_1_27 + var_1_70))))) : (var_1_4 ? (var_1_10 == ((signed short int) var_1_70)) : 1)) : (var_1_10 == ((signed short int) var_1_27)))) && (var_1_5 ? (var_1_19 == ((double) (min ((var_1_20 - var_1_21) , (min (var_1_22 , var_1_23)))))) : 1)) && (var_1_24 == ((signed short int) (max ((var_1_51 - var_1_39) , (50 + (min (var_1_39 , var_1_70)))))))) && (var_1_25 == ((unsigned long int) (var_1_26 - 25u)))) && (((last_1_var_1_50 <= last_1_var_1_65) && ((last_1_var_1_39 + 5) > var_1_28)) ? (last_1_var_1_36 ? (var_1_27 == ((unsigned char) (max (var_1_29 , var_1_30)))) : 1) : (var_1_27 == ((unsigned char) (min (var_1_30 , var_1_29)))))) && (var_1_36 ? ((var_1_22 == var_1_20) ? (var_1_31 == ((unsigned long int) (var_1_26 - (var_1_32 - (var_1_29 + var_1_69))))) : (((max (var_1_69 , var_1_27)) > var_1_64) ? (var_1_31 == ((unsigned long int) var_1_27)) : (var_1_31 == ((unsigned long int) (abs (16u)))))) : (var_1_31 == ((unsigned long int) ((var_1_32 - var_1_69) + var_1_27))))) && (((var_1_50 + (var_1_21 - var_1_20)) <= var_1_19) ? (var_1_33 == ((unsigned long int) var_1_32)) : (((var_1_34 - var_1_35) <= 128) ? (var_1_33 == ((unsigned long int) (((var_1_64 + var_1_30) + var_1_27) + var_1_32))) : 1))) && ((last_1_var_1_70 < (abs (last_1_var_1_51))) ? ((last_1_var_1_39 > last_1_var_1_51) ? (((var_1_30 & (- 1)) < (min (var_1_35 , last_1_var_1_64))) ? ((var_1_26 > var_1_35) ? (var_1_36 == ((unsigned char) var_1_38)) : 1) : (var_1_36 == ((unsigned char) var_1_4))) : (var_1_36 == ((unsigned char) 0))) : (var_1_36 == ((unsigned char) var_1_9)))) && (var_1_6 ? (var_1_39 == ((unsigned char) (var_1_40 - var_1_35))) : (var_1_39 == ((unsigned char) var_1_35)))) && ((((var_1_20 + var_1_65) * var_1_57) >= 128.75) ? (((var_1_57 + var_1_20) >= (var_1_21 + var_1_22)) ? (var_1_41 == ((signed short int) ((var_1_63 - var_1_51) + (min (var_1_70 , (var_1_39 - var_1_35)))))) : 1) : 1)) && (var_1_1 ? (var_1_43 == ((signed short int) ((min (var_1_27 , var_1_40)) + var_1_69))) : (var_1_43 == ((signed short int) (abs (var_1_39)))))) && ((((var_1_70 * var_1_64) % var_1_40) >= (var_1_33 % var_1_26)) ? (var_1_36 ? (var_1_44 == ((unsigned short int) (max ((var_1_27 + var_1_27) , var_1_40)))) : (var_1_44 == ((unsigned short int) var_1_35))) : (var_1_44 == ((unsigned short int) var_1_27)))) && (var_1_45 == ((unsigned short int) var_1_35))) && (var_1_46 == ((float) (((var_1_47 + var_1_48) - var_1_49) - var_1_21)))) && ((var_1_4 && (last_1_var_1_51 < (last_1_var_1_33 * var_1_26))) ? ((last_1_var_1_51 < last_1_var_1_51) ? (var_1_50 == ((double) (var_1_47 - var_1_48))) : ((var_1_47 == var_1_49) ? (var_1_50 == ((double) (var_1_20 - (max (16.2 , var_1_48))))) : ((last_1_var_1_70 >= ((var_1_29 + last_1_var_1_62) >> last_1_var_1_25)) ? (var_1_50 == ((double) var_1_23)) : (var_1_50 == ((double) var_1_49))))) : 1)) && ((64u >= var_1_35) ? (var_1_51 == ((unsigned char) (min (var_1_30 , (var_1_35 + (var_1_52 + var_1_53)))))) : (((var_1_52 - var_1_54) >= last_1_var_1_68) ? (var_1_51 == ((unsigned char) var_1_35)) : (var_1_51 == ((unsigned char) (((var_1_55 + var_1_56) - var_1_53) + (min (var_1_35 , var_1_54)))))))) && (var_1_36 ? (var_1_57 == ((float) (var_1_21 - (max (var_1_47 , (var_1_48 + var_1_49)))))) : 1)) && (((var_1_6 && var_1_9) && ((- var_1_21) >= var_1_48)) ? (var_1_6 ? ((var_1_57 > (var_1_48 + var_1_49)) ? ((((var_1_65 + var_1_46) + var_1_57) != (var_1_23 / (abs (var_1_48)))) ? (var_1_58 == ((signed char) ((var_1_59 + 8) + var_1_56))) : (var_1_58 == ((signed char) ((var_1_53 - var_1_56) + (max ((min (var_1_59 , var_1_60)) , (var_1_61 - 5))))))) : (var_1_58 == ((signed char) (var_1_56 + (min (var_1_60 , var_1_61)))))) : 1) : (var_1_58 == ((signed char) (max (((var_1_56 + 5) - (var_1_61 + var_1_53)) , var_1_59)))))) && ((var_1_59 == (max (var_1_39 , var_1_64))) ? (var_1_62 == ((unsigned short int) (max ((max (var_1_70 , var_1_31)) , var_1_53)))) : (var_1_62 == ((unsigned short int) (abs (abs (var_1_56))))))) && ((var_1_61 >= var_1_60) ? (var_1_63 == ((signed long int) (max ((min (var_1_45 , (last_1_var_1_63 - var_1_39))) , var_1_62)))) : 1)) && (var_1_64 == ((unsigned short int) (max (var_1_29 , var_1_55))))) && ((var_1_57 <= (min (9.25f , (25.6f - var_1_47)))) ? ((var_1_1 || var_1_1) ? (var_1_65 == ((double) (min (9.5 , var_1_23)))) : (var_1_65 == ((double) (min (var_1_22 , (var_1_48 + var_1_49)))))) : 1)) && (var_1_38 ? (var_1_66 == ((unsigned long int) (last_1_var_1_66 + var_1_30))) : (var_1_66 == ((unsigned long int) ((var_1_67 - var_1_44) - ((var_1_27 + var_1_51) + (abs (var_1_34)))))))) && (var_1_5 ? ((var_1_27 < var_1_34) ? (var_1_1 ? (var_1_68 == ((signed long int) var_1_53)) : (var_1_68 == ((signed long int) var_1_51))) : (var_1_68 == ((signed long int) -50))) : 1)) && (((56484 - var_1_56) != var_1_39) ? (var_1_69 == ((unsigned char) var_1_35)) : 1)) && (var_1_38 ? (var_1_70 == ((unsigned char) (min ((max ((var_1_40 - var_1_55) , (min (var_1_35 , var_1_53)))) , var_1_61)))) : (var_1_70 == ((unsigned char) var_1_54)))
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
