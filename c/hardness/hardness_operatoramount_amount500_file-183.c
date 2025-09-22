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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 10.2;
double var_1_4 = 99.325;
double var_1_5 = 99999999999.375;
double var_1_6 = 999999999999999.6;
double var_1_7 = 9.5;
double var_1_12 = 31.6;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 1;
signed char var_1_16 = 16;
unsigned short int var_1_17 = 16;
signed char var_1_20 = -8;
signed char var_1_21 = -1;
signed char var_1_22 = 25;
signed char var_1_23 = -16;
float var_1_24 = 7.5;
float var_1_25 = 0.0;
float var_1_26 = 15.45;
float var_1_27 = 99999999999999.75;
float var_1_28 = 0.0;
float var_1_29 = 99.2;
signed short int var_1_30 = 16;
signed short int var_1_31 = 1;
float var_1_32 = 255.5;
unsigned char var_1_33 = 100;
unsigned long int var_1_35 = 8;
unsigned long int var_1_36 = 2;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 2;
signed long int var_1_41 = -64;
unsigned short int var_1_42 = 4;
unsigned long int var_1_43 = 16;
unsigned long int var_1_44 = 1173274971;
unsigned long int var_1_45 = 1831024178;
unsigned char var_1_46 = 8;
signed short int var_1_47 = -8;
signed short int var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
signed short int var_1_52 = 64;
signed short int var_1_54 = 21970;
unsigned short int var_1_55 = 25;
unsigned short int var_1_56 = 33664;
unsigned short int var_1_57 = 16;
signed short int var_1_58 = 18202;
float var_1_59 = 1.97;
unsigned short int var_1_60 = 5;
unsigned short int var_1_61 = 29518;
unsigned short int var_1_62 = 25966;
double var_1_63 = 2.5;
signed char var_1_66 = 16;
unsigned long int var_1_67 = 10;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 0;
signed long int var_1_73 = 2;
signed long int var_1_74 = -128;
signed short int var_1_75 = -50;
signed short int var_1_76 = 1;
double var_1_77 = 999999.4;
signed char var_1_78 = 5;
unsigned char var_1_79 = 128;
signed char var_1_80 = -16;
unsigned char var_1_81 = 100;
signed char var_1_82 = 64;
float var_1_83 = 0.2;
float var_1_84 = 9.9;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 1;
unsigned short int var_1_87 = 8;
double var_1_88 = 7.4;
double var_1_89 = 99.75;
float var_1_90 = 49.875;
unsigned short int var_1_91 = 32;
signed char var_1_92 = 64;
unsigned char var_1_93 = 0;
signed char var_1_94 = -5;
signed short int var_1_97 = 1;
unsigned char var_1_98 = 16;
unsigned char var_1_99 = 1;
signed long int var_1_100 = -64;
signed short int var_1_101 = -25;
signed char var_1_102 = -10;
float var_1_103 = 100.25;
double var_1_104 = 9999999.375;
signed long int var_1_105 = -4;
unsigned long int var_1_106 = 50;
unsigned char var_1_107 = 1;
unsigned short int var_1_108 = 64;
signed char var_1_109 = -2;
double var_1_110 = 2.3;
double var_1_111 = 2.5;
float var_1_112 = 1.2;
unsigned long int var_1_113 = 3303820646;
unsigned long int var_1_114 = 2681326213;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_33 = 100;
signed long int last_1_var_1_41 = -64;
unsigned long int last_1_var_1_43 = 16;
unsigned short int last_1_var_1_55 = 25;
double last_1_var_1_63 = 2.5;
unsigned long int last_1_var_1_67 = 10;
signed long int last_1_var_1_73 = 2;
signed short int last_1_var_1_75 = -50;
unsigned char last_1_var_1_85 = 1;
unsigned char last_1_var_1_86 = 1;
signed short int last_1_var_1_97 = 1;
signed long int last_1_var_1_100 = -64;
signed long int last_1_var_1_105 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch183Amount500
	if ((- last_1_var_1_105) < last_1_var_1_43) {
		var_1_67 = (var_1_45 + (abs (var_1_36)));
	} else {
		if ((var_1_37 * var_1_54) == last_1_var_1_41) {
			var_1_67 = (abs (last_1_var_1_33 + var_1_54));
		} else {
			var_1_67 = (max (var_1_45 , var_1_35));
		}
	}


	// From: Req12Batch183Amount500
	if ((max (var_1_38 , last_1_var_1_75)) == ((abs (-128)) + var_1_39)) {
		if ((var_1_45 * last_1_var_1_73) > (var_1_37 + last_1_var_1_100)) {
			if ((var_1_42 / var_1_17) < last_1_var_1_100) {
				var_1_49 = (! var_1_50);
			} else {
				var_1_49 = (var_1_50 && (! var_1_51));
			}
		}
	} else {
		var_1_49 = (var_1_50 && var_1_51);
	}


	// From: Req20Batch183Amount500
	if (last_1_var_1_85 || last_1_var_1_86) {
		if (! last_1_var_1_86) {
			if (var_1_50 && last_1_var_1_85) {
				var_1_69 = (var_1_51 || var_1_70);
			} else {
				var_1_69 = (((max (last_1_var_1_67 , last_1_var_1_100)) < var_1_58) && var_1_70);
			}
		} else {
			if (var_1_70 && var_1_51) {
				var_1_69 = ((var_1_50 && (var_1_51 || var_1_71)) && var_1_72);
			} else {
				var_1_69 = (var_1_71 || (last_1_var_1_86 || var_1_50));
			}
		}
	} else {
		var_1_69 = (! (var_1_70 || var_1_72));
	}


	// From: Req27Batch183Amount500
	if (var_1_72) {
		var_1_85 = (var_1_70 || (var_1_69 && var_1_51));
	} else {
		var_1_85 = (var_1_50 && var_1_71);
	}


	// From: Req21Batch183Amount500
	unsigned long int stepLocal_13 = ~ var_1_35;
	unsigned char stepLocal_12 = var_1_69;
	if (var_1_85 || stepLocal_12) {
		if (var_1_48 > stepLocal_13) {
			var_1_73 = ((var_1_20 + var_1_58) + (max (var_1_23 , (min (var_1_54 , var_1_39)))));
		} else {
			var_1_73 = var_1_74;
		}
	}


	// From: Req48Batch183Amount500
	if (var_1_69) {
		var_1_110 = var_1_26;
	} else {
		var_1_110 = var_1_32;
	}


	// From: Req2Batch183Amount500
	var_1_12 = (1.00000000008E10 + var_1_4);


	// From: Req4Batch183Amount500
	if (var_1_85 && var_1_69) {
		var_1_16 = ((min (var_1_20 , 16)) + (min (var_1_21 , (var_1_22 + var_1_23))));
	} else {
		var_1_16 = (min (var_1_21 , -16));
	}


	// From: Req11Batch183Amount500
	if (var_1_85) {
		var_1_47 = (var_1_37 - (min (var_1_48 , var_1_36)));
	}


	// From: Req16Batch183Amount500
	unsigned char stepLocal_9 = var_1_69;
	if (var_1_51 || stepLocal_9) {
		var_1_60 = ((var_1_58 + var_1_61) - var_1_40);
	} else {
		var_1_60 = (max (((var_1_61 + var_1_62) - var_1_31) , var_1_48));
	}


	// From: Req26Batch183Amount500
	if (var_1_70) {
		var_1_83 = (max (((max (var_1_29 , var_1_84)) + var_1_6) , var_1_26));
	}


	// From: Req29Batch183Amount500
	signed short int stepLocal_17 = var_1_76;
	if (var_1_82 <= stepLocal_17) {
		var_1_87 = var_1_35;
	}


	// From: Req39Batch183Amount500
	if (var_1_51) {
		var_1_101 = var_1_37;
	}


	// From: Req40Batch183Amount500
	var_1_102 = var_1_22;


	// From: Req41Batch183Amount500
	if (var_1_85) {
		var_1_103 = var_1_4;
	} else {
		var_1_103 = var_1_84;
	}


	// From: Req45Batch183Amount500
	var_1_107 = var_1_39;


	// From: Req46Batch183Amount500
	if (var_1_70) {
		var_1_108 = var_1_37;
	} else {
		var_1_108 = 32;
	}


	// From: Req47Batch183Amount500
	if (var_1_51) {
		var_1_109 = var_1_23;
	}


	// From: Req9Batch183Amount500
	unsigned char stepLocal_5 = var_1_40;
	if (((max (var_1_22 , var_1_38)) * last_1_var_1_43) <= stepLocal_5) {
		var_1_43 = var_1_38;
	} else {
		if ((min (var_1_29 , (var_1_26 - var_1_7))) < ((var_1_4 + var_1_12) / (abs (var_1_28)))) {
			var_1_43 = (abs (25u));
		} else {
			var_1_43 = ((abs (var_1_73)) + ((min (var_1_44 , var_1_45)) - var_1_39));
		}
	}


	// From: Req33Batch183Amount500
	unsigned char stepLocal_23 = var_1_51;
	if ((var_1_110 / 0.75) >= var_1_28) {
		if (var_1_72 || stepLocal_23) {
			var_1_93 = var_1_72;
		}
	} else {
		var_1_93 = ((! var_1_72) || var_1_51);
	}


	// From: Req38Batch183Amount500
	var_1_100 = var_1_43;


	// From: Req43Batch183Amount500
	var_1_105 = var_1_43;


	// From: Req5Batch183Amount500
	unsigned char stepLocal_2 = var_1_43 <= var_1_23;
	if (var_1_69 || stepLocal_2) {
		var_1_24 = (min (var_1_5 , ((var_1_25 - var_1_26) - (abs (100000.4f)))));
	} else {
		var_1_24 = (min ((var_1_26 + (var_1_7 - var_1_6)) , var_1_5));
	}


	// From: Req10Batch183Amount500
	if (var_1_5 <= var_1_24) {
		if ((- var_1_14) > var_1_39) {
			var_1_46 = (max (16 , var_1_36));
		} else {
			var_1_46 = (max (var_1_35 , (var_1_37 - 5)));
		}
	} else {
		var_1_46 = ((var_1_36 + var_1_40) + var_1_35);
	}


	// From: Req18Batch183Amount500
	if (var_1_93) {
		var_1_66 = (var_1_36 - (min (var_1_40 , var_1_42)));
	} else {
		var_1_66 = var_1_40;
	}


	// From: Req23Batch183Amount500
	if (var_1_71) {
		if (((abs (var_1_56)) - var_1_101) < var_1_62) {
			var_1_77 = (var_1_26 + var_1_5);
		} else {
			var_1_77 = (min (1.7 , (var_1_6 + (256.5 + var_1_29))));
		}
	}


	// From: Req31Batch183Amount500
	signed long int stepLocal_20 = var_1_100;
	if (stepLocal_20 < ((max (var_1_14 , 100000000)) - var_1_82)) {
		var_1_90 = (var_1_29 - 255.625f);
	} else {
		var_1_90 = (abs (var_1_26 - var_1_7));
	}


	// From: Req36Batch183Amount500
	if ((var_1_77 + var_1_25) <= var_1_89) {
		var_1_98 = var_1_36;
	} else {
		var_1_98 = var_1_92;
	}


	// From: Req44Batch183Amount500
	if (var_1_93) {
		var_1_106 = var_1_47;
	}


	// From: Req7Batch183Amount500
	unsigned long int stepLocal_3 = var_1_67;
	if (stepLocal_3 != (var_1_15 >> (var_1_35 + var_1_36))) {
		if (var_1_93) {
			var_1_33 = (max (var_1_35 , var_1_36));
		} else {
			var_1_33 = (var_1_37 - (min ((var_1_38 - var_1_36) , var_1_35)));
		}
	} else {
		var_1_33 = ((var_1_36 + var_1_35) + (var_1_39 + var_1_40));
	}


	// From: Req28Batch183Amount500
	unsigned char stepLocal_16 = var_1_84 < var_1_29;
	if (var_1_69 || stepLocal_16) {
		var_1_86 = (var_1_93 && ((var_1_74 >= var_1_40) && var_1_70));
	} else {
		var_1_86 = (((var_1_87 > var_1_44) && var_1_51) || var_1_70);
	}


	// From: Req37Batch183Amount500
	if (var_1_86) {
		var_1_99 = var_1_40;
	}


	// From: Req34Batch183Amount500
	unsigned long int stepLocal_26 = var_1_43;
	unsigned long int stepLocal_25 = var_1_67 + var_1_17;
	unsigned long int stepLocal_24 = var_1_106;
	if (stepLocal_25 > var_1_43) {
		if (((var_1_29 + var_1_26) - var_1_25) < var_1_32) {
			var_1_94 = (max (var_1_40 , var_1_80));
		}
	} else {
		if (var_1_17 <= stepLocal_26) {
			if (var_1_69) {
				var_1_94 = (var_1_36 - var_1_39);
			} else {
				if (stepLocal_24 == (var_1_58 * var_1_106)) {
					var_1_94 = ((var_1_35 + (min (var_1_36 , var_1_42))) - 1);
				}
			}
		}
	}


	// From: Req42Batch183Amount500
	if (var_1_86) {
		var_1_104 = var_1_7;
	}


	// From: Req49Batch183Amount500
	if (var_1_86) {
		var_1_111 = var_1_28;
	} else {
		var_1_111 = var_1_26;
	}


	// From: Req17Batch183Amount500
	unsigned char stepLocal_11 = ! var_1_93;
	unsigned long int stepLocal_10 = var_1_106;
	if (var_1_85) {
		if (var_1_49) {
			if (stepLocal_10 <= var_1_87) {
				var_1_63 = (var_1_29 - (var_1_28 - var_1_6));
			}
		} else {
			if (((min (var_1_25 , var_1_104)) + last_1_var_1_63) < var_1_7) {
				var_1_63 = (var_1_26 + (256.25 - var_1_6));
			} else {
				var_1_63 = (min (var_1_26 , var_1_4));
			}
		}
	} else {
		if (var_1_50 && stepLocal_11) {
			var_1_63 = (min (var_1_5 , ((abs (var_1_6)) - (var_1_25 - var_1_26))));
		} else {
			var_1_63 = (var_1_25 - var_1_6);
		}
	}


	// From: Req8Batch183Amount500
	unsigned long int stepLocal_4 = (min (var_1_35 , var_1_99)) - (var_1_40 + var_1_37);
	if (stepLocal_4 > ((min (var_1_17 , last_1_var_1_41)) << (var_1_36 + var_1_42))) {
		var_1_41 = (max (var_1_22 , (var_1_15 + var_1_30)));
	}


	// From: Req3Batch183Amount500
	if (((max (1 , var_1_105)) | var_1_67) <= var_1_41) {
		var_1_13 = (max (var_1_14 , var_1_15));
	}


	// From: Req14Batch183Amount500
	signed long int stepLocal_7 = (var_1_54 / -128) | var_1_30;
	signed long int stepLocal_6 = var_1_73;
	if (stepLocal_7 < (var_1_67 + var_1_41)) {
		var_1_55 = ((abs (var_1_56)) - (min (var_1_39 , var_1_57)));
	} else {
		if ((var_1_57 - (var_1_58 - var_1_42)) <= stepLocal_6) {
			var_1_55 = (min (var_1_54 , ((var_1_58 - var_1_38) + last_1_var_1_55)));
		}
	}


	// From: Req15Batch183Amount500
	signed long int stepLocal_8 = var_1_41;
	if ((var_1_100 >> var_1_36) < stepLocal_8) {
		var_1_59 = (abs (var_1_32));
	} else {
		var_1_59 = (min (var_1_26 , var_1_25));
	}


	// From: Req32Batch183Amount500
	signed long int stepLocal_22 = max (var_1_55 , (var_1_38 - var_1_92));
	signed long int stepLocal_21 = var_1_105;
	if (var_1_109 != stepLocal_22) {
		if (! var_1_69) {
			var_1_91 = (var_1_56 - var_1_36);
		} else {
			var_1_91 = var_1_58;
		}
	} else {
		if (stepLocal_21 < var_1_79) {
			if (var_1_51) {
				var_1_91 = (min (var_1_39 , var_1_48));
			}
		} else {
			var_1_91 = (var_1_56 - (var_1_42 + var_1_38));
		}
	}


	// From: Req35Batch183Amount500
	if (var_1_69) {
		var_1_97 = ((var_1_54 - var_1_55) - 32);
	} else {
		var_1_97 = (var_1_92 + last_1_var_1_97);
	}


	// From: Req50Batch183Amount500
	if ((- (var_1_56 - var_1_39)) >= var_1_106) {
		if ((var_1_113 - var_1_41) < (var_1_13 / (var_1_114 - var_1_79))) {
			if (var_1_49) {
				var_1_112 = var_1_4;
			} else {
				var_1_112 = var_1_5;
			}
		}
	}


	// From: Req1Batch183Amount500
	signed long int stepLocal_1 = var_1_73;
	unsigned long int stepLocal_0 = var_1_106;
	if (var_1_77 >= var_1_63) {
		var_1_1 = ((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7));
	} else {
		if (var_1_7 > var_1_4) {
			if ((max (var_1_73 , (var_1_105 | var_1_100))) < stepLocal_0) {
				var_1_1 = (min (((var_1_6 + var_1_7) - 63.75) , (var_1_4 + var_1_5)));
			} else {
				if (var_1_105 < stepLocal_1) {
					var_1_1 = (max (var_1_7 , 1.5));
				}
			}
		} else {
			var_1_1 = (min (100.5 , var_1_6));
		}
	}


	// From: Req30Batch183Amount500
	unsigned char stepLocal_19 = var_1_49;
	unsigned short int stepLocal_18 = var_1_87;
	if (stepLocal_18 > var_1_38) {
		if (var_1_70) {
			if ((var_1_104 * (var_1_1 / var_1_25)) == var_1_84) {
				var_1_88 = (var_1_32 + var_1_84);
			} else {
				var_1_88 = (min ((max (var_1_6 , var_1_5)) , (var_1_29 - var_1_25)));
			}
		} else {
			var_1_88 = (var_1_7 + var_1_32);
		}
	} else {
		if (var_1_83 == var_1_5) {
			if (var_1_51 && stepLocal_19) {
				var_1_88 = (abs (var_1_84));
			} else {
				var_1_88 = (var_1_89 - var_1_29);
			}
		} else {
			var_1_88 = (min (var_1_28 , var_1_5));
		}
	}


	// From: Req6Batch183Amount500
	if (var_1_85) {
		var_1_27 = ((var_1_6 + var_1_7) - var_1_25);
	} else {
		if ((var_1_30 - var_1_31) > -32) {
			if ((var_1_88 / var_1_25) < var_1_4) {
				var_1_27 = var_1_4;
			} else {
				if (var_1_69) {
					var_1_27 = (max ((min (var_1_5 , var_1_6)) , (abs (var_1_7))));
				} else {
					var_1_27 = ((var_1_28 - var_1_6) - var_1_29);
				}
			}
		} else {
			var_1_27 = (((max (var_1_32 , var_1_7)) + var_1_29) - var_1_26);
		}
	}


	// From: Req13Batch183Amount500
	if (var_1_105 < var_1_67) {
		if ((var_1_69 && var_1_93) && var_1_50) {
			var_1_52 = (abs (var_1_20));
		} else {
			if (var_1_27 <= (- var_1_32)) {
				if (var_1_32 <= (var_1_29 * var_1_5)) {
					var_1_52 = (var_1_97 - 256);
				} else {
					var_1_52 = (max (var_1_37 , var_1_39));
				}
			} else {
				var_1_52 = (var_1_38 + var_1_36);
			}
		}
	} else {
		if (var_1_87 > var_1_67) {
			var_1_52 = ((var_1_54 - (var_1_39 + var_1_97)) - var_1_37);
		}
	}


	// From: Req24Batch183Amount500
	if (var_1_37 <= (var_1_79 - var_1_40)) {
		if (var_1_106 <= var_1_62) {
			var_1_78 = (var_1_23 + var_1_20);
		} else {
			if ((var_1_27 * var_1_26) < (var_1_5 + var_1_1)) {
				var_1_78 = (var_1_80 + var_1_42);
			}
		}
	} else {
		var_1_78 = var_1_36;
	}


	// From: Req25Batch183Amount500
	unsigned short int stepLocal_15 = var_1_91;
	unsigned short int stepLocal_14 = var_1_91;
	if (var_1_54 > stepLocal_14) {
		var_1_81 = var_1_39;
	} else {
		if (stepLocal_15 >= (min ((var_1_36 - var_1_82) , 64))) {
			var_1_81 = (var_1_37 - var_1_38);
		}
	}


	// From: Req22Batch183Amount500
	if (var_1_41 > var_1_38) {
		if (var_1_36 >= var_1_43) {
			var_1_75 = (abs (min ((min (32 , var_1_42)) , var_1_38)));
		} else {
			var_1_75 = ((-16 + var_1_21) + -16);
		}
	} else {
		if ((max (var_1_29 , var_1_12)) <= var_1_88) {
			var_1_75 = ((min ((min (var_1_38 , var_1_76)) , var_1_21)) + last_1_var_1_75);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65535);
	assume_abort_if_not(var_1_17 != 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -31);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -31);
	assume_abort_if_not(var_1_23 <= 31);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 4611686.018427383000e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 6917529.027641074000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 8);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 7);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 64);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 7);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32766);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_54 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_54 >= 16382);
	assume_abort_if_not(var_1_54 <= 32766);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 32767);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 16383);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 16384);
	assume_abort_if_not(var_1_61 <= 32767);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 16384);
	assume_abort_if_not(var_1_62 <= 32767);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= -2147483647);
	assume_abort_if_not(var_1_74 <= 2147483646);
	var_1_76 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_76 >= -16383);
	assume_abort_if_not(var_1_76 <= 16383);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 127);
	assume_abort_if_not(var_1_79 <= 255);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -63);
	assume_abort_if_not(var_1_80 <= 63);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -461168.6018427383000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854766000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 127);
	var_1_113 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_113 >= 2147483647);
	assume_abort_if_not(var_1_113 <= 4294967295);
	var_1_114 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_114 >= 2147483647);
	assume_abort_if_not(var_1_114 <= 4294967295);
}



void updateLastVariables(void) {
	last_1_var_1_33 = var_1_33;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_105 = var_1_105;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_77 >= var_1_63) ? (var_1_1 == ((double) ((min (var_1_4 , var_1_5)) + (var_1_6 - var_1_7)))) : ((var_1_7 > var_1_4) ? (((max (var_1_73 , (var_1_105 | var_1_100))) < var_1_106) ? (var_1_1 == ((double) (min (((var_1_6 + var_1_7) - 63.75) , (var_1_4 + var_1_5))))) : ((var_1_105 < var_1_73) ? (var_1_1 == ((double) (max (var_1_7 , 1.5)))) : 1)) : (var_1_1 == ((double) (min (100.5 , var_1_6)))))) && (var_1_12 == ((double) (1.00000000008E10 + var_1_4)))) && ((((max (1 , var_1_105)) | var_1_67) <= var_1_41) ? (var_1_13 == ((unsigned short int) (max (var_1_14 , var_1_15)))) : 1)) && ((var_1_85 && var_1_69) ? (var_1_16 == ((signed char) ((min (var_1_20 , 16)) + (min (var_1_21 , (var_1_22 + var_1_23)))))) : (var_1_16 == ((signed char) (min (var_1_21 , -16)))))) && ((var_1_69 || (var_1_43 <= var_1_23)) ? (var_1_24 == ((float) (min (var_1_5 , ((var_1_25 - var_1_26) - (abs (100000.4f))))))) : (var_1_24 == ((float) (min ((var_1_26 + (var_1_7 - var_1_6)) , var_1_5)))))) && (var_1_85 ? (var_1_27 == ((float) ((var_1_6 + var_1_7) - var_1_25))) : (((var_1_30 - var_1_31) > -32) ? (((var_1_88 / var_1_25) < var_1_4) ? (var_1_27 == ((float) var_1_4)) : (var_1_69 ? (var_1_27 == ((float) (max ((min (var_1_5 , var_1_6)) , (abs (var_1_7)))))) : (var_1_27 == ((float) ((var_1_28 - var_1_6) - var_1_29))))) : (var_1_27 == ((float) (((max (var_1_32 , var_1_7)) + var_1_29) - var_1_26)))))) && ((var_1_67 != (var_1_15 >> (var_1_35 + var_1_36))) ? (var_1_93 ? (var_1_33 == ((unsigned char) (max (var_1_35 , var_1_36)))) : (var_1_33 == ((unsigned char) (var_1_37 - (min ((var_1_38 - var_1_36) , var_1_35)))))) : (var_1_33 == ((unsigned char) ((var_1_36 + var_1_35) + (var_1_39 + var_1_40)))))) && ((((min (var_1_35 , var_1_99)) - (var_1_40 + var_1_37)) > ((min (var_1_17 , last_1_var_1_41)) << (var_1_36 + var_1_42))) ? (var_1_41 == ((signed long int) (max (var_1_22 , (var_1_15 + var_1_30))))) : 1)) && ((((max (var_1_22 , var_1_38)) * last_1_var_1_43) <= var_1_40) ? (var_1_43 == ((unsigned long int) var_1_38)) : (((min (var_1_29 , (var_1_26 - var_1_7))) < ((var_1_4 + var_1_12) / (abs (var_1_28)))) ? (var_1_43 == ((unsigned long int) (abs (25u)))) : (var_1_43 == ((unsigned long int) ((abs (var_1_73)) + ((min (var_1_44 , var_1_45)) - var_1_39))))))) && ((var_1_5 <= var_1_24) ? (((- var_1_14) > var_1_39) ? (var_1_46 == ((unsigned char) (max (16 , var_1_36)))) : (var_1_46 == ((unsigned char) (max (var_1_35 , (var_1_37 - 5)))))) : (var_1_46 == ((unsigned char) ((var_1_36 + var_1_40) + var_1_35))))) && (var_1_85 ? (var_1_47 == ((signed short int) (var_1_37 - (min (var_1_48 , var_1_36))))) : 1)) && (((max (var_1_38 , last_1_var_1_75)) == ((abs (-128)) + var_1_39)) ? (((var_1_45 * last_1_var_1_73) > (var_1_37 + last_1_var_1_100)) ? (((var_1_42 / var_1_17) < last_1_var_1_100) ? (var_1_49 == ((unsigned char) (! var_1_50))) : (var_1_49 == ((unsigned char) (var_1_50 && (! var_1_51))))) : 1) : (var_1_49 == ((unsigned char) (var_1_50 && var_1_51))))) && ((var_1_105 < var_1_67) ? (((var_1_69 && var_1_93) && var_1_50) ? (var_1_52 == ((signed short int) (abs (var_1_20)))) : ((var_1_27 <= (- var_1_32)) ? ((var_1_32 <= (var_1_29 * var_1_5)) ? (var_1_52 == ((signed short int) (var_1_97 - 256))) : (var_1_52 == ((signed short int) (max (var_1_37 , var_1_39))))) : (var_1_52 == ((signed short int) (var_1_38 + var_1_36))))) : ((var_1_87 > var_1_67) ? (var_1_52 == ((signed short int) ((var_1_54 - (var_1_39 + var_1_97)) - var_1_37))) : 1))) && ((((var_1_54 / -128) | var_1_30) < (var_1_67 + var_1_41)) ? (var_1_55 == ((unsigned short int) ((abs (var_1_56)) - (min (var_1_39 , var_1_57))))) : (((var_1_57 - (var_1_58 - var_1_42)) <= var_1_73) ? (var_1_55 == ((unsigned short int) (min (var_1_54 , ((var_1_58 - var_1_38) + last_1_var_1_55))))) : 1))) && (((var_1_100 >> var_1_36) < var_1_41) ? (var_1_59 == ((float) (abs (var_1_32)))) : (var_1_59 == ((float) (min (var_1_26 , var_1_25)))))) && ((var_1_51 || var_1_69) ? (var_1_60 == ((unsigned short int) ((var_1_58 + var_1_61) - var_1_40))) : (var_1_60 == ((unsigned short int) (max (((var_1_61 + var_1_62) - var_1_31) , var_1_48)))))) && (var_1_85 ? (var_1_49 ? ((var_1_106 <= var_1_87) ? (var_1_63 == ((double) (var_1_29 - (var_1_28 - var_1_6)))) : 1) : ((((min (var_1_25 , var_1_104)) + last_1_var_1_63) < var_1_7) ? (var_1_63 == ((double) (var_1_26 + (256.25 - var_1_6)))) : (var_1_63 == ((double) (min (var_1_26 , var_1_4)))))) : ((var_1_50 && (! var_1_93)) ? (var_1_63 == ((double) (min (var_1_5 , ((abs (var_1_6)) - (var_1_25 - var_1_26)))))) : (var_1_63 == ((double) (var_1_25 - var_1_6)))))) && (var_1_93 ? (var_1_66 == ((signed char) (var_1_36 - (min (var_1_40 , var_1_42))))) : (var_1_66 == ((signed char) var_1_40)))) && (((- last_1_var_1_105) < last_1_var_1_43) ? (var_1_67 == ((unsigned long int) (var_1_45 + (abs (var_1_36))))) : (((var_1_37 * var_1_54) == last_1_var_1_41) ? (var_1_67 == ((unsigned long int) (abs (last_1_var_1_33 + var_1_54)))) : (var_1_67 == ((unsigned long int) (max (var_1_45 , var_1_35))))))) && ((last_1_var_1_85 || last_1_var_1_86) ? ((! last_1_var_1_86) ? ((var_1_50 && last_1_var_1_85) ? (var_1_69 == ((unsigned char) (var_1_51 || var_1_70))) : (var_1_69 == ((unsigned char) (((max (last_1_var_1_67 , last_1_var_1_100)) < var_1_58) && var_1_70)))) : ((var_1_70 && var_1_51) ? (var_1_69 == ((unsigned char) ((var_1_50 && (var_1_51 || var_1_71)) && var_1_72))) : (var_1_69 == ((unsigned char) (var_1_71 || (last_1_var_1_86 || var_1_50)))))) : (var_1_69 == ((unsigned char) (! (var_1_70 || var_1_72)))))) && ((var_1_85 || var_1_69) ? ((var_1_48 > (~ var_1_35)) ? (var_1_73 == ((signed long int) ((var_1_20 + var_1_58) + (max (var_1_23 , (min (var_1_54 , var_1_39))))))) : (var_1_73 == ((signed long int) var_1_74))) : 1)) && ((var_1_41 > var_1_38) ? ((var_1_36 >= var_1_43) ? (var_1_75 == ((signed short int) (abs (min ((min (32 , var_1_42)) , var_1_38))))) : (var_1_75 == ((signed short int) ((-16 + var_1_21) + -16)))) : (((max (var_1_29 , var_1_12)) <= var_1_88) ? (var_1_75 == ((signed short int) ((min ((min (var_1_38 , var_1_76)) , var_1_21)) + last_1_var_1_75))) : 1))) && (var_1_71 ? ((((abs (var_1_56)) - var_1_101) < var_1_62) ? (var_1_77 == ((double) (var_1_26 + var_1_5))) : (var_1_77 == ((double) (min (1.7 , (var_1_6 + (256.5 + var_1_29))))))) : 1)) && ((var_1_37 <= (var_1_79 - var_1_40)) ? ((var_1_106 <= var_1_62) ? (var_1_78 == ((signed char) (var_1_23 + var_1_20))) : (((var_1_27 * var_1_26) < (var_1_5 + var_1_1)) ? (var_1_78 == ((signed char) (var_1_80 + var_1_42))) : 1)) : (var_1_78 == ((signed char) var_1_36)))) && ((var_1_54 > var_1_91) ? (var_1_81 == ((unsigned char) var_1_39)) : ((var_1_91 >= (min ((var_1_36 - var_1_82) , 64))) ? (var_1_81 == ((unsigned char) (var_1_37 - var_1_38))) : 1))) && (var_1_70 ? (var_1_83 == ((float) (max (((max (var_1_29 , var_1_84)) + var_1_6) , var_1_26)))) : 1)) && (var_1_72 ? (var_1_85 == ((unsigned char) (var_1_70 || (var_1_69 && var_1_51)))) : (var_1_85 == ((unsigned char) (var_1_50 && var_1_71))))) && ((var_1_69 || (var_1_84 < var_1_29)) ? (var_1_86 == ((unsigned char) (var_1_93 && ((var_1_74 >= var_1_40) && var_1_70)))) : (var_1_86 == ((unsigned char) (((var_1_87 > var_1_44) && var_1_51) || var_1_70))))) && ((var_1_82 <= var_1_76) ? (var_1_87 == ((unsigned short int) var_1_35)) : 1)) && ((var_1_87 > var_1_38) ? (var_1_70 ? (((var_1_104 * (var_1_1 / var_1_25)) == var_1_84) ? (var_1_88 == ((double) (var_1_32 + var_1_84))) : (var_1_88 == ((double) (min ((max (var_1_6 , var_1_5)) , (var_1_29 - var_1_25)))))) : (var_1_88 == ((double) (var_1_7 + var_1_32)))) : ((var_1_83 == var_1_5) ? ((var_1_51 && var_1_49) ? (var_1_88 == ((double) (abs (var_1_84)))) : (var_1_88 == ((double) (var_1_89 - var_1_29)))) : (var_1_88 == ((double) (min (var_1_28 , var_1_5))))))) && ((var_1_100 < ((max (var_1_14 , 100000000)) - var_1_82)) ? (var_1_90 == ((float) (var_1_29 - 255.625f))) : (var_1_90 == ((float) (abs (var_1_26 - var_1_7)))))) && ((var_1_109 != (max (var_1_55 , (var_1_38 - var_1_92)))) ? ((! var_1_69) ? (var_1_91 == ((unsigned short int) (var_1_56 - var_1_36))) : (var_1_91 == ((unsigned short int) var_1_58))) : ((var_1_105 < var_1_79) ? (var_1_51 ? (var_1_91 == ((unsigned short int) (min (var_1_39 , var_1_48)))) : 1) : (var_1_91 == ((unsigned short int) (var_1_56 - (var_1_42 + var_1_38))))))) && (((var_1_110 / 0.75) >= var_1_28) ? ((var_1_72 || var_1_51) ? (var_1_93 == ((unsigned char) var_1_72)) : 1) : (var_1_93 == ((unsigned char) ((! var_1_72) || var_1_51))))) && (((var_1_67 + var_1_17) > var_1_43) ? ((((var_1_29 + var_1_26) - var_1_25) < var_1_32) ? (var_1_94 == ((signed char) (max (var_1_40 , var_1_80)))) : 1) : ((var_1_17 <= var_1_43) ? (var_1_69 ? (var_1_94 == ((signed char) (var_1_36 - var_1_39))) : ((var_1_106 == (var_1_58 * var_1_106)) ? (var_1_94 == ((signed char) ((var_1_35 + (min (var_1_36 , var_1_42))) - 1))) : 1)) : 1))) && (var_1_69 ? (var_1_97 == ((signed short int) ((var_1_54 - var_1_55) - 32))) : (var_1_97 == ((signed short int) (var_1_92 + last_1_var_1_97))))) && (((var_1_77 + var_1_25) <= var_1_89) ? (var_1_98 == ((unsigned char) var_1_36)) : (var_1_98 == ((unsigned char) var_1_92)))) && (var_1_86 ? (var_1_99 == ((unsigned char) var_1_40)) : 1)) && (var_1_100 == ((signed long int) var_1_43))) && (var_1_51 ? (var_1_101 == ((signed short int) var_1_37)) : 1)) && (var_1_102 == ((signed char) var_1_22))) && (var_1_85 ? (var_1_103 == ((float) var_1_4)) : (var_1_103 == ((float) var_1_84)))) && (var_1_86 ? (var_1_104 == ((double) var_1_7)) : 1)) && (var_1_105 == ((signed long int) var_1_43))) && (var_1_93 ? (var_1_106 == ((unsigned long int) var_1_47)) : 1)) && (var_1_107 == ((unsigned char) var_1_39))) && (var_1_70 ? (var_1_108 == ((unsigned short int) var_1_37)) : (var_1_108 == ((unsigned short int) 32)))) && (var_1_51 ? (var_1_109 == ((signed char) var_1_23)) : 1)) && (var_1_69 ? (var_1_110 == ((double) var_1_26)) : (var_1_110 == ((double) var_1_32)))) && (var_1_86 ? (var_1_111 == ((double) var_1_28)) : (var_1_111 == ((double) var_1_26)))) && (((- (var_1_56 - var_1_39)) >= var_1_106) ? (((var_1_113 - var_1_41) < (var_1_13 / (var_1_114 - var_1_79))) ? (var_1_49 ? (var_1_112 == ((float) var_1_4)) : (var_1_112 == ((float) var_1_5))) : 1) : 1)
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
