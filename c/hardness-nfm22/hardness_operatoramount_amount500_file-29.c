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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch29Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 32;
signed char var_1_16 = 0;
double var_1_17 = 7.2;
signed char var_1_18 = -16;
signed char var_1_19 = 10;
signed char var_1_20 = -8;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 32;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 2;
unsigned char var_1_26 = 8;
double var_1_27 = 128.125;
double var_1_28 = 5.6;
double var_1_29 = 63.1;
unsigned char var_1_30 = 1;
double var_1_33 = 64.4;
double var_1_34 = 2.1;
double var_1_35 = 1.725;
double var_1_36 = 1.56;
double var_1_37 = 99.7;
signed short int var_1_38 = 10;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 25;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 16;
unsigned char var_1_43 = 2;
unsigned char var_1_44 = 1;
unsigned short int var_1_45 = 8;
signed short int var_1_46 = 256;
signed char var_1_47 = -64;
unsigned char var_1_48 = 10;
signed long int var_1_49 = -128;
unsigned long int var_1_50 = 3737387391;
unsigned long int var_1_52 = 64;
unsigned short int var_1_53 = 2;
unsigned short int var_1_54 = 24505;
float var_1_55 = 1000000000000000.9;
unsigned long int var_1_56 = 2207339454;
float var_1_57 = 0.76;
signed long int var_1_58 = 256;
signed long int var_1_59 = 128;
float var_1_60 = 128.4;
float var_1_61 = 127.5;
float var_1_62 = 4.8;
unsigned short int var_1_63 = 64;
unsigned short int var_1_64 = 64718;
double var_1_65 = 128.5;
signed char var_1_67 = -4;
signed char var_1_68 = 64;
signed char var_1_69 = 5;
signed char var_1_70 = -25;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned short int var_1_73 = 16;
double var_1_74 = 99.75;
unsigned short int var_1_76 = 25758;
unsigned short int var_1_77 = 26539;
unsigned short int var_1_78 = 55856;
signed short int var_1_79 = -4;
signed short int var_1_80 = 16584;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 50;
double var_1_85 = 2.75;
double var_1_86 = 15.6;
signed char var_1_87 = 0;
signed char var_1_88 = -4;
signed char var_1_89 = 1;
double var_1_90 = 4.5;
signed char var_1_91 = 1;
signed char var_1_93 = 64;
signed char var_1_94 = 10;
unsigned char var_1_95 = 1;
float var_1_97 = 5.5;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 5;
unsigned char var_1_100 = 0;
double var_1_101 = 0.55;
unsigned long int var_1_102 = 16;
unsigned long int var_1_103 = 2545478604;
unsigned long int var_1_104 = 2996327858;
unsigned char var_1_105 = 1;
unsigned char var_1_107 = 1;
signed short int var_1_108 = -500;
unsigned char var_1_109 = 1;
double var_1_110 = 9.9;
float var_1_111 = 2.9;
signed short int var_1_112 = -5;
unsigned short int var_1_113 = 16;
double var_1_114 = 128.55;
signed short int var_1_115 = -5;
float var_1_116 = 3.75;
float var_1_117 = -0.7;
unsigned char var_1_118 = 0;
unsigned short int var_1_119 = 128;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 32;
unsigned char last_1_var_1_22 = 32;
unsigned char last_1_var_1_30 = 1;
double last_1_var_1_33 = 64.4;
signed short int last_1_var_1_38 = 10;
unsigned char last_1_var_1_39 = 32;
unsigned char last_1_var_1_44 = 1;
signed char last_1_var_1_47 = -64;
unsigned char last_1_var_1_48 = 10;
signed long int last_1_var_1_49 = -128;
unsigned short int last_1_var_1_53 = 2;
float last_1_var_1_55 = 1000000000000000.9;
signed long int last_1_var_1_58 = 256;
signed long int last_1_var_1_59 = 128;
unsigned short int last_1_var_1_63 = 64;
unsigned short int last_1_var_1_73 = 16;
unsigned short int last_1_var_1_84 = 50;
double last_1_var_1_85 = 2.75;
float last_1_var_1_97 = 5.5;
unsigned char last_1_var_1_99 = 5;
signed short int last_1_var_1_108 = -500;
unsigned char last_1_var_1_109 = 1;
double last_1_var_1_110 = 9.9;
unsigned short int last_1_var_1_113 = 16;
float last_1_var_1_117 = -0.7;
unsigned short int last_1_var_1_119 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req41Batch29Amount500
	if (var_1_56 != (var_1_41 + (- 32u))) {
		var_1_105 = ((last_1_var_1_44 || var_1_82) && var_1_5);
	} else {
		if (var_1_83) {
			var_1_105 = var_1_5;
		}
	}


	// From: Req16Batch29Amount500
	signed long int stepLocal_13 = last_1_var_1_99;
	signed long int stepLocal_12 = last_1_var_1_22;
	signed long int stepLocal_11 = last_1_var_1_48;
	if (((abs (last_1_var_1_49)) | var_1_42) <= stepLocal_12) {
		if (stepLocal_13 <= (var_1_24 * last_1_var_1_49)) {
			var_1_49 = (4 - last_1_var_1_49);
		} else {
			var_1_49 = (min ((max (var_1_19 , last_1_var_1_49)) , var_1_23));
		}
	} else {
		if (((min (4121020038u , var_1_50)) - 32u) >= stepLocal_11) {
			var_1_49 = (last_1_var_1_84 - (var_1_25 + (abs (last_1_var_1_58))));
		}
	}


	// From: Req17Batch29Amount500
	if (var_1_28 < (last_1_var_1_85 + var_1_34)) {
		var_1_52 = var_1_43;
	} else {
		var_1_52 = (last_1_var_1_63 + (min (last_1_var_1_38 , var_1_24)));
	}


	// From: Req13Batch29Amount500
	if (last_1_var_1_33 != last_1_var_1_55) {
		var_1_46 = (max (var_1_40 , var_1_25));
	} else {
		var_1_46 = (var_1_26 - (max (last_1_var_1_13 , (17698 - var_1_23))));
	}


	// From: Req54Batch29Amount500
	signed long int stepLocal_42 = min (last_1_var_1_99 , (last_1_var_1_84 * last_1_var_1_84));
	if (last_1_var_1_30) {
		if ((last_1_var_1_117 + last_1_var_1_110) <= var_1_74) {
			if (stepLocal_42 < var_1_23) {
				var_1_119 = var_1_76;
			} else {
				var_1_119 = 0;
			}
		} else {
			var_1_119 = last_1_var_1_47;
		}
	} else {
		var_1_119 = last_1_var_1_119;
	}


	// From: Req10Batch29Amount500
	signed long int stepLocal_7 = last_1_var_1_38;
	if ((last_1_var_1_113 + last_1_var_1_99) >= stepLocal_7) {
		var_1_39 = (var_1_25 + ((min (var_1_40 , var_1_41)) + var_1_42));
	} else {
		var_1_39 = var_1_43;
	}


	// From: Req9Batch29Amount500
	var_1_38 = (50 + (var_1_26 - last_1_var_1_73));


	// From: Req37Batch29Amount500
	signed char stepLocal_37 = var_1_94;
	signed long int stepLocal_36 = max (last_1_var_1_22 , last_1_var_1_49);
	signed long int stepLocal_35 = last_1_var_1_108;
	signed long int stepLocal_34 = last_1_var_1_59;
	if (stepLocal_35 != ((var_1_93 - var_1_94) / var_1_68)) {
		if ((max (last_1_var_1_49 , var_1_25)) <= stepLocal_37) {
			var_1_99 = ((100 - var_1_42) + var_1_93);
		} else {
			if (last_1_var_1_110 < (last_1_var_1_97 / var_1_17)) {
				if (var_1_69 <= stepLocal_36) {
					var_1_99 = (4 + var_1_42);
				} else {
					if (stepLocal_34 > (min (last_1_var_1_39 , last_1_var_1_53))) {
						var_1_99 = (max ((var_1_24 - (min (var_1_68 , var_1_26))) , var_1_40));
					} else {
						var_1_99 = (var_1_40 + (min ((abs (4)) , (var_1_93 - var_1_25))));
					}
				}
			}
		}
	}


	// From: Req5Batch29Amount500
	if (var_1_5) {
		var_1_22 = ((min ((abs (var_1_23)) , (var_1_24 - var_1_25))) - var_1_26);
	}


	// From: Req14Batch29Amount500
	if (var_1_28 != 5.4) {
		if (var_1_18 >= last_1_var_1_47) {
			var_1_47 = (max (var_1_18 , -8));
		} else {
			var_1_47 = var_1_24;
		}
	}


	// From: Req15Batch29Amount500
	unsigned char stepLocal_10 = var_1_43;
	if (stepLocal_10 <= 0) {
		var_1_48 = ((min (var_1_25 , var_1_26)) + var_1_41);
	}


	// From: Req18Batch29Amount500
	if (! var_1_11) {
		var_1_53 = (min (var_1_42 , ((22488 + var_1_54) - (max (25 , var_1_23)))));
	} else {
		var_1_53 = (max (var_1_22 , (max (var_1_42 , var_1_22))));
	}


	// From: Req31Batch29Amount500
	if (var_1_74 >= last_1_var_1_85) {
		var_1_85 = ((var_1_61 - var_1_34) + (var_1_62 - var_1_86));
	}


	// From: Req35Batch29Amount500
	var_1_97 = (var_1_86 + (var_1_36 + var_1_37));


	// From: Req38Batch29Amount500
	signed char stepLocal_38 = var_1_94;
	if (var_1_10) {
		var_1_100 = (! var_1_11);
	} else {
		if (stepLocal_38 >= var_1_18) {
			var_1_100 = (! 0);
		}
	}


	// From: Req39Batch29Amount500
	unsigned short int stepLocal_39 = var_1_119;
	if (stepLocal_39 != (var_1_25 - var_1_68)) {
		var_1_101 = var_1_86;
	} else {
		var_1_101 = var_1_37;
	}


	// From: Req43Batch29Amount500
	if (var_1_83) {
		var_1_108 = -256;
	}


	// From: Req44Batch29Amount500
	if (last_1_var_1_109) {
		var_1_109 = var_1_12;
	} else {
		var_1_109 = var_1_12;
	}


	// From: Req45Batch29Amount500
	if (var_1_5) {
		var_1_110 = var_1_36;
	} else {
		var_1_110 = var_1_36;
	}


	// From: Req49Batch29Amount500
	var_1_114 = var_1_57;


	// From: Req40Batch29Amount500
	signed short int stepLocal_41 = var_1_38;
	signed char stepLocal_40 = var_1_94;
	if (1 >= stepLocal_41) {
		var_1_102 = (max (var_1_53 , ((max (var_1_103 , var_1_104)) - (min (var_1_68 , var_1_49)))));
	} else {
		if (var_1_46 >= stepLocal_40) {
			var_1_102 = (max (var_1_104 , var_1_80));
		}
	}


	// From: Req2Batch29Amount500
	unsigned char stepLocal_2 = var_1_39;
	if (var_1_53 >= stepLocal_2) {
		var_1_13 = (var_1_22 + var_1_48);
	}


	// From: Req26Batch29Amount500
	unsigned short int stepLocal_24 = var_1_54;
	unsigned char stepLocal_23 = var_1_10;
	if (var_1_12 || stepLocal_23) {
		if (stepLocal_24 <= ((max (25 , var_1_39)) << var_1_108)) {
			var_1_71 = (var_1_11 || (var_1_10 || var_1_72));
		} else {
			var_1_71 = (! var_1_11);
		}
	} else {
		var_1_71 = (! (var_1_5 && var_1_10));
	}


	// From: Req8Batch29Amount500
	unsigned char stepLocal_6 = var_1_109;
	if (var_1_97 < var_1_29) {
		if (stepLocal_6 || var_1_11) {
			var_1_33 = var_1_28;
		} else {
			var_1_33 = (var_1_29 - (7.95 + var_1_34));
		}
	} else {
		var_1_33 = (((max (var_1_35 , var_1_36)) + (max (var_1_37 , 127.4))) + var_1_34);
	}


	// From: Req22Batch29Amount500
	signed long int stepLocal_19 = - 100;
	if ((- var_1_101) < var_1_37) {
		if (var_1_40 < stepLocal_19) {
			var_1_60 = (max (var_1_29 , var_1_34));
		} else {
			var_1_60 = (min (var_1_37 , ((min (var_1_29 , var_1_34)) - (var_1_61 + var_1_62))));
		}
	}


	// From: Req30Batch29Amount500
	if ((var_1_74 / var_1_17) > var_1_97) {
		var_1_84 = ((var_1_76 - var_1_43) + var_1_42);
	}


	// From: Req33Batch29Amount500
	if (var_1_83) {
		var_1_91 = (var_1_68 - var_1_42);
	} else {
		if (var_1_100) {
			var_1_91 = (abs ((var_1_93 - var_1_25) - (var_1_42 + var_1_94)));
		} else {
			var_1_91 = (min ((max (var_1_89 , var_1_42)) , (max (var_1_68 , var_1_40))));
		}
	}


	// From: Req42Batch29Amount500
	if (var_1_109) {
		var_1_107 = var_1_72;
	} else {
		var_1_107 = var_1_83;
	}


	// From: Req46Batch29Amount500
	if (var_1_71) {
		var_1_111 = var_1_28;
	}


	// From: Req50Batch29Amount500
	if (var_1_107) {
		var_1_115 = var_1_53;
	} else {
		var_1_115 = var_1_80;
	}


	// From: Req21Batch29Amount500
	signed short int stepLocal_18 = var_1_115;
	if ((max ((last_1_var_1_59 / var_1_24) , var_1_52)) == stepLocal_18) {
		var_1_59 = (var_1_102 + last_1_var_1_59);
	}


	// From: Req28Batch29Amount500
	signed long int stepLocal_27 = var_1_59;
	signed long int stepLocal_26 = abs (var_1_40);
	signed long int stepLocal_25 = 32;
	if (stepLocal_27 >= var_1_22) {
		if (stepLocal_26 >= var_1_49) {
			if (var_1_119 <= stepLocal_25) {
				var_1_79 = ((var_1_80 - var_1_24) - var_1_102);
			}
		} else {
			var_1_79 = (var_1_38 + var_1_41);
		}
	} else {
		var_1_79 = (max (var_1_69 , var_1_70));
	}


	// From: Req12Batch29Amount500
	signed long int stepLocal_9 = var_1_22 * (abs (-1));
	unsigned long int stepLocal_8 = var_1_52;
	if (stepLocal_8 > (min (var_1_46 , (min (var_1_38 , var_1_13))))) {
		if (stepLocal_9 == 16) {
			var_1_45 = var_1_40;
		}
	}


	// From: Req29Batch29Amount500
	signed long int stepLocal_29 = max (var_1_13 , (min (-100 , var_1_99)));
	signed long int stepLocal_28 = min (var_1_70 , var_1_54);
	if ((var_1_119 + var_1_38) >= stepLocal_28) {
		if ((var_1_39 * var_1_45) >= stepLocal_29) {
			var_1_81 = (var_1_5 && (var_1_12 && var_1_82));
		} else {
			var_1_81 = (var_1_12 || var_1_83);
		}
	}


	// From: Req52Batch29Amount500
	if (var_1_71) {
		var_1_117 = var_1_29;
	} else {
		var_1_117 = var_1_28;
	}


	// From: Req1Batch29Amount500
	unsigned short int stepLocal_1 = var_1_84;
	unsigned short int stepLocal_0 = var_1_84;
	if (var_1_48 != stepLocal_1) {
		if (stepLocal_0 >= (var_1_48 + var_1_13)) {
			var_1_1 = var_1_5;
		} else {
			if (((4.6 * var_1_114) * 1.000000002E8) >= ((var_1_117 + var_1_117) + (3.75 + var_1_117))) {
				var_1_1 = (! (var_1_10 || var_1_11));
			}
		}
	} else {
		var_1_1 = var_1_12;
	}


	// From: Req34Batch29Amount500
	if ((var_1_59 ^ var_1_39) > var_1_38) {
		var_1_95 = (! var_1_5);
	}


	// From: Req36Batch29Amount500
	var_1_98 = (var_1_72 || (! (var_1_107 || var_1_12)));


	// From: Req53Batch29Amount500
	if (var_1_1) {
		var_1_118 = var_1_72;
	} else {
		var_1_118 = var_1_72;
	}


	// From: Req19Batch29Amount500
	signed short int stepLocal_15 = var_1_46;
	unsigned long int stepLocal_14 = (max (var_1_50 , var_1_56)) - var_1_79;
	if ((var_1_50 / var_1_23) != stepLocal_15) {
		if (stepLocal_14 <= (min (var_1_99 , var_1_115))) {
			var_1_55 = ((min (var_1_35 , var_1_34)) + (min ((min (var_1_36 , var_1_37)) , var_1_57)));
		} else {
			var_1_55 = var_1_35;
		}
	}


	// From: Req48Batch29Amount500
	if (var_1_81) {
		var_1_113 = var_1_39;
	}


	// From: Req27Batch29Amount500
	if (var_1_36 >= 49.9) {
		if (((var_1_62 + var_1_61) - var_1_29) <= (var_1_34 - var_1_74)) {
			if (var_1_84 <= var_1_113) {
				var_1_73 = ((var_1_76 + (var_1_77 - var_1_53)) - var_1_40);
			} else {
				var_1_73 = ((var_1_78 - var_1_13) - (min (var_1_22 , 0)));
			}
		} else {
			var_1_73 = (var_1_43 + 16);
		}
	} else {
		var_1_73 = 10;
	}


	// From: Req6Batch29Amount500
	unsigned char stepLocal_5 = var_1_17 == var_1_85;
	signed long int stepLocal_4 = 8;
	if (var_1_20 > stepLocal_4) {
		if (stepLocal_5 || var_1_95) {
			var_1_27 = var_1_28;
		} else {
			var_1_27 = (var_1_29 - 1000.7);
		}
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req47Batch29Amount500
	if (var_1_118) {
		var_1_112 = var_1_80;
	} else {
		var_1_112 = var_1_45;
	}


	// From: Req51Batch29Amount500
	if (var_1_118) {
		var_1_116 = var_1_86;
	} else {
		var_1_116 = var_1_57;
	}


	// From: Req11Batch29Amount500
	if (var_1_29 > (abs (var_1_55))) {
		var_1_44 = (var_1_105 && (! var_1_12));
	}


	// From: Req32Batch29Amount500
	unsigned long int stepLocal_33 = (min (var_1_52 , var_1_78)) << 4;
	signed long int stepLocal_32 = min (var_1_119 , var_1_77);
	unsigned char stepLocal_31 = var_1_11;
	unsigned short int stepLocal_30 = var_1_113;
	if (24.05 < var_1_86) {
		if (var_1_43 > stepLocal_30) {
			var_1_87 = (-2 + (var_1_69 + (max (var_1_70 , var_1_88))));
		} else {
			if (var_1_100) {
				if (var_1_12) {
					if (stepLocal_33 < (min ((abs (var_1_23)) , var_1_25))) {
						if (stepLocal_32 < var_1_113) {
							var_1_87 = ((max ((var_1_88 + var_1_70) , (var_1_69 + var_1_89))) + var_1_42);
						} else {
							var_1_87 = (max (var_1_69 , var_1_89));
						}
					}
				} else {
					if (! var_1_109) {
						var_1_87 = (var_1_41 - (abs (var_1_88)));
					} else {
						var_1_87 = (var_1_42 - var_1_40);
					}
				}
			} else {
				if (var_1_10) {
					var_1_87 = (abs (16 + var_1_89));
				} else {
					var_1_87 = -10;
				}
			}
		}
	} else {
		if (var_1_105 && stepLocal_31) {
			var_1_87 = ((abs (var_1_68)) - var_1_42);
		} else {
			if (var_1_37 >= (min ((var_1_17 / var_1_90) , var_1_28))) {
				var_1_87 = (var_1_42 + (max ((var_1_70 + var_1_88) , -16)));
			}
		}
	}


	// From: Req23Batch29Amount500
	unsigned char stepLocal_20 = var_1_44;
	if (stepLocal_20 && (var_1_40 >= var_1_48)) {
		if (var_1_117 >= ((128.5 + var_1_61) - var_1_34)) {
			var_1_63 = (var_1_64 - var_1_39);
		}
	} else {
		var_1_63 = (var_1_119 + var_1_99);
	}


	// From: Req7Batch29Amount500
	if (var_1_22 > var_1_99) {
		var_1_30 = (var_1_10 || var_1_11);
	} else {
		if (var_1_22 != (var_1_25 / var_1_23)) {
			if (((var_1_63 * var_1_59) + var_1_26) < var_1_18) {
				var_1_30 = (! (! var_1_5));
			} else {
				var_1_30 = var_1_10;
			}
		} else {
			if (var_1_11 || var_1_10) {
				var_1_30 = (! (! 0));
			}
		}
	}


	// From: Req3Batch29Amount500
	unsigned char stepLocal_3 = var_1_39;
	if (var_1_116 >= (var_1_111 / (abs (var_1_17)))) {
		if (stepLocal_3 < var_1_84) {
			var_1_16 = var_1_18;
		} else {
			var_1_16 = (min (-64 , (min ((min (var_1_18 , var_1_19)) , var_1_20))));
		}
	}


	// From: Req4Batch29Amount500
	if (var_1_17 == var_1_27) {
		var_1_21 = (var_1_5 && var_1_11);
	} else {
		var_1_21 = (var_1_5 || var_1_12);
	}


	// From: Req24Batch29Amount500
	unsigned short int stepLocal_21 = var_1_63;
	if ((- var_1_49) > stepLocal_21) {
		var_1_65 = (var_1_35 + var_1_62);
	} else {
		var_1_65 = ((abs (var_1_35 + var_1_37)) + (max ((min (4.75 , var_1_57)) , var_1_62)));
	}


	// From: Req25Batch29Amount500
	signed long int stepLocal_22 = var_1_38 + var_1_59;
	if (stepLocal_22 < (var_1_108 + var_1_64)) {
		if (var_1_44) {
			var_1_67 = var_1_42;
		} else {
			var_1_67 = ((var_1_68 - 8) - (var_1_25 + var_1_42));
		}
	} else {
		var_1_67 = (min ((var_1_42 + (var_1_69 + var_1_70)) , var_1_40));
	}


	// From: Req20Batch29Amount500
	unsigned char stepLocal_17 = var_1_41;
	unsigned char stepLocal_16 = var_1_24;
	if (stepLocal_17 >= (var_1_113 + var_1_99)) {
		if (var_1_99 < stepLocal_16) {
			var_1_58 = (var_1_18 + var_1_26);
		}
	} else {
		var_1_58 = (min (var_1_24 , (max (var_1_87 , (max (var_1_26 , var_1_115))))));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 190);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -230584.3009213691390e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -230584.3009213691390e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -230584.3009213691390e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 64);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 64);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 2147483647);
	assume_abort_if_not(var_1_50 <= 4294967295);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 16384);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 32767);
	assume_abort_if_not(var_1_64 <= 65534);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 62);
	assume_abort_if_not(var_1_68 <= 126);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -31);
	assume_abort_if_not(var_1_69 <= 32);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -31);
	assume_abort_if_not(var_1_70 <= 31);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 0);
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 16383);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 24575);
	assume_abort_if_not(var_1_77 <= 32767);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 49150);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= 16382);
	assume_abort_if_not(var_1_80 <= 32766);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 1);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 1);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427382800e+12F && var_1_86 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= -31);
	assume_abort_if_not(var_1_88 <= 31);
	var_1_89 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_89 >= -31);
	assume_abort_if_not(var_1_89 <= 31);
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= -922337.2036854776000e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854776000e+12F && var_1_90 >= 1.0e-20F ));
	assume_abort_if_not(var_1_90 != 0.0F);
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 63);
	assume_abort_if_not(var_1_93 <= 126);
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 63);
	var_1_103 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_103 >= 2147483647);
	assume_abort_if_not(var_1_103 <= 4294967294);
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 2147483647);
	assume_abort_if_not(var_1_104 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_119 = var_1_119;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_48 != var_1_84) ? ((var_1_84 >= (var_1_48 + var_1_13)) ? (var_1_1 == ((unsigned char) var_1_5)) : ((((4.6 * var_1_114) * 1.000000002E8) >= ((var_1_117 + var_1_117) + (3.75 + var_1_117))) ? (var_1_1 == ((unsigned char) (! (var_1_10 || var_1_11)))) : 1)) : (var_1_1 == ((unsigned char) var_1_12))) && ((var_1_53 >= var_1_39) ? (var_1_13 == ((unsigned short int) (var_1_22 + var_1_48))) : 1)) && ((var_1_116 >= (var_1_111 / (abs (var_1_17)))) ? ((var_1_39 < var_1_84) ? (var_1_16 == ((signed char) var_1_18)) : (var_1_16 == ((signed char) (min (-64 , (min ((min (var_1_18 , var_1_19)) , var_1_20))))))) : 1)) && ((var_1_17 == var_1_27) ? (var_1_21 == ((unsigned char) (var_1_5 && var_1_11))) : (var_1_21 == ((unsigned char) (var_1_5 || var_1_12))))) && (var_1_5 ? (var_1_22 == ((unsigned char) ((min ((abs (var_1_23)) , (var_1_24 - var_1_25))) - var_1_26))) : 1)) && ((var_1_20 > 8) ? (((var_1_17 == var_1_85) || var_1_95) ? (var_1_27 == ((double) var_1_28)) : (var_1_27 == ((double) (var_1_29 - 1000.7)))) : (var_1_27 == ((double) var_1_29)))) && ((var_1_22 > var_1_99) ? (var_1_30 == ((unsigned char) (var_1_10 || var_1_11))) : ((var_1_22 != (var_1_25 / var_1_23)) ? ((((var_1_63 * var_1_59) + var_1_26) < var_1_18) ? (var_1_30 == ((unsigned char) (! (! var_1_5)))) : (var_1_30 == ((unsigned char) var_1_10))) : ((var_1_11 || var_1_10) ? (var_1_30 == ((unsigned char) (! (! 0)))) : 1)))) && ((var_1_97 < var_1_29) ? ((var_1_109 || var_1_11) ? (var_1_33 == ((double) var_1_28)) : (var_1_33 == ((double) (var_1_29 - (7.95 + var_1_34))))) : (var_1_33 == ((double) (((max (var_1_35 , var_1_36)) + (max (var_1_37 , 127.4))) + var_1_34))))) && (var_1_38 == ((signed short int) (50 + (var_1_26 - last_1_var_1_73))))) && (((last_1_var_1_113 + last_1_var_1_99) >= last_1_var_1_38) ? (var_1_39 == ((unsigned char) (var_1_25 + ((min (var_1_40 , var_1_41)) + var_1_42)))) : (var_1_39 == ((unsigned char) var_1_43)))) && ((var_1_29 > (abs (var_1_55))) ? (var_1_44 == ((unsigned char) (var_1_105 && (! var_1_12)))) : 1)) && ((var_1_52 > (min (var_1_46 , (min (var_1_38 , var_1_13))))) ? (((var_1_22 * (abs (-1))) == 16) ? (var_1_45 == ((unsigned short int) var_1_40)) : 1) : 1)) && ((last_1_var_1_33 != last_1_var_1_55) ? (var_1_46 == ((signed short int) (max (var_1_40 , var_1_25)))) : (var_1_46 == ((signed short int) (var_1_26 - (max (last_1_var_1_13 , (17698 - var_1_23)))))))) && ((var_1_28 != 5.4) ? ((var_1_18 >= last_1_var_1_47) ? (var_1_47 == ((signed char) (max (var_1_18 , -8)))) : (var_1_47 == ((signed char) var_1_24))) : 1)) && ((var_1_43 <= 0) ? (var_1_48 == ((unsigned char) ((min (var_1_25 , var_1_26)) + var_1_41))) : 1)) && ((((abs (last_1_var_1_49)) | var_1_42) <= last_1_var_1_22) ? ((last_1_var_1_99 <= (var_1_24 * last_1_var_1_49)) ? (var_1_49 == ((signed long int) (4 - last_1_var_1_49))) : (var_1_49 == ((signed long int) (min ((max (var_1_19 , last_1_var_1_49)) , var_1_23))))) : ((((min (4121020038u , var_1_50)) - 32u) >= last_1_var_1_48) ? (var_1_49 == ((signed long int) (last_1_var_1_84 - (var_1_25 + (abs (last_1_var_1_58)))))) : 1))) && ((var_1_28 < (last_1_var_1_85 + var_1_34)) ? (var_1_52 == ((unsigned long int) var_1_43)) : (var_1_52 == ((unsigned long int) (last_1_var_1_63 + (min (last_1_var_1_38 , var_1_24))))))) && ((! var_1_11) ? (var_1_53 == ((unsigned short int) (min (var_1_42 , ((22488 + var_1_54) - (max (25 , var_1_23))))))) : (var_1_53 == ((unsigned short int) (max (var_1_22 , (max (var_1_42 , var_1_22)))))))) && (((var_1_50 / var_1_23) != var_1_46) ? ((((max (var_1_50 , var_1_56)) - var_1_79) <= (min (var_1_99 , var_1_115))) ? (var_1_55 == ((float) ((min (var_1_35 , var_1_34)) + (min ((min (var_1_36 , var_1_37)) , var_1_57))))) : (var_1_55 == ((float) var_1_35))) : 1)) && ((var_1_41 >= (var_1_113 + var_1_99)) ? ((var_1_99 < var_1_24) ? (var_1_58 == ((signed long int) (var_1_18 + var_1_26))) : 1) : (var_1_58 == ((signed long int) (min (var_1_24 , (max (var_1_87 , (max (var_1_26 , var_1_115)))))))))) && (((max ((last_1_var_1_59 / var_1_24) , var_1_52)) == var_1_115) ? (var_1_59 == ((signed long int) (var_1_102 + last_1_var_1_59))) : 1)) && (((- var_1_101) < var_1_37) ? ((var_1_40 < (- 100)) ? (var_1_60 == ((float) (max (var_1_29 , var_1_34)))) : (var_1_60 == ((float) (min (var_1_37 , ((min (var_1_29 , var_1_34)) - (var_1_61 + var_1_62))))))) : 1)) && ((var_1_44 && (var_1_40 >= var_1_48)) ? ((var_1_117 >= ((128.5 + var_1_61) - var_1_34)) ? (var_1_63 == ((unsigned short int) (var_1_64 - var_1_39))) : 1) : (var_1_63 == ((unsigned short int) (var_1_119 + var_1_99))))) && (((- var_1_49) > var_1_63) ? (var_1_65 == ((double) (var_1_35 + var_1_62))) : (var_1_65 == ((double) ((abs (var_1_35 + var_1_37)) + (max ((min (4.75 , var_1_57)) , var_1_62))))))) && (((var_1_38 + var_1_59) < (var_1_108 + var_1_64)) ? (var_1_44 ? (var_1_67 == ((signed char) var_1_42)) : (var_1_67 == ((signed char) ((var_1_68 - 8) - (var_1_25 + var_1_42))))) : (var_1_67 == ((signed char) (min ((var_1_42 + (var_1_69 + var_1_70)) , var_1_40)))))) && ((var_1_12 || var_1_10) ? ((var_1_54 <= ((max (25 , var_1_39)) << var_1_108)) ? (var_1_71 == ((unsigned char) (var_1_11 || (var_1_10 || var_1_72)))) : (var_1_71 == ((unsigned char) (! var_1_11)))) : (var_1_71 == ((unsigned char) (! (var_1_5 && var_1_10)))))) && ((var_1_36 >= 49.9) ? ((((var_1_62 + var_1_61) - var_1_29) <= (var_1_34 - var_1_74)) ? ((var_1_84 <= var_1_113) ? (var_1_73 == ((unsigned short int) ((var_1_76 + (var_1_77 - var_1_53)) - var_1_40))) : (var_1_73 == ((unsigned short int) ((var_1_78 - var_1_13) - (min (var_1_22 , 0)))))) : (var_1_73 == ((unsigned short int) (var_1_43 + 16)))) : (var_1_73 == ((unsigned short int) 10)))) && ((var_1_59 >= var_1_22) ? (((abs (var_1_40)) >= var_1_49) ? ((var_1_119 <= 32) ? (var_1_79 == ((signed short int) ((var_1_80 - var_1_24) - var_1_102))) : 1) : (var_1_79 == ((signed short int) (var_1_38 + var_1_41)))) : (var_1_79 == ((signed short int) (max (var_1_69 , var_1_70)))))) && (((var_1_119 + var_1_38) >= (min (var_1_70 , var_1_54))) ? (((var_1_39 * var_1_45) >= (max (var_1_13 , (min (-100 , var_1_99))))) ? (var_1_81 == ((unsigned char) (var_1_5 && (var_1_12 && var_1_82)))) : (var_1_81 == ((unsigned char) (var_1_12 || var_1_83)))) : 1)) && (((var_1_74 / var_1_17) > var_1_97) ? (var_1_84 == ((unsigned short int) ((var_1_76 - var_1_43) + var_1_42))) : 1)) && ((var_1_74 >= last_1_var_1_85) ? (var_1_85 == ((double) ((var_1_61 - var_1_34) + (var_1_62 - var_1_86)))) : 1)) && ((24.05 < var_1_86) ? ((var_1_43 > var_1_113) ? (var_1_87 == ((signed char) (-2 + (var_1_69 + (max (var_1_70 , var_1_88)))))) : (var_1_100 ? (var_1_12 ? ((((min (var_1_52 , var_1_78)) << 4) < (min ((abs (var_1_23)) , var_1_25))) ? (((min (var_1_119 , var_1_77)) < var_1_113) ? (var_1_87 == ((signed char) ((max ((var_1_88 + var_1_70) , (var_1_69 + var_1_89))) + var_1_42))) : (var_1_87 == ((signed char) (max (var_1_69 , var_1_89))))) : 1) : ((! var_1_109) ? (var_1_87 == ((signed char) (var_1_41 - (abs (var_1_88))))) : (var_1_87 == ((signed char) (var_1_42 - var_1_40))))) : (var_1_10 ? (var_1_87 == ((signed char) (abs (16 + var_1_89)))) : (var_1_87 == ((signed char) -10))))) : ((var_1_105 && var_1_11) ? (var_1_87 == ((signed char) ((abs (var_1_68)) - var_1_42))) : ((var_1_37 >= (min ((var_1_17 / var_1_90) , var_1_28))) ? (var_1_87 == ((signed char) (var_1_42 + (max ((var_1_70 + var_1_88) , -16))))) : 1)))) && (var_1_83 ? (var_1_91 == ((signed char) (var_1_68 - var_1_42))) : (var_1_100 ? (var_1_91 == ((signed char) (abs ((var_1_93 - var_1_25) - (var_1_42 + var_1_94))))) : (var_1_91 == ((signed char) (min ((max (var_1_89 , var_1_42)) , (max (var_1_68 , var_1_40))))))))) && (((var_1_59 ^ var_1_39) > var_1_38) ? (var_1_95 == ((unsigned char) (! var_1_5))) : 1)) && (var_1_97 == ((float) (var_1_86 + (var_1_36 + var_1_37))))) && (var_1_98 == ((unsigned char) (var_1_72 || (! (var_1_107 || var_1_12)))))) && ((last_1_var_1_108 != ((var_1_93 - var_1_94) / var_1_68)) ? (((max (last_1_var_1_49 , var_1_25)) <= var_1_94) ? (var_1_99 == ((unsigned char) ((100 - var_1_42) + var_1_93))) : ((last_1_var_1_110 < (last_1_var_1_97 / var_1_17)) ? ((var_1_69 <= (max (last_1_var_1_22 , last_1_var_1_49))) ? (var_1_99 == ((unsigned char) (4 + var_1_42))) : ((last_1_var_1_59 > (min (last_1_var_1_39 , last_1_var_1_53))) ? (var_1_99 == ((unsigned char) (max ((var_1_24 - (min (var_1_68 , var_1_26))) , var_1_40)))) : (var_1_99 == ((unsigned char) (var_1_40 + (min ((abs (4)) , (var_1_93 - var_1_25)))))))) : 1)) : 1)) && (var_1_10 ? (var_1_100 == ((unsigned char) (! var_1_11))) : ((var_1_94 >= var_1_18) ? (var_1_100 == ((unsigned char) (! 0))) : 1))) && ((var_1_119 != (var_1_25 - var_1_68)) ? (var_1_101 == ((double) var_1_86)) : (var_1_101 == ((double) var_1_37)))) && ((1 >= var_1_38) ? (var_1_102 == ((unsigned long int) (max (var_1_53 , ((max (var_1_103 , var_1_104)) - (min (var_1_68 , var_1_49))))))) : ((var_1_46 >= var_1_94) ? (var_1_102 == ((unsigned long int) (max (var_1_104 , var_1_80)))) : 1))) && ((var_1_56 != (var_1_41 + (- 32u))) ? (var_1_105 == ((unsigned char) ((last_1_var_1_44 || var_1_82) && var_1_5))) : (var_1_83 ? (var_1_105 == ((unsigned char) var_1_5)) : 1))) && (var_1_109 ? (var_1_107 == ((unsigned char) var_1_72)) : (var_1_107 == ((unsigned char) var_1_83)))) && (var_1_83 ? (var_1_108 == ((signed short int) -256)) : 1)) && (last_1_var_1_109 ? (var_1_109 == ((unsigned char) var_1_12)) : (var_1_109 == ((unsigned char) var_1_12)))) && (var_1_5 ? (var_1_110 == ((double) var_1_36)) : (var_1_110 == ((double) var_1_36)))) && (var_1_71 ? (var_1_111 == ((float) var_1_28)) : 1)) && (var_1_118 ? (var_1_112 == ((signed short int) var_1_80)) : (var_1_112 == ((signed short int) var_1_45)))) && (var_1_81 ? (var_1_113 == ((unsigned short int) var_1_39)) : 1)) && (var_1_114 == ((double) var_1_57))) && (var_1_107 ? (var_1_115 == ((signed short int) var_1_53)) : (var_1_115 == ((signed short int) var_1_80)))) && (var_1_118 ? (var_1_116 == ((float) var_1_86)) : (var_1_116 == ((float) var_1_57)))) && (var_1_71 ? (var_1_117 == ((float) var_1_29)) : (var_1_117 == ((float) var_1_28)))) && (var_1_1 ? (var_1_118 == ((unsigned char) var_1_72)) : (var_1_118 == ((unsigned char) var_1_72)))) && (last_1_var_1_30 ? (((last_1_var_1_117 + last_1_var_1_110) <= var_1_74) ? (((min (last_1_var_1_99 , (last_1_var_1_84 * last_1_var_1_84))) < var_1_23) ? (var_1_119 == ((unsigned short int) var_1_76)) : (var_1_119 == ((unsigned short int) 0))) : (var_1_119 == ((unsigned short int) last_1_var_1_47))) : (var_1_119 == ((unsigned short int) last_1_var_1_119)))
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
