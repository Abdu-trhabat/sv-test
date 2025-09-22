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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 4;
double var_1_2 = 3.5;
signed short int var_1_5 = 64;
signed short int var_1_6 = 50;
signed short int var_1_9 = 8;
signed short int var_1_10 = 50;
unsigned char var_1_11 = 1;
signed short int var_1_12 = -25;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 64;
unsigned long int var_1_18 = 4;
signed char var_1_19 = 4;
signed char var_1_20 = 10;
signed char var_1_21 = 5;
signed char var_1_22 = 5;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 1;
unsigned short int var_1_25 = 64;
unsigned short int var_1_26 = 40221;
double var_1_27 = 1.248;
double var_1_28 = 0.0;
double var_1_29 = 1.4;
double var_1_30 = 256.5;
signed short int var_1_31 = 128;
unsigned char var_1_32 = 4;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 5;
float var_1_37 = 32.4;
float var_1_38 = 9999999999999.25;
float var_1_39 = 24.625;
float var_1_40 = 63.75;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned short int var_1_44 = 1;
unsigned short int var_1_45 = 24252;
signed short int var_1_46 = 8;
signed char var_1_47 = -16;
unsigned long int var_1_48 = 8;
unsigned long int var_1_49 = 2793341277;
unsigned long int var_1_50 = 2543217371;
unsigned long int var_1_51 = 2657607172;
signed short int var_1_52 = 64;
float var_1_53 = 100.125;
float var_1_54 = 256.25;
float var_1_55 = 3.62;
signed short int var_1_56 = 2;
signed long int var_1_57 = 50;
double var_1_59 = 24.13;
unsigned long int var_1_60 = 4;
signed char var_1_61 = 0;
unsigned long int var_1_63 = 1224497880;
unsigned long int var_1_64 = 1201719275;
signed char var_1_65 = -32;
signed char var_1_66 = 25;
signed char var_1_67 = 5;
signed long int var_1_68 = -100;
signed long int var_1_69 = 1661703508;
signed long int var_1_70 = 100;
signed long int var_1_72 = 1351133148;
signed short int var_1_73 = -500;
signed char var_1_75 = 64;
float var_1_76 = 4.8;
float var_1_77 = 9.5;
float var_1_78 = 127.8;
double var_1_79 = 1000000000.375;
signed char var_1_80 = -8;
signed char var_1_81 = 64;
float var_1_82 = 63.5;
unsigned char var_1_83 = 8;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 64;
unsigned char var_1_87 = 0;
unsigned long int var_1_89 = 100;
double var_1_90 = 31.8;
double var_1_91 = 50.2;
signed long int var_1_92 = -10;
unsigned short int var_1_93 = 1000;
signed long int var_1_94 = 16;
unsigned char var_1_95 = 2;
unsigned char var_1_96 = 128;
signed long int var_1_97 = -5;
unsigned char var_1_98 = 32;
signed short int var_1_99 = -1;
float var_1_100 = 5.75;
unsigned char var_1_102 = 1;
unsigned char var_1_106 = 10;
unsigned char var_1_107 = 5;
float var_1_108 = 50.875;
signed short int var_1_109 = 2;
signed char var_1_110 = 64;
unsigned long int var_1_112 = 32;
unsigned long int var_1_113 = 25;
signed long int var_1_114 = 64;
signed short int var_1_115 = -128;
signed char var_1_116 = -64;
unsigned short int var_1_117 = 1;
unsigned char var_1_118 = 32;
unsigned char var_1_119 = 1;
unsigned char var_1_120 = 0;
unsigned char var_1_121 = 1;
float var_1_122 = 16.714;
unsigned char var_1_123 = 32;
unsigned char var_1_124 = 4;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_16 = 64;
unsigned short int last_1_var_1_44 = 1;
signed long int last_1_var_1_57 = 50;
unsigned long int last_1_var_1_60 = 4;
signed short int last_1_var_1_73 = -500;
unsigned long int last_1_var_1_89 = 100;
unsigned short int last_1_var_1_93 = 1000;
signed short int last_1_var_1_99 = -1;
signed short int last_1_var_1_109 = 2;
unsigned char last_1_var_1_121 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req31Batch165Amount500
	unsigned long int stepLocal_30 = (var_1_10 + last_1_var_1_57) + (last_1_var_1_60 % 32u);
	unsigned long int stepLocal_29 = var_1_63 | var_1_67;
	unsigned long int stepLocal_28 = last_1_var_1_89;
	if ((last_1_var_1_99 | var_1_56) <= stepLocal_29) {
		var_1_87 = var_1_14;
	} else {
		if (var_1_51 >= stepLocal_30) {
			if (last_1_var_1_60 == stepLocal_28) {
				var_1_87 = var_1_43;
			}
		}
	}


	// From: Req26Batch165Amount500
	unsigned long int stepLocal_22 = var_1_33 / (min (var_1_50 , var_1_72));
	if (last_1_var_1_16 > stepLocal_22) {
		var_1_79 = ((var_1_39 + var_1_38) + (min ((var_1_29 - var_1_54) , var_1_30)));
	}


	// From: Req30Batch165Amount500
	signed long int stepLocal_27 = (last_1_var_1_93 + var_1_5) ^ (abs (var_1_20));
	signed long int stepLocal_26 = last_1_var_1_44;
	signed char stepLocal_25 = var_1_66;
	if (var_1_81 >= stepLocal_27) {
		if (((var_1_81 + var_1_85) - var_1_33) >= stepLocal_25) {
			var_1_84 = (! (var_1_42 || var_1_43));
		} else {
			if (stepLocal_26 >= 64) {
				var_1_84 = var_1_15;
			} else {
				var_1_84 = (last_1_var_1_121 || var_1_13);
			}
		}
	} else {
		var_1_84 = (! var_1_14);
	}


	// From: Req55Batch165Amount500
	if (var_1_84) {
		var_1_121 = var_1_43;
	}


	// From: Req54Batch165Amount500
	if (last_1_var_1_121) {
		var_1_120 = var_1_43;
	} else {
		var_1_120 = var_1_13;
	}


	// From: Req48Batch165Amount500
	if (var_1_120) {
		var_1_114 = var_1_69;
	} else {
		var_1_114 = var_1_22;
	}


	// From: Req6Batch165Amount500
	signed long int stepLocal_5 = var_1_12 * var_1_10;
	if (var_1_6 < stepLocal_5) {
		var_1_27 = ((var_1_28 - 64.6) - (var_1_29 + (var_1_30 + 16.875)));
	} else {
		var_1_27 = var_1_29;
	}


	// From: Req9Batch165Amount500
	unsigned char stepLocal_6 = var_1_33;
	if (var_1_22 == stepLocal_6) {
		var_1_37 = ((var_1_30 + (min (var_1_38 , var_1_39))) + (var_1_29 - var_1_40));
	}


	// From: Req12Batch165Amount500
	if (var_1_2 <= var_1_30) {
		var_1_46 = (max ((min ((min (var_1_10 , var_1_20)) , var_1_5)) , var_1_21));
	} else {
		var_1_46 = var_1_25;
	}


	// From: Req14Batch165Amount500
	var_1_48 = ((max ((max (var_1_49 , var_1_50)) , var_1_51)) - (var_1_34 + (min (var_1_24 , var_1_25))));


	// From: Req18Batch165Amount500
	unsigned short int stepLocal_14 = var_1_26;
	if ((~ var_1_10) >= stepLocal_14) {
		var_1_59 = (var_1_38 + var_1_29);
	}


	// From: Req24Batch165Amount500
	if (var_1_38 < var_1_30) {
		if (var_1_42) {
			var_1_75 = var_1_33;
		} else {
			var_1_75 = (var_1_61 + var_1_56);
		}
	} else {
		var_1_75 = (var_1_34 + var_1_61);
	}


	// From: Req25Batch165Amount500
	var_1_76 = (min (((var_1_40 - var_1_29) + var_1_77) , var_1_78));


	// From: Req33Batch165Amount500
	signed char stepLocal_32 = var_1_67;
	if (stepLocal_32 < var_1_6) {
		if (var_1_38 >= var_1_54) {
			var_1_90 = (((var_1_91 + 7.85) + (max (var_1_38 , var_1_30))) + (min ((var_1_29 - 8.25) , var_1_54)));
		} else {
			var_1_90 = (min (63.5 , var_1_77));
		}
	} else {
		var_1_90 = (min (15.5 , ((var_1_28 - var_1_30) - var_1_29)));
	}


	// From: Req38Batch165Amount500
	if (9999999.2 > var_1_76) {
		var_1_98 = (min ((abs (var_1_56)) , (max (var_1_61 , var_1_34))));
	} else {
		var_1_98 = (abs (var_1_56));
	}


	// From: Req42Batch165Amount500
	var_1_106 = var_1_85;


	// From: Req43Batch165Amount500
	var_1_107 = var_1_81;


	// From: Req44Batch165Amount500
	var_1_108 = var_1_40;


	// From: Req45Batch165Amount500
	var_1_109 = last_1_var_1_109;


	// From: Req46Batch165Amount500
	if (var_1_87) {
		var_1_110 = var_1_66;
	}


	// From: Req47Batch165Amount500
	var_1_112 = var_1_113;


	// From: Req49Batch165Amount500
	var_1_115 = 2;


	// From: Req50Batch165Amount500
	var_1_116 = var_1_81;


	// From: Req52Batch165Amount500
	var_1_118 = var_1_33;


	// From: Req53Batch165Amount500
	if (var_1_13) {
		var_1_119 = var_1_14;
	} else {
		var_1_119 = 1;
	}


	// From: Req56Batch165Amount500
	if (var_1_84) {
		var_1_122 = var_1_28;
	} else {
		var_1_122 = var_1_77;
	}


	// From: Req32Batch165Amount500
	signed short int stepLocal_31 = var_1_5;
	if (! var_1_87) {
		if (var_1_46 <= stepLocal_31) {
			var_1_89 = (min (var_1_45 , var_1_85));
		}
	}


	// From: Req22Batch165Amount500
	signed long int stepLocal_18 = -500;
	signed long int stepLocal_17 = 64;
	if (stepLocal_18 <= var_1_89) {
		if (stepLocal_17 < var_1_114) {
			var_1_70 = (max (((var_1_89 + var_1_48) - (var_1_72 - var_1_25)) , var_1_36));
		} else {
			if (var_1_79 > var_1_38) {
				var_1_70 = var_1_5;
			} else {
				var_1_70 = (256 + var_1_33);
			}
		}
	}


	// From: Req2Batch165Amount500
	unsigned char stepLocal_0 = var_1_9 >= var_1_5;
	if ((var_1_10 < (var_1_114 / var_1_12)) || stepLocal_0) {
		var_1_11 = (var_1_13 && ((var_1_84 || var_1_14) && var_1_15));
	}


	// From: Req27Batch165Amount500
	unsigned char stepLocal_24 = var_1_120;
	unsigned char stepLocal_23 = (min (256 , var_1_20)) > var_1_9;
	if ((var_1_13 || var_1_84) && stepLocal_24) {
		var_1_80 = (var_1_34 + (var_1_56 - var_1_36));
	} else {
		if (stepLocal_23 || var_1_119) {
			var_1_80 = (var_1_56 - (var_1_81 - var_1_61));
		} else {
			var_1_80 = (var_1_20 + (var_1_66 + var_1_67));
		}
	}


	// From: Req35Batch165Amount500
	if (((var_1_48 / var_1_45) ^ (var_1_94 - var_1_25)) <= var_1_114) {
		if (var_1_61 < ((min (var_1_6 , 25)) / var_1_56)) {
			var_1_93 = (abs (var_1_26 - var_1_35));
		} else {
			var_1_93 = ((abs (max (var_1_81 , var_1_33))) + (min (128 , var_1_56)));
		}
	}


	// From: Req5Batch165Amount500
	signed long int stepLocal_4 = 4;
	unsigned long int stepLocal_3 = var_1_112;
	if (stepLocal_4 <= (min (var_1_5 , var_1_12))) {
		var_1_23 = ((16 + (var_1_24 + var_1_25)) + 1);
	} else {
		if (var_1_24 <= stepLocal_3) {
			var_1_23 = 5;
		} else {
			var_1_23 = (var_1_26 - var_1_10);
		}
	}


	// From: Req15Batch165Amount500
	unsigned long int stepLocal_13 = var_1_36 % var_1_51;
	signed long int stepLocal_12 = var_1_109 | var_1_21;
	if (stepLocal_12 < (var_1_10 - var_1_33)) {
		if (stepLocal_13 < var_1_26) {
			var_1_52 = (var_1_106 + (var_1_24 - var_1_36));
		}
	}


	// From: Req28Batch165Amount500
	if (var_1_29 <= var_1_78) {
		if (! (var_1_110 > var_1_9)) {
			var_1_82 = ((max (var_1_40 , var_1_30)) - (min (var_1_54 , (var_1_28 - var_1_29))));
		} else {
			var_1_82 = (var_1_30 + var_1_54);
		}
	}


	// From: Req29Batch165Amount500
	if (var_1_43) {
		var_1_83 = var_1_36;
	} else {
		if (var_1_78 < var_1_90) {
			var_1_83 = (var_1_34 + var_1_61);
		}
	}


	// From: Req36Batch165Amount500
	if (var_1_121) {
		var_1_95 = ((var_1_34 + 32) + (var_1_35 - (abs (var_1_36))));
	} else {
		if (var_1_11) {
			var_1_95 = ((min (var_1_96 , (200 - var_1_61))) - (max (var_1_56 , var_1_35)));
		}
	}


	// From: Req39Batch165Amount500
	unsigned long int stepLocal_35 = var_1_18;
	if (var_1_112 >= stepLocal_35) {
		var_1_99 = var_1_5;
	} else {
		var_1_99 = (var_1_25 + var_1_21);
	}


	// From: Req40Batch165Amount500
	unsigned long int stepLocal_38 = var_1_112;
	unsigned char stepLocal_37 = var_1_13;
	signed long int stepLocal_36 = - var_1_116;
	if (stepLocal_36 >= var_1_33) {
		if ((-10 >= var_1_116) || stepLocal_37) {
			var_1_100 = (max (var_1_91 , var_1_30));
		} else {
			var_1_100 = (max (var_1_40 , var_1_29));
		}
	} else {
		if (var_1_33 <= stepLocal_38) {
			var_1_100 = ((min (15.4f , var_1_30)) + (min (var_1_39 , (abs (var_1_91)))));
		} else {
			var_1_100 = (abs (32.125f));
		}
	}


	// From: Req37Batch165Amount500
	signed char stepLocal_34 = var_1_22;
	if (stepLocal_34 <= (var_1_9 + var_1_106)) {
		if (var_1_43) {
			var_1_97 = (var_1_70 - var_1_83);
		}
	} else {
		var_1_97 = (abs (var_1_109));
	}


	// From: Req1Batch165Amount500
	if ((var_1_2 - 63.5) >= (min (var_1_27 , var_1_79))) {
		var_1_1 = (var_1_5 + (var_1_6 + 100));
	} else {
		if (var_1_120 && var_1_11) {
			var_1_1 = (var_1_9 - var_1_10);
		}
	}


	// From: Req19Batch165Amount500
	if ((var_1_25 << (var_1_61 + 1)) == var_1_33) {
		var_1_60 = (abs (var_1_23));
	} else {
		if (var_1_121) {
			if (var_1_20 < var_1_80) {
				var_1_60 = (var_1_61 + var_1_35);
			} else {
				var_1_60 = ((var_1_63 + var_1_64) - var_1_56);
			}
		} else {
			var_1_60 = ((var_1_64 - var_1_36) + var_1_63);
		}
	}


	// From: Req51Batch165Amount500
	var_1_117 = var_1_1;


	// From: Req17Batch165Amount500
	if ((var_1_100 * 1.5f) != var_1_90) {
		var_1_57 = ((2 + (min (var_1_5 , var_1_23))) + var_1_56);
	} else {
		var_1_57 = ((var_1_10 - var_1_93) + var_1_24);
	}


	// From: Req10Batch165Amount500
	signed short int stepLocal_7 = var_1_6;
	if (var_1_117 < stepLocal_7) {
		var_1_41 = (var_1_42 || ((! var_1_15) || var_1_43));
	} else {
		var_1_41 = (var_1_43 || (var_1_11 || (var_1_13 && var_1_15)));
	}


	// From: Req20Batch165Amount500
	unsigned char stepLocal_15 = var_1_40 >= var_1_30;
	if (stepLocal_15 || (var_1_57 == var_1_25)) {
		var_1_65 = (var_1_61 + (min ((var_1_56 - var_1_36) , (var_1_66 + var_1_67))));
	}


	// From: Req3Batch165Amount500
	signed short int stepLocal_1 = var_1_9;
	if (stepLocal_1 >= (min (var_1_10 , var_1_97))) {
		var_1_16 = (min (var_1_10 , var_1_18));
	}


	// From: Req11Batch165Amount500
	unsigned char stepLocal_10 = var_1_87;
	unsigned char stepLocal_9 = var_1_120;
	signed short int stepLocal_8 = var_1_115;
	if (var_1_117 > stepLocal_8) {
		if (stepLocal_9 && var_1_14) {
			var_1_44 = var_1_10;
		} else {
			var_1_44 = var_1_35;
		}
	} else {
		if (stepLocal_10 && var_1_120) {
			var_1_44 = ((var_1_45 - var_1_83) + 8);
		} else {
			var_1_44 = var_1_45;
		}
	}


	// From: Req7Batch165Amount500
	if (! var_1_41) {
		var_1_31 = (var_1_5 + (min ((max (var_1_20 , var_1_22)) , var_1_6)));
	}


	// From: Req8Batch165Amount500
	if ((var_1_13 || var_1_41) || (var_1_21 < var_1_6)) {
		var_1_32 = (128 - (max ((var_1_33 + var_1_34) , (var_1_35 - var_1_36))));
	} else {
		if ((var_1_41 && (var_1_25 >= var_1_18)) || (var_1_13 || (var_1_60 > var_1_35))) {
			var_1_32 = (min (var_1_34 , var_1_33));
		}
	}


	// From: Req16Batch165Amount500
	if ((~ var_1_10) < var_1_9) {
		if (var_1_6 < (max (var_1_44 , var_1_25))) {
			var_1_53 = (min (var_1_28 , (var_1_30 - (max (10.5f , var_1_40)))));
		} else {
			var_1_53 = ((min ((256.8f + var_1_40) , var_1_30)) - (min ((var_1_29 + var_1_54) , (max (var_1_28 , var_1_55)))));
		}
	} else {
		if (! var_1_43) {
			if (var_1_45 <= (var_1_26 - (abs (var_1_33)))) {
				var_1_53 = ((max ((min (var_1_39 , var_1_54)) , var_1_29)) + var_1_40);
			} else {
				if (var_1_121) {
					var_1_53 = (128.4f + var_1_54);
				} else {
					var_1_53 = ((var_1_30 + var_1_29) - var_1_28);
				}
			}
		} else {
			if (var_1_24 < (var_1_34 >> var_1_56)) {
				var_1_53 = ((255.5f + var_1_40) - var_1_28);
			}
		}
	}


	// From: Req57Batch165Amount500
	unsigned char stepLocal_40 = var_1_32;
	if ((var_1_55 - (max (var_1_2 , var_1_54))) > (max (var_1_59 , 8.5))) {
		if (((var_1_36 >> var_1_56) + var_1_64) < stepLocal_40) {
			var_1_123 = var_1_85;
		} else {
			var_1_123 = var_1_124;
		}
	} else {
		var_1_123 = var_1_33;
	}


	// From: Req21Batch165Amount500
	unsigned char stepLocal_16 = var_1_22 < (var_1_24 / var_1_12);
	if (stepLocal_16 || var_1_42) {
		if (var_1_38 >= var_1_90) {
			if (var_1_28 >= var_1_55) {
				var_1_68 = ((var_1_69 - var_1_10) - var_1_25);
			} else {
				var_1_68 = var_1_45;
			}
		} else {
			var_1_68 = (var_1_123 + var_1_33);
		}
	}


	// From: Req13Batch165Amount500
	unsigned char stepLocal_11 = var_1_98;
	if (stepLocal_11 < (-8 * var_1_68)) {
		var_1_47 = var_1_34;
	} else {
		var_1_47 = -32;
	}


	// From: Req23Batch165Amount500
	signed long int stepLocal_21 = (var_1_36 - var_1_56) + var_1_10;
	unsigned long int stepLocal_20 = var_1_112;
	unsigned long int stepLocal_19 = var_1_112 / var_1_12;
	if (var_1_98 >= stepLocal_19) {
		if (stepLocal_20 >= var_1_64) {
			if (var_1_13) {
				if (stepLocal_21 < var_1_61) {
					var_1_73 = (128 - (5 + (10000 - var_1_61)));
				} else {
					var_1_73 = (max (var_1_56 , var_1_5));
				}
			} else {
				var_1_73 = ((var_1_66 + var_1_98) + last_1_var_1_73);
			}
		} else {
			var_1_73 = (var_1_47 + (var_1_56 + var_1_34));
		}
	}


	// From: Req34Batch165Amount500
	signed long int stepLocal_33 = var_1_47 / var_1_12;
	if (var_1_81 != stepLocal_33) {
		var_1_92 = (min (var_1_70 , (max (-1 , var_1_69))));
	}


	// From: Req41Batch165Amount500
	unsigned short int stepLocal_39 = var_1_26;
	if (var_1_2 > ((min (var_1_27 , var_1_100)) * (var_1_29 + var_1_53))) {
		if ((min (9.6 , var_1_79)) > var_1_59) {
			if (stepLocal_39 <= (var_1_92 / var_1_12)) {
				var_1_102 = var_1_34;
			} else {
				var_1_102 = var_1_56;
			}
		} else {
			var_1_102 = var_1_35;
		}
	} else {
		var_1_102 = var_1_56;
	}


	// From: Req4Batch165Amount500
	unsigned char stepLocal_2 = (-10000000 < var_1_10) && (var_1_70 <= var_1_92);
	if (stepLocal_2 && ((var_1_12 > var_1_6) && var_1_11)) {
		var_1_19 = (var_1_20 + (min (var_1_21 , var_1_22)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -8191);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -63);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 8192);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 8191);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 64);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -230584.3009213691400e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -230584.3009213691400e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 16383);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_50 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_50 >= 2147483647);
	assume_abort_if_not(var_1_50 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 7);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 2);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 1073741823);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741824);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -31);
	assume_abort_if_not(var_1_66 <= 32);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -31);
	assume_abort_if_not(var_1_67 <= 31);
	var_1_69 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_69 >= 1073741822);
	assume_abort_if_not(var_1_69 <= 2147483646);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= 1073741823);
	assume_abort_if_not(var_1_72 <= 2147483646);
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= -461168.6018427383000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 4611686.018427383000e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -922337.2036854766000e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854766000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 63);
	assume_abort_if_not(var_1_81 <= 126);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 64);
	assume_abort_if_not(var_1_85 <= 127);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -115292.1504606845700e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 1152921.504606845700e+12F && var_1_91 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= -1);
	assume_abort_if_not(var_1_94 <= 2147483647);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 127);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_113 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 4294967294);
	var_1_124 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_121 = var_1_121;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_2 - 63.5) >= (min (var_1_27 , var_1_79))) ? (var_1_1 == ((signed short int) (var_1_5 + (var_1_6 + 100)))) : ((var_1_120 && var_1_11) ? (var_1_1 == ((signed short int) (var_1_9 - var_1_10))) : 1)) && (((var_1_10 < (var_1_114 / var_1_12)) || (var_1_9 >= var_1_5)) ? (var_1_11 == ((unsigned char) (var_1_13 && ((var_1_84 || var_1_14) && var_1_15)))) : 1)) && ((var_1_9 >= (min (var_1_10 , var_1_97))) ? (var_1_16 == ((unsigned long int) (min (var_1_10 , var_1_18)))) : 1)) && ((((-10000000 < var_1_10) && (var_1_70 <= var_1_92)) && ((var_1_12 > var_1_6) && var_1_11)) ? (var_1_19 == ((signed char) (var_1_20 + (min (var_1_21 , var_1_22))))) : 1)) && ((4 <= (min (var_1_5 , var_1_12))) ? (var_1_23 == ((unsigned short int) ((16 + (var_1_24 + var_1_25)) + 1))) : ((var_1_24 <= var_1_112) ? (var_1_23 == ((unsigned short int) 5)) : (var_1_23 == ((unsigned short int) (var_1_26 - var_1_10)))))) && ((var_1_6 < (var_1_12 * var_1_10)) ? (var_1_27 == ((double) ((var_1_28 - 64.6) - (var_1_29 + (var_1_30 + 16.875))))) : (var_1_27 == ((double) var_1_29)))) && ((! var_1_41) ? (var_1_31 == ((signed short int) (var_1_5 + (min ((max (var_1_20 , var_1_22)) , var_1_6))))) : 1)) && (((var_1_13 || var_1_41) || (var_1_21 < var_1_6)) ? (var_1_32 == ((unsigned char) (128 - (max ((var_1_33 + var_1_34) , (var_1_35 - var_1_36)))))) : (((var_1_41 && (var_1_25 >= var_1_18)) || (var_1_13 || (var_1_60 > var_1_35))) ? (var_1_32 == ((unsigned char) (min (var_1_34 , var_1_33)))) : 1))) && ((var_1_22 == var_1_33) ? (var_1_37 == ((float) ((var_1_30 + (min (var_1_38 , var_1_39))) + (var_1_29 - var_1_40)))) : 1)) && ((var_1_117 < var_1_6) ? (var_1_41 == ((unsigned char) (var_1_42 || ((! var_1_15) || var_1_43)))) : (var_1_41 == ((unsigned char) (var_1_43 || (var_1_11 || (var_1_13 && var_1_15))))))) && ((var_1_117 > var_1_115) ? ((var_1_120 && var_1_14) ? (var_1_44 == ((unsigned short int) var_1_10)) : (var_1_44 == ((unsigned short int) var_1_35))) : ((var_1_87 && var_1_120) ? (var_1_44 == ((unsigned short int) ((var_1_45 - var_1_83) + 8))) : (var_1_44 == ((unsigned short int) var_1_45))))) && ((var_1_2 <= var_1_30) ? (var_1_46 == ((signed short int) (max ((min ((min (var_1_10 , var_1_20)) , var_1_5)) , var_1_21)))) : (var_1_46 == ((signed short int) var_1_25)))) && ((var_1_98 < (-8 * var_1_68)) ? (var_1_47 == ((signed char) var_1_34)) : (var_1_47 == ((signed char) -32)))) && (var_1_48 == ((unsigned long int) ((max ((max (var_1_49 , var_1_50)) , var_1_51)) - (var_1_34 + (min (var_1_24 , var_1_25))))))) && (((var_1_109 | var_1_21) < (var_1_10 - var_1_33)) ? (((var_1_36 % var_1_51) < var_1_26) ? (var_1_52 == ((signed short int) (var_1_106 + (var_1_24 - var_1_36)))) : 1) : 1)) && (((~ var_1_10) < var_1_9) ? ((var_1_6 < (max (var_1_44 , var_1_25))) ? (var_1_53 == ((float) (min (var_1_28 , (var_1_30 - (max (10.5f , var_1_40))))))) : (var_1_53 == ((float) ((min ((256.8f + var_1_40) , var_1_30)) - (min ((var_1_29 + var_1_54) , (max (var_1_28 , var_1_55)))))))) : ((! var_1_43) ? ((var_1_45 <= (var_1_26 - (abs (var_1_33)))) ? (var_1_53 == ((float) ((max ((min (var_1_39 , var_1_54)) , var_1_29)) + var_1_40))) : (var_1_121 ? (var_1_53 == ((float) (128.4f + var_1_54))) : (var_1_53 == ((float) ((var_1_30 + var_1_29) - var_1_28))))) : ((var_1_24 < (var_1_34 >> var_1_56)) ? (var_1_53 == ((float) ((255.5f + var_1_40) - var_1_28))) : 1)))) && (((var_1_100 * 1.5f) != var_1_90) ? (var_1_57 == ((signed long int) ((2 + (min (var_1_5 , var_1_23))) + var_1_56))) : (var_1_57 == ((signed long int) ((var_1_10 - var_1_93) + var_1_24))))) && (((~ var_1_10) >= var_1_26) ? (var_1_59 == ((double) (var_1_38 + var_1_29))) : 1)) && (((var_1_25 << (var_1_61 + 1)) == var_1_33) ? (var_1_60 == ((unsigned long int) (abs (var_1_23)))) : (var_1_121 ? ((var_1_20 < var_1_80) ? (var_1_60 == ((unsigned long int) (var_1_61 + var_1_35))) : (var_1_60 == ((unsigned long int) ((var_1_63 + var_1_64) - var_1_56)))) : (var_1_60 == ((unsigned long int) ((var_1_64 - var_1_36) + var_1_63)))))) && (((var_1_40 >= var_1_30) || (var_1_57 == var_1_25)) ? (var_1_65 == ((signed char) (var_1_61 + (min ((var_1_56 - var_1_36) , (var_1_66 + var_1_67)))))) : 1)) && (((var_1_22 < (var_1_24 / var_1_12)) || var_1_42) ? ((var_1_38 >= var_1_90) ? ((var_1_28 >= var_1_55) ? (var_1_68 == ((signed long int) ((var_1_69 - var_1_10) - var_1_25))) : (var_1_68 == ((signed long int) var_1_45))) : (var_1_68 == ((signed long int) (var_1_123 + var_1_33)))) : 1)) && ((-500 <= var_1_89) ? ((64 < var_1_114) ? (var_1_70 == ((signed long int) (max (((var_1_89 + var_1_48) - (var_1_72 - var_1_25)) , var_1_36)))) : ((var_1_79 > var_1_38) ? (var_1_70 == ((signed long int) var_1_5)) : (var_1_70 == ((signed long int) (256 + var_1_33))))) : 1)) && ((var_1_98 >= (var_1_112 / var_1_12)) ? ((var_1_112 >= var_1_64) ? (var_1_13 ? ((((var_1_36 - var_1_56) + var_1_10) < var_1_61) ? (var_1_73 == ((signed short int) (128 - (5 + (10000 - var_1_61))))) : (var_1_73 == ((signed short int) (max (var_1_56 , var_1_5))))) : (var_1_73 == ((signed short int) ((var_1_66 + var_1_98) + last_1_var_1_73)))) : (var_1_73 == ((signed short int) (var_1_47 + (var_1_56 + var_1_34))))) : 1)) && ((var_1_38 < var_1_30) ? (var_1_42 ? (var_1_75 == ((signed char) var_1_33)) : (var_1_75 == ((signed char) (var_1_61 + var_1_56)))) : (var_1_75 == ((signed char) (var_1_34 + var_1_61))))) && (var_1_76 == ((float) (min (((var_1_40 - var_1_29) + var_1_77) , var_1_78))))) && ((last_1_var_1_16 > (var_1_33 / (min (var_1_50 , var_1_72)))) ? (var_1_79 == ((double) ((var_1_39 + var_1_38) + (min ((var_1_29 - var_1_54) , var_1_30))))) : 1)) && (((var_1_13 || var_1_84) && var_1_120) ? (var_1_80 == ((signed char) (var_1_34 + (var_1_56 - var_1_36)))) : ((((min (256 , var_1_20)) > var_1_9) || var_1_119) ? (var_1_80 == ((signed char) (var_1_56 - (var_1_81 - var_1_61)))) : (var_1_80 == ((signed char) (var_1_20 + (var_1_66 + var_1_67))))))) && ((var_1_29 <= var_1_78) ? ((! (var_1_110 > var_1_9)) ? (var_1_82 == ((float) ((max (var_1_40 , var_1_30)) - (min (var_1_54 , (var_1_28 - var_1_29)))))) : (var_1_82 == ((float) (var_1_30 + var_1_54)))) : 1)) && (var_1_43 ? (var_1_83 == ((unsigned char) var_1_36)) : ((var_1_78 < var_1_90) ? (var_1_83 == ((unsigned char) (var_1_34 + var_1_61))) : 1))) && ((var_1_81 >= ((last_1_var_1_93 + var_1_5) ^ (abs (var_1_20)))) ? ((((var_1_81 + var_1_85) - var_1_33) >= var_1_66) ? (var_1_84 == ((unsigned char) (! (var_1_42 || var_1_43)))) : ((last_1_var_1_44 >= 64) ? (var_1_84 == ((unsigned char) var_1_15)) : (var_1_84 == ((unsigned char) (last_1_var_1_121 || var_1_13))))) : (var_1_84 == ((unsigned char) (! var_1_14))))) && (((last_1_var_1_99 | var_1_56) <= (var_1_63 | var_1_67)) ? (var_1_87 == ((unsigned char) var_1_14)) : ((var_1_51 >= ((var_1_10 + last_1_var_1_57) + (last_1_var_1_60 % 32u))) ? ((last_1_var_1_60 == last_1_var_1_89) ? (var_1_87 == ((unsigned char) var_1_43)) : 1) : 1))) && ((! var_1_87) ? ((var_1_46 <= var_1_5) ? (var_1_89 == ((unsigned long int) (min (var_1_45 , var_1_85)))) : 1) : 1)) && ((var_1_67 < var_1_6) ? ((var_1_38 >= var_1_54) ? (var_1_90 == ((double) (((var_1_91 + 7.85) + (max (var_1_38 , var_1_30))) + (min ((var_1_29 - 8.25) , var_1_54))))) : (var_1_90 == ((double) (min (63.5 , var_1_77))))) : (var_1_90 == ((double) (min (15.5 , ((var_1_28 - var_1_30) - var_1_29))))))) && ((var_1_81 != (var_1_47 / var_1_12)) ? (var_1_92 == ((signed long int) (min (var_1_70 , (max (-1 , var_1_69)))))) : 1)) && ((((var_1_48 / var_1_45) ^ (var_1_94 - var_1_25)) <= var_1_114) ? ((var_1_61 < ((min (var_1_6 , 25)) / var_1_56)) ? (var_1_93 == ((unsigned short int) (abs (var_1_26 - var_1_35)))) : (var_1_93 == ((unsigned short int) ((abs (max (var_1_81 , var_1_33))) + (min (128 , var_1_56)))))) : 1)) && (var_1_121 ? (var_1_95 == ((unsigned char) ((var_1_34 + 32) + (var_1_35 - (abs (var_1_36)))))) : (var_1_11 ? (var_1_95 == ((unsigned char) ((min (var_1_96 , (200 - var_1_61))) - (max (var_1_56 , var_1_35))))) : 1))) && ((var_1_22 <= (var_1_9 + var_1_106)) ? (var_1_43 ? (var_1_97 == ((signed long int) (var_1_70 - var_1_83))) : 1) : (var_1_97 == ((signed long int) (abs (var_1_109)))))) && ((9999999.2 > var_1_76) ? (var_1_98 == ((unsigned char) (min ((abs (var_1_56)) , (max (var_1_61 , var_1_34)))))) : (var_1_98 == ((unsigned char) (abs (var_1_56)))))) && ((var_1_112 >= var_1_18) ? (var_1_99 == ((signed short int) var_1_5)) : (var_1_99 == ((signed short int) (var_1_25 + var_1_21))))) && (((- var_1_116) >= var_1_33) ? (((-10 >= var_1_116) || var_1_13) ? (var_1_100 == ((float) (max (var_1_91 , var_1_30)))) : (var_1_100 == ((float) (max (var_1_40 , var_1_29))))) : ((var_1_33 <= var_1_112) ? (var_1_100 == ((float) ((min (15.4f , var_1_30)) + (min (var_1_39 , (abs (var_1_91))))))) : (var_1_100 == ((float) (abs (32.125f))))))) && ((var_1_2 > ((min (var_1_27 , var_1_100)) * (var_1_29 + var_1_53))) ? (((min (9.6 , var_1_79)) > var_1_59) ? ((var_1_26 <= (var_1_92 / var_1_12)) ? (var_1_102 == ((unsigned char) var_1_34)) : (var_1_102 == ((unsigned char) var_1_56))) : (var_1_102 == ((unsigned char) var_1_35))) : (var_1_102 == ((unsigned char) var_1_56)))) && (var_1_106 == ((unsigned char) var_1_85))) && (var_1_107 == ((unsigned char) var_1_81))) && (var_1_108 == ((float) var_1_40))) && (var_1_109 == ((signed short int) last_1_var_1_109))) && (var_1_87 ? (var_1_110 == ((signed char) var_1_66)) : 1)) && (var_1_112 == ((unsigned long int) var_1_113))) && (var_1_120 ? (var_1_114 == ((signed long int) var_1_69)) : (var_1_114 == ((signed long int) var_1_22)))) && (var_1_115 == ((signed short int) 2))) && (var_1_116 == ((signed char) var_1_81))) && (var_1_117 == ((unsigned short int) var_1_1))) && (var_1_118 == ((unsigned char) var_1_33))) && (var_1_13 ? (var_1_119 == ((unsigned char) var_1_14)) : (var_1_119 == ((unsigned char) 1)))) && (last_1_var_1_121 ? (var_1_120 == ((unsigned char) var_1_43)) : (var_1_120 == ((unsigned char) var_1_13)))) && (var_1_84 ? (var_1_121 == ((unsigned char) var_1_43)) : 1)) && (var_1_84 ? (var_1_122 == ((float) var_1_28)) : (var_1_122 == ((float) var_1_77)))) && (((var_1_55 - (max (var_1_2 , var_1_54))) > (max (var_1_59 , 8.5))) ? ((((var_1_36 >> var_1_56) + var_1_64) < var_1_32) ? (var_1_123 == ((unsigned char) var_1_85)) : (var_1_123 == ((unsigned char) var_1_124))) : (var_1_123 == ((unsigned char) var_1_33)))
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
