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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 64.5;
double var_1_6 = 15.375;
float var_1_7 = 127.5;
float var_1_8 = 10000000000.6;
float var_1_9 = 0.0;
float var_1_10 = 50.7;
float var_1_11 = 63.75;
float var_1_13 = 0.0;
float var_1_14 = 24.8;
signed long int var_1_15 = 100;
signed short int var_1_16 = 8;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 16;
unsigned char var_1_20 = 200;
signed char var_1_21 = 1;
signed char var_1_22 = -32;
signed char var_1_23 = -8;
signed char var_1_24 = -8;
float var_1_25 = 63.275;
float var_1_26 = 4.6;
float var_1_27 = 49.375;
float var_1_28 = 255.7;
unsigned char var_1_29 = 8;
unsigned char var_1_30 = 200;
unsigned char var_1_31 = 200;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 10;
signed char var_1_34 = -5;
signed char var_1_35 = 1;
signed char var_1_36 = 32;
signed char var_1_37 = 25;
unsigned long int var_1_38 = 64;
signed char var_1_39 = -2;
signed char var_1_40 = 50;
signed char var_1_41 = 10;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
signed long int var_1_49 = 128;
signed long int var_1_50 = 8;
signed short int var_1_51 = 64;
unsigned long int var_1_52 = 50;
unsigned long int var_1_53 = 3930189625;
unsigned short int var_1_54 = 0;
unsigned short int var_1_55 = 59326;
unsigned short int var_1_56 = 40989;
unsigned char var_1_57 = 1;
double var_1_58 = 256.1;
double var_1_59 = 63.6;
unsigned char var_1_60 = 1;
signed char var_1_61 = 10;
unsigned char var_1_62 = 25;
unsigned char var_1_63 = 100;
unsigned short int var_1_64 = 32;
unsigned char var_1_65 = 1;
unsigned short int var_1_66 = 10;
unsigned short int var_1_67 = 24729;
unsigned short int var_1_68 = 10000;
unsigned short int var_1_69 = 128;
signed long int var_1_70 = -5;
signed short int var_1_71 = -16;
signed short int var_1_72 = 100;
signed short int var_1_73 = 16;
double var_1_74 = 100.5;
signed short int var_1_75 = 128;
signed long int var_1_76 = 1377317630;
signed short int var_1_77 = -4;
signed short int var_1_78 = 256;
signed long int var_1_79 = -10;
signed long int var_1_80 = 1200524499;
signed char var_1_81 = -64;
signed char var_1_82 = 8;
unsigned char var_1_83 = 2;
unsigned long int var_1_84 = 2;
unsigned long int var_1_85 = 1583862374;
unsigned long int var_1_86 = 1984563405;
signed short int var_1_87 = 32;
signed short int var_1_88 = -1000;
signed long int var_1_89 = -16;
signed long int var_1_90 = 1995440116;
unsigned char var_1_91 = 0;
unsigned long int var_1_92 = 2;
unsigned long int var_1_93 = 4;
signed short int var_1_94 = -16;
signed char var_1_95 = -1;
signed short int var_1_96 = -1;
signed short int var_1_97 = 4;
unsigned char var_1_98 = 0;
unsigned long int var_1_99 = 25;
signed char var_1_100 = -16;
unsigned char var_1_101 = 200;
signed char var_1_102 = 10;
float var_1_103 = 99.6;
unsigned short int var_1_104 = 32;
unsigned long int var_1_105 = 100;
float var_1_106 = 1.6;
signed short int var_1_107 = 500;
signed short int var_1_108 = 4;
signed long int var_1_109 = 64;
unsigned char var_1_110 = 50;
signed long int var_1_111 = 5;
unsigned long int var_1_112 = 25;
unsigned long int var_1_113 = 50;
double var_1_114 = 1.4;
unsigned char var_1_115 = 16;
unsigned long int var_1_116 = 256;
unsigned char var_1_117 = 10;
signed short int var_1_118 = -8;
unsigned short int var_1_119 = 8;
signed long int var_1_120 = -64;
unsigned long int var_1_121 = 0;
unsigned long int var_1_122 = 50;
unsigned char var_1_123 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_38 = 64;
double last_1_var_1_58 = 256.1;
unsigned char last_1_var_1_62 = 25;
unsigned short int last_1_var_1_66 = 10;
signed short int last_1_var_1_75 = 128;
unsigned long int last_1_var_1_84 = 2;
signed char last_1_var_1_100 = -16;
signed short int last_1_var_1_107 = 500;
signed long int last_1_var_1_111 = 5;
unsigned short int last_1_var_1_119 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch133Amount500
	signed long int stepLocal_23 = var_1_50;
	signed long int stepLocal_22 = var_1_90 / var_1_32;
	if (stepLocal_22 > ((abs (last_1_var_1_100)) >> (min (var_1_92 , var_1_93)))) {
		if (var_1_20 <= stepLocal_23) {
			var_1_91 = (var_1_46 && (! var_1_48));
		} else {
			var_1_91 = (var_1_45 && var_1_43);
		}
	} else {
		var_1_91 = (var_1_44 || var_1_43);
	}


	// From: Req12Batch133Amount500
	if (! var_1_91) {
		if ((abs (var_1_14)) == 10000.4f) {
			var_1_42 = ((var_1_43 && var_1_44) && (var_1_45 && var_1_46));
		} else {
			var_1_42 = ((! var_1_45) || (var_1_47 || var_1_48));
		}
	} else {
		var_1_42 = (var_1_43 && (! var_1_45));
	}


	// From: Req24Batch133Amount500
	unsigned long int stepLocal_14 = last_1_var_1_38;
	signed long int stepLocal_13 = last_1_var_1_107;
	if (last_1_var_1_84 >= stepLocal_14) {
		var_1_66 = ((last_1_var_1_66 + last_1_var_1_111) + var_1_40);
	} else {
		if (var_1_50 == stepLocal_13) {
			if (last_1_var_1_58 == (- 8.8)) {
				var_1_66 = ((var_1_67 - (var_1_68 - var_1_20)) + (50 + var_1_19));
			} else {
				var_1_66 = var_1_69;
			}
		} else {
			var_1_66 = (max (var_1_55 , var_1_41));
		}
	}


	// From: Req6Batch133Amount500
	if (var_1_9 < ((var_1_8 - var_1_10) + (var_1_13 - var_1_26))) {
		var_1_25 = (min ((max (var_1_10 , var_1_7)) , ((200.25f + var_1_27) + (max (var_1_8 , var_1_9)))));
	} else {
		var_1_25 = (max (99.5f , var_1_27));
	}


	// From: Req7Batch133Amount500
	var_1_28 = ((5.182401363462702E18f - var_1_8) - var_1_10);


	// From: Req11Batch133Amount500
	var_1_39 = (var_1_36 + ((var_1_40 - var_1_41) - 25));


	// From: Req16Batch133Amount500
	var_1_54 = (max ((max ((var_1_31 + var_1_30) , (58578 - 1))) , ((min (var_1_55 , var_1_56)) - var_1_41)));


	// From: Req17Batch133Amount500
	signed long int stepLocal_9 = (max (100 , 1)) << var_1_24;
	if (var_1_41 <= stepLocal_9) {
		var_1_57 = ((min (128 , (200 - var_1_35))) - var_1_32);
	}


	// From: Req19Batch133Amount500
	var_1_60 = (var_1_40 + (abs (32)));


	// From: Req22Batch133Amount500
	if (var_1_44) {
		var_1_64 = (abs (var_1_31));
	} else {
		var_1_64 = (min ((abs (min (var_1_37 , var_1_35))) , ((max (var_1_40 , var_1_32)) + (24823 - var_1_19))));
	}


	// From: Req31Batch133Amount500
	if (((var_1_73 % var_1_20) / var_1_40) > var_1_23) {
		if (var_1_91) {
			var_1_83 = (var_1_41 + (max (var_1_35 , var_1_37)));
		}
	}


	// From: Req33Batch133Amount500
	var_1_87 = (min (var_1_23 , (var_1_83 + var_1_88)));


	// From: Req39Batch133Amount500
	var_1_98 = (! (! var_1_48));


	// From: Req40Batch133Amount500
	if (! var_1_44) {
		var_1_99 = (var_1_63 + var_1_36);
	}


	// From: Req42Batch133Amount500
	var_1_102 = var_1_35;


	// From: Req43Batch133Amount500
	var_1_103 = var_1_8;


	// From: Req44Batch133Amount500
	var_1_104 = var_1_55;


	// From: Req45Batch133Amount500
	var_1_105 = 64u;


	// From: Req46Batch133Amount500
	var_1_106 = var_1_14;


	// From: Req47Batch133Amount500
	if (var_1_47) {
		var_1_107 = var_1_108;
	} else {
		var_1_107 = var_1_40;
	}


	// From: Req49Batch133Amount500
	var_1_110 = var_1_35;


	// From: Req51Batch133Amount500
	var_1_112 = var_1_41;


	// From: Req52Batch133Amount500
	if (var_1_48) {
		var_1_113 = var_1_76;
	}


	// From: Req53Batch133Amount500
	if (var_1_43) {
		var_1_114 = var_1_8;
	}


	// From: Req54Batch133Amount500
	var_1_115 = var_1_30;


	// From: Req55Batch133Amount500
	if (var_1_45) {
		var_1_116 = var_1_92;
	}


	// From: Req58Batch133Amount500
	signed long int stepLocal_28 = var_1_78 / var_1_55;
	if (stepLocal_28 > var_1_105) {
		var_1_119 = (last_1_var_1_119 + var_1_97);
	}


	// From: Req59Batch133Amount500
	var_1_120 = 128;


	// From: Req60Batch133Amount500
	var_1_121 = var_1_122;


	// From: Req61Batch133Amount500
	var_1_123 = var_1_44;


	// From: Req9Batch133Amount500
	signed long int stepLocal_3 = var_1_16 * (var_1_87 / var_1_31);
	if (stepLocal_3 >= (var_1_30 + var_1_24)) {
		if (! (var_1_13 <= var_1_27)) {
			var_1_34 = (var_1_33 + ((min (var_1_35 , var_1_36)) - var_1_37));
		}
	} else {
		if (var_1_91) {
			var_1_34 = var_1_37;
		} else {
			var_1_34 = var_1_23;
		}
	}


	// From: Req15Batch133Amount500
	if (! (var_1_114 == var_1_13)) {
		var_1_52 = (var_1_53 - var_1_120);
	} else {
		var_1_52 = (abs (var_1_32 + var_1_31));
	}


	// From: Req20Batch133Amount500
	unsigned long int stepLocal_10 = min (var_1_121 , (var_1_33 & -1000000000));
	if ((var_1_41 & var_1_50) <= stepLocal_10) {
		var_1_61 = (min (var_1_37 , 0));
	} else {
		var_1_61 = var_1_23;
	}


	// From: Req23Batch133Amount500
	if ((var_1_8 - (var_1_13 - var_1_59)) >= var_1_103) {
		var_1_65 = (! (var_1_47 || var_1_48));
	} else {
		var_1_65 = (var_1_123 && var_1_48);
	}


	// From: Req27Batch133Amount500
	if (var_1_123 || var_1_91) {
		var_1_74 = (var_1_9 + var_1_10);
	} else {
		if (var_1_10 >= 0.25f) {
			var_1_74 = (var_1_9 - var_1_59);
		} else {
			var_1_74 = (var_1_8 - var_1_59);
		}
	}


	// From: Req36Batch133Amount500
	if (! var_1_123) {
		if (var_1_98) {
			var_1_94 = (var_1_35 + var_1_32);
		} else {
			var_1_94 = var_1_30;
		}
	}


	// From: Req37Batch133Amount500
	unsigned long int stepLocal_25 = var_1_105 + var_1_67;
	unsigned char stepLocal_24 = var_1_88 > var_1_82;
	if (var_1_123 || stepLocal_24) {
		if (var_1_77 < stepLocal_25) {
			var_1_95 = ((abs (var_1_82)) + (var_1_93 + var_1_41));
		} else {
			var_1_95 = ((min (var_1_35 , var_1_93)) - var_1_36);
		}
	}


	// From: Req50Batch133Amount500
	if (var_1_46) {
		var_1_111 = var_1_119;
	}


	// From: Req56Batch133Amount500
	if (var_1_65) {
		var_1_117 = var_1_37;
	} else {
		var_1_117 = var_1_32;
	}


	// From: Req57Batch133Amount500
	if (var_1_123) {
		var_1_118 = 4;
	} else {
		var_1_118 = -1;
	}


	// From: Req32Batch133Amount500
	if (var_1_55 > var_1_66) {
		if (var_1_65) {
			if (var_1_91) {
				var_1_84 = (abs ((var_1_76 + var_1_85) - (max (256u , var_1_19))));
			} else {
				var_1_84 = var_1_99;
			}
		} else {
			if (1 > ((var_1_35 << last_1_var_1_84) / (max (var_1_63 , var_1_56)))) {
				var_1_84 = (min (var_1_63 , var_1_53));
			} else {
				var_1_84 = ((max (var_1_53 , (var_1_85 + var_1_86))) - 2u);
			}
		}
	} else {
		var_1_84 = (var_1_53 - var_1_31);
	}


	// From: Req1Batch133Amount500
	if (var_1_42 && var_1_123) {
		if (var_1_114 <= ((10.5 + var_1_74) / var_1_6)) {
			var_1_1 = (var_1_7 + 255.2f);
		}
	} else {
		var_1_1 = ((var_1_8 - (var_1_9 - var_1_10)) + (max (256.4f , 64.6f)));
	}


	// From: Req2Batch133Amount500
	if (var_1_65 || var_1_98) {
		var_1_11 = var_1_8;
	} else {
		if (var_1_10 >= (var_1_8 - (var_1_13 - var_1_9))) {
			if (var_1_8 < -0.875f) {
				var_1_11 = (min (var_1_14 , var_1_10));
			} else {
				var_1_11 = (min (var_1_7 , var_1_10));
			}
		}
	}


	// From: Req5Batch133Amount500
	unsigned long int stepLocal_2 = var_1_52;
	if (stepLocal_2 > var_1_19) {
		var_1_21 = (max (var_1_22 , -32));
	} else {
		var_1_21 = (max ((min (var_1_22 , var_1_23)) , var_1_24));
	}


	// From: Req8Batch133Amount500
	if (var_1_27 >= (max (var_1_13 , var_1_74))) {
		if (var_1_6 > var_1_74) {
			var_1_29 = ((max (var_1_20 , (min (var_1_30 , var_1_31)))) - (var_1_32 - var_1_33));
		} else {
			var_1_29 = (max (16 , var_1_33));
		}
	}


	// From: Req10Batch133Amount500
	signed char stepLocal_4 = var_1_39;
	if (var_1_30 != stepLocal_4) {
		var_1_38 = ((var_1_118 + var_1_32) + var_1_35);
	}


	// From: Req18Batch133Amount500
	if (((var_1_59 + 7.9) - var_1_10) > (- var_1_11)) {
		var_1_58 = (var_1_27 + var_1_10);
	}


	// From: Req26Batch133Amount500
	if (var_1_33 <= var_1_68) {
		if (var_1_74 < (min (3.625 , var_1_74))) {
			var_1_71 = ((23851 - (var_1_68 - 1)) - (max (var_1_19 , var_1_41)));
		} else {
			if (var_1_7 == var_1_59) {
				var_1_71 = (var_1_37 + ((abs (var_1_19)) - var_1_36));
			}
		}
	} else {
		var_1_71 = ((max ((var_1_20 + var_1_72) , var_1_23)) + (min (var_1_73 , var_1_35)));
	}


	// From: Req30Batch133Amount500
	unsigned char stepLocal_21 = var_1_33;
	signed char stepLocal_20 = var_1_37;
	if (var_1_121 < stepLocal_21) {
		if (stepLocal_20 > var_1_111) {
			var_1_81 = ((var_1_41 + var_1_82) + var_1_33);
		}
	}


	// From: Req48Batch133Amount500
	var_1_109 = var_1_71;


	// From: Req3Batch133Amount500
	signed short int stepLocal_1 = var_1_16;
	unsigned long int stepLocal_0 = var_1_38;
	if ((abs (var_1_16)) == stepLocal_0) {
		if (var_1_38 >= stepLocal_1) {
			var_1_15 = (abs (var_1_16));
		}
	}


	// From: Req4Batch133Amount500
	if (var_1_58 < (var_1_58 / (max (var_1_9 , var_1_6)))) {
		var_1_18 = var_1_19;
	} else {
		var_1_18 = (max ((var_1_20 - 10) , var_1_19));
	}


	// From: Req21Batch133Amount500
	unsigned char stepLocal_12 = var_1_42;
	unsigned char stepLocal_11 = var_1_18;
	if (var_1_91) {
		var_1_62 = (min (var_1_36 , ((max (var_1_31 , var_1_30)) - var_1_37)));
	} else {
		if ((var_1_56 <= var_1_38) && stepLocal_12) {
			var_1_62 = var_1_32;
		} else {
			if ((1.15f * var_1_114) >= var_1_13) {
				if (stepLocal_11 >= (last_1_var_1_62 * var_1_83)) {
					var_1_62 = (10 + (max ((var_1_32 - 32) , (var_1_63 - var_1_35))));
				} else {
					var_1_62 = (max ((var_1_20 - var_1_37) , ((var_1_41 + var_1_35) + var_1_36)));
				}
			}
		}
	}


	// From: Req29Batch133Amount500
	unsigned long int stepLocal_19 = var_1_84;
	if (stepLocal_19 <= ((var_1_18 + -64) * var_1_34)) {
		if (var_1_91) {
			var_1_79 = var_1_30;
		} else {
			var_1_79 = (min ((abs (var_1_56 - var_1_68)) , var_1_24));
		}
	} else {
		if ((var_1_74 + var_1_114) <= var_1_28) {
			if ((max (var_1_28 , (- 256.75f))) > ((var_1_7 + var_1_58) + var_1_11)) {
				var_1_79 = ((var_1_80 - var_1_31) - var_1_105);
			}
		}
	}


	// From: Req38Batch133Amount500
	unsigned char stepLocal_27 = ! var_1_98;
	unsigned long int stepLocal_26 = var_1_92;
	if (stepLocal_26 >= var_1_18) {
		var_1_96 = ((max (var_1_41 , var_1_109)) + ((10000 - var_1_97) - var_1_68));
	} else {
		if (stepLocal_27 && var_1_46) {
			var_1_96 = ((min (var_1_88 , (abs (var_1_40)))) + -2);
		}
	}


	// From: Req14Batch133Amount500
	unsigned char stepLocal_8 = var_1_42;
	unsigned long int stepLocal_7 = var_1_116;
	if ((-16 > var_1_16) && stepLocal_8) {
		var_1_51 = (var_1_15 - var_1_31);
	} else {
		if (var_1_22 == stepLocal_7) {
			var_1_51 = var_1_66;
		}
	}


	// From: Req41Batch133Amount500
	if (var_1_51 < (max ((var_1_68 - var_1_97) , -16))) {
		if (((var_1_101 - var_1_35) - var_1_93) < (var_1_99 * (min (var_1_92 , var_1_97)))) {
			if (((1 << var_1_52) | 10) > var_1_38) {
				var_1_100 = (var_1_35 + (var_1_92 + var_1_41));
			}
		} else {
			var_1_100 = (var_1_41 - var_1_35);
		}
	} else {
		var_1_100 = var_1_22;
	}


	// From: Req13Batch133Amount500
	unsigned long int stepLocal_6 = (var_1_52 + var_1_23) * var_1_109;
	unsigned short int stepLocal_5 = var_1_64;
	if (stepLocal_5 >= var_1_16) {
		var_1_49 = (var_1_50 - var_1_41);
	} else {
		if (var_1_96 < stepLocal_6) {
			if (var_1_48) {
				var_1_49 = (var_1_32 - var_1_19);
			} else {
				var_1_49 = (var_1_19 - var_1_18);
			}
		} else {
			var_1_49 = (min ((max (50 , var_1_64)) , (max (var_1_37 , (var_1_30 + var_1_24)))));
		}
	}


	// From: Req28Batch133Amount500
	unsigned char stepLocal_18 = var_1_91;
	signed long int stepLocal_17 = max (var_1_111 , var_1_19);
	signed long int stepLocal_16 = (var_1_111 + var_1_31) - var_1_30;
	if (8 >= stepLocal_17) {
		if ((~ (16 << var_1_24)) < stepLocal_16) {
			var_1_75 = var_1_32;
		} else {
			if (var_1_27 < var_1_1) {
				var_1_75 = (max (last_1_var_1_75 , var_1_41));
			} else {
				if (stepLocal_18 && (var_1_67 < 25)) {
					var_1_75 = (var_1_79 + var_1_36);
				} else {
					var_1_75 = (max ((var_1_19 + var_1_77) , var_1_15));
				}
			}
		}
	} else {
		var_1_75 = ((var_1_78 + 1) - var_1_30);
	}


	// From: Req34Batch133Amount500
	if (var_1_123) {
		var_1_89 = ((max (var_1_107 , -25)) + ((var_1_41 - var_1_30) + var_1_113));
	} else {
		if ((var_1_120 <= -200) && var_1_45) {
			var_1_89 = (var_1_19 - (var_1_90 - (max (var_1_67 , var_1_69))));
		} else {
			if (var_1_19 > (var_1_31 - 10)) {
				var_1_89 = (var_1_31 - var_1_113);
			} else {
				if (! var_1_91) {
					var_1_89 = (var_1_77 + var_1_49);
				}
			}
		}
	}


	// From: Req25Batch133Amount500
	signed long int stepLocal_15 = var_1_120;
	if (var_1_24 <= stepLocal_15) {
		var_1_70 = ((var_1_35 + var_1_67) - var_1_89);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 2305843.009213691400e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427388000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -32767);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 31);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 31);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -1);
	assume_abort_if_not(var_1_50 <= 2147483646);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967294);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 32767);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427388000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 63);
	assume_abort_if_not(var_1_63 <= 127);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 16383);
	assume_abort_if_not(var_1_67 <= 32767);
	var_1_68 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_68 >= 8191);
	assume_abort_if_not(var_1_68 <= 16383);
	var_1_69 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 65534);
	var_1_72 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_72 >= -8191);
	assume_abort_if_not(var_1_72 <= 8191);
	var_1_73 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_73 >= -16383);
	assume_abort_if_not(var_1_73 <= 16383);
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= 1073741823);
	assume_abort_if_not(var_1_76 <= 2147483647);
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= -16383);
	assume_abort_if_not(var_1_77 <= 16383);
	var_1_78 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 16383);
	var_1_80 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_80 >= 1073741822);
	assume_abort_if_not(var_1_80 <= 2147483646);
	var_1_82 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_82 >= -31);
	assume_abort_if_not(var_1_82 <= 31);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 1073741824);
	assume_abort_if_not(var_1_85 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 1073741824);
	assume_abort_if_not(var_1_86 <= 2147483647);
	var_1_88 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_88 >= -16383);
	assume_abort_if_not(var_1_88 <= 16383);
	var_1_90 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_90 >= 1073741823);
	assume_abort_if_not(var_1_90 <= 2147483646);
	var_1_92 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_92 >= 1);
	assume_abort_if_not(var_1_92 <= 30);
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 30);
	var_1_97 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 8191);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 191);
	assume_abort_if_not(var_1_101 <= 255);
	var_1_108 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_108 >= -32767);
	assume_abort_if_not(var_1_108 <= 32766);
	var_1_122 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_122 >= 0);
	assume_abort_if_not(var_1_122 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_38 = var_1_38;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_119 = var_1_119;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_42 && var_1_123) ? ((var_1_114 <= ((10.5 + var_1_74) / var_1_6)) ? (var_1_1 == ((float) (var_1_7 + 255.2f))) : 1) : (var_1_1 == ((float) ((var_1_8 - (var_1_9 - var_1_10)) + (max (256.4f , 64.6f)))))) && ((var_1_65 || var_1_98) ? (var_1_11 == ((float) var_1_8)) : ((var_1_10 >= (var_1_8 - (var_1_13 - var_1_9))) ? ((var_1_8 < -0.875f) ? (var_1_11 == ((float) (min (var_1_14 , var_1_10)))) : (var_1_11 == ((float) (min (var_1_7 , var_1_10))))) : 1))) && (((abs (var_1_16)) == var_1_38) ? ((var_1_38 >= var_1_16) ? (var_1_15 == ((signed long int) (abs (var_1_16)))) : 1) : 1)) && ((var_1_58 < (var_1_58 / (max (var_1_9 , var_1_6)))) ? (var_1_18 == ((unsigned char) var_1_19)) : (var_1_18 == ((unsigned char) (max ((var_1_20 - 10) , var_1_19)))))) && ((var_1_52 > var_1_19) ? (var_1_21 == ((signed char) (max (var_1_22 , -32)))) : (var_1_21 == ((signed char) (max ((min (var_1_22 , var_1_23)) , var_1_24)))))) && ((var_1_9 < ((var_1_8 - var_1_10) + (var_1_13 - var_1_26))) ? (var_1_25 == ((float) (min ((max (var_1_10 , var_1_7)) , ((200.25f + var_1_27) + (max (var_1_8 , var_1_9))))))) : (var_1_25 == ((float) (max (99.5f , var_1_27)))))) && (var_1_28 == ((float) ((5.182401363462702E18f - var_1_8) - var_1_10)))) && ((var_1_27 >= (max (var_1_13 , var_1_74))) ? ((var_1_6 > var_1_74) ? (var_1_29 == ((unsigned char) ((max (var_1_20 , (min (var_1_30 , var_1_31)))) - (var_1_32 - var_1_33)))) : (var_1_29 == ((unsigned char) (max (16 , var_1_33))))) : 1)) && (((var_1_16 * (var_1_87 / var_1_31)) >= (var_1_30 + var_1_24)) ? ((! (var_1_13 <= var_1_27)) ? (var_1_34 == ((signed char) (var_1_33 + ((min (var_1_35 , var_1_36)) - var_1_37)))) : 1) : (var_1_91 ? (var_1_34 == ((signed char) var_1_37)) : (var_1_34 == ((signed char) var_1_23))))) && ((var_1_30 != var_1_39) ? (var_1_38 == ((unsigned long int) ((var_1_118 + var_1_32) + var_1_35))) : 1)) && (var_1_39 == ((signed char) (var_1_36 + ((var_1_40 - var_1_41) - 25))))) && ((! var_1_91) ? (((abs (var_1_14)) == 10000.4f) ? (var_1_42 == ((unsigned char) ((var_1_43 && var_1_44) && (var_1_45 && var_1_46)))) : (var_1_42 == ((unsigned char) ((! var_1_45) || (var_1_47 || var_1_48))))) : (var_1_42 == ((unsigned char) (var_1_43 && (! var_1_45)))))) && ((var_1_64 >= var_1_16) ? (var_1_49 == ((signed long int) (var_1_50 - var_1_41))) : ((var_1_96 < ((var_1_52 + var_1_23) * var_1_109)) ? (var_1_48 ? (var_1_49 == ((signed long int) (var_1_32 - var_1_19))) : (var_1_49 == ((signed long int) (var_1_19 - var_1_18)))) : (var_1_49 == ((signed long int) (min ((max (50 , var_1_64)) , (max (var_1_37 , (var_1_30 + var_1_24)))))))))) && (((-16 > var_1_16) && var_1_42) ? (var_1_51 == ((signed short int) (var_1_15 - var_1_31))) : ((var_1_22 == var_1_116) ? (var_1_51 == ((signed short int) var_1_66)) : 1))) && ((! (var_1_114 == var_1_13)) ? (var_1_52 == ((unsigned long int) (var_1_53 - var_1_120))) : (var_1_52 == ((unsigned long int) (abs (var_1_32 + var_1_31)))))) && (var_1_54 == ((unsigned short int) (max ((max ((var_1_31 + var_1_30) , (58578 - 1))) , ((min (var_1_55 , var_1_56)) - var_1_41)))))) && ((var_1_41 <= ((max (100 , 1)) << var_1_24)) ? (var_1_57 == ((unsigned char) ((min (128 , (200 - var_1_35))) - var_1_32))) : 1)) && ((((var_1_59 + 7.9) - var_1_10) > (- var_1_11)) ? (var_1_58 == ((double) (var_1_27 + var_1_10))) : 1)) && (var_1_60 == ((unsigned char) (var_1_40 + (abs (32)))))) && (((var_1_41 & var_1_50) <= (min (var_1_121 , (var_1_33 & -1000000000)))) ? (var_1_61 == ((signed char) (min (var_1_37 , 0)))) : (var_1_61 == ((signed char) var_1_23)))) && (var_1_91 ? (var_1_62 == ((unsigned char) (min (var_1_36 , ((max (var_1_31 , var_1_30)) - var_1_37))))) : (((var_1_56 <= var_1_38) && var_1_42) ? (var_1_62 == ((unsigned char) var_1_32)) : (((1.15f * var_1_114) >= var_1_13) ? ((var_1_18 >= (last_1_var_1_62 * var_1_83)) ? (var_1_62 == ((unsigned char) (10 + (max ((var_1_32 - 32) , (var_1_63 - var_1_35)))))) : (var_1_62 == ((unsigned char) (max ((var_1_20 - var_1_37) , ((var_1_41 + var_1_35) + var_1_36)))))) : 1)))) && (var_1_44 ? (var_1_64 == ((unsigned short int) (abs (var_1_31)))) : (var_1_64 == ((unsigned short int) (min ((abs (min (var_1_37 , var_1_35))) , ((max (var_1_40 , var_1_32)) + (24823 - var_1_19)))))))) && (((var_1_8 - (var_1_13 - var_1_59)) >= var_1_103) ? (var_1_65 == ((unsigned char) (! (var_1_47 || var_1_48)))) : (var_1_65 == ((unsigned char) (var_1_123 && var_1_48))))) && ((last_1_var_1_84 >= last_1_var_1_38) ? (var_1_66 == ((unsigned short int) ((last_1_var_1_66 + last_1_var_1_111) + var_1_40))) : ((var_1_50 == last_1_var_1_107) ? ((last_1_var_1_58 == (- 8.8)) ? (var_1_66 == ((unsigned short int) ((var_1_67 - (var_1_68 - var_1_20)) + (50 + var_1_19)))) : (var_1_66 == ((unsigned short int) var_1_69))) : (var_1_66 == ((unsigned short int) (max (var_1_55 , var_1_41))))))) && ((var_1_24 <= var_1_120) ? (var_1_70 == ((signed long int) ((var_1_35 + var_1_67) - var_1_89))) : 1)) && ((var_1_33 <= var_1_68) ? ((var_1_74 < (min (3.625 , var_1_74))) ? (var_1_71 == ((signed short int) ((23851 - (var_1_68 - 1)) - (max (var_1_19 , var_1_41))))) : ((var_1_7 == var_1_59) ? (var_1_71 == ((signed short int) (var_1_37 + ((abs (var_1_19)) - var_1_36)))) : 1)) : (var_1_71 == ((signed short int) ((max ((var_1_20 + var_1_72) , var_1_23)) + (min (var_1_73 , var_1_35))))))) && ((var_1_123 || var_1_91) ? (var_1_74 == ((double) (var_1_9 + var_1_10))) : ((var_1_10 >= 0.25f) ? (var_1_74 == ((double) (var_1_9 - var_1_59))) : (var_1_74 == ((double) (var_1_8 - var_1_59)))))) && ((8 >= (max (var_1_111 , var_1_19))) ? (((~ (16 << var_1_24)) < ((var_1_111 + var_1_31) - var_1_30)) ? (var_1_75 == ((signed short int) var_1_32)) : ((var_1_27 < var_1_1) ? (var_1_75 == ((signed short int) (max (last_1_var_1_75 , var_1_41)))) : ((var_1_91 && (var_1_67 < 25)) ? (var_1_75 == ((signed short int) (var_1_79 + var_1_36))) : (var_1_75 == ((signed short int) (max ((var_1_19 + var_1_77) , var_1_15))))))) : (var_1_75 == ((signed short int) ((var_1_78 + 1) - var_1_30))))) && ((var_1_84 <= ((var_1_18 + -64) * var_1_34)) ? (var_1_91 ? (var_1_79 == ((signed long int) var_1_30)) : (var_1_79 == ((signed long int) (min ((abs (var_1_56 - var_1_68)) , var_1_24))))) : (((var_1_74 + var_1_114) <= var_1_28) ? (((max (var_1_28 , (- 256.75f))) > ((var_1_7 + var_1_58) + var_1_11)) ? (var_1_79 == ((signed long int) ((var_1_80 - var_1_31) - var_1_105))) : 1) : 1))) && ((var_1_121 < var_1_33) ? ((var_1_37 > var_1_111) ? (var_1_81 == ((signed char) ((var_1_41 + var_1_82) + var_1_33))) : 1) : 1)) && ((((var_1_73 % var_1_20) / var_1_40) > var_1_23) ? (var_1_91 ? (var_1_83 == ((unsigned char) (var_1_41 + (max (var_1_35 , var_1_37))))) : 1) : 1)) && ((var_1_55 > var_1_66) ? (var_1_65 ? (var_1_91 ? (var_1_84 == ((unsigned long int) (abs ((var_1_76 + var_1_85) - (max (256u , var_1_19)))))) : (var_1_84 == ((unsigned long int) var_1_99))) : ((1 > ((var_1_35 << last_1_var_1_84) / (max (var_1_63 , var_1_56)))) ? (var_1_84 == ((unsigned long int) (min (var_1_63 , var_1_53)))) : (var_1_84 == ((unsigned long int) ((max (var_1_53 , (var_1_85 + var_1_86))) - 2u))))) : (var_1_84 == ((unsigned long int) (var_1_53 - var_1_31))))) && (var_1_87 == ((signed short int) (min (var_1_23 , (var_1_83 + var_1_88)))))) && (var_1_123 ? (var_1_89 == ((signed long int) ((max (var_1_107 , -25)) + ((var_1_41 - var_1_30) + var_1_113)))) : (((var_1_120 <= -200) && var_1_45) ? (var_1_89 == ((signed long int) (var_1_19 - (var_1_90 - (max (var_1_67 , var_1_69)))))) : ((var_1_19 > (var_1_31 - 10)) ? (var_1_89 == ((signed long int) (var_1_31 - var_1_113))) : ((! var_1_91) ? (var_1_89 == ((signed long int) (var_1_77 + var_1_49))) : 1))))) && (((var_1_90 / var_1_32) > ((abs (last_1_var_1_100)) >> (min (var_1_92 , var_1_93)))) ? ((var_1_20 <= var_1_50) ? (var_1_91 == ((unsigned char) (var_1_46 && (! var_1_48)))) : (var_1_91 == ((unsigned char) (var_1_45 && var_1_43)))) : (var_1_91 == ((unsigned char) (var_1_44 || var_1_43))))) && ((! var_1_123) ? (var_1_98 ? (var_1_94 == ((signed short int) (var_1_35 + var_1_32))) : (var_1_94 == ((signed short int) var_1_30))) : 1)) && ((var_1_123 || (var_1_88 > var_1_82)) ? ((var_1_77 < (var_1_105 + var_1_67)) ? (var_1_95 == ((signed char) ((abs (var_1_82)) + (var_1_93 + var_1_41)))) : (var_1_95 == ((signed char) ((min (var_1_35 , var_1_93)) - var_1_36)))) : 1)) && ((var_1_92 >= var_1_18) ? (var_1_96 == ((signed short int) ((max (var_1_41 , var_1_109)) + ((10000 - var_1_97) - var_1_68)))) : (((! var_1_98) && var_1_46) ? (var_1_96 == ((signed short int) ((min (var_1_88 , (abs (var_1_40)))) + -2))) : 1))) && (var_1_98 == ((unsigned char) (! (! var_1_48))))) && ((! var_1_44) ? (var_1_99 == ((unsigned long int) (var_1_63 + var_1_36))) : 1)) && ((var_1_51 < (max ((var_1_68 - var_1_97) , -16))) ? ((((var_1_101 - var_1_35) - var_1_93) < (var_1_99 * (min (var_1_92 , var_1_97)))) ? ((((1 << var_1_52) | 10) > var_1_38) ? (var_1_100 == ((signed char) (var_1_35 + (var_1_92 + var_1_41)))) : 1) : (var_1_100 == ((signed char) (var_1_41 - var_1_35)))) : (var_1_100 == ((signed char) var_1_22)))) && (var_1_102 == ((signed char) var_1_35))) && (var_1_103 == ((float) var_1_8))) && (var_1_104 == ((unsigned short int) var_1_55))) && (var_1_105 == ((unsigned long int) 64u))) && (var_1_106 == ((float) var_1_14))) && (var_1_47 ? (var_1_107 == ((signed short int) var_1_108)) : (var_1_107 == ((signed short int) var_1_40)))) && (var_1_109 == ((signed long int) var_1_71))) && (var_1_110 == ((unsigned char) var_1_35))) && (var_1_46 ? (var_1_111 == ((signed long int) var_1_119)) : 1)) && (var_1_112 == ((unsigned long int) var_1_41))) && (var_1_48 ? (var_1_113 == ((unsigned long int) var_1_76)) : 1)) && (var_1_43 ? (var_1_114 == ((double) var_1_8)) : 1)) && (var_1_115 == ((unsigned char) var_1_30))) && (var_1_45 ? (var_1_116 == ((unsigned long int) var_1_92)) : 1)) && (var_1_65 ? (var_1_117 == ((unsigned char) var_1_37)) : (var_1_117 == ((unsigned char) var_1_32)))) && (var_1_123 ? (var_1_118 == ((signed short int) 4)) : (var_1_118 == ((signed short int) -1)))) && (((var_1_78 / var_1_55) > var_1_105) ? (var_1_119 == ((unsigned short int) (last_1_var_1_119 + var_1_97))) : 1)) && (var_1_120 == ((signed long int) 128))) && (var_1_121 == ((unsigned long int) var_1_122))) && (var_1_123 == ((unsigned char) var_1_44))
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
