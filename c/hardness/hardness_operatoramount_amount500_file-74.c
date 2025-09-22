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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch74Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 16.66;
unsigned char var_1_3 = 32;
double var_1_4 = 49.275;
double var_1_7 = -0.5;
double var_1_8 = -0.4;
unsigned char var_1_9 = 25;
float var_1_10 = 127.075;
float var_1_11 = 1.2;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 64;
unsigned long int var_1_17 = 32;
unsigned short int var_1_18 = 50;
unsigned short int var_1_19 = 49701;
unsigned short int var_1_20 = 36280;
unsigned char var_1_21 = 2;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = 16;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
float var_1_30 = 4.5;
unsigned long int var_1_32 = 5;
unsigned long int var_1_33 = 3174452025;
double var_1_34 = 5.573;
double var_1_36 = 0.6;
double var_1_37 = 0.84;
unsigned short int var_1_38 = 256;
unsigned short int var_1_39 = 54382;
unsigned long int var_1_40 = 128;
signed char var_1_41 = 64;
signed char var_1_42 = -2;
signed char var_1_43 = 50;
signed char var_1_44 = 32;
signed char var_1_45 = 16;
signed char var_1_46 = 2;
signed short int var_1_47 = -4;
unsigned long int var_1_48 = 128;
signed short int var_1_49 = -1;
unsigned short int var_1_50 = 10;
unsigned char var_1_51 = 0;
unsigned long int var_1_52 = 4276810784;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 2;
double var_1_57 = 100.5;
double var_1_58 = 99.75;
double var_1_59 = 10000000000.5;
double var_1_60 = 1000000.5;
signed char var_1_61 = -25;
double var_1_62 = 5.6;
double var_1_63 = 100.6;
signed char var_1_64 = -16;
signed long int var_1_65 = 32;
double var_1_66 = 64.2;
double var_1_67 = 255.05;
double var_1_68 = 8.8;
double var_1_69 = 16.25;
unsigned char var_1_70 = 200;
unsigned short int var_1_71 = 16;
unsigned short int var_1_72 = 25445;
signed long int var_1_73 = -50;
signed char var_1_74 = 0;
unsigned char var_1_75 = 2;
double var_1_76 = 200.5;
unsigned long int var_1_77 = 10;
unsigned long int var_1_79 = 1711745063;
signed long int var_1_80 = 25;
unsigned short int var_1_82 = 5;
signed short int var_1_83 = -1;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 0;
signed short int var_1_86 = -1;
unsigned long int var_1_87 = 100;
unsigned long int var_1_88 = 3233109141;
unsigned long int var_1_89 = 4162634014;
unsigned long int var_1_90 = 64;
unsigned long int var_1_91 = 1000000000;
unsigned long int var_1_92 = 5;
unsigned long int var_1_93 = 1000000000;
unsigned short int var_1_94 = 0;
unsigned long int var_1_95 = 10;
signed short int var_1_96 = 1;
double var_1_97 = 2.125;
unsigned char var_1_98 = 1;
unsigned char var_1_100 = 200;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 0;
unsigned short int var_1_103 = 1;
unsigned short int var_1_104 = 5;
unsigned char var_1_105 = 5;
unsigned char var_1_106 = 2;
double var_1_107 = 63.5;
signed long int var_1_108 = 4;
signed short int var_1_109 = -8;
signed long int var_1_110 = -10;
float var_1_111 = 99999.45;
signed long int var_1_112 = 0;
unsigned char var_1_113 = 32;
unsigned short int var_1_114 = 100;
signed char var_1_115 = -128;
unsigned short int var_1_116 = 100;
unsigned long int var_1_117 = 5;
unsigned char var_1_118 = 0;
signed char var_1_119 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_23 = 1;
unsigned char last_1_var_1_28 = 1;
unsigned long int last_1_var_1_40 = 128;
unsigned long int last_1_var_1_48 = 128;
signed short int last_1_var_1_49 = -1;
signed long int last_1_var_1_73 = -50;
unsigned long int last_1_var_1_77 = 10;
signed long int last_1_var_1_80 = 25;
signed short int last_1_var_1_83 = -1;
unsigned char last_1_var_1_85 = 0;
unsigned long int last_1_var_1_92 = 5;
unsigned long int last_1_var_1_95 = 10;
signed short int last_1_var_1_109 = -8;
signed long int last_1_var_1_112 = 0;
unsigned short int last_1_var_1_116 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req31Batch74Amount500
	if (((last_1_var_1_40 * last_1_var_1_80) * last_1_var_1_73) <= var_1_45) {
		var_1_77 = (min ((abs (var_1_3)) , (var_1_33 - last_1_var_1_83)));
	} else {
		if (var_1_24) {
			if (var_1_26 && last_1_var_1_28) {
				var_1_77 = (var_1_33 - ((var_1_79 - var_1_46) - var_1_20));
			}
		} else {
			if (last_1_var_1_28) {
				var_1_77 = (min (var_1_79 , last_1_var_1_112));
			} else {
				if ((var_1_16 * -64) < (last_1_var_1_116 * var_1_20)) {
					var_1_77 = (((var_1_70 + last_1_var_1_48) + last_1_var_1_83) + (abs (var_1_3)));
				} else {
					if (var_1_62 < (abs (min (var_1_68 , var_1_60)))) {
						var_1_77 = (max ((min (var_1_33 , var_1_53)) , var_1_54));
					} else {
						var_1_77 = (min ((var_1_33 - var_1_54) , (max ((max (var_1_19 , var_1_56)) , var_1_20))));
					}
				}
			}
		}
	}


	// From: Req10Batch74Amount500
	if (var_1_19 > (- 25)) {
		var_1_32 = (var_1_33 - var_1_77);
	}


	// From: Req17Batch74Amount500
	var_1_48 = (last_1_var_1_77 + last_1_var_1_116);


	// From: Req46Batch74Amount500
	unsigned long int stepLocal_23 = var_1_48;
	if (var_1_42 != stepLocal_23) {
		var_1_102 = (! var_1_29);
	}


	// From: Req3Batch74Amount500
	var_1_17 = var_1_3;


	// From: Req6Batch74Amount500
	unsigned char stepLocal_2 = var_1_3;
	if (var_1_14 < stepLocal_2) {
		var_1_23 = ((! var_1_24) || (! (last_1_var_1_23 || var_1_25)));
	} else {
		var_1_23 = var_1_26;
	}


	// From: Req8Batch74Amount500
	var_1_28 = (var_1_26 || var_1_29);


	// From: Req12Batch74Amount500
	if (var_1_24) {
		var_1_38 = ((min ((min (var_1_19 , 52347)) , (max (var_1_20 , var_1_39)))) - var_1_3);
	}


	// From: Req15Batch74Amount500
	signed long int stepLocal_9 = var_1_39 | var_1_3;
	if ((var_1_33 * (var_1_12 * var_1_48)) < stepLocal_9) {
		if (! var_1_29) {
			var_1_43 = (var_1_15 - ((var_1_44 - var_1_45) + var_1_46));
		}
	} else {
		var_1_43 = (var_1_46 + ((var_1_44 - var_1_45) - var_1_15));
	}


	// From: Req25Batch74Amount500
	signed char stepLocal_13 = var_1_64;
	if (((var_1_70 - var_1_15) - var_1_12) <= stepLocal_13) {
		var_1_69 = (var_1_37 - var_1_68);
	}


	// From: Req28Batch74Amount500
	var_1_74 = 1;


	// From: Req30Batch74Amount500
	var_1_76 = ((abs (var_1_7)) + var_1_67);


	// From: Req33Batch74Amount500
	var_1_82 = (abs (var_1_15));


	// From: Req37Batch74Amount500
	var_1_86 = (var_1_54 + -16);


	// From: Req39Batch74Amount500
	signed long int stepLocal_19 = var_1_70 / var_1_20;
	if (var_1_24) {
		var_1_92 = ((max (var_1_13 , last_1_var_1_92)) + (var_1_79 - (var_1_93 - var_1_82)));
	} else {
		if (stepLocal_19 >= (var_1_52 / var_1_39)) {
			var_1_92 = ((max ((max (var_1_88 , var_1_33)) , var_1_89)) - var_1_54);
		}
	}


	// From: Req48Batch74Amount500
	if (((abs (var_1_68)) * var_1_62) < var_1_67) {
		var_1_105 = var_1_56;
	}


	// From: Req51Batch74Amount500
	var_1_108 = var_1_72;


	// From: Req53Batch74Amount500
	var_1_110 = var_1_53;


	// From: Req54Batch74Amount500
	var_1_111 = var_1_68;


	// From: Req55Batch74Amount500
	var_1_112 = var_1_15;


	// From: Req56Batch74Amount500
	var_1_113 = var_1_46;


	// From: Req57Batch74Amount500
	var_1_114 = var_1_14;


	// From: Req58Batch74Amount500
	if (var_1_24) {
		var_1_115 = var_1_14;
	} else {
		var_1_115 = var_1_56;
	}


	// From: Req59Batch74Amount500
	if (var_1_25) {
		var_1_116 = last_1_var_1_116;
	} else {
		var_1_116 = var_1_46;
	}


	// From: Req60Batch74Amount500
	var_1_117 = var_1_46;


	// From: Req61Batch74Amount500
	if (var_1_24) {
		var_1_118 = var_1_13;
	} else {
		var_1_118 = var_1_55;
	}


	// From: Req19Batch74Amount500
	if (var_1_48 > var_1_12) {
		var_1_50 = (min (((min (var_1_19 , var_1_20)) - 32) , var_1_117));
	} else {
		var_1_50 = var_1_14;
	}


	// From: Req16Batch74Amount500
	var_1_47 = (min (var_1_45 , var_1_50));


	// From: Req4Batch74Amount500
	unsigned char stepLocal_0 = var_1_12;
	if (var_1_14 < stepLocal_0) {
		var_1_18 = ((max (var_1_19 , var_1_20)) - var_1_47);
	}


	// From: Req11Batch74Amount500
	signed long int stepLocal_5 = var_1_12 * var_1_14;
	if (stepLocal_5 < var_1_92) {
		var_1_34 = (var_1_36 - var_1_37);
	}


	// From: Req14Batch74Amount500
	unsigned char stepLocal_8 = var_1_105;
	if (var_1_32 > stepLocal_8) {
		var_1_41 = var_1_15;
	} else {
		if (var_1_8 <= var_1_11) {
			var_1_41 = (max (var_1_42 , var_1_14));
		}
	}


	// From: Req18Batch74Amount500
	signed long int stepLocal_10 = - 1;
	if (stepLocal_10 >= var_1_12) {
		var_1_49 = (last_1_var_1_49 - var_1_12);
	} else {
		var_1_49 = (min (var_1_14 , (var_1_46 - var_1_92)));
	}


	// From: Req20Batch74Amount500
	unsigned long int stepLocal_11 = var_1_32;
	if (stepLocal_11 < ((var_1_52 - var_1_92) - (max (var_1_12 , var_1_19)))) {
		var_1_51 = ((max (var_1_53 , (min (var_1_54 , var_1_55)))) - ((abs (var_1_13)) + (var_1_44 - var_1_56)));
	} else {
		var_1_51 = (var_1_55 - var_1_12);
	}


	// From: Req23Batch74Amount500
	if (var_1_76 < var_1_10) {
		var_1_65 = var_1_16;
	} else {
		var_1_65 = (100 - 1);
	}


	// From: Req35Batch74Amount500
	signed long int stepLocal_18 = var_1_65;
	if (stepLocal_18 == var_1_46) {
		var_1_84 = var_1_25;
	}


	// From: Req41Batch74Amount500
	if (! var_1_28) {
		var_1_95 = var_1_117;
	} else {
		if (var_1_28) {
			if (var_1_23) {
				var_1_95 = (min (last_1_var_1_95 , (max (var_1_46 , var_1_110))));
			} else {
				if (! (var_1_49 > (var_1_72 / -10000))) {
					var_1_95 = var_1_77;
				} else {
					var_1_95 = (var_1_33 - ((min (var_1_56 , var_1_92)) + (abs (var_1_14))));
				}
			}
		}
	}


	// From: Req50Batch74Amount500
	if (var_1_84) {
		var_1_107 = var_1_7;
	} else {
		var_1_107 = var_1_37;
	}


	// From: Req34Batch74Amount500
	if (-50 > (var_1_13 * var_1_48)) {
		if (! var_1_26) {
			var_1_83 = (var_1_47 + var_1_86);
		}
	} else {
		var_1_83 = var_1_48;
	}


	// From: Req1Batch74Amount500
	if (var_1_86 <= (128 - var_1_3)) {
		var_1_1 = var_1_4;
	} else {
		if (var_1_84 || var_1_28) {
			var_1_1 = (var_1_7 + var_1_8);
		}
	}


	// From: Req5Batch74Amount500
	signed long int stepLocal_1 = var_1_65;
	if (stepLocal_1 == var_1_13) {
		var_1_21 = var_1_13;
	}


	// From: Req40Batch74Amount500
	if (! (var_1_83 <= var_1_32)) {
		var_1_94 = (min (var_1_14 , var_1_55));
	} else {
		if (var_1_79 <= var_1_117) {
			var_1_94 = (min ((var_1_54 + (var_1_72 - var_1_44)) , ((28081 - var_1_53) + var_1_3)));
		} else {
			var_1_94 = (abs (var_1_39));
		}
	}


	// From: Req27Batch74Amount500
	if (var_1_23 || var_1_102) {
		if (var_1_24) {
			var_1_73 = (max (var_1_32 , (var_1_94 - var_1_14)));
		} else {
			var_1_73 = ((min (var_1_64 , var_1_94)) + 256);
		}
	}


	// From: Req36Batch74Amount500
	if (0 < (var_1_73 / var_1_39)) {
		var_1_85 = (last_1_var_1_85 || (var_1_28 || var_1_24));
	} else {
		var_1_85 = (var_1_84 && var_1_26);
	}


	// From: Req2Batch74Amount500
	if (var_1_85) {
		if (255.5f != (var_1_10 - var_1_11)) {
			var_1_9 = ((abs (var_1_3)) + ((max (var_1_12 , var_1_13)) + (max (var_1_14 , var_1_15))));
		}
	} else {
		if (! var_1_84) {
			var_1_9 = (var_1_3 + var_1_15);
		} else {
			if (var_1_15 != var_1_12) {
				var_1_9 = ((var_1_16 - var_1_15) + var_1_3);
			}
		}
	}


	// From: Req49Batch74Amount500
	if (((- var_1_63) / var_1_62) < var_1_69) {
		if ((var_1_112 > (~ var_1_39)) || var_1_85) {
			var_1_106 = (var_1_53 - var_1_56);
		} else {
			if (var_1_102) {
				if (var_1_54 >= 25) {
					if (var_1_76 < var_1_7) {
						var_1_106 = var_1_12;
					} else {
						var_1_106 = var_1_54;
					}
				} else {
					var_1_106 = var_1_53;
				}
			} else {
				var_1_106 = 25;
			}
		}
	} else {
		var_1_106 = var_1_12;
	}


	// From: Req62Batch74Amount500
	unsigned char stepLocal_29 = var_1_28;
	signed long int stepLocal_28 = var_1_72 - var_1_73;
	signed short int stepLocal_27 = var_1_86;
	if (var_1_92 == stepLocal_27) {
		if (var_1_84) {
			if (stepLocal_28 >= (var_1_45 & var_1_48)) {
				if (stepLocal_29 || var_1_84) {
					var_1_119 = 64;
				} else {
					var_1_119 = -32;
				}
			} else {
				var_1_119 = var_1_100;
			}
		} else {
			var_1_119 = var_1_12;
		}
	} else {
		var_1_119 = var_1_56;
	}


	// From: Req26Batch74Amount500
	signed long int stepLocal_14 = (var_1_54 / var_1_16) / var_1_70;
	if (var_1_85) {
		var_1_71 = ((abs (var_1_14)) + (var_1_72 - var_1_12));
	} else {
		if ((var_1_77 % var_1_53) >= stepLocal_14) {
			var_1_71 = (min (var_1_21 , var_1_3));
		} else {
			var_1_71 = (min (16 , (abs (var_1_14))));
		}
	}


	// From: Req9Batch74Amount500
	signed long int stepLocal_4 = var_1_19 * var_1_106;
	signed long int stepLocal_3 = 10;
	if (var_1_3 >= stepLocal_3) {
		if (var_1_116 >= stepLocal_4) {
			if (var_1_102) {
				var_1_30 = var_1_4;
			} else {
				var_1_30 = var_1_8;
			}
		} else {
			var_1_30 = 1.000000001E8f;
		}
	}


	// From: Req52Batch74Amount500
	if (var_1_85) {
		var_1_109 = var_1_119;
	} else {
		var_1_109 = last_1_var_1_109;
	}


	// From: Req13Batch74Amount500
	unsigned short int stepLocal_7 = var_1_71;
	signed long int stepLocal_6 = - var_1_19;
	if (last_1_var_1_40 <= stepLocal_7) {
		var_1_40 = (var_1_20 + (var_1_13 + var_1_16));
	} else {
		if (var_1_14 != stepLocal_6) {
			var_1_40 = ((var_1_39 + var_1_114) + (16u + var_1_110));
		} else {
			var_1_40 = (var_1_33 - var_1_20);
		}
	}


	// From: Req24Batch74Amount500
	signed long int stepLocal_12 = var_1_39 - var_1_56;
	if (var_1_40 == stepLocal_12) {
		var_1_66 = (max (var_1_36 , ((var_1_67 - var_1_68) + var_1_58)));
	} else {
		var_1_66 = var_1_68;
	}


	// From: Req22Batch74Amount500
	if (((var_1_116 / 4) * var_1_14) > var_1_40) {
		if (4.75 > ((var_1_8 * var_1_1) / (max (var_1_62 , var_1_63)))) {
			var_1_61 = (var_1_64 + (var_1_45 + var_1_56));
		} else {
			var_1_61 = -4;
		}
	}


	// From: Req38Batch74Amount500
	if (var_1_23) {
		if (var_1_69 != (15.25 - 99.75)) {
			if (var_1_61 < (-2 / var_1_44)) {
				var_1_87 = ((var_1_32 + (max (var_1_16 , var_1_39))) + var_1_45);
			} else {
				var_1_87 = (max ((var_1_33 - (var_1_79 - var_1_32)) , ((max (var_1_88 , var_1_89)) - var_1_90)));
			}
		} else {
			var_1_87 = (var_1_15 + ((var_1_91 - var_1_16) + 64u));
		}
	}


	// From: Req42Batch74Amount500
	unsigned char stepLocal_20 = (var_1_19 - var_1_13) < var_1_48;
	if ((var_1_3 > var_1_87) || stepLocal_20) {
		var_1_96 = var_1_45;
	} else {
		var_1_96 = (abs (var_1_113));
	}


	// From: Req44Batch74Amount500
	unsigned long int stepLocal_22 = abs (var_1_52);
	unsigned long int stepLocal_21 = var_1_40;
	if ((var_1_72 * 4) >= stepLocal_21) {
		if (! var_1_23) {
			if (! var_1_23) {
				var_1_98 = (min ((var_1_3 + (max (var_1_56 , var_1_14))) , var_1_15));
			} else {
				var_1_98 = (max ((var_1_53 - var_1_56) , var_1_45));
			}
		} else {
			var_1_98 = (var_1_14 + ((max (var_1_12 , var_1_56)) + (min (var_1_15 , var_1_44))));
		}
	} else {
		if (stepLocal_22 >= var_1_17) {
			if (var_1_23) {
				var_1_98 = (max (var_1_45 , ((var_1_100 - var_1_44) - var_1_12)));
			}
		}
	}


	// From: Req43Batch74Amount500
	if (var_1_66 > (min (var_1_60 , (max (var_1_8 , var_1_63))))) {
		var_1_97 = (var_1_37 - (abs (abs (255.5))));
	} else {
		if (var_1_23) {
			var_1_97 = (var_1_7 + var_1_59);
		} else {
			var_1_97 = (abs (var_1_68));
		}
	}


	// From: Req21Batch74Amount500
	if (var_1_97 >= var_1_37) {
		var_1_57 = 31.7;
	} else {
		var_1_57 = ((var_1_58 + (abs (var_1_59))) + (min (var_1_7 , var_1_60)));
	}


	// From: Req32Batch74Amount500
	unsigned char stepLocal_17 = var_1_57 > var_1_62;
	unsigned char stepLocal_16 = var_1_28;
	if (stepLocal_16 || (var_1_52 > var_1_72)) {
		var_1_80 = (abs (var_1_39));
	} else {
		if (((1.375 * var_1_58) > (var_1_97 * var_1_63)) && stepLocal_17) {
			var_1_80 = (max (var_1_50 , -2));
		}
	}


	// From: Req29Batch74Amount500
	signed long int stepLocal_15 = 64 & (max (var_1_73 , var_1_49));
	if (var_1_80 <= stepLocal_15) {
		var_1_75 = var_1_44;
	}


	// From: Req45Batch74Amount500
	if ((var_1_58 * var_1_59) < var_1_57) {
		var_1_101 = (var_1_100 - var_1_14);
	} else {
		var_1_101 = (max (var_1_55 , (var_1_54 - var_1_3)));
	}


	// From: Req47Batch74Amount500
	unsigned char stepLocal_26 = var_1_84;
	unsigned short int stepLocal_25 = var_1_72;
	unsigned char stepLocal_24 = var_1_56;
	if (stepLocal_26 || (! 0)) {
		if (var_1_91 <= stepLocal_24) {
			var_1_103 = ((var_1_72 - (min (var_1_100 , var_1_12))) + var_1_104);
		}
	} else {
		if (var_1_87 <= stepLocal_25) {
			var_1_103 = (var_1_70 + var_1_75);
		} else {
			var_1_103 = (min ((var_1_3 + var_1_48) , var_1_19));
		}
	}


	// From: Req7Batch74Amount500
	if (var_1_84) {
		var_1_27 = (max (var_1_21 , (var_1_75 - (max (var_1_16 , var_1_14)))));
	} else {
		if (var_1_23) {
			var_1_27 = (var_1_15 + (var_1_21 - var_1_14));
		} else {
			var_1_27 = (max (var_1_75 , var_1_21));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 63);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 32767);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -127);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 31);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 31);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 3221225471);
	assume_abort_if_not(var_1_52 <= 4294967295);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 127);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 31);
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= -230584.3009213691400e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691400e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691400e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691400e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= -461168.6018427383000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	assume_abort_if_not(var_1_62 != 0.0F);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -922337.2036854776000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
	assume_abort_if_not(var_1_63 != 0.0F);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -63);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427383000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427383000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 191);
	assume_abort_if_not(var_1_70 <= 255);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 16383);
	assume_abort_if_not(var_1_72 <= 32767);
	var_1_79 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_79 >= 1610612735);
	assume_abort_if_not(var_1_79 <= 2147483647);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 2147483647);
	assume_abort_if_not(var_1_88 <= 4294967294);
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 2147483647);
	assume_abort_if_not(var_1_89 <= 4294967294);
	var_1_90 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 2147483647);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 536870912);
	assume_abort_if_not(var_1_91 <= 1073741824);
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 536870911);
	assume_abort_if_not(var_1_93 <= 1073741823);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 190);
	assume_abort_if_not(var_1_100 <= 254);
	var_1_104 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_104 >= 0);
	assume_abort_if_not(var_1_104 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_116 = var_1_116;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_86 <= (128 - var_1_3)) ? (var_1_1 == ((double) var_1_4)) : ((var_1_84 || var_1_28) ? (var_1_1 == ((double) (var_1_7 + var_1_8))) : 1)) && (var_1_85 ? ((255.5f != (var_1_10 - var_1_11)) ? (var_1_9 == ((unsigned char) ((abs (var_1_3)) + ((max (var_1_12 , var_1_13)) + (max (var_1_14 , var_1_15)))))) : 1) : ((! var_1_84) ? (var_1_9 == ((unsigned char) (var_1_3 + var_1_15))) : ((var_1_15 != var_1_12) ? (var_1_9 == ((unsigned char) ((var_1_16 - var_1_15) + var_1_3))) : 1)))) && (var_1_17 == ((unsigned long int) var_1_3))) && ((var_1_14 < var_1_12) ? (var_1_18 == ((unsigned short int) ((max (var_1_19 , var_1_20)) - var_1_47))) : 1)) && ((var_1_65 == var_1_13) ? (var_1_21 == ((unsigned char) var_1_13)) : 1)) && ((var_1_14 < var_1_3) ? (var_1_23 == ((unsigned char) ((! var_1_24) || (! (last_1_var_1_23 || var_1_25))))) : (var_1_23 == ((unsigned char) var_1_26)))) && (var_1_84 ? (var_1_27 == ((signed short int) (max (var_1_21 , (var_1_75 - (max (var_1_16 , var_1_14))))))) : (var_1_23 ? (var_1_27 == ((signed short int) (var_1_15 + (var_1_21 - var_1_14)))) : (var_1_27 == ((signed short int) (max (var_1_75 , var_1_21))))))) && (var_1_28 == ((unsigned char) (var_1_26 || var_1_29)))) && ((var_1_3 >= 10) ? ((var_1_116 >= (var_1_19 * var_1_106)) ? (var_1_102 ? (var_1_30 == ((float) var_1_4)) : (var_1_30 == ((float) var_1_8))) : (var_1_30 == ((float) 1.000000001E8f))) : 1)) && ((var_1_19 > (- 25)) ? (var_1_32 == ((unsigned long int) (var_1_33 - var_1_77))) : 1)) && (((var_1_12 * var_1_14) < var_1_92) ? (var_1_34 == ((double) (var_1_36 - var_1_37))) : 1)) && (var_1_24 ? (var_1_38 == ((unsigned short int) ((min ((min (var_1_19 , 52347)) , (max (var_1_20 , var_1_39)))) - var_1_3))) : 1)) && ((last_1_var_1_40 <= var_1_71) ? (var_1_40 == ((unsigned long int) (var_1_20 + (var_1_13 + var_1_16)))) : ((var_1_14 != (- var_1_19)) ? (var_1_40 == ((unsigned long int) ((var_1_39 + var_1_114) + (16u + var_1_110)))) : (var_1_40 == ((unsigned long int) (var_1_33 - var_1_20)))))) && ((var_1_32 > var_1_105) ? (var_1_41 == ((signed char) var_1_15)) : ((var_1_8 <= var_1_11) ? (var_1_41 == ((signed char) (max (var_1_42 , var_1_14)))) : 1))) && (((var_1_33 * (var_1_12 * var_1_48)) < (var_1_39 | var_1_3)) ? ((! var_1_29) ? (var_1_43 == ((signed char) (var_1_15 - ((var_1_44 - var_1_45) + var_1_46)))) : 1) : (var_1_43 == ((signed char) (var_1_46 + ((var_1_44 - var_1_45) - var_1_15)))))) && (var_1_47 == ((signed short int) (min (var_1_45 , var_1_50))))) && (var_1_48 == ((unsigned long int) (last_1_var_1_77 + last_1_var_1_116)))) && (((- 1) >= var_1_12) ? (var_1_49 == ((signed short int) (last_1_var_1_49 - var_1_12))) : (var_1_49 == ((signed short int) (min (var_1_14 , (var_1_46 - var_1_92))))))) && ((var_1_48 > var_1_12) ? (var_1_50 == ((unsigned short int) (min (((min (var_1_19 , var_1_20)) - 32) , var_1_117)))) : (var_1_50 == ((unsigned short int) var_1_14)))) && ((var_1_32 < ((var_1_52 - var_1_92) - (max (var_1_12 , var_1_19)))) ? (var_1_51 == ((unsigned char) ((max (var_1_53 , (min (var_1_54 , var_1_55)))) - ((abs (var_1_13)) + (var_1_44 - var_1_56))))) : (var_1_51 == ((unsigned char) (var_1_55 - var_1_12))))) && ((var_1_97 >= var_1_37) ? (var_1_57 == ((double) 31.7)) : (var_1_57 == ((double) ((var_1_58 + (abs (var_1_59))) + (min (var_1_7 , var_1_60))))))) && ((((var_1_116 / 4) * var_1_14) > var_1_40) ? ((4.75 > ((var_1_8 * var_1_1) / (max (var_1_62 , var_1_63)))) ? (var_1_61 == ((signed char) (var_1_64 + (var_1_45 + var_1_56)))) : (var_1_61 == ((signed char) -4))) : 1)) && ((var_1_76 < var_1_10) ? (var_1_65 == ((signed long int) var_1_16)) : (var_1_65 == ((signed long int) (100 - 1))))) && ((var_1_40 == (var_1_39 - var_1_56)) ? (var_1_66 == ((double) (max (var_1_36 , ((var_1_67 - var_1_68) + var_1_58))))) : (var_1_66 == ((double) var_1_68)))) && ((((var_1_70 - var_1_15) - var_1_12) <= var_1_64) ? (var_1_69 == ((double) (var_1_37 - var_1_68))) : 1)) && (var_1_85 ? (var_1_71 == ((unsigned short int) ((abs (var_1_14)) + (var_1_72 - var_1_12)))) : (((var_1_77 % var_1_53) >= ((var_1_54 / var_1_16) / var_1_70)) ? (var_1_71 == ((unsigned short int) (min (var_1_21 , var_1_3)))) : (var_1_71 == ((unsigned short int) (min (16 , (abs (var_1_14))))))))) && ((var_1_23 || var_1_102) ? (var_1_24 ? (var_1_73 == ((signed long int) (max (var_1_32 , (var_1_94 - var_1_14))))) : (var_1_73 == ((signed long int) ((min (var_1_64 , var_1_94)) + 256)))) : 1)) && (var_1_74 == ((signed char) 1))) && ((var_1_80 <= (64 & (max (var_1_73 , var_1_49)))) ? (var_1_75 == ((unsigned char) var_1_44)) : 1)) && (var_1_76 == ((double) ((abs (var_1_7)) + var_1_67)))) && ((((last_1_var_1_40 * last_1_var_1_80) * last_1_var_1_73) <= var_1_45) ? (var_1_77 == ((unsigned long int) (min ((abs (var_1_3)) , (var_1_33 - last_1_var_1_83))))) : (var_1_24 ? ((var_1_26 && last_1_var_1_28) ? (var_1_77 == ((unsigned long int) (var_1_33 - ((var_1_79 - var_1_46) - var_1_20)))) : 1) : (last_1_var_1_28 ? (var_1_77 == ((unsigned long int) (min (var_1_79 , last_1_var_1_112)))) : (((var_1_16 * -64) < (last_1_var_1_116 * var_1_20)) ? (var_1_77 == ((unsigned long int) (((var_1_70 + last_1_var_1_48) + last_1_var_1_83) + (abs (var_1_3))))) : ((var_1_62 < (abs (min (var_1_68 , var_1_60)))) ? (var_1_77 == ((unsigned long int) (max ((min (var_1_33 , var_1_53)) , var_1_54)))) : (var_1_77 == ((unsigned long int) (min ((var_1_33 - var_1_54) , (max ((max (var_1_19 , var_1_56)) , var_1_20)))))))))))) && ((var_1_28 || (var_1_52 > var_1_72)) ? (var_1_80 == ((signed long int) (abs (var_1_39)))) : ((((1.375 * var_1_58) > (var_1_97 * var_1_63)) && (var_1_57 > var_1_62)) ? (var_1_80 == ((signed long int) (max (var_1_50 , -2)))) : 1))) && (var_1_82 == ((unsigned short int) (abs (var_1_15))))) && ((-50 > (var_1_13 * var_1_48)) ? ((! var_1_26) ? (var_1_83 == ((signed short int) (var_1_47 + var_1_86))) : 1) : (var_1_83 == ((signed short int) var_1_48)))) && ((var_1_65 == var_1_46) ? (var_1_84 == ((unsigned char) var_1_25)) : 1)) && ((0 < (var_1_73 / var_1_39)) ? (var_1_85 == ((unsigned char) (last_1_var_1_85 || (var_1_28 || var_1_24)))) : (var_1_85 == ((unsigned char) (var_1_84 && var_1_26))))) && (var_1_86 == ((signed short int) (var_1_54 + -16)))) && (var_1_23 ? ((var_1_69 != (15.25 - 99.75)) ? ((var_1_61 < (-2 / var_1_44)) ? (var_1_87 == ((unsigned long int) ((var_1_32 + (max (var_1_16 , var_1_39))) + var_1_45))) : (var_1_87 == ((unsigned long int) (max ((var_1_33 - (var_1_79 - var_1_32)) , ((max (var_1_88 , var_1_89)) - var_1_90)))))) : (var_1_87 == ((unsigned long int) (var_1_15 + ((var_1_91 - var_1_16) + 64u))))) : 1)) && (var_1_24 ? (var_1_92 == ((unsigned long int) ((max (var_1_13 , last_1_var_1_92)) + (var_1_79 - (var_1_93 - var_1_82))))) : (((var_1_70 / var_1_20) >= (var_1_52 / var_1_39)) ? (var_1_92 == ((unsigned long int) ((max ((max (var_1_88 , var_1_33)) , var_1_89)) - var_1_54))) : 1))) && ((! (var_1_83 <= var_1_32)) ? (var_1_94 == ((unsigned short int) (min (var_1_14 , var_1_55)))) : ((var_1_79 <= var_1_117) ? (var_1_94 == ((unsigned short int) (min ((var_1_54 + (var_1_72 - var_1_44)) , ((28081 - var_1_53) + var_1_3))))) : (var_1_94 == ((unsigned short int) (abs (var_1_39))))))) && ((! var_1_28) ? (var_1_95 == ((unsigned long int) var_1_117)) : (var_1_28 ? (var_1_23 ? (var_1_95 == ((unsigned long int) (min (last_1_var_1_95 , (max (var_1_46 , var_1_110)))))) : ((! (var_1_49 > (var_1_72 / -10000))) ? (var_1_95 == ((unsigned long int) var_1_77)) : (var_1_95 == ((unsigned long int) (var_1_33 - ((min (var_1_56 , var_1_92)) + (abs (var_1_14)))))))) : 1))) && (((var_1_3 > var_1_87) || ((var_1_19 - var_1_13) < var_1_48)) ? (var_1_96 == ((signed short int) var_1_45)) : (var_1_96 == ((signed short int) (abs (var_1_113)))))) && ((var_1_66 > (min (var_1_60 , (max (var_1_8 , var_1_63))))) ? (var_1_97 == ((double) (var_1_37 - (abs (abs (255.5)))))) : (var_1_23 ? (var_1_97 == ((double) (var_1_7 + var_1_59))) : (var_1_97 == ((double) (abs (var_1_68))))))) && (((var_1_72 * 4) >= var_1_40) ? ((! var_1_23) ? ((! var_1_23) ? (var_1_98 == ((unsigned char) (min ((var_1_3 + (max (var_1_56 , var_1_14))) , var_1_15)))) : (var_1_98 == ((unsigned char) (max ((var_1_53 - var_1_56) , var_1_45))))) : (var_1_98 == ((unsigned char) (var_1_14 + ((max (var_1_12 , var_1_56)) + (min (var_1_15 , var_1_44))))))) : (((abs (var_1_52)) >= var_1_17) ? (var_1_23 ? (var_1_98 == ((unsigned char) (max (var_1_45 , ((var_1_100 - var_1_44) - var_1_12))))) : 1) : 1))) && (((var_1_58 * var_1_59) < var_1_57) ? (var_1_101 == ((unsigned char) (var_1_100 - var_1_14))) : (var_1_101 == ((unsigned char) (max (var_1_55 , (var_1_54 - var_1_3))))))) && ((var_1_42 != var_1_48) ? (var_1_102 == ((unsigned char) (! var_1_29))) : 1)) && ((var_1_84 || (! 0)) ? ((var_1_91 <= var_1_56) ? (var_1_103 == ((unsigned short int) ((var_1_72 - (min (var_1_100 , var_1_12))) + var_1_104))) : 1) : ((var_1_87 <= var_1_72) ? (var_1_103 == ((unsigned short int) (var_1_70 + var_1_75))) : (var_1_103 == ((unsigned short int) (min ((var_1_3 + var_1_48) , var_1_19))))))) && ((((abs (var_1_68)) * var_1_62) < var_1_67) ? (var_1_105 == ((unsigned char) var_1_56)) : 1)) && ((((- var_1_63) / var_1_62) < var_1_69) ? (((var_1_112 > (~ var_1_39)) || var_1_85) ? (var_1_106 == ((unsigned char) (var_1_53 - var_1_56))) : (var_1_102 ? ((var_1_54 >= 25) ? ((var_1_76 < var_1_7) ? (var_1_106 == ((unsigned char) var_1_12)) : (var_1_106 == ((unsigned char) var_1_54))) : (var_1_106 == ((unsigned char) var_1_53))) : (var_1_106 == ((unsigned char) 25)))) : (var_1_106 == ((unsigned char) var_1_12)))) && (var_1_84 ? (var_1_107 == ((double) var_1_7)) : (var_1_107 == ((double) var_1_37)))) && (var_1_108 == ((signed long int) var_1_72))) && (var_1_85 ? (var_1_109 == ((signed short int) var_1_119)) : (var_1_109 == ((signed short int) last_1_var_1_109)))) && (var_1_110 == ((signed long int) var_1_53))) && (var_1_111 == ((float) var_1_68))) && (var_1_112 == ((signed long int) var_1_15))) && (var_1_113 == ((unsigned char) var_1_46))) && (var_1_114 == ((unsigned short int) var_1_14))) && (var_1_24 ? (var_1_115 == ((signed char) var_1_14)) : (var_1_115 == ((signed char) var_1_56)))) && (var_1_25 ? (var_1_116 == ((unsigned short int) last_1_var_1_116)) : (var_1_116 == ((unsigned short int) var_1_46)))) && (var_1_117 == ((unsigned long int) var_1_46))) && (var_1_24 ? (var_1_118 == ((unsigned char) var_1_13)) : (var_1_118 == ((unsigned char) var_1_55)))) && ((var_1_92 == var_1_86) ? (var_1_84 ? (((var_1_72 - var_1_73) >= (var_1_45 & var_1_48)) ? ((var_1_28 || var_1_84) ? (var_1_119 == ((signed char) 64)) : (var_1_119 == ((signed char) -32))) : (var_1_119 == ((signed char) var_1_100))) : (var_1_119 == ((signed char) var_1_12))) : (var_1_119 == ((signed char) var_1_56)))
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
