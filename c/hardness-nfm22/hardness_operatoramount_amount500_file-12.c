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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 100;
signed short int var_1_9 = -1;
signed long int var_1_11 = 100000;
float var_1_12 = 1.6;
float var_1_13 = 100.66;
float var_1_14 = 16.95;
float var_1_15 = 15.5;
unsigned char var_1_17 = 1;
float var_1_18 = -0.8;
float var_1_19 = 0.0;
signed short int var_1_20 = -5;
unsigned long int var_1_21 = 2;
signed short int var_1_23 = -128;
signed long int var_1_24 = 1;
float var_1_25 = 8.4;
signed char var_1_26 = 32;
double var_1_27 = 255.5;
double var_1_28 = 9999.5;
float var_1_29 = 7.625;
unsigned long int var_1_30 = 0;
unsigned long int var_1_31 = 2518039272;
unsigned long int var_1_33 = 1085424033;
unsigned long int var_1_34 = 1698662291;
unsigned long int var_1_36 = 200;
float var_1_37 = 0.8;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 64;
float var_1_40 = 255.5;
unsigned long int var_1_41 = 0;
unsigned long int var_1_43 = 4119510085;
float var_1_44 = 32.25;
unsigned short int var_1_46 = 8;
unsigned short int var_1_47 = 61147;
unsigned short int var_1_48 = 57949;
float var_1_49 = 99999999.25;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 200;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned short int var_1_54 = 5;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
signed short int var_1_58 = -200;
float var_1_61 = 100.75;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 200;
signed long int var_1_65 = 64;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 1;
float var_1_69 = 0.7;
float var_1_72 = 31.5;
signed char var_1_73 = 10;
signed char var_1_74 = 32;
signed char var_1_75 = 8;
signed char var_1_76 = 1;
signed char var_1_77 = 50;
signed char var_1_78 = -1;
signed char var_1_79 = 2;
signed char var_1_80 = 25;
signed char var_1_82 = 2;
signed long int var_1_83 = -10;
unsigned char var_1_86 = 8;
unsigned char var_1_87 = 128;
double var_1_88 = 5.4;
signed short int var_1_89 = -128;
double var_1_90 = 0.4;
double var_1_91 = 4.875;
double var_1_92 = 50.25;
unsigned char var_1_93 = 0;
unsigned char var_1_94 = 10;
float var_1_95 = -0.625;
unsigned char var_1_96 = 8;
unsigned char var_1_97 = 1;
signed char var_1_98 = 32;
signed short int var_1_99 = 256;
float var_1_100 = 256.8;
unsigned char var_1_101 = 1;
double var_1_102 = 3.15;
unsigned char var_1_103 = 8;
float var_1_104 = 64.375;
signed short int var_1_105 = -1;
double var_1_106 = 99.5;
unsigned char var_1_107 = 16;
unsigned char var_1_108 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_11 = 100000;
signed short int last_1_var_1_20 = -5;
unsigned long int last_1_var_1_21 = 2;
signed short int last_1_var_1_23 = -128;
float last_1_var_1_29 = 7.625;
unsigned long int last_1_var_1_36 = 200;
float last_1_var_1_37 = 0.8;
unsigned long int last_1_var_1_41 = 0;
float last_1_var_1_49 = 99999999.25;
unsigned char last_1_var_1_55 = 1;
unsigned char last_1_var_1_62 = 0;
unsigned long int last_1_var_1_64 = 200;
signed long int last_1_var_1_65 = 64;
unsigned char last_1_var_1_66 = 1;
unsigned char last_1_var_1_68 = 1;
signed long int last_1_var_1_83 = -10;
unsigned char last_1_var_1_86 = 8;
unsigned char last_1_var_1_93 = 0;
unsigned char last_1_var_1_96 = 8;
signed char last_1_var_1_98 = 32;
signed short int last_1_var_1_99 = 256;
float last_1_var_1_100 = 256.8;
unsigned char last_1_var_1_103 = 8;
unsigned char last_1_var_1_107 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req51Batch12Amount500
	if (var_1_56 || (last_1_var_1_64 != 10)) {
		if (last_1_var_1_103 >= last_1_var_1_86) {
			var_1_108 = (! var_1_67);
		} else {
			if (last_1_var_1_21 >= (var_1_77 << var_1_51)) {
				var_1_108 = var_1_56;
			} else {
				var_1_108 = var_1_63;
			}
		}
	} else {
		var_1_108 = var_1_67;
	}


	// From: Req13Batch12Amount500
	unsigned long int stepLocal_12 = last_1_var_1_21;
	signed long int stepLocal_11 = last_1_var_1_23;
	if (! last_1_var_1_66) {
		if (last_1_var_1_99 <= stepLocal_12) {
			if ((min ((last_1_var_1_49 / var_1_19) , var_1_18)) != last_1_var_1_29) {
				var_1_30 = (var_1_31 - last_1_var_1_107);
			}
		} else {
			var_1_30 = (abs (last_1_var_1_23));
		}
	} else {
		if (last_1_var_1_21 <= stepLocal_11) {
			var_1_30 = (abs ((var_1_33 + var_1_34) - last_1_var_1_93));
		} else {
			var_1_30 = (last_1_var_1_107 + last_1_var_1_107);
		}
	}


	// From: Req18Batch12Amount500
	if ((4 >> var_1_30) >= var_1_30) {
		if ((- var_1_30) > var_1_38) {
			var_1_49 = ((min (var_1_40 , (var_1_14 + var_1_13))) - var_1_15);
		} else {
			var_1_49 = 4.375f;
		}
	}


	// From: Req1Batch12Amount500
	signed long int stepLocal_4 = last_1_var_1_98;
	unsigned char stepLocal_3 = (last_1_var_1_36 * last_1_var_1_93) >= last_1_var_1_98;
	unsigned long int stepLocal_2 = (last_1_var_1_64 / var_1_9) + last_1_var_1_93;
	signed long int stepLocal_1 = last_1_var_1_65;
	unsigned long int stepLocal_0 = 4 + last_1_var_1_36;
	if (stepLocal_3 && (! last_1_var_1_68)) {
		var_1_1 = (last_1_var_1_93 - (max (last_1_var_1_36 , last_1_var_1_93)));
	} else {
		if ((65169 - last_1_var_1_36) < stepLocal_1) {
			var_1_1 = ((min (last_1_var_1_36 , last_1_var_1_93)) - last_1_var_1_93);
		} else {
			if (stepLocal_0 != (16 * last_1_var_1_93)) {
				if (last_1_var_1_93 != stepLocal_4) {
					if (stepLocal_2 >= last_1_var_1_93) {
						var_1_1 = last_1_var_1_96;
					}
				} else {
					var_1_1 = last_1_var_1_36;
				}
			}
		}
	}


	// From: Req4Batch12Amount500
	var_1_20 = (max (last_1_var_1_20 , ((min (var_1_17 , var_1_1)) + last_1_var_1_20)));


	// From: Req33Batch12Amount500
	unsigned long int stepLocal_30 = (var_1_80 + last_1_var_1_41) << var_1_34;
	if (! (var_1_63 || last_1_var_1_55)) {
		if (stepLocal_30 < last_1_var_1_93) {
			var_1_86 = (16 + var_1_76);
		}
	} else {
		var_1_86 = (max ((var_1_87 - var_1_39) , ((var_1_79 + var_1_80) + 10)));
	}


	// From: Req24Batch12Amount500
	if (last_1_var_1_37 >= var_1_40) {
		if (last_1_var_1_100 <= 49.06f) {
			var_1_62 = (var_1_53 || (! var_1_63));
		}
	}


	// From: Req10Batch12Amount500
	if ((! var_1_62) || var_1_62) {
		var_1_27 = (max (var_1_14 , (4.2 + (abs (var_1_13)))));
	}


	// From: Req28Batch12Amount500
	if (! var_1_56) {
		if (var_1_62) {
			var_1_68 = (! (var_1_67 || var_1_56));
		} else {
			var_1_68 = var_1_57;
		}
	} else {
		var_1_68 = (! 0);
	}


	// From: Req45Batch12Amount500
	if (var_1_62) {
		var_1_102 = var_1_72;
	}


	// From: Req37Batch12Amount500
	signed char stepLocal_36 = var_1_75;
	unsigned char stepLocal_35 = last_1_var_1_66;
	if (last_1_var_1_62 || stepLocal_35) {
		if (! last_1_var_1_66) {
			if (last_1_var_1_83 >= stepLocal_36) {
				var_1_93 = (max ((4 + (abs (var_1_74))) , var_1_75));
			} else {
				var_1_93 = var_1_75;
			}
		} else {
			var_1_93 = var_1_80;
		}
	} else {
		var_1_93 = var_1_94;
	}


	// From: Req12Batch12Amount500
	var_1_29 = (var_1_14 - var_1_15);


	// From: Req21Batch12Amount500
	if (var_1_44 >= 4.625f) {
		var_1_55 = var_1_56;
	} else {
		var_1_55 = (! (var_1_56 && var_1_57));
	}


	// From: Req34Batch12Amount500
	unsigned short int stepLocal_32 = var_1_47;
	signed long int stepLocal_31 = var_1_86 / 5;
	if (var_1_48 >= stepLocal_31) {
		var_1_88 = ((var_1_13 - var_1_14) + var_1_40);
	} else {
		if ((4 - var_1_52) > stepLocal_32) {
			var_1_88 = ((5.8963147746434488E18 - var_1_14) - ((max (49.7 , var_1_13)) + var_1_40));
		} else {
			var_1_88 = (var_1_19 - var_1_14);
		}
	}


	// From: Req38Batch12Amount500
	if (var_1_67) {
		var_1_95 = var_1_18;
	} else {
		var_1_95 = var_1_19;
	}


	// From: Req40Batch12Amount500
	if (var_1_67) {
		var_1_97 = 0;
	} else {
		var_1_97 = var_1_56;
	}


	// From: Req41Batch12Amount500
	var_1_98 = var_1_52;


	// From: Req42Batch12Amount500
	var_1_99 = var_1_87;


	// From: Req43Batch12Amount500
	var_1_100 = var_1_92;


	// From: Req44Batch12Amount500
	var_1_101 = var_1_57;


	// From: Req46Batch12Amount500
	var_1_103 = var_1_87;


	// From: Req47Batch12Amount500
	var_1_104 = var_1_14;


	// From: Req48Batch12Amount500
	if (var_1_53) {
		var_1_105 = var_1_87;
	} else {
		var_1_105 = -100;
	}


	// From: Req50Batch12Amount500
	if (var_1_67) {
		var_1_107 = var_1_39;
	}


	// From: Req32Batch12Amount500
	unsigned char stepLocal_29 = var_1_93;
	unsigned char stepLocal_28 = var_1_62;
	if (stepLocal_28 && (var_1_86 >= var_1_93)) {
		if (stepLocal_29 >= var_1_99) {
			var_1_83 = (min ((max (last_1_var_1_83 , (min (var_1_39 , var_1_99)))) , (max (var_1_75 , var_1_9))));
		}
	} else {
		var_1_83 = var_1_98;
	}


	// From: Req19Batch12Amount500
	unsigned char stepLocal_18 = var_1_107;
	if (stepLocal_18 <= ((var_1_51 - var_1_52) - var_1_39)) {
		var_1_50 = (var_1_97 && var_1_53);
	}


	// From: Req23Batch12Amount500
	unsigned char stepLocal_21 = var_1_93;
	if (var_1_107 != stepLocal_21) {
		var_1_61 = (abs (min (var_1_14 , (var_1_13 + 128.125f))));
	} else {
		var_1_61 = (var_1_15 - 0.6f);
	}


	// From: Req26Batch12Amount500
	unsigned char stepLocal_22 = var_1_63;
	if (stepLocal_22 && (var_1_40 >= var_1_95)) {
		var_1_65 = (min ((50 + (var_1_99 + -5)) , var_1_9));
	} else {
		var_1_65 = var_1_38;
	}


	// From: Req39Batch12Amount500
	if (var_1_50) {
		var_1_96 = var_1_52;
	}


	// From: Req49Batch12Amount500
	if (var_1_50) {
		var_1_106 = var_1_40;
	} else {
		var_1_106 = var_1_15;
	}


	// From: Req20Batch12Amount500
	unsigned char stepLocal_19 = var_1_108;
	if (stepLocal_19 && (var_1_65 < var_1_39)) {
		var_1_54 = (var_1_47 - (28744 - var_1_38));
	}


	// From: Req8Batch12Amount500
	signed long int stepLocal_10 = var_1_96 >> var_1_30;
	if (stepLocal_10 <= (var_1_65 + var_1_30)) {
		if (var_1_97) {
			var_1_25 = var_1_15;
		}
	}


	// From: Req17Batch12Amount500
	if (var_1_50) {
		var_1_46 = ((max (var_1_47 , var_1_48)) - 64);
	} else {
		var_1_46 = var_1_105;
	}


	// From: Req5Batch12Amount500
	unsigned char stepLocal_8 = var_1_62;
	if (stepLocal_8 || var_1_97) {
		var_1_21 = (min ((max (200u , var_1_20)) , (abs (var_1_46))));
	}


	// From: Req11Batch12Amount500
	if (var_1_108 || (! var_1_97)) {
		if (((var_1_30 + var_1_103) + var_1_21) < -32) {
			var_1_28 = (max (15.4 , var_1_13));
		} else {
			var_1_28 = var_1_14;
		}
	} else {
		var_1_28 = var_1_15;
	}


	// From: Req35Batch12Amount500
	if (var_1_34 > var_1_47) {
		var_1_89 = ((abs (var_1_52)) - var_1_65);
	} else {
		var_1_89 = (max (var_1_46 , (var_1_74 + (var_1_20 - var_1_93))));
	}


	// From: Req27Batch12Amount500
	unsigned short int stepLocal_23 = var_1_46;
	if (var_1_63) {
		if ((var_1_93 | var_1_39) >= stepLocal_23) {
			var_1_66 = ((var_1_55 || var_1_56) && (var_1_57 && var_1_67));
		} else {
			var_1_66 = (! var_1_53);
		}
	} else {
		var_1_66 = (! var_1_56);
	}


	// From: Req16Batch12Amount500
	signed long int stepLocal_17 = (var_1_39 ^ 128) / var_1_17;
	unsigned char stepLocal_16 = var_1_108;
	unsigned char stepLocal_15 = var_1_50 && var_1_66;
	unsigned char stepLocal_14 = (63.625f / var_1_19) <= (var_1_100 / var_1_44);
	if (var_1_108 || stepLocal_15) {
		if (var_1_66 && stepLocal_16) {
			var_1_41 = (min ((var_1_31 - var_1_17) , (min ((var_1_43 - var_1_39) , (min (var_1_30 , var_1_86))))));
		} else {
			if ((! var_1_50) && stepLocal_14) {
				var_1_41 = (max (8u , 50u));
			} else {
				if (var_1_38 >= stepLocal_17) {
					var_1_41 = (max ((max (var_1_31 , (min (var_1_54 , var_1_107)))) , var_1_1));
				}
			}
		}
	} else {
		var_1_41 = ((min (var_1_1 , var_1_30)) + var_1_17);
	}


	// From: Req6Batch12Amount500
	if (var_1_50) {
		var_1_23 = ((-8 + -4) + var_1_20);
	} else {
		var_1_23 = (var_1_41 + (abs (var_1_17)));
	}


	// From: Req31Batch12Amount500
	unsigned long int stepLocal_27 = var_1_31;
	if (var_1_23 == stepLocal_27) {
		var_1_82 = (var_1_80 + var_1_74);
	} else {
		var_1_82 = var_1_52;
	}


	// From: Req7Batch12Amount500
	signed long int stepLocal_9 = abs (var_1_65);
	if (var_1_1 > stepLocal_9) {
		if (var_1_18 > (min (var_1_28 , var_1_13))) {
			var_1_24 = (max (var_1_105 , (var_1_107 + var_1_103)));
		} else {
			var_1_24 = (var_1_107 + var_1_105);
		}
	} else {
		var_1_24 = var_1_82;
	}


	// From: Req25Batch12Amount500
	if (var_1_105 <= ((0 ^ var_1_82) & var_1_46)) {
		if (var_1_103 <= var_1_93) {
			if (var_1_86 != last_1_var_1_64) {
				if (var_1_101 || var_1_56) {
					var_1_64 = (var_1_43 - (min (last_1_var_1_64 , var_1_105)));
				}
			} else {
				var_1_64 = (min (last_1_var_1_64 , var_1_31));
			}
		} else {
			var_1_64 = 4u;
		}
	}


	// From: Req36Batch12Amount500
	unsigned char stepLocal_34 = var_1_67;
	unsigned char stepLocal_33 = var_1_62;
	if (((var_1_80 * var_1_64) >= var_1_31) && stepLocal_33) {
		var_1_90 = 2.75;
	} else {
		if (var_1_101 || stepLocal_34) {
			var_1_90 = ((0.25 - var_1_13) + var_1_14);
		} else {
			var_1_90 = (((var_1_91 + var_1_92) - var_1_14) + var_1_40);
		}
	}


	// From: Req29Batch12Amount500
	signed long int stepLocal_26 = var_1_20 + var_1_17;
	unsigned char stepLocal_25 = var_1_17;
	unsigned long int stepLocal_24 = var_1_33 + var_1_24;
	if (stepLocal_24 != var_1_17) {
		if (stepLocal_26 >= var_1_96) {
			if (var_1_24 >= stepLocal_25) {
				if ((min (var_1_14 , var_1_27)) < (min (var_1_106 , var_1_28))) {
					var_1_69 = (max (var_1_13 , var_1_40));
				}
			} else {
				if ((var_1_90 + (var_1_28 / var_1_19)) >= var_1_15) {
					var_1_69 = (min (((var_1_40 + var_1_13) - var_1_15) , (abs (var_1_18))));
				} else {
					var_1_69 = (var_1_40 - var_1_14);
				}
			}
		} else {
			var_1_69 = (max (16.125f , (max (var_1_40 , (max (var_1_72 , var_1_18))))));
		}
	} else {
		var_1_69 = var_1_18;
	}


	// From: Req30Batch12Amount500
	if ((min (var_1_106 , 10.075)) > (var_1_72 * var_1_69)) {
		if ((var_1_38 - var_1_46) == var_1_39) {
			var_1_73 = ((var_1_74 + var_1_75) - (var_1_76 + var_1_77));
		} else {
			var_1_73 = (var_1_78 - ((var_1_79 + var_1_80) + var_1_77));
		}
	} else {
		if (var_1_104 < (abs (var_1_28))) {
			if ((var_1_74 + var_1_103) > var_1_48) {
				var_1_73 = (var_1_77 + var_1_76);
			} else {
				var_1_73 = ((var_1_80 + var_1_74) - (var_1_75 + var_1_77));
			}
		}
	}


	// From: Req9Batch12Amount500
	if (var_1_18 >= var_1_69) {
		if (var_1_93 == (var_1_96 / (abs (var_1_17)))) {
			var_1_26 = (abs (1));
		}
	}


	// From: Req2Batch12Amount500
	signed long int stepLocal_7 = var_1_93 + var_1_99;
	signed short int stepLocal_6 = var_1_105;
	signed long int stepLocal_5 = -4;
	if (((last_1_var_1_11 * var_1_105) / var_1_9) > stepLocal_7) {
		if (stepLocal_5 < var_1_99) {
			var_1_11 = var_1_73;
		} else {
			if (stepLocal_6 >= (var_1_1 | var_1_105)) {
				var_1_11 = (var_1_105 + (var_1_107 - last_1_var_1_11));
			}
		}
	}


	// From: Req3Batch12Amount500
	if (var_1_99 <= var_1_105) {
		var_1_12 = ((var_1_13 + var_1_14) - var_1_15);
	} else {
		if ((16 + (var_1_11 % var_1_17)) <= var_1_107) {
			var_1_12 = (min ((var_1_13 - var_1_15) , (min (var_1_14 , var_1_18))));
		} else {
			if (! var_1_66) {
				var_1_12 = ((max (var_1_13 , 9999.375f)) - (var_1_19 - (abs (var_1_14))));
			} else {
				var_1_12 = (min (var_1_19 , 256.1f));
			}
		}
	}


	// From: Req22Batch12Amount500
	unsigned short int stepLocal_20 = var_1_48;
	if ((max (var_1_102 , (var_1_15 - var_1_19))) > var_1_12) {
		var_1_58 = (var_1_17 - (max ((min (var_1_51 , var_1_86)) , (21375 - var_1_98))));
	} else {
		if (stepLocal_20 < var_1_9) {
			var_1_58 = ((var_1_52 - var_1_89) + (var_1_51 + (var_1_38 + var_1_65)));
		} else {
			var_1_58 = (abs (var_1_65));
		}
	}


	// From: Req15Batch12Amount500
	if (! var_1_101) {
		if (var_1_98 == var_1_96) {
			if (last_1_var_1_37 == (var_1_14 + var_1_100)) {
				if (((var_1_38 + var_1_39) - (max (1 , 2))) <= ((var_1_11 & var_1_98) / (min (var_1_33 , var_1_34)))) {
					var_1_37 = (var_1_13 + (var_1_14 - var_1_40));
				}
			} else {
				var_1_37 = (9.999999999999995E14f - (max ((var_1_14 + var_1_13) , var_1_15)));
			}
		}
	}


	// From: Req14Batch12Amount500
	unsigned long int stepLocal_13 = var_1_54 & var_1_34;
	if (var_1_14 == var_1_106) {
		if (var_1_62) {
			if (var_1_66) {
				var_1_36 = (3142275971u - 128u);
			} else {
				var_1_36 = var_1_93;
			}
		} else {
			var_1_36 = ((max (var_1_31 , 2448004024u)) - last_1_var_1_36);
		}
	} else {
		if (var_1_58 == stepLocal_13) {
			var_1_36 = (min ((var_1_31 - var_1_46) , (min (var_1_17 , var_1_93))));
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32768);
	assume_abort_if_not(var_1_9 <= 32767);
	assume_abort_if_not(var_1_9 != 0);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 255);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 4611686.018427382800e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1073741824);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 128);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 64);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 191);
	assume_abort_if_not(var_1_51 <= 255);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 64);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 1);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= -922337.2036854765600e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 63);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 63);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 63);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -1);
	assume_abort_if_not(var_1_78 <= 126);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 32);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 31);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 127);
	assume_abort_if_not(var_1_87 <= 254);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691390e+12F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691390e+12F && var_1_92 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 254);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_107 = var_1_107;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_36 * last_1_var_1_93) >= last_1_var_1_98) && (! last_1_var_1_68)) ? (var_1_1 == ((signed short int) (last_1_var_1_93 - (max (last_1_var_1_36 , last_1_var_1_93))))) : (((65169 - last_1_var_1_36) < last_1_var_1_65) ? (var_1_1 == ((signed short int) ((min (last_1_var_1_36 , last_1_var_1_93)) - last_1_var_1_93))) : (((4 + last_1_var_1_36) != (16 * last_1_var_1_93)) ? ((last_1_var_1_93 != last_1_var_1_98) ? ((((last_1_var_1_64 / var_1_9) + last_1_var_1_93) >= last_1_var_1_93) ? (var_1_1 == ((signed short int) last_1_var_1_96)) : 1) : (var_1_1 == ((signed short int) last_1_var_1_36))) : 1))) && ((((last_1_var_1_11 * var_1_105) / var_1_9) > (var_1_93 + var_1_99)) ? ((-4 < var_1_99) ? (var_1_11 == ((signed long int) var_1_73)) : ((var_1_105 >= (var_1_1 | var_1_105)) ? (var_1_11 == ((signed long int) (var_1_105 + (var_1_107 - last_1_var_1_11)))) : 1)) : 1)) && ((var_1_99 <= var_1_105) ? (var_1_12 == ((float) ((var_1_13 + var_1_14) - var_1_15))) : (((16 + (var_1_11 % var_1_17)) <= var_1_107) ? (var_1_12 == ((float) (min ((var_1_13 - var_1_15) , (min (var_1_14 , var_1_18)))))) : ((! var_1_66) ? (var_1_12 == ((float) ((max (var_1_13 , 9999.375f)) - (var_1_19 - (abs (var_1_14)))))) : (var_1_12 == ((float) (min (var_1_19 , 256.1f)))))))) && (var_1_20 == ((signed short int) (max (last_1_var_1_20 , ((min (var_1_17 , var_1_1)) + last_1_var_1_20)))))) && ((var_1_62 || var_1_97) ? (var_1_21 == ((unsigned long int) (min ((max (200u , var_1_20)) , (abs (var_1_46)))))) : 1)) && (var_1_50 ? (var_1_23 == ((signed short int) ((-8 + -4) + var_1_20))) : (var_1_23 == ((signed short int) (var_1_41 + (abs (var_1_17))))))) && ((var_1_1 > (abs (var_1_65))) ? ((var_1_18 > (min (var_1_28 , var_1_13))) ? (var_1_24 == ((signed long int) (max (var_1_105 , (var_1_107 + var_1_103))))) : (var_1_24 == ((signed long int) (var_1_107 + var_1_105)))) : (var_1_24 == ((signed long int) var_1_82)))) && (((var_1_96 >> var_1_30) <= (var_1_65 + var_1_30)) ? (var_1_97 ? (var_1_25 == ((float) var_1_15)) : 1) : 1)) && ((var_1_18 >= var_1_69) ? ((var_1_93 == (var_1_96 / (abs (var_1_17)))) ? (var_1_26 == ((signed char) (abs (1)))) : 1) : 1)) && (((! var_1_62) || var_1_62) ? (var_1_27 == ((double) (max (var_1_14 , (4.2 + (abs (var_1_13))))))) : 1)) && ((var_1_108 || (! var_1_97)) ? ((((var_1_30 + var_1_103) + var_1_21) < -32) ? (var_1_28 == ((double) (max (15.4 , var_1_13)))) : (var_1_28 == ((double) var_1_14))) : (var_1_28 == ((double) var_1_15)))) && (var_1_29 == ((float) (var_1_14 - var_1_15)))) && ((! last_1_var_1_66) ? ((last_1_var_1_99 <= last_1_var_1_21) ? (((min ((last_1_var_1_49 / var_1_19) , var_1_18)) != last_1_var_1_29) ? (var_1_30 == ((unsigned long int) (var_1_31 - last_1_var_1_107))) : 1) : (var_1_30 == ((unsigned long int) (abs (last_1_var_1_23))))) : ((last_1_var_1_21 <= last_1_var_1_23) ? (var_1_30 == ((unsigned long int) (abs ((var_1_33 + var_1_34) - last_1_var_1_93)))) : (var_1_30 == ((unsigned long int) (last_1_var_1_107 + last_1_var_1_107)))))) && ((var_1_14 == var_1_106) ? (var_1_62 ? (var_1_66 ? (var_1_36 == ((unsigned long int) (3142275971u - 128u))) : (var_1_36 == ((unsigned long int) var_1_93))) : (var_1_36 == ((unsigned long int) ((max (var_1_31 , 2448004024u)) - last_1_var_1_36)))) : ((var_1_58 == (var_1_54 & var_1_34)) ? (var_1_36 == ((unsigned long int) (min ((var_1_31 - var_1_46) , (min (var_1_17 , var_1_93)))))) : 1))) && ((! var_1_101) ? ((var_1_98 == var_1_96) ? ((last_1_var_1_37 == (var_1_14 + var_1_100)) ? ((((var_1_38 + var_1_39) - (max (1 , 2))) <= ((var_1_11 & var_1_98) / (min (var_1_33 , var_1_34)))) ? (var_1_37 == ((float) (var_1_13 + (var_1_14 - var_1_40)))) : 1) : (var_1_37 == ((float) (9.999999999999995E14f - (max ((var_1_14 + var_1_13) , var_1_15)))))) : 1) : 1)) && ((var_1_108 || (var_1_50 && var_1_66)) ? ((var_1_66 && var_1_108) ? (var_1_41 == ((unsigned long int) (min ((var_1_31 - var_1_17) , (min ((var_1_43 - var_1_39) , (min (var_1_30 , var_1_86)))))))) : (((! var_1_50) && ((63.625f / var_1_19) <= (var_1_100 / var_1_44))) ? (var_1_41 == ((unsigned long int) (max (8u , 50u)))) : ((var_1_38 >= ((var_1_39 ^ 128) / var_1_17)) ? (var_1_41 == ((unsigned long int) (max ((max (var_1_31 , (min (var_1_54 , var_1_107)))) , var_1_1)))) : 1))) : (var_1_41 == ((unsigned long int) ((min (var_1_1 , var_1_30)) + var_1_17))))) && (var_1_50 ? (var_1_46 == ((unsigned short int) ((max (var_1_47 , var_1_48)) - 64))) : (var_1_46 == ((unsigned short int) var_1_105)))) && (((4 >> var_1_30) >= var_1_30) ? (((- var_1_30) > var_1_38) ? (var_1_49 == ((float) ((min (var_1_40 , (var_1_14 + var_1_13))) - var_1_15))) : (var_1_49 == ((float) 4.375f))) : 1)) && ((var_1_107 <= ((var_1_51 - var_1_52) - var_1_39)) ? (var_1_50 == ((unsigned char) (var_1_97 && var_1_53))) : 1)) && ((var_1_108 && (var_1_65 < var_1_39)) ? (var_1_54 == ((unsigned short int) (var_1_47 - (28744 - var_1_38)))) : 1)) && ((var_1_44 >= 4.625f) ? (var_1_55 == ((unsigned char) var_1_56)) : (var_1_55 == ((unsigned char) (! (var_1_56 && var_1_57)))))) && (((max (var_1_102 , (var_1_15 - var_1_19))) > var_1_12) ? (var_1_58 == ((signed short int) (var_1_17 - (max ((min (var_1_51 , var_1_86)) , (21375 - var_1_98)))))) : ((var_1_48 < var_1_9) ? (var_1_58 == ((signed short int) ((var_1_52 - var_1_89) + (var_1_51 + (var_1_38 + var_1_65))))) : (var_1_58 == ((signed short int) (abs (var_1_65))))))) && ((var_1_107 != var_1_93) ? (var_1_61 == ((float) (abs (min (var_1_14 , (var_1_13 + 128.125f)))))) : (var_1_61 == ((float) (var_1_15 - 0.6f))))) && ((last_1_var_1_37 >= var_1_40) ? ((last_1_var_1_100 <= 49.06f) ? (var_1_62 == ((unsigned char) (var_1_53 || (! var_1_63)))) : 1) : 1)) && ((var_1_105 <= ((0 ^ var_1_82) & var_1_46)) ? ((var_1_103 <= var_1_93) ? ((var_1_86 != last_1_var_1_64) ? ((var_1_101 || var_1_56) ? (var_1_64 == ((unsigned long int) (var_1_43 - (min (last_1_var_1_64 , var_1_105))))) : 1) : (var_1_64 == ((unsigned long int) (min (last_1_var_1_64 , var_1_31))))) : (var_1_64 == ((unsigned long int) 4u))) : 1)) && ((var_1_63 && (var_1_40 >= var_1_95)) ? (var_1_65 == ((signed long int) (min ((50 + (var_1_99 + -5)) , var_1_9)))) : (var_1_65 == ((signed long int) var_1_38)))) && (var_1_63 ? (((var_1_93 | var_1_39) >= var_1_46) ? (var_1_66 == ((unsigned char) ((var_1_55 || var_1_56) && (var_1_57 && var_1_67)))) : (var_1_66 == ((unsigned char) (! var_1_53)))) : (var_1_66 == ((unsigned char) (! var_1_56))))) && ((! var_1_56) ? (var_1_62 ? (var_1_68 == ((unsigned char) (! (var_1_67 || var_1_56)))) : (var_1_68 == ((unsigned char) var_1_57))) : (var_1_68 == ((unsigned char) (! 0))))) && (((var_1_33 + var_1_24) != var_1_17) ? (((var_1_20 + var_1_17) >= var_1_96) ? ((var_1_24 >= var_1_17) ? (((min (var_1_14 , var_1_27)) < (min (var_1_106 , var_1_28))) ? (var_1_69 == ((float) (max (var_1_13 , var_1_40)))) : 1) : (((var_1_90 + (var_1_28 / var_1_19)) >= var_1_15) ? (var_1_69 == ((float) (min (((var_1_40 + var_1_13) - var_1_15) , (abs (var_1_18)))))) : (var_1_69 == ((float) (var_1_40 - var_1_14))))) : (var_1_69 == ((float) (max (16.125f , (max (var_1_40 , (max (var_1_72 , var_1_18))))))))) : (var_1_69 == ((float) var_1_18)))) && (((min (var_1_106 , 10.075)) > (var_1_72 * var_1_69)) ? (((var_1_38 - var_1_46) == var_1_39) ? (var_1_73 == ((signed char) ((var_1_74 + var_1_75) - (var_1_76 + var_1_77)))) : (var_1_73 == ((signed char) (var_1_78 - ((var_1_79 + var_1_80) + var_1_77))))) : ((var_1_104 < (abs (var_1_28))) ? (((var_1_74 + var_1_103) > var_1_48) ? (var_1_73 == ((signed char) (var_1_77 + var_1_76))) : (var_1_73 == ((signed char) ((var_1_80 + var_1_74) - (var_1_75 + var_1_77))))) : 1))) && ((var_1_23 == var_1_31) ? (var_1_82 == ((signed char) (var_1_80 + var_1_74))) : (var_1_82 == ((signed char) var_1_52)))) && ((var_1_62 && (var_1_86 >= var_1_93)) ? ((var_1_93 >= var_1_99) ? (var_1_83 == ((signed long int) (min ((max (last_1_var_1_83 , (min (var_1_39 , var_1_99)))) , (max (var_1_75 , var_1_9)))))) : 1) : (var_1_83 == ((signed long int) var_1_98)))) && ((! (var_1_63 || last_1_var_1_55)) ? ((((var_1_80 + last_1_var_1_41) << var_1_34) < last_1_var_1_93) ? (var_1_86 == ((unsigned char) (16 + var_1_76))) : 1) : (var_1_86 == ((unsigned char) (max ((var_1_87 - var_1_39) , ((var_1_79 + var_1_80) + 10))))))) && ((var_1_48 >= (var_1_86 / 5)) ? (var_1_88 == ((double) ((var_1_13 - var_1_14) + var_1_40))) : (((4 - var_1_52) > var_1_47) ? (var_1_88 == ((double) ((5.8963147746434488E18 - var_1_14) - ((max (49.7 , var_1_13)) + var_1_40)))) : (var_1_88 == ((double) (var_1_19 - var_1_14)))))) && ((var_1_34 > var_1_47) ? (var_1_89 == ((signed short int) ((abs (var_1_52)) - var_1_65))) : (var_1_89 == ((signed short int) (max (var_1_46 , (var_1_74 + (var_1_20 - var_1_93)))))))) && ((((var_1_80 * var_1_64) >= var_1_31) && var_1_62) ? (var_1_90 == ((double) 2.75)) : ((var_1_101 || var_1_67) ? (var_1_90 == ((double) ((0.25 - var_1_13) + var_1_14))) : (var_1_90 == ((double) (((var_1_91 + var_1_92) - var_1_14) + var_1_40)))))) && ((last_1_var_1_62 || last_1_var_1_66) ? ((! last_1_var_1_66) ? ((last_1_var_1_83 >= var_1_75) ? (var_1_93 == ((unsigned char) (max ((4 + (abs (var_1_74))) , var_1_75)))) : (var_1_93 == ((unsigned char) var_1_75))) : (var_1_93 == ((unsigned char) var_1_80))) : (var_1_93 == ((unsigned char) var_1_94)))) && (var_1_67 ? (var_1_95 == ((float) var_1_18)) : (var_1_95 == ((float) var_1_19)))) && (var_1_50 ? (var_1_96 == ((unsigned char) var_1_52)) : 1)) && (var_1_67 ? (var_1_97 == ((unsigned char) 0)) : (var_1_97 == ((unsigned char) var_1_56)))) && (var_1_98 == ((signed char) var_1_52))) && (var_1_99 == ((signed short int) var_1_87))) && (var_1_100 == ((float) var_1_92))) && (var_1_101 == ((unsigned char) var_1_57))) && (var_1_62 ? (var_1_102 == ((double) var_1_72)) : 1)) && (var_1_103 == ((unsigned char) var_1_87))) && (var_1_104 == ((float) var_1_14))) && (var_1_53 ? (var_1_105 == ((signed short int) var_1_87)) : (var_1_105 == ((signed short int) -100)))) && (var_1_50 ? (var_1_106 == ((double) var_1_40)) : (var_1_106 == ((double) var_1_15)))) && (var_1_67 ? (var_1_107 == ((unsigned char) var_1_39)) : 1)) && ((var_1_56 || (last_1_var_1_64 != 10)) ? ((last_1_var_1_103 >= last_1_var_1_86) ? (var_1_108 == ((unsigned char) (! var_1_67))) : ((last_1_var_1_21 >= (var_1_77 << var_1_51)) ? (var_1_108 == ((unsigned char) var_1_56)) : (var_1_108 == ((unsigned char) var_1_63)))) : (var_1_108 == ((unsigned char) var_1_67)))
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
