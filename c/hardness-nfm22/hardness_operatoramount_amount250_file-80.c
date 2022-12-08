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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.8;
float var_1_6 = 16.375;
float var_1_7 = 0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 128;
double var_1_13 = 255.5;
double var_1_14 = 0.0;
double var_1_15 = 0.0;
double var_1_16 = 100.3;
double var_1_19 = 7.3;
double var_1_20 = 32.2;
signed char var_1_21 = 64;
signed char var_1_22 = 16;
signed char var_1_23 = -1;
signed char var_1_24 = 100;
float var_1_25 = 49.5;
float var_1_26 = 3.65;
float var_1_27 = 16.8;
float var_1_28 = 24.4;
signed char var_1_29 = 2;
signed char var_1_30 = 16;
signed char var_1_31 = -25;
signed long int var_1_32 = -32;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 8;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 100;
unsigned char var_1_37 = 10;
float var_1_38 = 10000000.2;
unsigned char var_1_39 = 1;
unsigned long int var_1_40 = 10000000;
unsigned long int var_1_42 = 3613894367;
unsigned long int var_1_43 = 1830891714;
unsigned long int var_1_44 = 1190508835;
float var_1_45 = 4.6;
float var_1_46 = 4.25;
float var_1_47 = 255.4;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 32;
unsigned char var_1_50 = 50;
signed long int var_1_52 = -10;
unsigned long int var_1_53 = 8;
unsigned long int var_1_54 = 1000000000;
unsigned long int var_1_55 = 4;
unsigned long int var_1_56 = 2932066180;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
double var_1_59 = 16.5;
double var_1_61 = 4.625;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 1;
unsigned char last_1_var_1_33 = 64;
unsigned long int last_1_var_1_40 = 10000000;
unsigned char last_1_var_1_48 = 64;
signed long int last_1_var_1_52 = -10;
unsigned long int last_1_var_1_53 = 8;
unsigned char last_1_var_1_57 = 0;
double last_1_var_1_61 = 4.625;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch80Amount250
	if (last_1_var_1_52 != (last_1_var_1_48 + 1)) {
		if ((var_1_19 * 16.38f) == 9.5) {
			var_1_32 = 2;
		} else {
			var_1_32 = var_1_22;
		}
	} else {
		var_1_32 = last_1_var_1_53;
	}


	// From: Req4Batch80Amount250
	signed long int stepLocal_1 = (max (last_1_var_1_33 , 16)) - last_1_var_1_48;
	if (var_1_7 != (last_1_var_1_61 * var_1_6)) {
		var_1_13 = (((min (var_1_14 , var_1_15)) - var_1_16) - var_1_7);
	} else {
		if ((var_1_14 - 100000.01f) > last_1_var_1_61) {
			if (var_1_9) {
				if (var_1_10) {
					if (((last_1_var_1_40 / -64) << last_1_var_1_40) >= stepLocal_1) {
						if (last_1_var_1_8) {
							if (! last_1_var_1_57) {
								var_1_13 = var_1_14;
							} else {
								var_1_13 = (var_1_16 + var_1_19);
							}
						} else {
							var_1_13 = (var_1_14 - var_1_15);
						}
					}
				} else {
					var_1_13 = (abs (0.775));
				}
			}
		} else {
			var_1_13 = (abs (var_1_14));
		}
	}


	// From: Req8Batch80Amount250
	if (! var_1_9) {
		var_1_29 = ((var_1_30 + var_1_31) + var_1_22);
	} else {
		if (var_1_10 && (var_1_13 != var_1_26)) {
			var_1_29 = (var_1_22 + (min (var_1_31 , 10)));
		} else {
			var_1_29 = (max (var_1_23 , var_1_24));
		}
	}


	// From: Req15Batch80Amount250
	if (var_1_19 == (max (var_1_28 , (min (var_1_15 , var_1_16))))) {
		if (last_1_var_1_61 < var_1_46) {
			var_1_48 = var_1_24;
		} else {
			if (var_1_6 <= (var_1_7 + var_1_14)) {
				var_1_48 = (var_1_35 - ((var_1_49 + var_1_50) - (min (var_1_22 , 10))));
			}
		}
	} else {
		if (! (last_1_var_1_8 || last_1_var_1_57)) {
			var_1_48 = var_1_37;
		} else {
			var_1_48 = ((min (var_1_24 , var_1_22)) + var_1_36);
		}
	}


	// From: Req6Batch80Amount250
	var_1_21 = ((min ((64 - var_1_22) , var_1_23)) - var_1_24);


	// From: Req7Batch80Amount250
	var_1_25 = ((max ((var_1_16 - var_1_26) , var_1_19)) + (var_1_27 - var_1_28));


	// From: Req11Batch80Amount250
	signed long int stepLocal_4 = -1;
	if (stepLocal_4 >= var_1_22) {
		var_1_38 = (max ((var_1_19 + var_1_28) , var_1_6));
	}


	// From: Req12Batch80Amount250
	var_1_39 = (var_1_36 + var_1_24);


	// From: Req17Batch80Amount250
	if (var_1_28 == 31.8f) {
		var_1_53 = (var_1_35 + ((var_1_54 - var_1_39) + var_1_36));
	} else {
		if (var_1_39 >= 100u) {
			var_1_53 = (abs (var_1_50));
		} else {
			var_1_53 = var_1_43;
		}
	}


	// From: Req19Batch80Amount250
	unsigned char stepLocal_9 = var_1_10;
	if ((var_1_7 > var_1_16) || stepLocal_9) {
		var_1_57 = (! (! (var_1_9 && var_1_10)));
	} else {
		var_1_57 = ((! var_1_58) && (var_1_10 && var_1_9));
	}


	// From: Req21Batch80Amount250
	unsigned long int stepLocal_11 = min (var_1_48 , var_1_44);
	if (var_1_32 <= stepLocal_11) {
		if (! ((var_1_44 + var_1_43) > var_1_48)) {
			var_1_61 = (max (var_1_7 , var_1_6));
		} else {
			var_1_61 = var_1_19;
		}
	} else {
		var_1_61 = var_1_28;
	}


	// From: Req5Batch80Amount250
	if (((var_1_6 * var_1_14) > var_1_13) && var_1_57) {
		var_1_20 = var_1_19;
	} else {
		var_1_20 = (min (var_1_14 , (var_1_16 + var_1_19)));
	}


	// From: Req2Batch80Amount250
	unsigned long int stepLocal_0 = var_1_53;
	if ((min (var_1_7 , var_1_25)) <= var_1_6) {
		if (1u < stepLocal_0) {
			var_1_8 = (var_1_9 && var_1_10);
		}
	}


	// From: Req14Batch80Amount250
	if (! (! var_1_8)) {
		if (((64 / -4) * (var_1_23 % var_1_35)) > (min (var_1_31 , var_1_34))) {
			if ((abs (var_1_20 / -0.75f)) >= var_1_28) {
				if ((var_1_42 * var_1_35) > (16u + var_1_22)) {
					var_1_45 = (var_1_27 + (var_1_46 + var_1_47));
				} else {
					var_1_45 = (127.4f + (max (15.6f , 64.5f)));
				}
			} else {
				var_1_45 = ((max (var_1_16 , (var_1_27 + var_1_28))) - var_1_6);
			}
		}
	} else {
		var_1_45 = (max ((var_1_19 + var_1_26) , var_1_7));
	}


	// From: Req16Batch80Amount250
	signed long int stepLocal_7 = var_1_29 - var_1_32;
	if (var_1_6 >= var_1_20) {
		if ((var_1_49 / var_1_50) >= stepLocal_7) {
			var_1_52 = (abs (var_1_50));
		} else {
			var_1_52 = (var_1_50 + (var_1_24 + var_1_35));
		}
	}


	// From: Req10Batch80Amount250
	signed long int stepLocal_3 = var_1_52;
	signed char stepLocal_2 = var_1_31;
	if (stepLocal_3 <= var_1_48) {
		var_1_33 = (min (var_1_24 , (var_1_22 + var_1_34)));
	} else {
		if ((abs (var_1_28)) > var_1_27) {
			var_1_33 = ((abs (max (200 , var_1_35))) - var_1_24);
		} else {
			if (256 >= stepLocal_2) {
				var_1_33 = ((min (var_1_34 , (var_1_36 - var_1_22))) + 16);
			} else {
				var_1_33 = var_1_37;
			}
		}
	}


	// From: Req18Batch80Amount250
	unsigned char stepLocal_8 = var_1_8;
	if (var_1_13 == var_1_61) {
		if ((- var_1_13) >= var_1_13) {
			if (stepLocal_8 || (var_1_29 <= var_1_29)) {
				var_1_55 = (max (var_1_48 , var_1_35));
			}
		} else {
			var_1_55 = (max ((min (var_1_34 , var_1_50)) , (var_1_56 - var_1_33)));
		}
	}


	// From: Req3Batch80Amount250
	if (var_1_9) {
		var_1_11 = 0u;
	} else {
		if (var_1_10) {
			var_1_11 = (abs (8u + var_1_33));
		} else {
			if (var_1_6 < 127.5f) {
				var_1_11 = var_1_33;
			}
		}
	}


	// From: Req20Batch80Amount250
	unsigned long int stepLocal_10 = var_1_11;
	if (stepLocal_10 != (var_1_48 + var_1_49)) {
		if ((min (var_1_20 , (var_1_7 + var_1_46))) == var_1_61) {
			var_1_59 = var_1_47;
		} else {
			var_1_59 = var_1_6;
		}
	} else {
		var_1_59 = var_1_19;
	}


	// From: Req13Batch80Amount250
	unsigned long int stepLocal_6 = var_1_32 * (min (var_1_48 , var_1_55));
	unsigned long int stepLocal_5 = var_1_53;
	if (stepLocal_6 <= 10u) {
		if (((max (var_1_23 , var_1_24)) - var_1_36) > stepLocal_5) {
			var_1_40 = ((var_1_42 - var_1_36) - ((min (var_1_43 , var_1_44)) - var_1_53));
		}
	}


	// From: Req1Batch80Amount250
	if (((~ var_1_53) + (var_1_11 + var_1_52)) <= var_1_29) {
		var_1_1 = (var_1_6 - var_1_7);
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 4611686.018427382800e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 4611686.018427382800e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -1);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -31);
	assume_abort_if_not(var_1_30 <= 32);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -31);
	assume_abort_if_not(var_1_31 <= 31);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 127);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 3221225470);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 1073741823);
	assume_abort_if_not(var_1_43 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -230584.3009213691390e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691390e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 31);
	assume_abort_if_not(var_1_49 <= 64);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 32);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 536870912);
	assume_abort_if_not(var_1_54 <= 1073741824);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967294);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 0);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_61 = var_1_61;
}

int property() {
	return (((((((((((((((((((((((~ var_1_53) + (var_1_11 + var_1_52)) <= var_1_29) ? (var_1_1 == ((float) (var_1_6 - var_1_7))) : 1) && (((min (var_1_7 , var_1_25)) <= var_1_6) ? ((1u < var_1_53) ? (var_1_8 == ((unsigned char) (var_1_9 && var_1_10))) : 1) : 1)) && (var_1_9 ? (var_1_11 == ((unsigned long int) 0u)) : (var_1_10 ? (var_1_11 == ((unsigned long int) (abs (8u + var_1_33)))) : ((var_1_6 < 127.5f) ? (var_1_11 == ((unsigned long int) var_1_33)) : 1)))) && ((var_1_7 != (last_1_var_1_61 * var_1_6)) ? (var_1_13 == ((double) (((min (var_1_14 , var_1_15)) - var_1_16) - var_1_7))) : (((var_1_14 - 100000.01f) > last_1_var_1_61) ? (var_1_9 ? (var_1_10 ? ((((last_1_var_1_40 / -64) << last_1_var_1_40) >= ((max (last_1_var_1_33 , 16)) - last_1_var_1_48)) ? (last_1_var_1_8 ? ((! last_1_var_1_57) ? (var_1_13 == ((double) var_1_14)) : (var_1_13 == ((double) (var_1_16 + var_1_19)))) : (var_1_13 == ((double) (var_1_14 - var_1_15)))) : 1) : (var_1_13 == ((double) (abs (0.775))))) : 1) : (var_1_13 == ((double) (abs (var_1_14))))))) && ((((var_1_6 * var_1_14) > var_1_13) && var_1_57) ? (var_1_20 == ((double) var_1_19)) : (var_1_20 == ((double) (min (var_1_14 , (var_1_16 + var_1_19))))))) && (var_1_21 == ((signed char) ((min ((64 - var_1_22) , var_1_23)) - var_1_24)))) && (var_1_25 == ((float) ((max ((var_1_16 - var_1_26) , var_1_19)) + (var_1_27 - var_1_28))))) && ((! var_1_9) ? (var_1_29 == ((signed char) ((var_1_30 + var_1_31) + var_1_22))) : ((var_1_10 && (var_1_13 != var_1_26)) ? (var_1_29 == ((signed char) (var_1_22 + (min (var_1_31 , 10))))) : (var_1_29 == ((signed char) (max (var_1_23 , var_1_24))))))) && ((last_1_var_1_52 != (last_1_var_1_48 + 1)) ? (((var_1_19 * 16.38f) == 9.5) ? (var_1_32 == ((signed long int) 2)) : (var_1_32 == ((signed long int) var_1_22))) : (var_1_32 == ((signed long int) last_1_var_1_53)))) && ((var_1_52 <= var_1_48) ? (var_1_33 == ((unsigned char) (min (var_1_24 , (var_1_22 + var_1_34))))) : (((abs (var_1_28)) > var_1_27) ? (var_1_33 == ((unsigned char) ((abs (max (200 , var_1_35))) - var_1_24))) : ((256 >= var_1_31) ? (var_1_33 == ((unsigned char) ((min (var_1_34 , (var_1_36 - var_1_22))) + 16))) : (var_1_33 == ((unsigned char) var_1_37)))))) && ((-1 >= var_1_22) ? (var_1_38 == ((float) (max ((var_1_19 + var_1_28) , var_1_6)))) : 1)) && (var_1_39 == ((unsigned char) (var_1_36 + var_1_24)))) && (((var_1_32 * (min (var_1_48 , var_1_55))) <= 10u) ? ((((max (var_1_23 , var_1_24)) - var_1_36) > var_1_53) ? (var_1_40 == ((unsigned long int) ((var_1_42 - var_1_36) - ((min (var_1_43 , var_1_44)) - var_1_53)))) : 1) : 1)) && ((! (! var_1_8)) ? ((((64 / -4) * (var_1_23 % var_1_35)) > (min (var_1_31 , var_1_34))) ? (((abs (var_1_20 / -0.75f)) >= var_1_28) ? (((var_1_42 * var_1_35) > (16u + var_1_22)) ? (var_1_45 == ((float) (var_1_27 + (var_1_46 + var_1_47)))) : (var_1_45 == ((float) (127.4f + (max (15.6f , 64.5f)))))) : (var_1_45 == ((float) ((max (var_1_16 , (var_1_27 + var_1_28))) - var_1_6)))) : 1) : (var_1_45 == ((float) (max ((var_1_19 + var_1_26) , var_1_7)))))) && ((var_1_19 == (max (var_1_28 , (min (var_1_15 , var_1_16))))) ? ((last_1_var_1_61 < var_1_46) ? (var_1_48 == ((unsigned char) var_1_24)) : ((var_1_6 <= (var_1_7 + var_1_14)) ? (var_1_48 == ((unsigned char) (var_1_35 - ((var_1_49 + var_1_50) - (min (var_1_22 , 10)))))) : 1)) : ((! (last_1_var_1_8 || last_1_var_1_57)) ? (var_1_48 == ((unsigned char) var_1_37)) : (var_1_48 == ((unsigned char) ((min (var_1_24 , var_1_22)) + var_1_36)))))) && ((var_1_6 >= var_1_20) ? (((var_1_49 / var_1_50) >= (var_1_29 - var_1_32)) ? (var_1_52 == ((signed long int) (abs (var_1_50)))) : (var_1_52 == ((signed long int) (var_1_50 + (var_1_24 + var_1_35))))) : 1)) && ((var_1_28 == 31.8f) ? (var_1_53 == ((unsigned long int) (var_1_35 + ((var_1_54 - var_1_39) + var_1_36)))) : ((var_1_39 >= 100u) ? (var_1_53 == ((unsigned long int) (abs (var_1_50)))) : (var_1_53 == ((unsigned long int) var_1_43))))) && ((var_1_13 == var_1_61) ? (((- var_1_13) >= var_1_13) ? ((var_1_8 || (var_1_29 <= var_1_29)) ? (var_1_55 == ((unsigned long int) (max (var_1_48 , var_1_35)))) : 1) : (var_1_55 == ((unsigned long int) (max ((min (var_1_34 , var_1_50)) , (var_1_56 - var_1_33)))))) : 1)) && (((var_1_7 > var_1_16) || var_1_10) ? (var_1_57 == ((unsigned char) (! (! (var_1_9 && var_1_10))))) : (var_1_57 == ((unsigned char) ((! var_1_58) && (var_1_10 && var_1_9)))))) && ((var_1_11 != (var_1_48 + var_1_49)) ? (((min (var_1_20 , (var_1_7 + var_1_46))) == var_1_61) ? (var_1_59 == ((double) var_1_47)) : (var_1_59 == ((double) var_1_6))) : (var_1_59 == ((double) var_1_19)))) && ((var_1_32 <= (min (var_1_48 , var_1_44))) ? ((! ((var_1_44 + var_1_43) > var_1_48)) ? (var_1_61 == ((double) (max (var_1_7 , var_1_6)))) : (var_1_61 == ((double) var_1_19))) : (var_1_61 == ((double) var_1_28)))
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
