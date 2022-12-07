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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;
signed char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 50;
signed char var_1_27 = -1;
signed char var_1_28 = 2;
signed char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 8;
unsigned long int var_1_32 = 1;
signed char var_1_33 = 32;
signed char var_1_34 = 32;
signed char var_1_35 = 25;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 4;
double var_1_38 = 127.5;
double var_1_39 = -0.5;
double var_1_40 = 4.6;
double var_1_41 = 63.25;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 25;
signed long int var_1_47 = -256;
float var_1_48 = 1.7;
signed char var_1_49 = 0;
signed long int var_1_50 = -32;
unsigned long int var_1_51 = 256;
signed long int var_1_52 = -100000;
double var_1_53 = 7.5;
signed char var_1_54 = 32;
double var_1_55 = 499.8;
signed char var_1_56 = -128;
signed char var_1_57 = 8;
signed short int var_1_58 = 16;
unsigned char var_1_59 = 5;
signed short int var_1_60 = -8;
signed long int var_1_61 = -32;
unsigned long int var_1_62 = 32;
unsigned long int var_1_63 = 8;
signed long int var_1_64 = 2;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
double var_1_67 = 0.0;
signed long int var_1_68 = 8;
unsigned char var_1_69 = 4;
float var_1_70 = 8.75;
unsigned char var_1_71 = 1;
signed long int var_1_72 = 64;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 128;
float var_1_77 = 10.375;
float var_1_78 = 128.5;
signed long int var_1_79 = 50;
unsigned long int var_1_80 = 2424695456;
unsigned char var_1_81 = 8;
float var_1_82 = 3.875;
float var_1_83 = 100.5;
float var_1_84 = -0.5;
float var_1_85 = 255.75;
float var_1_86 = 64.5;
double var_1_87 = 5.2;
unsigned char var_1_88 = 16;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 1;
unsigned short int var_1_91 = 64;
unsigned short int var_1_92 = 54660;
signed short int var_1_93 = 5;
unsigned long int var_1_94 = 32;
float var_1_95 = 31.25;
signed long int var_1_96 = -2;
unsigned short int var_1_97 = 32;
unsigned short int var_1_99 = 0;
unsigned char var_1_100 = 1;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 8;
signed short int var_1_103 = -5;
unsigned char var_1_104 = 4;
double var_1_105 = 499.6;
double var_1_106 = 4.35;
unsigned long int var_1_107 = 4;
unsigned short int var_1_108 = 2;
signed char var_1_109 = -100;
unsigned long int var_1_110 = 8;
float var_1_111 = 15.75;
float var_1_112 = 0.72;
unsigned char var_1_113 = 8;
double var_1_114 = 2.25;
float var_1_115 = 99.895;
signed long int var_1_116 = 256;
signed short int var_1_117 = -256;
signed long int var_1_118 = 1;
unsigned short int var_1_119 = 16;
float var_1_120 = 127.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 128;
unsigned char last_1_var_1_6 = 0;
signed long int last_1_var_1_10 = 500;
signed long int last_1_var_1_14 = 256;
unsigned char last_1_var_1_16 = 64;
unsigned short int last_1_var_1_22 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_24) {
		var_1_23 = (min ((var_1_25 - (abs (var_1_26))) , (var_1_27 - var_1_28)));
	}


	// From: CodeObject2
	if ((var_1_23 / (var_1_30 + var_1_31)) >= var_1_27) {
		if (var_1_24 || ((var_1_27 >> var_1_26) > (var_1_30 | 10))) {
			if ((var_1_30 * (2602482040u - var_1_31)) > var_1_32) {
				var_1_29 = (var_1_27 - ((var_1_33 + var_1_34) - var_1_35));
			} else {
				var_1_29 = (min (var_1_27 , var_1_33));
			}
		}
	} else {
		var_1_29 = var_1_33;
	}


	// From: CodeObject3
	if (var_1_35 > var_1_33) {
		var_1_36 = (abs (var_1_35));
	} else {
		var_1_36 = var_1_28;
	}


	// From: CodeObject4
	if (var_1_29 >= var_1_34) {
		if (var_1_24) {
			var_1_37 = var_1_28;
		}
	} else {
		var_1_37 = var_1_31;
	}


	// From: CodeObject5
	if ((var_1_31 | (~ var_1_29)) < var_1_27) {
		if (-4 >= var_1_36) {
			if ((var_1_27 - 8) < var_1_25) {
				var_1_38 = var_1_39;
			}
		} else {
			if (var_1_26 <= var_1_31) {
				var_1_38 = ((32.5 + var_1_40) - var_1_41);
			}
		}
	} else {
		if (var_1_34 <= (var_1_26 | (var_1_37 / var_1_31))) {
			var_1_38 = var_1_39;
		}
	}


	// From: CodeObject6
	if (var_1_29 > var_1_32) {
		if ((abs (var_1_34)) > (var_1_23 * (var_1_26 * var_1_37))) {
			if (var_1_24) {
				var_1_42 = (var_1_43 - (64 - (32 - var_1_44)));
			}
		}
	} else {
		if (var_1_45) {
			var_1_42 = (abs (abs (32)));
		}
	}


	// From: CodeObject7
	if ((var_1_37 ^ (var_1_34 ^ var_1_27)) < ((abs (-64)) - (abs (var_1_47)))) {
		if (var_1_45) {
			var_1_46 = (min ((abs (var_1_28)) , (abs (var_1_42))));
		} else {
			var_1_46 = (abs (var_1_28));
		}
	}


	// From: CodeObject8
	if (var_1_25 < (var_1_36 + var_1_31)) {
		if (var_1_29 > var_1_26) {
			if (var_1_39 > (1.5 + var_1_40)) {
				var_1_48 = (abs (var_1_39));
			} else {
				var_1_48 = (min (500.625f , var_1_41));
			}
		}
	}


	// From: CodeObject9
	if (var_1_41 < var_1_48) {
		var_1_49 = (abs (abs (var_1_35)));
	} else {
		var_1_49 = (max (var_1_26 , var_1_28));
	}


	// From: CodeObject10
	if (var_1_45 || (var_1_51 < (~ 100u))) {
		if ((var_1_40 + var_1_41) <= var_1_48) {
			var_1_50 = (max (var_1_36 , (max (var_1_52 , var_1_33))));
		}
	}


	// From: CodeObject11
	if (var_1_24) {
		var_1_53 = var_1_39;
	} else {
		if (var_1_45) {
			if ((min (var_1_38 , var_1_48)) < var_1_40) {
				var_1_53 = (abs (var_1_41 - var_1_40));
			}
		}
	}


	// From: CodeObject12
	if (! (var_1_25 <= var_1_29)) {
		var_1_54 = (var_1_44 + var_1_34);
	} else {
		var_1_54 = (var_1_44 - var_1_35);
	}


	// From: CodeObject13
	if ((min (var_1_34 , var_1_50)) <= (var_1_36 ^ var_1_37)) {
		if (var_1_34 <= var_1_42) {
			var_1_55 = (abs (var_1_39));
		} else {
			if (var_1_24) {
				var_1_55 = 99.4;
			}
		}
	}


	// From: CodeObject14
	if (var_1_24) {
		var_1_56 = (min (((max (var_1_28 , var_1_34)) - var_1_44) , var_1_35));
	}


	// From: CodeObject15
	if ((-1 >> (max (var_1_44 , var_1_58))) <= (min ((abs (var_1_30)) , var_1_23))) {
		var_1_57 = (abs (max (var_1_58 , 2)));
	}


	// From: CodeObject16
	if (var_1_26 <= var_1_25) {
		var_1_59 = (min (var_1_33 , (abs (var_1_28))));
	} else {
		var_1_59 = (max (8 , 4));
	}


	// From: CodeObject17
	if (var_1_36 > var_1_32) {
		var_1_60 = (abs (var_1_28));
	} else {
		if (var_1_52 < (abs (var_1_44))) {
			var_1_60 = ((max ((var_1_56 + var_1_26) , var_1_35)) + (var_1_25 + (abs (var_1_27))));
		}
	}


	// From: CodeObject18
	if (((abs (var_1_28)) / var_1_34) >= var_1_43) {
		var_1_61 = (abs (var_1_56));
	} else {
		if (var_1_28 <= (min (var_1_44 , var_1_52))) {
			var_1_61 = (abs (abs (var_1_26)));
		} else {
			var_1_61 = (min (var_1_57 , var_1_23));
		}
	}


	// From: CodeObject19
	if (var_1_36 > var_1_60) {
		var_1_62 = var_1_42;
	}


	// From: CodeObject20
	if (var_1_26 != (abs (var_1_44))) {
		var_1_63 = (abs (max (var_1_42 , (max (var_1_33 , var_1_37)))));
	} else {
		var_1_63 = (max (var_1_42 , var_1_58));
	}


	// From: CodeObject21
	var_1_64 = (abs (32));


	// From: CodeObject22
	if (var_1_37 < var_1_34) {
		if (var_1_45) {
			var_1_65 = (! var_1_66);
		}
	}


	// From: CodeObject23
	if (25 < (var_1_34 >> var_1_36)) {
		var_1_67 = (min (var_1_41 , var_1_40));
	}


	// From: CodeObject24
	if (var_1_64 < -256) {
		if (! ((abs (1)) == (min (var_1_42 , var_1_25)))) {
			var_1_68 = ((abs (var_1_28)) + var_1_57);
		} else {
			var_1_68 = ((min (var_1_30 , (1307711416 - var_1_34))) - (var_1_43 + var_1_42));
		}
	} else {
		if (! var_1_66) {
			var_1_68 = (min ((min (var_1_43 , -16)) , var_1_23));
		}
	}


	// From: CodeObject25
	if (var_1_37 > var_1_34) {
		if (var_1_31 >= var_1_23) {
			if (var_1_52 < var_1_29) {
				var_1_69 = (abs (var_1_44));
			}
		}
	}


	// From: CodeObject26
	if (var_1_71) {
		var_1_70 = (abs (abs (var_1_40)));
	} else {
		if (var_1_25 < var_1_36) {
			var_1_70 = (abs (var_1_39));
		} else {
			var_1_70 = ((max (var_1_41 , var_1_40)) - 24.22f);
		}
	}


	// From: CodeObject27
	if (var_1_63 > var_1_28) {
		if (var_1_44 < ((var_1_34 % var_1_31) / (min (var_1_33 , var_1_43)))) {
			var_1_72 = (max (var_1_36 , var_1_54));
		}
	} else {
		if ((abs (var_1_34 & var_1_32)) <= var_1_58) {
			var_1_72 = var_1_25;
		}
	}


	// From: CodeObject28
	if ((-128 + var_1_36) >= -5) {
		var_1_73 = ((var_1_66 && var_1_74) || var_1_75);
	}


	// From: CodeObject29
	if (! var_1_66) {
		if (var_1_73) {
			var_1_76 = (abs (var_1_58));
		}
	}


	// From: CodeObject30
	if (var_1_63 != var_1_34) {
		if (var_1_55 <= (var_1_41 - var_1_40)) {
			var_1_77 = (var_1_40 + (abs (min (500.5f , var_1_78))));
		} else {
			var_1_77 = var_1_39;
		}
	}


	// From: CodeObject31
	if (16u >= (var_1_80 - var_1_44)) {
		var_1_79 = (var_1_49 + -32);
	} else {
		if (var_1_76 <= (var_1_54 % var_1_81)) {
			var_1_79 = (abs (var_1_76));
		}
	}


	// From: CodeObject32
	var_1_82 = ((min (var_1_78 , (var_1_40 - var_1_83))) + ((max (var_1_84 , var_1_85)) + var_1_86));


	// From: CodeObject33
	if ((abs (var_1_46)) < (max (var_1_58 , var_1_68))) {
		if (var_1_40 < (abs (var_1_53 * var_1_82))) {
			if (var_1_75) {
				var_1_87 = var_1_84;
			} else {
				var_1_87 = (abs (var_1_84));
			}
		}
	} else {
		var_1_87 = (abs (var_1_83));
	}


	// From: CodeObject34
	if (var_1_45) {
		if (var_1_46 <= var_1_68) {
			var_1_88 = (abs (var_1_33));
		}
	} else {
		var_1_88 = (var_1_43 - (abs (var_1_31)));
	}


	// From: CodeObject35
	if ((var_1_40 - var_1_83) > var_1_39) {
		var_1_89 = ((! var_1_90) || (var_1_75 || var_1_66));
	} else {
		if ((var_1_69 ^ var_1_37) > (-50 + var_1_57)) {
			var_1_89 = (var_1_73 || var_1_90);
		}
	}


	// From: CodeObject36
	if (var_1_36 < (var_1_42 >> 8)) {
		var_1_91 = (var_1_31 + var_1_43);
	} else {
		var_1_91 = ((abs (var_1_92)) - var_1_69);
	}


	// From: CodeObject37
	if (var_1_67 >= var_1_41) {
		var_1_93 = (abs (min ((min (var_1_35 , var_1_44)) , var_1_76)));
	} else {
		if (var_1_42 < (var_1_47 & 8)) {
			if (((var_1_63 >> var_1_79) > var_1_59) || var_1_24) {
				var_1_93 = (max ((var_1_30 + var_1_28) , (min (var_1_33 , var_1_58))));
			}
		} else {
			var_1_93 = (min (var_1_69 , var_1_35));
		}
	}


	// From: CodeObject38
	if (! (var_1_53 > (var_1_70 + var_1_77))) {
		if (var_1_66) {
			var_1_94 = (min (var_1_92 , var_1_43));
		}
	} else {
		if ((var_1_49 + var_1_33) < (min ((-32 % var_1_81) , var_1_79))) {
			var_1_94 = (min (var_1_35 , var_1_37));
		} else {
			var_1_94 = var_1_58;
		}
	}


	// From: CodeObject39
	if (var_1_52 > var_1_27) {
		if (var_1_49 < var_1_76) {
			var_1_95 = (abs (50.5f));
		} else {
			if (var_1_66) {
				var_1_95 = (abs (var_1_85));
			} else {
				var_1_95 = (var_1_85 + var_1_84);
			}
		}
	}


	// From: CodeObject40
	if (var_1_24 || var_1_75) {
		if (var_1_75 && var_1_45) {
			if (((1534172761 - var_1_28) - var_1_76) > var_1_94) {
				var_1_96 = (abs (var_1_44));
			}
		}
	}


	// From: CodeObject41
	if (var_1_67 == var_1_41) {
		if ((max (var_1_32 , var_1_68)) >= var_1_96) {
			var_1_97 = (abs (max (var_1_59 , (abs (var_1_88)))));
		} else {
			var_1_97 = (abs (var_1_30));
		}
	} else {
		if ((max ((abs (var_1_33)) , var_1_50)) < (var_1_28 ^ var_1_44)) {
			var_1_97 = (var_1_92 - var_1_99);
		} else {
			var_1_97 = (max (var_1_28 , var_1_81));
		}
	}


	// From: CodeObject42
	if ((min (var_1_91 , var_1_57)) > var_1_68) {
		if (var_1_24) {
			var_1_100 = var_1_66;
		} else {
			var_1_100 = (((var_1_26 > var_1_28) && (! var_1_90)) || var_1_74);
		}
	}


	// From: CodeObject43
	if (var_1_83 <= var_1_85) {
		var_1_101 = (! var_1_75);
	}


	// From: CodeObject44
	if (var_1_68 >= var_1_63) {
		var_1_102 = (abs (max (var_1_28 , var_1_30)));
	}


	// From: CodeObject45
	if (var_1_81 <= var_1_43) {
		if (var_1_75 || var_1_89) {
			var_1_103 = (abs (10));
		}
	} else {
		if (var_1_89) {
			var_1_103 = (abs (min (var_1_31 , var_1_57)));
		} else {
			if ((var_1_94 + var_1_91) > var_1_31) {
				var_1_103 = (abs (abs (var_1_57)));
			} else {
				var_1_103 = var_1_30;
			}
		}
	}


	// From: CodeObject46
	if (var_1_24) {
		var_1_104 = var_1_35;
	}


	// From: CodeObject47
	var_1_105 = var_1_83;


	// From: CodeObject48
	if (var_1_73) {
		var_1_106 = var_1_39;
	} else {
		var_1_106 = var_1_41;
	}


	// From: CodeObject49
	var_1_107 = 2u;


	// From: CodeObject50
	if (var_1_73) {
		var_1_108 = var_1_42;
	} else {
		var_1_108 = var_1_69;
	}


	// From: CodeObject51
	var_1_109 = var_1_25;


	// From: CodeObject52
	if (var_1_73) {
		var_1_110 = var_1_76;
	} else {
		var_1_110 = var_1_31;
	}


	// From: CodeObject53
	if (var_1_74) {
		var_1_111 = var_1_83;
	} else {
		var_1_111 = var_1_40;
	}


	// From: CodeObject54
	if (var_1_89) {
		var_1_112 = var_1_84;
	} else {
		var_1_112 = 100.6f;
	}


	// From: CodeObject55
	if (var_1_73) {
		var_1_113 = var_1_28;
	} else {
		var_1_113 = var_1_33;
	}


	// From: CodeObject56
	var_1_114 = var_1_78;


	// From: CodeObject57
	if (var_1_75) {
		var_1_115 = var_1_78;
	} else {
		var_1_115 = var_1_83;
	}


	// From: CodeObject58
	var_1_116 = var_1_27;


	// From: CodeObject59
	if (var_1_89) {
		var_1_117 = var_1_31;
	}


	// From: CodeObject60
	if (var_1_24) {
		var_1_118 = var_1_113;
	}


	// From: CodeObject61
	if (var_1_30 >= var_1_58) {
		if ((max (var_1_36 , var_1_118)) == var_1_117) {
			if (((128.7f + var_1_86) / var_1_120) <= (var_1_38 * var_1_83)) {
				var_1_119 = var_1_28;
			}
		} else {
			var_1_119 = var_1_81;
		}
	}


	// From: Req1Batch86PS_CN_500
	signed long int stepLocal_0 = last_1_var_1_16 / -2;
	if (last_1_var_1_10 <= stepLocal_0) {
		var_1_1 = (57907 - (last_1_var_1_16 + last_1_var_1_16));
	} else {
		var_1_1 = 1;
	}


	// From: Req6Batch86PS_CN_500
	unsigned long int stepLocal_5 = (last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20);
	if (stepLocal_5 != last_1_var_1_10) {
		var_1_19 = var_1_9;
	} else {
		if (! (! last_1_var_1_6)) {
			var_1_19 = ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21));
		}
	}


	// From: Req2Batch86PS_CN_500
	if (var_1_19) {
		var_1_6 = (last_1_var_1_6 || var_1_9);
	}


	// From: Req4Batch86PS_CN_500
	signed char stepLocal_2 = var_1_11;
	if (! var_1_19) {
		if (((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= stepLocal_2) {
			var_1_14 = var_1_11;
		}
	}


	// From: Req7Batch86PS_CN_500
	var_1_22 = var_1_15;


	// From: Req5Batch86PS_CN_500
	unsigned short int stepLocal_4 = var_1_22;
	unsigned short int stepLocal_3 = var_1_22;
	if (stepLocal_3 >= var_1_12) {
		var_1_16 = (var_1_12 + var_1_17);
	} else {
		if (stepLocal_4 > var_1_22) {
			var_1_16 = (min (var_1_17 , var_1_12));
		} else {
			var_1_16 = var_1_12;
		}
	}


	// From: Req3Batch86PS_CN_500
	signed long int stepLocal_1 = var_1_11 - var_1_12;
	if (stepLocal_1 < (abs (min (32 , var_1_1)))) {
		var_1_10 = var_1_11;
	} else {
		if (var_1_19) {
			var_1_10 = var_1_16;
		} else {
			var_1_10 = var_1_16;
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -126);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 128);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 31);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 32);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 127);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 31);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= -2147483647);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 4294967295);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= -2147483647);
	assume_abort_if_not(var_1_52 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 32);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 0);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 0);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -461168.6018427382800e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427382800e+12F && var_1_78 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 2147483647);
	assume_abort_if_not(var_1_80 <= 4294967295);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 255);
	assume_abort_if_not(var_1_81 != 0);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -230584.3009213691390e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691390e+12F && var_1_84 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= -230584.3009213691390e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691390e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= -230584.3009213691390e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 2305843.009213691390e+12F && var_1_86 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 1);
	assume_abort_if_not(var_1_90 <= 1);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 32767);
	assume_abort_if_not(var_1_92 <= 65534);
	var_1_99 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 32767);
	var_1_120 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_120 >= -922337.2036854776000e+13F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854776000e+12F && var_1_120 >= 1.0e-20F ));
	assume_abort_if_not(var_1_120 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((last_1_var_1_10 <= (last_1_var_1_16 / -2)) ? (var_1_1 == ((unsigned short int) (57907 - (last_1_var_1_16 + last_1_var_1_16)))) : (var_1_1 == ((unsigned short int) 1))) && (var_1_19 ? (var_1_6 == ((unsigned char) (last_1_var_1_6 || var_1_9))) : 1)) && (((var_1_11 - var_1_12) < (abs (min (32 , var_1_1)))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_19 ? (var_1_10 == ((signed long int) var_1_16)) : (var_1_10 == ((signed long int) var_1_16))))) && ((! var_1_19) ? ((((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= var_1_11) ? (var_1_14 == ((signed long int) var_1_11)) : 1) : 1)) && ((var_1_22 >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_12 + var_1_17))) : ((var_1_22 > var_1_22) ? (var_1_16 == ((unsigned char) (min (var_1_17 , var_1_12)))) : (var_1_16 == ((unsigned char) var_1_12))))) && ((((last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20)) != last_1_var_1_10) ? (var_1_19 == ((unsigned char) var_1_9)) : ((! (! last_1_var_1_6)) ? (var_1_19 == ((unsigned char) ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21)))) : 1))) && (var_1_22 == ((unsigned short int) var_1_15))
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
