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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 128;
signed long int var_1_6 = 64;
signed long int var_1_7 = 50;
signed long int var_1_8 = -100;
float var_1_9 = 32.6;
signed long int var_1_10 = 10;
float var_1_12 = 31.2;
float var_1_13 = 999999999999.5;
float var_1_14 = 31.8;
float var_1_15 = 255.95;
float var_1_16 = 9999999.5;
signed short int var_1_17 = -5;
signed short int var_1_18 = 32;
signed short int var_1_19 = 32;
signed short int var_1_20 = 10;
signed short int var_1_21 = 1000;
double var_1_22 = 255.816;
double var_1_23 = 4.5;
unsigned short int var_1_24 = 1;
unsigned short int var_1_25 = 100;
signed short int var_1_26 = 10;
signed short int var_1_27 = 1;
signed short int var_1_28 = 256;
signed short int var_1_29 = 5;
signed short int var_1_30 = -256;
signed short int var_1_31 = 64;
float var_1_32 = 63.25;
unsigned short int var_1_33 = 64;
unsigned short int var_1_34 = 24001;
unsigned short int var_1_35 = 30880;
unsigned short int var_1_36 = 49428;
unsigned short int var_1_37 = 0;
unsigned char var_1_38 = 8;
double var_1_39 = 10000000000.5;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 2;
unsigned char var_1_43 = 50;
unsigned char var_1_44 = 50;
unsigned char var_1_45 = 1;
double var_1_46 = 25.5;
signed char var_1_48 = 5;
signed char var_1_50 = 0;
signed char var_1_51 = 16;
signed long int var_1_52 = 1;
float var_1_53 = -0.8;
float var_1_54 = 255.52;
float var_1_55 = 9999999.4;
float var_1_56 = 0.0;
float var_1_57 = 16.25;
signed long int var_1_58 = 100000;
signed long int var_1_59 = 500;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 16;
double var_1_64 = 9.14;
signed long int var_1_65 = 128;
double var_1_66 = 32.6;
double var_1_67 = 0.85;
signed short int var_1_68 = -16;
unsigned long int var_1_69 = 10;
unsigned long int var_1_70 = 3302497270;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 16;
unsigned char var_1_73 = 1;
double var_1_74 = 64.8;
unsigned char var_1_75 = 128;
unsigned short int var_1_76 = 25;
unsigned char var_1_79 = 1;
double var_1_80 = 8.5;
unsigned char var_1_81 = 5;
unsigned char var_1_82 = 64;
double var_1_83 = 1000.5;
double var_1_84 = 9999999.5;
signed char var_1_85 = -5;
signed char var_1_86 = 4;
signed long int var_1_87 = 64;
unsigned char var_1_88 = 0;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 0;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 10;
unsigned char var_1_94 = 128;
signed char var_1_95 = -100;
unsigned short int var_1_96 = 8;
unsigned short int var_1_97 = 10000;
unsigned short int var_1_98 = 58473;
unsigned long int var_1_99 = 8;
unsigned long int var_1_100 = 1000000000;
unsigned long int var_1_101 = 1000000000;
unsigned long int var_1_102 = 16;
unsigned long int var_1_104 = 1844467711;
unsigned long int var_1_105 = 1454371067;
unsigned long int var_1_106 = 2396818913;
unsigned char var_1_107 = 128;
unsigned char var_1_108 = 32;
unsigned char var_1_109 = 32;
float var_1_110 = 3.8;
signed char var_1_111 = -2;
unsigned short int var_1_112 = 5;
float var_1_113 = 9.6;
double var_1_114 = 0.19999999999999996;
unsigned char var_1_115 = 1;
unsigned char var_1_116 = 0;
signed short int var_1_117 = -16;
signed short int var_1_118 = -16;
unsigned char var_1_119 = 1;
unsigned long int var_1_120 = 1;
double var_1_121 = 256.125;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 128;
signed short int last_1_var_1_17 = -5;
float last_1_var_1_32 = 63.25;
unsigned char last_1_var_1_38 = 8;
double last_1_var_1_46 = 25.5;
signed char last_1_var_1_48 = 5;
unsigned char last_1_var_1_63 = 16;
double last_1_var_1_64 = 9.14;
unsigned long int last_1_var_1_69 = 10;
unsigned char last_1_var_1_79 = 1;
double last_1_var_1_80 = 8.5;
double last_1_var_1_83 = 1000.5;
signed long int last_1_var_1_87 = 64;
unsigned long int last_1_var_1_99 = 8;
unsigned char last_1_var_1_107 = 128;
double last_1_var_1_114 = 0.19999999999999996;
signed short int last_1_var_1_118 = -16;
unsigned long int last_1_var_1_120 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req31Batch81Amount500
	unsigned long int stepLocal_24 = max (last_1_var_1_17 , last_1_var_1_69);
	if (stepLocal_24 < (last_1_var_1_38 / (max (4u , var_1_75)))) {
		var_1_88 = var_1_61;
	} else {
		var_1_88 = (((var_1_62 || var_1_90) || var_1_91) || var_1_92);
	}


	// From: Req4Batch81Amount500
	if ((128.2 - var_1_14) > 1.00000000000008E13) {
		var_1_17 = (var_1_18 - (max (var_1_19 , var_1_20)));
	} else {
		if (var_1_88) {
			var_1_17 = (min (var_1_19 , var_1_20));
		}
	}


	// From: Req34Batch81Amount500
	signed long int stepLocal_27 = var_1_94 - (min (var_1_44 , var_1_42));
	signed long int stepLocal_26 = last_1_var_1_1;
	if (last_1_var_1_114 <= last_1_var_1_64) {
		if (last_1_var_1_32 >= ((- var_1_12) / (min (var_1_56 , var_1_39)))) {
			if (stepLocal_26 >= (var_1_29 | var_1_75)) {
				var_1_96 = (max (var_1_75 , (max (var_1_34 , var_1_35))));
			} else {
				if (var_1_82 > stepLocal_27) {
					var_1_96 = (((10000 + var_1_97) + var_1_35) - (max (last_1_var_1_118 , (var_1_34 - var_1_73))));
				}
			}
		}
	} else {
		var_1_96 = (max ((var_1_36 - last_1_var_1_63) , ((var_1_98 - var_1_41) - var_1_27)));
	}


	// From: Req49Batch81Amount500
	signed long int stepLocal_35 = max ((max (-100 , last_1_var_1_48)) , (var_1_108 - var_1_73));
	if (last_1_var_1_99 <= stepLocal_35) {
		if (! var_1_92) {
			var_1_121 = var_1_56;
		}
	} else {
		var_1_121 = var_1_84;
	}


	// From: Req25Batch81Amount500
	signed long int stepLocal_20 = last_1_var_1_87;
	if ((var_1_75 * (last_1_var_1_99 + last_1_var_1_107)) > stepLocal_20) {
		var_1_79 = (! (! var_1_61));
	} else {
		if (last_1_var_1_79) {
			var_1_79 = var_1_62;
		}
	}


	// From: Req42Batch81Amount500
	if (var_1_79) {
		var_1_114 = 0.75;
	}


	// From: Req43Batch81Amount500
	if (var_1_79) {
		var_1_115 = var_1_90;
	} else {
		var_1_115 = var_1_61;
	}


	// From: Req18Batch81Amount500
	if (last_1_var_1_79) {
		var_1_64 = (var_1_57 + var_1_55);
	} else {
		if (var_1_61) {
			var_1_64 = (abs (var_1_55));
		} else {
			if (((8.515075510033539E18f - var_1_57) - var_1_56) > var_1_14) {
				if (((min (var_1_57 , var_1_55)) > (var_1_22 + var_1_12)) || ((min (var_1_45 , var_1_8)) < (var_1_65 - last_1_var_1_120))) {
					var_1_64 = (var_1_57 + (var_1_66 + var_1_67));
				}
			}
		}
	}


	// From: Req1Batch81Amount500
	unsigned long int stepLocal_1 = last_1_var_1_120 ^ (abs (var_1_6));
	signed long int stepLocal_0 = var_1_6;
	if (! (last_1_var_1_80 > last_1_var_1_46)) {
		if ((~ (abs (4))) >= stepLocal_1) {
			if (stepLocal_0 <= last_1_var_1_120) {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = (max (var_1_7 , var_1_8));
		}
	}


	// From: Req3Batch81Amount500
	if (var_1_79) {
		var_1_16 = (min (var_1_15 , var_1_13));
	}


	// From: Req5Batch81Amount500
	if ((abs (var_1_6)) != (var_1_18 - var_1_19)) {
		if ((var_1_13 - (var_1_22 + var_1_23)) >= var_1_15) {
			if ((var_1_10 / (var_1_24 + var_1_25)) < -256) {
				var_1_21 = ((var_1_26 - (var_1_27 + var_1_28)) + (max (var_1_29 , (max (var_1_30 , var_1_31)))));
			} else {
				var_1_21 = ((abs (var_1_30 + var_1_29)) - var_1_20);
			}
		} else {
			var_1_21 = (min (var_1_30 , var_1_28));
		}
	} else {
		var_1_21 = (var_1_29 + var_1_30);
	}


	// From: Req8Batch81Amount500
	var_1_37 = (var_1_19 + var_1_34);


	// From: Req15Batch81Amount500
	unsigned short int stepLocal_12 = var_1_36;
	if (stepLocal_12 != var_1_45) {
		var_1_59 = ((abs (var_1_34 - var_1_19)) - var_1_20);
	}


	// From: Req17Batch81Amount500
	var_1_63 = (max (var_1_43 , (min (var_1_41 , var_1_42))));


	// From: Req21Batch81Amount500
	var_1_71 = ((-256 < var_1_25) || var_1_61);


	// From: Req23Batch81Amount500
	if (var_1_31 == var_1_20) {
		if (var_1_41 < (var_1_34 % var_1_75)) {
			var_1_74 = (min ((min ((min (var_1_14 , var_1_22)) , var_1_56)) , var_1_12));
		}
	} else {
		var_1_74 = var_1_55;
	}


	// From: Req28Batch81Amount500
	signed short int stepLocal_22 = var_1_30;
	if (stepLocal_22 > (var_1_7 * var_1_29)) {
		if (var_1_57 < var_1_22) {
			var_1_83 = (var_1_14 - var_1_15);
		} else {
			var_1_83 = (var_1_67 + 4.4);
		}
	} else {
		if (var_1_57 >= (9.999999995E8f + (min (last_1_var_1_83 , var_1_22)))) {
			var_1_83 = ((var_1_57 + var_1_55) - ((min (var_1_54 , 99.8)) + var_1_84));
		} else {
			var_1_83 = ((var_1_56 - var_1_55) - (var_1_84 + var_1_54));
		}
	}


	// From: Req32Batch81Amount500
	var_1_93 = ((max (128 , (min (var_1_41 , var_1_94)))) - var_1_45);


	// From: Req33Batch81Amount500
	unsigned char stepLocal_25 = var_1_43;
	if (var_1_10 >= stepLocal_25) {
		var_1_95 = (min (var_1_50 , (max (var_1_44 , var_1_73))));
	}


	// From: Req38Batch81Amount500
	if (var_1_90) {
		var_1_110 = var_1_23;
	} else {
		var_1_110 = var_1_57;
	}


	// From: Req39Batch81Amount500
	var_1_111 = var_1_50;


	// From: Req40Batch81Amount500
	var_1_112 = var_1_25;


	// From: Req41Batch81Amount500
	var_1_113 = var_1_12;


	// From: Req44Batch81Amount500
	var_1_116 = var_1_61;


	// From: Req46Batch81Amount500
	if (var_1_92) {
		var_1_118 = var_1_93;
	} else {
		var_1_118 = var_1_45;
	}


	// From: Req47Batch81Amount500
	if (var_1_79) {
		var_1_119 = var_1_62;
	}


	// From: Req19Batch81Amount500
	var_1_68 = (max ((var_1_20 - var_1_19) , (var_1_27 - (var_1_96 + var_1_63))));


	// From: Req7Batch81Amount500
	signed long int stepLocal_6 = var_1_7;
	if (! var_1_116) {
		var_1_33 = (var_1_26 + var_1_25);
	} else {
		if (stepLocal_6 <= 100) {
			var_1_33 = ((var_1_34 + (var_1_35 - var_1_28)) - (max (var_1_25 , var_1_26)));
		} else {
			var_1_33 = (var_1_36 - var_1_28);
		}
	}


	// From: Req13Batch81Amount500
	if (var_1_116) {
		var_1_53 = (var_1_22 - (min ((var_1_54 + var_1_55) , (var_1_56 - var_1_57))));
	} else {
		var_1_53 = (var_1_57 + (min ((abs (var_1_54)) , var_1_55)));
	}


	// From: Req14Batch81Amount500
	signed long int stepLocal_11 = var_1_27 * var_1_42;
	if (stepLocal_11 > var_1_93) {
		var_1_58 = (min ((abs (var_1_34)) , var_1_24));
	}


	// From: Req26Batch81Amount500
	signed long int stepLocal_21 = var_1_10 + var_1_26;
	if (var_1_33 >= stepLocal_21) {
		var_1_80 = (8.4 + var_1_67);
	} else {
		var_1_80 = (max (var_1_12 , var_1_13));
	}


	// From: Req24Batch81Amount500
	signed long int stepLocal_19 = var_1_118 / var_1_10;
	unsigned char stepLocal_18 = var_1_41;
	if (stepLocal_18 < var_1_68) {
		var_1_76 = (var_1_36 - 128);
	} else {
		if (stepLocal_19 <= (var_1_24 + var_1_59)) {
			var_1_76 = (min ((min (var_1_73 , var_1_26)) , (abs (var_1_42))));
		} else {
			var_1_76 = (var_1_36 - var_1_73);
		}
	}


	// From: Req36Batch81Amount500
	signed long int stepLocal_29 = var_1_6;
	if (var_1_1 > stepLocal_29) {
		if (var_1_13 < (255.75f * (var_1_114 / var_1_39))) {
			if (! var_1_116) {
				var_1_102 = var_1_82;
			} else {
				var_1_102 = ((max ((var_1_104 + var_1_105) , (min (var_1_70 , var_1_106)))) - var_1_58);
			}
		}
	}


	// From: Req20Batch81Amount500
	unsigned long int stepLocal_15 = var_1_102;
	if ((32 * 5) != stepLocal_15) {
		var_1_69 = (var_1_70 - (min ((max (var_1_26 , var_1_35)) , var_1_37)));
	}


	// From: Req30Batch81Amount500
	signed short int stepLocal_23 = var_1_21;
	if (var_1_13 < var_1_64) {
		if (stepLocal_23 <= -8) {
			var_1_87 = (var_1_76 - var_1_73);
		}
	} else {
		if (var_1_15 <= var_1_55) {
			if (! var_1_61) {
				var_1_87 = (min (-100 , var_1_82));
			} else {
				var_1_87 = (var_1_76 - var_1_24);
			}
		} else {
			var_1_87 = (max (var_1_63 , var_1_43));
		}
	}


	// From: Req10Batch81Amount500
	unsigned char stepLocal_8 = var_1_42;
	signed short int stepLocal_7 = var_1_27;
	if (var_1_42 == stepLocal_7) {
		if (var_1_69 <= stepLocal_8) {
			var_1_46 = var_1_15;
		}
	} else {
		var_1_46 = (var_1_22 - var_1_15);
	}


	// From: Req2Batch81Amount500
	unsigned char stepLocal_5 = var_1_79;
	signed long int stepLocal_4 = var_1_8 / var_1_10;
	unsigned char stepLocal_3 = var_1_116;
	signed long int stepLocal_2 = var_1_7;
	if (var_1_58 == stepLocal_4) {
		if (! (var_1_58 <= var_1_8)) {
			if (stepLocal_5 && var_1_116) {
				if (stepLocal_2 > (var_1_6 + (var_1_58 + var_1_10))) {
					var_1_9 = var_1_12;
				} else {
					var_1_9 = ((abs (var_1_13 - var_1_14)) - var_1_15);
				}
			} else {
				if (var_1_79 && stepLocal_3) {
					var_1_9 = var_1_13;
				} else {
					var_1_9 = var_1_12;
				}
			}
		} else {
			var_1_9 = var_1_14;
		}
	} else {
		var_1_9 = var_1_14;
	}


	// From: Req11Batch81Amount500
	signed long int stepLocal_9 = var_1_96 / var_1_24;
	if ((max ((var_1_33 + var_1_43) , var_1_29)) < stepLocal_9) {
		var_1_48 = (min (var_1_44 , (var_1_45 + (var_1_50 + var_1_51))));
	} else {
		var_1_48 = (var_1_44 - var_1_45);
	}


	// From: Req12Batch81Amount500
	unsigned long int stepLocal_10 = min (var_1_24 , var_1_102);
	if (var_1_50 <= stepLocal_10) {
		var_1_52 = ((min ((max (var_1_1 , var_1_28)) , -50)) + (-32 + var_1_31));
	} else {
		var_1_52 = ((min (var_1_19 , -64)) + var_1_44);
	}


	// From: Req48Batch81Amount500
	unsigned char stepLocal_34 = var_1_88;
	if ((var_1_87 == (var_1_36 - var_1_34)) || stepLocal_34) {
		var_1_120 = ((max (var_1_45 , var_1_96)) + var_1_101);
	}


	// From: Req6Batch81Amount500
	if ((var_1_28 <= var_1_20) && (var_1_52 != (var_1_19 - var_1_26))) {
		if ((var_1_19 + var_1_28) > var_1_76) {
			var_1_32 = (min (var_1_14 , var_1_12));
		}
	} else {
		var_1_32 = (var_1_13 - (abs (var_1_15)));
	}


	// From: Req9Batch81Amount500
	if (((var_1_15 / var_1_39) * (var_1_121 + var_1_9)) >= var_1_23) {
		var_1_38 = (var_1_41 - var_1_42);
	} else {
		if (var_1_121 <= var_1_39) {
			var_1_38 = (max (var_1_42 , (var_1_43 + (var_1_44 + var_1_45))));
		}
	}


	// From: Req35Batch81Amount500
	unsigned char stepLocal_28 = var_1_92;
	if (var_1_74 > var_1_121) {
		if (stepLocal_28 || (var_1_64 >= var_1_121)) {
			var_1_99 = (last_1_var_1_99 + ((var_1_100 + var_1_101) - var_1_36));
		} else {
			var_1_99 = (var_1_70 - (min ((max (var_1_44 , 200u)) , (var_1_24 + var_1_33))));
		}
	} else {
		var_1_99 = (var_1_38 + (var_1_38 + (var_1_59 + var_1_42)));
	}


	// From: Req37Batch81Amount500
	signed long int stepLocal_33 = var_1_1;
	unsigned char stepLocal_32 = var_1_61;
	signed long int stepLocal_31 = -32;
	unsigned char stepLocal_30 = var_1_42;
	if ((min ((var_1_73 - var_1_82) , var_1_51)) == stepLocal_31) {
		if (var_1_115) {
			if (stepLocal_33 <= (25 + (abs (var_1_6)))) {
				var_1_107 = (max ((var_1_41 - var_1_73) , (var_1_43 + 32)));
			} else {
				var_1_107 = (var_1_86 + var_1_82);
			}
		}
	} else {
		if (stepLocal_30 >= ((var_1_41 - var_1_44) | var_1_97)) {
			if (var_1_84 < (var_1_64 + var_1_46)) {
				var_1_107 = ((var_1_82 + (var_1_108 + var_1_109)) - var_1_73);
			} else {
				var_1_107 = (abs (var_1_45));
			}
		} else {
			if (stepLocal_32 && (256 == (min (64 , var_1_99)))) {
				if (var_1_46 >= var_1_80) {
					var_1_107 = var_1_73;
				} else {
					var_1_107 = var_1_45;
				}
			}
		}
	}


	// From: Req16Batch81Amount500
	signed long int stepLocal_14 = var_1_25 ^ (var_1_34 << var_1_41);
	signed short int stepLocal_13 = var_1_20;
	if (stepLocal_14 <= var_1_99) {
		if (var_1_28 <= stepLocal_13) {
			var_1_60 = (var_1_115 || var_1_61);
		}
	} else {
		var_1_60 = var_1_62;
	}


	// From: Req22Batch81Amount500
	signed long int stepLocal_17 = 1;
	unsigned char stepLocal_16 = var_1_41;
	if (var_1_120 < stepLocal_16) {
		if (var_1_14 == var_1_12) {
			var_1_72 = var_1_42;
		} else {
			var_1_72 = (var_1_42 + (var_1_45 + var_1_73));
		}
	} else {
		if (var_1_107 <= stepLocal_17) {
			var_1_72 = (abs (min ((var_1_42 + var_1_44) , var_1_41)));
		} else {
			if ((max ((abs (var_1_64)) , var_1_57)) > (- (4.85 * var_1_53))) {
				var_1_72 = (var_1_41 - (abs (var_1_45)));
			}
		}
	}


	// From: Req27Batch81Amount500
	if (! (var_1_65 > var_1_99)) {
		if (var_1_21 > (var_1_99 * var_1_69)) {
			if (((var_1_14 - var_1_13) / var_1_56) < (min ((max (var_1_9 , var_1_74)) , var_1_55))) {
				var_1_81 = ((var_1_82 - var_1_73) + var_1_45);
			}
		}
	} else {
		var_1_81 = (var_1_41 - var_1_44);
	}


	// From: Req29Batch81Amount500
	if (var_1_15 < var_1_110) {
		if (((var_1_73 + var_1_45) - var_1_82) >= (var_1_99 * var_1_51)) {
			var_1_85 = (var_1_73 - (max ((var_1_45 + var_1_86) , var_1_44)));
		}
	} else {
		if (var_1_71 && (var_1_65 != -256)) {
			var_1_85 = ((var_1_86 - var_1_45) + 50);
		}
	}


	// From: Req45Batch81Amount500
	if (var_1_71) {
		var_1_117 = var_1_30;
	} else {
		var_1_117 = var_1_81;
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	assume_abort_if_not(var_1_10 != 0);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427388000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 32768);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 16383);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 8192);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 8191);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -16383);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -16383);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 24575);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	assume_abort_if_not(var_1_39 != 0.0F);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 127);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 64);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -31);
	assume_abort_if_not(var_1_50 <= 32);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -31);
	assume_abort_if_not(var_1_51 <= 31);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 4611686.018427383000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_65 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_65 >= -1);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= -230584.3009213691400e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691400e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= -230584.3009213691400e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691400e+12F && var_1_67 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 2147483647);
	assume_abort_if_not(var_1_70 <= 4294967294);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 63);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 255);
	assume_abort_if_not(var_1_75 != 0);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 63);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 63);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 0);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 0);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 0);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 127);
	assume_abort_if_not(var_1_94 <= 254);
	var_1_97 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_97 >= 8192);
	assume_abort_if_not(var_1_97 <= 16383);
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 49150);
	assume_abort_if_not(var_1_98 <= 65534);
	var_1_100 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_100 >= 536870911);
	assume_abort_if_not(var_1_100 <= 1073741824);
	var_1_101 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_101 >= 536870912);
	assume_abort_if_not(var_1_101 <= 1073741823);
	var_1_104 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_104 >= 1073741823);
	assume_abort_if_not(var_1_104 <= 2147483647);
	var_1_105 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_105 >= 1073741824);
	assume_abort_if_not(var_1_105 <= 2147483647);
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 2147483647);
	assume_abort_if_not(var_1_106 <= 4294967294);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 32);
	assume_abort_if_not(var_1_108 <= 64);
	var_1_109 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_109 >= 32);
	assume_abort_if_not(var_1_109 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_118 = var_1_118;
	last_1_var_1_120 = var_1_120;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((! (last_1_var_1_80 > last_1_var_1_46)) ? (((~ (abs (4))) >= (last_1_var_1_120 ^ (abs (var_1_6)))) ? ((var_1_6 <= last_1_var_1_120) ? (var_1_1 == ((signed long int) var_1_7)) : 1) : (var_1_1 == ((signed long int) (max (var_1_7 , var_1_8))))) : 1) && ((var_1_58 == (var_1_8 / var_1_10)) ? ((! (var_1_58 <= var_1_8)) ? ((var_1_79 && var_1_116) ? ((var_1_7 > (var_1_6 + (var_1_58 + var_1_10))) ? (var_1_9 == ((float) var_1_12)) : (var_1_9 == ((float) ((abs (var_1_13 - var_1_14)) - var_1_15)))) : ((var_1_79 && var_1_116) ? (var_1_9 == ((float) var_1_13)) : (var_1_9 == ((float) var_1_12)))) : (var_1_9 == ((float) var_1_14))) : (var_1_9 == ((float) var_1_14)))) && (var_1_79 ? (var_1_16 == ((float) (min (var_1_15 , var_1_13)))) : 1)) && (((128.2 - var_1_14) > 1.00000000000008E13) ? (var_1_17 == ((signed short int) (var_1_18 - (max (var_1_19 , var_1_20))))) : (var_1_88 ? (var_1_17 == ((signed short int) (min (var_1_19 , var_1_20)))) : 1))) && (((abs (var_1_6)) != (var_1_18 - var_1_19)) ? (((var_1_13 - (var_1_22 + var_1_23)) >= var_1_15) ? (((var_1_10 / (var_1_24 + var_1_25)) < -256) ? (var_1_21 == ((signed short int) ((var_1_26 - (var_1_27 + var_1_28)) + (max (var_1_29 , (max (var_1_30 , var_1_31))))))) : (var_1_21 == ((signed short int) ((abs (var_1_30 + var_1_29)) - var_1_20)))) : (var_1_21 == ((signed short int) (min (var_1_30 , var_1_28))))) : (var_1_21 == ((signed short int) (var_1_29 + var_1_30))))) && (((var_1_28 <= var_1_20) && (var_1_52 != (var_1_19 - var_1_26))) ? (((var_1_19 + var_1_28) > var_1_76) ? (var_1_32 == ((float) (min (var_1_14 , var_1_12)))) : 1) : (var_1_32 == ((float) (var_1_13 - (abs (var_1_15))))))) && ((! var_1_116) ? (var_1_33 == ((unsigned short int) (var_1_26 + var_1_25))) : ((var_1_7 <= 100) ? (var_1_33 == ((unsigned short int) ((var_1_34 + (var_1_35 - var_1_28)) - (max (var_1_25 , var_1_26))))) : (var_1_33 == ((unsigned short int) (var_1_36 - var_1_28)))))) && (var_1_37 == ((unsigned short int) (var_1_19 + var_1_34)))) && ((((var_1_15 / var_1_39) * (var_1_121 + var_1_9)) >= var_1_23) ? (var_1_38 == ((unsigned char) (var_1_41 - var_1_42))) : ((var_1_121 <= var_1_39) ? (var_1_38 == ((unsigned char) (max (var_1_42 , (var_1_43 + (var_1_44 + var_1_45)))))) : 1))) && ((var_1_42 == var_1_27) ? ((var_1_69 <= var_1_42) ? (var_1_46 == ((double) var_1_15)) : 1) : (var_1_46 == ((double) (var_1_22 - var_1_15))))) && (((max ((var_1_33 + var_1_43) , var_1_29)) < (var_1_96 / var_1_24)) ? (var_1_48 == ((signed char) (min (var_1_44 , (var_1_45 + (var_1_50 + var_1_51)))))) : (var_1_48 == ((signed char) (var_1_44 - var_1_45))))) && ((var_1_50 <= (min (var_1_24 , var_1_102))) ? (var_1_52 == ((signed long int) ((min ((max (var_1_1 , var_1_28)) , -50)) + (-32 + var_1_31)))) : (var_1_52 == ((signed long int) ((min (var_1_19 , -64)) + var_1_44))))) && (var_1_116 ? (var_1_53 == ((float) (var_1_22 - (min ((var_1_54 + var_1_55) , (var_1_56 - var_1_57)))))) : (var_1_53 == ((float) (var_1_57 + (min ((abs (var_1_54)) , var_1_55))))))) && (((var_1_27 * var_1_42) > var_1_93) ? (var_1_58 == ((signed long int) (min ((abs (var_1_34)) , var_1_24)))) : 1)) && ((var_1_36 != var_1_45) ? (var_1_59 == ((signed long int) ((abs (var_1_34 - var_1_19)) - var_1_20))) : 1)) && (((var_1_25 ^ (var_1_34 << var_1_41)) <= var_1_99) ? ((var_1_28 <= var_1_20) ? (var_1_60 == ((unsigned char) (var_1_115 || var_1_61))) : 1) : (var_1_60 == ((unsigned char) var_1_62)))) && (var_1_63 == ((unsigned char) (max (var_1_43 , (min (var_1_41 , var_1_42))))))) && (last_1_var_1_79 ? (var_1_64 == ((double) (var_1_57 + var_1_55))) : (var_1_61 ? (var_1_64 == ((double) (abs (var_1_55)))) : ((((8.515075510033539E18f - var_1_57) - var_1_56) > var_1_14) ? ((((min (var_1_57 , var_1_55)) > (var_1_22 + var_1_12)) || ((min (var_1_45 , var_1_8)) < (var_1_65 - last_1_var_1_120))) ? (var_1_64 == ((double) (var_1_57 + (var_1_66 + var_1_67)))) : 1) : 1)))) && (var_1_68 == ((signed short int) (max ((var_1_20 - var_1_19) , (var_1_27 - (var_1_96 + var_1_63))))))) && (((32 * 5) != var_1_102) ? (var_1_69 == ((unsigned long int) (var_1_70 - (min ((max (var_1_26 , var_1_35)) , var_1_37))))) : 1)) && (var_1_71 == ((unsigned char) ((-256 < var_1_25) || var_1_61)))) && ((var_1_120 < var_1_41) ? ((var_1_14 == var_1_12) ? (var_1_72 == ((unsigned char) var_1_42)) : (var_1_72 == ((unsigned char) (var_1_42 + (var_1_45 + var_1_73))))) : ((var_1_107 <= 1) ? (var_1_72 == ((unsigned char) (abs (min ((var_1_42 + var_1_44) , var_1_41))))) : (((max ((abs (var_1_64)) , var_1_57)) > (- (4.85 * var_1_53))) ? (var_1_72 == ((unsigned char) (var_1_41 - (abs (var_1_45))))) : 1)))) && ((var_1_31 == var_1_20) ? ((var_1_41 < (var_1_34 % var_1_75)) ? (var_1_74 == ((double) (min ((min ((min (var_1_14 , var_1_22)) , var_1_56)) , var_1_12)))) : 1) : (var_1_74 == ((double) var_1_55)))) && ((var_1_41 < var_1_68) ? (var_1_76 == ((unsigned short int) (var_1_36 - 128))) : (((var_1_118 / var_1_10) <= (var_1_24 + var_1_59)) ? (var_1_76 == ((unsigned short int) (min ((min (var_1_73 , var_1_26)) , (abs (var_1_42)))))) : (var_1_76 == ((unsigned short int) (var_1_36 - var_1_73)))))) && (((var_1_75 * (last_1_var_1_99 + last_1_var_1_107)) > last_1_var_1_87) ? (var_1_79 == ((unsigned char) (! (! var_1_61)))) : (last_1_var_1_79 ? (var_1_79 == ((unsigned char) var_1_62)) : 1))) && ((var_1_33 >= (var_1_10 + var_1_26)) ? (var_1_80 == ((double) (8.4 + var_1_67))) : (var_1_80 == ((double) (max (var_1_12 , var_1_13)))))) && ((! (var_1_65 > var_1_99)) ? ((var_1_21 > (var_1_99 * var_1_69)) ? ((((var_1_14 - var_1_13) / var_1_56) < (min ((max (var_1_9 , var_1_74)) , var_1_55))) ? (var_1_81 == ((unsigned char) ((var_1_82 - var_1_73) + var_1_45))) : 1) : 1) : (var_1_81 == ((unsigned char) (var_1_41 - var_1_44))))) && ((var_1_30 > (var_1_7 * var_1_29)) ? ((var_1_57 < var_1_22) ? (var_1_83 == ((double) (var_1_14 - var_1_15))) : (var_1_83 == ((double) (var_1_67 + 4.4)))) : ((var_1_57 >= (9.999999995E8f + (min (last_1_var_1_83 , var_1_22)))) ? (var_1_83 == ((double) ((var_1_57 + var_1_55) - ((min (var_1_54 , 99.8)) + var_1_84)))) : (var_1_83 == ((double) ((var_1_56 - var_1_55) - (var_1_84 + var_1_54))))))) && ((var_1_15 < var_1_110) ? ((((var_1_73 + var_1_45) - var_1_82) >= (var_1_99 * var_1_51)) ? (var_1_85 == ((signed char) (var_1_73 - (max ((var_1_45 + var_1_86) , var_1_44))))) : 1) : ((var_1_71 && (var_1_65 != -256)) ? (var_1_85 == ((signed char) ((var_1_86 - var_1_45) + 50))) : 1))) && ((var_1_13 < var_1_64) ? ((var_1_21 <= -8) ? (var_1_87 == ((signed long int) (var_1_76 - var_1_73))) : 1) : ((var_1_15 <= var_1_55) ? ((! var_1_61) ? (var_1_87 == ((signed long int) (min (-100 , var_1_82)))) : (var_1_87 == ((signed long int) (var_1_76 - var_1_24)))) : (var_1_87 == ((signed long int) (max (var_1_63 , var_1_43))))))) && (((max (last_1_var_1_17 , last_1_var_1_69)) < (last_1_var_1_38 / (max (4u , var_1_75)))) ? (var_1_88 == ((unsigned char) var_1_61)) : (var_1_88 == ((unsigned char) (((var_1_62 || var_1_90) || var_1_91) || var_1_92))))) && (var_1_93 == ((unsigned char) ((max (128 , (min (var_1_41 , var_1_94)))) - var_1_45)))) && ((var_1_10 >= var_1_43) ? (var_1_95 == ((signed char) (min (var_1_50 , (max (var_1_44 , var_1_73)))))) : 1)) && ((last_1_var_1_114 <= last_1_var_1_64) ? ((last_1_var_1_32 >= ((- var_1_12) / (min (var_1_56 , var_1_39)))) ? ((last_1_var_1_1 >= (var_1_29 | var_1_75)) ? (var_1_96 == ((unsigned short int) (max (var_1_75 , (max (var_1_34 , var_1_35)))))) : ((var_1_82 > (var_1_94 - (min (var_1_44 , var_1_42)))) ? (var_1_96 == ((unsigned short int) (((10000 + var_1_97) + var_1_35) - (max (last_1_var_1_118 , (var_1_34 - var_1_73)))))) : 1)) : 1) : (var_1_96 == ((unsigned short int) (max ((var_1_36 - last_1_var_1_63) , ((var_1_98 - var_1_41) - var_1_27))))))) && ((var_1_74 > var_1_121) ? ((var_1_92 || (var_1_64 >= var_1_121)) ? (var_1_99 == ((unsigned long int) (last_1_var_1_99 + ((var_1_100 + var_1_101) - var_1_36)))) : (var_1_99 == ((unsigned long int) (var_1_70 - (min ((max (var_1_44 , 200u)) , (var_1_24 + var_1_33))))))) : (var_1_99 == ((unsigned long int) (var_1_38 + (var_1_38 + (var_1_59 + var_1_42))))))) && ((var_1_1 > var_1_6) ? ((var_1_13 < (255.75f * (var_1_114 / var_1_39))) ? ((! var_1_116) ? (var_1_102 == ((unsigned long int) var_1_82)) : (var_1_102 == ((unsigned long int) ((max ((var_1_104 + var_1_105) , (min (var_1_70 , var_1_106)))) - var_1_58)))) : 1) : 1)) && (((min ((var_1_73 - var_1_82) , var_1_51)) == -32) ? (var_1_115 ? ((var_1_1 <= (25 + (abs (var_1_6)))) ? (var_1_107 == ((unsigned char) (max ((var_1_41 - var_1_73) , (var_1_43 + 32))))) : (var_1_107 == ((unsigned char) (var_1_86 + var_1_82)))) : 1) : ((var_1_42 >= ((var_1_41 - var_1_44) | var_1_97)) ? ((var_1_84 < (var_1_64 + var_1_46)) ? (var_1_107 == ((unsigned char) ((var_1_82 + (var_1_108 + var_1_109)) - var_1_73))) : (var_1_107 == ((unsigned char) (abs (var_1_45))))) : ((var_1_61 && (256 == (min (64 , var_1_99)))) ? ((var_1_46 >= var_1_80) ? (var_1_107 == ((unsigned char) var_1_73)) : (var_1_107 == ((unsigned char) var_1_45))) : 1)))) && (var_1_90 ? (var_1_110 == ((float) var_1_23)) : (var_1_110 == ((float) var_1_57)))) && (var_1_111 == ((signed char) var_1_50))) && (var_1_112 == ((unsigned short int) var_1_25))) && (var_1_113 == ((float) var_1_12))) && (var_1_79 ? (var_1_114 == ((double) 0.75)) : 1)) && (var_1_79 ? (var_1_115 == ((unsigned char) var_1_90)) : (var_1_115 == ((unsigned char) var_1_61)))) && (var_1_116 == ((unsigned char) var_1_61))) && (var_1_71 ? (var_1_117 == ((signed short int) var_1_30)) : (var_1_117 == ((signed short int) var_1_81)))) && (var_1_92 ? (var_1_118 == ((signed short int) var_1_93)) : (var_1_118 == ((signed short int) var_1_45)))) && (var_1_79 ? (var_1_119 == ((unsigned char) var_1_62)) : 1)) && (((var_1_87 == (var_1_36 - var_1_34)) || var_1_88) ? (var_1_120 == ((unsigned long int) ((max (var_1_45 , var_1_96)) + var_1_101))) : 1)) && ((last_1_var_1_99 <= (max ((max (-100 , last_1_var_1_48)) , (var_1_108 - var_1_73)))) ? ((! var_1_92) ? (var_1_121 == ((double) var_1_56)) : 1) : (var_1_121 == ((double) var_1_84)))
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
