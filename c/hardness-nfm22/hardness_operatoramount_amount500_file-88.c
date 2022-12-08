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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 128;
signed short int var_1_9 = -64;
signed short int var_1_12 = 24904;
float var_1_13 = 8.6;
unsigned long int var_1_14 = 3786581991;
float var_1_15 = 31.6;
float var_1_16 = -0.5;
float var_1_17 = 3.75;
float var_1_18 = 3.5;
double var_1_19 = 256.85;
double var_1_21 = 64.6;
signed long int var_1_22 = 8;
signed short int var_1_23 = 32;
signed char var_1_24 = 32;
signed char var_1_25 = 50;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
signed short int var_1_30 = 1;
signed long int var_1_31 = 8;
unsigned char var_1_32 = 10;
signed char var_1_33 = 64;
unsigned char var_1_34 = 25;
unsigned char var_1_35 = 25;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 128;
float var_1_39 = 32.8;
float var_1_40 = 8.75;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 16;
unsigned char var_1_44 = 1;
signed long int var_1_46 = -50;
double var_1_47 = 256.25;
double var_1_48 = 3.25;
signed short int var_1_49 = -2;
unsigned short int var_1_50 = 59321;
unsigned short int var_1_52 = 100;
float var_1_53 = 1.8;
float var_1_54 = 10000000000.65;
float var_1_55 = 100.5;
float var_1_56 = 0.5;
unsigned long int var_1_57 = 256;
unsigned long int var_1_58 = 1812150883;
signed char var_1_59 = -10;
unsigned long int var_1_60 = 3983326732;
signed char var_1_61 = 2;
signed char var_1_62 = 50;
double var_1_63 = 8.5;
unsigned long int var_1_64 = 1;
unsigned long int var_1_65 = 3799710315;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 128;
signed char var_1_69 = 1;
float var_1_70 = 128.5;
signed char var_1_71 = 10;
unsigned char var_1_72 = 1;
unsigned long int var_1_74 = 50;
unsigned short int var_1_75 = 53792;
unsigned long int var_1_76 = 2422252334;
unsigned char var_1_77 = 0;
unsigned short int var_1_78 = 8;
signed char var_1_79 = 100;
signed char var_1_80 = 64;
signed long int var_1_82 = -32;
signed short int var_1_83 = -4;
unsigned long int var_1_84 = 0;
double var_1_85 = 100000000000000.6;
signed short int var_1_86 = -128;
double var_1_87 = -0.5;
signed short int var_1_88 = -1;
signed short int var_1_89 = 10;
signed char var_1_90 = -10;
signed char var_1_91 = 10;
signed short int var_1_92 = -16;
unsigned char var_1_93 = 1;
unsigned short int var_1_94 = 2;
signed long int var_1_95 = 256;
unsigned long int var_1_96 = 128;
unsigned char var_1_97 = 0;
unsigned long int var_1_98 = 10;
unsigned short int var_1_99 = 5;
unsigned long int var_1_100 = 16;
double var_1_101 = 5.125;
unsigned char var_1_102 = 5;
unsigned char var_1_103 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_9 = -64;
signed short int last_1_var_1_23 = 32;
unsigned char last_1_var_1_26 = 0;
unsigned char last_1_var_1_41 = 1;
unsigned char last_1_var_1_44 = 1;
signed long int last_1_var_1_46 = -50;
signed short int last_1_var_1_49 = -2;
float last_1_var_1_53 = 1.8;
unsigned long int last_1_var_1_57 = 256;
signed char last_1_var_1_59 = -10;
unsigned char last_1_var_1_66 = 0;
unsigned char last_1_var_1_67 = 128;
signed char last_1_var_1_69 = 1;
unsigned char last_1_var_1_72 = 1;
unsigned short int last_1_var_1_78 = 8;
signed long int last_1_var_1_82 = -32;
signed short int last_1_var_1_83 = -4;
signed short int last_1_var_1_88 = -1;
signed char last_1_var_1_90 = -10;
signed short int last_1_var_1_92 = -16;
signed long int last_1_var_1_95 = 256;
unsigned char last_1_var_1_102 = 5;
unsigned char last_1_var_1_103 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req38Batch88Amount500
	if ((-50 >= last_1_var_1_78) || last_1_var_1_66) {
		if (var_1_27 || var_1_29) {
			var_1_88 = var_1_37;
		}
	} else {
		if (((min (last_1_var_1_53 , 0.8f)) >= 10000.5f) && last_1_var_1_72) {
			if (last_1_var_1_41) {
				var_1_88 = last_1_var_1_88;
			} else {
				var_1_88 = var_1_37;
			}
		} else {
			var_1_88 = last_1_var_1_44;
		}
	}


	// From: Req18Batch88Amount500
	signed char stepLocal_18 = var_1_25;
	signed long int stepLocal_17 = last_1_var_1_88;
	unsigned char stepLocal_16 = last_1_var_1_103;
	unsigned char stepLocal_15 = last_1_var_1_69 < (last_1_var_1_67 - last_1_var_1_102);
	signed long int stepLocal_14 = var_1_50 - last_1_var_1_102;
	if (stepLocal_17 > last_1_var_1_44) {
		if (var_1_38 > stepLocal_18) {
			if (var_1_27) {
				var_1_49 = last_1_var_1_92;
			} else {
				if (var_1_29) {
					if (stepLocal_14 < last_1_var_1_95) {
						var_1_49 = (min (var_1_34 , var_1_38));
					}
				} else {
					if (stepLocal_15 && ((var_1_35 >> last_1_var_1_67) > last_1_var_1_49)) {
						var_1_49 = ((abs (last_1_var_1_44)) + last_1_var_1_23);
					} else {
						if (var_1_28 || stepLocal_16) {
							var_1_49 = (max (last_1_var_1_59 , ((min (var_1_37 , last_1_var_1_92)) + (min (var_1_35 , var_1_36)))));
						} else {
							var_1_49 = (max (last_1_var_1_92 , var_1_34));
						}
					}
				}
			}
		}
	}


	// From: Req47Batch88Amount500
	if (var_1_42) {
		var_1_98 = var_1_49;
	} else {
		var_1_98 = var_1_58;
	}


	// From: Req14Batch88Amount500
	signed long int stepLocal_13 = last_1_var_1_9;
	unsigned char stepLocal_12 = var_1_34 <= last_1_var_1_90;
	if (((1 & last_1_var_1_46) * last_1_var_1_46) > stepLocal_13) {
		if (stepLocal_12 && (-2 < var_1_36)) {
			var_1_44 = var_1_35;
		}
	} else {
		var_1_44 = (max (var_1_37 , var_1_36));
	}


	// From: Req32Batch88Amount500
	signed char stepLocal_34 = var_1_61;
	if (stepLocal_34 > ((var_1_79 - var_1_24) - (var_1_80 - var_1_62))) {
		var_1_78 = ((max (var_1_44 , var_1_61)) + var_1_25);
	}


	// From: Req45Batch88Amount500
	var_1_96 = var_1_78;


	// From: Req44Batch88Amount500
	var_1_95 = last_1_var_1_83;


	// From: Req7Batch88Amount500
	var_1_26 = (last_1_var_1_26 || (var_1_27 || (var_1_28 && var_1_29)));


	// From: Req10Batch88Amount500
	if (((10 - var_1_24) / var_1_33) > var_1_25) {
		if (var_1_29) {
			var_1_32 = (max (var_1_25 , ((min (var_1_24 , var_1_34)) + var_1_35)));
		} else {
			var_1_32 = ((min ((min (var_1_36 , var_1_37)) , var_1_38)) - (abs (max (var_1_34 , var_1_25))));
		}
	} else {
		var_1_32 = (min (var_1_38 , (max (var_1_35 , var_1_25))));
	}


	// From: Req12Batch88Amount500
	if ((var_1_38 - (abs (var_1_35))) == 64) {
		var_1_41 = (var_1_29 && var_1_42);
	} else {
		var_1_41 = ((var_1_29 && var_1_27) && var_1_28);
	}


	// From: Req15Batch88Amount500
	if (((- 256u) + (var_1_38 * var_1_34)) <= last_1_var_1_46) {
		var_1_46 = (var_1_36 + var_1_24);
	}


	// From: Req16Batch88Amount500
	if (! var_1_27) {
		var_1_47 = (max (var_1_15 , (var_1_18 - var_1_17)));
	}


	// From: Req17Batch88Amount500
	if (var_1_29) {
		var_1_48 = var_1_17;
	} else {
		var_1_48 = (var_1_17 - var_1_18);
	}


	// From: Req22Batch88Amount500
	if (! var_1_28) {
		if (var_1_56 <= ((- var_1_40) + var_1_21)) {
			var_1_57 = (max (((var_1_25 + last_1_var_1_57) + var_1_32) , 256u));
		} else {
			var_1_57 = ((1u + var_1_37) + (var_1_58 - var_1_36));
		}
	} else {
		var_1_57 = (var_1_34 + var_1_12);
	}


	// From: Req26Batch88Amount500
	var_1_66 = (! var_1_42);


	// From: Req37Batch88Amount500
	unsigned char stepLocal_39 = var_1_36;
	if (var_1_26) {
		if (stepLocal_39 < var_1_37) {
			var_1_87 = (min ((max (var_1_16 , var_1_55)) , (var_1_17 - 99.2)));
		}
	}


	// From: Req40Batch88Amount500
	if (var_1_27) {
		var_1_90 = var_1_91;
	}


	// From: Req41Batch88Amount500
	var_1_92 = var_1_44;


	// From: Req42Batch88Amount500
	if (var_1_28) {
		var_1_93 = var_1_25;
	}


	// From: Req43Batch88Amount500
	if (var_1_26) {
		var_1_94 = var_1_96;
	} else {
		var_1_94 = var_1_32;
	}


	// From: Req46Batch88Amount500
	if (var_1_66) {
		var_1_97 = var_1_27;
	} else {
		var_1_97 = var_1_27;
	}


	// From: Req48Batch88Amount500
	var_1_99 = var_1_37;


	// From: Req50Batch88Amount500
	if (var_1_97) {
		var_1_101 = var_1_15;
	} else {
		var_1_101 = var_1_56;
	}


	// From: Req25Batch88Amount500
	if ((var_1_25 * var_1_96) <= (-100 + var_1_24)) {
		var_1_64 = ((var_1_65 - var_1_35) - (min (var_1_49 , var_1_37)));
	}


	// From: Req24Batch88Amount500
	signed long int stepLocal_25 = var_1_37 * var_1_93;
	if ((var_1_14 * (var_1_24 << var_1_96)) >= stepLocal_25) {
		var_1_63 = var_1_18;
	} else {
		var_1_63 = 16.8;
	}


	// From: Req3Batch88Amount500
	unsigned long int stepLocal_3 = (var_1_14 - var_1_44) ^ var_1_46;
	if (stepLocal_3 <= var_1_93) {
		var_1_13 = (max (var_1_15 , (min (999.6f , var_1_16))));
	} else {
		var_1_13 = ((var_1_17 + var_1_18) - (abs (var_1_15)));
	}


	// From: Req6Batch88Amount500
	signed long int stepLocal_6 = (var_1_90 | var_1_32) & var_1_78;
	if ((var_1_16 * var_1_17) < -0.25f) {
		if (((64 - var_1_24) - var_1_25) > stepLocal_6) {
			var_1_23 = (var_1_12 - var_1_24);
		}
	} else {
		var_1_23 = (max (var_1_90 , -16));
	}


	// From: Req13Batch88Amount500
	if (var_1_15 != var_1_101) {
		var_1_43 = (abs (var_1_38));
	}


	// From: Req20Batch88Amount500
	unsigned char stepLocal_20 = var_1_97;
	if (((- var_1_17) > var_1_18) && stepLocal_20) {
		var_1_53 = (min ((abs (var_1_18)) , var_1_21));
	}


	// From: Req27Batch88Amount500
	signed long int stepLocal_26 = var_1_12 | var_1_38;
	if (var_1_14 <= stepLocal_26) {
		if (var_1_18 <= (- var_1_63)) {
			var_1_67 = (min ((max (var_1_38 , var_1_61)) , (var_1_36 - var_1_25)));
		}
	}


	// From: Req35Batch88Amount500
	unsigned char stepLocal_37 = var_1_70 != var_1_16;
	if ((var_1_65 > var_1_93) && stepLocal_37) {
		if ((var_1_47 / (max (var_1_70 , var_1_85))) == var_1_15) {
			var_1_84 = (min (var_1_76 , var_1_34));
		} else {
			var_1_84 = (min ((var_1_24 + var_1_50) , (var_1_76 - (var_1_58 - var_1_80))));
		}
	}


	// From: Req36Batch88Amount500
	signed char stepLocal_38 = var_1_90;
	if (stepLocal_38 > -10) {
		var_1_86 = var_1_62;
	} else {
		var_1_86 = ((min (-2 , var_1_84)) + var_1_32);
	}


	// From: Req51Batch88Amount500
	if (var_1_24 >= var_1_43) {
		if (var_1_63 == var_1_101) {
			var_1_102 = (abs (var_1_36));
		}
	} else {
		var_1_102 = var_1_61;
	}


	// From: Req28Batch88Amount500
	if (var_1_53 >= (var_1_15 / var_1_70)) {
		if (var_1_87 <= var_1_15) {
			if (var_1_102 > var_1_37) {
				var_1_69 = (max (var_1_24 , var_1_62));
			} else {
				var_1_69 = (max ((-10 + (var_1_62 - var_1_61)) , (var_1_24 - var_1_71)));
			}
		} else {
			var_1_69 = (min ((var_1_61 + var_1_62) , -10));
		}
	}


	// From: Req1Batch88Amount500
	signed long int stepLocal_0 = abs (var_1_78);
	if (var_1_44 >= stepLocal_0) {
		var_1_1 = (max (((var_1_32 + var_1_69) + var_1_44) , var_1_32));
	} else {
		var_1_1 = (var_1_44 + var_1_69);
	}


	// From: Req39Batch88Amount500
	if (var_1_29) {
		var_1_89 = var_1_102;
	} else {
		var_1_89 = var_1_24;
	}


	// From: Req49Batch88Amount500
	var_1_100 = var_1_89;


	// From: Req52Batch88Amount500
	if ((var_1_89 + (var_1_84 + var_1_44)) > var_1_92) {
		var_1_103 = (var_1_27 && var_1_29);
	}


	// From: Req21Batch88Amount500
	unsigned char stepLocal_22 = var_1_42;
	unsigned char stepLocal_21 = var_1_67;
	if ((var_1_34 + var_1_98) != stepLocal_21) {
		var_1_54 = (min (var_1_16 , (var_1_21 + var_1_17)));
	} else {
		if (var_1_27) {
			if ((var_1_38 <= (max (var_1_64 , var_1_102))) && stepLocal_22) {
				var_1_54 = (max (var_1_55 , var_1_15));
			} else {
				var_1_54 = (max ((min ((var_1_18 + var_1_17) , 0.8f)) , var_1_16));
			}
		} else {
			var_1_54 = (max (var_1_55 , (min (var_1_15 , (var_1_21 + var_1_56)))));
		}
	}


	// From: Req2Batch88Amount500
	unsigned char stepLocal_2 = var_1_102;
	unsigned char stepLocal_1 = var_1_93;
	if (((min (var_1_69 , last_1_var_1_9)) * var_1_93) <= stepLocal_1) {
		if ((min (var_1_93 , last_1_var_1_9)) == stepLocal_2) {
			var_1_9 = (-2 + (var_1_44 - var_1_32));
		}
	} else {
		if (! var_1_66) {
			if (var_1_66) {
				var_1_9 = ((var_1_12 - (abs (var_1_93))) - 2);
			}
		} else {
			var_1_9 = (max ((max (var_1_93 , var_1_32)) , var_1_44));
		}
	}


	// From: Req4Batch88Amount500
	unsigned char stepLocal_5 = var_1_44;
	unsigned char stepLocal_4 = var_1_67;
	if (var_1_9 > stepLocal_4) {
		var_1_19 = ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25)))));
	} else {
		if ((5 / var_1_12) <= stepLocal_5) {
			var_1_19 = ((var_1_18 - 99.75) + 5.2);
		}
	}


	// From: Req5Batch88Amount500
	if (var_1_16 == (max (var_1_18 , var_1_54))) {
		if (! var_1_97) {
			var_1_22 = var_1_44;
		}
	} else {
		var_1_22 = var_1_44;
	}


	// From: Req9Batch88Amount500
	signed long int stepLocal_9 = var_1_25 + var_1_12;
	unsigned char stepLocal_8 = var_1_14 != var_1_12;
	if (! (var_1_27 || (var_1_16 < var_1_15))) {
		if (var_1_93 == stepLocal_9) {
			if (stepLocal_8 && (-16 < var_1_44)) {
				var_1_31 = ((var_1_12 - var_1_67) + var_1_93);
			}
		}
	} else {
		var_1_31 = (max ((2 + var_1_9) , var_1_24));
	}


	// From: Req8Batch88Amount500
	signed short int stepLocal_7 = var_1_12;
	if (stepLocal_7 == (var_1_24 + var_1_25)) {
		if (var_1_54 > var_1_16) {
			if (var_1_54 >= var_1_21) {
				var_1_30 = (abs (var_1_67 - var_1_93));
			}
		}
	} else {
		var_1_30 = (var_1_44 + var_1_69);
	}


	// From: Req34Batch88Amount500
	signed long int stepLocal_36 = (var_1_61 % -2) << var_1_102;
	signed long int stepLocal_35 = (var_1_79 + var_1_30) + -4;
	if (var_1_32 > stepLocal_36) {
		if (stepLocal_35 < var_1_95) {
			var_1_83 = (min (var_1_79 , (var_1_38 + (max (var_1_57 , var_1_37)))));
		}
	} else {
		var_1_83 = -2;
	}


	// From: Req19Batch88Amount500
	unsigned short int stepLocal_19 = var_1_43;
	if ((var_1_12 / var_1_14) <= stepLocal_19) {
		var_1_52 = (abs (var_1_31));
	} else {
		var_1_52 = var_1_83;
	}


	// From: Req30Batch88Amount500
	if (! var_1_103) {
		if (var_1_35 != var_1_102) {
			if ((var_1_75 - (19185 - var_1_44)) == var_1_95) {
				var_1_74 = ((min (var_1_65 , var_1_76)) - (var_1_58 - var_1_24));
			}
		} else {
			var_1_74 = (max (((var_1_34 + var_1_61) + (var_1_37 + var_1_44)) , var_1_83));
		}
	} else {
		if (var_1_70 > (var_1_47 * var_1_17)) {
			var_1_74 = var_1_34;
		}
	}


	// From: Req23Batch88Amount500
	signed long int stepLocal_24 = - var_1_12;
	unsigned long int stepLocal_23 = (var_1_60 - var_1_92) - var_1_36;
	if (! var_1_41) {
		if (stepLocal_24 != var_1_25) {
			if (stepLocal_23 <= var_1_74) {
				var_1_59 = (var_1_24 - (var_1_61 + var_1_62));
			} else {
				var_1_59 = (max ((min (var_1_62 , var_1_24)) , var_1_61));
			}
		} else {
			var_1_59 = (var_1_62 + 8);
		}
	}


	// From: Req31Batch88Amount500
	signed short int stepLocal_33 = var_1_12;
	signed short int stepLocal_32 = var_1_12;
	unsigned char stepLocal_31 = var_1_42;
	if (var_1_28) {
		if (stepLocal_31 && var_1_29) {
			if ((4 - (min (var_1_98 , var_1_67))) == stepLocal_32) {
				var_1_77 = ((! var_1_42) && (var_1_29 || var_1_27));
			} else {
				var_1_77 = (var_1_42 || (! var_1_27));
			}
		} else {
			var_1_77 = (! var_1_29);
		}
	} else {
		if (var_1_74 > stepLocal_33) {
			var_1_77 = (! (! (var_1_29 && var_1_27)));
		}
	}


	// From: Req33Batch88Amount500
	if (var_1_77) {
		var_1_82 = (var_1_93 + var_1_96);
	} else {
		var_1_82 = ((max (last_1_var_1_82 , var_1_22)) + (max (var_1_69 , var_1_33)));
	}


	// From: Req29Batch88Amount500
	unsigned char stepLocal_30 = var_1_44;
	unsigned long int stepLocal_29 = var_1_65;
	signed short int stepLocal_28 = var_1_88;
	unsigned long int stepLocal_27 = ~ (- var_1_60);
	if (stepLocal_27 >= (var_1_24 % (min (4u , 256u)))) {
		if ((var_1_14 * (var_1_62 * 5)) == stepLocal_29) {
			if ((abs (var_1_62 + var_1_61)) == stepLocal_30) {
				var_1_72 = (var_1_66 || var_1_27);
			}
		} else {
			if ((var_1_44 / var_1_33) >= stepLocal_28) {
				var_1_72 = (var_1_29 && var_1_27);
			} else {
				var_1_72 = (((var_1_102 < 1u) && var_1_77) && var_1_42);
			}
		}
	} else {
		var_1_72 = (var_1_27 && var_1_28);
	}


	// From: Req11Batch88Amount500
	unsigned char stepLocal_11 = var_1_27;
	signed long int stepLocal_10 = var_1_82;
	if ((- var_1_33) >= stepLocal_10) {
		if (((var_1_17 - var_1_18) < var_1_21) && stepLocal_11) {
			if ((abs (max (256.25 , 255.55))) > (- var_1_18)) {
				var_1_39 = ((max ((min (var_1_18 , var_1_17)) , var_1_21)) + (7.5f + var_1_40));
			}
		}
	}
}



void updateVariables() {
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 16382);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 64);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691390e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 32767);
	assume_abort_if_not(var_1_50 <= 65535);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -922337.2036854765600e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 3221225471);
	assume_abort_if_not(var_1_60 <= 4294967295);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 3221225470);
	assume_abort_if_not(var_1_65 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
	assume_abort_if_not(var_1_70 != 0.0F);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 126);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 32767);
	assume_abort_if_not(var_1_75 <= 65535);
	var_1_76 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_76 >= 2147483647);
	assume_abort_if_not(var_1_76 <= 4294967294);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 63);
	assume_abort_if_not(var_1_79 <= 127);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 63);
	assume_abort_if_not(var_1_80 <= 127);
	var_1_85 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_85 >= -922337.2036854776000e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854776000e+12F && var_1_85 >= 1.0e-20F ));
	assume_abort_if_not(var_1_85 != 0.0F);
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= -127);
	assume_abort_if_not(var_1_91 <= 126);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_44 >= (abs (var_1_78))) ? (var_1_1 == ((signed short int) (max (((var_1_32 + var_1_69) + var_1_44) , var_1_32)))) : (var_1_1 == ((signed short int) (var_1_44 + var_1_69)))) && ((((min (var_1_69 , last_1_var_1_9)) * var_1_93) <= var_1_93) ? (((min (var_1_93 , last_1_var_1_9)) == var_1_102) ? (var_1_9 == ((signed short int) (-2 + (var_1_44 - var_1_32)))) : 1) : ((! var_1_66) ? (var_1_66 ? (var_1_9 == ((signed short int) ((var_1_12 - (abs (var_1_93))) - 2))) : 1) : (var_1_9 == ((signed short int) (max ((max (var_1_93 , var_1_32)) , var_1_44))))))) && ((((var_1_14 - var_1_44) ^ var_1_46) <= var_1_93) ? (var_1_13 == ((float) (max (var_1_15 , (min (999.6f , var_1_16)))))) : (var_1_13 == ((float) ((var_1_17 + var_1_18) - (abs (var_1_15))))))) && ((var_1_9 > var_1_67) ? (var_1_19 == ((double) ((min (var_1_17 , (var_1_21 + 4.6))) + (max (49.38 , (min (var_1_18 , 128.25))))))) : (((5 / var_1_12) <= var_1_44) ? (var_1_19 == ((double) ((var_1_18 - 99.75) + 5.2))) : 1))) && ((var_1_16 == (max (var_1_18 , var_1_54))) ? ((! var_1_97) ? (var_1_22 == ((signed long int) var_1_44)) : 1) : (var_1_22 == ((signed long int) var_1_44)))) && (((var_1_16 * var_1_17) < -0.25f) ? ((((64 - var_1_24) - var_1_25) > ((var_1_90 | var_1_32) & var_1_78)) ? (var_1_23 == ((signed short int) (var_1_12 - var_1_24))) : 1) : (var_1_23 == ((signed short int) (max (var_1_90 , -16)))))) && (var_1_26 == ((unsigned char) (last_1_var_1_26 || (var_1_27 || (var_1_28 && var_1_29)))))) && ((var_1_12 == (var_1_24 + var_1_25)) ? ((var_1_54 > var_1_16) ? ((var_1_54 >= var_1_21) ? (var_1_30 == ((signed short int) (abs (var_1_67 - var_1_93)))) : 1) : 1) : (var_1_30 == ((signed short int) (var_1_44 + var_1_69))))) && ((! (var_1_27 || (var_1_16 < var_1_15))) ? ((var_1_93 == (var_1_25 + var_1_12)) ? (((var_1_14 != var_1_12) && (-16 < var_1_44)) ? (var_1_31 == ((signed long int) ((var_1_12 - var_1_67) + var_1_93))) : 1) : 1) : (var_1_31 == ((signed long int) (max ((2 + var_1_9) , var_1_24)))))) && ((((10 - var_1_24) / var_1_33) > var_1_25) ? (var_1_29 ? (var_1_32 == ((unsigned char) (max (var_1_25 , ((min (var_1_24 , var_1_34)) + var_1_35))))) : (var_1_32 == ((unsigned char) ((min ((min (var_1_36 , var_1_37)) , var_1_38)) - (abs (max (var_1_34 , var_1_25))))))) : (var_1_32 == ((unsigned char) (min (var_1_38 , (max (var_1_35 , var_1_25)))))))) && (((- var_1_33) >= var_1_82) ? ((((var_1_17 - var_1_18) < var_1_21) && var_1_27) ? (((abs (max (256.25 , 255.55))) > (- var_1_18)) ? (var_1_39 == ((float) ((max ((min (var_1_18 , var_1_17)) , var_1_21)) + (7.5f + var_1_40)))) : 1) : 1) : 1)) && (((var_1_38 - (abs (var_1_35))) == 64) ? (var_1_41 == ((unsigned char) (var_1_29 && var_1_42))) : (var_1_41 == ((unsigned char) ((var_1_29 && var_1_27) && var_1_28))))) && ((var_1_15 != var_1_101) ? (var_1_43 == ((unsigned short int) (abs (var_1_38)))) : 1)) && ((((1 & last_1_var_1_46) * last_1_var_1_46) > last_1_var_1_9) ? (((var_1_34 <= last_1_var_1_90) && (-2 < var_1_36)) ? (var_1_44 == ((unsigned char) var_1_35)) : 1) : (var_1_44 == ((unsigned char) (max (var_1_37 , var_1_36)))))) && ((((- 256u) + (var_1_38 * var_1_34)) <= last_1_var_1_46) ? (var_1_46 == ((signed long int) (var_1_36 + var_1_24))) : 1)) && ((! var_1_27) ? (var_1_47 == ((double) (max (var_1_15 , (var_1_18 - var_1_17))))) : 1)) && (var_1_29 ? (var_1_48 == ((double) var_1_17)) : (var_1_48 == ((double) (var_1_17 - var_1_18))))) && ((last_1_var_1_88 > last_1_var_1_44) ? ((var_1_38 > var_1_25) ? (var_1_27 ? (var_1_49 == ((signed short int) last_1_var_1_92)) : (var_1_29 ? (((var_1_50 - last_1_var_1_102) < last_1_var_1_95) ? (var_1_49 == ((signed short int) (min (var_1_34 , var_1_38)))) : 1) : (((last_1_var_1_69 < (last_1_var_1_67 - last_1_var_1_102)) && ((var_1_35 >> last_1_var_1_67) > last_1_var_1_49)) ? (var_1_49 == ((signed short int) ((abs (last_1_var_1_44)) + last_1_var_1_23))) : ((var_1_28 || last_1_var_1_103) ? (var_1_49 == ((signed short int) (max (last_1_var_1_59 , ((min (var_1_37 , last_1_var_1_92)) + (min (var_1_35 , var_1_36))))))) : (var_1_49 == ((signed short int) (max (last_1_var_1_92 , var_1_34)))))))) : 1) : 1)) && (((var_1_12 / var_1_14) <= var_1_43) ? (var_1_52 == ((unsigned short int) (abs (var_1_31)))) : (var_1_52 == ((unsigned short int) var_1_83)))) && ((((- var_1_17) > var_1_18) && var_1_97) ? (var_1_53 == ((float) (min ((abs (var_1_18)) , var_1_21)))) : 1)) && (((var_1_34 + var_1_98) != var_1_67) ? (var_1_54 == ((float) (min (var_1_16 , (var_1_21 + var_1_17))))) : (var_1_27 ? (((var_1_38 <= (max (var_1_64 , var_1_102))) && var_1_42) ? (var_1_54 == ((float) (max (var_1_55 , var_1_15)))) : (var_1_54 == ((float) (max ((min ((var_1_18 + var_1_17) , 0.8f)) , var_1_16))))) : (var_1_54 == ((float) (max (var_1_55 , (min (var_1_15 , (var_1_21 + var_1_56)))))))))) && ((! var_1_28) ? ((var_1_56 <= ((- var_1_40) + var_1_21)) ? (var_1_57 == ((unsigned long int) (max (((var_1_25 + last_1_var_1_57) + var_1_32) , 256u)))) : (var_1_57 == ((unsigned long int) ((1u + var_1_37) + (var_1_58 - var_1_36))))) : (var_1_57 == ((unsigned long int) (var_1_34 + var_1_12))))) && ((! var_1_41) ? (((- var_1_12) != var_1_25) ? ((((var_1_60 - var_1_92) - var_1_36) <= var_1_74) ? (var_1_59 == ((signed char) (var_1_24 - (var_1_61 + var_1_62)))) : (var_1_59 == ((signed char) (max ((min (var_1_62 , var_1_24)) , var_1_61))))) : (var_1_59 == ((signed char) (var_1_62 + 8)))) : 1)) && (((var_1_14 * (var_1_24 << var_1_96)) >= (var_1_37 * var_1_93)) ? (var_1_63 == ((double) var_1_18)) : (var_1_63 == ((double) 16.8)))) && (((var_1_25 * var_1_96) <= (-100 + var_1_24)) ? (var_1_64 == ((unsigned long int) ((var_1_65 - var_1_35) - (min (var_1_49 , var_1_37))))) : 1)) && (var_1_66 == ((unsigned char) (! var_1_42)))) && ((var_1_14 <= (var_1_12 | var_1_38)) ? ((var_1_18 <= (- var_1_63)) ? (var_1_67 == ((unsigned char) (min ((max (var_1_38 , var_1_61)) , (var_1_36 - var_1_25))))) : 1) : 1)) && ((var_1_53 >= (var_1_15 / var_1_70)) ? ((var_1_87 <= var_1_15) ? ((var_1_102 > var_1_37) ? (var_1_69 == ((signed char) (max (var_1_24 , var_1_62)))) : (var_1_69 == ((signed char) (max ((-10 + (var_1_62 - var_1_61)) , (var_1_24 - var_1_71)))))) : (var_1_69 == ((signed char) (min ((var_1_61 + var_1_62) , -10))))) : 1)) && (((~ (- var_1_60)) >= (var_1_24 % (min (4u , 256u)))) ? (((var_1_14 * (var_1_62 * 5)) == var_1_65) ? (((abs (var_1_62 + var_1_61)) == var_1_44) ? (var_1_72 == ((unsigned char) (var_1_66 || var_1_27))) : 1) : (((var_1_44 / var_1_33) >= var_1_88) ? (var_1_72 == ((unsigned char) (var_1_29 && var_1_27))) : (var_1_72 == ((unsigned char) (((var_1_102 < 1u) && var_1_77) && var_1_42))))) : (var_1_72 == ((unsigned char) (var_1_27 && var_1_28))))) && ((! var_1_103) ? ((var_1_35 != var_1_102) ? (((var_1_75 - (19185 - var_1_44)) == var_1_95) ? (var_1_74 == ((unsigned long int) ((min (var_1_65 , var_1_76)) - (var_1_58 - var_1_24)))) : 1) : (var_1_74 == ((unsigned long int) (max (((var_1_34 + var_1_61) + (var_1_37 + var_1_44)) , var_1_83))))) : ((var_1_70 > (var_1_47 * var_1_17)) ? (var_1_74 == ((unsigned long int) var_1_34)) : 1))) && (var_1_28 ? ((var_1_42 && var_1_29) ? (((4 - (min (var_1_98 , var_1_67))) == var_1_12) ? (var_1_77 == ((unsigned char) ((! var_1_42) && (var_1_29 || var_1_27)))) : (var_1_77 == ((unsigned char) (var_1_42 || (! var_1_27))))) : (var_1_77 == ((unsigned char) (! var_1_29)))) : ((var_1_74 > var_1_12) ? (var_1_77 == ((unsigned char) (! (! (var_1_29 && var_1_27))))) : 1))) && ((var_1_61 > ((var_1_79 - var_1_24) - (var_1_80 - var_1_62))) ? (var_1_78 == ((unsigned short int) ((max (var_1_44 , var_1_61)) + var_1_25))) : 1)) && (var_1_77 ? (var_1_82 == ((signed long int) (var_1_93 + var_1_96))) : (var_1_82 == ((signed long int) ((max (last_1_var_1_82 , var_1_22)) + (max (var_1_69 , var_1_33))))))) && ((var_1_32 > ((var_1_61 % -2) << var_1_102)) ? ((((var_1_79 + var_1_30) + -4) < var_1_95) ? (var_1_83 == ((signed short int) (min (var_1_79 , (var_1_38 + (max (var_1_57 , var_1_37))))))) : 1) : (var_1_83 == ((signed short int) -2)))) && (((var_1_65 > var_1_93) && (var_1_70 != var_1_16)) ? (((var_1_47 / (max (var_1_70 , var_1_85))) == var_1_15) ? (var_1_84 == ((unsigned long int) (min (var_1_76 , var_1_34)))) : (var_1_84 == ((unsigned long int) (min ((var_1_24 + var_1_50) , (var_1_76 - (var_1_58 - var_1_80))))))) : 1)) && ((var_1_90 > -10) ? (var_1_86 == ((signed short int) var_1_62)) : (var_1_86 == ((signed short int) ((min (-2 , var_1_84)) + var_1_32))))) && (var_1_26 ? ((var_1_36 < var_1_37) ? (var_1_87 == ((double) (min ((max (var_1_16 , var_1_55)) , (var_1_17 - 99.2))))) : 1) : 1)) && (((-50 >= last_1_var_1_78) || last_1_var_1_66) ? ((var_1_27 || var_1_29) ? (var_1_88 == ((signed short int) var_1_37)) : 1) : ((((min (last_1_var_1_53 , 0.8f)) >= 10000.5f) && last_1_var_1_72) ? (last_1_var_1_41 ? (var_1_88 == ((signed short int) last_1_var_1_88)) : (var_1_88 == ((signed short int) var_1_37))) : (var_1_88 == ((signed short int) last_1_var_1_44))))) && (var_1_29 ? (var_1_89 == ((signed short int) var_1_102)) : (var_1_89 == ((signed short int) var_1_24)))) && (var_1_27 ? (var_1_90 == ((signed char) var_1_91)) : 1)) && (var_1_92 == ((signed short int) var_1_44))) && (var_1_28 ? (var_1_93 == ((unsigned char) var_1_25)) : 1)) && (var_1_26 ? (var_1_94 == ((unsigned short int) var_1_96)) : (var_1_94 == ((unsigned short int) var_1_32)))) && (var_1_95 == ((signed long int) last_1_var_1_83))) && (var_1_96 == ((unsigned long int) var_1_78))) && (var_1_66 ? (var_1_97 == ((unsigned char) var_1_27)) : (var_1_97 == ((unsigned char) var_1_27)))) && (var_1_42 ? (var_1_98 == ((unsigned long int) var_1_49)) : (var_1_98 == ((unsigned long int) var_1_58)))) && (var_1_99 == ((unsigned short int) var_1_37))) && (var_1_100 == ((unsigned long int) var_1_89))) && (var_1_97 ? (var_1_101 == ((double) var_1_15)) : (var_1_101 == ((double) var_1_56)))) && ((var_1_24 >= var_1_43) ? ((var_1_63 == var_1_101) ? (var_1_102 == ((unsigned char) (abs (var_1_36)))) : 1) : (var_1_102 == ((unsigned char) var_1_61)))) && (((var_1_89 + (var_1_84 + var_1_44)) > var_1_92) ? (var_1_103 == ((unsigned char) (var_1_27 && var_1_29))) : 1)
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
