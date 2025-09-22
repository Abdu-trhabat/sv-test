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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 128;
unsigned char var_1_4 = 64;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 128;
unsigned char var_1_7 = 32;
double var_1_13 = 4.75;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 5;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -32;
double var_1_19 = 127.75;
double var_1_20 = 999.2;
double var_1_21 = 9999999999999.625;
double var_1_22 = 50.78;
double var_1_23 = 0.4;
signed char var_1_24 = -128;
double var_1_25 = 8.125;
float var_1_26 = 128.2;
signed char var_1_27 = 100;
signed char var_1_28 = 32;
signed char var_1_29 = 5;
unsigned char var_1_30 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed long int var_1_34 = 4;
float var_1_35 = 127.2;
signed long int var_1_36 = 2;
unsigned long int var_1_37 = 64;
unsigned long int var_1_38 = 1957811518;
unsigned char var_1_39 = 1;
unsigned long int var_1_40 = 8;
unsigned long int var_1_41 = 3498388007;
float var_1_42 = 0.0;
unsigned long int var_1_43 = 16;
float var_1_44 = 3.75;
double var_1_45 = 5.8;
double var_1_46 = 10.75;
float var_1_47 = 32.5;
float var_1_48 = 63.5;
float var_1_49 = 7.76;
float var_1_50 = 1000000.5;
signed long int var_1_51 = -64;
double var_1_52 = 31.75;
signed short int var_1_53 = 25;
signed short int var_1_55 = 64;
unsigned short int var_1_56 = 2;
signed short int var_1_57 = 16;
double var_1_58 = 3.75;
signed char var_1_59 = -2;
unsigned long int var_1_60 = 8;
signed char var_1_61 = 64;
unsigned short int var_1_62 = 0;
float var_1_63 = 4.2;
unsigned char var_1_64 = 1;
unsigned short int var_1_65 = 64;
signed char var_1_66 = 16;
signed char var_1_67 = -32;
signed char var_1_69 = 32;
signed char var_1_70 = 0;
signed char var_1_71 = 2;
unsigned long int var_1_72 = 200;
float var_1_73 = 127.5;
unsigned short int var_1_74 = 1;
float var_1_75 = 256.625;
unsigned char var_1_76 = 64;
double var_1_77 = 499.5;
double var_1_79 = 8.25;
unsigned long int var_1_80 = 0;
unsigned long int var_1_81 = 2139645273;
unsigned char var_1_82 = 64;
unsigned char var_1_83 = 100;
signed long int var_1_84 = 32;
unsigned char var_1_86 = 50;
signed long int var_1_87 = -2;
signed long int var_1_88 = -64;
unsigned short int var_1_89 = 2;
unsigned short int var_1_90 = 57456;
unsigned long int var_1_91 = 25;
unsigned long int var_1_92 = 1467420637;
unsigned long int var_1_93 = 32;
unsigned long int var_1_94 = 1000;
signed short int var_1_95 = -10;
float var_1_96 = 50.75;
signed char var_1_97 = 64;
unsigned char var_1_98 = 8;
double var_1_99 = -0.4;
signed long int var_1_100 = -1;
double var_1_101 = 0.425;
unsigned short int var_1_102 = 128;
double var_1_103 = 9.25;
signed short int var_1_104 = 32;
double var_1_105 = 8.8;
signed long int var_1_106 = -8;
signed long int var_1_107 = -16;
unsigned char var_1_108 = 200;
signed long int var_1_109 = 64;
float var_1_110 = 15.45;
float var_1_112 = 10.125;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = -32;
unsigned char last_1_var_1_30 = 1;
unsigned long int last_1_var_1_37 = 64;
float last_1_var_1_42 = 0.0;
double last_1_var_1_58 = 3.75;
unsigned long int last_1_var_1_72 = 200;
signed long int last_1_var_1_84 = 32;
unsigned char last_1_var_1_86 = 50;
signed long int last_1_var_1_87 = -2;
unsigned long int last_1_var_1_93 = 32;
signed char last_1_var_1_97 = 64;
double last_1_var_1_103 = 9.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req22Batch136Amount500
	signed long int stepLocal_11 = last_1_var_1_18;
	unsigned char stepLocal_10 = last_1_var_1_30;
	if ((var_1_38 * var_1_6) > stepLocal_11) {
		if (stepLocal_10 && var_1_39) {
			var_1_58 = ((min (var_1_49 , var_1_47)) + var_1_21);
		} else {
			var_1_58 = (min (var_1_47 , var_1_21));
		}
	}


	// From: Req17Batch136Amount500
	if ((last_1_var_1_103 + last_1_var_1_58) <= ((var_1_52 - var_1_25) * last_1_var_1_42)) {
		var_1_51 = (var_1_29 - (min ((min (var_1_5 , last_1_var_1_93)) , var_1_4)));
	} else {
		var_1_51 = (last_1_var_1_97 + ((var_1_17 - var_1_15) + last_1_var_1_86));
	}


	// From: Req10Batch136Amount500
	if (var_1_33) {
		var_1_36 = (max (last_1_var_1_87 , var_1_15));
	}


	// From: Req3Batch136Amount500
	if ((200 - var_1_7) <= -100) {
		var_1_19 = ((max (var_1_20 , (var_1_21 + var_1_22))) - (7.823787087124585E18 - var_1_23));
	}


	// From: Req4Batch136Amount500
	if (var_1_23 > (max ((15.5 - var_1_25) , var_1_13))) {
		var_1_24 = (max (var_1_17 , var_1_16));
	} else {
		if (var_1_21 == var_1_58) {
			var_1_24 = ((var_1_17 + (5 + 16)) - var_1_16);
		}
	}


	// From: Req8Batch136Amount500
	var_1_34 = var_1_16;


	// From: Req9Batch136Amount500
	signed long int stepLocal_3 = (var_1_16 | var_1_28) + (min (var_1_7 , var_1_17));
	if ((var_1_15 / (min (var_1_5 , var_1_6))) <= stepLocal_3) {
		var_1_35 = 8.5f;
	}


	// From: Req20Batch136Amount500
	if (var_1_32) {
		var_1_56 = (49749 - (abs (min (var_1_29 , var_1_6))));
	}


	// From: Req24Batch136Amount500
	var_1_62 = var_1_16;


	// From: Req26Batch136Amount500
	var_1_64 = (var_1_33 || var_1_39);


	// From: Req27Batch136Amount500
	if (var_1_39) {
		var_1_65 = (abs (var_1_61));
	}


	// From: Req34Batch136Amount500
	var_1_82 = (((var_1_83 - var_1_60) - (32 - var_1_71)) + (min ((abs (var_1_70)) , var_1_4)));


	// From: Req41Batch136Amount500
	if (var_1_64) {
		var_1_93 = var_1_94;
	} else {
		var_1_93 = var_1_56;
	}


	// From: Req43Batch136Amount500
	var_1_96 = var_1_47;


	// From: Req44Batch136Amount500
	var_1_97 = var_1_70;


	// From: Req45Batch136Amount500
	var_1_98 = var_1_71;


	// From: Req46Batch136Amount500
	var_1_99 = var_1_22;


	// From: Req48Batch136Amount500
	if (var_1_64) {
		var_1_101 = var_1_23;
	} else {
		var_1_101 = var_1_48;
	}


	// From: Req49Batch136Amount500
	var_1_102 = var_1_4;


	// From: Req50Batch136Amount500
	if (var_1_39) {
		var_1_103 = var_1_22;
	} else {
		var_1_103 = var_1_49;
	}


	// From: Req51Batch136Amount500
	var_1_104 = var_1_67;


	// From: Req52Batch136Amount500
	var_1_105 = 1.5;


	// From: Req54Batch136Amount500
	if (var_1_64) {
		var_1_107 = var_1_67;
	}


	// From: Req56Batch136Amount500
	var_1_109 = var_1_28;


	// From: Req12Batch136Amount500
	if ((abs (var_1_105)) < var_1_21) {
		var_1_40 = (var_1_41 - 8u);
	} else {
		var_1_40 = (var_1_4 + (var_1_51 + var_1_7));
	}


	// From: Req13Batch136Amount500
	if ((! (var_1_40 <= var_1_93)) && (! var_1_32)) {
		var_1_42 = (var_1_21 - (var_1_23 + var_1_22));
	} else {
		var_1_42 = (var_1_23 - (abs (var_1_20)));
	}


	// From: Req5Batch136Amount500
	if (var_1_64) {
		var_1_26 = (var_1_23 + var_1_21);
	}


	// From: Req7Batch136Amount500
	if (var_1_64) {
		var_1_30 = (var_1_64 && var_1_32);
	} else {
		var_1_30 = var_1_33;
	}


	// From: Req11Batch136Amount500
	signed long int stepLocal_5 = ~ var_1_15;
	unsigned char stepLocal_4 = var_1_33;
	if ((var_1_20 > var_1_105) || stepLocal_4) {
		var_1_37 = ((min ((var_1_38 - var_1_15) , var_1_6)) + var_1_17);
	} else {
		if (last_1_var_1_37 < stepLocal_5) {
			var_1_37 = (((1000000000u - 64u) + var_1_107) + var_1_29);
		}
	}


	// From: Req14Batch136Amount500
	if (8.652 > var_1_99) {
		var_1_43 = (var_1_41 - var_1_16);
	}


	// From: Req25Batch136Amount500
	if (! (var_1_41 == var_1_37)) {
		var_1_63 = var_1_20;
	} else {
		if (var_1_105 == var_1_23) {
			var_1_63 = var_1_20;
		} else {
			var_1_63 = (min (var_1_23 , ((var_1_22 - var_1_21) + var_1_47)));
		}
	}


	// From: Req28Batch136Amount500
	if (var_1_30) {
		var_1_66 = (var_1_61 - var_1_17);
	} else {
		var_1_66 = (var_1_67 + var_1_69);
	}


	// From: Req32Batch136Amount500
	if (var_1_30) {
		var_1_77 = var_1_20;
	} else {
		var_1_77 = ((min (var_1_21 , (var_1_22 - var_1_75))) + (var_1_79 + var_1_49));
	}


	// From: Req33Batch136Amount500
	if (var_1_30) {
		if (var_1_39) {
			if (var_1_63 <= var_1_20) {
				var_1_80 = var_1_60;
			} else {
				var_1_80 = (max (((var_1_38 + var_1_81) - var_1_69) , (min (32u , var_1_29))));
			}
		}
	}


	// From: Req36Batch136Amount500
	if (var_1_43 >= (var_1_28 + var_1_65)) {
		var_1_86 = ((min (32 , (var_1_70 + var_1_74))) + 4);
	} else {
		var_1_86 = (var_1_6 - (min (25 , 16)));
	}


	// From: Req38Batch136Amount500
	unsigned char stepLocal_12 = var_1_33;
	if (var_1_64) {
		if (stepLocal_12 && var_1_30) {
			var_1_88 = var_1_5;
		}
	}


	// From: Req39Batch136Amount500
	if (var_1_21 >= (- var_1_101)) {
		var_1_89 = (var_1_90 - var_1_6);
	} else {
		var_1_89 = (var_1_15 + var_1_7);
	}


	// From: Req55Batch136Amount500
	if (var_1_30) {
		var_1_108 = 4;
	}


	// From: Req57Batch136Amount500
	if ((var_1_43 % var_1_4) >= var_1_51) {
		if (var_1_13 > 255.5) {
			var_1_110 = (max ((var_1_79 + var_1_23) , (var_1_112 + (abs (var_1_21)))));
		} else {
			if (var_1_64) {
				var_1_110 = var_1_112;
			} else {
				if (var_1_64) {
					var_1_110 = var_1_21;
				}
			}
		}
	} else {
		var_1_110 = var_1_21;
	}


	// From: Req47Batch136Amount500
	if (var_1_33) {
		var_1_100 = var_1_51;
	} else {
		var_1_100 = var_1_89;
	}


	// From: Req53Batch136Amount500
	var_1_106 = var_1_100;


	// From: Req18Batch136Amount500
	unsigned char stepLocal_7 = ! var_1_30;
	signed long int stepLocal_6 = var_1_7 / var_1_6;
	if (((var_1_98 * var_1_28) * var_1_93) <= stepLocal_6) {
		if (! (var_1_22 > var_1_77)) {
			if (var_1_32 || stepLocal_7) {
				var_1_53 = (var_1_36 + var_1_16);
			} else {
				var_1_53 = (4 - var_1_4);
			}
		} else {
			var_1_53 = (max ((max (var_1_7 , var_1_5)) , (var_1_16 - (max (var_1_17 , var_1_6)))));
		}
	}


	// From: Req19Batch136Amount500
	unsigned char stepLocal_9 = (var_1_20 <= var_1_21) && (64u >= var_1_34);
	unsigned long int stepLocal_8 = var_1_93;
	if (stepLocal_8 < (var_1_28 / var_1_6)) {
		if ((! 1) && stepLocal_9) {
			var_1_55 = (abs (max (var_1_15 , var_1_17)));
		} else {
			var_1_55 = (min (((64 - var_1_7) + var_1_53) , var_1_15));
		}
	}


	// From: Req35Batch136Amount500
	if (var_1_33) {
		var_1_84 = (var_1_17 + last_1_var_1_84);
	} else {
		if (var_1_69 >= ((-10 + var_1_41) * var_1_74)) {
			var_1_84 = (max ((max (var_1_82 , (max (var_1_89 , var_1_93)))) , var_1_36));
		} else {
			if (var_1_19 < (max ((min (var_1_99 , 255.2)) , var_1_101))) {
				var_1_84 = (abs (var_1_24));
			}
		}
	}


	// From: Req37Batch136Amount500
	if (var_1_64 && var_1_39) {
		if (var_1_104 == last_1_var_1_87) {
			if (var_1_84 < var_1_17) {
				var_1_87 = ((var_1_16 - (abs (var_1_71))) + var_1_61);
			}
		} else {
			var_1_87 = (max (last_1_var_1_87 , (abs (var_1_7 - var_1_74))));
		}
	} else {
		if (var_1_36 == (var_1_16 + var_1_93)) {
			var_1_87 = (var_1_6 + var_1_88);
		} else {
			if (! var_1_33) {
				var_1_87 = (var_1_61 + var_1_62);
			} else {
				if ((var_1_40 != (var_1_55 % var_1_6)) || (var_1_33 && (! var_1_64))) {
					var_1_87 = (((max (var_1_104 , var_1_6)) + var_1_34) - (max (var_1_89 , 50)));
				} else {
					var_1_87 = (var_1_89 + (min (var_1_43 , var_1_88)));
				}
			}
		}
	}


	// From: Req1Batch136Amount500
	if (var_1_36 < var_1_37) {
		var_1_1 = ((min ((var_1_4 + 64) , (max (var_1_5 , var_1_6)))) - var_1_7);
	} else {
		if ((var_1_103 * (- var_1_103)) > (min (var_1_58 , (var_1_99 + var_1_19)))) {
			if (((256.75 - var_1_13) * var_1_103) <= var_1_58) {
				if (var_1_103 >= var_1_99) {
					if (var_1_30) {
						var_1_1 = (min ((min (var_1_5 , (max (var_1_6 , var_1_4)))) , (var_1_15 - var_1_7)));
					}
				} else {
					var_1_1 = (var_1_7 + ((max (64 , var_1_16)) + var_1_17));
				}
			} else {
				var_1_1 = (max (var_1_5 , var_1_4));
			}
		} else {
			var_1_1 = (min ((var_1_6 - 2) , var_1_16));
		}
	}


	// From: Req16Batch136Amount500
	if ((~ var_1_106) < 128) {
		var_1_50 = (((max (var_1_47 , var_1_49)) + var_1_48) + (var_1_23 - (abs (var_1_21))));
	} else {
		if ((var_1_41 / (max (var_1_4 , var_1_5))) != var_1_29) {
			var_1_50 = (var_1_21 + var_1_47);
		} else {
			if (var_1_106 >= ((var_1_6 % var_1_5) + var_1_16)) {
				var_1_50 = ((max ((min (var_1_48 , 4.8f)) , (var_1_22 - var_1_21))) + (min ((max (3.6f , var_1_23)) , (min (var_1_47 , var_1_49)))));
			} else {
				var_1_50 = (var_1_23 + (var_1_22 - var_1_21));
			}
		}
	}


	// From: Req23Batch136Amount500
	if (var_1_101 > var_1_110) {
		var_1_59 = (var_1_29 - (max ((max (var_1_17 , var_1_16)) , (100 - 50))));
	} else {
		if ((max (var_1_15 , var_1_38)) < (256u >> var_1_60)) {
			var_1_59 = (var_1_16 - (var_1_61 - var_1_17));
		}
	}


	// From: Req29Batch136Amount500
	if (var_1_13 < var_1_23) {
		var_1_72 = ((max ((var_1_38 - var_1_69) , last_1_var_1_72)) + (var_1_100 + var_1_7));
	} else {
		var_1_72 = (var_1_41 - (var_1_29 + (max (var_1_70 , var_1_5))));
	}


	// From: Req30Batch136Amount500
	if (var_1_64) {
		if ((min (var_1_20 , var_1_47)) > var_1_77) {
			if (var_1_30 && var_1_39) {
				var_1_73 = (abs (var_1_23));
			} else {
				var_1_73 = (var_1_22 - var_1_21);
			}
		}
	} else {
		if (var_1_30) {
			if (var_1_87 < (var_1_71 << (1 - var_1_74))) {
				var_1_73 = (0.6f - var_1_21);
			} else {
				var_1_73 = ((var_1_23 - var_1_22) + ((abs (var_1_21)) - var_1_75));
			}
		}
	}


	// From: Req31Batch136Amount500
	if (var_1_63 > var_1_19) {
		var_1_76 = var_1_29;
	} else {
		if ((~ var_1_7) > (min (var_1_28 , (var_1_17 * var_1_72)))) {
			var_1_76 = (var_1_29 + var_1_16);
		} else {
			var_1_76 = (min (200 , var_1_5));
		}
	}


	// From: Req40Batch136Amount500
	signed long int stepLocal_13 = var_1_106;
	if (((var_1_92 + var_1_81) - var_1_15) != stepLocal_13) {
		var_1_91 = var_1_86;
	} else {
		var_1_91 = var_1_71;
	}


	// From: Req42Batch136Amount500
	var_1_95 = var_1_84;


	// From: Req2Batch136Amount500
	if (var_1_13 > var_1_58) {
		var_1_18 = (last_1_var_1_18 - var_1_16);
	} else {
		var_1_18 = (max (-16 , (var_1_6 - var_1_106)));
	}


	// From: Req6Batch136Amount500
	signed long int stepLocal_2 = (var_1_16 << var_1_1) / var_1_5;
	unsigned char stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = var_1_6 - (max (4 , var_1_7));
	if (var_1_20 >= (var_1_13 - var_1_23)) {
		if (stepLocal_2 >= var_1_76) {
			if (stepLocal_0 < var_1_1) {
				var_1_27 = (min ((var_1_16 - var_1_17) , var_1_28));
			} else {
				if (stepLocal_1 > var_1_18) {
					var_1_27 = var_1_17;
				} else {
					var_1_27 = (var_1_17 - (max (var_1_16 , var_1_29)));
				}
			}
		}
	} else {
		var_1_27 = (min (var_1_16 , var_1_17));
	}


	// From: Req15Batch136Amount500
	if ((var_1_77 / (max (var_1_45 , var_1_46))) != (max (var_1_23 , var_1_73))) {
		if (var_1_50 != (- (max (var_1_25 , var_1_46)))) {
			if (var_1_33 && var_1_64) {
				var_1_44 = (var_1_21 + (min (var_1_22 , var_1_23)));
			}
		}
	} else {
		var_1_44 = ((var_1_47 + (min (var_1_48 , var_1_49))) + var_1_22);
	}


	// From: Req21Batch136Amount500
	if (var_1_30 && (var_1_39 && var_1_64)) {
		var_1_57 = (abs ((min (var_1_98 , var_1_65)) + (var_1_15 + var_1_6)));
	} else {
		if (var_1_46 > var_1_103) {
			if ((var_1_98 * var_1_106) > var_1_72) {
				var_1_57 = (min ((abs (var_1_65)) , var_1_15));
			}
		} else {
			var_1_57 = (((var_1_29 - 32) + var_1_7) + ((var_1_16 + var_1_4) - 2));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 63);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 127);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 64);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1073741823);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -230584.3009213691400e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -230584.3009213691400e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 31);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 63);
	assume_abort_if_not(var_1_61 <= 126);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -63);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 31);
	assume_abort_if_not(var_1_69 <= 63);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 32);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 31);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 1);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -230584.3009213691400e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691400e+12F && var_1_79 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 1073741824);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 95);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 32767);
	assume_abort_if_not(var_1_90 <= 65534);
	var_1_92 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_92 >= 1073741823);
	assume_abort_if_not(var_1_92 <= 2147483648);
	var_1_94 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 4294967294);
	var_1_112 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_112 >= -461168.6018427383000e+13F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 4611686.018427383000e+12F && var_1_112 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_103 = var_1_103;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_36 < var_1_37) ? (var_1_1 == ((unsigned char) ((min ((var_1_4 + 64) , (max (var_1_5 , var_1_6)))) - var_1_7))) : (((var_1_103 * (- var_1_103)) > (min (var_1_58 , (var_1_99 + var_1_19)))) ? ((((256.75 - var_1_13) * var_1_103) <= var_1_58) ? ((var_1_103 >= var_1_99) ? (var_1_30 ? (var_1_1 == ((unsigned char) (min ((min (var_1_5 , (max (var_1_6 , var_1_4)))) , (var_1_15 - var_1_7))))) : 1) : (var_1_1 == ((unsigned char) (var_1_7 + ((max (64 , var_1_16)) + var_1_17))))) : (var_1_1 == ((unsigned char) (max (var_1_5 , var_1_4))))) : (var_1_1 == ((unsigned char) (min ((var_1_6 - 2) , var_1_16)))))) && ((var_1_13 > var_1_58) ? (var_1_18 == ((signed long int) (last_1_var_1_18 - var_1_16))) : (var_1_18 == ((signed long int) (max (-16 , (var_1_6 - var_1_106))))))) && (((200 - var_1_7) <= -100) ? (var_1_19 == ((double) ((max (var_1_20 , (var_1_21 + var_1_22))) - (7.823787087124585E18 - var_1_23)))) : 1)) && ((var_1_23 > (max ((15.5 - var_1_25) , var_1_13))) ? (var_1_24 == ((signed char) (max (var_1_17 , var_1_16)))) : ((var_1_21 == var_1_58) ? (var_1_24 == ((signed char) ((var_1_17 + (5 + 16)) - var_1_16))) : 1))) && (var_1_64 ? (var_1_26 == ((float) (var_1_23 + var_1_21))) : 1)) && ((var_1_20 >= (var_1_13 - var_1_23)) ? ((((var_1_16 << var_1_1) / var_1_5) >= var_1_76) ? (((var_1_6 - (max (4 , var_1_7))) < var_1_1) ? (var_1_27 == ((signed char) (min ((var_1_16 - var_1_17) , var_1_28)))) : ((var_1_5 > var_1_18) ? (var_1_27 == ((signed char) var_1_17)) : (var_1_27 == ((signed char) (var_1_17 - (max (var_1_16 , var_1_29))))))) : 1) : (var_1_27 == ((signed char) (min (var_1_16 , var_1_17)))))) && (var_1_64 ? (var_1_30 == ((unsigned char) (var_1_64 && var_1_32))) : (var_1_30 == ((unsigned char) var_1_33)))) && (var_1_34 == ((signed long int) var_1_16))) && (((var_1_15 / (min (var_1_5 , var_1_6))) <= ((var_1_16 | var_1_28) + (min (var_1_7 , var_1_17)))) ? (var_1_35 == ((float) 8.5f)) : 1)) && (var_1_33 ? (var_1_36 == ((signed long int) (max (last_1_var_1_87 , var_1_15)))) : 1)) && (((var_1_20 > var_1_105) || var_1_33) ? (var_1_37 == ((unsigned long int) ((min ((var_1_38 - var_1_15) , var_1_6)) + var_1_17))) : ((last_1_var_1_37 < (~ var_1_15)) ? (var_1_37 == ((unsigned long int) (((1000000000u - 64u) + var_1_107) + var_1_29))) : 1))) && (((abs (var_1_105)) < var_1_21) ? (var_1_40 == ((unsigned long int) (var_1_41 - 8u))) : (var_1_40 == ((unsigned long int) (var_1_4 + (var_1_51 + var_1_7)))))) && (((! (var_1_40 <= var_1_93)) && (! var_1_32)) ? (var_1_42 == ((float) (var_1_21 - (var_1_23 + var_1_22)))) : (var_1_42 == ((float) (var_1_23 - (abs (var_1_20))))))) && ((8.652 > var_1_99) ? (var_1_43 == ((unsigned long int) (var_1_41 - var_1_16))) : 1)) && (((var_1_77 / (max (var_1_45 , var_1_46))) != (max (var_1_23 , var_1_73))) ? ((var_1_50 != (- (max (var_1_25 , var_1_46)))) ? ((var_1_33 && var_1_64) ? (var_1_44 == ((float) (var_1_21 + (min (var_1_22 , var_1_23))))) : 1) : 1) : (var_1_44 == ((float) ((var_1_47 + (min (var_1_48 , var_1_49))) + var_1_22))))) && (((~ var_1_106) < 128) ? (var_1_50 == ((float) (((max (var_1_47 , var_1_49)) + var_1_48) + (var_1_23 - (abs (var_1_21)))))) : (((var_1_41 / (max (var_1_4 , var_1_5))) != var_1_29) ? (var_1_50 == ((float) (var_1_21 + var_1_47))) : ((var_1_106 >= ((var_1_6 % var_1_5) + var_1_16)) ? (var_1_50 == ((float) ((max ((min (var_1_48 , 4.8f)) , (var_1_22 - var_1_21))) + (min ((max (3.6f , var_1_23)) , (min (var_1_47 , var_1_49))))))) : (var_1_50 == ((float) (var_1_23 + (var_1_22 - var_1_21)))))))) && (((last_1_var_1_103 + last_1_var_1_58) <= ((var_1_52 - var_1_25) * last_1_var_1_42)) ? (var_1_51 == ((signed long int) (var_1_29 - (min ((min (var_1_5 , last_1_var_1_93)) , var_1_4))))) : (var_1_51 == ((signed long int) (last_1_var_1_97 + ((var_1_17 - var_1_15) + last_1_var_1_86)))))) && ((((var_1_98 * var_1_28) * var_1_93) <= (var_1_7 / var_1_6)) ? ((! (var_1_22 > var_1_77)) ? ((var_1_32 || (! var_1_30)) ? (var_1_53 == ((signed short int) (var_1_36 + var_1_16))) : (var_1_53 == ((signed short int) (4 - var_1_4)))) : (var_1_53 == ((signed short int) (max ((max (var_1_7 , var_1_5)) , (var_1_16 - (max (var_1_17 , var_1_6)))))))) : 1)) && ((var_1_93 < (var_1_28 / var_1_6)) ? (((! 1) && ((var_1_20 <= var_1_21) && (64u >= var_1_34))) ? (var_1_55 == ((signed short int) (abs (max (var_1_15 , var_1_17))))) : (var_1_55 == ((signed short int) (min (((64 - var_1_7) + var_1_53) , var_1_15))))) : 1)) && (var_1_32 ? (var_1_56 == ((unsigned short int) (49749 - (abs (min (var_1_29 , var_1_6)))))) : 1)) && ((var_1_30 && (var_1_39 && var_1_64)) ? (var_1_57 == ((signed short int) (abs ((min (var_1_98 , var_1_65)) + (var_1_15 + var_1_6))))) : ((var_1_46 > var_1_103) ? (((var_1_98 * var_1_106) > var_1_72) ? (var_1_57 == ((signed short int) (min ((abs (var_1_65)) , var_1_15)))) : 1) : (var_1_57 == ((signed short int) (((var_1_29 - 32) + var_1_7) + ((var_1_16 + var_1_4) - 2))))))) && (((var_1_38 * var_1_6) > last_1_var_1_18) ? ((last_1_var_1_30 && var_1_39) ? (var_1_58 == ((double) ((min (var_1_49 , var_1_47)) + var_1_21))) : (var_1_58 == ((double) (min (var_1_47 , var_1_21))))) : 1)) && ((var_1_101 > var_1_110) ? (var_1_59 == ((signed char) (var_1_29 - (max ((max (var_1_17 , var_1_16)) , (100 - 50)))))) : (((max (var_1_15 , var_1_38)) < (256u >> var_1_60)) ? (var_1_59 == ((signed char) (var_1_16 - (var_1_61 - var_1_17)))) : 1))) && (var_1_62 == ((unsigned short int) var_1_16))) && ((! (var_1_41 == var_1_37)) ? (var_1_63 == ((float) var_1_20)) : ((var_1_105 == var_1_23) ? (var_1_63 == ((float) var_1_20)) : (var_1_63 == ((float) (min (var_1_23 , ((var_1_22 - var_1_21) + var_1_47)))))))) && (var_1_64 == ((unsigned char) (var_1_33 || var_1_39)))) && (var_1_39 ? (var_1_65 == ((unsigned short int) (abs (var_1_61)))) : 1)) && (var_1_30 ? (var_1_66 == ((signed char) (var_1_61 - var_1_17))) : (var_1_66 == ((signed char) (var_1_67 + var_1_69))))) && ((var_1_13 < var_1_23) ? (var_1_72 == ((unsigned long int) ((max ((var_1_38 - var_1_69) , last_1_var_1_72)) + (var_1_100 + var_1_7)))) : (var_1_72 == ((unsigned long int) (var_1_41 - (var_1_29 + (max (var_1_70 , var_1_5)))))))) && (var_1_64 ? (((min (var_1_20 , var_1_47)) > var_1_77) ? ((var_1_30 && var_1_39) ? (var_1_73 == ((float) (abs (var_1_23)))) : (var_1_73 == ((float) (var_1_22 - var_1_21)))) : 1) : (var_1_30 ? ((var_1_87 < (var_1_71 << (1 - var_1_74))) ? (var_1_73 == ((float) (0.6f - var_1_21))) : (var_1_73 == ((float) ((var_1_23 - var_1_22) + ((abs (var_1_21)) - var_1_75))))) : 1))) && ((var_1_63 > var_1_19) ? (var_1_76 == ((unsigned char) var_1_29)) : (((~ var_1_7) > (min (var_1_28 , (var_1_17 * var_1_72)))) ? (var_1_76 == ((unsigned char) (var_1_29 + var_1_16))) : (var_1_76 == ((unsigned char) (min (200 , var_1_5))))))) && (var_1_30 ? (var_1_77 == ((double) var_1_20)) : (var_1_77 == ((double) ((min (var_1_21 , (var_1_22 - var_1_75))) + (var_1_79 + var_1_49)))))) && (var_1_30 ? (var_1_39 ? ((var_1_63 <= var_1_20) ? (var_1_80 == ((unsigned long int) var_1_60)) : (var_1_80 == ((unsigned long int) (max (((var_1_38 + var_1_81) - var_1_69) , (min (32u , var_1_29))))))) : 1) : 1)) && (var_1_82 == ((unsigned char) (((var_1_83 - var_1_60) - (32 - var_1_71)) + (min ((abs (var_1_70)) , var_1_4)))))) && (var_1_33 ? (var_1_84 == ((signed long int) (var_1_17 + last_1_var_1_84))) : ((var_1_69 >= ((-10 + var_1_41) * var_1_74)) ? (var_1_84 == ((signed long int) (max ((max (var_1_82 , (max (var_1_89 , var_1_93)))) , var_1_36)))) : ((var_1_19 < (max ((min (var_1_99 , 255.2)) , var_1_101))) ? (var_1_84 == ((signed long int) (abs (var_1_24)))) : 1)))) && ((var_1_43 >= (var_1_28 + var_1_65)) ? (var_1_86 == ((unsigned char) ((min (32 , (var_1_70 + var_1_74))) + 4))) : (var_1_86 == ((unsigned char) (var_1_6 - (min (25 , 16))))))) && ((var_1_64 && var_1_39) ? ((var_1_104 == last_1_var_1_87) ? ((var_1_84 < var_1_17) ? (var_1_87 == ((signed long int) ((var_1_16 - (abs (var_1_71))) + var_1_61))) : 1) : (var_1_87 == ((signed long int) (max (last_1_var_1_87 , (abs (var_1_7 - var_1_74))))))) : ((var_1_36 == (var_1_16 + var_1_93)) ? (var_1_87 == ((signed long int) (var_1_6 + var_1_88))) : ((! var_1_33) ? (var_1_87 == ((signed long int) (var_1_61 + var_1_62))) : (((var_1_40 != (var_1_55 % var_1_6)) || (var_1_33 && (! var_1_64))) ? (var_1_87 == ((signed long int) (((max (var_1_104 , var_1_6)) + var_1_34) - (max (var_1_89 , 50))))) : (var_1_87 == ((signed long int) (var_1_89 + (min (var_1_43 , var_1_88)))))))))) && (var_1_64 ? ((var_1_33 && var_1_30) ? (var_1_88 == ((signed long int) var_1_5)) : 1) : 1)) && ((var_1_21 >= (- var_1_101)) ? (var_1_89 == ((unsigned short int) (var_1_90 - var_1_6))) : (var_1_89 == ((unsigned short int) (var_1_15 + var_1_7))))) && ((((var_1_92 + var_1_81) - var_1_15) != var_1_106) ? (var_1_91 == ((unsigned long int) var_1_86)) : (var_1_91 == ((unsigned long int) var_1_71)))) && (var_1_64 ? (var_1_93 == ((unsigned long int) var_1_94)) : (var_1_93 == ((unsigned long int) var_1_56)))) && (var_1_95 == ((signed short int) var_1_84))) && (var_1_96 == ((float) var_1_47))) && (var_1_97 == ((signed char) var_1_70))) && (var_1_98 == ((unsigned char) var_1_71))) && (var_1_99 == ((double) var_1_22))) && (var_1_33 ? (var_1_100 == ((signed long int) var_1_51)) : (var_1_100 == ((signed long int) var_1_89)))) && (var_1_64 ? (var_1_101 == ((double) var_1_23)) : (var_1_101 == ((double) var_1_48)))) && (var_1_102 == ((unsigned short int) var_1_4))) && (var_1_39 ? (var_1_103 == ((double) var_1_22)) : (var_1_103 == ((double) var_1_49)))) && (var_1_104 == ((signed short int) var_1_67))) && (var_1_105 == ((double) 1.5))) && (var_1_106 == ((signed long int) var_1_100))) && (var_1_64 ? (var_1_107 == ((signed long int) var_1_67)) : 1)) && (var_1_30 ? (var_1_108 == ((unsigned char) 4)) : 1)) && (var_1_109 == ((signed long int) var_1_28))) && (((var_1_43 % var_1_4) >= var_1_51) ? ((var_1_13 > 255.5) ? (var_1_110 == ((float) (max ((var_1_79 + var_1_23) , (var_1_112 + (abs (var_1_21))))))) : (var_1_64 ? (var_1_110 == ((float) var_1_112)) : (var_1_64 ? (var_1_110 == ((float) var_1_21)) : 1))) : (var_1_110 == ((float) var_1_21)))
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
