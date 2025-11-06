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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94Amount500.c", 13, "reach_error"); }
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
double var_1_1 = -0.25;
double var_1_2 = -0.125;
double var_1_3 = 127.5;
unsigned char var_1_4 = 4;
double var_1_5 = 25.6;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 0;
signed char var_1_8 = 1;
signed char var_1_9 = 4;
signed char var_1_10 = 10;
unsigned char var_1_11 = 8;
unsigned short int var_1_12 = 64;
unsigned short int var_1_13 = 58659;
signed long int var_1_14 = -10;
signed char var_1_15 = 0;
signed char var_1_18 = -32;
signed char var_1_19 = 16;
signed char var_1_20 = -2;
signed char var_1_21 = 25;
signed char var_1_22 = 16;
signed char var_1_23 = 1;
signed char var_1_24 = -100;
signed char var_1_25 = 64;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
signed long int var_1_32 = 16;
double var_1_33 = -0.2;
signed short int var_1_34 = 5;
signed long int var_1_35 = 1691173840;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 64;
unsigned short int var_1_39 = 8;
unsigned short int var_1_40 = 256;
unsigned long int var_1_41 = 100000;
float var_1_42 = 100.75;
double var_1_43 = 64.375;
double var_1_44 = 0.0;
double var_1_45 = 256.2;
double var_1_46 = 3.5;
double var_1_47 = 63.25;
signed long int var_1_48 = 0;
unsigned short int var_1_49 = 17736;
float var_1_50 = 15.25;
float var_1_51 = -0.4;
float var_1_52 = 10.1;
unsigned long int var_1_53 = 3583915362;
signed short int var_1_54 = -4;
signed short int var_1_55 = 29492;
signed char var_1_56 = -2;
signed char var_1_57 = -128;
float var_1_58 = 4.2;
float var_1_59 = 9.75;
unsigned char var_1_60 = 64;
signed long int var_1_61 = 10;
double var_1_62 = 1000.25;
signed long int var_1_63 = 1000000;
double var_1_64 = 255.5;
signed short int var_1_65 = 0;
signed char var_1_67 = 10;
double var_1_68 = 500.25;
double var_1_69 = 8.5;
signed long int var_1_70 = -25;
unsigned short int var_1_71 = 58324;
unsigned char var_1_72 = 1;
double var_1_73 = 10.9;
double var_1_74 = 128.35;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 2;
signed short int var_1_79 = 64;
signed short int var_1_80 = 4;
unsigned long int var_1_81 = 256;
double var_1_82 = 256.5;
signed long int var_1_83 = 32;
signed long int var_1_84 = 100;
double var_1_85 = 200.75;
unsigned short int var_1_86 = 10;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 1;
float var_1_90 = 1.2;
unsigned char var_1_91 = 5;
unsigned char var_1_92 = 128;
unsigned long int var_1_93 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 8;
unsigned char last_1_var_1_26 = 1;
unsigned char last_1_var_1_30 = 0;
signed long int last_1_var_1_32 = 16;
unsigned long int last_1_var_1_41 = 100000;
double last_1_var_1_43 = 64.375;
signed long int last_1_var_1_48 = 0;
signed long int last_1_var_1_70 = -25;
unsigned char last_1_var_1_77 = 2;
signed short int last_1_var_1_79 = 64;
unsigned long int last_1_var_1_81 = 256;
double last_1_var_1_82 = 256.5;
signed long int last_1_var_1_83 = 32;
double last_1_var_1_85 = 200.75;
unsigned short int last_1_var_1_86 = 10;
unsigned char last_1_var_1_87 = 0;
unsigned char last_1_var_1_88 = 1;
unsigned long int last_1_var_1_93 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req33Batch94Amount500
	if (! ((- var_1_53) >= last_1_var_1_83)) {
		if (var_1_5 < (var_1_74 - var_1_73)) {
			var_1_77 = (abs (max (var_1_34 , (min (10 , var_1_22)))));
		} else {
			var_1_77 = (abs (var_1_7));
		}
	} else {
		if ((last_1_var_1_41 > (last_1_var_1_79 * last_1_var_1_86)) || last_1_var_1_30) {
			var_1_77 = (var_1_25 + var_1_37);
		} else {
			if ((last_1_var_1_83 * var_1_22) < var_1_55) {
				if (! (last_1_var_1_86 <= (var_1_38 & var_1_10))) {
					var_1_77 = var_1_6;
				}
			} else {
				var_1_77 = (min (var_1_38 , (max (var_1_25 , (abs (var_1_22))))));
			}
		}
	}


	// From: Req40Batch94Amount500
	if (var_1_76) {
		var_1_86 = var_1_25;
	} else {
		var_1_86 = var_1_77;
	}


	// From: Req32Batch94Amount500
	signed long int stepLocal_26 = (var_1_23 + var_1_22) - var_1_10;
	unsigned char stepLocal_25 = var_1_19 == last_1_var_1_81;
	signed long int stepLocal_24 = last_1_var_1_77;
	unsigned char stepLocal_23 = var_1_6;
	unsigned char stepLocal_22 = var_1_6;
	unsigned char stepLocal_21 = last_1_var_1_41 >= var_1_9;
	if ((last_1_var_1_32 / var_1_13) != stepLocal_24) {
		if (var_1_20 != stepLocal_26) {
			if (((min (var_1_55 , 50)) >= var_1_49) && stepLocal_21) {
				if (stepLocal_23 <= var_1_13) {
					var_1_72 = var_1_29;
				} else {
					if (stepLocal_22 <= var_1_21) {
						var_1_72 = ((last_1_var_1_88 && var_1_29) || var_1_31);
					} else {
						if (var_1_46 > ((var_1_44 + var_1_45) - (var_1_73 + var_1_74))) {
							var_1_72 = ((var_1_29 || var_1_31) || var_1_75);
						} else {
							if (var_1_75) {
								if (((min (last_1_var_1_82 , var_1_33)) < last_1_var_1_43) && stepLocal_25) {
									var_1_72 = (var_1_27 && var_1_28);
								} else {
									var_1_72 = (var_1_29 || var_1_28);
								}
							} else {
								var_1_72 = (((! var_1_31) && var_1_29) || var_1_76);
							}
						}
					}
				}
			} else {
				var_1_72 = (! var_1_28);
			}
		}
	} else {
		var_1_72 = ((var_1_6 >= last_1_var_1_81) && (var_1_31 || (! var_1_27)));
	}


	// From: Req42Batch94Amount500
	if (var_1_72) {
		var_1_88 = var_1_89;
	} else {
		var_1_88 = var_1_27;
	}


	// From: Req10Batch94Amount500
	if (last_1_var_1_87) {
		if (! var_1_28) {
			var_1_30 = (! (var_1_27 && var_1_29));
		} else {
			var_1_30 = ((var_1_28 && var_1_29) || var_1_31);
		}
	} else {
		var_1_30 = ((! var_1_31) && var_1_28);
	}


	// From: Req6Batch94Amount500
	signed char stepLocal_2 = var_1_10;
	if (var_1_7 < stepLocal_2) {
		var_1_14 = (var_1_13 - (var_1_6 + last_1_var_1_86));
	} else {
		if (var_1_5 < last_1_var_1_43) {
			var_1_14 = var_1_13;
		} else {
			var_1_14 = -4;
		}
	}


	// From: Req14Batch94Amount500
	signed char stepLocal_9 = var_1_25;
	unsigned char stepLocal_8 = last_1_var_1_30;
	if (var_1_29 || stepLocal_8) {
		if (var_1_38 > stepLocal_9) {
			var_1_41 = (max (last_1_var_1_81 , var_1_21));
		}
	} else {
		var_1_41 = var_1_25;
	}


	// From: Req11Batch94Amount500
	if (var_1_5 > last_1_var_1_85) {
		if (var_1_21 > -10) {
			if (var_1_28 || (var_1_25 == last_1_var_1_48)) {
				var_1_32 = ((max (last_1_var_1_79 , 10)) + (min (last_1_var_1_48 , var_1_7)));
			} else {
				var_1_32 = (min ((last_1_var_1_11 + last_1_var_1_41) , -32));
			}
		} else {
			if (var_1_3 != (var_1_5 / var_1_33)) {
				var_1_32 = (max (last_1_var_1_48 , last_1_var_1_41));
			}
		}
	} else {
		if (var_1_13 > 16) {
			if (var_1_5 <= (var_1_33 + last_1_var_1_85)) {
				if (var_1_9 >= (var_1_7 >> var_1_34)) {
					var_1_32 = (last_1_var_1_41 + last_1_var_1_48);
				} else {
					if (! var_1_29) {
						var_1_32 = (var_1_10 - (var_1_21 + var_1_13));
					} else {
						if (var_1_10 >= (var_1_7 - var_1_25)) {
							var_1_32 = (last_1_var_1_41 - (var_1_35 - 10));
						}
					}
				}
			} else {
				var_1_32 = (((1611116012 - var_1_7) - 200) - (min (var_1_21 , var_1_35)));
			}
		}
	}


	// From: Req1Batch94Amount500
	var_1_1 = (min (9.999999999999925E13 , (var_1_2 + (abs (var_1_3)))));


	// From: Req3Batch94Amount500
	var_1_8 = (var_1_9 - var_1_10);


	// From: Req4Batch94Amount500
	var_1_11 = (min (var_1_6 , var_1_7));


	// From: Req7Batch94Amount500
	if (! var_1_88) {
		var_1_15 = (var_1_18 + (var_1_19 + var_1_20));
	} else {
		var_1_15 = (var_1_20 + ((max (var_1_21 , var_1_22)) - var_1_23));
	}


	// From: Req8Batch94Amount500
	if (-200 > ((var_1_22 - 200) + var_1_13)) {
		if (var_1_20 < (var_1_21 << var_1_18)) {
			var_1_24 = ((var_1_25 - var_1_22) - (32 + var_1_21));
		}
	}


	// From: Req16Batch94Amount500
	signed short int stepLocal_10 = var_1_34;
	if (var_1_6 > stepLocal_10) {
		var_1_43 = var_1_2;
	} else {
		var_1_43 = (((var_1_44 - var_1_45) + var_1_46) - var_1_47);
	}


	// From: Req19Batch94Amount500
	if ((var_1_53 - var_1_22) <= var_1_23) {
		if (var_1_47 < ((- var_1_5) / var_1_33)) {
			var_1_52 = (var_1_3 + 3.5f);
		}
	} else {
		var_1_52 = var_1_46;
	}


	// From: Req21Batch94Amount500
	var_1_56 = (max (-5 , (max (var_1_10 , var_1_25))));


	// From: Req22Batch94Amount500
	if (var_1_2 <= var_1_47) {
		var_1_57 = (var_1_22 - (max (var_1_10 , var_1_21)));
	}


	// From: Req30Batch94Amount500
	var_1_68 = (min ((min ((max (var_1_2 , var_1_51)) , (var_1_45 + var_1_3))) , (var_1_44 + (max (var_1_46 , var_1_69)))));


	// From: Req34Batch94Amount500
	var_1_79 = ((var_1_80 - var_1_38) + var_1_56);


	// From: Req36Batch94Amount500
	if (var_1_75) {
		var_1_82 = var_1_73;
	} else {
		var_1_82 = var_1_47;
	}


	// From: Req37Batch94Amount500
	var_1_83 = 0;


	// From: Req38Batch94Amount500
	var_1_84 = var_1_13;


	// From: Req39Batch94Amount500
	var_1_85 = var_1_3;


	// From: Req43Batch94Amount500
	var_1_90 = var_1_45;


	// From: Req44Batch94Amount500
	if (var_1_28) {
		var_1_91 = var_1_92;
	} else {
		var_1_91 = var_1_10;
	}


	// From: Req41Batch94Amount500
	if (var_1_88) {
		var_1_87 = var_1_28;
	}


	// From: Req13Batch94Amount500
	if (var_1_5 != var_1_85) {
		var_1_39 = (var_1_40 + var_1_25);
	} else {
		if ((var_1_21 + var_1_9) == var_1_34) {
			if ((var_1_6 + var_1_10) > 4) {
				var_1_39 = (var_1_13 - (min (var_1_37 , var_1_38)));
			} else {
				var_1_39 = var_1_14;
			}
		}
	}


	// From: Req17Batch94Amount500
	unsigned long int stepLocal_13 = (-64 * var_1_37) * var_1_41;
	signed long int stepLocal_12 = var_1_13 - (var_1_49 - var_1_21);
	signed long int stepLocal_11 = var_1_13 - var_1_10;
	if (stepLocal_12 > var_1_7) {
		if (var_1_43 > (16.916 - var_1_47)) {
			if (var_1_22 <= stepLocal_13) {
				if (stepLocal_11 < (var_1_22 << var_1_40)) {
					var_1_48 = (25 + 256);
				} else {
					var_1_48 = var_1_14;
				}
			} else {
				var_1_48 = 64;
			}
		}
	} else {
		var_1_48 = var_1_19;
	}


	// From: Req2Batch94Amount500
	if (var_1_68 <= (25.75 / var_1_5)) {
		var_1_4 = (var_1_6 - var_1_7);
	}


	// From: Req18Batch94Amount500
	signed long int stepLocal_15 = var_1_83 / var_1_38;
	unsigned short int stepLocal_14 = var_1_39;
	if (var_1_1 == (- var_1_1)) {
		if (var_1_31) {
			var_1_50 = (max (var_1_3 , (min (var_1_46 , var_1_51))));
		} else {
			var_1_50 = var_1_44;
		}
	} else {
		if (stepLocal_14 > var_1_22) {
			if (var_1_7 > stepLocal_15) {
				var_1_50 = (var_1_3 + var_1_44);
			} else {
				var_1_50 = var_1_47;
			}
		}
	}


	// From: Req25Batch94Amount500
	unsigned char stepLocal_19 = ! var_1_28;
	if (var_1_82 <= (max (var_1_3 , var_1_46))) {
		if (var_1_30 || stepLocal_19) {
			var_1_60 = (var_1_21 + var_1_34);
		} else {
			var_1_60 = (var_1_6 - var_1_37);
		}
	} else {
		var_1_60 = (abs (var_1_6));
	}


	// From: Req12Batch94Amount500
	unsigned char stepLocal_7 = var_1_72;
	if (stepLocal_7 || (var_1_20 > (min (var_1_39 , var_1_86)))) {
		var_1_36 = ((var_1_37 + var_1_38) - (min (var_1_22 , 4)));
	}


	// From: Req20Batch94Amount500
	if ((var_1_53 - 1u) >= var_1_14) {
		if (var_1_18 == ((~ var_1_20) / var_1_34)) {
			if (999999.5 < var_1_47) {
				var_1_54 = ((min ((var_1_7 + var_1_10) , var_1_48)) - ((var_1_55 - var_1_34) - (max (10 , var_1_25))));
			}
		}
	} else {
		if (((abs (var_1_38)) + var_1_23) >= (max (var_1_55 , var_1_40))) {
			if (var_1_44 > var_1_43) {
				var_1_54 = (min (-4 , var_1_32));
			}
		}
	}


	// From: Req28Batch94Amount500
	if (var_1_41 == -128) {
		if ((var_1_6 - var_1_25) >= var_1_19) {
			var_1_65 = (var_1_22 + var_1_38);
		} else {
			if (var_1_87) {
				var_1_65 = (min (var_1_7 , (var_1_54 - (var_1_55 - var_1_38))));
			} else {
				var_1_65 = (min (var_1_23 , var_1_32));
			}
		}
	} else {
		if (! var_1_30) {
			var_1_65 = ((32356 - var_1_54) - (var_1_55 - var_1_11));
		} else {
			var_1_65 = (abs (var_1_14));
		}
	}


	// From: Req5Batch94Amount500
	unsigned char stepLocal_1 = var_1_6;
	unsigned short int stepLocal_0 = var_1_39;
	if (((max (var_1_9 , var_1_32)) * (min (var_1_10 , var_1_65))) > stepLocal_1) {
		if (stepLocal_0 < (var_1_6 * var_1_10)) {
			var_1_12 = ((var_1_13 - var_1_39) - 10);
		} else {
			if ((- var_1_2) >= 0.125) {
				var_1_12 = 128;
			} else {
				var_1_12 = var_1_65;
			}
		}
	} else {
		var_1_12 = var_1_65;
	}


	// From: Req9Batch94Amount500
	unsigned char stepLocal_6 = var_1_12 >= var_1_13;
	unsigned long int stepLocal_5 = 32u;
	unsigned char stepLocal_4 = var_1_21 >= var_1_18;
	signed char stepLocal_3 = var_1_23;
	if (var_1_30 || stepLocal_4) {
		if ((- var_1_5) != (var_1_3 + var_1_1)) {
			if (! var_1_30) {
				var_1_26 = (var_1_27 && (var_1_30 || var_1_28));
			} else {
				var_1_26 = ((! var_1_29) && var_1_27);
			}
		}
	} else {
		if (var_1_13 != stepLocal_3) {
			if (stepLocal_5 > var_1_12) {
				var_1_26 = (var_1_30 && var_1_29);
			} else {
				if (last_1_var_1_26 || stepLocal_6) {
					var_1_26 = (! var_1_29);
				}
			}
		}
	}


	// From: Req27Batch94Amount500
	if ((var_1_41 * var_1_21) >= var_1_7) {
		if ((! var_1_26) || (var_1_27 || var_1_87)) {
			var_1_62 = ((15.5 - var_1_44) + var_1_46);
		} else {
			if ((var_1_36 % var_1_13) >= ((var_1_84 - var_1_63) + (var_1_19 + var_1_84))) {
				var_1_62 = var_1_51;
			} else {
				var_1_62 = (var_1_47 - var_1_45);
			}
		}
	} else {
		var_1_62 = (abs (var_1_64));
	}


	// From: Req45Batch94Amount500
	unsigned short int stepLocal_28 = var_1_40;
	signed long int stepLocal_27 = - var_1_11;
	if (stepLocal_27 >= (abs (min (var_1_63 , var_1_77)))) {
		if (! var_1_89) {
			if (last_1_var_1_93 >= stepLocal_28) {
				if (var_1_82 >= var_1_62) {
					var_1_93 = var_1_54;
				} else {
					var_1_93 = var_1_22;
				}
			}
		}
	} else {
		var_1_93 = 128u;
	}


	// From: Req15Batch94Amount500
	if (((var_1_3 == var_1_62) || var_1_30) || var_1_30) {
		if (var_1_2 != (- var_1_3)) {
			var_1_42 = (max (var_1_2 , var_1_3));
		}
	} else {
		var_1_42 = var_1_3;
	}


	// From: Req24Batch94Amount500
	signed char stepLocal_18 = var_1_18;
	unsigned long int stepLocal_17 = var_1_93;
	if (stepLocal_18 >= (var_1_7 << var_1_22)) {
		if (stepLocal_17 <= var_1_22) {
			var_1_59 = var_1_2;
		}
	} else {
		var_1_59 = (max (((abs (10.75f)) - var_1_44) , (min (var_1_45 , var_1_47))));
	}


	// From: Req29Batch94Amount500
	if (! ((max (var_1_64 , var_1_44)) >= var_1_62)) {
		var_1_67 = var_1_20;
	}


	// From: Req31Batch94Amount500
	if (var_1_46 > var_1_33) {
		if (! (var_1_35 > last_1_var_1_70)) {
			if (((var_1_71 - var_1_38) - (var_1_49 - var_1_93)) < 1) {
				var_1_70 = (abs (var_1_38 - var_1_25));
			}
		} else {
			var_1_70 = (var_1_37 - var_1_86);
		}
	} else {
		var_1_70 = ((var_1_60 - var_1_10) + var_1_49);
	}


	// From: Req26Batch94Amount500
	unsigned long int stepLocal_20 = var_1_93;
	if (stepLocal_20 <= var_1_22) {
		var_1_61 = (max ((var_1_38 - var_1_55) , (min (var_1_20 , var_1_32))));
	}


	// From: Req23Batch94Amount500
	unsigned long int stepLocal_16 = var_1_93;
	if (stepLocal_16 < (~ (var_1_36 - var_1_61))) {
		var_1_58 = (var_1_2 + var_1_44);
	} else {
		var_1_58 = (var_1_45 - (var_1_46 + var_1_44));
	}


	// From: Req35Batch94Amount500
	if (var_1_75) {
		var_1_81 = ((var_1_22 + (min (var_1_25 , var_1_13))) + var_1_38);
	} else {
		if (var_1_72) {
			if (var_1_72) {
				var_1_81 = var_1_32;
			}
		} else {
			var_1_81 = var_1_61;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -461168.6018427383000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -461168.6018427383000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 127);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 49150);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -31);
	assume_abort_if_not(var_1_19 <= 32);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -31);
	assume_abort_if_not(var_1_20 <= 31);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 62);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 7);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= 1073741823);
	assume_abort_if_not(var_1_35 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 64);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 2305843.009213691400e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16383);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854766000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967295);
	var_1_55 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_55 >= 24574);
	assume_abort_if_not(var_1_55 <= 32766);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -922337.2036854766000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854766000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_69 >= -461168.6018427383000e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427383000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 49151);
	assume_abort_if_not(var_1_71 <= 65535);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427388000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427388000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 0);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 0);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 16383);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 1);
	assume_abort_if_not(var_1_89 <= 1);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_93 = var_1_93;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((double) (min (9.999999999999925E13 , (var_1_2 + (abs (var_1_3))))))) && ((var_1_68 <= (25.75 / var_1_5)) ? (var_1_4 == ((unsigned char) (var_1_6 - var_1_7))) : 1)) && (var_1_8 == ((signed char) (var_1_9 - var_1_10)))) && (var_1_11 == ((unsigned char) (min (var_1_6 , var_1_7))))) && ((((max (var_1_9 , var_1_32)) * (min (var_1_10 , var_1_65))) > var_1_6) ? ((var_1_39 < (var_1_6 * var_1_10)) ? (var_1_12 == ((unsigned short int) ((var_1_13 - var_1_39) - 10))) : (((- var_1_2) >= 0.125) ? (var_1_12 == ((unsigned short int) 128)) : (var_1_12 == ((unsigned short int) var_1_65)))) : (var_1_12 == ((unsigned short int) var_1_65)))) && ((var_1_7 < var_1_10) ? (var_1_14 == ((signed long int) (var_1_13 - (var_1_6 + last_1_var_1_86)))) : ((var_1_5 < last_1_var_1_43) ? (var_1_14 == ((signed long int) var_1_13)) : (var_1_14 == ((signed long int) -4))))) && ((! var_1_88) ? (var_1_15 == ((signed char) (var_1_18 + (var_1_19 + var_1_20)))) : (var_1_15 == ((signed char) (var_1_20 + ((max (var_1_21 , var_1_22)) - var_1_23)))))) && ((-200 > ((var_1_22 - 200) + var_1_13)) ? ((var_1_20 < (var_1_21 << var_1_18)) ? (var_1_24 == ((signed char) ((var_1_25 - var_1_22) - (32 + var_1_21)))) : 1) : 1)) && ((var_1_30 || (var_1_21 >= var_1_18)) ? (((- var_1_5) != (var_1_3 + var_1_1)) ? ((! var_1_30) ? (var_1_26 == ((unsigned char) (var_1_27 && (var_1_30 || var_1_28)))) : (var_1_26 == ((unsigned char) ((! var_1_29) && var_1_27)))) : 1) : ((var_1_13 != var_1_23) ? ((32u > var_1_12) ? (var_1_26 == ((unsigned char) (var_1_30 && var_1_29))) : ((last_1_var_1_26 || (var_1_12 >= var_1_13)) ? (var_1_26 == ((unsigned char) (! var_1_29))) : 1)) : 1))) && (last_1_var_1_87 ? ((! var_1_28) ? (var_1_30 == ((unsigned char) (! (var_1_27 && var_1_29)))) : (var_1_30 == ((unsigned char) ((var_1_28 && var_1_29) || var_1_31)))) : (var_1_30 == ((unsigned char) ((! var_1_31) && var_1_28))))) && ((var_1_5 > last_1_var_1_85) ? ((var_1_21 > -10) ? ((var_1_28 || (var_1_25 == last_1_var_1_48)) ? (var_1_32 == ((signed long int) ((max (last_1_var_1_79 , 10)) + (min (last_1_var_1_48 , var_1_7))))) : (var_1_32 == ((signed long int) (min ((last_1_var_1_11 + last_1_var_1_41) , -32))))) : ((var_1_3 != (var_1_5 / var_1_33)) ? (var_1_32 == ((signed long int) (max (last_1_var_1_48 , last_1_var_1_41)))) : 1)) : ((var_1_13 > 16) ? ((var_1_5 <= (var_1_33 + last_1_var_1_85)) ? ((var_1_9 >= (var_1_7 >> var_1_34)) ? (var_1_32 == ((signed long int) (last_1_var_1_41 + last_1_var_1_48))) : ((! var_1_29) ? (var_1_32 == ((signed long int) (var_1_10 - (var_1_21 + var_1_13)))) : ((var_1_10 >= (var_1_7 - var_1_25)) ? (var_1_32 == ((signed long int) (last_1_var_1_41 - (var_1_35 - 10)))) : 1))) : (var_1_32 == ((signed long int) (((1611116012 - var_1_7) - 200) - (min (var_1_21 , var_1_35)))))) : 1))) && ((var_1_72 || (var_1_20 > (min (var_1_39 , var_1_86)))) ? (var_1_36 == ((unsigned char) ((var_1_37 + var_1_38) - (min (var_1_22 , 4))))) : 1)) && ((var_1_5 != var_1_85) ? (var_1_39 == ((unsigned short int) (var_1_40 + var_1_25))) : (((var_1_21 + var_1_9) == var_1_34) ? (((var_1_6 + var_1_10) > 4) ? (var_1_39 == ((unsigned short int) (var_1_13 - (min (var_1_37 , var_1_38))))) : (var_1_39 == ((unsigned short int) var_1_14))) : 1))) && ((var_1_29 || last_1_var_1_30) ? ((var_1_38 > var_1_25) ? (var_1_41 == ((unsigned long int) (max (last_1_var_1_81 , var_1_21)))) : 1) : (var_1_41 == ((unsigned long int) var_1_25)))) && ((((var_1_3 == var_1_62) || var_1_30) || var_1_30) ? ((var_1_2 != (- var_1_3)) ? (var_1_42 == ((float) (max (var_1_2 , var_1_3)))) : 1) : (var_1_42 == ((float) var_1_3)))) && ((var_1_6 > var_1_34) ? (var_1_43 == ((double) var_1_2)) : (var_1_43 == ((double) (((var_1_44 - var_1_45) + var_1_46) - var_1_47))))) && (((var_1_13 - (var_1_49 - var_1_21)) > var_1_7) ? ((var_1_43 > (16.916 - var_1_47)) ? ((var_1_22 <= ((-64 * var_1_37) * var_1_41)) ? (((var_1_13 - var_1_10) < (var_1_22 << var_1_40)) ? (var_1_48 == ((signed long int) (25 + 256))) : (var_1_48 == ((signed long int) var_1_14))) : (var_1_48 == ((signed long int) 64))) : 1) : (var_1_48 == ((signed long int) var_1_19)))) && ((var_1_1 == (- var_1_1)) ? (var_1_31 ? (var_1_50 == ((float) (max (var_1_3 , (min (var_1_46 , var_1_51)))))) : (var_1_50 == ((float) var_1_44))) : ((var_1_39 > var_1_22) ? ((var_1_7 > (var_1_83 / var_1_38)) ? (var_1_50 == ((float) (var_1_3 + var_1_44))) : (var_1_50 == ((float) var_1_47))) : 1))) && (((var_1_53 - var_1_22) <= var_1_23) ? ((var_1_47 < ((- var_1_5) / var_1_33)) ? (var_1_52 == ((float) (var_1_3 + 3.5f))) : 1) : (var_1_52 == ((float) var_1_46)))) && (((var_1_53 - 1u) >= var_1_14) ? ((var_1_18 == ((~ var_1_20) / var_1_34)) ? ((999999.5 < var_1_47) ? (var_1_54 == ((signed short int) ((min ((var_1_7 + var_1_10) , var_1_48)) - ((var_1_55 - var_1_34) - (max (10 , var_1_25)))))) : 1) : 1) : ((((abs (var_1_38)) + var_1_23) >= (max (var_1_55 , var_1_40))) ? ((var_1_44 > var_1_43) ? (var_1_54 == ((signed short int) (min (-4 , var_1_32)))) : 1) : 1))) && (var_1_56 == ((signed char) (max (-5 , (max (var_1_10 , var_1_25))))))) && ((var_1_2 <= var_1_47) ? (var_1_57 == ((signed char) (var_1_22 - (max (var_1_10 , var_1_21))))) : 1)) && ((var_1_93 < (~ (var_1_36 - var_1_61))) ? (var_1_58 == ((float) (var_1_2 + var_1_44))) : (var_1_58 == ((float) (var_1_45 - (var_1_46 + var_1_44)))))) && ((var_1_18 >= (var_1_7 << var_1_22)) ? ((var_1_93 <= var_1_22) ? (var_1_59 == ((float) var_1_2)) : 1) : (var_1_59 == ((float) (max (((abs (10.75f)) - var_1_44) , (min (var_1_45 , var_1_47)))))))) && ((var_1_82 <= (max (var_1_3 , var_1_46))) ? ((var_1_30 || (! var_1_28)) ? (var_1_60 == ((unsigned char) (var_1_21 + var_1_34))) : (var_1_60 == ((unsigned char) (var_1_6 - var_1_37)))) : (var_1_60 == ((unsigned char) (abs (var_1_6)))))) && ((var_1_93 <= var_1_22) ? (var_1_61 == ((signed long int) (max ((var_1_38 - var_1_55) , (min (var_1_20 , var_1_32)))))) : 1)) && (((var_1_41 * var_1_21) >= var_1_7) ? (((! var_1_26) || (var_1_27 || var_1_87)) ? (var_1_62 == ((double) ((15.5 - var_1_44) + var_1_46))) : (((var_1_36 % var_1_13) >= ((var_1_84 - var_1_63) + (var_1_19 + var_1_84))) ? (var_1_62 == ((double) var_1_51)) : (var_1_62 == ((double) (var_1_47 - var_1_45))))) : (var_1_62 == ((double) (abs (var_1_64)))))) && ((var_1_41 == -128) ? (((var_1_6 - var_1_25) >= var_1_19) ? (var_1_65 == ((signed short int) (var_1_22 + var_1_38))) : (var_1_87 ? (var_1_65 == ((signed short int) (min (var_1_7 , (var_1_54 - (var_1_55 - var_1_38)))))) : (var_1_65 == ((signed short int) (min (var_1_23 , var_1_32)))))) : ((! var_1_30) ? (var_1_65 == ((signed short int) ((32356 - var_1_54) - (var_1_55 - var_1_11)))) : (var_1_65 == ((signed short int) (abs (var_1_14))))))) && ((! ((max (var_1_64 , var_1_44)) >= var_1_62)) ? (var_1_67 == ((signed char) var_1_20)) : 1)) && (var_1_68 == ((double) (min ((min ((max (var_1_2 , var_1_51)) , (var_1_45 + var_1_3))) , (var_1_44 + (max (var_1_46 , var_1_69)))))))) && ((var_1_46 > var_1_33) ? ((! (var_1_35 > last_1_var_1_70)) ? ((((var_1_71 - var_1_38) - (var_1_49 - var_1_93)) < 1) ? (var_1_70 == ((signed long int) (abs (var_1_38 - var_1_25)))) : 1) : (var_1_70 == ((signed long int) (var_1_37 - var_1_86)))) : (var_1_70 == ((signed long int) ((var_1_60 - var_1_10) + var_1_49))))) && (((last_1_var_1_32 / var_1_13) != last_1_var_1_77) ? ((var_1_20 != ((var_1_23 + var_1_22) - var_1_10)) ? ((((min (var_1_55 , 50)) >= var_1_49) && (last_1_var_1_41 >= var_1_9)) ? ((var_1_6 <= var_1_13) ? (var_1_72 == ((unsigned char) var_1_29)) : ((var_1_6 <= var_1_21) ? (var_1_72 == ((unsigned char) ((last_1_var_1_88 && var_1_29) || var_1_31))) : ((var_1_46 > ((var_1_44 + var_1_45) - (var_1_73 + var_1_74))) ? (var_1_72 == ((unsigned char) ((var_1_29 || var_1_31) || var_1_75))) : (var_1_75 ? ((((min (last_1_var_1_82 , var_1_33)) < last_1_var_1_43) && (var_1_19 == last_1_var_1_81)) ? (var_1_72 == ((unsigned char) (var_1_27 && var_1_28))) : (var_1_72 == ((unsigned char) (var_1_29 || var_1_28)))) : (var_1_72 == ((unsigned char) (((! var_1_31) && var_1_29) || var_1_76))))))) : (var_1_72 == ((unsigned char) (! var_1_28)))) : 1) : (var_1_72 == ((unsigned char) ((var_1_6 >= last_1_var_1_81) && (var_1_31 || (! var_1_27))))))) && ((! ((- var_1_53) >= last_1_var_1_83)) ? ((var_1_5 < (var_1_74 - var_1_73)) ? (var_1_77 == ((unsigned char) (abs (max (var_1_34 , (min (10 , var_1_22))))))) : (var_1_77 == ((unsigned char) (abs (var_1_7))))) : (((last_1_var_1_41 > (last_1_var_1_79 * last_1_var_1_86)) || last_1_var_1_30) ? (var_1_77 == ((unsigned char) (var_1_25 + var_1_37))) : (((last_1_var_1_83 * var_1_22) < var_1_55) ? ((! (last_1_var_1_86 <= (var_1_38 & var_1_10))) ? (var_1_77 == ((unsigned char) var_1_6)) : 1) : (var_1_77 == ((unsigned char) (min (var_1_38 , (max (var_1_25 , (abs (var_1_22)))))))))))) && (var_1_79 == ((signed short int) ((var_1_80 - var_1_38) + var_1_56)))) && (var_1_75 ? (var_1_81 == ((unsigned long int) ((var_1_22 + (min (var_1_25 , var_1_13))) + var_1_38))) : (var_1_72 ? (var_1_72 ? (var_1_81 == ((unsigned long int) var_1_32)) : 1) : (var_1_81 == ((unsigned long int) var_1_61))))) && (var_1_75 ? (var_1_82 == ((double) var_1_73)) : (var_1_82 == ((double) var_1_47)))) && (var_1_83 == ((signed long int) 0))) && (var_1_84 == ((signed long int) var_1_13))) && (var_1_85 == ((double) var_1_3))) && (var_1_76 ? (var_1_86 == ((unsigned short int) var_1_25)) : (var_1_86 == ((unsigned short int) var_1_77)))) && (var_1_88 ? (var_1_87 == ((unsigned char) var_1_28)) : 1)) && (var_1_72 ? (var_1_88 == ((unsigned char) var_1_89)) : (var_1_88 == ((unsigned char) var_1_27)))) && (var_1_90 == ((float) var_1_45))) && (var_1_28 ? (var_1_91 == ((unsigned char) var_1_92)) : (var_1_91 == ((unsigned char) var_1_10)))) && (((- var_1_11) >= (abs (min (var_1_63 , var_1_77)))) ? ((! var_1_89) ? ((last_1_var_1_93 >= var_1_40) ? ((var_1_82 >= var_1_62) ? (var_1_93 == ((unsigned long int) var_1_54)) : (var_1_93 == ((unsigned long int) var_1_22))) : 1) : 1) : (var_1_93 == ((unsigned long int) 128u)))
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
