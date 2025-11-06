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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = -100;
double var_1_3 = 3.125;
double var_1_4 = 256.25;
signed long int var_1_7 = -5;
signed long int var_1_8 = -128;
signed long int var_1_9 = 128;
signed long int var_1_10 = 5;
signed long int var_1_11 = 25;
signed long int var_1_12 = -8;
signed long int var_1_13 = 10;
double var_1_14 = 0.6;
double var_1_15 = 24.625;
signed short int var_1_17 = 256;
signed short int var_1_18 = 8;
signed short int var_1_19 = 5;
signed short int var_1_20 = 8;
double var_1_21 = 63.8;
double var_1_22 = 100000000000.2;
double var_1_23 = 100000000000.5;
double var_1_24 = 99999.6;
double var_1_25 = 63.2;
double var_1_27 = 63.4;
double var_1_28 = 99.5;
signed short int var_1_29 = 24022;
double var_1_30 = 0.0;
signed short int var_1_31 = -50;
unsigned long int var_1_32 = 5;
signed short int var_1_33 = -32;
signed short int var_1_34 = 64;
signed char var_1_35 = -4;
signed char var_1_36 = 2;
unsigned long int var_1_37 = 1;
unsigned long int var_1_38 = 8;
unsigned long int var_1_39 = 1255182551;
unsigned long int var_1_40 = 2285058666;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 10;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
double var_1_47 = 7.9;
unsigned char var_1_48 = 4;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 32;
unsigned char var_1_51 = 200;
unsigned char var_1_52 = 200;
double var_1_53 = 200.875;
double var_1_54 = 0.0;
double var_1_55 = 10.8;
double var_1_56 = 200.5;
double var_1_57 = 7.5;
signed char var_1_58 = 2;
signed char var_1_59 = -100;
signed short int var_1_60 = -8;
signed char var_1_62 = 0;
float var_1_63 = 32.5;
unsigned short int var_1_64 = 1;
unsigned short int var_1_65 = 10;
unsigned short int var_1_66 = 36713;
float var_1_67 = 64.5;
float var_1_69 = 15.25;
unsigned long int var_1_70 = 0;
unsigned long int var_1_71 = 1000000000;
unsigned long int var_1_72 = 1000000000;
double var_1_73 = 1.875;
double var_1_74 = 1.2;
double var_1_75 = 99.125;
float var_1_76 = 2.9;
unsigned long int var_1_77 = 100000000;
unsigned long int var_1_78 = 3483520261;
double var_1_79 = 49.2;
float var_1_80 = 256.9;
signed long int var_1_81 = -32;
double var_1_82 = 0.1;
signed short int var_1_83 = -25;
signed short int var_1_84 = 10000;
double var_1_85 = 2.6;
double var_1_87 = 2.1;
double var_1_88 = 127.5;
signed short int var_1_89 = 16;
signed long int var_1_90 = 25;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 0;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
signed long int var_1_97 = 8;
signed long int var_1_98 = 32;
unsigned long int var_1_100 = 128;
double var_1_101 = 16.25;
signed long int var_1_102 = 16;
unsigned short int var_1_103 = 128;
signed short int var_1_104 = -2;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 64;
unsigned short int var_1_107 = 1;
float var_1_108 = 0.8;
double var_1_109 = 99.95;
unsigned char var_1_110 = 1;
signed long int var_1_111 = 128;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_37 = 1;
unsigned char last_1_var_1_45 = 1;
unsigned short int last_1_var_1_64 = 1;
signed long int last_1_var_1_81 = -32;
double last_1_var_1_85 = 2.6;
unsigned char last_1_var_1_92 = 0;
signed long int last_1_var_1_111 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req34Batch5Amount500
	unsigned char stepLocal_25 = var_1_46;
	if (var_1_56 > last_1_var_1_85) {
		if (last_1_var_1_92) {
			if (var_1_95) {
				var_1_97 = (var_1_98 - (last_1_var_1_111 + var_1_20));
			}
		} else {
			var_1_97 = (min ((max (var_1_71 , var_1_9)) , -64));
		}
	} else {
		if (stepLocal_25 || (last_1_var_1_37 >= (- 128u))) {
			var_1_97 = (var_1_17 + (var_1_84 - var_1_9));
		}
	}


	// From: Req25Batch5Amount500
	if (last_1_var_1_45) {
		var_1_77 = ((min (4133747414u , (var_1_78 - var_1_50))) - (max (var_1_39 , var_1_17)));
	}


	// From: Req5Batch5Amount500
	if (var_1_24 == var_1_4) {
		var_1_33 = (min (var_1_34 , var_1_20));
	}


	// From: Req7Batch5Amount500
	if (var_1_4 > var_1_3) {
		var_1_37 = ((min ((var_1_20 + var_1_9) , var_1_11)) + var_1_10);
	} else {
		var_1_37 = (min (var_1_20 , (max ((var_1_10 + var_1_29) , var_1_11))));
	}


	// From: Req9Batch5Amount500
	var_1_41 = (! (var_1_42 && var_1_43));


	// From: Req10Batch5Amount500
	signed short int stepLocal_10 = var_1_17;
	if (stepLocal_10 == var_1_40) {
		var_1_44 = (var_1_10 + var_1_19);
	}


	// From: Req12Batch5Amount500
	if (var_1_23 <= var_1_27) {
		var_1_48 = (var_1_49 - (var_1_20 + var_1_50));
	} else {
		if (var_1_7 > var_1_50) {
			var_1_48 = (((max (var_1_51 , var_1_52)) - var_1_50) - (100 - 10));
		} else {
			var_1_48 = var_1_50;
		}
	}


	// From: Req13Batch5Amount500
	if ((- var_1_27) >= var_1_28) {
		var_1_53 = (var_1_30 - (var_1_54 - (min (var_1_25 , var_1_23))));
	} else {
		var_1_53 = 128.5;
	}


	// From: Req14Batch5Amount500
	unsigned char stepLocal_11 = var_1_37 == var_1_17;
	if (var_1_42 || stepLocal_11) {
		var_1_55 = (((var_1_56 + var_1_57) + 25.5) + var_1_23);
	} else {
		var_1_55 = (var_1_21 + var_1_22);
	}


	// From: Req18Batch5Amount500
	if (var_1_15 >= var_1_28) {
		var_1_63 = var_1_57;
	}


	// From: Req21Batch5Amount500
	signed long int stepLocal_17 = var_1_18 * var_1_19;
	if (var_1_42) {
		if (var_1_34 > stepLocal_17) {
			var_1_69 = (var_1_24 + (var_1_23 - var_1_25));
		} else {
			var_1_69 = (var_1_25 - (var_1_30 - var_1_24));
		}
	}


	// From: Req22Batch5Amount500
	if ((- var_1_3) >= (128.5 * var_1_28)) {
		var_1_70 = ((var_1_39 + (var_1_71 + var_1_72)) - var_1_20);
	}


	// From: Req24Batch5Amount500
	if (var_1_41) {
		if (var_1_41) {
			var_1_76 = (10.8f - var_1_24);
		}
	}


	// From: Req36Batch5Amount500
	var_1_101 = var_1_28;


	// From: Req37Batch5Amount500
	var_1_102 = var_1_7;


	// From: Req38Batch5Amount500
	if (var_1_93) {
		var_1_103 = var_1_20;
	} else {
		var_1_103 = var_1_17;
	}


	// From: Req39Batch5Amount500
	var_1_104 = 4;


	// From: Req40Batch5Amount500
	if (var_1_95) {
		var_1_105 = var_1_46;
	} else {
		var_1_105 = var_1_42;
	}


	// From: Req41Batch5Amount500
	var_1_106 = 128;


	// From: Req42Batch5Amount500
	var_1_107 = var_1_102;


	// From: Req43Batch5Amount500
	var_1_108 = var_1_23;


	// From: Req44Batch5Amount500
	if (var_1_46) {
		var_1_109 = var_1_30;
	} else {
		var_1_109 = 1.5;
	}


	// From: Req45Batch5Amount500
	if (var_1_41) {
		var_1_110 = var_1_94;
	} else {
		var_1_110 = var_1_96;
	}


	// From: Req3Batch5Amount500
	unsigned char stepLocal_9 = var_1_41;
	if (var_1_30 < var_1_27) {
		if ((! var_1_110) || stepLocal_9) {
			var_1_31 = (max ((var_1_20 + var_1_18) , var_1_17));
		} else {
			var_1_31 = 128;
		}
	} else {
		var_1_31 = var_1_20;
	}


	// From: Req6Batch5Amount500
	if (var_1_109 <= var_1_21) {
		var_1_35 = (max (4 , var_1_20));
	} else {
		var_1_35 = ((abs (var_1_20)) + (abs (var_1_36)));
	}


	// From: Req8Batch5Amount500
	if (var_1_41 || ((- var_1_10) == var_1_44)) {
		if (var_1_110) {
			var_1_38 = (var_1_11 + (min (var_1_17 , (var_1_39 - var_1_29))));
		} else {
			var_1_38 = (var_1_40 - (max (var_1_18 , (var_1_17 + var_1_19))));
		}
	}


	// From: Req15Batch5Amount500
	if (var_1_36 == (var_1_104 ^ (max (var_1_10 , var_1_9)))) {
		var_1_58 = (min (var_1_59 , var_1_20));
	} else {
		if (var_1_41) {
			var_1_58 = var_1_36;
		} else {
			var_1_58 = (var_1_50 + var_1_36);
		}
	}


	// From: Req19Batch5Amount500
	signed long int stepLocal_16 = min (var_1_11 , var_1_50);
	unsigned char stepLocal_15 = var_1_105;
	signed char stepLocal_14 = var_1_59;
	if (stepLocal_15 && var_1_42) {
		if (stepLocal_16 >= var_1_39) {
			if (last_1_var_1_64 < stepLocal_14) {
				var_1_64 = (min ((max (1 , var_1_65)) , (36218 - var_1_52)));
			} else {
				var_1_64 = (var_1_66 - (max (var_1_50 , (var_1_29 - var_1_51))));
			}
		}
	} else {
		if (var_1_41) {
			var_1_64 = var_1_51;
		} else {
			var_1_64 = (abs ((var_1_52 + 25) + var_1_29));
		}
	}


	// From: Req23Batch5Amount500
	signed long int stepLocal_18 = var_1_11;
	if (((var_1_49 + var_1_19) * (min (5u , var_1_106))) != stepLocal_18) {
		var_1_73 = (var_1_27 - 9.999999999999625E12);
	} else {
		var_1_73 = (var_1_25 - (var_1_30 - (var_1_74 + var_1_75)));
	}


	// From: Req26Batch5Amount500
	signed long int stepLocal_20 = var_1_9;
	unsigned long int stepLocal_19 = var_1_50 - (var_1_39 - var_1_19);
	if (stepLocal_20 <= (var_1_39 % var_1_78)) {
		if ((var_1_30 / var_1_54) == ((var_1_24 + var_1_23) - var_1_74)) {
			if (var_1_12 != stepLocal_19) {
				var_1_79 = ((var_1_24 - var_1_75) + var_1_57);
			} else {
				var_1_79 = (var_1_74 - (var_1_24 + 1.000000000005E11));
			}
		} else {
			var_1_79 = (15.375 + var_1_57);
		}
	} else {
		if (var_1_101 < var_1_57) {
			var_1_79 = var_1_25;
		} else {
			var_1_79 = var_1_54;
		}
	}


	// From: Req27Batch5Amount500
	signed long int stepLocal_21 = var_1_12;
	if (stepLocal_21 <= var_1_51) {
		var_1_80 = var_1_25;
	} else {
		if (var_1_110) {
			if (var_1_79 != var_1_27) {
				var_1_80 = ((var_1_54 - var_1_74) - (min (var_1_24 , var_1_75)));
			} else {
				if (var_1_15 >= (var_1_23 + (var_1_4 - var_1_30))) {
					var_1_80 = (var_1_28 - (var_1_24 + var_1_25));
				} else {
					var_1_80 = (var_1_24 - var_1_25);
				}
			}
		} else {
			var_1_80 = (var_1_25 + var_1_21);
		}
	}


	// From: Req31Batch5Amount500
	var_1_89 = (((min (var_1_31 , var_1_52)) + var_1_70) + (var_1_51 + var_1_59));


	// From: Req35Batch5Amount500
	if (var_1_96) {
		var_1_100 = var_1_44;
	} else {
		var_1_100 = var_1_107;
	}


	// From: Req1Batch5Amount500
	unsigned long int stepLocal_2 = var_1_38;
	signed long int stepLocal_1 = var_1_8;
	unsigned char stepLocal_0 = var_1_3 < var_1_4;
	if (var_1_73 > (var_1_3 - var_1_4)) {
		if (stepLocal_0 && var_1_105) {
			if (-256 >= stepLocal_2) {
				var_1_1 = (min (var_1_7 , var_1_8));
			} else {
				var_1_1 = (((1000000000 - var_1_9) + (1000000000 - var_1_10)) - var_1_11);
			}
		} else {
			var_1_1 = (min ((var_1_9 - var_1_11) , ((64 - var_1_10) + -100)));
		}
	} else {
		if (stepLocal_1 >= ((var_1_7 / 100000) / var_1_12)) {
			var_1_1 = var_1_13;
		}
	}


	// From: Req30Batch5Amount500
	signed long int stepLocal_22 = var_1_7;
	if (stepLocal_22 != (min (var_1_100 , var_1_1))) {
		if (var_1_43) {
			var_1_85 = (var_1_25 + ((var_1_74 - var_1_75) + var_1_87));
		} else {
			var_1_85 = (min (var_1_15 , var_1_88));
		}
	} else {
		var_1_85 = (var_1_25 - var_1_54);
	}


	// From: Req46Batch5Amount500
	unsigned long int stepLocal_26 = var_1_100;
	if ((min (var_1_97 , var_1_12)) >= stepLocal_26) {
		var_1_111 = (min (var_1_8 , ((var_1_77 + 256) - var_1_18)));
	} else {
		if (((abs (var_1_85)) - var_1_54) > 7.75) {
			var_1_111 = var_1_20;
		}
	}


	// From: Req33Batch5Amount500
	unsigned long int stepLocal_24 = var_1_100;
	if (var_1_18 >= stepLocal_24) {
		var_1_92 = ((var_1_85 <= (min (var_1_23 , var_1_87))) && ((var_1_49 < var_1_7) && var_1_46));
	} else {
		if (((min (var_1_3 , var_1_101)) * (var_1_28 / 3.4)) == (var_1_56 * var_1_54)) {
			var_1_92 = (((var_1_38 ^ var_1_77) < (var_1_84 + var_1_78)) || ((var_1_43 || var_1_42) && (var_1_93 && var_1_94)));
		} else {
			var_1_92 = (var_1_46 || (var_1_95 || var_1_96));
		}
	}


	// From: Req4Batch5Amount500
	if (! var_1_105) {
		var_1_32 = var_1_29;
	} else {
		if (! var_1_92) {
			var_1_32 = (var_1_29 + 16u);
		} else {
			var_1_32 = (max (var_1_18 , var_1_9));
		}
	}


	// From: Req16Batch5Amount500
	signed long int stepLocal_12 = var_1_111;
	if (stepLocal_12 >= 25) {
		var_1_60 = 64;
	} else {
		var_1_60 = ((200 - var_1_49) + (abs (var_1_77)));
	}


	// From: Req17Batch5Amount500
	unsigned long int stepLocal_13 = (var_1_40 - var_1_29) + (var_1_20 / var_1_51);
	if (var_1_32 <= stepLocal_13) {
		var_1_62 = ((var_1_50 + var_1_20) - 1);
	}


	// From: Req20Batch5Amount500
	if (var_1_34 < var_1_100) {
		if (((max (var_1_48 , var_1_20)) * var_1_65) <= (var_1_49 * var_1_34)) {
			var_1_67 = (abs (var_1_30 - var_1_24));
		} else {
			var_1_67 = (min (var_1_28 , var_1_22));
		}
	} else {
		if (var_1_73 == var_1_25) {
			if (var_1_43 || (var_1_34 == var_1_60)) {
				var_1_67 = (min (var_1_24 , var_1_57));
			}
		} else {
			var_1_67 = 9.9999999999996E12f;
		}
	}


	// From: Req32Batch5Amount500
	unsigned char stepLocal_23 = var_1_48;
	if (stepLocal_23 >= ((var_1_32 + var_1_97) & (max (var_1_72 , var_1_51)))) {
		var_1_90 = (var_1_19 + (max (var_1_84 , 128)));
	}


	// From: Req11Batch5Amount500
	if (var_1_41) {
		if (((min (var_1_34 , var_1_8)) / (min (var_1_20 , -2))) <= (var_1_1 ^ -256)) {
			var_1_45 = var_1_46;
		} else {
			if (var_1_3 < (var_1_47 - var_1_24)) {
				var_1_45 = (! (var_1_92 && var_1_46));
			} else {
				if (((min (var_1_12 , 1)) <= var_1_77) && (var_1_42 || var_1_110)) {
					var_1_45 = ((var_1_12 >= var_1_20) && (! var_1_42));
				} else {
					if (-256 > (min ((abs (var_1_20)) , (25 * var_1_44)))) {
						var_1_45 = (var_1_110 || (var_1_43 && var_1_42));
					} else {
						var_1_45 = var_1_42;
					}
				}
			}
		}
	}


	// From: Req2Batch5Amount500
	signed short int stepLocal_8 = var_1_19;
	unsigned char stepLocal_7 = var_1_19 >= var_1_9;
	signed long int stepLocal_6 = min (var_1_19 , var_1_20);
	signed long int stepLocal_5 = abs (var_1_7);
	signed short int stepLocal_4 = var_1_19;
	signed long int stepLocal_3 = var_1_18 >> var_1_20;
	if (var_1_92) {
		if (var_1_4 < (- (max (var_1_3 , var_1_85)))) {
			var_1_14 = var_1_15;
		} else {
			if (var_1_41) {
				var_1_14 = (abs (var_1_15));
			} else {
				if (256.5 < (var_1_4 - var_1_3)) {
					if (((var_1_17 + var_1_18) - var_1_19) > stepLocal_5) {
						var_1_14 = (abs (var_1_15));
					} else {
						if (stepLocal_3 >= -128) {
							var_1_14 = (var_1_21 + var_1_22);
						} else {
							var_1_14 = ((max (var_1_21 , var_1_22)) + ((min (var_1_23 , var_1_24)) - var_1_25));
						}
					}
				}
			}
		}
	} else {
		if (var_1_4 < var_1_22) {
			if (var_1_21 <= ((min (var_1_22 , var_1_4)) + var_1_25)) {
				if (var_1_105 && stepLocal_7) {
					if (var_1_23 <= var_1_24) {
						var_1_14 = (var_1_23 + (var_1_25 - var_1_24));
					} else {
						var_1_14 = (max (var_1_21 , var_1_23));
					}
				} else {
					var_1_14 = (var_1_23 - (max ((var_1_24 + var_1_25) , (min (var_1_27 , var_1_28)))));
				}
			} else {
				var_1_14 = var_1_28;
			}
		} else {
			if (stepLocal_6 <= (var_1_9 - (min (var_1_10 , var_1_18)))) {
				if (var_1_32 < stepLocal_4) {
					var_1_14 = (max (63.4 , var_1_28));
				} else {
					if (stepLocal_8 >= ((var_1_29 - var_1_18) << var_1_9)) {
						var_1_14 = ((max ((var_1_30 - var_1_24) , (max (var_1_28 , var_1_25)))) - var_1_27);
					}
				}
			} else {
				var_1_14 = ((min ((max (127.5 , var_1_25)) , var_1_30)) - 199.85);
			}
		}
	}


	// From: Req28Batch5Amount500
	if ((- var_1_55) >= (var_1_21 / var_1_82)) {
		if (var_1_45) {
			var_1_81 = (var_1_9 - var_1_17);
		}
	} else {
		var_1_81 = ((max (var_1_51 , (var_1_19 + last_1_var_1_81))) + (abs (var_1_72 - var_1_66)));
	}


	// From: Req29Batch5Amount500
	if (var_1_45 || (var_1_33 >= var_1_102)) {
		var_1_83 = -5;
	} else {
		if (var_1_19 >= var_1_64) {
			var_1_83 = (var_1_50 - var_1_33);
		} else {
			var_1_83 = (((var_1_84 - var_1_20) + var_1_51) - (var_1_18 + var_1_33));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 536870911);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 536870911);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483647);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16384);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 14);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32767);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 190);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 190);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= -115292.1504606845700e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 1152921.504606845700e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -115292.1504606845700e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 1152921.504606845700e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -127);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 32767);
	assume_abort_if_not(var_1_66 <= 65534);
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 536870912);
	assume_abort_if_not(var_1_71 <= 1073741824);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 536870912);
	assume_abort_if_not(var_1_72 <= 1073741823);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 3221225470);
	assume_abort_if_not(var_1_78 <= 4294967294);
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -922337.2036854776000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854776000e+12F && var_1_82 >= 1.0e-20F ));
	assume_abort_if_not(var_1_82 != 0.0F);
	var_1_84 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_84 >= 8191);
	assume_abort_if_not(var_1_84 <= 16383);
	var_1_87 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_87 >= -230584.3009213691400e+13F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 2305843.009213691400e+12F && var_1_87 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= -922337.2036854766000e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 1);
	assume_abort_if_not(var_1_94 <= 1);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 0);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 0);
	var_1_98 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_98 >= -1);
	assume_abort_if_not(var_1_98 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_37 = var_1_37;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_111 = var_1_111;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((var_1_73 > (var_1_3 - var_1_4)) ? (((var_1_3 < var_1_4) && var_1_105) ? ((-256 >= var_1_38) ? (var_1_1 == ((signed long int) (min (var_1_7 , var_1_8)))) : (var_1_1 == ((signed long int) (((1000000000 - var_1_9) + (1000000000 - var_1_10)) - var_1_11)))) : (var_1_1 == ((signed long int) (min ((var_1_9 - var_1_11) , ((64 - var_1_10) + -100)))))) : ((var_1_8 >= ((var_1_7 / 100000) / var_1_12)) ? (var_1_1 == ((signed long int) var_1_13)) : 1)) && (var_1_92 ? ((var_1_4 < (- (max (var_1_3 , var_1_85)))) ? (var_1_14 == ((double) var_1_15)) : (var_1_41 ? (var_1_14 == ((double) (abs (var_1_15)))) : ((256.5 < (var_1_4 - var_1_3)) ? ((((var_1_17 + var_1_18) - var_1_19) > (abs (var_1_7))) ? (var_1_14 == ((double) (abs (var_1_15)))) : (((var_1_18 >> var_1_20) >= -128) ? (var_1_14 == ((double) (var_1_21 + var_1_22))) : (var_1_14 == ((double) ((max (var_1_21 , var_1_22)) + ((min (var_1_23 , var_1_24)) - var_1_25)))))) : 1))) : ((var_1_4 < var_1_22) ? ((var_1_21 <= ((min (var_1_22 , var_1_4)) + var_1_25)) ? ((var_1_105 && (var_1_19 >= var_1_9)) ? ((var_1_23 <= var_1_24) ? (var_1_14 == ((double) (var_1_23 + (var_1_25 - var_1_24)))) : (var_1_14 == ((double) (max (var_1_21 , var_1_23))))) : (var_1_14 == ((double) (var_1_23 - (max ((var_1_24 + var_1_25) , (min (var_1_27 , var_1_28)))))))) : (var_1_14 == ((double) var_1_28))) : (((min (var_1_19 , var_1_20)) <= (var_1_9 - (min (var_1_10 , var_1_18)))) ? ((var_1_32 < var_1_19) ? (var_1_14 == ((double) (max (63.4 , var_1_28)))) : ((var_1_19 >= ((var_1_29 - var_1_18) << var_1_9)) ? (var_1_14 == ((double) ((max ((var_1_30 - var_1_24) , (max (var_1_28 , var_1_25)))) - var_1_27))) : 1)) : (var_1_14 == ((double) ((min ((max (127.5 , var_1_25)) , var_1_30)) - 199.85))))))) && ((var_1_30 < var_1_27) ? (((! var_1_110) || var_1_41) ? (var_1_31 == ((signed short int) (max ((var_1_20 + var_1_18) , var_1_17)))) : (var_1_31 == ((signed short int) 128))) : (var_1_31 == ((signed short int) var_1_20)))) && ((! var_1_105) ? (var_1_32 == ((unsigned long int) var_1_29)) : ((! var_1_92) ? (var_1_32 == ((unsigned long int) (var_1_29 + 16u))) : (var_1_32 == ((unsigned long int) (max (var_1_18 , var_1_9))))))) && ((var_1_24 == var_1_4) ? (var_1_33 == ((signed short int) (min (var_1_34 , var_1_20)))) : 1)) && ((var_1_109 <= var_1_21) ? (var_1_35 == ((signed char) (max (4 , var_1_20)))) : (var_1_35 == ((signed char) ((abs (var_1_20)) + (abs (var_1_36))))))) && ((var_1_4 > var_1_3) ? (var_1_37 == ((unsigned long int) ((min ((var_1_20 + var_1_9) , var_1_11)) + var_1_10))) : (var_1_37 == ((unsigned long int) (min (var_1_20 , (max ((var_1_10 + var_1_29) , var_1_11)))))))) && ((var_1_41 || ((- var_1_10) == var_1_44)) ? (var_1_110 ? (var_1_38 == ((unsigned long int) (var_1_11 + (min (var_1_17 , (var_1_39 - var_1_29)))))) : (var_1_38 == ((unsigned long int) (var_1_40 - (max (var_1_18 , (var_1_17 + var_1_19))))))) : 1)) && (var_1_41 == ((unsigned char) (! (var_1_42 && var_1_43))))) && ((var_1_17 == var_1_40) ? (var_1_44 == ((unsigned long int) (var_1_10 + var_1_19))) : 1)) && (var_1_41 ? ((((min (var_1_34 , var_1_8)) / (min (var_1_20 , -2))) <= (var_1_1 ^ -256)) ? (var_1_45 == ((unsigned char) var_1_46)) : ((var_1_3 < (var_1_47 - var_1_24)) ? (var_1_45 == ((unsigned char) (! (var_1_92 && var_1_46)))) : ((((min (var_1_12 , 1)) <= var_1_77) && (var_1_42 || var_1_110)) ? (var_1_45 == ((unsigned char) ((var_1_12 >= var_1_20) && (! var_1_42)))) : ((-256 > (min ((abs (var_1_20)) , (25 * var_1_44)))) ? (var_1_45 == ((unsigned char) (var_1_110 || (var_1_43 && var_1_42)))) : (var_1_45 == ((unsigned char) var_1_42)))))) : 1)) && ((var_1_23 <= var_1_27) ? (var_1_48 == ((unsigned char) (var_1_49 - (var_1_20 + var_1_50)))) : ((var_1_7 > var_1_50) ? (var_1_48 == ((unsigned char) (((max (var_1_51 , var_1_52)) - var_1_50) - (100 - 10)))) : (var_1_48 == ((unsigned char) var_1_50))))) && (((- var_1_27) >= var_1_28) ? (var_1_53 == ((double) (var_1_30 - (var_1_54 - (min (var_1_25 , var_1_23)))))) : (var_1_53 == ((double) 128.5)))) && ((var_1_42 || (var_1_37 == var_1_17)) ? (var_1_55 == ((double) (((var_1_56 + var_1_57) + 25.5) + var_1_23))) : (var_1_55 == ((double) (var_1_21 + var_1_22))))) && ((var_1_36 == (var_1_104 ^ (max (var_1_10 , var_1_9)))) ? (var_1_58 == ((signed char) (min (var_1_59 , var_1_20)))) : (var_1_41 ? (var_1_58 == ((signed char) var_1_36)) : (var_1_58 == ((signed char) (var_1_50 + var_1_36)))))) && ((var_1_111 >= 25) ? (var_1_60 == ((signed short int) 64)) : (var_1_60 == ((signed short int) ((200 - var_1_49) + (abs (var_1_77))))))) && ((var_1_32 <= ((var_1_40 - var_1_29) + (var_1_20 / var_1_51))) ? (var_1_62 == ((signed char) ((var_1_50 + var_1_20) - 1))) : 1)) && ((var_1_15 >= var_1_28) ? (var_1_63 == ((float) var_1_57)) : 1)) && ((var_1_105 && var_1_42) ? (((min (var_1_11 , var_1_50)) >= var_1_39) ? ((last_1_var_1_64 < var_1_59) ? (var_1_64 == ((unsigned short int) (min ((max (1 , var_1_65)) , (36218 - var_1_52))))) : (var_1_64 == ((unsigned short int) (var_1_66 - (max (var_1_50 , (var_1_29 - var_1_51))))))) : 1) : (var_1_41 ? (var_1_64 == ((unsigned short int) var_1_51)) : (var_1_64 == ((unsigned short int) (abs ((var_1_52 + 25) + var_1_29))))))) && ((var_1_34 < var_1_100) ? ((((max (var_1_48 , var_1_20)) * var_1_65) <= (var_1_49 * var_1_34)) ? (var_1_67 == ((float) (abs (var_1_30 - var_1_24)))) : (var_1_67 == ((float) (min (var_1_28 , var_1_22))))) : ((var_1_73 == var_1_25) ? ((var_1_43 || (var_1_34 == var_1_60)) ? (var_1_67 == ((float) (min (var_1_24 , var_1_57)))) : 1) : (var_1_67 == ((float) 9.9999999999996E12f))))) && (var_1_42 ? ((var_1_34 > (var_1_18 * var_1_19)) ? (var_1_69 == ((float) (var_1_24 + (var_1_23 - var_1_25)))) : (var_1_69 == ((float) (var_1_25 - (var_1_30 - var_1_24))))) : 1)) && (((- var_1_3) >= (128.5 * var_1_28)) ? (var_1_70 == ((unsigned long int) ((var_1_39 + (var_1_71 + var_1_72)) - var_1_20))) : 1)) && ((((var_1_49 + var_1_19) * (min (5u , var_1_106))) != var_1_11) ? (var_1_73 == ((double) (var_1_27 - 9.999999999999625E12))) : (var_1_73 == ((double) (var_1_25 - (var_1_30 - (var_1_74 + var_1_75))))))) && (var_1_41 ? (var_1_41 ? (var_1_76 == ((float) (10.8f - var_1_24))) : 1) : 1)) && (last_1_var_1_45 ? (var_1_77 == ((unsigned long int) ((min (4133747414u , (var_1_78 - var_1_50))) - (max (var_1_39 , var_1_17))))) : 1)) && ((var_1_9 <= (var_1_39 % var_1_78)) ? (((var_1_30 / var_1_54) == ((var_1_24 + var_1_23) - var_1_74)) ? ((var_1_12 != (var_1_50 - (var_1_39 - var_1_19))) ? (var_1_79 == ((double) ((var_1_24 - var_1_75) + var_1_57))) : (var_1_79 == ((double) (var_1_74 - (var_1_24 + 1.000000000005E11))))) : (var_1_79 == ((double) (15.375 + var_1_57)))) : ((var_1_101 < var_1_57) ? (var_1_79 == ((double) var_1_25)) : (var_1_79 == ((double) var_1_54))))) && ((var_1_12 <= var_1_51) ? (var_1_80 == ((float) var_1_25)) : (var_1_110 ? ((var_1_79 != var_1_27) ? (var_1_80 == ((float) ((var_1_54 - var_1_74) - (min (var_1_24 , var_1_75))))) : ((var_1_15 >= (var_1_23 + (var_1_4 - var_1_30))) ? (var_1_80 == ((float) (var_1_28 - (var_1_24 + var_1_25)))) : (var_1_80 == ((float) (var_1_24 - var_1_25))))) : (var_1_80 == ((float) (var_1_25 + var_1_21)))))) && (((- var_1_55) >= (var_1_21 / var_1_82)) ? (var_1_45 ? (var_1_81 == ((signed long int) (var_1_9 - var_1_17))) : 1) : (var_1_81 == ((signed long int) ((max (var_1_51 , (var_1_19 + last_1_var_1_81))) + (abs (var_1_72 - var_1_66))))))) && ((var_1_45 || (var_1_33 >= var_1_102)) ? (var_1_83 == ((signed short int) -5)) : ((var_1_19 >= var_1_64) ? (var_1_83 == ((signed short int) (var_1_50 - var_1_33))) : (var_1_83 == ((signed short int) (((var_1_84 - var_1_20) + var_1_51) - (var_1_18 + var_1_33))))))) && ((var_1_7 != (min (var_1_100 , var_1_1))) ? (var_1_43 ? (var_1_85 == ((double) (var_1_25 + ((var_1_74 - var_1_75) + var_1_87)))) : (var_1_85 == ((double) (min (var_1_15 , var_1_88))))) : (var_1_85 == ((double) (var_1_25 - var_1_54))))) && (var_1_89 == ((signed short int) (((min (var_1_31 , var_1_52)) + var_1_70) + (var_1_51 + var_1_59))))) && ((var_1_48 >= ((var_1_32 + var_1_97) & (max (var_1_72 , var_1_51)))) ? (var_1_90 == ((signed long int) (var_1_19 + (max (var_1_84 , 128))))) : 1)) && ((var_1_18 >= var_1_100) ? (var_1_92 == ((unsigned char) ((var_1_85 <= (min (var_1_23 , var_1_87))) && ((var_1_49 < var_1_7) && var_1_46)))) : ((((min (var_1_3 , var_1_101)) * (var_1_28 / 3.4)) == (var_1_56 * var_1_54)) ? (var_1_92 == ((unsigned char) (((var_1_38 ^ var_1_77) < (var_1_84 + var_1_78)) || ((var_1_43 || var_1_42) && (var_1_93 && var_1_94))))) : (var_1_92 == ((unsigned char) (var_1_46 || (var_1_95 || var_1_96))))))) && ((var_1_56 > last_1_var_1_85) ? (last_1_var_1_92 ? (var_1_95 ? (var_1_97 == ((signed long int) (var_1_98 - (last_1_var_1_111 + var_1_20)))) : 1) : (var_1_97 == ((signed long int) (min ((max (var_1_71 , var_1_9)) , -64))))) : ((var_1_46 || (last_1_var_1_37 >= (- 128u))) ? (var_1_97 == ((signed long int) (var_1_17 + (var_1_84 - var_1_9)))) : 1))) && (var_1_96 ? (var_1_100 == ((unsigned long int) var_1_44)) : (var_1_100 == ((unsigned long int) var_1_107)))) && (var_1_101 == ((double) var_1_28))) && (var_1_102 == ((signed long int) var_1_7))) && (var_1_93 ? (var_1_103 == ((unsigned short int) var_1_20)) : (var_1_103 == ((unsigned short int) var_1_17)))) && (var_1_104 == ((signed short int) 4))) && (var_1_95 ? (var_1_105 == ((unsigned char) var_1_46)) : (var_1_105 == ((unsigned char) var_1_42)))) && (var_1_106 == ((unsigned char) 128))) && (var_1_107 == ((unsigned short int) var_1_102))) && (var_1_108 == ((float) var_1_23))) && (var_1_46 ? (var_1_109 == ((double) var_1_30)) : (var_1_109 == ((double) 1.5)))) && (var_1_41 ? (var_1_110 == ((unsigned char) var_1_94)) : (var_1_110 == ((unsigned char) var_1_96)))) && (((min (var_1_97 , var_1_12)) >= var_1_100) ? (var_1_111 == ((signed long int) (min (var_1_8 , ((var_1_77 + 256) - var_1_18))))) : ((((abs (var_1_85)) - var_1_54) > 7.75) ? (var_1_111 == ((signed long int) var_1_20)) : 1))
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
