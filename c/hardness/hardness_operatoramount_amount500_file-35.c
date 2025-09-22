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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed char var_1_6 = 8;
signed char var_1_7 = 0;
signed char var_1_8 = -64;
signed char var_1_9 = 16;
signed char var_1_10 = -8;
signed char var_1_11 = -16;
signed char var_1_12 = 5;
signed long int var_1_13 = 32;
signed long int var_1_15 = -1673486024;
signed long int var_1_16 = 128;
unsigned long int var_1_17 = 64;
signed char var_1_19 = 25;
unsigned long int var_1_21 = 1;
unsigned long int var_1_22 = 10000000;
unsigned short int var_1_23 = 32;
unsigned short int var_1_24 = 59231;
unsigned short int var_1_25 = 100;
unsigned short int var_1_26 = 2;
signed long int var_1_27 = 1603364697;
unsigned short int var_1_28 = 32;
unsigned short int var_1_29 = 16;
unsigned short int var_1_30 = 0;
unsigned short int var_1_31 = 64;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 50;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 8;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float var_1_40 = 9.2;
float var_1_41 = 9999999999.375;
float var_1_42 = -0.8;
float var_1_43 = 64.7;
float var_1_44 = 256.75;
float var_1_45 = 1.5;
float var_1_46 = 127.5;
double var_1_47 = 1.6;
signed short int var_1_48 = -50;
signed short int var_1_49 = 24927;
signed short int var_1_50 = 10000;
signed long int var_1_51 = 32;
signed short int var_1_52 = 256;
unsigned short int var_1_53 = 16;
float var_1_54 = -0.05;
float var_1_56 = 10.75;
float var_1_57 = 100.5;
float var_1_58 = 31.5;
unsigned short int var_1_59 = 5;
float var_1_60 = 128.4;
signed char var_1_61 = 4;
float var_1_62 = 5.8;
float var_1_63 = 64.2;
unsigned long int var_1_64 = 1000000;
float var_1_65 = 9999.28;
float var_1_66 = 999999.5;
signed long int var_1_67 = 5;
unsigned short int var_1_68 = 256;
unsigned short int var_1_69 = 54039;
signed short int var_1_70 = -2;
signed long int var_1_71 = 5;
unsigned long int var_1_72 = 10;
double var_1_73 = 63.4;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 0;
signed char var_1_77 = -128;
signed long int var_1_78 = 1;
signed long int var_1_79 = 1919877937;
unsigned short int var_1_80 = 16;
unsigned long int var_1_81 = 2;
unsigned short int var_1_82 = 0;
unsigned short int var_1_83 = 50;
signed char var_1_84 = 0;
unsigned long int var_1_85 = 16;
unsigned long int var_1_86 = 8;
float var_1_87 = 99.6;
float var_1_88 = 50.875;
float var_1_89 = 32.6;
float var_1_90 = 255.2;
signed short int var_1_91 = 4;
unsigned short int var_1_92 = 256;
unsigned short int var_1_93 = 25602;
unsigned short int var_1_94 = 18499;
unsigned short int var_1_95 = 27526;
unsigned char var_1_96 = 128;
unsigned short int var_1_98 = 36676;
unsigned short int var_1_99 = 10000;
unsigned short int var_1_100 = 63597;
signed long int var_1_101 = 8;
signed long int var_1_102 = 1370740873;
signed short int var_1_103 = -50;
signed short int var_1_104 = 10;
double var_1_105 = 0.8;
double var_1_107 = 128.5;
double var_1_108 = 0.0;
double var_1_109 = 99999.5;
signed short int var_1_110 = 128;
signed short int var_1_112 = 5;
signed short int var_1_113 = 25;
unsigned long int var_1_114 = 100;
double var_1_115 = -0.5;
double var_1_116 = -0.625;
unsigned char var_1_117 = 0;
unsigned char var_1_118 = 100;
float var_1_119 = 2.4;
unsigned char var_1_120 = 0;
unsigned char var_1_121 = 2;
unsigned char var_1_122 = 1;
double var_1_123 = 25.72;
float var_1_124 = 9.6;
float var_1_125 = 8.5;
float var_1_126 = 16.375;
signed short int var_1_127 = 128;
signed short int var_1_128 = -1;
signed char var_1_129 = 8;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_23 = 32;
unsigned char last_1_var_1_36 = 1;
unsigned short int last_1_var_1_59 = 5;
unsigned short int last_1_var_1_68 = 256;
unsigned long int last_1_var_1_72 = 10;
unsigned char last_1_var_1_74 = 0;
unsigned long int last_1_var_1_81 = 2;
unsigned short int last_1_var_1_82 = 0;
unsigned long int last_1_var_1_85 = 16;
signed long int last_1_var_1_101 = 8;
signed short int last_1_var_1_110 = 128;
unsigned long int last_1_var_1_114 = 100;
unsigned char last_1_var_1_120 = 0;
unsigned char last_1_var_1_122 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch35Amount500
	signed long int stepLocal_23 = last_1_var_1_23;
	unsigned char stepLocal_22 = var_1_38;
	unsigned long int stepLocal_21 = last_1_var_1_114;
	unsigned char stepLocal_20 = last_1_var_1_120;
	unsigned char stepLocal_19 = (var_1_93 * last_1_var_1_85) < last_1_var_1_114;
	signed long int stepLocal_18 = (min (var_1_34 , var_1_96)) - (var_1_61 + var_1_37);
	unsigned long int stepLocal_17 = 0u;
	if (last_1_var_1_36) {
		if (((abs (last_1_var_1_68)) ^ var_1_22) <= stepLocal_17) {
			var_1_92 = ((var_1_93 + (max (var_1_94 , var_1_95))) - var_1_35);
		} else {
			if (stepLocal_22 || (var_1_16 > last_1_var_1_81)) {
				if (stepLocal_20 || last_1_var_1_122) {
					if (stepLocal_18 <= last_1_var_1_72) {
						var_1_92 = (min (var_1_83 , var_1_37));
					} else {
						var_1_92 = (var_1_69 - var_1_29);
					}
				} else {
					if (stepLocal_19 && last_1_var_1_74) {
						var_1_92 = (max ((var_1_69 - 64) , (abs (var_1_49 + var_1_83))));
					} else {
						if (stepLocal_23 <= var_1_33) {
							var_1_92 = (var_1_98 - ((var_1_50 + var_1_99) - (abs (var_1_33))));
						} else {
							if ((last_1_var_1_81 / var_1_96) == stepLocal_21) {
								var_1_92 = ((min (var_1_69 , var_1_100)) - (min (var_1_30 , (var_1_94 - last_1_var_1_81))));
							}
						}
					}
				}
			}
		}
	} else {
		var_1_92 = (max (0 , var_1_98));
	}


	// From: Req6Batch35Amount500
	signed long int stepLocal_5 = (10 / -128) / var_1_19;
	if (stepLocal_5 >= last_1_var_1_72) {
		if (! ((min (var_1_9 , var_1_12)) <= last_1_var_1_101)) {
			var_1_28 = (((64 + last_1_var_1_82) + var_1_29) + (var_1_30 + var_1_31));
		}
	} else {
		var_1_28 = var_1_24;
	}


	// From: Req23Batch35Amount500
	unsigned char stepLocal_11 = var_1_37;
	if (last_1_var_1_120) {
		var_1_72 = (var_1_21 + var_1_16);
	} else {
		if (stepLocal_11 <= last_1_var_1_59) {
			var_1_72 = 64u;
		}
	}


	// From: Req9Batch35Amount500
	if (var_1_34 <= var_1_37) {
		var_1_40 = (min (var_1_41 , var_1_42));
	} else {
		var_1_40 = (var_1_43 - (max ((max (var_1_44 , var_1_45)) , var_1_46)));
	}


	// From: Req10Batch35Amount500
	if (var_1_38) {
		var_1_47 = (max (var_1_46 , (abs (min (var_1_41 , var_1_44)))));
	}


	// From: Req11Batch35Amount500
	var_1_48 = ((var_1_49 - (var_1_50 - var_1_37)) - 2);


	// From: Req12Batch35Amount500
	unsigned long int stepLocal_8 = var_1_21;
	if (var_1_29 > stepLocal_8) {
		var_1_51 = var_1_11;
	}


	// From: Req13Batch35Amount500
	signed long int stepLocal_9 = 1 * 16;
	if (stepLocal_9 >= (-100 / var_1_50)) {
		var_1_52 = (10 + 2);
	} else {
		var_1_52 = (abs (var_1_19));
	}


	// From: Req17Batch35Amount500
	if (var_1_10 < (var_1_37 - (64 - var_1_61))) {
		var_1_60 = ((min (var_1_56 , (var_1_58 - var_1_57))) + (min (var_1_62 , var_1_63)));
	}


	// From: Req25Batch35Amount500
	var_1_74 = (var_1_75 && var_1_76);


	// From: Req32Batch35Amount500
	var_1_85 = (min ((1u + var_1_86) , ((var_1_27 - var_1_50) + var_1_51)));


	// From: Req37Batch35Amount500
	unsigned char stepLocal_28 = var_1_79 > var_1_22;
	if (var_1_76 && stepLocal_28) {
		var_1_103 = (abs (var_1_34 - 10));
	} else {
		var_1_103 = (var_1_104 - var_1_33);
	}


	// From: Req40Batch35Amount500
	var_1_112 = var_1_113;


	// From: Req41Batch35Amount500
	var_1_114 = var_1_35;


	// From: Req42Batch35Amount500
	var_1_115 = var_1_58;


	// From: Req43Batch35Amount500
	var_1_116 = var_1_41;


	// From: Req44Batch35Amount500
	if (var_1_75) {
		var_1_117 = var_1_38;
	} else {
		var_1_117 = var_1_39;
	}


	// From: Req45Batch35Amount500
	var_1_118 = var_1_33;


	// From: Req46Batch35Amount500
	var_1_119 = 1.1f;


	// From: Req48Batch35Amount500
	if (var_1_117) {
		var_1_121 = var_1_37;
	} else {
		var_1_121 = var_1_34;
	}


	// From: Req49Batch35Amount500
	if (last_1_var_1_122) {
		var_1_122 = var_1_38;
	} else {
		var_1_122 = 0;
	}


	// From: Req50Batch35Amount500
	if (var_1_39) {
		var_1_123 = var_1_107;
	}


	// From: Req52Batch35Amount500
	var_1_127 = var_1_34;


	// From: Req53Batch35Amount500
	var_1_128 = var_1_11;


	// From: Req54Batch35Amount500
	var_1_129 = var_1_9;


	// From: Req39Batch35Amount500
	if ((var_1_65 >= 999999.5f) && var_1_122) {
		if ((var_1_72 + (var_1_99 << var_1_114)) >= (min (var_1_51 , var_1_92))) {
			if (var_1_50 == (var_1_61 << var_1_104)) {
				var_1_110 = (min ((max (var_1_112 , (var_1_11 + var_1_29))) , (max (last_1_var_1_110 , (var_1_37 - var_1_127)))));
			} else {
				var_1_110 = (abs (var_1_61));
			}
		}
	} else {
		if ((var_1_114 * var_1_127) != var_1_25) {
			var_1_110 = (max ((var_1_61 + var_1_12) , -10));
		} else {
			var_1_110 = var_1_6;
		}
	}


	// From: Req21Batch35Amount500
	signed char stepLocal_10 = var_1_9;
	if (var_1_122) {
		if (stepLocal_10 != (max (var_1_114 , var_1_85))) {
			var_1_70 = (abs (var_1_24));
		} else {
			var_1_70 = var_1_72;
		}
	} else {
		var_1_70 = (abs (var_1_29));
	}


	// From: Req30Batch35Amount500
	unsigned char stepLocal_14 = var_1_33;
	if (var_1_35 < stepLocal_14) {
		var_1_82 = (var_1_69 - var_1_33);
	} else {
		var_1_82 = (max ((var_1_24 - (max (var_1_34 , var_1_72))) , (var_1_48 + var_1_83)));
	}


	// From: Req18Batch35Amount500
	if ((max ((var_1_116 + 9.5f) , var_1_40)) <= ((- 10.6f) / (max (var_1_65 , var_1_66)))) {
		if (var_1_41 < var_1_66) {
			var_1_64 = var_1_27;
		} else {
			var_1_64 = (var_1_15 - var_1_31);
		}
	}


	// From: Req22Batch35Amount500
	if ((var_1_37 - var_1_29) <= var_1_6) {
		var_1_71 = (max (-64 , var_1_34));
	} else {
		var_1_71 = (256 + ((var_1_24 + var_1_64) + var_1_49));
	}


	// From: Req33Batch35Amount500
	if (var_1_122) {
		var_1_87 = var_1_44;
	} else {
		var_1_87 = ((var_1_88 + (min (var_1_89 , var_1_90))) + (var_1_56 - var_1_57));
	}


	// From: Req47Batch35Amount500
	if (var_1_122) {
		var_1_120 = var_1_76;
	} else {
		var_1_120 = var_1_75;
	}


	// From: Req4Batch35Amount500
	if (var_1_122) {
		var_1_23 = (((abs (var_1_24)) - var_1_110) - var_1_25);
	}


	// From: Req28Batch35Amount500
	signed long int stepLocal_13 = (max (var_1_34 , var_1_35)) - var_1_61;
	if (stepLocal_13 > var_1_70) {
		var_1_80 = 128;
	} else {
		var_1_80 = ((abs (var_1_29)) + ((10 + var_1_28) + (var_1_35 + 5)));
	}


	// From: Req15Batch35Amount500
	if (var_1_43 <= (max (var_1_115 , var_1_87))) {
		var_1_54 = ((var_1_56 + 7.7f) - (var_1_57 + var_1_58));
	}


	// From: Req29Batch35Amount500
	if (var_1_120) {
		var_1_81 = var_1_29;
	} else {
		if (var_1_58 >= (- (- var_1_65))) {
			var_1_81 = (var_1_15 - (min (var_1_21 , var_1_25)));
		}
	}


	// From: Req3Batch35Amount500
	signed short int stepLocal_3 = var_1_48;
	unsigned long int stepLocal_2 = var_1_81 * 128;
	signed char stepLocal_1 = var_1_9;
	signed char stepLocal_0 = var_1_6;
	if ((var_1_48 / -50) < stepLocal_0) {
		if (var_1_74) {
			if (var_1_15 <= stepLocal_1) {
				if (stepLocal_2 != var_1_15) {
					if (stepLocal_3 == (var_1_16 / var_1_19)) {
						if (! var_1_74) {
							var_1_17 = (max ((var_1_92 + var_1_16) , (var_1_21 + var_1_22)));
						}
					}
				}
			} else {
				var_1_17 = var_1_22;
			}
		}
	} else {
		var_1_17 = var_1_21;
	}


	// From: Req20Batch35Amount500
	if (((var_1_24 - var_1_49) / var_1_34) > var_1_81) {
		if (var_1_63 <= (- var_1_41)) {
			if (var_1_25 >= var_1_70) {
				if (var_1_34 >= var_1_33) {
					var_1_68 = (max ((var_1_24 - var_1_50) , (max ((var_1_69 - var_1_70) , var_1_31))));
				}
			}
		} else {
			var_1_68 = (((29691 - 5) - (var_1_34 + var_1_70)) + (var_1_31 + var_1_50));
		}
	}


	// From: Req38Batch35Amount500
	if (! ((- var_1_17) != (var_1_98 | var_1_29))) {
		if (var_1_46 <= var_1_89) {
			var_1_105 = (abs (var_1_45));
		} else {
			if (! ((var_1_15 - var_1_29) < (var_1_72 ^ var_1_83))) {
				var_1_105 = ((var_1_90 + var_1_89) + (max ((max (var_1_58 , var_1_107)) , (max (var_1_62 , var_1_57)))));
			} else {
				if (var_1_76) {
					var_1_105 = (31.5 - (15.5 + var_1_57));
				}
			}
		}
	} else {
		var_1_105 = ((var_1_57 - (var_1_108 - var_1_109)) + (var_1_58 - var_1_56));
	}


	// From: Req7Batch35Amount500
	signed long int stepLocal_7 = var_1_27;
	unsigned short int stepLocal_6 = var_1_31;
	if ((max (var_1_17 , var_1_28)) < stepLocal_6) {
		if (var_1_8 != stepLocal_7) {
			var_1_32 = (max (var_1_33 , (var_1_34 - (max (var_1_35 , 4)))));
		} else {
			var_1_32 = (var_1_34 - var_1_35);
		}
	}


	// From: Req36Batch35Amount500
	signed short int stepLocal_27 = var_1_112;
	unsigned long int stepLocal_26 = max ((min (var_1_17 , var_1_94)) , var_1_50);
	unsigned char stepLocal_25 = var_1_51 > (4 << var_1_72);
	unsigned short int stepLocal_24 = var_1_80;
	if (stepLocal_24 <= -10) {
		if (var_1_122) {
			if (stepLocal_25 || var_1_75) {
				var_1_101 = var_1_50;
			}
		} else {
			var_1_101 = (var_1_19 + (abs (var_1_23)));
		}
	} else {
		if (var_1_60 > var_1_123) {
			if (var_1_63 > (- var_1_41)) {
				var_1_101 = (max (var_1_61 , var_1_48));
			} else {
				var_1_101 = (var_1_50 - (max (var_1_49 , (var_1_102 - 32))));
			}
		} else {
			if ((- (var_1_93 * 5)) < stepLocal_27) {
				var_1_101 = (var_1_32 + var_1_49);
			} else {
				if (stepLocal_26 > (var_1_92 + var_1_93)) {
					var_1_101 = (((abs (var_1_80)) - var_1_25) + (var_1_99 - var_1_24));
				}
			}
		}
	}


	// From: Req8Batch35Amount500
	if (((var_1_81 + 1) + var_1_72) > (var_1_68 >> var_1_37)) {
		var_1_36 = (var_1_38 || var_1_39);
	} else {
		if (var_1_117 && var_1_39) {
			var_1_36 = var_1_39;
		}
	}


	// From: Req24Batch35Amount500
	if (var_1_36 || var_1_74) {
		if (var_1_120) {
			if ((var_1_30 - var_1_48) < var_1_71) {
				var_1_73 = (50.875 - var_1_57);
			}
		}
	}


	// From: Req2Batch35Amount500
	if (! ((var_1_116 * var_1_73) > var_1_73)) {
		var_1_13 = var_1_9;
	} else {
		var_1_13 = (((abs (var_1_15)) - var_1_16) - var_1_32);
	}


	// From: Req16Batch35Amount500
	if (25 == (var_1_50 + var_1_101)) {
		var_1_59 = (var_1_13 + var_1_31);
	} else {
		var_1_59 = ((min (var_1_49 , (var_1_33 + var_1_29))) + var_1_25);
	}


	// From: Req27Batch35Amount500
	signed long int stepLocal_12 = 128;
	if ((var_1_85 + var_1_59) > stepLocal_12) {
		var_1_78 = (var_1_69 + var_1_16);
	} else {
		var_1_78 = (((var_1_79 - var_1_101) - var_1_61) - var_1_80);
	}


	// From: Req31Batch35Amount500
	signed long int stepLocal_16 = var_1_78 + (- var_1_82);
	unsigned long int stepLocal_15 = var_1_85;
	if (var_1_31 <= stepLocal_16) {
		if (stepLocal_15 < var_1_81) {
			if (var_1_76) {
				var_1_84 = ((max ((min (var_1_37 , var_1_11)) , var_1_7)) + (var_1_10 + var_1_12));
			} else {
				var_1_84 = (min ((var_1_7 + (var_1_12 + var_1_10)) , var_1_11));
			}
		} else {
			var_1_84 = (var_1_7 + (var_1_61 - var_1_37));
		}
	} else {
		if (! var_1_122) {
			var_1_84 = var_1_8;
		}
	}


	// From: Req51Batch35Amount500
	signed long int stepLocal_29 = var_1_13;
	if (var_1_49 < stepLocal_29) {
		var_1_124 = ((min ((min (var_1_107 , var_1_62)) , var_1_63)) + ((var_1_125 + var_1_126) + var_1_89));
	}


	// From: Req1Batch35Amount500
	if (var_1_115 < var_1_105) {
		if ((128 + (max (var_1_128 , 4))) <= (min (var_1_78 , 2))) {
			var_1_1 = (var_1_6 + 4);
		} else {
			if ((var_1_78 * var_1_128) <= var_1_6) {
				var_1_1 = (min ((var_1_6 + var_1_7) , var_1_8));
			} else {
				var_1_1 = ((var_1_9 + var_1_10) + (min (var_1_6 , (var_1_11 + var_1_12))));
			}
		}
	} else {
		if ((var_1_105 / 5.8f) > var_1_115) {
			var_1_1 = (abs (var_1_7));
		}
	}


	// From: Req5Batch35Amount500
	unsigned long int stepLocal_4 = var_1_72 * var_1_16;
	if (((min (var_1_22 , var_1_24)) - (var_1_27 - var_1_78)) >= stepLocal_4) {
		var_1_26 = ((var_1_24 - var_1_51) - var_1_25);
	}


	// From: Req19Batch35Amount500
	var_1_67 = (min ((var_1_78 - var_1_29) , var_1_50));


	// From: Req26Batch35Amount500
	if (var_1_69 < (var_1_78 * var_1_15)) {
		var_1_77 = (var_1_11 + (var_1_12 + var_1_37));
	} else {
		var_1_77 = 0;
	}


	// From: Req34Batch35Amount500
	if ((var_1_41 + var_1_115) >= var_1_115) {
		var_1_91 = (var_1_61 - ((var_1_26 + var_1_35) + var_1_29));
	} else {
		var_1_91 = (var_1_9 + -64);
	}


	// From: Req14Batch35Amount500
	var_1_53 = (min ((36148 - var_1_49) , (var_1_67 + var_1_30)));
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 31);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483646);
	assume_abort_if_not(var_1_15 <= -1073741822);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 49150);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 16384);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 15);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 16382);
	assume_abort_if_not(var_1_49 <= 32766);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -461168.6018427383000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427383000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -461168.6018427383000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -922337.2036854776000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	assume_abort_if_not(var_1_65 != 0.0F);
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= -922337.2036854776000e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
	assume_abort_if_not(var_1_66 != 0.0F);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 32767);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 1);
	assume_abort_if_not(var_1_75 <= 1);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 1);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= 1610612734);
	assume_abort_if_not(var_1_79 <= 2147483646);
	var_1_83 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 32767);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 2147483647);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= -230584.3009213691400e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 2305843.009213691400e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= -230584.3009213691400e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691400e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= -230584.3009213691400e+13F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691400e+12F && var_1_90 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 16383);
	assume_abort_if_not(var_1_93 <= 32767);
	var_1_94 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_94 >= 16384);
	assume_abort_if_not(var_1_94 <= 32767);
	var_1_95 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_95 >= 16384);
	assume_abort_if_not(var_1_95 <= 32767);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 127);
	assume_abort_if_not(var_1_96 <= 255);
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 32767);
	assume_abort_if_not(var_1_98 <= 65534);
	var_1_99 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_99 >= 8192);
	assume_abort_if_not(var_1_99 <= 16383);
	var_1_100 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_100 >= 32767);
	assume_abort_if_not(var_1_100 <= 65534);
	var_1_102 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_102 >= 1073741823);
	assume_abort_if_not(var_1_102 <= 2147483646);
	var_1_104 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_104 >= -1);
	assume_abort_if_not(var_1_104 <= 32766);
	var_1_107 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_107 >= -461168.6018427383000e+13F && var_1_107 <= -1.0e-20F) || (var_1_107 <= 4611686.018427383000e+12F && var_1_107 >= 1.0e-20F ));
	var_1_108 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_108 >= 2305843.009213691400e+12F && var_1_108 <= -1.0e-20F) || (var_1_108 <= 4611686.018427383000e+12F && var_1_108 >= 1.0e-20F ));
	var_1_109 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_109 >= 0.0F && var_1_109 <= -1.0e-20F) || (var_1_109 <= 2305843.009213691400e+12F && var_1_109 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_113 >= -32767);
	assume_abort_if_not(var_1_113 <= 32766);
	var_1_125 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_125 >= -115292.1504606845700e+13F && var_1_125 <= -1.0e-20F) || (var_1_125 <= 1152921.504606845700e+12F && var_1_125 >= 1.0e-20F ));
	var_1_126 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_126 >= -115292.1504606845700e+13F && var_1_126 <= -1.0e-20F) || (var_1_126 <= 1152921.504606845700e+12F && var_1_126 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_120 = var_1_120;
	last_1_var_1_122 = var_1_122;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_115 < var_1_105) ? (((128 + (max (var_1_128 , 4))) <= (min (var_1_78 , 2))) ? (var_1_1 == ((signed char) (var_1_6 + 4))) : (((var_1_78 * var_1_128) <= var_1_6) ? (var_1_1 == ((signed char) (min ((var_1_6 + var_1_7) , var_1_8)))) : (var_1_1 == ((signed char) ((var_1_9 + var_1_10) + (min (var_1_6 , (var_1_11 + var_1_12)))))))) : (((var_1_105 / 5.8f) > var_1_115) ? (var_1_1 == ((signed char) (abs (var_1_7)))) : 1)) && ((! ((var_1_116 * var_1_73) > var_1_73)) ? (var_1_13 == ((signed long int) var_1_9)) : (var_1_13 == ((signed long int) (((abs (var_1_15)) - var_1_16) - var_1_32))))) && (((var_1_48 / -50) < var_1_6) ? (var_1_74 ? ((var_1_15 <= var_1_9) ? (((var_1_81 * 128) != var_1_15) ? ((var_1_48 == (var_1_16 / var_1_19)) ? ((! var_1_74) ? (var_1_17 == ((unsigned long int) (max ((var_1_92 + var_1_16) , (var_1_21 + var_1_22))))) : 1) : 1) : 1) : (var_1_17 == ((unsigned long int) var_1_22))) : 1) : (var_1_17 == ((unsigned long int) var_1_21)))) && (var_1_122 ? (var_1_23 == ((unsigned short int) (((abs (var_1_24)) - var_1_110) - var_1_25))) : 1)) && ((((min (var_1_22 , var_1_24)) - (var_1_27 - var_1_78)) >= (var_1_72 * var_1_16)) ? (var_1_26 == ((unsigned short int) ((var_1_24 - var_1_51) - var_1_25))) : 1)) && ((((10 / -128) / var_1_19) >= last_1_var_1_72) ? ((! ((min (var_1_9 , var_1_12)) <= last_1_var_1_101)) ? (var_1_28 == ((unsigned short int) (((64 + last_1_var_1_82) + var_1_29) + (var_1_30 + var_1_31)))) : 1) : (var_1_28 == ((unsigned short int) var_1_24)))) && (((max (var_1_17 , var_1_28)) < var_1_31) ? ((var_1_8 != var_1_27) ? (var_1_32 == ((unsigned char) (max (var_1_33 , (var_1_34 - (max (var_1_35 , 4))))))) : (var_1_32 == ((unsigned char) (var_1_34 - var_1_35)))) : 1)) && ((((var_1_81 + 1) + var_1_72) > (var_1_68 >> var_1_37)) ? (var_1_36 == ((unsigned char) (var_1_38 || var_1_39))) : ((var_1_117 && var_1_39) ? (var_1_36 == ((unsigned char) var_1_39)) : 1))) && ((var_1_34 <= var_1_37) ? (var_1_40 == ((float) (min (var_1_41 , var_1_42)))) : (var_1_40 == ((float) (var_1_43 - (max ((max (var_1_44 , var_1_45)) , var_1_46))))))) && (var_1_38 ? (var_1_47 == ((double) (max (var_1_46 , (abs (min (var_1_41 , var_1_44))))))) : 1)) && (var_1_48 == ((signed short int) ((var_1_49 - (var_1_50 - var_1_37)) - 2)))) && ((var_1_29 > var_1_21) ? (var_1_51 == ((signed long int) var_1_11)) : 1)) && (((1 * 16) >= (-100 / var_1_50)) ? (var_1_52 == ((signed short int) (10 + 2))) : (var_1_52 == ((signed short int) (abs (var_1_19)))))) && (var_1_53 == ((unsigned short int) (min ((36148 - var_1_49) , (var_1_67 + var_1_30)))))) && ((var_1_43 <= (max (var_1_115 , var_1_87))) ? (var_1_54 == ((float) ((var_1_56 + 7.7f) - (var_1_57 + var_1_58)))) : 1)) && ((25 == (var_1_50 + var_1_101)) ? (var_1_59 == ((unsigned short int) (var_1_13 + var_1_31))) : (var_1_59 == ((unsigned short int) ((min (var_1_49 , (var_1_33 + var_1_29))) + var_1_25))))) && ((var_1_10 < (var_1_37 - (64 - var_1_61))) ? (var_1_60 == ((float) ((min (var_1_56 , (var_1_58 - var_1_57))) + (min (var_1_62 , var_1_63))))) : 1)) && (((max ((var_1_116 + 9.5f) , var_1_40)) <= ((- 10.6f) / (max (var_1_65 , var_1_66)))) ? ((var_1_41 < var_1_66) ? (var_1_64 == ((unsigned long int) var_1_27)) : (var_1_64 == ((unsigned long int) (var_1_15 - var_1_31)))) : 1)) && (var_1_67 == ((signed long int) (min ((var_1_78 - var_1_29) , var_1_50))))) && ((((var_1_24 - var_1_49) / var_1_34) > var_1_81) ? ((var_1_63 <= (- var_1_41)) ? ((var_1_25 >= var_1_70) ? ((var_1_34 >= var_1_33) ? (var_1_68 == ((unsigned short int) (max ((var_1_24 - var_1_50) , (max ((var_1_69 - var_1_70) , var_1_31)))))) : 1) : 1) : (var_1_68 == ((unsigned short int) (((29691 - 5) - (var_1_34 + var_1_70)) + (var_1_31 + var_1_50))))) : 1)) && (var_1_122 ? ((var_1_9 != (max (var_1_114 , var_1_85))) ? (var_1_70 == ((signed short int) (abs (var_1_24)))) : (var_1_70 == ((signed short int) var_1_72))) : (var_1_70 == ((signed short int) (abs (var_1_29)))))) && (((var_1_37 - var_1_29) <= var_1_6) ? (var_1_71 == ((signed long int) (max (-64 , var_1_34)))) : (var_1_71 == ((signed long int) (256 + ((var_1_24 + var_1_64) + var_1_49)))))) && (last_1_var_1_120 ? (var_1_72 == ((unsigned long int) (var_1_21 + var_1_16))) : ((var_1_37 <= last_1_var_1_59) ? (var_1_72 == ((unsigned long int) 64u)) : 1))) && ((var_1_36 || var_1_74) ? (var_1_120 ? (((var_1_30 - var_1_48) < var_1_71) ? (var_1_73 == ((double) (50.875 - var_1_57))) : 1) : 1) : 1)) && (var_1_74 == ((unsigned char) (var_1_75 && var_1_76)))) && ((var_1_69 < (var_1_78 * var_1_15)) ? (var_1_77 == ((signed char) (var_1_11 + (var_1_12 + var_1_37)))) : (var_1_77 == ((signed char) 0)))) && (((var_1_85 + var_1_59) > 128) ? (var_1_78 == ((signed long int) (var_1_69 + var_1_16))) : (var_1_78 == ((signed long int) (((var_1_79 - var_1_101) - var_1_61) - var_1_80))))) && ((((max (var_1_34 , var_1_35)) - var_1_61) > var_1_70) ? (var_1_80 == ((unsigned short int) 128)) : (var_1_80 == ((unsigned short int) ((abs (var_1_29)) + ((10 + var_1_28) + (var_1_35 + 5))))))) && (var_1_120 ? (var_1_81 == ((unsigned long int) var_1_29)) : ((var_1_58 >= (- (- var_1_65))) ? (var_1_81 == ((unsigned long int) (var_1_15 - (min (var_1_21 , var_1_25))))) : 1))) && ((var_1_35 < var_1_33) ? (var_1_82 == ((unsigned short int) (var_1_69 - var_1_33))) : (var_1_82 == ((unsigned short int) (max ((var_1_24 - (max (var_1_34 , var_1_72))) , (var_1_48 + var_1_83))))))) && ((var_1_31 <= (var_1_78 + (- var_1_82))) ? ((var_1_85 < var_1_81) ? (var_1_76 ? (var_1_84 == ((signed char) ((max ((min (var_1_37 , var_1_11)) , var_1_7)) + (var_1_10 + var_1_12)))) : (var_1_84 == ((signed char) (min ((var_1_7 + (var_1_12 + var_1_10)) , var_1_11))))) : (var_1_84 == ((signed char) (var_1_7 + (var_1_61 - var_1_37))))) : ((! var_1_122) ? (var_1_84 == ((signed char) var_1_8)) : 1))) && (var_1_85 == ((unsigned long int) (min ((1u + var_1_86) , ((var_1_27 - var_1_50) + var_1_51)))))) && (var_1_122 ? (var_1_87 == ((float) var_1_44)) : (var_1_87 == ((float) ((var_1_88 + (min (var_1_89 , var_1_90))) + (var_1_56 - var_1_57)))))) && (((var_1_41 + var_1_115) >= var_1_115) ? (var_1_91 == ((signed short int) (var_1_61 - ((var_1_26 + var_1_35) + var_1_29)))) : (var_1_91 == ((signed short int) (var_1_9 + -64))))) && (last_1_var_1_36 ? ((((abs (last_1_var_1_68)) ^ var_1_22) <= 0u) ? (var_1_92 == ((unsigned short int) ((var_1_93 + (max (var_1_94 , var_1_95))) - var_1_35))) : ((var_1_38 || (var_1_16 > last_1_var_1_81)) ? ((last_1_var_1_120 || last_1_var_1_122) ? ((((min (var_1_34 , var_1_96)) - (var_1_61 + var_1_37)) <= last_1_var_1_72) ? (var_1_92 == ((unsigned short int) (min (var_1_83 , var_1_37)))) : (var_1_92 == ((unsigned short int) (var_1_69 - var_1_29)))) : ((((var_1_93 * last_1_var_1_85) < last_1_var_1_114) && last_1_var_1_74) ? (var_1_92 == ((unsigned short int) (max ((var_1_69 - 64) , (abs (var_1_49 + var_1_83)))))) : ((last_1_var_1_23 <= var_1_33) ? (var_1_92 == ((unsigned short int) (var_1_98 - ((var_1_50 + var_1_99) - (abs (var_1_33)))))) : (((last_1_var_1_81 / var_1_96) == last_1_var_1_114) ? (var_1_92 == ((unsigned short int) ((min (var_1_69 , var_1_100)) - (min (var_1_30 , (var_1_94 - last_1_var_1_81)))))) : 1)))) : 1)) : (var_1_92 == ((unsigned short int) (max (0 , var_1_98)))))) && ((var_1_80 <= -10) ? (var_1_122 ? (((var_1_51 > (4 << var_1_72)) || var_1_75) ? (var_1_101 == ((signed long int) var_1_50)) : 1) : (var_1_101 == ((signed long int) (var_1_19 + (abs (var_1_23)))))) : ((var_1_60 > var_1_123) ? ((var_1_63 > (- var_1_41)) ? (var_1_101 == ((signed long int) (max (var_1_61 , var_1_48)))) : (var_1_101 == ((signed long int) (var_1_50 - (max (var_1_49 , (var_1_102 - 32))))))) : (((- (var_1_93 * 5)) < var_1_112) ? (var_1_101 == ((signed long int) (var_1_32 + var_1_49))) : (((max ((min (var_1_17 , var_1_94)) , var_1_50)) > (var_1_92 + var_1_93)) ? (var_1_101 == ((signed long int) (((abs (var_1_80)) - var_1_25) + (var_1_99 - var_1_24)))) : 1))))) && ((var_1_76 && (var_1_79 > var_1_22)) ? (var_1_103 == ((signed short int) (abs (var_1_34 - 10)))) : (var_1_103 == ((signed short int) (var_1_104 - var_1_33))))) && ((! ((- var_1_17) != (var_1_98 | var_1_29))) ? ((var_1_46 <= var_1_89) ? (var_1_105 == ((double) (abs (var_1_45)))) : ((! ((var_1_15 - var_1_29) < (var_1_72 ^ var_1_83))) ? (var_1_105 == ((double) ((var_1_90 + var_1_89) + (max ((max (var_1_58 , var_1_107)) , (max (var_1_62 , var_1_57))))))) : (var_1_76 ? (var_1_105 == ((double) (31.5 - (15.5 + var_1_57)))) : 1))) : (var_1_105 == ((double) ((var_1_57 - (var_1_108 - var_1_109)) + (var_1_58 - var_1_56)))))) && (((var_1_65 >= 999999.5f) && var_1_122) ? (((var_1_72 + (var_1_99 << var_1_114)) >= (min (var_1_51 , var_1_92))) ? ((var_1_50 == (var_1_61 << var_1_104)) ? (var_1_110 == ((signed short int) (min ((max (var_1_112 , (var_1_11 + var_1_29))) , (max (last_1_var_1_110 , (var_1_37 - var_1_127))))))) : (var_1_110 == ((signed short int) (abs (var_1_61))))) : 1) : (((var_1_114 * var_1_127) != var_1_25) ? (var_1_110 == ((signed short int) (max ((var_1_61 + var_1_12) , -10)))) : (var_1_110 == ((signed short int) var_1_6))))) && (var_1_112 == ((signed short int) var_1_113))) && (var_1_114 == ((unsigned long int) var_1_35))) && (var_1_115 == ((double) var_1_58))) && (var_1_116 == ((double) var_1_41))) && (var_1_75 ? (var_1_117 == ((unsigned char) var_1_38)) : (var_1_117 == ((unsigned char) var_1_39)))) && (var_1_118 == ((unsigned char) var_1_33))) && (var_1_119 == ((float) 1.1f))) && (var_1_122 ? (var_1_120 == ((unsigned char) var_1_76)) : (var_1_120 == ((unsigned char) var_1_75)))) && (var_1_117 ? (var_1_121 == ((unsigned char) var_1_37)) : (var_1_121 == ((unsigned char) var_1_34)))) && (last_1_var_1_122 ? (var_1_122 == ((unsigned char) var_1_38)) : (var_1_122 == ((unsigned char) 0)))) && (var_1_39 ? (var_1_123 == ((double) var_1_107)) : 1)) && ((var_1_49 < var_1_13) ? (var_1_124 == ((float) ((min ((min (var_1_107 , var_1_62)) , var_1_63)) + ((var_1_125 + var_1_126) + var_1_89)))) : 1)) && (var_1_127 == ((signed short int) var_1_34))) && (var_1_128 == ((signed short int) var_1_11))) && (var_1_129 == ((signed char) var_1_9))
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
