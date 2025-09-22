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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 32;
unsigned long int var_1_3 = 50;
unsigned long int var_1_4 = 1982060228;
unsigned long int var_1_5 = 100;
unsigned long int var_1_6 = 100;
signed char var_1_7 = 50;
double var_1_10 = 31.8;
double var_1_11 = 10.5;
signed char var_1_12 = -2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
signed char var_1_15 = -25;
signed char var_1_16 = 64;
signed char var_1_17 = 2;
signed char var_1_18 = 64;
float var_1_19 = 5.9;
float var_1_21 = 32.5;
float var_1_22 = 0.75;
unsigned char var_1_23 = 10;
signed char var_1_25 = 50;
double var_1_26 = 7.8;
double var_1_27 = 1000000000000000.2;
double var_1_28 = 0.19999999999999996;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 3867389581;
signed long int var_1_31 = 4;
signed char var_1_32 = -50;
signed char var_1_33 = -5;
unsigned long int var_1_34 = 5;
signed short int var_1_35 = 0;
unsigned char var_1_36 = 128;
double var_1_38 = 9999.3;
double var_1_39 = 1000000000000.7;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
unsigned short int var_1_42 = 4;
unsigned short int var_1_43 = 17750;
float var_1_44 = 9.5;
float var_1_45 = 63.8;
float var_1_46 = 256.5;
float var_1_47 = 256.5;
float var_1_48 = 0.4;
float var_1_49 = 128.5;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
signed char var_1_52 = -50;
signed char var_1_53 = -2;
signed char var_1_54 = -2;
unsigned long int var_1_55 = 4;
unsigned char var_1_56 = 0;
unsigned short int var_1_57 = 128;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 16;
signed long int var_1_61 = -100;
unsigned short int var_1_62 = 10000;
unsigned short int var_1_63 = 1;
unsigned short int var_1_64 = 64;
unsigned long int var_1_65 = 4;
unsigned short int var_1_66 = 1;
unsigned short int var_1_67 = 4;
unsigned short int var_1_68 = 58974;
unsigned short int var_1_69 = 51216;
float var_1_70 = 15.5;
signed char var_1_71 = -8;
float var_1_73 = 63.5;
unsigned long int var_1_74 = 0;
float var_1_75 = 63.25;
float var_1_76 = 0.0;
float var_1_77 = 0.0;
float var_1_78 = 100.5;
float var_1_79 = 7.6;
signed short int var_1_80 = -128;
signed long int var_1_81 = 100;
signed long int var_1_82 = 2;
unsigned char var_1_83 = 2;
unsigned long int var_1_84 = 8;
signed char var_1_85 = 1;
unsigned short int var_1_86 = 5;
unsigned short int var_1_87 = 10000;
double var_1_88 = 3.8;
double var_1_89 = 4.65;
double var_1_90 = 10.4;
double var_1_91 = 10.6;
double var_1_92 = 63.85;
double var_1_93 = 10.4;
unsigned long int var_1_94 = 8;
unsigned char var_1_95 = 128;
signed char var_1_97 = -128;
signed char var_1_98 = 32;
signed char var_1_99 = -8;
signed char var_1_101 = 2;
signed char var_1_102 = 0;
double var_1_103 = 2.98;
unsigned short int var_1_104 = 4;
signed short int var_1_105 = 256;
unsigned long int var_1_106 = 256;
signed long int var_1_107 = -128;
signed short int var_1_108 = -5;
double var_1_109 = 999999.75;
signed long int var_1_110 = 16;
unsigned long int var_1_111 = 4;
double var_1_112 = 0.4;
unsigned char var_1_113 = 1;
unsigned short int var_1_114 = 1;
unsigned short int var_1_115 = 4;
signed char var_1_116 = 8;
double var_1_117 = 3.6;
double var_1_118 = 24.25;
unsigned short int var_1_119 = 8;
float var_1_120 = 2.8;
unsigned short int var_1_121 = 25;
signed char var_1_122 = 0;
unsigned short int var_1_123 = 16;
unsigned short int var_1_124 = 5;
unsigned long int var_1_125 = 200;
unsigned long int var_1_126 = 256;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_35 = 0;
signed long int last_1_var_1_61 = -100;
unsigned short int last_1_var_1_62 = 10000;
unsigned short int last_1_var_1_64 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch73Amount500
	var_1_25 = (min (var_1_14 , var_1_17));


	// From: Req6Batch73Amount500
	signed char stepLocal_2 = var_1_17;
	if (stepLocal_2 > var_1_15) {
		var_1_26 = (var_1_27 - var_1_28);
	}


	// From: Req9Batch73Amount500
	unsigned long int stepLocal_3 = var_1_6;
	if ((var_1_30 - var_1_18) < stepLocal_3) {
		var_1_34 = (abs (min ((max (var_1_4 , var_1_17)) , var_1_16)));
	}


	// From: Req17Batch73Amount500
	var_1_56 = var_1_41;


	// From: Req24Batch73Amount500
	signed long int stepLocal_13 = max (256 , (~ var_1_17));
	if (stepLocal_13 < (var_1_63 / var_1_59)) {
		if (var_1_26 >= var_1_28) {
			var_1_71 = (max ((max ((var_1_15 + var_1_54) , (var_1_59 + var_1_12))) , var_1_18));
		} else {
			if (((- var_1_49) / var_1_73) < -0.5f) {
				var_1_71 = (max (var_1_17 , var_1_14));
			}
		}
	}


	// From: Req26Batch73Amount500
	var_1_75 = ((var_1_76 - 256.9f) - (max ((var_1_77 - var_1_78) , var_1_39)));


	// From: Req27Batch73Amount500
	if ((abs (min (var_1_65 , var_1_63))) <= var_1_36) {
		var_1_79 = (abs (var_1_22));
	}


	// From: Req28Batch73Amount500
	unsigned char stepLocal_14 = var_1_59;
	if (var_1_68 < stepLocal_14) {
		var_1_80 = (abs (1));
	}


	// From: Req30Batch73Amount500
	if ((var_1_11 >= (var_1_28 - var_1_39)) && var_1_56) {
		var_1_83 = var_1_17;
	} else {
		var_1_83 = (min (var_1_59 , (var_1_18 + var_1_17)));
	}


	// From: Req31Batch73Amount500
	var_1_84 = (max ((var_1_17 + 1u) , var_1_5));


	// From: Req39Batch73Amount500
	if (var_1_11 > var_1_76) {
		var_1_101 = (var_1_99 + (max ((var_1_98 + var_1_59) , (max (var_1_54 , -1)))));
	} else {
		var_1_101 = (max (var_1_65 , var_1_18));
	}


	// From: Req42Batch73Amount500
	var_1_105 = var_1_16;


	// From: Req43Batch73Amount500
	var_1_106 = var_1_87;


	// From: Req45Batch73Amount500
	var_1_108 = var_1_67;


	// From: Req46Batch73Amount500
	var_1_109 = var_1_39;


	// From: Req47Batch73Amount500
	if (var_1_41) {
		var_1_110 = var_1_14;
	}


	// From: Req48Batch73Amount500
	if (var_1_41) {
		var_1_111 = var_1_17;
	}


	// From: Req49Batch73Amount500
	var_1_112 = var_1_39;


	// From: Req50Batch73Amount500
	var_1_113 = var_1_41;


	// From: Req52Batch73Amount500
	var_1_115 = var_1_59;


	// From: Req53Batch73Amount500
	if (var_1_113) {
		var_1_116 = var_1_102;
	} else {
		var_1_116 = var_1_17;
	}


	// From: Req54Batch73Amount500
	var_1_117 = var_1_49;


	// From: Req55Batch73Amount500
	var_1_118 = 0.6;


	// From: Req58Batch73Amount500
	if (var_1_51) {
		var_1_121 = var_1_66;
	}


	// From: Req61Batch73Amount500
	var_1_125 = var_1_3;


	// From: Req62Batch73Amount500
	var_1_126 = var_1_98;


	// From: Req10Batch73Amount500
	unsigned long int stepLocal_6 = var_1_111;
	signed long int stepLocal_5 = (var_1_36 - var_1_16) % var_1_33;
	unsigned long int stepLocal_4 = var_1_5;
	if ((var_1_16 * last_1_var_1_35) <= stepLocal_6) {
		if (stepLocal_5 > last_1_var_1_35) {
			if (stepLocal_4 != var_1_111) {
				if (4.4 > ((var_1_38 + var_1_39) - var_1_27)) {
					var_1_35 = (last_1_var_1_35 - var_1_16);
				} else {
					var_1_35 = ((var_1_18 + var_1_17) - last_1_var_1_35);
				}
			}
		} else {
			var_1_35 = var_1_33;
		}
	} else {
		var_1_35 = var_1_36;
	}


	// From: Req11Batch73Amount500
	unsigned char stepLocal_7 = var_1_56;
	if (var_1_113 || stepLocal_7) {
		var_1_40 = (! var_1_41);
	}


	// From: Req13Batch73Amount500
	if ((var_1_6 / var_1_43) <= (max (var_1_84 , (min (var_1_3 , 4u))))) {
		if (var_1_40 || (var_1_17 <= var_1_84)) {
			var_1_44 = ((max ((abs (var_1_22)) , var_1_21)) + (max (var_1_45 , var_1_46)));
		} else {
			var_1_44 = var_1_46;
		}
	} else {
		var_1_44 = (var_1_21 + ((max (var_1_47 , var_1_48)) + (var_1_49 + 32.6f)));
	}


	// From: Req15Batch73Amount500
	if (var_1_40) {
		var_1_52 = ((var_1_53 + var_1_54) + -50);
	} else {
		if (var_1_41) {
			var_1_52 = (min (var_1_13 , (min (var_1_18 , var_1_16))));
		} else {
			var_1_52 = (max ((32 + var_1_54) , (var_1_14 + var_1_17)));
		}
	}


	// From: Req16Batch73Amount500
	unsigned long int stepLocal_10 = var_1_16 / var_1_4;
	if (stepLocal_10 >= 128u) {
		var_1_55 = (max (var_1_106 , var_1_4));
	} else {
		var_1_55 = (var_1_43 + (min ((var_1_84 + var_1_16) , (var_1_4 - var_1_5))));
	}


	// From: Req19Batch73Amount500
	if (32 <= (max (var_1_111 , var_1_18))) {
		var_1_58 = (min ((128 - 32) , var_1_18));
	} else {
		if (var_1_56) {
			var_1_58 = (128 - var_1_16);
		} else {
			var_1_58 = (min ((var_1_16 + (var_1_59 + var_1_17)) , var_1_18));
		}
	}


	// From: Req23Batch73Amount500
	unsigned char stepLocal_12 = var_1_113;
	if ((var_1_59 > 50) && stepLocal_12) {
		var_1_70 = (var_1_28 - var_1_27);
	}


	// From: Req34Batch73Amount500
	if (255.5f < (var_1_11 - var_1_76)) {
		var_1_88 = (((var_1_89 + 256.875) + (var_1_90 + 16.375)) - var_1_38);
	} else {
		if (! var_1_40) {
			var_1_88 = ((var_1_77 - var_1_90) - 5.2);
		}
	}


	// From: Req40Batch73Amount500
	unsigned char stepLocal_25 = var_1_55 >= var_1_125;
	unsigned char stepLocal_24 = var_1_40;
	if (stepLocal_25 && ((~ 1) >= var_1_14)) {
		if (var_1_112 == var_1_48) {
			var_1_103 = (var_1_78 + var_1_92);
		}
	} else {
		if (var_1_56 && stepLocal_24) {
			var_1_103 = (max ((min (var_1_39 , var_1_46)) , var_1_92));
		} else {
			var_1_103 = (var_1_21 + (var_1_89 - var_1_90));
		}
	}


	// From: Req41Batch73Amount500
	if (! var_1_51) {
		var_1_104 = var_1_121;
	} else {
		var_1_104 = 5;
	}


	// From: Req59Batch73Amount500
	if (var_1_40) {
		var_1_122 = -4;
	}


	// From: Req1Batch73Amount500
	if (var_1_40) {
		var_1_1 = (var_1_3 + ((var_1_4 - var_1_5) - var_1_6));
	}


	// From: Req2Batch73Amount500
	if ((min ((min (var_1_103 , var_1_118)) , -0.6)) == (var_1_10 - var_1_11)) {
		var_1_7 = (max ((4 + var_1_12) , (min (var_1_13 , (var_1_14 + var_1_15)))));
	} else {
		var_1_7 = ((var_1_16 - var_1_17) - var_1_18);
	}


	// From: Req3Batch73Amount500
	if ((! var_1_40) && var_1_113) {
		var_1_19 = (var_1_21 + var_1_22);
	}


	// From: Req18Batch73Amount500
	if (var_1_48 <= var_1_88) {
		var_1_57 = (var_1_43 + var_1_18);
	}


	// From: Req20Batch73Amount500
	if (var_1_70 <= var_1_28) {
		var_1_61 = (min (last_1_var_1_61 , var_1_12));
	} else {
		var_1_61 = (var_1_59 - var_1_17);
	}


	// From: Req37Batch73Amount500
	unsigned long int stepLocal_18 = var_1_1 * var_1_111;
	if (! ((var_1_104 * var_1_126) != var_1_105)) {
		if (stepLocal_18 <= var_1_87) {
			var_1_95 = (max (var_1_59 , var_1_65));
		}
	}


	// From: Req7Batch73Amount500
	if (var_1_109 <= (max (var_1_10 , (max (var_1_22 , var_1_117))))) {
		var_1_29 = ((min ((max (16u , var_1_3)) , var_1_16)) + var_1_61);
	} else {
		var_1_29 = (min ((var_1_30 - var_1_3) , (max (var_1_4 , (4097190835u - var_1_16)))));
	}


	// From: Req14Batch73Amount500
	unsigned long int stepLocal_9 = - var_1_29;
	signed long int stepLocal_8 = - var_1_17;
	if ((var_1_5 + var_1_55) > stepLocal_9) {
		if (var_1_41) {
			if (stepLocal_8 > var_1_13) {
				var_1_50 = (! (var_1_40 && var_1_51));
			}
		}
	} else {
		var_1_50 = (! var_1_51);
	}


	// From: Req29Batch73Amount500
	if (var_1_88 != var_1_10) {
		var_1_81 = (max (var_1_17 , (var_1_29 + var_1_82)));
	} else {
		var_1_81 = var_1_68;
	}


	// From: Req32Batch73Amount500
	unsigned char stepLocal_16 = var_1_40;
	unsigned long int stepLocal_15 = (var_1_29 % var_1_16) + var_1_126;
	if (stepLocal_15 == var_1_65) {
		if (((max (-256 , var_1_67)) > var_1_33) && stepLocal_16) {
			var_1_85 = (abs (var_1_18));
		} else {
			var_1_85 = var_1_18;
		}
	}


	// From: Req44Batch73Amount500
	if (var_1_50) {
		var_1_107 = var_1_18;
	}


	// From: Req51Batch73Amount500
	if (var_1_50) {
		var_1_114 = var_1_36;
	} else {
		var_1_114 = var_1_17;
	}


	// From: Req56Batch73Amount500
	if (var_1_50) {
		var_1_119 = 2;
	}


	// From: Req57Batch73Amount500
	if (var_1_50) {
		var_1_120 = var_1_90;
	}


	// From: Req60Batch73Amount500
	signed char stepLocal_26 = var_1_98;
	if (stepLocal_26 > var_1_99) {
		var_1_123 = (var_1_87 + var_1_59);
	} else {
		var_1_123 = (var_1_124 + (var_1_67 + var_1_81));
	}


	// From: Req4Batch73Amount500
	signed char stepLocal_1 = var_1_18;
	unsigned long int stepLocal_0 = var_1_126 / (max (var_1_16 , var_1_4));
	if (stepLocal_0 <= var_1_29) {
		if (var_1_6 < stepLocal_1) {
			var_1_23 = (var_1_17 + (min (var_1_16 , var_1_18)));
		} else {
			var_1_23 = 100;
		}
	} else {
		var_1_23 = 32;
	}


	// From: Req21Batch73Amount500
	signed long int stepLocal_11 = var_1_43 / (max (var_1_36 , -16));
	if (stepLocal_11 >= var_1_34) {
		if (var_1_112 > var_1_47) {
			var_1_62 = ((min ((var_1_43 + 31665) , 41982)) - last_1_var_1_62);
		} else {
			if (var_1_113) {
				var_1_62 = ((var_1_43 + 24095) - (max (last_1_var_1_62 , var_1_63)));
			} else {
				if (var_1_50) {
					var_1_62 = (max ((var_1_43 + var_1_23) , var_1_36));
				} else {
					var_1_62 = (min (10 , var_1_17));
				}
			}
		}
	}


	// From: Req22Batch73Amount500
	if ((var_1_16 >> var_1_65) <= -4) {
		if (var_1_22 < (var_1_21 * var_1_120)) {
			var_1_64 = 256;
		} else {
			var_1_64 = ((var_1_18 + var_1_65) + (var_1_66 + (max (var_1_67 , var_1_16))));
		}
	} else {
		if ((- var_1_18) == var_1_63) {
			if (((- var_1_66) > var_1_34) && var_1_56) {
				if (var_1_34 <= ((var_1_68 - var_1_63) / (abs (var_1_16)))) {
					var_1_64 = (min (last_1_var_1_64 , ((var_1_69 - var_1_65) - (max (var_1_43 , var_1_36)))));
				}
			} else {
				var_1_64 = (var_1_69 - (var_1_43 - last_1_var_1_64));
			}
		} else {
			var_1_64 = var_1_16;
		}
	}


	// From: Req25Batch73Amount500
	var_1_74 = var_1_64;


	// From: Req33Batch73Amount500
	unsigned short int stepLocal_17 = var_1_67;
	if (var_1_40) {
		var_1_86 = (((var_1_87 - var_1_17) + var_1_36) + var_1_65);
	} else {
		if (var_1_45 >= var_1_109) {
			if (var_1_27 == var_1_26) {
				var_1_86 = (min ((abs (var_1_43)) , (max (var_1_87 , var_1_16))));
			} else {
				var_1_86 = (min ((var_1_69 - (max (var_1_67 , var_1_59))) , var_1_87));
			}
		} else {
			if (var_1_30 <= stepLocal_17) {
				var_1_86 = (var_1_67 + var_1_61);
			} else {
				var_1_86 = (var_1_69 - var_1_23);
			}
		}
	}


	// From: Req38Batch73Amount500
	unsigned long int stepLocal_23 = var_1_84;
	signed long int stepLocal_22 = var_1_33 ^ (abs (var_1_15));
	unsigned long int stepLocal_21 = (abs (var_1_87)) / (min (var_1_68 , var_1_65));
	unsigned char stepLocal_20 = var_1_51;
	unsigned long int stepLocal_19 = (var_1_107 * 8u) / (max (var_1_65 , var_1_59));
	if (var_1_22 < (- var_1_49)) {
		if (var_1_106 != stepLocal_19) {
			var_1_97 = ((min (var_1_59 , var_1_17)) - var_1_65);
		} else {
			if (stepLocal_21 > var_1_63) {
				if (var_1_55 >= stepLocal_23) {
					if (var_1_12 >= stepLocal_22) {
						var_1_97 = (var_1_17 - ((var_1_98 + var_1_59) + var_1_65));
					}
				} else {
					if (var_1_118 > var_1_77) {
						var_1_97 = (max (var_1_65 , (max (var_1_18 , (var_1_12 + var_1_99)))));
					}
				}
			} else {
				if (((abs (var_1_32)) <= (~ var_1_61)) && stepLocal_20) {
					var_1_97 = (var_1_16 - var_1_17);
				}
			}
		}
	} else {
		var_1_97 = ((max (var_1_16 , (var_1_17 + var_1_59))) - var_1_65);
	}


	// From: Req8Batch73Amount500
	if (var_1_112 > var_1_27) {
		if (var_1_50) {
			var_1_31 = (min (var_1_14 , var_1_86));
		} else {
			if (((var_1_13 % var_1_16) / (min (var_1_32 , var_1_33))) == var_1_84) {
				var_1_31 = var_1_6;
			} else {
				if (var_1_40) {
					var_1_31 = var_1_15;
				}
			}
		}
	}


	// From: Req12Batch73Amount500
	if ((abs (var_1_14)) >= var_1_4) {
		var_1_42 = ((abs (var_1_17)) + (var_1_43 - var_1_62));
	}


	// From: Req35Batch73Amount500
	if ((var_1_65 * 64) <= var_1_126) {
		if (128 <= var_1_17) {
			if ((var_1_31 + var_1_126) <= var_1_63) {
				var_1_91 = (((var_1_49 + var_1_92) + var_1_89) + (var_1_47 + (var_1_93 + 200.75)));
			}
		} else {
			if (var_1_26 >= (- var_1_103)) {
				var_1_91 = (max ((9.9999999999993E12 - (var_1_90 + 16.25)) , var_1_89));
			} else {
				var_1_91 = (var_1_92 + var_1_89);
			}
		}
	} else {
		if (var_1_40) {
			var_1_91 = (63.44 + var_1_47);
		} else {
			var_1_91 = (var_1_49 + (abs (max (9.999999962E7 , var_1_89))));
		}
	}


	// From: Req36Batch73Amount500
	if (var_1_40 && ((max (var_1_109 , var_1_49)) < var_1_91)) {
		var_1_94 = (var_1_30 - var_1_3);
	} else {
		if (var_1_76 <= (var_1_27 * var_1_45)) {
			var_1_94 = (abs (var_1_67));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1610612735);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 536870912);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 62);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 255);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427388000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427388000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -230584.3009213691400e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -115292.1504606845700e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 1152921.504606845700e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -31);
	assume_abort_if_not(var_1_53 <= 32);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -31);
	assume_abort_if_not(var_1_54 <= 31);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 31);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 32767);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 6);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 16384);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 16383);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 32767);
	assume_abort_if_not(var_1_68 <= 65535);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 49150);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -922337.2036854776000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854776000e+12F && var_1_73 >= 1.0e-20F ));
	assume_abort_if_not(var_1_73 != 0.0F);
	var_1_76 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_76 >= 4611686.018427383000e+12F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854766000e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= 4611686.018427383000e+12F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854766000e+12F && var_1_77 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= 0.0F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427383000e+12F && var_1_78 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= -1073741823);
	assume_abort_if_not(var_1_82 <= 1073741823);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 8192);
	assume_abort_if_not(var_1_87 <= 16384);
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691400e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691400e+12F && var_1_90 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= -115292.1504606845700e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 1152921.504606845700e+12F && var_1_92 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_93 >= -115292.1504606845700e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 1152921.504606845700e+12F && var_1_93 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 32);
	var_1_99 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_99 >= -63);
	assume_abort_if_not(var_1_99 <= 63);
	var_1_102 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_102 >= -15);
	assume_abort_if_not(var_1_102 <= 16);
	var_1_124 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_64 = var_1_64;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_40 ? (var_1_1 == ((unsigned long int) (var_1_3 + ((var_1_4 - var_1_5) - var_1_6)))) : 1) && (((min ((min (var_1_103 , var_1_118)) , -0.6)) == (var_1_10 - var_1_11)) ? (var_1_7 == ((signed char) (max ((4 + var_1_12) , (min (var_1_13 , (var_1_14 + var_1_15))))))) : (var_1_7 == ((signed char) ((var_1_16 - var_1_17) - var_1_18))))) && (((! var_1_40) && var_1_113) ? (var_1_19 == ((float) (var_1_21 + var_1_22))) : 1)) && (((var_1_126 / (max (var_1_16 , var_1_4))) <= var_1_29) ? ((var_1_6 < var_1_18) ? (var_1_23 == ((unsigned char) (var_1_17 + (min (var_1_16 , var_1_18))))) : (var_1_23 == ((unsigned char) 100))) : (var_1_23 == ((unsigned char) 32)))) && (var_1_25 == ((signed char) (min (var_1_14 , var_1_17))))) && ((var_1_17 > var_1_15) ? (var_1_26 == ((double) (var_1_27 - var_1_28))) : 1)) && ((var_1_109 <= (max (var_1_10 , (max (var_1_22 , var_1_117))))) ? (var_1_29 == ((unsigned long int) ((min ((max (16u , var_1_3)) , var_1_16)) + var_1_61))) : (var_1_29 == ((unsigned long int) (min ((var_1_30 - var_1_3) , (max (var_1_4 , (4097190835u - var_1_16))))))))) && ((var_1_112 > var_1_27) ? (var_1_50 ? (var_1_31 == ((signed long int) (min (var_1_14 , var_1_86)))) : ((((var_1_13 % var_1_16) / (min (var_1_32 , var_1_33))) == var_1_84) ? (var_1_31 == ((signed long int) var_1_6)) : (var_1_40 ? (var_1_31 == ((signed long int) var_1_15)) : 1))) : 1)) && (((var_1_30 - var_1_18) < var_1_6) ? (var_1_34 == ((unsigned long int) (abs (min ((max (var_1_4 , var_1_17)) , var_1_16))))) : 1)) && (((var_1_16 * last_1_var_1_35) <= var_1_111) ? ((((var_1_36 - var_1_16) % var_1_33) > last_1_var_1_35) ? ((var_1_5 != var_1_111) ? ((4.4 > ((var_1_38 + var_1_39) - var_1_27)) ? (var_1_35 == ((signed short int) (last_1_var_1_35 - var_1_16))) : (var_1_35 == ((signed short int) ((var_1_18 + var_1_17) - last_1_var_1_35)))) : 1) : (var_1_35 == ((signed short int) var_1_33))) : (var_1_35 == ((signed short int) var_1_36)))) && ((var_1_113 || var_1_56) ? (var_1_40 == ((unsigned char) (! var_1_41))) : 1)) && (((abs (var_1_14)) >= var_1_4) ? (var_1_42 == ((unsigned short int) ((abs (var_1_17)) + (var_1_43 - var_1_62)))) : 1)) && (((var_1_6 / var_1_43) <= (max (var_1_84 , (min (var_1_3 , 4u))))) ? ((var_1_40 || (var_1_17 <= var_1_84)) ? (var_1_44 == ((float) ((max ((abs (var_1_22)) , var_1_21)) + (max (var_1_45 , var_1_46))))) : (var_1_44 == ((float) var_1_46))) : (var_1_44 == ((float) (var_1_21 + ((max (var_1_47 , var_1_48)) + (var_1_49 + 32.6f))))))) && (((var_1_5 + var_1_55) > (- var_1_29)) ? (var_1_41 ? (((- var_1_17) > var_1_13) ? (var_1_50 == ((unsigned char) (! (var_1_40 && var_1_51)))) : 1) : 1) : (var_1_50 == ((unsigned char) (! var_1_51))))) && (var_1_40 ? (var_1_52 == ((signed char) ((var_1_53 + var_1_54) + -50))) : (var_1_41 ? (var_1_52 == ((signed char) (min (var_1_13 , (min (var_1_18 , var_1_16)))))) : (var_1_52 == ((signed char) (max ((32 + var_1_54) , (var_1_14 + var_1_17)))))))) && (((var_1_16 / var_1_4) >= 128u) ? (var_1_55 == ((unsigned long int) (max (var_1_106 , var_1_4)))) : (var_1_55 == ((unsigned long int) (var_1_43 + (min ((var_1_84 + var_1_16) , (var_1_4 - var_1_5)))))))) && (var_1_56 == ((unsigned char) var_1_41))) && ((var_1_48 <= var_1_88) ? (var_1_57 == ((unsigned short int) (var_1_43 + var_1_18))) : 1)) && ((32 <= (max (var_1_111 , var_1_18))) ? (var_1_58 == ((unsigned char) (min ((128 - 32) , var_1_18)))) : (var_1_56 ? (var_1_58 == ((unsigned char) (128 - var_1_16))) : (var_1_58 == ((unsigned char) (min ((var_1_16 + (var_1_59 + var_1_17)) , var_1_18))))))) && ((var_1_70 <= var_1_28) ? (var_1_61 == ((signed long int) (min (last_1_var_1_61 , var_1_12)))) : (var_1_61 == ((signed long int) (var_1_59 - var_1_17))))) && (((var_1_43 / (max (var_1_36 , -16))) >= var_1_34) ? ((var_1_112 > var_1_47) ? (var_1_62 == ((unsigned short int) ((min ((var_1_43 + 31665) , 41982)) - last_1_var_1_62))) : (var_1_113 ? (var_1_62 == ((unsigned short int) ((var_1_43 + 24095) - (max (last_1_var_1_62 , var_1_63))))) : (var_1_50 ? (var_1_62 == ((unsigned short int) (max ((var_1_43 + var_1_23) , var_1_36)))) : (var_1_62 == ((unsigned short int) (min (10 , var_1_17))))))) : 1)) && (((var_1_16 >> var_1_65) <= -4) ? ((var_1_22 < (var_1_21 * var_1_120)) ? (var_1_64 == ((unsigned short int) 256)) : (var_1_64 == ((unsigned short int) ((var_1_18 + var_1_65) + (var_1_66 + (max (var_1_67 , var_1_16))))))) : (((- var_1_18) == var_1_63) ? ((((- var_1_66) > var_1_34) && var_1_56) ? ((var_1_34 <= ((var_1_68 - var_1_63) / (abs (var_1_16)))) ? (var_1_64 == ((unsigned short int) (min (last_1_var_1_64 , ((var_1_69 - var_1_65) - (max (var_1_43 , var_1_36))))))) : 1) : (var_1_64 == ((unsigned short int) (var_1_69 - (var_1_43 - last_1_var_1_64))))) : (var_1_64 == ((unsigned short int) var_1_16))))) && (((var_1_59 > 50) && var_1_113) ? (var_1_70 == ((float) (var_1_28 - var_1_27))) : 1)) && (((max (256 , (~ var_1_17))) < (var_1_63 / var_1_59)) ? ((var_1_26 >= var_1_28) ? (var_1_71 == ((signed char) (max ((max ((var_1_15 + var_1_54) , (var_1_59 + var_1_12))) , var_1_18)))) : ((((- var_1_49) / var_1_73) < -0.5f) ? (var_1_71 == ((signed char) (max (var_1_17 , var_1_14)))) : 1)) : 1)) && (var_1_74 == ((unsigned long int) var_1_64))) && (var_1_75 == ((float) ((var_1_76 - 256.9f) - (max ((var_1_77 - var_1_78) , var_1_39)))))) && (((abs (min (var_1_65 , var_1_63))) <= var_1_36) ? (var_1_79 == ((float) (abs (var_1_22)))) : 1)) && ((var_1_68 < var_1_59) ? (var_1_80 == ((signed short int) (abs (1)))) : 1)) && ((var_1_88 != var_1_10) ? (var_1_81 == ((signed long int) (max (var_1_17 , (var_1_29 + var_1_82))))) : (var_1_81 == ((signed long int) var_1_68)))) && (((var_1_11 >= (var_1_28 - var_1_39)) && var_1_56) ? (var_1_83 == ((unsigned char) var_1_17)) : (var_1_83 == ((unsigned char) (min (var_1_59 , (var_1_18 + var_1_17))))))) && (var_1_84 == ((unsigned long int) (max ((var_1_17 + 1u) , var_1_5))))) && ((((var_1_29 % var_1_16) + var_1_126) == var_1_65) ? ((((max (-256 , var_1_67)) > var_1_33) && var_1_40) ? (var_1_85 == ((signed char) (abs (var_1_18)))) : (var_1_85 == ((signed char) var_1_18))) : 1)) && (var_1_40 ? (var_1_86 == ((unsigned short int) (((var_1_87 - var_1_17) + var_1_36) + var_1_65))) : ((var_1_45 >= var_1_109) ? ((var_1_27 == var_1_26) ? (var_1_86 == ((unsigned short int) (min ((abs (var_1_43)) , (max (var_1_87 , var_1_16)))))) : (var_1_86 == ((unsigned short int) (min ((var_1_69 - (max (var_1_67 , var_1_59))) , var_1_87))))) : ((var_1_30 <= var_1_67) ? (var_1_86 == ((unsigned short int) (var_1_67 + var_1_61))) : (var_1_86 == ((unsigned short int) (var_1_69 - var_1_23))))))) && ((255.5f < (var_1_11 - var_1_76)) ? (var_1_88 == ((double) (((var_1_89 + 256.875) + (var_1_90 + 16.375)) - var_1_38))) : ((! var_1_40) ? (var_1_88 == ((double) ((var_1_77 - var_1_90) - 5.2))) : 1))) && (((var_1_65 * 64) <= var_1_126) ? ((128 <= var_1_17) ? (((var_1_31 + var_1_126) <= var_1_63) ? (var_1_91 == ((double) (((var_1_49 + var_1_92) + var_1_89) + (var_1_47 + (var_1_93 + 200.75))))) : 1) : ((var_1_26 >= (- var_1_103)) ? (var_1_91 == ((double) (max ((9.9999999999993E12 - (var_1_90 + 16.25)) , var_1_89)))) : (var_1_91 == ((double) (var_1_92 + var_1_89))))) : (var_1_40 ? (var_1_91 == ((double) (63.44 + var_1_47))) : (var_1_91 == ((double) (var_1_49 + (abs (max (9.999999962E7 , var_1_89))))))))) && ((var_1_40 && ((max (var_1_109 , var_1_49)) < var_1_91)) ? (var_1_94 == ((unsigned long int) (var_1_30 - var_1_3))) : ((var_1_76 <= (var_1_27 * var_1_45)) ? (var_1_94 == ((unsigned long int) (abs (var_1_67)))) : 1))) && ((! ((var_1_104 * var_1_126) != var_1_105)) ? (((var_1_1 * var_1_111) <= var_1_87) ? (var_1_95 == ((unsigned char) (max (var_1_59 , var_1_65)))) : 1) : 1)) && ((var_1_22 < (- var_1_49)) ? ((var_1_106 != ((var_1_107 * 8u) / (max (var_1_65 , var_1_59)))) ? (var_1_97 == ((signed char) ((min (var_1_59 , var_1_17)) - var_1_65))) : ((((abs (var_1_87)) / (min (var_1_68 , var_1_65))) > var_1_63) ? ((var_1_55 >= var_1_84) ? ((var_1_12 >= (var_1_33 ^ (abs (var_1_15)))) ? (var_1_97 == ((signed char) (var_1_17 - ((var_1_98 + var_1_59) + var_1_65)))) : 1) : ((var_1_118 > var_1_77) ? (var_1_97 == ((signed char) (max (var_1_65 , (max (var_1_18 , (var_1_12 + var_1_99))))))) : 1)) : ((((abs (var_1_32)) <= (~ var_1_61)) && var_1_51) ? (var_1_97 == ((signed char) (var_1_16 - var_1_17))) : 1))) : (var_1_97 == ((signed char) ((max (var_1_16 , (var_1_17 + var_1_59))) - var_1_65))))) && ((var_1_11 > var_1_76) ? (var_1_101 == ((signed char) (var_1_99 + (max ((var_1_98 + var_1_59) , (max (var_1_54 , -1))))))) : (var_1_101 == ((signed char) (max (var_1_65 , var_1_18)))))) && (((var_1_55 >= var_1_125) && ((~ 1) >= var_1_14)) ? ((var_1_112 == var_1_48) ? (var_1_103 == ((double) (var_1_78 + var_1_92))) : 1) : ((var_1_56 && var_1_40) ? (var_1_103 == ((double) (max ((min (var_1_39 , var_1_46)) , var_1_92)))) : (var_1_103 == ((double) (var_1_21 + (var_1_89 - var_1_90))))))) && ((! var_1_51) ? (var_1_104 == ((unsigned short int) var_1_121)) : (var_1_104 == ((unsigned short int) 5)))) && (var_1_105 == ((signed short int) var_1_16))) && (var_1_106 == ((unsigned long int) var_1_87))) && (var_1_50 ? (var_1_107 == ((signed long int) var_1_18)) : 1)) && (var_1_108 == ((signed short int) var_1_67))) && (var_1_109 == ((double) var_1_39))) && (var_1_41 ? (var_1_110 == ((signed long int) var_1_14)) : 1)) && (var_1_41 ? (var_1_111 == ((unsigned long int) var_1_17)) : 1)) && (var_1_112 == ((double) var_1_39))) && (var_1_113 == ((unsigned char) var_1_41))) && (var_1_50 ? (var_1_114 == ((unsigned short int) var_1_36)) : (var_1_114 == ((unsigned short int) var_1_17)))) && (var_1_115 == ((unsigned short int) var_1_59))) && (var_1_113 ? (var_1_116 == ((signed char) var_1_102)) : (var_1_116 == ((signed char) var_1_17)))) && (var_1_117 == ((double) var_1_49))) && (var_1_118 == ((double) 0.6))) && (var_1_50 ? (var_1_119 == ((unsigned short int) 2)) : 1)) && (var_1_50 ? (var_1_120 == ((float) var_1_90)) : 1)) && (var_1_51 ? (var_1_121 == ((unsigned short int) var_1_66)) : 1)) && (var_1_40 ? (var_1_122 == ((signed char) -4)) : 1)) && ((var_1_98 > var_1_99) ? (var_1_123 == ((unsigned short int) (var_1_87 + var_1_59))) : (var_1_123 == ((unsigned short int) (var_1_124 + (var_1_67 + var_1_81)))))) && (var_1_125 == ((unsigned long int) var_1_3))) && (var_1_126 == ((unsigned long int) var_1_98))
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
