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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 4.5;
unsigned char var_1_3 = 50;
unsigned char var_1_4 = 32;
float var_1_10 = -0.5;
float var_1_11 = 500.84;
float var_1_12 = 5.7;
float var_1_13 = 32.25;
float var_1_14 = 49.375;
float var_1_15 = 64.8;
unsigned short int var_1_16 = 0;
unsigned short int var_1_18 = 20230;
unsigned short int var_1_19 = 27186;
double var_1_20 = 255.4;
float var_1_21 = 32.3;
double var_1_22 = 63.6;
double var_1_23 = 255.625;
double var_1_24 = 5.451;
unsigned long int var_1_25 = 64;
signed char var_1_26 = -5;
signed char var_1_27 = 50;
signed char var_1_28 = 25;
unsigned short int var_1_29 = 256;
float var_1_30 = 16.96;
float var_1_31 = 4.2;
float var_1_32 = 5.6;
signed short int var_1_34 = -2;
unsigned char var_1_36 = 128;
signed short int var_1_37 = 1;
signed short int var_1_38 = 29456;
float var_1_39 = 24.5;
float var_1_40 = 64.75;
float var_1_41 = -0.75;
signed long int var_1_42 = 0;
signed long int var_1_43 = 256;
signed long int var_1_44 = -64;
signed short int var_1_45 = 256;
signed short int var_1_46 = 8;
signed short int var_1_47 = 2;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
signed long int var_1_52 = -50;
double var_1_53 = 5.75;
signed long int var_1_54 = 2077556069;
unsigned long int var_1_55 = 1;
float var_1_56 = 0.75;
unsigned char var_1_57 = 0;
signed short int var_1_58 = 2;
signed short int var_1_59 = 10;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned long int var_1_63 = 32;
unsigned long int var_1_64 = 3790763761;
unsigned long int var_1_65 = 4;
unsigned short int var_1_66 = 50320;
unsigned short int var_1_67 = 45055;
unsigned long int var_1_68 = 50;
unsigned short int var_1_69 = 4;
unsigned long int var_1_70 = 100;
unsigned long int var_1_71 = 5;
float var_1_72 = 63.4;
float var_1_73 = 256.4;
unsigned char var_1_74 = 1;
signed short int var_1_75 = -5;
signed short int var_1_76 = 10;
signed short int var_1_77 = 29725;
signed short int var_1_78 = 10000;
unsigned long int var_1_79 = 2;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 0;
double var_1_82 = 9999999999999.5;
double var_1_83 = 15.75;
unsigned long int var_1_84 = 4;
float var_1_85 = 9.5;
float var_1_86 = 32.2;
signed char var_1_87 = -64;
signed char var_1_88 = 100;
signed char var_1_89 = 0;
unsigned char var_1_90 = 10;
unsigned char var_1_91 = 200;
unsigned char var_1_92 = 10;
float var_1_93 = 99.5;
float var_1_94 = 15.2;
signed long int var_1_95 = -100;
float var_1_96 = 8.75;
unsigned short int var_1_97 = 2;
unsigned short int var_1_98 = 2;
signed long int var_1_99 = -32;
signed short int var_1_100 = -256;
unsigned long int var_1_101 = 100;
float var_1_102 = 2.2;
signed short int var_1_103 = 5;
signed short int var_1_104 = -25;
unsigned short int var_1_105 = 500;
signed long int var_1_106 = -4;
unsigned short int var_1_107 = 25;
unsigned char var_1_108 = 32;
float var_1_109 = -0.5;
float var_1_110 = 63.875;
double var_1_111 = 32.55;
signed short int var_1_112 = 0;
signed short int var_1_113 = 8;
float var_1_114 = 4.5;
unsigned long int var_1_115 = 32;
unsigned char var_1_116 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_16 = 0;
signed short int last_1_var_1_34 = -2;
unsigned char last_1_var_1_48 = 0;
signed long int last_1_var_1_52 = -50;
unsigned char last_1_var_1_57 = 0;
unsigned long int last_1_var_1_63 = 32;
unsigned long int last_1_var_1_65 = 4;
unsigned long int last_1_var_1_79 = 2;
double last_1_var_1_83 = 15.75;
signed long int last_1_var_1_95 = -100;
float last_1_var_1_96 = 8.75;
signed short int last_1_var_1_100 = -256;
unsigned short int last_1_var_1_107 = 25;
unsigned long int last_1_var_1_115 = 32;
unsigned char last_1_var_1_116 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req22Batch40Amount500
	signed long int stepLocal_19 = var_1_43;
	if (stepLocal_19 < last_1_var_1_107) {
		var_1_70 = (var_1_64 - 128u);
	} else {
		var_1_70 = last_1_var_1_34;
	}


	// From: Req48Batch40Amount500
	var_1_106 = var_1_70;


	// From: Req30Batch40Amount500
	signed long int stepLocal_30 = 10;
	unsigned char stepLocal_29 = var_1_61;
	unsigned long int stepLocal_28 = var_1_19 * (last_1_var_1_79 + var_1_44);
	if (var_1_27 > stepLocal_28) {
		if (stepLocal_29 || last_1_var_1_48) {
			var_1_80 = var_1_49;
		} else {
			if (var_1_28 >= stepLocal_30) {
				var_1_80 = var_1_51;
			} else {
				if (last_1_var_1_83 <= 64.5f) {
					var_1_80 = (last_1_var_1_57 || (! var_1_51));
				} else {
					var_1_80 = (var_1_51 || var_1_81);
				}
			}
		}
	} else {
		if (var_1_12 <= last_1_var_1_96) {
			var_1_80 = (last_1_var_1_48 || (var_1_49 || (last_1_var_1_116 || var_1_62)));
		} else {
			var_1_80 = var_1_51;
		}
	}


	// From: Req31Batch40Amount500
	if (var_1_80) {
		if (! var_1_81) {
			var_1_82 = (max (var_1_11 , var_1_40));
		}
	}


	// From: Req20Batch40Amount500
	if (((min (var_1_66 , var_1_67)) - (var_1_36 + var_1_58)) <= (max ((100 * 4) , last_1_var_1_95))) {
		var_1_65 = (var_1_64 - (last_1_var_1_16 + var_1_68));
	} else {
		var_1_65 = ((min (var_1_36 , 256u)) + (abs (last_1_var_1_34)));
	}


	// From: Req44Batch40Amount500
	var_1_101 = last_1_var_1_115;


	// From: Req6Batch40Amount500
	if (var_1_22 <= var_1_24) {
		var_1_29 = (var_1_101 + (var_1_19 - (max (var_1_4 , var_1_28))));
	}


	// From: Req14Batch40Amount500
	unsigned long int stepLocal_12 = var_1_101;
	if ((max ((min (4 , var_1_44)) , var_1_4)) <= stepLocal_12) {
		var_1_48 = (! (var_1_49 && var_1_50));
	} else {
		var_1_48 = var_1_51;
	}


	// From: Req16Batch40Amount500
	unsigned char stepLocal_15 = var_1_3;
	signed long int stepLocal_14 = (var_1_43 % var_1_36) * (var_1_18 / var_1_38);
	unsigned long int stepLocal_13 = last_1_var_1_65;
	if (stepLocal_14 < (last_1_var_1_52 - var_1_19)) {
		if (2 >= stepLocal_15) {
			var_1_55 = (abs (abs (var_1_54)));
		} else {
			var_1_55 = last_1_var_1_100;
		}
	} else {
		if (var_1_15 >= (256.4f - var_1_22)) {
			if ((- (var_1_3 * var_1_43)) < stepLocal_13) {
				var_1_55 = var_1_37;
			}
		} else {
			var_1_55 = (min (var_1_3 , 256u));
		}
	}


	// From: Req5Batch40Amount500
	unsigned long int stepLocal_1 = var_1_55 / var_1_4;
	if (stepLocal_1 < var_1_19) {
		var_1_26 = (var_1_27 + (var_1_28 - 1));
	} else {
		if (var_1_12 <= ((var_1_23 + var_1_22) - var_1_14)) {
			var_1_26 = var_1_28;
		} else {
			var_1_26 = var_1_27;
		}
	}


	// From: Req7Batch40Amount500
	unsigned char stepLocal_3 = var_1_4;
	signed long int stepLocal_2 = 0;
	if (stepLocal_2 >= var_1_4) {
		var_1_30 = (var_1_22 - var_1_13);
	} else {
		if (-4 <= stepLocal_3) {
			var_1_30 = var_1_24;
		} else {
			var_1_30 = (abs (var_1_23));
		}
	}


	// From: Req8Batch40Amount500
	var_1_31 = ((var_1_23 + var_1_22) - var_1_15);


	// From: Req17Batch40Amount500
	signed short int stepLocal_16 = var_1_37;
	if (stepLocal_16 <= var_1_19) {
		var_1_56 = (var_1_24 + var_1_40);
	}


	// From: Req18Batch40Amount500
	if (var_1_40 == var_1_12) {
		var_1_57 = (! (! 0));
	} else {
		if ((var_1_36 >> (4 - var_1_58)) <= (var_1_38 >> var_1_59)) {
			var_1_57 = ((var_1_50 || var_1_49) && (var_1_60 && (var_1_61 && var_1_62)));
		} else {
			var_1_57 = (! var_1_51);
		}
	}


	// From: Req24Batch40Amount500
	unsigned char stepLocal_22 = var_1_51;
	if (var_1_61 && stepLocal_22) {
		var_1_72 = (var_1_11 + var_1_41);
	} else {
		var_1_72 = (min (500.125f , var_1_41));
	}


	// From: Req25Batch40Amount500
	var_1_73 = (var_1_22 + (var_1_24 - (max (256.5f , var_1_23))));


	// From: Req33Batch40Amount500
	var_1_84 = (max (var_1_37 , var_1_66));


	// From: Req34Batch40Amount500
	var_1_85 = (max ((max (var_1_14 , var_1_10)) , (max ((max (var_1_41 , var_1_23)) , var_1_11))));


	// From: Req38Batch40Amount500
	var_1_93 = ((200.25f - 1.8f) + var_1_94);


	// From: Req40Batch40Amount500
	var_1_96 = var_1_12;


	// From: Req41Batch40Amount500
	var_1_97 = var_1_98;


	// From: Req43Batch40Amount500
	if (var_1_62) {
		var_1_100 = var_1_91;
	} else {
		var_1_100 = var_1_36;
	}


	// From: Req45Batch40Amount500
	if (var_1_57) {
		var_1_102 = var_1_40;
	} else {
		var_1_102 = 16.4f;
	}


	// From: Req46Batch40Amount500
	if (var_1_62) {
		var_1_103 = var_1_104;
	}


	// From: Req47Batch40Amount500
	if (var_1_62) {
		var_1_105 = var_1_3;
	} else {
		var_1_105 = var_1_36;
	}


	// From: Req49Batch40Amount500
	var_1_107 = var_1_37;


	// From: Req50Batch40Amount500
	if (var_1_57) {
		var_1_108 = var_1_4;
	}


	// From: Req51Batch40Amount500
	var_1_109 = var_1_110;


	// From: Req52Batch40Amount500
	var_1_111 = var_1_22;


	// From: Req53Batch40Amount500
	if (var_1_62) {
		var_1_112 = var_1_28;
	}


	// From: Req54Batch40Amount500
	var_1_113 = var_1_107;


	// From: Req57Batch40Amount500
	var_1_116 = 0;


	// From: Req26Batch40Amount500
	signed long int stepLocal_24 = var_1_58 * var_1_44;
	unsigned char stepLocal_23 = var_1_116 && var_1_80;
	if ((var_1_4 << var_1_55) >= stepLocal_24) {
		if (stepLocal_23 || var_1_62) {
			var_1_74 = var_1_61;
		}
	}


	// From: Req37Batch40Amount500
	unsigned char stepLocal_34 = var_1_61;
	signed short int stepLocal_33 = var_1_46;
	if ((! var_1_74) && stepLocal_34) {
		var_1_90 = ((var_1_91 - (var_1_59 + 16)) - (var_1_88 - var_1_28));
	} else {
		if (var_1_58 > stepLocal_33) {
			if (var_1_62) {
				var_1_90 = ((var_1_91 - (max (var_1_59 , var_1_28))) - 25);
			} else {
				var_1_90 = (var_1_91 - var_1_4);
			}
		} else {
			var_1_90 = ((var_1_58 + (min (50 , var_1_92))) + (min ((var_1_88 - var_1_28) , var_1_89)));
		}
	}


	// From: Req56Batch40Amount500
	unsigned long int stepLocal_35 = var_1_101;
	if (var_1_61) {
		if (stepLocal_35 <= (max (var_1_90 , (var_1_66 & var_1_54)))) {
			var_1_115 = (2673592943u - (max (var_1_29 , var_1_4)));
		}
	}


	// From: Req21Batch40Amount500
	if (var_1_80) {
		var_1_69 = (min ((min (var_1_18 , var_1_29)) , var_1_59));
	}


	// From: Req23Batch40Amount500
	signed long int stepLocal_21 = 4 - (50 + var_1_28);
	unsigned char stepLocal_20 = var_1_50;
	if (stepLocal_21 < var_1_68) {
		var_1_71 = (3266394690u - var_1_65);
	} else {
		if (var_1_62 || stepLocal_20) {
			var_1_71 = (var_1_68 + var_1_108);
		}
	}


	// From: Req32Batch40Amount500
	unsigned char stepLocal_31 = var_1_84 >= var_1_18;
	if (var_1_116) {
		if (stepLocal_31 && (var_1_40 >= var_1_111)) {
			var_1_83 = (min (var_1_10 , var_1_15));
		} else {
			var_1_83 = var_1_13;
		}
	} else {
		var_1_83 = (min (var_1_40 , var_1_14));
	}


	// From: Req35Batch40Amount500
	if (var_1_4 < var_1_107) {
		var_1_86 = (var_1_13 - (abs (max (var_1_14 , var_1_11))));
	} else {
		var_1_86 = (var_1_24 + (abs (24.25f)));
	}


	// From: Req36Batch40Amount500
	unsigned short int stepLocal_32 = var_1_18;
	if ((var_1_19 & var_1_70) < stepLocal_32) {
		var_1_87 = (32 + var_1_27);
	} else {
		if (var_1_116) {
			var_1_87 = (var_1_28 - (var_1_88 - var_1_59));
		} else {
			if ((9.9999999999375E10f * var_1_12) > var_1_111) {
				var_1_87 = (min ((max (var_1_88 , (min (var_1_58 , var_1_27)))) , var_1_59));
			} else {
				var_1_87 = ((min (16 , (min (var_1_58 , var_1_88)))) - var_1_89);
			}
		}
	}


	// From: Req39Batch40Amount500
	if (var_1_53 <= var_1_21) {
		var_1_95 = var_1_18;
	} else {
		var_1_95 = var_1_103;
	}


	// From: Req55Batch40Amount500
	if (var_1_74) {
		var_1_114 = var_1_15;
	} else {
		var_1_114 = var_1_24;
	}


	// From: Req12Batch40Amount500
	if ((var_1_18 + (- var_1_4)) == 128) {
		if (var_1_57) {
			var_1_42 = ((min (var_1_18 , var_1_84)) + ((var_1_19 - var_1_37) + var_1_3));
		} else {
			var_1_42 = (min (var_1_38 , (max (var_1_43 , var_1_84))));
		}
	} else {
		if ((max (var_1_27 , var_1_4)) < var_1_115) {
			var_1_42 = ((min (var_1_36 , 128)) + (max (var_1_44 , var_1_3)));
		} else {
			var_1_42 = (((min (var_1_3 , var_1_106)) + (abs (var_1_84))) + ((var_1_4 - var_1_19) + (var_1_55 + var_1_27)));
		}
	}


	// From: Req19Batch40Amount500
	unsigned long int stepLocal_18 = var_1_70;
	signed long int stepLocal_17 = - var_1_38;
	if (var_1_18 < stepLocal_17) {
		if (stepLocal_18 <= last_1_var_1_63) {
			var_1_63 = (abs (max (var_1_65 , var_1_69)));
		} else {
			var_1_63 = (var_1_64 - (var_1_58 + var_1_18));
		}
	} else {
		var_1_63 = var_1_28;
	}


	// From: Req11Batch40Amount500
	unsigned char stepLocal_10 = var_1_3 == (max (var_1_65 , var_1_55));
	unsigned char stepLocal_9 = var_1_71 < var_1_108;
	if (stepLocal_9 || var_1_74) {
		var_1_39 = (var_1_24 - var_1_23);
	} else {
		if (var_1_74 || stepLocal_10) {
			var_1_39 = (max ((var_1_13 - var_1_22) , (max (var_1_12 , var_1_11))));
		} else {
			var_1_39 = ((256.5f + var_1_40) + (var_1_41 + 100.5f));
		}
	}


	// From: Req29Batch40Amount500
	unsigned long int stepLocal_27 = var_1_63;
	if (var_1_73 > var_1_22) {
		if (stepLocal_27 <= ((min (var_1_77 , var_1_4)) >> var_1_59)) {
			var_1_79 = (var_1_64 - var_1_58);
		} else {
			var_1_79 = (max (var_1_37 , var_1_38));
		}
	}


	// From: Req42Batch40Amount500
	var_1_99 = var_1_79;


	// From: Req3Batch40Amount500
	if (var_1_10 < (var_1_86 / (max (25.125f , var_1_21)))) {
		var_1_20 = ((var_1_22 + (max (var_1_23 , var_1_24))) - var_1_15);
	} else {
		if ((var_1_19 * var_1_84) != var_1_99) {
			if ((var_1_86 > 24.4f) && var_1_57) {
				var_1_20 = (var_1_15 - var_1_14);
			}
		}
	}


	// From: Req1Batch40Amount500
	if ((var_1_99 / (var_1_3 + var_1_4)) == (min (8 , var_1_95))) {
		if ((var_1_95 > var_1_99) && var_1_48) {
			if ((var_1_109 + var_1_72) != var_1_39) {
				var_1_1 = 8.6f;
			}
		} else {
			if ((var_1_99 & var_1_95) != var_1_4) {
				if (var_1_48) {
					var_1_1 = (max ((var_1_10 + (max (127.3f , var_1_11))) , var_1_12));
				}
			} else {
				var_1_1 = ((max (31.5f , var_1_13)) - (min (49.2f , (min (var_1_14 , var_1_15)))));
			}
		}
	}


	// From: Req9Batch40Amount500
	if (! (var_1_12 > var_1_1)) {
		var_1_32 = var_1_11;
	}


	// From: Req4Batch40Amount500
	if ((- var_1_82) >= var_1_32) {
		var_1_25 = (var_1_19 + var_1_105);
	} else {
		var_1_25 = (min ((var_1_55 + var_1_4) , var_1_105));
	}


	// From: Req10Batch40Amount500
	unsigned char stepLocal_8 = var_1_36;
	signed long int stepLocal_7 = var_1_36 - var_1_4;
	unsigned char stepLocal_6 = var_1_20 <= var_1_24;
	signed long int stepLocal_5 = ~ (var_1_42 + var_1_19);
	unsigned long int stepLocal_4 = var_1_25;
	if (stepLocal_4 >= (abs (var_1_4))) {
		if (stepLocal_7 != var_1_84) {
			var_1_34 = (abs (var_1_42));
		} else {
			var_1_34 = ((max (var_1_36 , var_1_27)) + var_1_55);
		}
	} else {
		if (stepLocal_8 < var_1_4) {
			if (var_1_27 < stepLocal_5) {
				var_1_34 = ((max (var_1_28 , var_1_3)) - var_1_37);
			} else {
				var_1_34 = ((var_1_90 - 8) + var_1_28);
			}
		} else {
			if (var_1_24 <= var_1_30) {
				if (stepLocal_6 && var_1_57) {
					var_1_34 = var_1_28;
				} else {
					var_1_34 = (max (var_1_4 , ((var_1_38 - var_1_28) - var_1_37)));
				}
			}
		}
	}


	// From: Req28Batch40Amount500
	signed char stepLocal_26 = var_1_28;
	signed long int stepLocal_25 = ~ var_1_34;
	if (stepLocal_26 > var_1_34) {
		if (0 != stepLocal_25) {
			if (((7.265205042381584E18f - var_1_24) - var_1_23) <= var_1_109) {
				var_1_76 = (var_1_3 - (var_1_77 - (min (var_1_58 , var_1_34))));
			} else {
				var_1_76 = var_1_27;
			}
		}
	} else {
		var_1_76 = (((var_1_78 + 10000) - var_1_101) - var_1_28);
	}


	// From: Req27Batch40Amount500
	var_1_75 = (var_1_76 + var_1_47);


	// From: Req15Batch40Amount500
	if ((var_1_105 / var_1_3) > -64) {
		var_1_52 = (min ((var_1_27 + var_1_76) , (var_1_37 - var_1_36)));
	} else {
		if (0.375 > (var_1_23 / (max (var_1_21 , var_1_53)))) {
			var_1_52 = (var_1_36 - (var_1_54 - var_1_79));
		}
	}


	// From: Req2Batch40Amount500
	unsigned long int stepLocal_0 = var_1_101;
	if (var_1_12 <= var_1_20) {
		if ((min ((var_1_42 / 1) , var_1_52)) > stepLocal_0) {
			var_1_16 = ((var_1_18 + (var_1_19 - var_1_4)) - var_1_3);
		}
	}


	// From: Req13Batch40Amount500
	signed long int stepLocal_11 = (var_1_34 - var_1_3) * (var_1_46 - var_1_19);
	if (var_1_22 <= var_1_41) {
		if (var_1_41 == (abs (var_1_23))) {
			var_1_45 = var_1_4;
		} else {
			if (var_1_48) {
				var_1_45 = (var_1_75 - var_1_37);
			} else {
				if (var_1_41 >= var_1_21) {
					var_1_45 = var_1_34;
				} else {
					var_1_45 = (max ((max ((min (var_1_27 , var_1_36)) , (-10 + var_1_34))) , (var_1_75 + var_1_112)));
				}
			}
		}
	} else {
		if (stepLocal_11 == var_1_37) {
			var_1_45 = (min (var_1_3 , 8));
		} else {
			var_1_45 = (((var_1_52 + var_1_4) + var_1_36) + (max (var_1_47 , var_1_28)));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 128);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 24575);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 127);
	assume_abort_if_not(var_1_36 <= 255);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 16382);
	assume_abort_if_not(var_1_38 <= 32766);
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483647);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -1073741823);
	assume_abort_if_not(var_1_44 <= 1073741823);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -1);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= -16383);
	assume_abort_if_not(var_1_47 <= 16383);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -922337.2036854776000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
	assume_abort_if_not(var_1_53 != 0.0F);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= 1073741823);
	assume_abort_if_not(var_1_54 <= 2147483646);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 3);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 14);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 1);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 2147483647);
	assume_abort_if_not(var_1_64 <= 4294967294);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 32767);
	assume_abort_if_not(var_1_66 <= 65535);
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 32767);
	assume_abort_if_not(var_1_67 <= 65535);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 1073741823);
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= 16383);
	assume_abort_if_not(var_1_77 <= 32766);
	var_1_78 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_78 >= 8191);
	assume_abort_if_not(var_1_78 <= 16383);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 0);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= 63);
	assume_abort_if_not(var_1_88 <= 126);
	var_1_89 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 126);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 190);
	assume_abort_if_not(var_1_91 <= 254);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 63);
	var_1_94 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_94 >= -461168.6018427383000e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 4611686.018427383000e+12F && var_1_94 >= 1.0e-20F ));
	var_1_98 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 65534);
	var_1_104 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_104 >= -32767);
	assume_abort_if_not(var_1_104 <= 32766);
	var_1_110 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_110 >= -922337.2036854766000e+13F && var_1_110 <= -1.0e-20F) || (var_1_110 <= 9223372.036854766000e+12F && var_1_110 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_115 = var_1_115;
	last_1_var_1_116 = var_1_116;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_99 / (var_1_3 + var_1_4)) == (min (8 , var_1_95))) ? (((var_1_95 > var_1_99) && var_1_48) ? (((var_1_109 + var_1_72) != var_1_39) ? (var_1_1 == ((float) 8.6f)) : 1) : (((var_1_99 & var_1_95) != var_1_4) ? (var_1_48 ? (var_1_1 == ((float) (max ((var_1_10 + (max (127.3f , var_1_11))) , var_1_12)))) : 1) : (var_1_1 == ((float) ((max (31.5f , var_1_13)) - (min (49.2f , (min (var_1_14 , var_1_15))))))))) : 1) && ((var_1_12 <= var_1_20) ? (((min ((var_1_42 / 1) , var_1_52)) > var_1_101) ? (var_1_16 == ((unsigned short int) ((var_1_18 + (var_1_19 - var_1_4)) - var_1_3))) : 1) : 1)) && ((var_1_10 < (var_1_86 / (max (25.125f , var_1_21)))) ? (var_1_20 == ((double) ((var_1_22 + (max (var_1_23 , var_1_24))) - var_1_15))) : (((var_1_19 * var_1_84) != var_1_99) ? (((var_1_86 > 24.4f) && var_1_57) ? (var_1_20 == ((double) (var_1_15 - var_1_14))) : 1) : 1))) && (((- var_1_82) >= var_1_32) ? (var_1_25 == ((unsigned long int) (var_1_19 + var_1_105))) : (var_1_25 == ((unsigned long int) (min ((var_1_55 + var_1_4) , var_1_105)))))) && (((var_1_55 / var_1_4) < var_1_19) ? (var_1_26 == ((signed char) (var_1_27 + (var_1_28 - 1)))) : ((var_1_12 <= ((var_1_23 + var_1_22) - var_1_14)) ? (var_1_26 == ((signed char) var_1_28)) : (var_1_26 == ((signed char) var_1_27))))) && ((var_1_22 <= var_1_24) ? (var_1_29 == ((unsigned short int) (var_1_101 + (var_1_19 - (max (var_1_4 , var_1_28)))))) : 1)) && ((0 >= var_1_4) ? (var_1_30 == ((float) (var_1_22 - var_1_13))) : ((-4 <= var_1_4) ? (var_1_30 == ((float) var_1_24)) : (var_1_30 == ((float) (abs (var_1_23))))))) && (var_1_31 == ((float) ((var_1_23 + var_1_22) - var_1_15)))) && ((! (var_1_12 > var_1_1)) ? (var_1_32 == ((float) var_1_11)) : 1)) && ((var_1_25 >= (abs (var_1_4))) ? (((var_1_36 - var_1_4) != var_1_84) ? (var_1_34 == ((signed short int) (abs (var_1_42)))) : (var_1_34 == ((signed short int) ((max (var_1_36 , var_1_27)) + var_1_55)))) : ((var_1_36 < var_1_4) ? ((var_1_27 < (~ (var_1_42 + var_1_19))) ? (var_1_34 == ((signed short int) ((max (var_1_28 , var_1_3)) - var_1_37))) : (var_1_34 == ((signed short int) ((var_1_90 - 8) + var_1_28)))) : ((var_1_24 <= var_1_30) ? (((var_1_20 <= var_1_24) && var_1_57) ? (var_1_34 == ((signed short int) var_1_28)) : (var_1_34 == ((signed short int) (max (var_1_4 , ((var_1_38 - var_1_28) - var_1_37)))))) : 1)))) && (((var_1_71 < var_1_108) || var_1_74) ? (var_1_39 == ((float) (var_1_24 - var_1_23))) : ((var_1_74 || (var_1_3 == (max (var_1_65 , var_1_55)))) ? (var_1_39 == ((float) (max ((var_1_13 - var_1_22) , (max (var_1_12 , var_1_11)))))) : (var_1_39 == ((float) ((256.5f + var_1_40) + (var_1_41 + 100.5f))))))) && (((var_1_18 + (- var_1_4)) == 128) ? (var_1_57 ? (var_1_42 == ((signed long int) ((min (var_1_18 , var_1_84)) + ((var_1_19 - var_1_37) + var_1_3)))) : (var_1_42 == ((signed long int) (min (var_1_38 , (max (var_1_43 , var_1_84))))))) : (((max (var_1_27 , var_1_4)) < var_1_115) ? (var_1_42 == ((signed long int) ((min (var_1_36 , 128)) + (max (var_1_44 , var_1_3))))) : (var_1_42 == ((signed long int) (((min (var_1_3 , var_1_106)) + (abs (var_1_84))) + ((var_1_4 - var_1_19) + (var_1_55 + var_1_27)))))))) && ((var_1_22 <= var_1_41) ? ((var_1_41 == (abs (var_1_23))) ? (var_1_45 == ((signed short int) var_1_4)) : (var_1_48 ? (var_1_45 == ((signed short int) (var_1_75 - var_1_37))) : ((var_1_41 >= var_1_21) ? (var_1_45 == ((signed short int) var_1_34)) : (var_1_45 == ((signed short int) (max ((max ((min (var_1_27 , var_1_36)) , (-10 + var_1_34))) , (var_1_75 + var_1_112)))))))) : ((((var_1_34 - var_1_3) * (var_1_46 - var_1_19)) == var_1_37) ? (var_1_45 == ((signed short int) (min (var_1_3 , 8)))) : (var_1_45 == ((signed short int) (((var_1_52 + var_1_4) + var_1_36) + (max (var_1_47 , var_1_28)))))))) && (((max ((min (4 , var_1_44)) , var_1_4)) <= var_1_101) ? (var_1_48 == ((unsigned char) (! (var_1_49 && var_1_50)))) : (var_1_48 == ((unsigned char) var_1_51)))) && (((var_1_105 / var_1_3) > -64) ? (var_1_52 == ((signed long int) (min ((var_1_27 + var_1_76) , (var_1_37 - var_1_36))))) : ((0.375 > (var_1_23 / (max (var_1_21 , var_1_53)))) ? (var_1_52 == ((signed long int) (var_1_36 - (var_1_54 - var_1_79)))) : 1))) && ((((var_1_43 % var_1_36) * (var_1_18 / var_1_38)) < (last_1_var_1_52 - var_1_19)) ? ((2 >= var_1_3) ? (var_1_55 == ((unsigned long int) (abs (abs (var_1_54))))) : (var_1_55 == ((unsigned long int) last_1_var_1_100))) : ((var_1_15 >= (256.4f - var_1_22)) ? (((- (var_1_3 * var_1_43)) < last_1_var_1_65) ? (var_1_55 == ((unsigned long int) var_1_37)) : 1) : (var_1_55 == ((unsigned long int) (min (var_1_3 , 256u))))))) && ((var_1_37 <= var_1_19) ? (var_1_56 == ((float) (var_1_24 + var_1_40))) : 1)) && ((var_1_40 == var_1_12) ? (var_1_57 == ((unsigned char) (! (! 0)))) : (((var_1_36 >> (4 - var_1_58)) <= (var_1_38 >> var_1_59)) ? (var_1_57 == ((unsigned char) ((var_1_50 || var_1_49) && (var_1_60 && (var_1_61 && var_1_62))))) : (var_1_57 == ((unsigned char) (! var_1_51)))))) && ((var_1_18 < (- var_1_38)) ? ((var_1_70 <= last_1_var_1_63) ? (var_1_63 == ((unsigned long int) (abs (max (var_1_65 , var_1_69))))) : (var_1_63 == ((unsigned long int) (var_1_64 - (var_1_58 + var_1_18))))) : (var_1_63 == ((unsigned long int) var_1_28)))) && ((((min (var_1_66 , var_1_67)) - (var_1_36 + var_1_58)) <= (max ((100 * 4) , last_1_var_1_95))) ? (var_1_65 == ((unsigned long int) (var_1_64 - (last_1_var_1_16 + var_1_68)))) : (var_1_65 == ((unsigned long int) ((min (var_1_36 , 256u)) + (abs (last_1_var_1_34))))))) && (var_1_80 ? (var_1_69 == ((unsigned short int) (min ((min (var_1_18 , var_1_29)) , var_1_59)))) : 1)) && ((var_1_43 < last_1_var_1_107) ? (var_1_70 == ((unsigned long int) (var_1_64 - 128u))) : (var_1_70 == ((unsigned long int) last_1_var_1_34)))) && (((4 - (50 + var_1_28)) < var_1_68) ? (var_1_71 == ((unsigned long int) (3266394690u - var_1_65))) : ((var_1_62 || var_1_50) ? (var_1_71 == ((unsigned long int) (var_1_68 + var_1_108))) : 1))) && ((var_1_61 && var_1_51) ? (var_1_72 == ((float) (var_1_11 + var_1_41))) : (var_1_72 == ((float) (min (500.125f , var_1_41)))))) && (var_1_73 == ((float) (var_1_22 + (var_1_24 - (max (256.5f , var_1_23))))))) && (((var_1_4 << var_1_55) >= (var_1_58 * var_1_44)) ? (((var_1_116 && var_1_80) || var_1_62) ? (var_1_74 == ((unsigned char) var_1_61)) : 1) : 1)) && (var_1_75 == ((signed short int) (var_1_76 + var_1_47)))) && ((var_1_28 > var_1_34) ? ((0 != (~ var_1_34)) ? ((((7.265205042381584E18f - var_1_24) - var_1_23) <= var_1_109) ? (var_1_76 == ((signed short int) (var_1_3 - (var_1_77 - (min (var_1_58 , var_1_34)))))) : (var_1_76 == ((signed short int) var_1_27))) : 1) : (var_1_76 == ((signed short int) (((var_1_78 + 10000) - var_1_101) - var_1_28))))) && ((var_1_73 > var_1_22) ? ((var_1_63 <= ((min (var_1_77 , var_1_4)) >> var_1_59)) ? (var_1_79 == ((unsigned long int) (var_1_64 - var_1_58))) : (var_1_79 == ((unsigned long int) (max (var_1_37 , var_1_38))))) : 1)) && ((var_1_27 > (var_1_19 * (last_1_var_1_79 + var_1_44))) ? ((var_1_61 || last_1_var_1_48) ? (var_1_80 == ((unsigned char) var_1_49)) : ((var_1_28 >= 10) ? (var_1_80 == ((unsigned char) var_1_51)) : ((last_1_var_1_83 <= 64.5f) ? (var_1_80 == ((unsigned char) (last_1_var_1_57 || (! var_1_51)))) : (var_1_80 == ((unsigned char) (var_1_51 || var_1_81)))))) : ((var_1_12 <= last_1_var_1_96) ? (var_1_80 == ((unsigned char) (last_1_var_1_48 || (var_1_49 || (last_1_var_1_116 || var_1_62))))) : (var_1_80 == ((unsigned char) var_1_51))))) && (var_1_80 ? ((! var_1_81) ? (var_1_82 == ((double) (max (var_1_11 , var_1_40)))) : 1) : 1)) && (var_1_116 ? (((var_1_84 >= var_1_18) && (var_1_40 >= var_1_111)) ? (var_1_83 == ((double) (min (var_1_10 , var_1_15)))) : (var_1_83 == ((double) var_1_13))) : (var_1_83 == ((double) (min (var_1_40 , var_1_14)))))) && (var_1_84 == ((unsigned long int) (max (var_1_37 , var_1_66))))) && (var_1_85 == ((float) (max ((max (var_1_14 , var_1_10)) , (max ((max (var_1_41 , var_1_23)) , var_1_11))))))) && ((var_1_4 < var_1_107) ? (var_1_86 == ((float) (var_1_13 - (abs (max (var_1_14 , var_1_11)))))) : (var_1_86 == ((float) (var_1_24 + (abs (24.25f))))))) && (((var_1_19 & var_1_70) < var_1_18) ? (var_1_87 == ((signed char) (32 + var_1_27))) : (var_1_116 ? (var_1_87 == ((signed char) (var_1_28 - (var_1_88 - var_1_59)))) : (((9.9999999999375E10f * var_1_12) > var_1_111) ? (var_1_87 == ((signed char) (min ((max (var_1_88 , (min (var_1_58 , var_1_27)))) , var_1_59)))) : (var_1_87 == ((signed char) ((min (16 , (min (var_1_58 , var_1_88)))) - var_1_89))))))) && (((! var_1_74) && var_1_61) ? (var_1_90 == ((unsigned char) ((var_1_91 - (var_1_59 + 16)) - (var_1_88 - var_1_28)))) : ((var_1_58 > var_1_46) ? (var_1_62 ? (var_1_90 == ((unsigned char) ((var_1_91 - (max (var_1_59 , var_1_28))) - 25))) : (var_1_90 == ((unsigned char) (var_1_91 - var_1_4)))) : (var_1_90 == ((unsigned char) ((var_1_58 + (min (50 , var_1_92))) + (min ((var_1_88 - var_1_28) , var_1_89)))))))) && (var_1_93 == ((float) ((200.25f - 1.8f) + var_1_94)))) && ((var_1_53 <= var_1_21) ? (var_1_95 == ((signed long int) var_1_18)) : (var_1_95 == ((signed long int) var_1_103)))) && (var_1_96 == ((float) var_1_12))) && (var_1_97 == ((unsigned short int) var_1_98))) && (var_1_99 == ((signed long int) var_1_79))) && (var_1_62 ? (var_1_100 == ((signed short int) var_1_91)) : (var_1_100 == ((signed short int) var_1_36)))) && (var_1_101 == ((unsigned long int) last_1_var_1_115))) && (var_1_57 ? (var_1_102 == ((float) var_1_40)) : (var_1_102 == ((float) 16.4f)))) && (var_1_62 ? (var_1_103 == ((signed short int) var_1_104)) : 1)) && (var_1_62 ? (var_1_105 == ((unsigned short int) var_1_3)) : (var_1_105 == ((unsigned short int) var_1_36)))) && (var_1_106 == ((signed long int) var_1_70))) && (var_1_107 == ((unsigned short int) var_1_37))) && (var_1_57 ? (var_1_108 == ((unsigned char) var_1_4)) : 1)) && (var_1_109 == ((float) var_1_110))) && (var_1_111 == ((double) var_1_22))) && (var_1_62 ? (var_1_112 == ((signed short int) var_1_28)) : 1)) && (var_1_113 == ((signed short int) var_1_107))) && (var_1_74 ? (var_1_114 == ((float) var_1_15)) : (var_1_114 == ((float) var_1_24)))) && (var_1_61 ? ((var_1_101 <= (max (var_1_90 , (var_1_66 & var_1_54)))) ? (var_1_115 == ((unsigned long int) (2673592943u - (max (var_1_29 , var_1_4))))) : 1) : 1)) && (var_1_116 == ((unsigned char) 0))
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
