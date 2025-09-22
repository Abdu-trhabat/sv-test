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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
unsigned char var_1_4 = 128;
signed char var_1_5 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 5;
signed char var_1_8 = 32;
signed char var_1_9 = 0;
double var_1_10 = 128.6;
double var_1_13 = 9.125;
double var_1_14 = 32.75;
double var_1_15 = 63.5;
double var_1_16 = 256.5;
double var_1_17 = 15.8;
unsigned short int var_1_18 = 64;
unsigned short int var_1_19 = 41023;
unsigned short int var_1_20 = 5;
unsigned short int var_1_21 = 26155;
signed char var_1_22 = 0;
float var_1_24 = 16.6;
float var_1_25 = 5.5;
float var_1_26 = -0.4;
double var_1_27 = 4.75;
double var_1_29 = 0.0;
double var_1_30 = 32.2;
unsigned short int var_1_31 = 128;
signed char var_1_32 = -4;
unsigned long int var_1_34 = 1;
unsigned short int var_1_35 = 128;
double var_1_36 = 199.4;
double var_1_37 = 31.125;
signed char var_1_38 = -4;
float var_1_39 = 100.75;
double var_1_40 = 15.75;
double var_1_41 = 0.75;
double var_1_42 = 99.2;
unsigned char var_1_43 = 10;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 64;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 200;
signed short int var_1_48 = 256;
unsigned short int var_1_49 = 1;
double var_1_50 = 10.6;
double var_1_52 = 0.0;
unsigned char var_1_53 = 2;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;
unsigned long int var_1_58 = 16;
unsigned long int var_1_59 = 2715873779;
unsigned long int var_1_60 = 3892511323;
unsigned char var_1_61 = 10;
unsigned char var_1_62 = 16;
unsigned char var_1_63 = 128;
unsigned char var_1_65 = 1;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 1;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned short int var_1_74 = 4;
unsigned short int var_1_76 = 26277;
signed short int var_1_77 = -8;
signed long int var_1_78 = 5;
float var_1_79 = 10.5;
unsigned char var_1_80 = 1;
unsigned char var_1_82 = 2;
unsigned char var_1_83 = 32;
unsigned char var_1_84 = 200;
double var_1_85 = 31.5;
unsigned short int var_1_86 = 5;
unsigned char var_1_87 = 1;
signed short int var_1_88 = -128;
unsigned char var_1_89 = 2;
unsigned char var_1_90 = 2;
double var_1_91 = 3.75;
unsigned char var_1_92 = 0;
unsigned long int var_1_93 = 1;
unsigned char var_1_94 = 0;
signed char var_1_95 = 25;
signed char var_1_96 = 64;
signed char var_1_97 = 100;
unsigned char var_1_98 = 5;
signed short int var_1_99 = -4;
unsigned char var_1_100 = 128;
signed long int var_1_101 = -4;
unsigned long int var_1_102 = 10;
unsigned char var_1_103 = 1;
unsigned char var_1_104 = 0;
unsigned long int var_1_105 = 5;
unsigned char var_1_106 = 128;
signed char var_1_107 = 16;
signed short int var_1_108 = 25;
signed short int var_1_109 = 25;
double var_1_110 = -0.5;
signed short int var_1_111 = 1;
signed char var_1_112 = -2;
unsigned long int var_1_113 = 100000000;
float var_1_114 = 127.25;
signed short int var_1_116 = 100;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_18 = 64;
unsigned short int last_1_var_1_20 = 5;
double last_1_var_1_27 = 4.75;
unsigned long int last_1_var_1_34 = 1;
double last_1_var_1_36 = 199.4;
double last_1_var_1_40 = 15.75;
unsigned char last_1_var_1_43 = 10;
unsigned short int last_1_var_1_49 = 1;
unsigned long int last_1_var_1_58 = 16;
unsigned char last_1_var_1_61 = 10;
unsigned char last_1_var_1_68 = 1;
unsigned short int last_1_var_1_74 = 4;
unsigned char last_1_var_1_87 = 1;
double last_1_var_1_91 = 3.75;
unsigned char last_1_var_1_92 = 0;
unsigned char last_1_var_1_98 = 5;
unsigned long int last_1_var_1_102 = 10;
unsigned char last_1_var_1_103 = 1;
unsigned char last_1_var_1_104 = 0;
signed short int last_1_var_1_108 = 25;
unsigned long int last_1_var_1_113 = 100000000;
float last_1_var_1_114 = 127.25;
signed short int last_1_var_1_116 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req32Batch3Amount500
	unsigned long int stepLocal_25 = last_1_var_1_102;
	signed long int stepLocal_24 = var_1_62 / (min (var_1_45 , var_1_82));
	if ((last_1_var_1_58 + last_1_var_1_102) != stepLocal_25) {
		if (last_1_var_1_91 > var_1_24) {
			if (last_1_var_1_61 <= stepLocal_24) {
				var_1_80 = (last_1_var_1_87 && (! var_1_71));
			}
		}
	} else {
		var_1_80 = (var_1_73 || (var_1_71 && var_1_57));
	}


	// From: Req28Batch3Amount500
	if ((var_1_14 + var_1_24) < 255.75) {
		if (last_1_var_1_114 <= (- last_1_var_1_27)) {
			var_1_74 = ((var_1_21 + var_1_76) - 500);
		} else {
			var_1_74 = (min (((abs (var_1_19)) - (min (var_1_4 , var_1_45))) , last_1_var_1_113));
		}
	}


	// From: Req21Batch3Amount500
	signed long int stepLocal_13 = last_1_var_1_116;
	signed long int stepLocal_12 = var_1_4 * (~ last_1_var_1_20);
	if ((max (50 , last_1_var_1_34)) <= stepLocal_13) {
		if ((min ((max (var_1_13 , var_1_16)) , last_1_var_1_40)) < last_1_var_1_36) {
			if ((var_1_55 - var_1_46) < stepLocal_12) {
				var_1_54 = (last_1_var_1_87 || var_1_56);
			}
		} else {
			var_1_54 = (! var_1_57);
		}
	} else {
		var_1_54 = (! 1);
	}


	// From: Req24Batch3Amount500
	signed long int stepLocal_18 = last_1_var_1_74 * var_1_46;
	signed long int stepLocal_17 = (var_1_55 - var_1_46) * last_1_var_1_98;
	unsigned char stepLocal_16 = var_1_56;
	if (! (last_1_var_1_68 || (var_1_56 && var_1_57))) {
		if (stepLocal_18 < last_1_var_1_113) {
			var_1_63 = var_1_62;
		} else {
			if (stepLocal_17 >= last_1_var_1_18) {
				var_1_63 = ((var_1_44 - (min (var_1_5 , var_1_9))) + (max (var_1_7 , (max (var_1_45 , var_1_8)))));
			} else {
				var_1_63 = (max (var_1_8 , (min (var_1_6 , var_1_5))));
			}
		}
	} else {
		if ((last_1_var_1_36 <= var_1_30) && stepLocal_16) {
			var_1_63 = (min (var_1_45 , var_1_8));
		} else {
			var_1_63 = (var_1_8 + var_1_5);
		}
	}


	// From: Req18Batch3Amount500
	var_1_49 = var_1_63;


	// From: Req22Batch3Amount500
	unsigned long int stepLocal_14 = last_1_var_1_113;
	if (stepLocal_14 != (var_1_5 % var_1_45)) {
		var_1_58 = ((min (var_1_59 , var_1_60)) - last_1_var_1_43);
	}


	// From: Req56Batch3Amount500
	if (var_1_56) {
		var_1_113 = var_1_7;
	} else {
		var_1_113 = last_1_var_1_49;
	}


	// From: Req36Batch3Amount500
	signed long int stepLocal_32 = last_1_var_1_108;
	unsigned char stepLocal_31 = var_1_46;
	unsigned char stepLocal_30 = var_1_72;
	unsigned char stepLocal_29 = var_1_82;
	if (last_1_var_1_68) {
		if (stepLocal_32 < var_1_44) {
			var_1_87 = (last_1_var_1_92 || (var_1_56 && var_1_72));
		}
	} else {
		if (stepLocal_30 && last_1_var_1_104) {
			if (stepLocal_31 >= var_1_82) {
				if (stepLocal_29 >= (min (var_1_21 , var_1_62))) {
					var_1_87 = (var_1_73 || var_1_72);
				} else {
					var_1_87 = ((var_1_60 >= var_1_9) || (! (var_1_73 || var_1_57)));
				}
			} else {
				var_1_87 = (! var_1_73);
			}
		}
	}


	// From: Req11Batch3Amount500
	var_1_35 = (var_1_19 - var_1_8);


	// From: Req13Batch3Amount500
	var_1_38 = (max (var_1_7 , (abs (var_1_5))));


	// From: Req14Batch3Amount500
	if (((56795 - var_1_5) ^ var_1_7) <= var_1_9) {
		var_1_39 = (var_1_17 + (max (var_1_16 , (max (9.8f , var_1_37)))));
	}


	// From: Req15Batch3Amount500
	var_1_40 = (((var_1_41 + var_1_42) + 24.5) - 31.8);


	// From: Req26Batch3Amount500
	if ((var_1_55 - var_1_44) != var_1_35) {
		var_1_67 = var_1_56;
	}


	// From: Req34Batch3Amount500
	var_1_85 = (max (var_1_52 , (127.2 - var_1_29)));


	// From: Req38Batch3Amount500
	var_1_89 = ((min (var_1_84 , 128)) - var_1_90);


	// From: Req42Batch3Amount500
	if (var_1_72 || (var_1_13 <= 10.8)) {
		var_1_98 = ((min ((var_1_8 + var_1_93) , var_1_9)) + var_1_90);
	} else {
		var_1_98 = (var_1_8 + var_1_97);
	}


	// From: Req47Batch3Amount500
	if (last_1_var_1_103) {
		var_1_103 = var_1_70;
	}


	// From: Req48Batch3Amount500
	var_1_104 = var_1_94;


	// From: Req49Batch3Amount500
	if (var_1_71) {
		var_1_105 = var_1_96;
	} else {
		var_1_105 = 4u;
	}


	// From: Req50Batch3Amount500
	var_1_106 = var_1_9;


	// From: Req51Batch3Amount500
	var_1_107 = var_1_93;


	// From: Req53Batch3Amount500
	if (var_1_103) {
		var_1_110 = var_1_41;
	} else {
		var_1_110 = var_1_14;
	}


	// From: Req55Batch3Amount500
	if (var_1_73) {
		var_1_112 = var_1_8;
	} else {
		var_1_112 = var_1_7;
	}


	// From: Req52Batch3Amount500
	if (var_1_80) {
		var_1_108 = var_1_109;
	} else {
		var_1_108 = var_1_63;
	}


	// From: Req9Batch3Amount500
	if (var_1_87) {
		var_1_32 = (var_1_5 + var_1_6);
	} else {
		if (var_1_54 || var_1_104) {
			var_1_32 = (var_1_8 - (min ((max (var_1_5 , var_1_6)) , var_1_7)));
		} else {
			var_1_32 = ((var_1_6 - var_1_9) + (abs (var_1_8)));
		}
	}


	// From: Req2Batch3Amount500
	unsigned char stepLocal_2 = var_1_80;
	if (var_1_103 && stepLocal_2) {
		var_1_10 = var_1_13;
	} else {
		if (var_1_103) {
			if (var_1_80) {
				var_1_10 = (var_1_14 + (var_1_15 + var_1_16));
			} else {
				var_1_10 = ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14);
			}
		}
	}


	// From: Req7Batch3Amount500
	if ((abs (-16)) != var_1_105) {
		var_1_27 = (var_1_17 - (var_1_29 - (min (100000.3 , var_1_30))));
	} else {
		if (var_1_54) {
			var_1_27 = var_1_16;
		} else {
			var_1_27 = (var_1_17 - (abs (4.75)));
		}
	}


	// From: Req17Batch3Amount500
	if (var_1_104) {
		var_1_48 = (min ((abs (var_1_45)) , (min (var_1_47 , var_1_63))));
	}


	// From: Req45Batch3Amount500
	if (var_1_113 >= var_1_49) {
		var_1_101 = var_1_97;
	}


	// From: Req20Batch3Amount500
	unsigned char stepLocal_11 = var_1_87;
	if (var_1_104 && stepLocal_11) {
		var_1_53 = (min ((max (var_1_6 , (max (4 , var_1_47)))) , var_1_45));
	}


	// From: Req12Batch3Amount500
	unsigned char stepLocal_6 = var_1_87;
	if (stepLocal_6 || var_1_67) {
		var_1_36 = (min (var_1_17 , (var_1_30 - (var_1_29 - var_1_37))));
	} else {
		var_1_36 = (min (var_1_16 , var_1_13));
	}


	// From: Req54Batch3Amount500
	if (var_1_87) {
		var_1_111 = var_1_89;
	}


	// From: Req6Batch3Amount500
	if ((max (var_1_85 , (var_1_25 * var_1_16))) > var_1_17) {
		var_1_26 = var_1_16;
	} else {
		var_1_26 = var_1_13;
	}


	// From: Req33Batch3Amount500
	unsigned char stepLocal_26 = var_1_98;
	if (var_1_8 >= stepLocal_26) {
		var_1_83 = (max (var_1_44 , ((var_1_84 - var_1_9) - var_1_45)));
	} else {
		var_1_83 = (max (1 , (var_1_6 + var_1_8)));
	}


	// From: Req46Batch3Amount500
	if (var_1_104) {
		var_1_102 = var_1_35;
	}


	// From: Req57Batch3Amount500
	if (! (var_1_74 > (16 * var_1_111))) {
		var_1_114 = (min (var_1_29 , var_1_30));
	}


	// From: Req8Batch3Amount500
	var_1_31 = (var_1_19 - var_1_48);


	// From: Req43Batch3Amount500
	var_1_99 = (max ((var_1_101 + var_1_31) , var_1_62));


	// From: Req3Batch3Amount500
	signed long int stepLocal_3 = min ((max (var_1_8 , var_1_4)) , (var_1_31 * var_1_7));
	if (stepLocal_3 <= ((var_1_6 | var_1_9) * var_1_106)) {
		var_1_18 = ((abs (var_1_31)) + var_1_7);
	} else {
		var_1_18 = (var_1_19 - var_1_7);
	}


	// From: Req25Batch3Amount500
	unsigned char stepLocal_20 = var_1_67;
	signed long int stepLocal_19 = max ((var_1_21 / 128) , var_1_99);
	if (var_1_103 || stepLocal_20) {
		if (8.1 <= var_1_52) {
			var_1_65 = (var_1_56 && (! var_1_57));
		} else {
			if (var_1_102 >= stepLocal_19) {
				var_1_65 = var_1_57;
			}
		}
	}


	// From: Req10Batch3Amount500
	signed char stepLocal_5 = var_1_7;
	if (var_1_102 < stepLocal_5) {
		var_1_34 = (max (var_1_8 , var_1_21));
	} else {
		var_1_34 = (max (var_1_19 , (min (last_1_var_1_34 , 1u))));
	}


	// From: Req29Batch3Amount500
	unsigned char stepLocal_22 = var_1_44;
	if (var_1_101 >= stepLocal_22) {
		var_1_77 = var_1_34;
	} else {
		var_1_77 = (min (((max (var_1_111 , var_1_8)) + var_1_58) , var_1_62));
	}


	// From: Req35Batch3Amount500
	unsigned char stepLocal_28 = var_1_72;
	signed short int stepLocal_27 = var_1_99;
	if ((var_1_53 > var_1_113) || stepLocal_28) {
		var_1_86 = var_1_46;
	} else {
		if (stepLocal_27 < var_1_113) {
			var_1_86 = var_1_6;
		}
	}


	// From: Req4Batch3Amount500
	if ((min (var_1_14 , var_1_15)) >= -0.6) {
		var_1_20 = (var_1_5 + (var_1_21 - var_1_34));
	} else {
		var_1_20 = var_1_9;
	}


	// From: Req23Batch3Amount500
	unsigned long int stepLocal_15 = var_1_47 ^ (var_1_45 * 32u);
	if (stepLocal_15 < (min ((var_1_102 % var_1_21) , var_1_20))) {
		var_1_61 = (max (var_1_7 , var_1_62));
	} else {
		var_1_61 = (abs (var_1_44));
	}


	// From: Req44Batch3Amount500
	unsigned short int stepLocal_36 = var_1_86;
	if (stepLocal_36 <= (max (var_1_53 , (abs (5))))) {
		var_1_100 = (var_1_44 + 5);
	} else {
		var_1_100 = (var_1_84 - (var_1_7 + var_1_9));
	}


	// From: Req27Batch3Amount500
	signed long int stepLocal_21 = max ((var_1_6 + var_1_100) , (var_1_7 / var_1_44));
	if (! (var_1_106 <= (var_1_21 & var_1_62))) {
		if ((max (-8 , -200)) > stepLocal_21) {
			var_1_68 = ((var_1_87 || var_1_56) && ((var_1_70 && var_1_71) && (var_1_104 || var_1_72)));
		} else {
			var_1_68 = (var_1_65 || var_1_56);
		}
	} else {
		if (199.75 < ((var_1_42 + var_1_17) - (var_1_30 + var_1_41))) {
			var_1_68 = (var_1_57 || var_1_73);
		}
	}


	// From: Req40Batch3Amount500
	unsigned long int stepLocal_35 = (var_1_100 + var_1_58) + -64;
	signed long int stepLocal_34 = -64;
	unsigned long int stepLocal_33 = var_1_34;
	if (var_1_68) {
		if (stepLocal_33 <= var_1_7) {
			if (((var_1_24 * var_1_15) * var_1_29) <= (var_1_42 * var_1_25)) {
				if (stepLocal_34 >= var_1_82) {
					var_1_92 = (! var_1_73);
				}
			} else {
				if (((abs (var_1_44)) >> var_1_93) <= stepLocal_35) {
					var_1_92 = (! var_1_73);
				} else {
					var_1_92 = ((var_1_73 || var_1_57) || var_1_94);
				}
			}
		}
	}


	// From: Req1Batch3Amount500
	unsigned long int stepLocal_1 = var_1_102;
	unsigned long int stepLocal_0 = var_1_102;
	if (stepLocal_0 != (var_1_100 / var_1_4)) {
		if (var_1_100 >= stepLocal_1) {
			var_1_1 = ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9)));
		} else {
			var_1_1 = (abs (var_1_7));
		}
	}


	// From: Req31Batch3Amount500
	unsigned char stepLocal_23 = var_1_106;
	if (! var_1_65) {
		if (var_1_92) {
			var_1_79 = (var_1_30 + ((128.2f - var_1_41) + 7.5f));
		} else {
			var_1_79 = (var_1_37 + (abs (var_1_15)));
		}
	} else {
		if (var_1_20 >= stepLocal_23) {
			var_1_79 = (max (var_1_30 , var_1_42));
		} else {
			var_1_79 = ((abs (var_1_37)) - var_1_52);
		}
	}


	// From: Req41Batch3Amount500
	if (var_1_68) {
		var_1_95 = ((var_1_96 - var_1_93) - (var_1_97 - (var_1_9 + 25)));
	} else {
		var_1_95 = (var_1_8 + var_1_93);
	}


	// From: Req39Batch3Amount500
	if (((max (var_1_100 , var_1_46)) << var_1_49) != (32 * (min (var_1_108 , var_1_58)))) {
		var_1_91 = (var_1_41 - var_1_29);
	} else {
		var_1_91 = (100.25 + var_1_15);
	}


	// From: Req16Batch3Amount500
	signed long int stepLocal_9 = (var_1_86 + var_1_7) + -10;
	unsigned short int stepLocal_8 = var_1_86;
	signed long int stepLocal_7 = var_1_6 / var_1_44;
	if (var_1_104) {
		if ((var_1_83 % var_1_4) < stepLocal_8) {
			if (var_1_92) {
				if (stepLocal_9 == var_1_105) {
					var_1_43 = ((var_1_44 + var_1_45) - (var_1_46 - var_1_9));
				} else {
					var_1_43 = (var_1_9 + (var_1_5 + var_1_8));
				}
			} else {
				if (var_1_10 <= (- (127.7 - 50.8))) {
					if ((var_1_46 / var_1_8) < stepLocal_7) {
						var_1_43 = var_1_7;
					} else {
						var_1_43 = var_1_9;
					}
				} else {
					var_1_43 = var_1_47;
				}
			}
		}
	} else {
		var_1_43 = var_1_47;
	}


	// From: Req37Batch3Amount500
	if (var_1_43 < var_1_20) {
		var_1_88 = (max ((var_1_58 + (var_1_113 - var_1_43)) , var_1_111));
	}


	// From: Req5Batch3Amount500
	unsigned char stepLocal_4 = (var_1_102 * 4u) < var_1_5;
	if (stepLocal_4 || ((max (var_1_61 , var_1_21)) >= 2)) {
		if (var_1_16 < (min (var_1_91 , var_1_13))) {
			if (((var_1_17 / var_1_24) / var_1_25) <= (abs (var_1_15))) {
				var_1_22 = (16 - var_1_6);
			} else {
				var_1_22 = (var_1_5 - (var_1_7 + var_1_9));
			}
		}
	}


	// From: Req19Batch3Amount500
	signed short int stepLocal_10 = var_1_88;
	if (stepLocal_10 <= var_1_113) {
		if (var_1_68) {
			var_1_50 = (var_1_42 + (min (var_1_17 , var_1_14)));
		} else {
			var_1_50 = (((max (var_1_29 , var_1_52)) - var_1_17) - 1.8);
		}
	} else {
		if (var_1_79 <= var_1_52) {
			var_1_50 = var_1_30;
		}
	}


	// From: Req30Batch3Amount500
	if ((var_1_102 < (var_1_19 * var_1_32)) && (var_1_35 < var_1_53)) {
		if (var_1_7 < var_1_105) {
			var_1_78 = 4;
		} else {
			var_1_78 = (max (var_1_88 , (min (var_1_102 , var_1_47))));
		}
	} else {
		var_1_78 = (var_1_102 - 100);
	}


	// From: Req58Batch3Amount500
	if (var_1_102 <= (min ((var_1_47 * 64) , var_1_78))) {
		var_1_116 = var_1_82;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 31);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 31);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 63);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 64);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 254);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 4611686.018427383000e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 255);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 2147483647);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 254);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 0);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 16384);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 255);
	assume_abort_if_not(var_1_82 != 0);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 190);
	assume_abort_if_not(var_1_84 <= 254);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 127);
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 30);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 0);
	var_1_96 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_96 >= 62);
	assume_abort_if_not(var_1_96 <= 126);
	var_1_97 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_97 >= 63);
	assume_abort_if_not(var_1_97 <= 126);
	var_1_109 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_109 >= -32767);
	assume_abort_if_not(var_1_109 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_116 = var_1_116;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_102 != (var_1_100 / var_1_4)) ? ((var_1_100 >= var_1_102) ? (var_1_1 == ((signed char) ((abs (var_1_5 - var_1_6)) + (var_1_7 - (var_1_8 - var_1_9))))) : (var_1_1 == ((signed char) (abs (var_1_7))))) : 1) && ((var_1_103 && var_1_80) ? (var_1_10 == ((double) var_1_13)) : (var_1_103 ? (var_1_80 ? (var_1_10 == ((double) (var_1_14 + (var_1_15 + var_1_16)))) : (var_1_10 == ((double) ((max ((max (8.2 , var_1_16)) , (2.5 - var_1_17))) + var_1_14)))) : 1))) && (((min ((max (var_1_8 , var_1_4)) , (var_1_31 * var_1_7))) <= ((var_1_6 | var_1_9) * var_1_106)) ? (var_1_18 == ((unsigned short int) ((abs (var_1_31)) + var_1_7))) : (var_1_18 == ((unsigned short int) (var_1_19 - var_1_7))))) && (((min (var_1_14 , var_1_15)) >= -0.6) ? (var_1_20 == ((unsigned short int) (var_1_5 + (var_1_21 - var_1_34)))) : (var_1_20 == ((unsigned short int) var_1_9)))) && ((((var_1_102 * 4u) < var_1_5) || ((max (var_1_61 , var_1_21)) >= 2)) ? ((var_1_16 < (min (var_1_91 , var_1_13))) ? ((((var_1_17 / var_1_24) / var_1_25) <= (abs (var_1_15))) ? (var_1_22 == ((signed char) (16 - var_1_6))) : (var_1_22 == ((signed char) (var_1_5 - (var_1_7 + var_1_9))))) : 1) : 1)) && (((max (var_1_85 , (var_1_25 * var_1_16))) > var_1_17) ? (var_1_26 == ((float) var_1_16)) : (var_1_26 == ((float) var_1_13)))) && (((abs (-16)) != var_1_105) ? (var_1_27 == ((double) (var_1_17 - (var_1_29 - (min (100000.3 , var_1_30)))))) : (var_1_54 ? (var_1_27 == ((double) var_1_16)) : (var_1_27 == ((double) (var_1_17 - (abs (4.75)))))))) && (var_1_31 == ((unsigned short int) (var_1_19 - var_1_48)))) && (var_1_87 ? (var_1_32 == ((signed char) (var_1_5 + var_1_6))) : ((var_1_54 || var_1_104) ? (var_1_32 == ((signed char) (var_1_8 - (min ((max (var_1_5 , var_1_6)) , var_1_7))))) : (var_1_32 == ((signed char) ((var_1_6 - var_1_9) + (abs (var_1_8)))))))) && ((var_1_102 < var_1_7) ? (var_1_34 == ((unsigned long int) (max (var_1_8 , var_1_21)))) : (var_1_34 == ((unsigned long int) (max (var_1_19 , (min (last_1_var_1_34 , 1u)))))))) && (var_1_35 == ((unsigned short int) (var_1_19 - var_1_8)))) && ((var_1_87 || var_1_67) ? (var_1_36 == ((double) (min (var_1_17 , (var_1_30 - (var_1_29 - var_1_37)))))) : (var_1_36 == ((double) (min (var_1_16 , var_1_13)))))) && (var_1_38 == ((signed char) (max (var_1_7 , (abs (var_1_5))))))) && ((((56795 - var_1_5) ^ var_1_7) <= var_1_9) ? (var_1_39 == ((float) (var_1_17 + (max (var_1_16 , (max (9.8f , var_1_37))))))) : 1)) && (var_1_40 == ((double) (((var_1_41 + var_1_42) + 24.5) - 31.8)))) && (var_1_104 ? (((var_1_83 % var_1_4) < var_1_86) ? (var_1_92 ? ((((var_1_86 + var_1_7) + -10) == var_1_105) ? (var_1_43 == ((unsigned char) ((var_1_44 + var_1_45) - (var_1_46 - var_1_9)))) : (var_1_43 == ((unsigned char) (var_1_9 + (var_1_5 + var_1_8))))) : ((var_1_10 <= (- (127.7 - 50.8))) ? (((var_1_46 / var_1_8) < (var_1_6 / var_1_44)) ? (var_1_43 == ((unsigned char) var_1_7)) : (var_1_43 == ((unsigned char) var_1_9))) : (var_1_43 == ((unsigned char) var_1_47)))) : 1) : (var_1_43 == ((unsigned char) var_1_47)))) && (var_1_104 ? (var_1_48 == ((signed short int) (min ((abs (var_1_45)) , (min (var_1_47 , var_1_63)))))) : 1)) && (var_1_49 == ((unsigned short int) var_1_63))) && ((var_1_88 <= var_1_113) ? (var_1_68 ? (var_1_50 == ((double) (var_1_42 + (min (var_1_17 , var_1_14))))) : (var_1_50 == ((double) (((max (var_1_29 , var_1_52)) - var_1_17) - 1.8)))) : ((var_1_79 <= var_1_52) ? (var_1_50 == ((double) var_1_30)) : 1))) && ((var_1_104 && var_1_87) ? (var_1_53 == ((unsigned char) (min ((max (var_1_6 , (max (4 , var_1_47)))) , var_1_45)))) : 1)) && (((max (50 , last_1_var_1_34)) <= last_1_var_1_116) ? (((min ((max (var_1_13 , var_1_16)) , last_1_var_1_40)) < last_1_var_1_36) ? (((var_1_55 - var_1_46) < (var_1_4 * (~ last_1_var_1_20))) ? (var_1_54 == ((unsigned char) (last_1_var_1_87 || var_1_56))) : 1) : (var_1_54 == ((unsigned char) (! var_1_57)))) : (var_1_54 == ((unsigned char) (! 1))))) && ((last_1_var_1_113 != (var_1_5 % var_1_45)) ? (var_1_58 == ((unsigned long int) ((min (var_1_59 , var_1_60)) - last_1_var_1_43))) : 1)) && (((var_1_47 ^ (var_1_45 * 32u)) < (min ((var_1_102 % var_1_21) , var_1_20))) ? (var_1_61 == ((unsigned char) (max (var_1_7 , var_1_62)))) : (var_1_61 == ((unsigned char) (abs (var_1_44)))))) && ((! (last_1_var_1_68 || (var_1_56 && var_1_57))) ? (((last_1_var_1_74 * var_1_46) < last_1_var_1_113) ? (var_1_63 == ((unsigned char) var_1_62)) : ((((var_1_55 - var_1_46) * last_1_var_1_98) >= last_1_var_1_18) ? (var_1_63 == ((unsigned char) ((var_1_44 - (min (var_1_5 , var_1_9))) + (max (var_1_7 , (max (var_1_45 , var_1_8))))))) : (var_1_63 == ((unsigned char) (max (var_1_8 , (min (var_1_6 , var_1_5)))))))) : (((last_1_var_1_36 <= var_1_30) && var_1_56) ? (var_1_63 == ((unsigned char) (min (var_1_45 , var_1_8)))) : (var_1_63 == ((unsigned char) (var_1_8 + var_1_5)))))) && ((var_1_103 || var_1_67) ? ((8.1 <= var_1_52) ? (var_1_65 == ((unsigned char) (var_1_56 && (! var_1_57)))) : ((var_1_102 >= (max ((var_1_21 / 128) , var_1_99))) ? (var_1_65 == ((unsigned char) var_1_57)) : 1)) : 1)) && (((var_1_55 - var_1_44) != var_1_35) ? (var_1_67 == ((unsigned char) var_1_56)) : 1)) && ((! (var_1_106 <= (var_1_21 & var_1_62))) ? (((max (-8 , -200)) > (max ((var_1_6 + var_1_100) , (var_1_7 / var_1_44)))) ? (var_1_68 == ((unsigned char) ((var_1_87 || var_1_56) && ((var_1_70 && var_1_71) && (var_1_104 || var_1_72))))) : (var_1_68 == ((unsigned char) (var_1_65 || var_1_56)))) : ((199.75 < ((var_1_42 + var_1_17) - (var_1_30 + var_1_41))) ? (var_1_68 == ((unsigned char) (var_1_57 || var_1_73))) : 1))) && (((var_1_14 + var_1_24) < 255.75) ? ((last_1_var_1_114 <= (- last_1_var_1_27)) ? (var_1_74 == ((unsigned short int) ((var_1_21 + var_1_76) - 500))) : (var_1_74 == ((unsigned short int) (min (((abs (var_1_19)) - (min (var_1_4 , var_1_45))) , last_1_var_1_113))))) : 1)) && ((var_1_101 >= var_1_44) ? (var_1_77 == ((signed short int) var_1_34)) : (var_1_77 == ((signed short int) (min (((max (var_1_111 , var_1_8)) + var_1_58) , var_1_62)))))) && (((var_1_102 < (var_1_19 * var_1_32)) && (var_1_35 < var_1_53)) ? ((var_1_7 < var_1_105) ? (var_1_78 == ((signed long int) 4)) : (var_1_78 == ((signed long int) (max (var_1_88 , (min (var_1_102 , var_1_47))))))) : (var_1_78 == ((signed long int) (var_1_102 - 100))))) && ((! var_1_65) ? (var_1_92 ? (var_1_79 == ((float) (var_1_30 + ((128.2f - var_1_41) + 7.5f)))) : (var_1_79 == ((float) (var_1_37 + (abs (var_1_15)))))) : ((var_1_20 >= var_1_106) ? (var_1_79 == ((float) (max (var_1_30 , var_1_42)))) : (var_1_79 == ((float) ((abs (var_1_37)) - var_1_52)))))) && (((last_1_var_1_58 + last_1_var_1_102) != last_1_var_1_102) ? ((last_1_var_1_91 > var_1_24) ? ((last_1_var_1_61 <= (var_1_62 / (min (var_1_45 , var_1_82)))) ? (var_1_80 == ((unsigned char) (last_1_var_1_87 && (! var_1_71)))) : 1) : 1) : (var_1_80 == ((unsigned char) (var_1_73 || (var_1_71 && var_1_57)))))) && ((var_1_8 >= var_1_98) ? (var_1_83 == ((unsigned char) (max (var_1_44 , ((var_1_84 - var_1_9) - var_1_45))))) : (var_1_83 == ((unsigned char) (max (1 , (var_1_6 + var_1_8))))))) && (var_1_85 == ((double) (max (var_1_52 , (127.2 - var_1_29)))))) && (((var_1_53 > var_1_113) || var_1_72) ? (var_1_86 == ((unsigned short int) var_1_46)) : ((var_1_99 < var_1_113) ? (var_1_86 == ((unsigned short int) var_1_6)) : 1))) && (last_1_var_1_68 ? ((last_1_var_1_108 < var_1_44) ? (var_1_87 == ((unsigned char) (last_1_var_1_92 || (var_1_56 && var_1_72)))) : 1) : ((var_1_72 && last_1_var_1_104) ? ((var_1_46 >= var_1_82) ? ((var_1_82 >= (min (var_1_21 , var_1_62))) ? (var_1_87 == ((unsigned char) (var_1_73 || var_1_72))) : (var_1_87 == ((unsigned char) ((var_1_60 >= var_1_9) || (! (var_1_73 || var_1_57)))))) : (var_1_87 == ((unsigned char) (! var_1_73)))) : 1))) && ((var_1_43 < var_1_20) ? (var_1_88 == ((signed short int) (max ((var_1_58 + (var_1_113 - var_1_43)) , var_1_111)))) : 1)) && (var_1_89 == ((unsigned char) ((min (var_1_84 , 128)) - var_1_90)))) && ((((max (var_1_100 , var_1_46)) << var_1_49) != (32 * (min (var_1_108 , var_1_58)))) ? (var_1_91 == ((double) (var_1_41 - var_1_29))) : (var_1_91 == ((double) (100.25 + var_1_15))))) && (var_1_68 ? ((var_1_34 <= var_1_7) ? ((((var_1_24 * var_1_15) * var_1_29) <= (var_1_42 * var_1_25)) ? ((-64 >= var_1_82) ? (var_1_92 == ((unsigned char) (! var_1_73))) : 1) : ((((abs (var_1_44)) >> var_1_93) <= ((var_1_100 + var_1_58) + -64)) ? (var_1_92 == ((unsigned char) (! var_1_73))) : (var_1_92 == ((unsigned char) ((var_1_73 || var_1_57) || var_1_94))))) : 1) : 1)) && (var_1_68 ? (var_1_95 == ((signed char) ((var_1_96 - var_1_93) - (var_1_97 - (var_1_9 + 25))))) : (var_1_95 == ((signed char) (var_1_8 + var_1_93))))) && ((var_1_72 || (var_1_13 <= 10.8)) ? (var_1_98 == ((unsigned char) ((min ((var_1_8 + var_1_93) , var_1_9)) + var_1_90))) : (var_1_98 == ((unsigned char) (var_1_8 + var_1_97))))) && (var_1_99 == ((signed short int) (max ((var_1_101 + var_1_31) , var_1_62))))) && ((var_1_86 <= (max (var_1_53 , (abs (5))))) ? (var_1_100 == ((unsigned char) (var_1_44 + 5))) : (var_1_100 == ((unsigned char) (var_1_84 - (var_1_7 + var_1_9)))))) && ((var_1_113 >= var_1_49) ? (var_1_101 == ((signed long int) var_1_97)) : 1)) && (var_1_104 ? (var_1_102 == ((unsigned long int) var_1_35)) : 1)) && (last_1_var_1_103 ? (var_1_103 == ((unsigned char) var_1_70)) : 1)) && (var_1_104 == ((unsigned char) var_1_94))) && (var_1_71 ? (var_1_105 == ((unsigned long int) var_1_96)) : (var_1_105 == ((unsigned long int) 4u)))) && (var_1_106 == ((unsigned char) var_1_9))) && (var_1_107 == ((signed char) var_1_93))) && (var_1_80 ? (var_1_108 == ((signed short int) var_1_109)) : (var_1_108 == ((signed short int) var_1_63)))) && (var_1_103 ? (var_1_110 == ((double) var_1_41)) : (var_1_110 == ((double) var_1_14)))) && (var_1_87 ? (var_1_111 == ((signed short int) var_1_89)) : 1)) && (var_1_73 ? (var_1_112 == ((signed char) var_1_8)) : (var_1_112 == ((signed char) var_1_7)))) && (var_1_56 ? (var_1_113 == ((unsigned long int) var_1_7)) : (var_1_113 == ((unsigned long int) last_1_var_1_49)))) && ((! (var_1_74 > (16 * var_1_111))) ? (var_1_114 == ((float) (min (var_1_29 , var_1_30)))) : 1)) && ((var_1_102 <= (min ((var_1_47 * 64) , var_1_78))) ? (var_1_116 == ((signed short int) var_1_82)) : 1)
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
