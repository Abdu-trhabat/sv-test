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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 10;
double var_1_3 = 256.5;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 5;
unsigned short int var_1_7 = 5;
unsigned short int var_1_8 = 32;
double var_1_9 = 64.5;
unsigned short int var_1_10 = 47725;
unsigned short int var_1_11 = 5;
signed char var_1_12 = 10;
signed char var_1_13 = -5;
signed char var_1_14 = 1;
signed char var_1_15 = 25;
float var_1_16 = 999999999999.75;
float var_1_18 = 1.75;
float var_1_19 = 256.5;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 200;
signed char var_1_23 = -64;
signed char var_1_25 = 64;
signed char var_1_26 = 2;
signed char var_1_27 = 4;
signed char var_1_29 = -1;
signed short int var_1_30 = -10;
signed char var_1_31 = 50;
signed long int var_1_33 = 256;
double var_1_34 = 9.6;
double var_1_35 = 64.2;
signed char var_1_37 = 32;
double var_1_38 = 10.8;
double var_1_39 = 127.95;
signed short int var_1_40 = 8;
signed short int var_1_42 = -31657;
signed short int var_1_43 = -32;
double var_1_44 = 8.4;
unsigned long int var_1_45 = 256;
unsigned short int var_1_46 = 4;
signed char var_1_47 = 32;
signed char var_1_48 = 32;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 16;
signed short int var_1_51 = 25;
signed short int var_1_52 = 1;
signed short int var_1_53 = 5;
unsigned char var_1_54 = 100;
double var_1_55 = 32.5;
double var_1_56 = 4.6;
unsigned long int var_1_57 = 1192553189;
unsigned long int var_1_58 = 2077636730;
double var_1_60 = 2.5;
signed char var_1_61 = -2;
signed char var_1_62 = -8;
unsigned short int var_1_63 = 50;
unsigned short int var_1_64 = 5;
unsigned short int var_1_65 = 10000;
unsigned long int var_1_66 = 64;
unsigned long int var_1_67 = 3865490089;
unsigned long int var_1_68 = 10;
signed short int var_1_69 = 256;
unsigned char var_1_70 = 10;
signed short int var_1_72 = 28913;
signed char var_1_73 = 16;
signed long int var_1_74 = 2;
unsigned char var_1_75 = 5;
signed long int var_1_76 = 25;
signed short int var_1_77 = 21620;
unsigned long int var_1_78 = 200;
unsigned long int var_1_80 = 1346073162;
unsigned long int var_1_81 = 1473800921;
unsigned long int var_1_82 = 32;
unsigned long int var_1_83 = 5;
unsigned short int var_1_84 = 10;
unsigned short int var_1_85 = 32;
float var_1_86 = 1.8;
unsigned long int var_1_87 = 3166359932;
float var_1_88 = 199.125;
float var_1_89 = 4.75;
unsigned short int var_1_90 = 8;
unsigned char var_1_91 = 200;
unsigned short int var_1_92 = 4;
unsigned short int var_1_93 = 10000;
signed short int var_1_94 = -25;
float var_1_96 = 1.6;
float var_1_97 = 4.25;
float var_1_98 = 5.5;
double var_1_99 = 8.75;
signed char var_1_100 = 1;
signed long int var_1_101 = 1;
float var_1_102 = 4.75;
float var_1_103 = 0.0;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 0;
unsigned short int var_1_106 = 4;
unsigned short int var_1_107 = 59398;
unsigned short int var_1_108 = 51959;
double var_1_109 = 1000000000000.7;
double var_1_110 = 8.375;
double var_1_111 = 7.5;
double var_1_112 = 15.75;
unsigned char var_1_113 = 1;
unsigned char var_1_114 = 0;
signed char var_1_115 = 64;
unsigned short int var_1_117 = 256;
unsigned short int var_1_118 = 100;
unsigned short int var_1_119 = 32;
signed long int var_1_120 = -50;
unsigned char var_1_121 = 1;
unsigned char var_1_122 = 1;
signed char var_1_123 = 32;
signed short int var_1_124 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_33 = 256;
double last_1_var_1_35 = 64.2;
signed short int last_1_var_1_40 = 8;
unsigned short int last_1_var_1_46 = 4;
unsigned char last_1_var_1_54 = 100;
unsigned short int last_1_var_1_63 = 50;
unsigned short int last_1_var_1_64 = 5;
unsigned long int last_1_var_1_66 = 64;
unsigned char last_1_var_1_75 = 5;
signed long int last_1_var_1_76 = 25;
unsigned long int last_1_var_1_78 = 200;
unsigned long int last_1_var_1_82 = 32;
unsigned long int last_1_var_1_83 = 5;
unsigned char last_1_var_1_104 = 1;
unsigned short int last_1_var_1_106 = 4;
unsigned char last_1_var_1_113 = 1;
unsigned short int last_1_var_1_119 = 32;
unsigned char last_1_var_1_122 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req50Batch109Amount500
	if (last_1_var_1_122) {
		var_1_121 = var_1_114;
	} else {
		var_1_121 = var_1_105;
	}


	// From: Req51Batch109Amount500
	if (var_1_121) {
		var_1_122 = var_1_105;
	} else {
		var_1_122 = var_1_114;
	}


	// From: Req13Batch109Amount500
	signed long int stepLocal_4 = last_1_var_1_33;
	if ((50.5f / var_1_34) <= var_1_38) {
		if ((max (last_1_var_1_83 , var_1_26)) <= stepLocal_4) {
			var_1_46 = (40383 - (max (var_1_27 , last_1_var_1_63)));
		}
	} else {
		var_1_46 = (last_1_var_1_40 + var_1_22);
	}


	// From: Req31Batch109Amount500
	if (var_1_10 <= last_1_var_1_46) {
		var_1_83 = (((min (var_1_42 , 3431494730u)) - (abs (last_1_var_1_75))) - last_1_var_1_46);
	}


	// From: Req26Batch109Amount500
	if (5u <= var_1_10) {
		var_1_74 = (((var_1_7 + last_1_var_1_82) - var_1_65) + var_1_11);
	}


	// From: Req12Batch109Amount500
	if (last_1_var_1_122) {
		var_1_45 = (min ((4169824092u - var_1_27) , var_1_6));
	} else {
		var_1_45 = last_1_var_1_76;
	}


	// From: Req29Batch109Amount500
	if (last_1_var_1_119 > var_1_58) {
		var_1_78 = (var_1_67 - (var_1_5 + var_1_26));
	} else {
		if (((last_1_var_1_78 % var_1_77) / var_1_37) > (min (var_1_48 , -25))) {
			var_1_78 = (((max (var_1_58 , var_1_80)) + var_1_81) - var_1_53);
		} else {
			var_1_78 = ((min (last_1_var_1_54 , var_1_53)) + (max ((var_1_52 + last_1_var_1_66) , var_1_50)));
		}
	}


	// From: Req42Batch109Amount500
	if (last_1_var_1_35 > var_1_89) {
		var_1_104 = (last_1_var_1_104 && var_1_105);
	}


	// From: Req27Batch109Amount500
	if (var_1_104) {
		var_1_75 = (var_1_26 + var_1_27);
	} else {
		var_1_75 = (var_1_70 + var_1_53);
	}


	// From: Req2Batch109Amount500
	if (var_1_3 < ((max (var_1_9 , 2.625)) - (max (0.25 , 5.3)))) {
		var_1_8 = (max ((var_1_10 - var_1_11) , var_1_6));
	} else {
		if (var_1_10 <= var_1_6) {
			var_1_8 = (abs (var_1_10));
		}
	}


	// From: Req4Batch109Amount500
	if (var_1_104) {
		var_1_16 = (max (var_1_18 , var_1_19));
	}


	// From: Req5Batch109Amount500
	signed long int stepLocal_1 = 1 ^ var_1_6;
	if (((var_1_11 * var_1_13) / var_1_10) >= stepLocal_1) {
		var_1_20 = (min ((max (5 , var_1_21)) , var_1_22));
	}


	// From: Req15Batch109Amount500
	if (var_1_121) {
		var_1_49 = (var_1_50 + var_1_27);
	}


	// From: Req19Batch109Amount500
	if (var_1_18 >= var_1_19) {
		var_1_61 = var_1_53;
	}


	// From: Req20Batch109Amount500
	var_1_62 = -2;


	// From: Req21Batch109Amount500
	signed char stepLocal_11 = var_1_15;
	if (stepLocal_11 <= (abs (var_1_53))) {
		var_1_63 = (var_1_48 + (min (var_1_53 , var_1_8)));
	} else {
		if (var_1_19 >= (- var_1_3)) {
			var_1_63 = last_1_var_1_63;
		} else {
			var_1_63 = var_1_6;
		}
	}


	// From: Req32Batch109Amount500
	signed long int stepLocal_17 = var_1_8 + var_1_5;
	if (var_1_70 <= stepLocal_17) {
		var_1_84 = var_1_53;
	}


	// From: Req37Batch109Amount500
	if (! var_1_104) {
		var_1_96 = (max (var_1_89 , var_1_18));
	} else {
		var_1_96 = (var_1_89 - (var_1_97 + var_1_98));
	}


	// From: Req38Batch109Amount500
	unsigned char stepLocal_27 = var_1_122;
	if ((var_1_83 > var_1_70) || stepLocal_27) {
		var_1_99 = (max (var_1_39 , ((abs (var_1_18)) - var_1_88)));
	}


	// From: Req39Batch109Amount500
	var_1_100 = ((var_1_52 - var_1_26) + (var_1_70 + var_1_53));


	// From: Req40Batch109Amount500
	unsigned short int stepLocal_28 = var_1_92;
	if ((var_1_26 - var_1_48) <= stepLocal_28) {
		if (31.8f > var_1_3) {
			var_1_101 = -4;
		} else {
			var_1_101 = var_1_15;
		}
	}


	// From: Req41Batch109Amount500
	var_1_102 = ((min (var_1_89 , var_1_88)) - (var_1_103 - var_1_97));


	// From: Req43Batch109Amount500
	if (var_1_122) {
		var_1_106 = (((min (var_1_107 , var_1_108)) - last_1_var_1_106) - (var_1_92 + var_1_21));
	}


	// From: Req46Batch109Amount500
	if (var_1_121) {
		var_1_115 = var_1_13;
	} else {
		var_1_115 = var_1_29;
	}


	// From: Req47Batch109Amount500
	var_1_117 = var_1_118;


	// From: Req48Batch109Amount500
	if (var_1_121) {
		var_1_119 = 8;
	} else {
		var_1_119 = 10;
	}


	// From: Req52Batch109Amount500
	if (var_1_121) {
		var_1_123 = var_1_25;
	}


	// From: Req23Batch109Amount500
	unsigned char stepLocal_13 = var_1_50;
	unsigned char stepLocal_12 = var_1_104;
	if (var_1_104) {
		var_1_66 = (abs (var_1_42 - (var_1_65 + var_1_6)));
	} else {
		if (stepLocal_12 || var_1_122) {
			var_1_66 = ((var_1_67 - var_1_10) - var_1_26);
		} else {
			if (var_1_53 <= stepLocal_13) {
				var_1_66 = (max (var_1_68 , var_1_50));
			} else {
				var_1_66 = (max (32u , var_1_46));
			}
		}
	}


	// From: Req8Batch109Amount500
	unsigned char stepLocal_2 = var_1_122;
	if (var_1_104) {
		if ((var_1_84 == var_1_15) && stepLocal_2) {
			var_1_33 = (var_1_10 - (min (var_1_6 , var_1_5)));
		} else {
			if (var_1_3 >= (var_1_9 / var_1_34)) {
				var_1_33 = (var_1_27 - (min (var_1_78 , var_1_26)));
			}
		}
	} else {
		var_1_33 = (var_1_5 - (min ((abs (var_1_31)) , var_1_74)));
	}


	// From: Req45Batch109Amount500
	if ((10 * var_1_45) > (var_1_78 ^ var_1_22)) {
		if (var_1_80 >= var_1_68) {
			var_1_113 = (last_1_var_1_113 && var_1_105);
		} else {
			var_1_113 = 1;
		}
	} else {
		var_1_113 = var_1_114;
	}


	// From: Req6Batch109Amount500
	if (var_1_121) {
		if (var_1_113) {
			var_1_23 = (var_1_25 - (var_1_26 + var_1_27));
		} else {
			var_1_23 = (var_1_27 - var_1_26);
		}
	} else {
		if (! var_1_121) {
			var_1_23 = ((abs (var_1_29)) + var_1_26);
		} else {
			var_1_23 = var_1_27;
		}
	}


	// From: Req49Batch109Amount500
	var_1_120 = var_1_23;


	// From: Req16Batch109Amount500
	unsigned char stepLocal_10 = var_1_7 < (16 * 10);
	unsigned char stepLocal_9 = var_1_104;
	unsigned short int stepLocal_8 = var_1_6;
	signed short int stepLocal_7 = var_1_53;
	unsigned long int stepLocal_6 = var_1_66;
	if (var_1_104 && stepLocal_10) {
		if (((abs (var_1_15)) == var_1_45) || stepLocal_9) {
			if (stepLocal_6 != var_1_33) {
				var_1_51 = var_1_78;
			} else {
				var_1_51 = (var_1_37 + var_1_27);
			}
		}
	} else {
		if ((var_1_26 >> (max (var_1_52 , var_1_53))) <= stepLocal_8) {
			var_1_51 = (min (((var_1_78 + var_1_49) + var_1_63) , (max ((var_1_63 - var_1_52) , var_1_43))));
		} else {
			if (stepLocal_7 >= var_1_45) {
				var_1_51 = (var_1_27 - var_1_63);
			} else {
				var_1_51 = ((var_1_26 + var_1_52) + -10);
			}
		}
	}


	// From: Req44Batch109Amount500
	if (var_1_113) {
		var_1_109 = (min (var_1_88 , var_1_89));
	} else {
		if (((var_1_26 << var_1_108) / var_1_70) >= 16) {
			var_1_109 = ((var_1_110 + (min (var_1_111 , var_1_112))) + var_1_98);
		}
	}


	// From: Req14Batch109Amount500
	signed long int stepLocal_5 = -1 - 1;
	if (stepLocal_5 > var_1_120) {
		var_1_47 = (max (var_1_27 , ((max (var_1_26 , var_1_25)) - var_1_48)));
	} else {
		var_1_47 = var_1_25;
	}


	// From: Req3Batch109Amount500
	unsigned short int stepLocal_0 = var_1_106;
	if (var_1_99 > (abs (var_1_9 - 63.6))) {
		if (stepLocal_0 <= var_1_5) {
			var_1_12 = ((max (var_1_13 , var_1_14)) + (min (50 , var_1_15)));
		} else {
			var_1_12 = (max ((max (var_1_15 , var_1_14)) , var_1_13));
		}
	}


	// From: Req11Batch109Amount500
	unsigned char stepLocal_3 = var_1_66 > var_1_25;
	if (var_1_122 || stepLocal_3) {
		var_1_44 = (min (var_1_38 , var_1_18));
	}


	// From: Req18Batch109Amount500
	if (var_1_46 > var_1_50) {
		if (((var_1_57 + var_1_58) - var_1_11) > var_1_66) {
			var_1_56 = var_1_38;
		}
	} else {
		var_1_56 = ((abs (var_1_39)) + (min (var_1_38 , var_1_60)));
	}


	// From: Req25Batch109Amount500
	if (var_1_121) {
		if (var_1_113 || var_1_122) {
			var_1_73 = (var_1_15 + (var_1_70 + var_1_53));
		} else {
			var_1_73 = (max (var_1_27 , var_1_48));
		}
	}


	// From: Req36Batch109Amount500
	if (var_1_121) {
		var_1_94 = (max (var_1_65 , var_1_120));
	}


	// From: Req53Batch109Amount500
	unsigned long int stepLocal_29 = var_1_80;
	if (var_1_122) {
		if (stepLocal_29 >= (var_1_46 / var_1_53)) {
			if (var_1_121) {
				var_1_124 = ((var_1_22 + var_1_37) + var_1_15);
			} else {
				var_1_124 = var_1_23;
			}
		} else {
			var_1_124 = var_1_65;
		}
	}


	// From: Req35Batch109Amount500
	signed long int stepLocal_26 = var_1_120;
	signed long int stepLocal_25 = abs (var_1_91 - var_1_26);
	unsigned char stepLocal_24 = var_1_50;
	if (stepLocal_24 < var_1_66) {
		if (stepLocal_26 != var_1_45) {
			var_1_90 = (var_1_42 - var_1_70);
		} else {
			var_1_90 = (var_1_53 + var_1_11);
		}
	} else {
		if (var_1_21 >= stepLocal_25) {
			var_1_90 = ((var_1_77 - (abs (var_1_92))) + var_1_22);
		} else {
			var_1_90 = ((var_1_77 + (10000 + var_1_93)) - var_1_52);
		}
	}


	// From: Req10Batch109Amount500
	if ((var_1_26 / var_1_31) >= var_1_78) {
		if (((var_1_6 | var_1_90) <= var_1_25) && var_1_104) {
			if (((var_1_37 & -100) > (var_1_106 * var_1_83)) || (-4 == var_1_74)) {
				var_1_40 = (max ((var_1_106 + var_1_90) , var_1_15));
			} else {
				var_1_40 = (((abs (var_1_42)) - (var_1_27 + var_1_83)) - var_1_90);
			}
		} else {
			var_1_40 = (var_1_26 + var_1_43);
		}
	}


	// From: Req30Batch109Amount500
	signed long int stepLocal_16 = min ((var_1_7 / var_1_37) , var_1_90);
	if (stepLocal_16 <= var_1_26) {
		var_1_82 = (var_1_42 - ((abs (var_1_80)) - last_1_var_1_82));
	}


	// From: Req33Batch109Amount500
	unsigned long int stepLocal_18 = max (var_1_42 , var_1_82);
	if (stepLocal_18 < var_1_67) {
		var_1_85 = (min (var_1_42 , (var_1_10 - var_1_51)));
	}


	// From: Req9Batch109Amount500
	if (var_1_27 < ((var_1_47 * var_1_90) / (min (var_1_31 , var_1_37)))) {
		var_1_35 = (var_1_38 + var_1_39);
	} else {
		var_1_35 = ((max (var_1_39 , var_1_38)) + 255.5);
	}


	// From: Req1Batch109Amount500
	if ((5.45 * var_1_56) == (10.8 + (128.625 / var_1_3))) {
		if (var_1_56 < (var_1_3 * var_1_109)) {
			var_1_1 = (max (var_1_5 , (max (var_1_6 , var_1_7))));
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req24Batch109Amount500
	if (((1 >= var_1_90) && var_1_104) && var_1_121) {
		if ((var_1_7 >> (var_1_70 - var_1_52)) >= (max (var_1_117 , -5))) {
			var_1_69 = (abs ((var_1_48 + var_1_25) + 2));
		} else {
			var_1_69 = (var_1_25 - var_1_40);
		}
	} else {
		if (var_1_51 >= (var_1_43 / var_1_31)) {
			var_1_69 = ((var_1_72 - (min (var_1_20 , var_1_26))) - var_1_27);
		}
	}


	// From: Req17Batch109Amount500
	if ((min (var_1_38 , var_1_109)) <= (var_1_109 + (var_1_9 - var_1_55))) {
		if (var_1_53 < var_1_85) {
			var_1_54 = ((max ((32 + var_1_52) , 5)) + (max (var_1_27 , var_1_48)));
		} else {
			var_1_54 = (abs (max ((var_1_27 + var_1_48) , var_1_52)));
		}
	}


	// From: Req28Batch109Amount500
	signed long int stepLocal_15 = (var_1_77 - var_1_50) - var_1_11;
	unsigned char stepLocal_14 = var_1_121;
	if (var_1_122) {
		if (var_1_113 || stepLocal_14) {
			if (var_1_121) {
				var_1_76 = ((2129610084 - (var_1_53 + var_1_74)) - (1845042475 - var_1_52));
			} else {
				if (stepLocal_15 > var_1_23) {
					var_1_76 = (var_1_27 - (min (var_1_10 , var_1_54)));
				} else {
					var_1_76 = (var_1_83 + var_1_42);
				}
			}
		} else {
			var_1_76 = (min (var_1_27 , var_1_26));
		}
	}


	// From: Req7Batch109Amount500
	if (((var_1_25 - var_1_26) + (var_1_29 / var_1_31)) != ((min (16 , var_1_76)) / var_1_10)) {
		var_1_30 = (min (((abs (var_1_22)) - var_1_27) , -4));
	}


	// From: Req22Batch109Amount500
	if (last_1_var_1_64 >= var_1_76) {
		var_1_64 = (min ((var_1_50 + var_1_21) , (abs (var_1_75))));
	} else {
		var_1_64 = ((min (var_1_42 , var_1_10)) - (var_1_53 + (var_1_65 - var_1_48)));
	}


	// From: Req34Batch109Amount500
	unsigned long int stepLocal_23 = 256u << var_1_77;
	unsigned char stepLocal_22 = var_1_122;
	unsigned long int stepLocal_21 = var_1_87 - var_1_77;
	unsigned long int stepLocal_20 = var_1_63 * (var_1_120 * var_1_82);
	unsigned long int stepLocal_19 = - (max (var_1_52 , var_1_82));
	if ((1 < var_1_43) || stepLocal_22) {
		if (stepLocal_19 == var_1_46) {
			if (stepLocal_20 != ((1321463143u + var_1_58) - 10u)) {
				if (stepLocal_21 != var_1_64) {
					if ((var_1_81 - (var_1_58 - var_1_7)) < stepLocal_23) {
						var_1_86 = var_1_39;
					}
				} else {
					var_1_86 = (var_1_88 - var_1_89);
				}
			} else {
				if (var_1_122) {
					var_1_86 = (var_1_60 + var_1_39);
				} else {
					if (var_1_122) {
						var_1_86 = (min (var_1_18 , var_1_88));
					} else {
						var_1_86 = (min (var_1_19 , var_1_39));
					}
				}
			}
		}
	} else {
		var_1_86 = var_1_19;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	assume_abort_if_not(var_1_31 != 0);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -32766);
	assume_abort_if_not(var_1_42 <= -16382);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= -16383);
	assume_abort_if_not(var_1_43 <= 16383);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 6);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 6);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854776000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483648);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1073741824);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -461168.6018427383000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 8191);
	assume_abort_if_not(var_1_65 <= 16383);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 3221225470);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 8);
	assume_abort_if_not(var_1_70 <= 15);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= 16382);
	assume_abort_if_not(var_1_72 <= 32766);
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= 16383);
	assume_abort_if_not(var_1_77 <= 32767);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 1073741823);
	assume_abort_if_not(var_1_80 <= 2147483647);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 1073741824);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 2147483647);
	assume_abort_if_not(var_1_87 <= 4294967295);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854766000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 127);
	assume_abort_if_not(var_1_91 <= 255);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 16383);
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 8192);
	assume_abort_if_not(var_1_93 <= 16383);
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= 0.0F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 4611686.018427383000e+12F && var_1_97 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_98 >= 0.0F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 4611686.018427383000e+12F && var_1_98 >= 1.0e-20F ));
	var_1_103 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_103 >= 4611686.018427383000e+12F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 9223372.036854766000e+12F && var_1_103 >= 1.0e-20F ));
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 0);
	assume_abort_if_not(var_1_105 <= 0);
	var_1_107 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_107 >= 49150);
	assume_abort_if_not(var_1_107 <= 65534);
	var_1_108 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_108 >= 49150);
	assume_abort_if_not(var_1_108 <= 65534);
	var_1_110 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_110 >= -230584.3009213691400e+13F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 2305843.009213691400e+12F && var_1_110 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_111 >= -230584.3009213691400e+13F && var_1_111 <= -1.0e-20F) || (var_1_111 <= 2305843.009213691400e+12F && var_1_111 >= 1.0e-20F ));
	var_1_112 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_112 >= -230584.3009213691400e+13F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 2305843.009213691400e+12F && var_1_112 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 1);
	assume_abort_if_not(var_1_114 <= 1);
	var_1_118 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_118 >= 0);
	assume_abort_if_not(var_1_118 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_33 = var_1_33;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_119 = var_1_119;
	last_1_var_1_122 = var_1_122;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((5.45 * var_1_56) == (10.8 + (128.625 / var_1_3))) ? ((var_1_56 < (var_1_3 * var_1_109)) ? (var_1_1 == ((unsigned short int) (max (var_1_5 , (max (var_1_6 , var_1_7)))))) : (var_1_1 == ((unsigned short int) var_1_7))) : 1) && ((var_1_3 < ((max (var_1_9 , 2.625)) - (max (0.25 , 5.3)))) ? (var_1_8 == ((unsigned short int) (max ((var_1_10 - var_1_11) , var_1_6)))) : ((var_1_10 <= var_1_6) ? (var_1_8 == ((unsigned short int) (abs (var_1_10)))) : 1))) && ((var_1_99 > (abs (var_1_9 - 63.6))) ? ((var_1_106 <= var_1_5) ? (var_1_12 == ((signed char) ((max (var_1_13 , var_1_14)) + (min (50 , var_1_15))))) : (var_1_12 == ((signed char) (max ((max (var_1_15 , var_1_14)) , var_1_13))))) : 1)) && (var_1_104 ? (var_1_16 == ((float) (max (var_1_18 , var_1_19)))) : 1)) && ((((var_1_11 * var_1_13) / var_1_10) >= (1 ^ var_1_6)) ? (var_1_20 == ((unsigned char) (min ((max (5 , var_1_21)) , var_1_22)))) : 1)) && (var_1_121 ? (var_1_113 ? (var_1_23 == ((signed char) (var_1_25 - (var_1_26 + var_1_27)))) : (var_1_23 == ((signed char) (var_1_27 - var_1_26)))) : ((! var_1_121) ? (var_1_23 == ((signed char) ((abs (var_1_29)) + var_1_26))) : (var_1_23 == ((signed char) var_1_27))))) && ((((var_1_25 - var_1_26) + (var_1_29 / var_1_31)) != ((min (16 , var_1_76)) / var_1_10)) ? (var_1_30 == ((signed short int) (min (((abs (var_1_22)) - var_1_27) , -4)))) : 1)) && (var_1_104 ? (((var_1_84 == var_1_15) && var_1_122) ? (var_1_33 == ((signed long int) (var_1_10 - (min (var_1_6 , var_1_5))))) : ((var_1_3 >= (var_1_9 / var_1_34)) ? (var_1_33 == ((signed long int) (var_1_27 - (min (var_1_78 , var_1_26))))) : 1)) : (var_1_33 == ((signed long int) (var_1_5 - (min ((abs (var_1_31)) , var_1_74))))))) && ((var_1_27 < ((var_1_47 * var_1_90) / (min (var_1_31 , var_1_37)))) ? (var_1_35 == ((double) (var_1_38 + var_1_39))) : (var_1_35 == ((double) ((max (var_1_39 , var_1_38)) + 255.5))))) && (((var_1_26 / var_1_31) >= var_1_78) ? ((((var_1_6 | var_1_90) <= var_1_25) && var_1_104) ? ((((var_1_37 & -100) > (var_1_106 * var_1_83)) || (-4 == var_1_74)) ? (var_1_40 == ((signed short int) (max ((var_1_106 + var_1_90) , var_1_15)))) : (var_1_40 == ((signed short int) (((abs (var_1_42)) - (var_1_27 + var_1_83)) - var_1_90)))) : (var_1_40 == ((signed short int) (var_1_26 + var_1_43)))) : 1)) && ((var_1_122 || (var_1_66 > var_1_25)) ? (var_1_44 == ((double) (min (var_1_38 , var_1_18)))) : 1)) && (last_1_var_1_122 ? (var_1_45 == ((unsigned long int) (min ((4169824092u - var_1_27) , var_1_6)))) : (var_1_45 == ((unsigned long int) last_1_var_1_76)))) && (((50.5f / var_1_34) <= var_1_38) ? (((max (last_1_var_1_83 , var_1_26)) <= last_1_var_1_33) ? (var_1_46 == ((unsigned short int) (40383 - (max (var_1_27 , last_1_var_1_63))))) : 1) : (var_1_46 == ((unsigned short int) (last_1_var_1_40 + var_1_22))))) && (((-1 - 1) > var_1_120) ? (var_1_47 == ((signed char) (max (var_1_27 , ((max (var_1_26 , var_1_25)) - var_1_48))))) : (var_1_47 == ((signed char) var_1_25)))) && (var_1_121 ? (var_1_49 == ((unsigned char) (var_1_50 + var_1_27))) : 1)) && ((var_1_104 && (var_1_7 < (16 * 10))) ? ((((abs (var_1_15)) == var_1_45) || var_1_104) ? ((var_1_66 != var_1_33) ? (var_1_51 == ((signed short int) var_1_78)) : (var_1_51 == ((signed short int) (var_1_37 + var_1_27)))) : 1) : (((var_1_26 >> (max (var_1_52 , var_1_53))) <= var_1_6) ? (var_1_51 == ((signed short int) (min (((var_1_78 + var_1_49) + var_1_63) , (max ((var_1_63 - var_1_52) , var_1_43)))))) : ((var_1_53 >= var_1_45) ? (var_1_51 == ((signed short int) (var_1_27 - var_1_63))) : (var_1_51 == ((signed short int) ((var_1_26 + var_1_52) + -10))))))) && (((min (var_1_38 , var_1_109)) <= (var_1_109 + (var_1_9 - var_1_55))) ? ((var_1_53 < var_1_85) ? (var_1_54 == ((unsigned char) ((max ((32 + var_1_52) , 5)) + (max (var_1_27 , var_1_48))))) : (var_1_54 == ((unsigned char) (abs (max ((var_1_27 + var_1_48) , var_1_52)))))) : 1)) && ((var_1_46 > var_1_50) ? ((((var_1_57 + var_1_58) - var_1_11) > var_1_66) ? (var_1_56 == ((double) var_1_38)) : 1) : (var_1_56 == ((double) ((abs (var_1_39)) + (min (var_1_38 , var_1_60))))))) && ((var_1_18 >= var_1_19) ? (var_1_61 == ((signed char) var_1_53)) : 1)) && (var_1_62 == ((signed char) -2))) && ((var_1_15 <= (abs (var_1_53))) ? (var_1_63 == ((unsigned short int) (var_1_48 + (min (var_1_53 , var_1_8))))) : ((var_1_19 >= (- var_1_3)) ? (var_1_63 == ((unsigned short int) last_1_var_1_63)) : (var_1_63 == ((unsigned short int) var_1_6))))) && ((last_1_var_1_64 >= var_1_76) ? (var_1_64 == ((unsigned short int) (min ((var_1_50 + var_1_21) , (abs (var_1_75)))))) : (var_1_64 == ((unsigned short int) ((min (var_1_42 , var_1_10)) - (var_1_53 + (var_1_65 - var_1_48))))))) && (var_1_104 ? (var_1_66 == ((unsigned long int) (abs (var_1_42 - (var_1_65 + var_1_6))))) : ((var_1_104 || var_1_122) ? (var_1_66 == ((unsigned long int) ((var_1_67 - var_1_10) - var_1_26))) : ((var_1_53 <= var_1_50) ? (var_1_66 == ((unsigned long int) (max (var_1_68 , var_1_50)))) : (var_1_66 == ((unsigned long int) (max (32u , var_1_46)))))))) && ((((1 >= var_1_90) && var_1_104) && var_1_121) ? (((var_1_7 >> (var_1_70 - var_1_52)) >= (max (var_1_117 , -5))) ? (var_1_69 == ((signed short int) (abs ((var_1_48 + var_1_25) + 2)))) : (var_1_69 == ((signed short int) (var_1_25 - var_1_40)))) : ((var_1_51 >= (var_1_43 / var_1_31)) ? (var_1_69 == ((signed short int) ((var_1_72 - (min (var_1_20 , var_1_26))) - var_1_27))) : 1))) && (var_1_121 ? ((var_1_113 || var_1_122) ? (var_1_73 == ((signed char) (var_1_15 + (var_1_70 + var_1_53)))) : (var_1_73 == ((signed char) (max (var_1_27 , var_1_48))))) : 1)) && ((5u <= var_1_10) ? (var_1_74 == ((signed long int) (((var_1_7 + last_1_var_1_82) - var_1_65) + var_1_11))) : 1)) && (var_1_104 ? (var_1_75 == ((unsigned char) (var_1_26 + var_1_27))) : (var_1_75 == ((unsigned char) (var_1_70 + var_1_53))))) && (var_1_122 ? ((var_1_113 || var_1_121) ? (var_1_121 ? (var_1_76 == ((signed long int) ((2129610084 - (var_1_53 + var_1_74)) - (1845042475 - var_1_52)))) : ((((var_1_77 - var_1_50) - var_1_11) > var_1_23) ? (var_1_76 == ((signed long int) (var_1_27 - (min (var_1_10 , var_1_54))))) : (var_1_76 == ((signed long int) (var_1_83 + var_1_42))))) : (var_1_76 == ((signed long int) (min (var_1_27 , var_1_26))))) : 1)) && ((last_1_var_1_119 > var_1_58) ? (var_1_78 == ((unsigned long int) (var_1_67 - (var_1_5 + var_1_26)))) : ((((last_1_var_1_78 % var_1_77) / var_1_37) > (min (var_1_48 , -25))) ? (var_1_78 == ((unsigned long int) (((max (var_1_58 , var_1_80)) + var_1_81) - var_1_53))) : (var_1_78 == ((unsigned long int) ((min (last_1_var_1_54 , var_1_53)) + (max ((var_1_52 + last_1_var_1_66) , var_1_50)))))))) && (((min ((var_1_7 / var_1_37) , var_1_90)) <= var_1_26) ? (var_1_82 == ((unsigned long int) (var_1_42 - ((abs (var_1_80)) - last_1_var_1_82)))) : 1)) && ((var_1_10 <= last_1_var_1_46) ? (var_1_83 == ((unsigned long int) (((min (var_1_42 , 3431494730u)) - (abs (last_1_var_1_75))) - last_1_var_1_46))) : 1)) && ((var_1_70 <= (var_1_8 + var_1_5)) ? (var_1_84 == ((unsigned short int) var_1_53)) : 1)) && (((max (var_1_42 , var_1_82)) < var_1_67) ? (var_1_85 == ((unsigned short int) (min (var_1_42 , (var_1_10 - var_1_51))))) : 1)) && (((1 < var_1_43) || var_1_122) ? (((- (max (var_1_52 , var_1_82))) == var_1_46) ? (((var_1_63 * (var_1_120 * var_1_82)) != ((1321463143u + var_1_58) - 10u)) ? (((var_1_87 - var_1_77) != var_1_64) ? (((var_1_81 - (var_1_58 - var_1_7)) < (256u << var_1_77)) ? (var_1_86 == ((float) var_1_39)) : 1) : (var_1_86 == ((float) (var_1_88 - var_1_89)))) : (var_1_122 ? (var_1_86 == ((float) (var_1_60 + var_1_39))) : (var_1_122 ? (var_1_86 == ((float) (min (var_1_18 , var_1_88)))) : (var_1_86 == ((float) (min (var_1_19 , var_1_39))))))) : 1) : (var_1_86 == ((float) var_1_19)))) && ((var_1_50 < var_1_66) ? ((var_1_120 != var_1_45) ? (var_1_90 == ((unsigned short int) (var_1_42 - var_1_70))) : (var_1_90 == ((unsigned short int) (var_1_53 + var_1_11)))) : ((var_1_21 >= (abs (var_1_91 - var_1_26))) ? (var_1_90 == ((unsigned short int) ((var_1_77 - (abs (var_1_92))) + var_1_22))) : (var_1_90 == ((unsigned short int) ((var_1_77 + (10000 + var_1_93)) - var_1_52)))))) && (var_1_121 ? (var_1_94 == ((signed short int) (max (var_1_65 , var_1_120)))) : 1)) && ((! var_1_104) ? (var_1_96 == ((float) (max (var_1_89 , var_1_18)))) : (var_1_96 == ((float) (var_1_89 - (var_1_97 + var_1_98)))))) && (((var_1_83 > var_1_70) || var_1_122) ? (var_1_99 == ((double) (max (var_1_39 , ((abs (var_1_18)) - var_1_88))))) : 1)) && (var_1_100 == ((signed char) ((var_1_52 - var_1_26) + (var_1_70 + var_1_53))))) && (((var_1_26 - var_1_48) <= var_1_92) ? ((31.8f > var_1_3) ? (var_1_101 == ((signed long int) -4)) : (var_1_101 == ((signed long int) var_1_15))) : 1)) && (var_1_102 == ((float) ((min (var_1_89 , var_1_88)) - (var_1_103 - var_1_97))))) && ((last_1_var_1_35 > var_1_89) ? (var_1_104 == ((unsigned char) (last_1_var_1_104 && var_1_105))) : 1)) && (var_1_122 ? (var_1_106 == ((unsigned short int) (((min (var_1_107 , var_1_108)) - last_1_var_1_106) - (var_1_92 + var_1_21)))) : 1)) && (var_1_113 ? (var_1_109 == ((double) (min (var_1_88 , var_1_89)))) : ((((var_1_26 << var_1_108) / var_1_70) >= 16) ? (var_1_109 == ((double) ((var_1_110 + (min (var_1_111 , var_1_112))) + var_1_98))) : 1))) && (((10 * var_1_45) > (var_1_78 ^ var_1_22)) ? ((var_1_80 >= var_1_68) ? (var_1_113 == ((unsigned char) (last_1_var_1_113 && var_1_105))) : (var_1_113 == ((unsigned char) 1))) : (var_1_113 == ((unsigned char) var_1_114)))) && (var_1_121 ? (var_1_115 == ((signed char) var_1_13)) : (var_1_115 == ((signed char) var_1_29)))) && (var_1_117 == ((unsigned short int) var_1_118))) && (var_1_121 ? (var_1_119 == ((unsigned short int) 8)) : (var_1_119 == ((unsigned short int) 10)))) && (var_1_120 == ((signed long int) var_1_23))) && (last_1_var_1_122 ? (var_1_121 == ((unsigned char) var_1_114)) : (var_1_121 == ((unsigned char) var_1_105)))) && (var_1_121 ? (var_1_122 == ((unsigned char) var_1_105)) : (var_1_122 == ((unsigned char) var_1_114)))) && (var_1_121 ? (var_1_123 == ((signed char) var_1_25)) : 1)) && (var_1_122 ? ((var_1_80 >= (var_1_46 / var_1_53)) ? (var_1_121 ? (var_1_124 == ((signed short int) ((var_1_22 + var_1_37) + var_1_15))) : (var_1_124 == ((signed short int) var_1_23))) : (var_1_124 == ((signed short int) var_1_65))) : 1)
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
