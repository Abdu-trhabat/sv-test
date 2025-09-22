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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = 2;
signed short int var_1_5 = -16;
signed short int var_1_6 = -16;
signed short int var_1_7 = -2;
signed short int var_1_8 = -32;
float var_1_9 = 1.75;
signed short int var_1_10 = 256;
signed short int var_1_11 = 32;
float var_1_12 = 2.125;
float var_1_13 = 63.375;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 50820;
unsigned long int var_1_16 = 1940175438;
unsigned long int var_1_17 = 2058630425;
unsigned long int var_1_18 = 100000;
unsigned long int var_1_19 = 128;
unsigned short int var_1_20 = 41527;
signed long int var_1_21 = -10;
double var_1_22 = 127.1;
double var_1_23 = 15.8;
double var_1_24 = 63.2;
signed long int var_1_26 = 0;
signed long int var_1_28 = 1895511932;
unsigned long int var_1_29 = 256;
signed char var_1_31 = 4;
signed long int var_1_32 = 10000;
signed long int var_1_34 = 1744455711;
unsigned short int var_1_35 = 16;
double var_1_36 = 63.4;
double var_1_37 = 50.4;
double var_1_38 = 15.75;
double var_1_39 = 499.25;
double var_1_40 = 9.75;
signed long int var_1_41 = 32;
signed long int var_1_42 = -2;
double var_1_43 = 0.0;
double var_1_44 = 32.5;
double var_1_45 = 128.2;
unsigned short int var_1_46 = 4;
unsigned char var_1_47 = 2;
unsigned char var_1_48 = 200;
unsigned char var_1_49 = 128;
unsigned char var_1_50 = 10;
float var_1_51 = 10.25;
unsigned char var_1_52 = 4;
unsigned char var_1_53 = 100;
unsigned char var_1_54 = 100;
unsigned char var_1_55 = 8;
signed char var_1_56 = 4;
signed char var_1_57 = 10;
double var_1_58 = 10.5;
signed char var_1_61 = 0;
signed char var_1_62 = -50;
signed char var_1_63 = 4;
double var_1_64 = 5.5;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
float var_1_67 = 32.8;
signed char var_1_68 = 5;
float var_1_69 = 7.5;
unsigned char var_1_70 = 2;
signed short int var_1_71 = 50;
unsigned char var_1_73 = 0;
signed short int var_1_74 = 256;
signed short int var_1_75 = -100;
unsigned short int var_1_76 = 16;
unsigned short int var_1_77 = 32185;
unsigned short int var_1_78 = 1;
unsigned char var_1_79 = 100;
signed long int var_1_80 = 10;
unsigned long int var_1_81 = 2;
unsigned long int var_1_83 = 3719526583;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 0;
float var_1_87 = 9.25;
signed char var_1_89 = 10;
float var_1_90 = 50.9;
float var_1_91 = 100000000000.125;
signed char var_1_92 = -64;
signed char var_1_93 = 0;
unsigned char var_1_94 = 50;
unsigned char var_1_95 = 200;
signed short int var_1_96 = -128;
unsigned short int var_1_97 = 500;
double var_1_98 = 0.0;
double var_1_99 = 99999.5;
signed char var_1_100 = 4;
signed char var_1_101 = 0;
signed char var_1_102 = -8;
float var_1_103 = 2.8;
signed long int var_1_105 = 2;
unsigned char var_1_107 = 64;
signed char var_1_108 = -2;
double var_1_109 = 24.8;
double var_1_110 = 31.6;
unsigned short int var_1_111 = 5;
signed long int var_1_112 = -128;
signed long int var_1_113 = -128;
unsigned char var_1_114 = 0;
float var_1_115 = 1.075;
unsigned long int var_1_116 = 0;
unsigned long int var_1_117 = 4;
unsigned char var_1_118 = 64;
unsigned char var_1_119 = 2;
double var_1_120 = 9.375;
unsigned char var_1_121 = 1;
unsigned char var_1_122 = 50;
double var_1_123 = 32.2;
signed char var_1_124 = 64;
unsigned char var_1_125 = 0;
double var_1_126 = -0.875;
signed long int var_1_127 = 500;
unsigned long int var_1_128 = 25;
unsigned char var_1_129 = 0;
unsigned short int var_1_130 = 5;
unsigned char var_1_131 = 0;
signed short int var_1_132 = 2;
signed long int var_1_133 = 10000000;

// Calibration values

// Last'ed variables
float last_1_var_1_9 = 1.75;
unsigned short int last_1_var_1_35 = 16;
double last_1_var_1_40 = 9.75;
double last_1_var_1_58 = 10.5;
unsigned char last_1_var_1_65 = 1;
signed short int last_1_var_1_71 = 50;
unsigned char last_1_var_1_73 = 0;
signed short int last_1_var_1_74 = 256;
unsigned char last_1_var_1_84 = 1;
signed long int last_1_var_1_113 = -128;
unsigned long int last_1_var_1_117 = 4;
double last_1_var_1_120 = 9.375;
double last_1_var_1_123 = 32.2;
unsigned char last_1_var_1_125 = 0;
unsigned long int last_1_var_1_128 = 25;
unsigned short int last_1_var_1_130 = 5;
signed long int last_1_var_1_133 = 10000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch16Amount500
	if ((last_1_var_1_120 + var_1_45) > (- (last_1_var_1_58 * last_1_var_1_9))) {
		if ((max (var_1_18 , var_1_42)) <= last_1_var_1_128) {
			var_1_74 = (max ((var_1_53 + var_1_63) , var_1_57));
		} else {
			var_1_74 = (max ((4 + (max (last_1_var_1_113 , var_1_50))) , (var_1_8 + (max (var_1_75 , last_1_var_1_71)))));
		}
	} else {
		var_1_74 = (abs (last_1_var_1_130 + var_1_68));
	}


	// From: Req16Batch16Amount500
	if (last_1_var_1_123 >= (last_1_var_1_40 + last_1_var_1_120)) {
		var_1_58 = var_1_24;
	} else {
		if ((max (var_1_15 , var_1_11)) > (min (var_1_31 , (max (last_1_var_1_133 , 100))))) {
			var_1_58 = (max (var_1_12 , (min ((min (64.8 , var_1_37)) , (min (var_1_23 , var_1_45))))));
		} else {
			var_1_58 = ((var_1_43 - (var_1_45 + var_1_44)) - var_1_23);
		}
	}


	// From: Req23Batch16Amount500
	unsigned char stepLocal_10 = last_1_var_1_65;
	if (last_1_var_1_125 || stepLocal_10) {
		var_1_73 = var_1_66;
	} else {
		var_1_73 = (last_1_var_1_84 && var_1_66);
	}


	// From: Req60Batch16Amount500
	if (last_1_var_1_125) {
		var_1_127 = 8;
	} else {
		var_1_127 = last_1_var_1_74;
	}


	// From: Req2Batch16Amount500
	if (var_1_127 <= ((min (var_1_10 , 16)) - var_1_11)) {
		var_1_9 = (var_1_12 - var_1_13);
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req11Batch16Amount500
	if (var_1_73) {
		var_1_46 = (max (var_1_11 , var_1_20));
	}


	// From: Req50Batch16Amount500
	if ((last_1_var_1_40 * var_1_98) > 256.8) {
		var_1_116 = (3375694918u - var_1_20);
	} else {
		var_1_116 = (var_1_83 - (var_1_49 + last_1_var_1_35));
	}


	// From: Req58Batch16Amount500
	if (last_1_var_1_73) {
		var_1_125 = var_1_85;
	}


	// From: Req19Batch16Amount500
	if (var_1_125) {
		var_1_65 = var_1_66;
	}


	// From: Req53Batch16Amount500
	if (var_1_125) {
		var_1_120 = var_1_13;
	} else {
		var_1_120 = var_1_37;
	}


	// From: Req48Batch16Amount500
	if (var_1_125) {
		var_1_114 = (! (var_1_86 || var_1_85));
	}


	// From: Req9Batch16Amount500
	if (var_1_23 <= (- (var_1_24 - var_1_22))) {
		var_1_36 = var_1_22;
	} else {
		var_1_36 = (max (((var_1_37 - var_1_38) + (10.25 + var_1_39)) , var_1_13));
	}


	// From: Req26Batch16Amount500
	if (var_1_114) {
		if (var_1_15 > var_1_49) {
			var_1_78 = (var_1_20 - var_1_77);
		} else {
			var_1_78 = (var_1_53 + var_1_77);
		}
	} else {
		if ((32 % var_1_53) <= var_1_55) {
			var_1_78 = (var_1_20 - var_1_48);
		} else {
			var_1_78 = var_1_68;
		}
	}


	// From: Req27Batch16Amount500
	var_1_79 = (var_1_49 - (min (var_1_54 , var_1_55)));


	// From: Req29Batch16Amount500
	if (var_1_28 < var_1_11) {
		if (var_1_73 && var_1_65) {
			var_1_81 = (min ((var_1_83 - var_1_28) , var_1_17));
		} else {
			var_1_81 = (var_1_49 + var_1_54);
		}
	} else {
		var_1_81 = (var_1_83 - var_1_34);
	}


	// From: Req34Batch16Amount500
	if (var_1_78 < var_1_116) {
		if (var_1_85 && var_1_114) {
			var_1_92 = ((max ((var_1_55 + var_1_68) , var_1_63)) - var_1_93);
		} else {
			var_1_92 = (var_1_93 - (50 + var_1_55));
		}
	} else {
		var_1_92 = var_1_57;
	}


	// From: Req35Batch16Amount500
	signed char stepLocal_14 = var_1_93;
	if (stepLocal_14 > var_1_53) {
		var_1_94 = (min ((min (var_1_93 , (128 - var_1_55))) , (abs (var_1_49))));
	} else {
		var_1_94 = (min ((max (var_1_50 , (var_1_95 - var_1_93))) , (max ((var_1_49 - var_1_68) , var_1_48))));
	}


	// From: Req36Batch16Amount500
	var_1_96 = var_1_57;


	// From: Req37Batch16Amount500
	if ((min (var_1_23 , 1.77)) >= ((var_1_98 - var_1_38) - var_1_43)) {
		var_1_97 = var_1_11;
	}


	// From: Req39Batch16Amount500
	var_1_100 = (max (var_1_68 , ((var_1_55 + -10) + (max (var_1_101 , var_1_102)))));


	// From: Req42Batch16Amount500
	if (var_1_85) {
		var_1_107 = (abs ((var_1_53 + var_1_54) - var_1_50));
	} else {
		var_1_107 = var_1_95;
	}


	// From: Req43Batch16Amount500
	var_1_108 = ((max (32 , (var_1_68 + 32))) - (var_1_55 + 4));


	// From: Req44Batch16Amount500
	if (var_1_73) {
		var_1_109 = (var_1_44 + var_1_38);
	} else {
		var_1_109 = (((var_1_44 - var_1_110) + var_1_45) + var_1_39);
	}


	// From: Req45Batch16Amount500
	unsigned char stepLocal_19 = var_1_39 > var_1_58;
	unsigned char stepLocal_18 = var_1_95;
	if (var_1_86 && stepLocal_19) {
		if (stepLocal_18 >= (var_1_42 / var_1_31)) {
			var_1_111 = (var_1_20 - var_1_50);
		}
	} else {
		var_1_111 = (var_1_77 + (abs (var_1_63)));
	}


	// From: Req46Batch16Amount500
	if (var_1_66) {
		var_1_112 = ((var_1_34 - (min (var_1_127 , var_1_95))) - var_1_46);
	}


	// From: Req49Batch16Amount500
	if (var_1_91 < (abs (var_1_38 - var_1_12))) {
		var_1_115 = ((var_1_38 + var_1_44) - var_1_22);
	} else {
		var_1_115 = (max (var_1_12 , (min (0.19999999999999996f , (max (var_1_22 , var_1_23))))));
	}


	// From: Req52Batch16Amount500
	var_1_118 = var_1_119;


	// From: Req54Batch16Amount500
	var_1_121 = var_1_63;


	// From: Req55Batch16Amount500
	if (var_1_86) {
		var_1_122 = var_1_54;
	} else {
		var_1_122 = var_1_53;
	}


	// From: Req56Batch16Amount500
	if (var_1_86) {
		var_1_123 = var_1_22;
	} else {
		var_1_123 = var_1_39;
	}


	// From: Req59Batch16Amount500
	var_1_126 = var_1_44;


	// From: Req61Batch16Amount500
	var_1_128 = var_1_119;


	// From: Req62Batch16Amount500
	var_1_129 = var_1_85;


	// From: Req63Batch16Amount500
	var_1_130 = var_1_50;


	// From: Req10Batch16Amount500
	unsigned char stepLocal_5 = var_1_65;
	signed long int stepLocal_4 = (var_1_11 - var_1_41) % var_1_42;
	if (((var_1_58 < var_1_13) || var_1_65) || stepLocal_5) {
		var_1_40 = (abs (var_1_38));
	} else {
		if (stepLocal_4 >= (var_1_15 * -1)) {
			if (var_1_65) {
				var_1_40 = (2.75 - (var_1_43 - (var_1_44 + var_1_45)));
			} else {
				var_1_40 = (var_1_39 + var_1_45);
			}
		}
	}


	// From: Req51Batch16Amount500
	signed long int stepLocal_20 = abs (var_1_95 - 128);
	if (stepLocal_20 != (max (var_1_116 , last_1_var_1_117))) {
		var_1_117 = var_1_20;
	} else {
		var_1_117 = var_1_127;
	}


	// From: Req3Batch16Amount500
	if ((var_1_128 + (var_1_15 - var_1_11)) >= ((var_1_16 + var_1_17) - (max (var_1_18 , var_1_19)))) {
		var_1_14 = var_1_11;
	} else {
		var_1_14 = (var_1_20 - (abs (2)));
	}


	// From: Req5Batch16Amount500
	unsigned char stepLocal_1 = var_1_65;
	if (var_1_73) {
		if ((var_1_18 == var_1_11) && stepLocal_1) {
			var_1_26 = ((min ((max (var_1_7 , var_1_6)) , var_1_5)) + var_1_20);
		} else {
			var_1_26 = (var_1_20 - ((var_1_28 - var_1_14) - var_1_11));
		}
	} else {
		var_1_26 = var_1_7;
	}


	// From: Req14Batch16Amount500
	if (var_1_126 >= (31.5 / var_1_43)) {
		if (var_1_114) {
			var_1_52 = ((var_1_53 + (var_1_54 - var_1_55)) - var_1_50);
		}
	}


	// From: Req15Batch16Amount500
	if (! var_1_114) {
		var_1_56 = (max (var_1_55 , var_1_57));
	} else {
		if (var_1_129) {
			var_1_56 = var_1_57;
		} else {
			var_1_56 = var_1_55;
		}
	}


	// From: Req20Batch16Amount500
	unsigned long int stepLocal_8 = var_1_17;
	if ((99.2f / var_1_43) > var_1_40) {
		if ((var_1_41 >> var_1_68) >= stepLocal_8) {
			var_1_67 = (min (var_1_69 , var_1_12));
		} else {
			var_1_67 = (abs (max (var_1_23 , var_1_38)));
		}
	}


	// From: Req25Batch16Amount500
	if (var_1_129) {
		var_1_76 = (var_1_20 - (min (var_1_54 , (var_1_77 - var_1_53))));
	} else {
		var_1_76 = (var_1_20 - ((min (var_1_48 , 5)) + var_1_53));
	}


	// From: Req31Batch16Amount500
	if (var_1_129) {
		var_1_87 = (abs (10.75f - var_1_44));
	}


	// From: Req40Batch16Amount500
	signed long int stepLocal_15 = var_1_127;
	if (var_1_129) {
		if ((var_1_15 - 10) >= stepLocal_15) {
			var_1_103 = (var_1_45 + (min (var_1_37 , var_1_44)));
		} else {
			var_1_103 = (min (var_1_23 , 4.1f));
		}
	} else {
		var_1_103 = var_1_37;
	}


	// From: Req30Batch16Amount500
	unsigned long int stepLocal_11 = var_1_117;
	if (var_1_77 >= stepLocal_11) {
		var_1_84 = (var_1_114 || var_1_85);
	} else {
		var_1_84 = (((var_1_129 && var_1_73) && var_1_66) || var_1_86);
	}


	// From: Req8Batch16Amount500
	if (var_1_84) {
		var_1_35 = (max (var_1_11 , var_1_20));
	} else {
		var_1_35 = var_1_20;
	}


	// From: Req4Batch16Amount500
	if ((var_1_12 - (9.3 + var_1_22)) < (var_1_13 - (var_1_23 + var_1_24))) {
		if (var_1_125) {
			var_1_21 = (min ((var_1_20 - var_1_35) , var_1_10));
		}
	} else {
		var_1_21 = ((abs (var_1_5)) + var_1_8);
	}


	// From: Req12Batch16Amount500
	if (var_1_84) {
		if (var_1_24 > (var_1_45 / var_1_43)) {
			var_1_47 = var_1_48;
		} else {
			var_1_47 = (var_1_49 - var_1_50);
		}
	} else {
		var_1_47 = var_1_48;
	}


	// From: Req13Batch16Amount500
	if ((var_1_67 / var_1_43) >= var_1_126) {
		if ((var_1_20 >= var_1_52) || var_1_73) {
			var_1_51 = (abs (abs (var_1_38)));
		}
	} else {
		var_1_51 = ((max (var_1_12 , (var_1_43 - var_1_37))) - (max (var_1_24 , var_1_13)));
	}


	// From: Req18Batch16Amount500
	unsigned char stepLocal_7 = var_1_47;
	if (stepLocal_7 > (var_1_49 - (max (var_1_63 , var_1_55)))) {
		var_1_64 = (var_1_37 - var_1_12);
	}


	// From: Req21Batch16Amount500
	if (var_1_84) {
		var_1_70 = var_1_68;
	}


	// From: Req38Batch16Amount500
	if (var_1_43 < var_1_64) {
		var_1_99 = ((min (var_1_38 , 3.125)) + var_1_37);
	} else {
		var_1_99 = (abs (var_1_39));
	}


	// From: Req57Batch16Amount500
	if (var_1_84) {
		var_1_124 = var_1_57;
	} else {
		var_1_124 = var_1_68;
	}


	// From: Req64Batch16Amount500
	if (var_1_84) {
		var_1_131 = var_1_95;
	} else {
		var_1_131 = var_1_119;
	}


	// From: Req6Batch16Amount500
	if (var_1_127 <= ((-16 / var_1_31) & var_1_8)) {
		if (var_1_117 < var_1_19) {
			var_1_29 = (max ((var_1_11 + (1u + var_1_15)) , (min (10000u , (var_1_35 + var_1_17)))));
		}
	}


	// From: Req7Batch16Amount500
	unsigned long int stepLocal_3 = (var_1_7 & var_1_116) + var_1_128;
	unsigned long int stepLocal_2 = var_1_29 / var_1_15;
	if (var_1_11 == stepLocal_3) {
		if (stepLocal_2 < var_1_16) {
			var_1_32 = (((max (var_1_28 , var_1_34)) - var_1_20) - var_1_11);
		}
	}


	// From: Req47Batch16Amount500
	if (((var_1_54 % var_1_95) % (var_1_49 - var_1_68)) < var_1_29) {
		if (var_1_42 != var_1_77) {
			var_1_113 = (var_1_68 - (max (var_1_77 , var_1_11)));
		} else {
			var_1_113 = (var_1_53 - var_1_48);
		}
	} else {
		var_1_113 = (var_1_29 + var_1_55);
	}


	// From: Req66Batch16Amount500
	var_1_133 = var_1_32;


	// From: Req1Batch16Amount500
	unsigned long int stepLocal_0 = var_1_128;
	if (stepLocal_0 >= (var_1_128 * (10u * var_1_29))) {
		var_1_1 = ((var_1_5 + -25) + (min (var_1_6 , var_1_7)));
	} else {
		var_1_1 = (var_1_5 + (var_1_8 + -2));
	}


	// From: Req32Batch16Amount500
	signed long int stepLocal_12 = var_1_127 * var_1_133;
	if (var_1_66) {
		if (var_1_42 != stepLocal_12) {
			if (var_1_44 >= var_1_99) {
				var_1_89 = (abs (var_1_68));
			} else {
				if ((var_1_24 * 5.5f) >= 8.5) {
					var_1_89 = (var_1_63 - var_1_55);
				}
			}
		} else {
			var_1_89 = (min (var_1_55 , (var_1_68 - 25)));
		}
	} else {
		var_1_89 = var_1_63;
	}


	// From: Req33Batch16Amount500
	unsigned char stepLocal_13 = var_1_131;
	if (stepLocal_13 < var_1_19) {
		var_1_90 = ((var_1_44 + 63.4f) + (var_1_45 - (max (5.5f , var_1_91))));
	}


	// From: Req41Batch16Amount500
	unsigned char stepLocal_17 = var_1_118;
	unsigned char stepLocal_16 = var_1_66;
	if (! (var_1_129 || var_1_86)) {
		if (stepLocal_17 == var_1_116) {
			var_1_105 = (max ((min (var_1_75 , (var_1_46 + var_1_32))) , (var_1_97 - var_1_50)));
		}
	} else {
		if ((var_1_22 < var_1_36) && stepLocal_16) {
			var_1_105 = ((var_1_11 - (var_1_20 + var_1_93)) + var_1_75);
		} else {
			var_1_105 = var_1_74;
		}
	}


	// From: Req28Batch16Amount500
	if (var_1_117 == var_1_50) {
		if (var_1_42 >= (var_1_5 * (var_1_121 - 25))) {
			if (var_1_76 <= var_1_96) {
				var_1_80 = (max (var_1_77 , 10000));
			} else {
				var_1_80 = (var_1_49 - 256);
			}
		} else {
			var_1_80 = (var_1_105 - var_1_77);
		}
	} else {
		var_1_80 = ((var_1_5 + var_1_32) + var_1_48);
	}


	// From: Req65Batch16Amount500
	if (var_1_125 && ((var_1_49 + var_1_31) < (var_1_21 + var_1_128))) {
		var_1_132 = (max (var_1_50 , var_1_26));
	} else {
		var_1_132 = (var_1_80 - var_1_54);
	}


	// From: Req17Batch16Amount500
	signed short int stepLocal_6 = var_1_7;
	if (stepLocal_6 <= var_1_105) {
		var_1_61 = ((max (var_1_55 , (abs (var_1_62)))) - var_1_63);
	}


	// From: Req22Batch16Amount500
	signed char stepLocal_9 = var_1_61;
	if (stepLocal_9 >= (min (var_1_122 , var_1_55))) {
		var_1_71 = (max (var_1_49 , var_1_68));
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -8191);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -8191);
	assume_abort_if_not(var_1_8 <= 8192);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65535);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 1073741823);
	assume_abort_if_not(var_1_16 <= 2147483648);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741824);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427388000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427388000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 1610612734);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	assume_abort_if_not(var_1_31 != 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 1073741822);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -230584.3009213691400e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 4611686.018427383000e+12F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 63);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 95);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 31);
	var_1_57 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_57 >= -127);
	assume_abort_if_not(var_1_57 <= 126);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -126);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 30);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -922337.2036854766000e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854766000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_75 >= -16383);
	assume_abort_if_not(var_1_75 <= 16383);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 16383);
	assume_abort_if_not(var_1_77 <= 32767);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 2147483647);
	assume_abort_if_not(var_1_83 <= 4294967294);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 0);
	var_1_91 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 4611686.018427383000e+12F && var_1_91 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 126);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 127);
	assume_abort_if_not(var_1_95 <= 254);
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= 4611686.018427388000e+12F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 9223372.036854776000e+12F && var_1_98 >= 1.0e-20F ));
	var_1_101 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_101 >= -63);
	assume_abort_if_not(var_1_101 <= 63);
	var_1_102 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_102 >= -63);
	assume_abort_if_not(var_1_102 <= 63);
	var_1_110 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_110 >= 0.0F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 2305843.009213691400e+12F && var_1_110 >= 1.0e-20F ));
	var_1_119 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_119 >= 0);
	assume_abort_if_not(var_1_119 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_120 = var_1_120;
	last_1_var_1_123 = var_1_123;
	last_1_var_1_125 = var_1_125;
	last_1_var_1_128 = var_1_128;
	last_1_var_1_130 = var_1_130;
	last_1_var_1_133 = var_1_133;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_128 >= (var_1_128 * (10u * var_1_29))) ? (var_1_1 == ((signed short int) ((var_1_5 + -25) + (min (var_1_6 , var_1_7))))) : (var_1_1 == ((signed short int) (var_1_5 + (var_1_8 + -2))))) && ((var_1_127 <= ((min (var_1_10 , 16)) - var_1_11)) ? (var_1_9 == ((float) (var_1_12 - var_1_13))) : (var_1_9 == ((float) var_1_12)))) && (((var_1_128 + (var_1_15 - var_1_11)) >= ((var_1_16 + var_1_17) - (max (var_1_18 , var_1_19)))) ? (var_1_14 == ((unsigned short int) var_1_11)) : (var_1_14 == ((unsigned short int) (var_1_20 - (abs (2))))))) && (((var_1_12 - (9.3 + var_1_22)) < (var_1_13 - (var_1_23 + var_1_24))) ? (var_1_125 ? (var_1_21 == ((signed long int) (min ((var_1_20 - var_1_35) , var_1_10)))) : 1) : (var_1_21 == ((signed long int) ((abs (var_1_5)) + var_1_8))))) && (var_1_73 ? (((var_1_18 == var_1_11) && var_1_65) ? (var_1_26 == ((signed long int) ((min ((max (var_1_7 , var_1_6)) , var_1_5)) + var_1_20))) : (var_1_26 == ((signed long int) (var_1_20 - ((var_1_28 - var_1_14) - var_1_11))))) : (var_1_26 == ((signed long int) var_1_7)))) && ((var_1_127 <= ((-16 / var_1_31) & var_1_8)) ? ((var_1_117 < var_1_19) ? (var_1_29 == ((unsigned long int) (max ((var_1_11 + (1u + var_1_15)) , (min (10000u , (var_1_35 + var_1_17))))))) : 1) : 1)) && ((var_1_11 == ((var_1_7 & var_1_116) + var_1_128)) ? (((var_1_29 / var_1_15) < var_1_16) ? (var_1_32 == ((signed long int) (((max (var_1_28 , var_1_34)) - var_1_20) - var_1_11))) : 1) : 1)) && (var_1_84 ? (var_1_35 == ((unsigned short int) (max (var_1_11 , var_1_20)))) : (var_1_35 == ((unsigned short int) var_1_20)))) && ((var_1_23 <= (- (var_1_24 - var_1_22))) ? (var_1_36 == ((double) var_1_22)) : (var_1_36 == ((double) (max (((var_1_37 - var_1_38) + (10.25 + var_1_39)) , var_1_13)))))) && ((((var_1_58 < var_1_13) || var_1_65) || var_1_65) ? (var_1_40 == ((double) (abs (var_1_38)))) : ((((var_1_11 - var_1_41) % var_1_42) >= (var_1_15 * -1)) ? (var_1_65 ? (var_1_40 == ((double) (2.75 - (var_1_43 - (var_1_44 + var_1_45))))) : (var_1_40 == ((double) (var_1_39 + var_1_45)))) : 1))) && (var_1_73 ? (var_1_46 == ((unsigned short int) (max (var_1_11 , var_1_20)))) : 1)) && (var_1_84 ? ((var_1_24 > (var_1_45 / var_1_43)) ? (var_1_47 == ((unsigned char) var_1_48)) : (var_1_47 == ((unsigned char) (var_1_49 - var_1_50)))) : (var_1_47 == ((unsigned char) var_1_48)))) && (((var_1_67 / var_1_43) >= var_1_126) ? (((var_1_20 >= var_1_52) || var_1_73) ? (var_1_51 == ((float) (abs (abs (var_1_38))))) : 1) : (var_1_51 == ((float) ((max (var_1_12 , (var_1_43 - var_1_37))) - (max (var_1_24 , var_1_13))))))) && ((var_1_126 >= (31.5 / var_1_43)) ? (var_1_114 ? (var_1_52 == ((unsigned char) ((var_1_53 + (var_1_54 - var_1_55)) - var_1_50))) : 1) : 1)) && ((! var_1_114) ? (var_1_56 == ((signed char) (max (var_1_55 , var_1_57)))) : (var_1_129 ? (var_1_56 == ((signed char) var_1_57)) : (var_1_56 == ((signed char) var_1_55))))) && ((last_1_var_1_123 >= (last_1_var_1_40 + last_1_var_1_120)) ? (var_1_58 == ((double) var_1_24)) : (((max (var_1_15 , var_1_11)) > (min (var_1_31 , (max (last_1_var_1_133 , 100))))) ? (var_1_58 == ((double) (max (var_1_12 , (min ((min (64.8 , var_1_37)) , (min (var_1_23 , var_1_45)))))))) : (var_1_58 == ((double) ((var_1_43 - (var_1_45 + var_1_44)) - var_1_23)))))) && ((var_1_7 <= var_1_105) ? (var_1_61 == ((signed char) ((max (var_1_55 , (abs (var_1_62)))) - var_1_63))) : 1)) && ((var_1_47 > (var_1_49 - (max (var_1_63 , var_1_55)))) ? (var_1_64 == ((double) (var_1_37 - var_1_12))) : 1)) && (var_1_125 ? (var_1_65 == ((unsigned char) var_1_66)) : 1)) && (((99.2f / var_1_43) > var_1_40) ? (((var_1_41 >> var_1_68) >= var_1_17) ? (var_1_67 == ((float) (min (var_1_69 , var_1_12)))) : (var_1_67 == ((float) (abs (max (var_1_23 , var_1_38)))))) : 1)) && (var_1_84 ? (var_1_70 == ((unsigned char) var_1_68)) : 1)) && ((var_1_61 >= (min (var_1_122 , var_1_55))) ? (var_1_71 == ((signed short int) (max (var_1_49 , var_1_68)))) : 1)) && ((last_1_var_1_125 || last_1_var_1_65) ? (var_1_73 == ((unsigned char) var_1_66)) : (var_1_73 == ((unsigned char) (last_1_var_1_84 && var_1_66))))) && (((last_1_var_1_120 + var_1_45) > (- (last_1_var_1_58 * last_1_var_1_9))) ? (((max (var_1_18 , var_1_42)) <= last_1_var_1_128) ? (var_1_74 == ((signed short int) (max ((var_1_53 + var_1_63) , var_1_57)))) : (var_1_74 == ((signed short int) (max ((4 + (max (last_1_var_1_113 , var_1_50))) , (var_1_8 + (max (var_1_75 , last_1_var_1_71)))))))) : (var_1_74 == ((signed short int) (abs (last_1_var_1_130 + var_1_68)))))) && (var_1_129 ? (var_1_76 == ((unsigned short int) (var_1_20 - (min (var_1_54 , (var_1_77 - var_1_53)))))) : (var_1_76 == ((unsigned short int) (var_1_20 - ((min (var_1_48 , 5)) + var_1_53)))))) && (var_1_114 ? ((var_1_15 > var_1_49) ? (var_1_78 == ((unsigned short int) (var_1_20 - var_1_77))) : (var_1_78 == ((unsigned short int) (var_1_53 + var_1_77)))) : (((32 % var_1_53) <= var_1_55) ? (var_1_78 == ((unsigned short int) (var_1_20 - var_1_48))) : (var_1_78 == ((unsigned short int) var_1_68))))) && (var_1_79 == ((unsigned char) (var_1_49 - (min (var_1_54 , var_1_55)))))) && ((var_1_117 == var_1_50) ? ((var_1_42 >= (var_1_5 * (var_1_121 - 25))) ? ((var_1_76 <= var_1_96) ? (var_1_80 == ((signed long int) (max (var_1_77 , 10000)))) : (var_1_80 == ((signed long int) (var_1_49 - 256)))) : (var_1_80 == ((signed long int) (var_1_105 - var_1_77)))) : (var_1_80 == ((signed long int) ((var_1_5 + var_1_32) + var_1_48))))) && ((var_1_28 < var_1_11) ? ((var_1_73 && var_1_65) ? (var_1_81 == ((unsigned long int) (min ((var_1_83 - var_1_28) , var_1_17)))) : (var_1_81 == ((unsigned long int) (var_1_49 + var_1_54)))) : (var_1_81 == ((unsigned long int) (var_1_83 - var_1_34))))) && ((var_1_77 >= var_1_117) ? (var_1_84 == ((unsigned char) (var_1_114 || var_1_85))) : (var_1_84 == ((unsigned char) (((var_1_129 && var_1_73) && var_1_66) || var_1_86))))) && (var_1_129 ? (var_1_87 == ((float) (abs (10.75f - var_1_44)))) : 1)) && (var_1_66 ? ((var_1_42 != (var_1_127 * var_1_133)) ? ((var_1_44 >= var_1_99) ? (var_1_89 == ((signed char) (abs (var_1_68)))) : (((var_1_24 * 5.5f) >= 8.5) ? (var_1_89 == ((signed char) (var_1_63 - var_1_55))) : 1)) : (var_1_89 == ((signed char) (min (var_1_55 , (var_1_68 - 25)))))) : (var_1_89 == ((signed char) var_1_63)))) && ((var_1_131 < var_1_19) ? (var_1_90 == ((float) ((var_1_44 + 63.4f) + (var_1_45 - (max (5.5f , var_1_91)))))) : 1)) && ((var_1_78 < var_1_116) ? ((var_1_85 && var_1_114) ? (var_1_92 == ((signed char) ((max ((var_1_55 + var_1_68) , var_1_63)) - var_1_93))) : (var_1_92 == ((signed char) (var_1_93 - (50 + var_1_55))))) : (var_1_92 == ((signed char) var_1_57)))) && ((var_1_93 > var_1_53) ? (var_1_94 == ((unsigned char) (min ((min (var_1_93 , (128 - var_1_55))) , (abs (var_1_49)))))) : (var_1_94 == ((unsigned char) (min ((max (var_1_50 , (var_1_95 - var_1_93))) , (max ((var_1_49 - var_1_68) , var_1_48)))))))) && (var_1_96 == ((signed short int) var_1_57))) && (((min (var_1_23 , 1.77)) >= ((var_1_98 - var_1_38) - var_1_43)) ? (var_1_97 == ((unsigned short int) var_1_11)) : 1)) && ((var_1_43 < var_1_64) ? (var_1_99 == ((double) ((min (var_1_38 , 3.125)) + var_1_37))) : (var_1_99 == ((double) (abs (var_1_39)))))) && (var_1_100 == ((signed char) (max (var_1_68 , ((var_1_55 + -10) + (max (var_1_101 , var_1_102)))))))) && (var_1_129 ? (((var_1_15 - 10) >= var_1_127) ? (var_1_103 == ((float) (var_1_45 + (min (var_1_37 , var_1_44))))) : (var_1_103 == ((float) (min (var_1_23 , 4.1f))))) : (var_1_103 == ((float) var_1_37)))) && ((! (var_1_129 || var_1_86)) ? ((var_1_118 == var_1_116) ? (var_1_105 == ((signed long int) (max ((min (var_1_75 , (var_1_46 + var_1_32))) , (var_1_97 - var_1_50))))) : 1) : (((var_1_22 < var_1_36) && var_1_66) ? (var_1_105 == ((signed long int) ((var_1_11 - (var_1_20 + var_1_93)) + var_1_75))) : (var_1_105 == ((signed long int) var_1_74))))) && (var_1_85 ? (var_1_107 == ((unsigned char) (abs ((var_1_53 + var_1_54) - var_1_50)))) : (var_1_107 == ((unsigned char) var_1_95)))) && (var_1_108 == ((signed char) ((max (32 , (var_1_68 + 32))) - (var_1_55 + 4))))) && (var_1_73 ? (var_1_109 == ((double) (var_1_44 + var_1_38))) : (var_1_109 == ((double) (((var_1_44 - var_1_110) + var_1_45) + var_1_39))))) && ((var_1_86 && (var_1_39 > var_1_58)) ? ((var_1_95 >= (var_1_42 / var_1_31)) ? (var_1_111 == ((unsigned short int) (var_1_20 - var_1_50))) : 1) : (var_1_111 == ((unsigned short int) (var_1_77 + (abs (var_1_63))))))) && (var_1_66 ? (var_1_112 == ((signed long int) ((var_1_34 - (min (var_1_127 , var_1_95))) - var_1_46))) : 1)) && ((((var_1_54 % var_1_95) % (var_1_49 - var_1_68)) < var_1_29) ? ((var_1_42 != var_1_77) ? (var_1_113 == ((signed long int) (var_1_68 - (max (var_1_77 , var_1_11))))) : (var_1_113 == ((signed long int) (var_1_53 - var_1_48)))) : (var_1_113 == ((signed long int) (var_1_29 + var_1_55))))) && (var_1_125 ? (var_1_114 == ((unsigned char) (! (var_1_86 || var_1_85)))) : 1)) && ((var_1_91 < (abs (var_1_38 - var_1_12))) ? (var_1_115 == ((float) ((var_1_38 + var_1_44) - var_1_22))) : (var_1_115 == ((float) (max (var_1_12 , (min (0.19999999999999996f , (max (var_1_22 , var_1_23)))))))))) && (((last_1_var_1_40 * var_1_98) > 256.8) ? (var_1_116 == ((unsigned long int) (3375694918u - var_1_20))) : (var_1_116 == ((unsigned long int) (var_1_83 - (var_1_49 + last_1_var_1_35)))))) && (((abs (var_1_95 - 128)) != (max (var_1_116 , last_1_var_1_117))) ? (var_1_117 == ((unsigned long int) var_1_20)) : (var_1_117 == ((unsigned long int) var_1_127)))) && (var_1_118 == ((unsigned char) var_1_119))) && (var_1_125 ? (var_1_120 == ((double) var_1_13)) : (var_1_120 == ((double) var_1_37)))) && (var_1_121 == ((unsigned char) var_1_63))) && (var_1_86 ? (var_1_122 == ((unsigned char) var_1_54)) : (var_1_122 == ((unsigned char) var_1_53)))) && (var_1_86 ? (var_1_123 == ((double) var_1_22)) : (var_1_123 == ((double) var_1_39)))) && (var_1_84 ? (var_1_124 == ((signed char) var_1_57)) : (var_1_124 == ((signed char) var_1_68)))) && (last_1_var_1_73 ? (var_1_125 == ((unsigned char) var_1_85)) : 1)) && (var_1_126 == ((double) var_1_44))) && (last_1_var_1_125 ? (var_1_127 == ((signed long int) 8)) : (var_1_127 == ((signed long int) last_1_var_1_74)))) && (var_1_128 == ((unsigned long int) var_1_119))) && (var_1_129 == ((unsigned char) var_1_85))) && (var_1_130 == ((unsigned short int) var_1_50))) && (var_1_84 ? (var_1_131 == ((unsigned char) var_1_95)) : (var_1_131 == ((unsigned char) var_1_119)))) && ((var_1_125 && ((var_1_49 + var_1_31) < (var_1_21 + var_1_128))) ? (var_1_132 == ((signed short int) (max (var_1_50 , var_1_26)))) : (var_1_132 == ((signed short int) (var_1_80 - var_1_54))))) && (var_1_133 == ((signed long int) var_1_32))
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
