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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 64;
signed long int var_1_2 = -2;
signed long int var_1_3 = 2;
signed long int var_1_5 = 16;
signed long int var_1_6 = 4;
unsigned long int var_1_7 = 0;
unsigned long int var_1_8 = 2259497370;
unsigned long int var_1_9 = 1673155679;
unsigned long int var_1_10 = 256;
float var_1_11 = 31.5;
float var_1_12 = 0.0;
float var_1_13 = 1.2;
float var_1_14 = 100000000000000.2;
float var_1_15 = 31.4;
float var_1_17 = 127.4;
signed short int var_1_18 = 25;
signed short int var_1_19 = -1;
signed short int var_1_20 = 128;
unsigned char var_1_21 = 32;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 64;
float var_1_24 = 255.25;
unsigned long int var_1_25 = 256;
unsigned long int var_1_27 = 8;
signed char var_1_28 = 1;
signed char var_1_29 = 5;
signed char var_1_30 = -64;
signed char var_1_31 = -16;
unsigned short int var_1_32 = 16;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 64305;
signed long int var_1_35 = 0;
signed long int var_1_36 = 8;
unsigned short int var_1_37 = 128;
unsigned short int var_1_38 = 57710;
double var_1_39 = 7.25;
double var_1_40 = 49.4;
signed short int var_1_41 = -256;
unsigned short int var_1_42 = 2;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 8;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 100;
unsigned long int var_1_47 = 1;
unsigned char var_1_48 = 64;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
signed short int var_1_51 = -100;
unsigned long int var_1_52 = 64;
double var_1_53 = 31.4;
unsigned char var_1_54 = 1;
double var_1_56 = 8.7;
signed long int var_1_57 = 100;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 2;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
signed char var_1_64 = -10;
unsigned char var_1_65 = 64;
unsigned char var_1_66 = 64;
signed char var_1_67 = -1;
signed char var_1_68 = 10;
signed char var_1_69 = -25;
signed char var_1_70 = 16;
float var_1_71 = 127.6;
float var_1_72 = 63.9;
float var_1_73 = 0.7;
double var_1_74 = 3.125;
unsigned short int var_1_75 = 0;
signed short int var_1_76 = 16;
signed short int var_1_77 = 19609;
float var_1_78 = 127.5;
unsigned char var_1_79 = 32;
unsigned char var_1_80 = 128;
unsigned long int var_1_81 = 10;
unsigned long int var_1_82 = 3615827308;
unsigned long int var_1_83 = 200;
double var_1_84 = 8.1;
signed long int var_1_85 = -128;
signed long int var_1_86 = 1;
signed long int var_1_87 = -10;
signed long int var_1_89 = 64;
signed char var_1_90 = -4;
unsigned short int var_1_91 = 25;
float var_1_92 = 64.25;
float var_1_93 = 31.4;
unsigned long int var_1_94 = 25;
unsigned char var_1_95 = 25;
signed short int var_1_96 = 10;
double var_1_97 = 4.2;
unsigned long int var_1_98 = 8;
double var_1_99 = 255.75;
unsigned char var_1_100 = 2;
unsigned short int var_1_101 = 128;
unsigned char var_1_102 = 1;
signed long int var_1_103 = 256;
unsigned char var_1_104 = 128;
signed long int var_1_105 = -256;
signed short int var_1_106 = -128;
signed long int var_1_107 = 100;
unsigned char var_1_108 = 1;
float var_1_109 = 5.75;
signed short int var_1_110 = -2;
double var_1_111 = 9.6;
signed long int var_1_112 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_35 = 0;
unsigned long int last_1_var_1_47 = 1;
unsigned char last_1_var_1_49 = 0;
unsigned long int last_1_var_1_52 = 64;
unsigned char last_1_var_1_58 = 0;
unsigned short int last_1_var_1_75 = 0;
unsigned char last_1_var_1_79 = 32;
unsigned long int last_1_var_1_81 = 10;
signed long int last_1_var_1_85 = -128;
unsigned long int last_1_var_1_98 = 8;
unsigned short int last_1_var_1_101 = 128;
unsigned char last_1_var_1_102 = 1;
unsigned char last_1_var_1_108 = 1;
signed short int last_1_var_1_110 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch170Amount500
	unsigned long int stepLocal_30 = var_1_9;
	signed long int stepLocal_29 = last_1_var_1_85;
	if ((var_1_80 - last_1_var_1_85) == stepLocal_30) {
		if (stepLocal_29 < (-8 * (abs (200)))) {
			if (last_1_var_1_102) {
				var_1_81 = (max (var_1_20 , ((max (var_1_8 , var_1_82)) - var_1_83)));
			}
		} else {
			var_1_81 = (abs (last_1_var_1_98 + (var_1_9 - var_1_34)));
		}
	}


	// From: Req61Batch170Amount500
	unsigned char stepLocal_35 = last_1_var_1_58;
	if (last_1_var_1_108) {
		if (var_1_60 || stepLocal_35) {
			var_1_112 = ((max (var_1_67 , last_1_var_1_75)) + last_1_var_1_79);
		} else {
			var_1_112 = last_1_var_1_101;
		}
	} else {
		var_1_112 = last_1_var_1_101;
	}


	// From: Req28Batch170Amount500
	signed long int stepLocal_26 = var_1_5 * (- var_1_34);
	signed long int stepLocal_25 = var_1_112;
	if (stepLocal_26 > var_1_29) {
		var_1_70 = var_1_42;
	} else {
		if (var_1_29 >= stepLocal_25) {
			var_1_70 = var_1_42;
		} else {
			var_1_70 = ((5 + var_1_68) - (min (var_1_42 , var_1_61)));
		}
	}


	// From: Req31Batch170Amount500
	unsigned long int stepLocal_28 = var_1_81;
	if ((var_1_5 | var_1_2) != stepLocal_28) {
		var_1_75 = (max (var_1_42 , (min (var_1_112 , (abs (var_1_38))))));
	}


	// From: Req26Batch170Amount500
	unsigned long int stepLocal_21 = last_1_var_1_81;
	unsigned char stepLocal_20 = (var_1_8 - var_1_42) < var_1_34;
	unsigned long int stepLocal_19 = last_1_var_1_47 >> (min (var_1_42 , var_1_61));
	if (var_1_19 <= stepLocal_21) {
		if (! last_1_var_1_49) {
			var_1_59 = ((last_1_var_1_49 || last_1_var_1_102) && var_1_60);
		} else {
			if (last_1_var_1_49 && stepLocal_20) {
				var_1_59 = (var_1_50 && var_1_60);
			} else {
				if (stepLocal_19 < (last_1_var_1_110 - var_1_3)) {
					var_1_59 = (var_1_60 || var_1_62);
				} else {
					var_1_59 = ((var_1_62 && var_1_60) || var_1_63);
				}
			}
		}
	}


	// From: Req51Batch170Amount500
	if (var_1_59) {
		var_1_102 = var_1_60;
	}


	// From: Req44Batch170Amount500
	if (var_1_59) {
		var_1_95 = var_1_23;
	}


	// From: Req46Batch170Amount500
	if (var_1_59) {
		var_1_97 = var_1_13;
	} else {
		var_1_97 = var_1_12;
	}


	// From: Req2Batch170Amount500
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 <= var_1_3) {
		var_1_11 = ((var_1_12 - (max (var_1_13 , var_1_14))) - var_1_15);
	} else {
		if (var_1_59) {
			var_1_11 = var_1_13;
		}
	}


	// From: Req3Batch170Amount500
	signed long int stepLocal_1 = ~ 16;
	if (stepLocal_1 <= var_1_3) {
		var_1_17 = (max ((var_1_14 + var_1_13) , 1.0000000025E8f));
	} else {
		var_1_17 = (var_1_14 + (min (var_1_13 , 63.3f)));
	}


	// From: Req4Batch170Amount500
	var_1_18 = (min (var_1_19 , (2 - var_1_20)));


	// From: Req5Batch170Amount500
	unsigned long int stepLocal_3 = var_1_7;
	signed long int stepLocal_2 = var_1_2;
	if (var_1_5 <= stepLocal_2) {
		if (var_1_19 > stepLocal_3) {
			var_1_21 = (max (var_1_22 , (max (10 , var_1_23))));
		}
	}


	// From: Req8Batch170Amount500
	signed short int stepLocal_6 = var_1_20;
	if ((abs (max (var_1_28 , var_1_29))) < stepLocal_6) {
		var_1_27 = (abs (var_1_7));
	}


	// From: Req9Batch170Amount500
	var_1_30 = (max (-1 , var_1_31));


	// From: Req33Batch170Amount500
	if (! var_1_60) {
		var_1_78 = var_1_72;
	}


	// From: Req36Batch170Amount500
	if (var_1_62) {
		var_1_84 = var_1_12;
	} else {
		var_1_84 = (min ((min (var_1_40 , var_1_72)) , var_1_73));
	}


	// From: Req39Batch170Amount500
	if ((var_1_61 - 4) >= var_1_82) {
		var_1_90 = var_1_61;
	}


	// From: Req41Batch170Amount500
	if (var_1_17 < (10.42f - (max (var_1_14 , var_1_15)))) {
		var_1_92 = (abs (var_1_13 - var_1_14));
	}


	// From: Req43Batch170Amount500
	var_1_94 = var_1_68;


	// From: Req45Batch170Amount500
	if (var_1_60) {
		var_1_96 = 16;
	}


	// From: Req47Batch170Amount500
	var_1_98 = var_1_6;


	// From: Req48Batch170Amount500
	var_1_99 = var_1_15;


	// From: Req52Batch170Amount500
	var_1_103 = var_1_45;


	// From: Req53Batch170Amount500
	if (var_1_59) {
		var_1_104 = var_1_42;
	}


	// From: Req54Batch170Amount500
	if (var_1_62) {
		var_1_105 = var_1_34;
	} else {
		var_1_105 = var_1_77;
	}


	// From: Req55Batch170Amount500
	var_1_106 = var_1_29;


	// From: Req57Batch170Amount500
	var_1_108 = var_1_50;


	// From: Req58Batch170Amount500
	if (var_1_62) {
		var_1_109 = var_1_40;
	}


	// From: Req59Batch170Amount500
	var_1_110 = var_1_103;


	// From: Req13Batch170Amount500
	unsigned char stepLocal_8 = var_1_108;
	if (stepLocal_8 || var_1_102) {
		var_1_37 = (min ((var_1_20 + var_1_18) , ((var_1_38 - var_1_33) - (max (var_1_22 , var_1_23)))));
	}


	// From: Req23Batch170Amount500
	unsigned char stepLocal_16 = var_1_59;
	signed long int stepLocal_15 = var_1_103 * var_1_95;
	if (var_1_102 || stepLocal_16) {
		var_1_54 = (max (var_1_42 , (abs (25))));
	} else {
		if (var_1_23 < stepLocal_15) {
			var_1_54 = (var_1_45 - 8);
		} else {
			var_1_54 = (var_1_46 + var_1_42);
		}
	}


	// From: Req29Batch170Amount500
	unsigned long int stepLocal_27 = var_1_61;
	if (((var_1_15 + var_1_40) + (var_1_13 + var_1_84)) > (min (var_1_97 , (var_1_97 * var_1_14)))) {
		if (stepLocal_27 > 2u) {
			var_1_71 = (var_1_12 - var_1_13);
		} else {
			var_1_71 = (min (((var_1_13 + var_1_14) - (var_1_72 + var_1_73)) , (var_1_12 - var_1_15)));
		}
	} else {
		if (var_1_92 > var_1_73) {
			if (var_1_59) {
				var_1_71 = (abs (199.1f));
			}
		} else {
			var_1_71 = (abs (min (var_1_13 , 63.25f)));
		}
	}


	// From: Req7Batch170Amount500
	unsigned char stepLocal_5 = var_1_102;
	if (var_1_59 || stepLocal_5) {
		if ((min (var_1_84 , (var_1_13 / var_1_12))) > var_1_109) {
			var_1_25 = var_1_8;
		}
	}


	// From: Req12Batch170Amount500
	if (var_1_11 >= var_1_12) {
		if ((var_1_13 > var_1_99) && var_1_108) {
			var_1_36 = var_1_22;
		}
	} else {
		var_1_36 = (abs (16));
	}


	// From: Req19Batch170Amount500
	signed long int stepLocal_11 = var_1_105;
	if (var_1_10 >= stepLocal_11) {
		var_1_49 = (! var_1_50);
	}


	// From: Req25Batch170Amount500
	if (! var_1_49) {
		var_1_58 = var_1_50;
	}


	// From: Req30Batch170Amount500
	if (var_1_49) {
		if (var_1_45 > var_1_34) {
			var_1_74 = (abs (min ((var_1_40 + var_1_13) , var_1_72)));
		}
	}


	// From: Req49Batch170Amount500
	if (var_1_58) {
		var_1_100 = var_1_45;
	} else {
		var_1_100 = var_1_23;
	}


	// From: Req38Batch170Amount500
	unsigned char stepLocal_32 = var_1_63;
	if (var_1_99 == var_1_74) {
		var_1_87 = (var_1_89 + (var_1_86 - var_1_22));
	} else {
		if ((var_1_14 + var_1_11) > var_1_99) {
			var_1_87 = (((var_1_80 - 2) + var_1_81) + var_1_103);
		} else {
			if ((var_1_66 >= var_1_70) && stepLocal_32) {
				var_1_87 = (var_1_98 - var_1_33);
			}
		}
	}


	// From: Req11Batch170Amount500
	var_1_35 = ((min (var_1_37 , (last_1_var_1_35 + var_1_28))) + var_1_22);


	// From: Req24Batch170Amount500
	signed long int stepLocal_18 = (abs (var_1_57)) - var_1_3;
	signed long int stepLocal_17 = var_1_35;
	if (((var_1_6 >> var_1_42) * var_1_44) >= stepLocal_18) {
		var_1_56 = (abs (var_1_12));
	} else {
		if (var_1_103 <= stepLocal_17) {
			var_1_56 = (max (256.8 , var_1_15));
		} else {
			var_1_56 = (max ((min (var_1_12 , var_1_15)) , var_1_14));
		}
	}


	// From: Req40Batch170Amount500
	if (var_1_49) {
		var_1_91 = (((min (var_1_77 , 29634)) + 22240) - (max (var_1_44 , var_1_81)));
	} else {
		var_1_91 = (min (var_1_80 , (var_1_34 - 10)));
	}


	// From: Req14Batch170Amount500
	if (var_1_58) {
		var_1_39 = var_1_13;
	} else {
		var_1_39 = ((var_1_14 - var_1_13) + var_1_40);
	}


	// From: Req18Batch170Amount500
	unsigned char stepLocal_10 = var_1_22;
	unsigned char stepLocal_9 = var_1_58;
	if (stepLocal_9 || var_1_59) {
		if (var_1_44 < stepLocal_10) {
			var_1_48 = (min (var_1_44 , var_1_22));
		}
	}


	// From: Req21Batch170Amount500
	unsigned char stepLocal_12 = var_1_2 <= var_1_45;
	if (var_1_56 < var_1_15) {
		if ((var_1_44 > (var_1_34 ^ var_1_105)) && stepLocal_12) {
			var_1_52 = (var_1_8 - (var_1_104 + var_1_42));
		} else {
			if (var_1_40 >= var_1_56) {
				var_1_52 = ((var_1_45 + 16u) + var_1_33);
			} else {
				var_1_52 = (max (var_1_6 , ((max (var_1_9 , var_1_104)) + var_1_42)));
			}
		}
	} else {
		var_1_52 = (abs (last_1_var_1_52 + var_1_10));
	}


	// From: Req22Batch170Amount500
	unsigned long int stepLocal_14 = 32u;
	unsigned char stepLocal_13 = var_1_23;
	if (var_1_81 <= stepLocal_14) {
		var_1_53 = (var_1_13 - (max (var_1_12 , var_1_14)));
	} else {
		if (var_1_35 <= stepLocal_13) {
			var_1_53 = (var_1_40 + (var_1_14 - var_1_13));
		}
	}


	// From: Req32Batch170Amount500
	if (var_1_108) {
		if (var_1_62) {
			var_1_76 = (min (var_1_94 , (max ((var_1_91 - 64) , var_1_28))));
		} else {
			if (var_1_50) {
				var_1_76 = (max ((var_1_42 - (var_1_77 - var_1_44)) , var_1_112));
			} else {
				var_1_76 = (max (var_1_31 , var_1_44));
			}
		}
	}


	// From: Req37Batch170Amount500
	unsigned long int stepLocal_31 = var_1_61;
	if ((- var_1_14) < (var_1_73 + var_1_56)) {
		if ((var_1_14 - var_1_12) != var_1_71) {
			var_1_85 = ((var_1_86 - last_1_var_1_85) + (min (var_1_46 , 10000)));
		} else {
			var_1_85 = (var_1_28 + var_1_67);
		}
	} else {
		if (var_1_81 != stepLocal_31) {
			var_1_85 = ((min ((min (25 , var_1_28)) , (var_1_106 - 64))) + (var_1_42 - var_1_22));
		}
	}


	// From: Req1Batch170Amount500
	if ((min ((abs (var_1_2)) , (var_1_3 * var_1_87))) < (var_1_5 - var_1_6)) {
		var_1_1 = (min (var_1_7 , var_1_6));
	} else {
		var_1_1 = (var_1_8 - (var_1_9 - var_1_10));
	}


	// From: Req15Batch170Amount500
	if (var_1_27 > ((var_1_23 >> var_1_42) & var_1_91)) {
		if (var_1_9 == ((min (var_1_33 , var_1_3)) ^ (var_1_34 >> 5))) {
			var_1_41 = (min ((min (var_1_29 , var_1_22)) , var_1_23));
		}
	} else {
		var_1_41 = (max (var_1_38 , var_1_1));
	}


	// From: Req50Batch170Amount500
	if (var_1_102) {
		var_1_101 = var_1_41;
	} else {
		var_1_101 = var_1_45;
	}


	// From: Req17Batch170Amount500
	if (var_1_98 == var_1_91) {
		var_1_47 = (var_1_8 - var_1_46);
	} else {
		if ((min (var_1_94 , var_1_42)) < var_1_54) {
			var_1_47 = ((1317284922u - var_1_44) + var_1_9);
		} else {
			var_1_47 = (min (var_1_46 , (max (var_1_34 , 16u))));
		}
	}


	// From: Req6Batch170Amount500
	signed long int stepLocal_4 = var_1_20 >> (8 - 1);
	if (stepLocal_4 != ((min (var_1_22 , var_1_52)) - var_1_9)) {
		var_1_24 = var_1_12;
	} else {
		var_1_24 = (min ((var_1_14 + var_1_13) , (var_1_15 - var_1_12)));
	}


	// From: Req10Batch170Amount500
	unsigned long int stepLocal_7 = var_1_8;
	if (stepLocal_7 < var_1_20) {
		if (var_1_39 > var_1_13) {
			var_1_32 = (var_1_20 + ((10000 - var_1_33) + var_1_48));
		} else {
			var_1_32 = (max (var_1_23 , var_1_22));
		}
	} else {
		var_1_32 = (var_1_34 - (var_1_23 + (max (var_1_22 , 5))));
	}


	// From: Req20Batch170Amount500
	if (var_1_50 && (var_1_11 == (- var_1_109))) {
		if (var_1_38 >= (var_1_34 - var_1_52)) {
			var_1_51 = ((min (var_1_45 , var_1_48)) - var_1_46);
		} else {
			if (var_1_52 >= var_1_33) {
				var_1_51 = (var_1_44 - var_1_105);
			}
		}
	}


	// From: Req27Batch170Amount500
	unsigned char stepLocal_24 = var_1_85 > var_1_98;
	unsigned char stepLocal_23 = var_1_65;
	unsigned long int stepLocal_22 = (var_1_65 + var_1_66) - var_1_61;
	if (var_1_46 < stepLocal_22) {
		if (var_1_62 || stepLocal_24) {
			if (stepLocal_23 > var_1_6) {
				if (var_1_59) {
					var_1_64 = (max ((var_1_68 + -10) , var_1_67));
				} else {
					if (var_1_62) {
						var_1_64 = ((abs (var_1_67)) + var_1_42);
					} else {
						var_1_64 = (min (var_1_31 , (var_1_68 - 2)));
					}
				}
			} else {
				var_1_64 = (max (((min (var_1_67 , -10)) + 16) , ((var_1_68 - 4) + var_1_69)));
			}
		} else {
			var_1_64 = var_1_69;
		}
	}


	// From: Req34Batch170Amount500
	if ((var_1_66 % (max (var_1_61 , var_1_42))) > var_1_103) {
		if (var_1_47 > 16u) {
			var_1_79 = var_1_66;
		} else {
			if (var_1_49 && (var_1_2 >= var_1_10)) {
				var_1_79 = (min (var_1_44 , (min (var_1_61 , var_1_65))));
			} else {
				var_1_79 = (max ((var_1_66 + (var_1_42 + 32)) , (min (var_1_23 , var_1_22))));
			}
		}
	} else {
		var_1_79 = ((max (var_1_45 , var_1_80)) - var_1_61);
	}


	// From: Req42Batch170Amount500
	unsigned char stepLocal_33 = var_1_48;
	if (var_1_1 == stepLocal_33) {
		var_1_93 = (var_1_13 - var_1_73);
	} else {
		var_1_93 = (var_1_73 + var_1_72);
	}


	// From: Req56Batch170Amount500
	if (var_1_58) {
		var_1_107 = var_1_1;
	}


	// From: Req60Batch170Amount500
	unsigned char stepLocal_34 = var_1_22;
	if (! var_1_108) {
		if (stepLocal_34 > var_1_1) {
			var_1_111 = (var_1_15 - var_1_14);
		} else {
			var_1_111 = (min (var_1_14 , var_1_40));
		}
	}


	// From: Req16Batch170Amount500
	if (((max (1 , var_1_37)) - var_1_23) != var_1_85) {
		var_1_43 = (abs (var_1_22));
	} else {
		if (var_1_84 != var_1_111) {
			var_1_43 = (min (var_1_22 , var_1_42));
		} else {
			var_1_43 = (max ((var_1_42 + var_1_44) , (min ((var_1_45 - var_1_46) , (abs (var_1_22))))));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 1073741823);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 8192);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 49150);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 7);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= -2147483647);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 15);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 0);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 63);
	assume_abort_if_not(var_1_65 <= 128);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 64);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -31);
	assume_abort_if_not(var_1_67 <= 32);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -63);
	assume_abort_if_not(var_1_69 <= 63);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= 16383);
	assume_abort_if_not(var_1_77 <= 32766);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 127);
	assume_abort_if_not(var_1_80 <= 254);
	var_1_82 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_82 >= 2147483647);
	assume_abort_if_not(var_1_82 <= 4294967294);
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 1073741823);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= -1073741823);
	assume_abort_if_not(var_1_89 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_35 = var_1_35;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_110 = var_1_110;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((min ((abs (var_1_2)) , (var_1_3 * var_1_87))) < (var_1_5 - var_1_6)) ? (var_1_1 == ((unsigned long int) (min (var_1_7 , var_1_6)))) : (var_1_1 == ((unsigned long int) (var_1_8 - (var_1_9 - var_1_10))))) && ((var_1_2 <= var_1_3) ? (var_1_11 == ((float) ((var_1_12 - (max (var_1_13 , var_1_14))) - var_1_15))) : (var_1_59 ? (var_1_11 == ((float) var_1_13)) : 1))) && (((~ 16) <= var_1_3) ? (var_1_17 == ((float) (max ((var_1_14 + var_1_13) , 1.0000000025E8f)))) : (var_1_17 == ((float) (var_1_14 + (min (var_1_13 , 63.3f))))))) && (var_1_18 == ((signed short int) (min (var_1_19 , (2 - var_1_20)))))) && ((var_1_5 <= var_1_2) ? ((var_1_19 > var_1_7) ? (var_1_21 == ((unsigned char) (max (var_1_22 , (max (10 , var_1_23)))))) : 1) : 1)) && (((var_1_20 >> (8 - 1)) != ((min (var_1_22 , var_1_52)) - var_1_9)) ? (var_1_24 == ((float) var_1_12)) : (var_1_24 == ((float) (min ((var_1_14 + var_1_13) , (var_1_15 - var_1_12))))))) && ((var_1_59 || var_1_102) ? (((min (var_1_84 , (var_1_13 / var_1_12))) > var_1_109) ? (var_1_25 == ((unsigned long int) var_1_8)) : 1) : 1)) && (((abs (max (var_1_28 , var_1_29))) < var_1_20) ? (var_1_27 == ((unsigned long int) (abs (var_1_7)))) : 1)) && (var_1_30 == ((signed char) (max (-1 , var_1_31))))) && ((var_1_8 < var_1_20) ? ((var_1_39 > var_1_13) ? (var_1_32 == ((unsigned short int) (var_1_20 + ((10000 - var_1_33) + var_1_48)))) : (var_1_32 == ((unsigned short int) (max (var_1_23 , var_1_22))))) : (var_1_32 == ((unsigned short int) (var_1_34 - (var_1_23 + (max (var_1_22 , 5)))))))) && (var_1_35 == ((signed long int) ((min (var_1_37 , (last_1_var_1_35 + var_1_28))) + var_1_22)))) && ((var_1_11 >= var_1_12) ? (((var_1_13 > var_1_99) && var_1_108) ? (var_1_36 == ((signed long int) var_1_22)) : 1) : (var_1_36 == ((signed long int) (abs (16)))))) && ((var_1_108 || var_1_102) ? (var_1_37 == ((unsigned short int) (min ((var_1_20 + var_1_18) , ((var_1_38 - var_1_33) - (max (var_1_22 , var_1_23))))))) : 1)) && (var_1_58 ? (var_1_39 == ((double) var_1_13)) : (var_1_39 == ((double) ((var_1_14 - var_1_13) + var_1_40))))) && ((var_1_27 > ((var_1_23 >> var_1_42) & var_1_91)) ? ((var_1_9 == ((min (var_1_33 , var_1_3)) ^ (var_1_34 >> 5))) ? (var_1_41 == ((signed short int) (min ((min (var_1_29 , var_1_22)) , var_1_23)))) : 1) : (var_1_41 == ((signed short int) (max (var_1_38 , var_1_1)))))) && ((((max (1 , var_1_37)) - var_1_23) != var_1_85) ? (var_1_43 == ((unsigned char) (abs (var_1_22)))) : ((var_1_84 != var_1_111) ? (var_1_43 == ((unsigned char) (min (var_1_22 , var_1_42)))) : (var_1_43 == ((unsigned char) (max ((var_1_42 + var_1_44) , (min ((var_1_45 - var_1_46) , (abs (var_1_22))))))))))) && ((var_1_98 == var_1_91) ? (var_1_47 == ((unsigned long int) (var_1_8 - var_1_46))) : (((min (var_1_94 , var_1_42)) < var_1_54) ? (var_1_47 == ((unsigned long int) ((1317284922u - var_1_44) + var_1_9))) : (var_1_47 == ((unsigned long int) (min (var_1_46 , (max (var_1_34 , 16u))))))))) && ((var_1_58 || var_1_59) ? ((var_1_44 < var_1_22) ? (var_1_48 == ((unsigned char) (min (var_1_44 , var_1_22)))) : 1) : 1)) && ((var_1_10 >= var_1_105) ? (var_1_49 == ((unsigned char) (! var_1_50))) : 1)) && ((var_1_50 && (var_1_11 == (- var_1_109))) ? ((var_1_38 >= (var_1_34 - var_1_52)) ? (var_1_51 == ((signed short int) ((min (var_1_45 , var_1_48)) - var_1_46))) : ((var_1_52 >= var_1_33) ? (var_1_51 == ((signed short int) (var_1_44 - var_1_105))) : 1)) : 1)) && ((var_1_56 < var_1_15) ? (((var_1_44 > (var_1_34 ^ var_1_105)) && (var_1_2 <= var_1_45)) ? (var_1_52 == ((unsigned long int) (var_1_8 - (var_1_104 + var_1_42)))) : ((var_1_40 >= var_1_56) ? (var_1_52 == ((unsigned long int) ((var_1_45 + 16u) + var_1_33))) : (var_1_52 == ((unsigned long int) (max (var_1_6 , ((max (var_1_9 , var_1_104)) + var_1_42))))))) : (var_1_52 == ((unsigned long int) (abs (last_1_var_1_52 + var_1_10)))))) && ((var_1_81 <= 32u) ? (var_1_53 == ((double) (var_1_13 - (max (var_1_12 , var_1_14))))) : ((var_1_35 <= var_1_23) ? (var_1_53 == ((double) (var_1_40 + (var_1_14 - var_1_13)))) : 1))) && ((var_1_102 || var_1_59) ? (var_1_54 == ((unsigned char) (max (var_1_42 , (abs (25)))))) : ((var_1_23 < (var_1_103 * var_1_95)) ? (var_1_54 == ((unsigned char) (var_1_45 - 8))) : (var_1_54 == ((unsigned char) (var_1_46 + var_1_42)))))) && ((((var_1_6 >> var_1_42) * var_1_44) >= ((abs (var_1_57)) - var_1_3)) ? (var_1_56 == ((double) (abs (var_1_12)))) : ((var_1_103 <= var_1_35) ? (var_1_56 == ((double) (max (256.8 , var_1_15)))) : (var_1_56 == ((double) (max ((min (var_1_12 , var_1_15)) , var_1_14))))))) && ((! var_1_49) ? (var_1_58 == ((unsigned char) var_1_50)) : 1)) && ((var_1_19 <= last_1_var_1_81) ? ((! last_1_var_1_49) ? (var_1_59 == ((unsigned char) ((last_1_var_1_49 || last_1_var_1_102) && var_1_60))) : ((last_1_var_1_49 && ((var_1_8 - var_1_42) < var_1_34)) ? (var_1_59 == ((unsigned char) (var_1_50 && var_1_60))) : (((last_1_var_1_47 >> (min (var_1_42 , var_1_61))) < (last_1_var_1_110 - var_1_3)) ? (var_1_59 == ((unsigned char) (var_1_60 || var_1_62))) : (var_1_59 == ((unsigned char) ((var_1_62 && var_1_60) || var_1_63)))))) : 1)) && ((var_1_46 < ((var_1_65 + var_1_66) - var_1_61)) ? ((var_1_62 || (var_1_85 > var_1_98)) ? ((var_1_65 > var_1_6) ? (var_1_59 ? (var_1_64 == ((signed char) (max ((var_1_68 + -10) , var_1_67)))) : (var_1_62 ? (var_1_64 == ((signed char) ((abs (var_1_67)) + var_1_42))) : (var_1_64 == ((signed char) (min (var_1_31 , (var_1_68 - 2))))))) : (var_1_64 == ((signed char) (max (((min (var_1_67 , -10)) + 16) , ((var_1_68 - 4) + var_1_69)))))) : (var_1_64 == ((signed char) var_1_69))) : 1)) && (((var_1_5 * (- var_1_34)) > var_1_29) ? (var_1_70 == ((signed char) var_1_42)) : ((var_1_29 >= var_1_112) ? (var_1_70 == ((signed char) var_1_42)) : (var_1_70 == ((signed char) ((5 + var_1_68) - (min (var_1_42 , var_1_61)))))))) && ((((var_1_15 + var_1_40) + (var_1_13 + var_1_84)) > (min (var_1_97 , (var_1_97 * var_1_14)))) ? ((var_1_61 > 2u) ? (var_1_71 == ((float) (var_1_12 - var_1_13))) : (var_1_71 == ((float) (min (((var_1_13 + var_1_14) - (var_1_72 + var_1_73)) , (var_1_12 - var_1_15)))))) : ((var_1_92 > var_1_73) ? (var_1_59 ? (var_1_71 == ((float) (abs (199.1f)))) : 1) : (var_1_71 == ((float) (abs (min (var_1_13 , 63.25f)))))))) && (var_1_49 ? ((var_1_45 > var_1_34) ? (var_1_74 == ((double) (abs (min ((var_1_40 + var_1_13) , var_1_72))))) : 1) : 1)) && (((var_1_5 | var_1_2) != var_1_81) ? (var_1_75 == ((unsigned short int) (max (var_1_42 , (min (var_1_112 , (abs (var_1_38)))))))) : 1)) && (var_1_108 ? (var_1_62 ? (var_1_76 == ((signed short int) (min (var_1_94 , (max ((var_1_91 - 64) , var_1_28)))))) : (var_1_50 ? (var_1_76 == ((signed short int) (max ((var_1_42 - (var_1_77 - var_1_44)) , var_1_112)))) : (var_1_76 == ((signed short int) (max (var_1_31 , var_1_44)))))) : 1)) && ((! var_1_60) ? (var_1_78 == ((float) var_1_72)) : 1)) && (((var_1_66 % (max (var_1_61 , var_1_42))) > var_1_103) ? ((var_1_47 > 16u) ? (var_1_79 == ((unsigned char) var_1_66)) : ((var_1_49 && (var_1_2 >= var_1_10)) ? (var_1_79 == ((unsigned char) (min (var_1_44 , (min (var_1_61 , var_1_65)))))) : (var_1_79 == ((unsigned char) (max ((var_1_66 + (var_1_42 + 32)) , (min (var_1_23 , var_1_22)))))))) : (var_1_79 == ((unsigned char) ((max (var_1_45 , var_1_80)) - var_1_61))))) && (((var_1_80 - last_1_var_1_85) == var_1_9) ? ((last_1_var_1_85 < (-8 * (abs (200)))) ? (last_1_var_1_102 ? (var_1_81 == ((unsigned long int) (max (var_1_20 , ((max (var_1_8 , var_1_82)) - var_1_83))))) : 1) : (var_1_81 == ((unsigned long int) (abs (last_1_var_1_98 + (var_1_9 - var_1_34)))))) : 1)) && (var_1_62 ? (var_1_84 == ((double) var_1_12)) : (var_1_84 == ((double) (min ((min (var_1_40 , var_1_72)) , var_1_73)))))) && (((- var_1_14) < (var_1_73 + var_1_56)) ? (((var_1_14 - var_1_12) != var_1_71) ? (var_1_85 == ((signed long int) ((var_1_86 - last_1_var_1_85) + (min (var_1_46 , 10000))))) : (var_1_85 == ((signed long int) (var_1_28 + var_1_67)))) : ((var_1_81 != var_1_61) ? (var_1_85 == ((signed long int) ((min ((min (25 , var_1_28)) , (var_1_106 - 64))) + (var_1_42 - var_1_22)))) : 1))) && ((var_1_99 == var_1_74) ? (var_1_87 == ((signed long int) (var_1_89 + (var_1_86 - var_1_22)))) : (((var_1_14 + var_1_11) > var_1_99) ? (var_1_87 == ((signed long int) (((var_1_80 - 2) + var_1_81) + var_1_103))) : (((var_1_66 >= var_1_70) && var_1_63) ? (var_1_87 == ((signed long int) (var_1_98 - var_1_33))) : 1)))) && (((var_1_61 - 4) >= var_1_82) ? (var_1_90 == ((signed char) var_1_61)) : 1)) && (var_1_49 ? (var_1_91 == ((unsigned short int) (((min (var_1_77 , 29634)) + 22240) - (max (var_1_44 , var_1_81))))) : (var_1_91 == ((unsigned short int) (min (var_1_80 , (var_1_34 - 10))))))) && ((var_1_17 < (10.42f - (max (var_1_14 , var_1_15)))) ? (var_1_92 == ((float) (abs (var_1_13 - var_1_14)))) : 1)) && ((var_1_1 == var_1_48) ? (var_1_93 == ((float) (var_1_13 - var_1_73))) : (var_1_93 == ((float) (var_1_73 + var_1_72))))) && (var_1_94 == ((unsigned long int) var_1_68))) && (var_1_59 ? (var_1_95 == ((unsigned char) var_1_23)) : 1)) && (var_1_60 ? (var_1_96 == ((signed short int) 16)) : 1)) && (var_1_59 ? (var_1_97 == ((double) var_1_13)) : (var_1_97 == ((double) var_1_12)))) && (var_1_98 == ((unsigned long int) var_1_6))) && (var_1_99 == ((double) var_1_15))) && (var_1_58 ? (var_1_100 == ((unsigned char) var_1_45)) : (var_1_100 == ((unsigned char) var_1_23)))) && (var_1_102 ? (var_1_101 == ((unsigned short int) var_1_41)) : (var_1_101 == ((unsigned short int) var_1_45)))) && (var_1_59 ? (var_1_102 == ((unsigned char) var_1_60)) : 1)) && (var_1_103 == ((signed long int) var_1_45))) && (var_1_59 ? (var_1_104 == ((unsigned char) var_1_42)) : 1)) && (var_1_62 ? (var_1_105 == ((signed long int) var_1_34)) : (var_1_105 == ((signed long int) var_1_77)))) && (var_1_106 == ((signed short int) var_1_29))) && (var_1_58 ? (var_1_107 == ((signed long int) var_1_1)) : 1)) && (var_1_108 == ((unsigned char) var_1_50))) && (var_1_62 ? (var_1_109 == ((float) var_1_40)) : 1)) && (var_1_110 == ((signed short int) var_1_103))) && ((! var_1_108) ? ((var_1_22 > var_1_1) ? (var_1_111 == ((double) (var_1_15 - var_1_14))) : (var_1_111 == ((double) (min (var_1_14 , var_1_40))))) : 1)) && (last_1_var_1_108 ? ((var_1_60 || last_1_var_1_58) ? (var_1_112 == ((signed long int) ((max (var_1_67 , last_1_var_1_75)) + last_1_var_1_79))) : (var_1_112 == ((signed long int) last_1_var_1_101))) : (var_1_112 == ((signed long int) last_1_var_1_101)))
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
