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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_5 = 0;
double var_1_7 = 4.75;
double var_1_8 = 5.8;
double var_1_9 = 16.25;
signed char var_1_10 = 50;
signed char var_1_11 = -1;
signed char var_1_12 = -5;
signed char var_1_13 = -16;
signed char var_1_14 = -2;
signed char var_1_15 = 32;
signed char var_1_16 = 2;
unsigned char var_1_17 = 1;
double var_1_18 = 128.875;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = -2;
signed char var_1_23 = 100;
unsigned long int var_1_24 = 1;
unsigned long int var_1_26 = 4290010749;
signed short int var_1_27 = 1;
unsigned long int var_1_28 = 1000000000;
unsigned long int var_1_29 = 1000000000;
unsigned long int var_1_30 = 1971369821;
float var_1_31 = 4.25;
float var_1_32 = 9.1;
unsigned short int var_1_33 = 47989;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 5;
float var_1_36 = 15.5;
float var_1_37 = 50.625;
float var_1_38 = 49.5;
signed short int var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 64;
unsigned long int var_1_44 = 2892928666;
unsigned char var_1_45 = 0;
signed short int var_1_46 = 5;
signed char var_1_47 = 25;
signed char var_1_48 = 100;
unsigned short int var_1_49 = 0;
signed short int var_1_50 = 31893;
signed short int var_1_51 = 256;
signed short int var_1_52 = 26937;
unsigned char var_1_53 = 10;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 128;
unsigned char var_1_56 = 32;
unsigned char var_1_57 = 5;
double var_1_58 = 8.5;
unsigned char var_1_59 = 25;
unsigned char var_1_60 = 64;
unsigned char var_1_61 = 16;
unsigned short int var_1_62 = 0;
unsigned short int var_1_63 = 16;
unsigned long int var_1_64 = 2592385568;
unsigned short int var_1_65 = 30178;
unsigned long int var_1_66 = 0;
unsigned char var_1_67 = 10;
signed short int var_1_68 = -256;
signed char var_1_69 = 2;
signed char var_1_71 = 8;
unsigned char var_1_72 = 1;
float var_1_73 = 9.1;
signed long int var_1_74 = -1;
unsigned long int var_1_75 = 0;
signed char var_1_77 = 50;
signed char var_1_78 = 16;
unsigned char var_1_79 = 5;
unsigned short int var_1_80 = 256;
unsigned short int var_1_81 = 4;
unsigned short int var_1_82 = 57698;
signed char var_1_83 = 10;
float var_1_84 = 99.5;
float var_1_87 = 32.75;
float var_1_88 = 0.0;
float var_1_89 = 16.4;
float var_1_90 = 9.75;
signed short int var_1_91 = 256;
unsigned char var_1_92 = 0;
unsigned long int var_1_93 = 1142504140;
signed long int var_1_94 = -50;
double var_1_95 = 64.5;
signed short int var_1_96 = -4;
signed short int var_1_98 = 29184;
signed long int var_1_99 = 0;
signed char var_1_100 = 2;
unsigned char var_1_101 = 0;
signed char var_1_102 = 100;
signed char var_1_103 = 32;
signed char var_1_104 = -5;
signed short int var_1_105 = 16;
signed short int var_1_106 = -50;
unsigned long int var_1_107 = 0;
double var_1_108 = 127.7;
unsigned long int var_1_109 = 128;
unsigned long int var_1_110 = 10;
unsigned short int var_1_111 = 0;
signed long int var_1_112 = -25;
unsigned long int var_1_113 = 64;
unsigned long int var_1_114 = 1000000;
signed long int var_1_115 = 32;
signed long int var_1_116 = 1897609067;
unsigned char var_1_117 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed char last_1_var_1_10 = 50;
signed char last_1_var_1_22 = -2;
unsigned long int last_1_var_1_43 = 64;
unsigned char last_1_var_1_45 = 0;
signed short int last_1_var_1_51 = 256;
unsigned short int last_1_var_1_62 = 0;
unsigned long int last_1_var_1_66 = 0;
signed long int last_1_var_1_74 = -1;
unsigned long int last_1_var_1_75 = 0;
unsigned short int last_1_var_1_80 = 256;
signed long int last_1_var_1_94 = -50;
double last_1_var_1_95 = 64.5;
signed short int last_1_var_1_96 = -4;
signed long int last_1_var_1_99 = 0;
signed short int last_1_var_1_105 = 16;
signed short int last_1_var_1_106 = -50;
unsigned long int last_1_var_1_107 = 0;
unsigned long int last_1_var_1_109 = 128;
unsigned long int last_1_var_1_110 = 10;
unsigned long int last_1_var_1_113 = 64;
signed long int last_1_var_1_115 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch166Amount500
	if (last_1_var_1_95 > var_1_38) {
		var_1_58 = ((var_1_37 - 127.75) + var_1_38);
	} else {
		var_1_58 = (max (var_1_32 , 7.9));
	}


	// From: Req14Batch166Amount500
	if (var_1_58 != var_1_8) {
		var_1_47 = (var_1_15 - (var_1_48 - var_1_16));
	} else {
		var_1_47 = (var_1_23 - 16);
	}


	// From: Req10Batch166Amount500
	if (last_1_var_1_110 > 5u) {
		if (((- var_1_27) << 1u) > last_1_var_1_10) {
			if (var_1_30 >= var_1_29) {
				var_1_40 = (var_1_21 || var_1_41);
			} else {
				var_1_40 = (! var_1_20);
			}
		}
	} else {
		var_1_40 = (((var_1_35 - last_1_var_1_107) < var_1_27) && var_1_42);
	}


	// From: Req48Batch166Amount500
	if (var_1_40) {
		var_1_108 = var_1_89;
	} else {
		var_1_108 = var_1_37;
	}


	// From: Req47Batch166Amount500
	var_1_107 = last_1_var_1_115;


	// From: Req39Batch166Amount500
	if (last_1_var_1_113 > (~ (var_1_30 + last_1_var_1_109))) {
		if (last_1_var_1_51 == last_1_var_1_75) {
			var_1_96 = ((abs (-8)) + last_1_var_1_105);
		} else {
			var_1_96 = (((min (var_1_35 , var_1_60)) + 64) - (abs (var_1_14)));
		}
	} else {
		if ((last_1_var_1_109 | var_1_30) > var_1_65) {
			var_1_96 = (((var_1_98 - last_1_var_1_96) - var_1_54) - last_1_var_1_113);
		}
	}


	// From: Req26Batch166Amount500
	signed long int stepLocal_13 = max (last_1_var_1_74 , (4 + last_1_var_1_115));
	unsigned char stepLocal_12 = last_1_var_1_66 >= last_1_var_1_106;
	if ((last_1_var_1_43 < var_1_64) && stepLocal_12) {
		if (stepLocal_13 <= var_1_55) {
			var_1_72 = (! var_1_41);
		} else {
			var_1_72 = var_1_42;
		}
	} else {
		if ((- (24.6f / var_1_73)) > var_1_8) {
			var_1_72 = ((var_1_30 >= 256u) || var_1_41);
		} else {
			var_1_72 = (((max (var_1_13 , last_1_var_1_99)) < last_1_var_1_22) && var_1_5);
		}
	}


	// From: Req45Batch166Amount500
	if (var_1_72) {
		var_1_105 = var_1_15;
	} else {
		var_1_105 = 64;
	}


	// From: Req4Batch166Amount500
	unsigned char stepLocal_2 = var_1_72;
	if (stepLocal_2 || var_1_20) {
		var_1_22 = ((var_1_23 - var_1_15) - var_1_16);
	} else {
		var_1_22 = var_1_15;
	}


	// From: Req7Batch166Amount500
	var_1_34 = (abs (var_1_35));


	// From: Req8Batch166Amount500
	if ((- var_1_8) != var_1_32) {
		var_1_36 = ((1.375f - var_1_37) + var_1_38);
	} else {
		var_1_36 = var_1_37;
	}


	// From: Req9Batch166Amount500
	var_1_39 = (max (var_1_12 , var_1_16));


	// From: Req11Batch166Amount500
	var_1_43 = (min (var_1_23 , (var_1_44 - (min (var_1_30 , var_1_33)))));


	// From: Req12Batch166Amount500
	signed char stepLocal_6 = var_1_15;
	if (stepLocal_6 >= var_1_29) {
		if (var_1_21) {
			var_1_45 = (var_1_19 || (var_1_20 || (last_1_var_1_45 && var_1_42)));
		} else {
			var_1_45 = (var_1_41 && var_1_20);
		}
	}


	// From: Req16Batch166Amount500
	var_1_51 = (var_1_16 - (var_1_52 - (var_1_15 + var_1_35)));


	// From: Req23Batch166Amount500
	if (! var_1_21) {
		var_1_67 = ((max (var_1_55 , var_1_54)) - var_1_23);
	} else {
		if (var_1_51 >= 10) {
			var_1_67 = (max (var_1_15 , (var_1_55 - var_1_57)));
		} else {
			var_1_67 = (var_1_15 + (var_1_60 - var_1_16));
		}
	}


	// From: Req24Batch166Amount500
	if (var_1_9 != var_1_18) {
		var_1_68 = (var_1_23 + var_1_55);
	}


	// From: Req31Batch166Amount500
	if (4u <= var_1_39) {
		var_1_80 = (61029 - ((max (var_1_55 , last_1_var_1_80)) + var_1_39));
	}


	// From: Req37Batch166Amount500
	signed long int stepLocal_22 = var_1_60 + var_1_56;
	if (last_1_var_1_94 >= stepLocal_22) {
		var_1_94 = (var_1_96 + (max (last_1_var_1_94 , var_1_71)));
	} else {
		var_1_94 = (abs (var_1_48));
	}


	// From: Req41Batch166Amount500
	unsigned long int stepLocal_23 = var_1_64;
	if (stepLocal_23 > 100u) {
		var_1_100 = (max ((var_1_57 + 10) , var_1_13));
	} else {
		if (! var_1_42) {
			var_1_100 = var_1_14;
		}
	}


	// From: Req42Batch166Amount500
	if (var_1_42) {
		var_1_101 = var_1_19;
	}


	// From: Req43Batch166Amount500
	if (var_1_72) {
		var_1_102 = var_1_48;
	} else {
		var_1_102 = var_1_78;
	}


	// From: Req44Batch166Amount500
	var_1_103 = var_1_104;


	// From: Req49Batch166Amount500
	var_1_109 = var_1_60;


	// From: Req52Batch166Amount500
	var_1_112 = var_1_35;


	// From: Req54Batch166Amount500
	if (var_1_41) {
		var_1_114 = var_1_98;
	}


	// From: Req56Batch166Amount500
	var_1_117 = var_1_55;


	// From: Req46Batch166Amount500
	if (var_1_19) {
		var_1_106 = var_1_96;
	} else {
		var_1_106 = var_1_47;
	}


	// From: Req20Batch166Amount500
	signed long int stepLocal_7 = (var_1_106 / -256) / var_1_27;
	if (-1000000000 >= stepLocal_7) {
		var_1_61 = (min (var_1_57 , (max ((min (var_1_60 , var_1_56)) , var_1_15))));
	}


	// From: Req36Batch166Amount500
	if (((var_1_30 + var_1_93) - var_1_63) >= (min ((var_1_15 << var_1_65) , var_1_107))) {
		var_1_92 = (! ((8 <= var_1_12) && var_1_5));
	} else {
		var_1_92 = ((var_1_105 <= var_1_29) || (! var_1_19));
	}


	// From: Req50Batch166Amount500
	if (var_1_72) {
		var_1_110 = var_1_57;
	} else {
		var_1_110 = var_1_107;
	}


	// From: Req51Batch166Amount500
	if (var_1_92) {
		var_1_111 = var_1_16;
	} else {
		var_1_111 = var_1_50;
	}


	// From: Req40Batch166Amount500
	if (! var_1_92) {
		var_1_99 = (max (var_1_51 , var_1_114));
	}


	// From: Req5Batch166Amount500
	signed long int stepLocal_4 = (var_1_12 / var_1_23) / var_1_27;
	unsigned long int stepLocal_3 = var_1_110 % var_1_23;
	if (stepLocal_3 <= ((var_1_26 - 32u) + var_1_15)) {
		if (stepLocal_4 < var_1_96) {
			var_1_24 = (((var_1_28 + var_1_29) + (var_1_30 - var_1_16)) - var_1_15);
		}
	} else {
		var_1_24 = (var_1_29 + (max (var_1_16 , var_1_30)));
	}


	// From: Req28Batch166Amount500
	if ((var_1_109 / (var_1_29 + var_1_30)) > var_1_24) {
		var_1_75 = (var_1_44 - var_1_50);
	} else {
		var_1_75 = (max (var_1_68 , var_1_35));
	}


	// From: Req53Batch166Amount500
	if (var_1_101) {
		var_1_113 = var_1_111;
	} else {
		var_1_113 = 8u;
	}


	// From: Req21Batch166Amount500
	signed char stepLocal_10 = var_1_48;
	unsigned long int stepLocal_9 = (abs (var_1_44)) - var_1_60;
	unsigned long int stepLocal_8 = var_1_64 - var_1_50;
	if (stepLocal_10 < ((~ last_1_var_1_62) ^ var_1_43)) {
		var_1_62 = (min (var_1_63 , (var_1_16 + var_1_113)));
	} else {
		if (! var_1_42) {
			var_1_62 = (256 + var_1_56);
		} else {
			if (var_1_29 > stepLocal_8) {
				if ((- var_1_107) >= stepLocal_9) {
					var_1_62 = (var_1_57 + var_1_60);
				} else {
					var_1_62 = ((var_1_52 + var_1_65) - var_1_57);
				}
			}
		}
	}


	// From: Req27Batch166Amount500
	if (var_1_48 > var_1_99) {
		var_1_74 = var_1_62;
	} else {
		var_1_74 = (max (var_1_50 , var_1_63));
	}


	// From: Req13Batch166Amount500
	if (((var_1_23 + var_1_35) << var_1_111) < var_1_43) {
		if (var_1_11 < (var_1_12 & var_1_74)) {
			var_1_46 = (((var_1_16 + var_1_35) + var_1_74) - var_1_15);
		} else {
			if ((var_1_43 / (max (var_1_23 , var_1_27))) == (var_1_28 ^ var_1_16)) {
				var_1_46 = (abs (abs (var_1_13)));
			} else {
				var_1_46 = 256;
			}
		}
	}


	// From: Req15Batch166Amount500
	if ((var_1_16 - (var_1_50 - var_1_48)) < var_1_46) {
		var_1_49 = (max (var_1_35 , var_1_23));
	}


	// From: Req22Batch166Amount500
	unsigned char stepLocal_11 = ! var_1_19;
	if (stepLocal_11 && (var_1_30 < var_1_15)) {
		var_1_66 = (var_1_30 + var_1_49);
	} else {
		if (var_1_72) {
			var_1_66 = ((min (var_1_44 , 4142430810u)) - 128u);
		}
	}


	// From: Req6Batch166Amount500
	unsigned long int stepLocal_5 = var_1_28 * var_1_24;
	if (var_1_101) {
		if (! (var_1_108 > var_1_7)) {
			if (var_1_108 <= var_1_7) {
				var_1_31 = var_1_32;
			}
		}
	} else {
		if (var_1_21) {
			if (((var_1_33 - var_1_16) * var_1_113) < stepLocal_5) {
				var_1_31 = var_1_32;
			}
		}
	}


	// From: Req25Batch166Amount500
	if (var_1_31 > 2.5f) {
		var_1_69 = ((abs (var_1_16)) + (var_1_57 + var_1_71));
	} else {
		var_1_69 = (max ((max ((min (var_1_11 , var_1_14)) , var_1_23)) , (max ((min (var_1_15 , 64)) , var_1_16))));
	}


	// From: Req32Batch166Amount500
	signed char stepLocal_18 = var_1_14;
	signed long int stepLocal_17 = var_1_74;
	if (-128 < stepLocal_17) {
		var_1_81 = (min (128 , var_1_60));
	} else {
		if (stepLocal_18 == (var_1_114 * var_1_105)) {
			var_1_81 = (var_1_52 + var_1_56);
		} else {
			var_1_81 = (var_1_82 - (128 + 32));
		}
	}


	// From: Req33Batch166Amount500
	unsigned long int stepLocal_19 = 16u;
	if (((var_1_106 + var_1_110) & var_1_113) > stepLocal_19) {
		var_1_83 = (max (-5 , (min (var_1_48 , var_1_57))));
	}


	// From: Req34Batch166Amount500
	unsigned char stepLocal_21 = (~ var_1_80) > var_1_15;
	unsigned long int stepLocal_20 = var_1_27 | (min (var_1_107 , var_1_49));
	if (stepLocal_21 || (var_1_63 >= var_1_33)) {
		if (stepLocal_20 >= var_1_33) {
			var_1_84 = ((var_1_87 + var_1_37) - (min ((var_1_88 - var_1_89) , var_1_90)));
		} else {
			var_1_84 = (min (var_1_90 , (abs (var_1_87))));
		}
	} else {
		var_1_84 = (((abs (var_1_37)) - var_1_89) + var_1_87);
	}


	// From: Req38Batch166Amount500
	if (var_1_51 <= (- var_1_61)) {
		if (var_1_41) {
			var_1_95 = ((min (var_1_89 , var_1_88)) - (16.75 + var_1_87));
		}
	} else {
		if (var_1_62 > 0) {
			if (var_1_92) {
				var_1_95 = (var_1_87 + var_1_89);
			}
		} else {
			if (var_1_40) {
				if (var_1_42 || (var_1_44 <= (var_1_109 / var_1_26))) {
					var_1_95 = ((var_1_89 - var_1_37) + var_1_87);
				} else {
					var_1_95 = (min ((var_1_87 - var_1_37) , var_1_88));
				}
			} else {
				if (var_1_92) {
					var_1_95 = var_1_87;
				}
			}
		}
	}


	// From: Req3Batch166Amount500
	signed short int stepLocal_1 = var_1_96;
	if (((max (var_1_95 , var_1_7)) * var_1_8) <= ((var_1_58 / 32.8) / -0.4)) {
		var_1_17 = 1;
	} else {
		if (stepLocal_1 < 5) {
			var_1_17 = (((9.4 > var_1_58) && var_1_5) || ((var_1_19 || var_1_20) || var_1_21));
		} else {
			var_1_17 = var_1_21;
		}
	}


	// From: Req29Batch166Amount500
	unsigned char stepLocal_15 = var_1_17;
	signed long int stepLocal_14 = max (var_1_57 , (var_1_62 + var_1_94));
	if (stepLocal_15 || var_1_41) {
		if (stepLocal_14 == var_1_23) {
			var_1_77 = (var_1_13 + ((max (var_1_57 , var_1_78)) + (min (10 , var_1_71))));
		} else {
			var_1_77 = ((var_1_23 - (var_1_56 - var_1_57)) - (max (var_1_48 , var_1_15)));
		}
	} else {
		var_1_77 = var_1_48;
	}


	// From: Req30Batch166Amount500
	unsigned long int stepLocal_16 = var_1_75 * var_1_107;
	if (stepLocal_16 > ((var_1_35 / var_1_55) + var_1_81)) {
		var_1_79 = var_1_56;
	}


	// From: Req55Batch166Amount500
	if (var_1_17) {
		var_1_115 = var_1_27;
	} else {
		var_1_115 = ((max (var_1_60 , (var_1_116 - var_1_33))) - (min (5 , (max (var_1_54 , var_1_96)))));
	}


	// From: Req1Batch166Amount500
	if (var_1_115 <= (max (var_1_24 , var_1_109))) {
		var_1_1 = var_1_5;
	} else {
		if (var_1_5 && last_1_var_1_1) {
			if (var_1_115 >= var_1_24) {
				var_1_1 = (((var_1_7 - var_1_8) < var_1_108) && var_1_5);
			} else {
				var_1_1 = var_1_5;
			}
		}
	}


	// From: Req2Batch166Amount500
	unsigned long int stepLocal_0 = ~ var_1_109;
	if (var_1_75 <= stepLocal_0) {
		var_1_10 = (max (var_1_11 , var_1_12));
	} else {
		if (var_1_1) {
			var_1_10 = (min (var_1_12 , ((min (var_1_13 , var_1_14)) + (var_1_15 - var_1_16))));
		} else {
			var_1_10 = (abs (var_1_14));
		}
	}


	// From: Req17Batch166Amount500
	if (var_1_21) {
		var_1_53 = (min (var_1_35 , (min ((var_1_54 - var_1_48) , (var_1_55 - var_1_23)))));
	} else {
		if (! (var_1_108 > (256.48 * var_1_58))) {
			if ((var_1_24 / -8) < (- var_1_33)) {
				if (var_1_20 && var_1_1) {
					var_1_53 = (128 - var_1_23);
				}
			} else {
				var_1_53 = (var_1_48 + (min (var_1_15 , var_1_16)));
			}
		} else {
			var_1_53 = (var_1_48 + (var_1_15 + (var_1_56 - var_1_57)));
		}
	}


	// From: Req19Batch166Amount500
	if (var_1_84 >= 2.4f) {
		if (var_1_1) {
			var_1_59 = ((var_1_48 + var_1_60) - (min (var_1_56 , var_1_15)));
		} else {
			var_1_59 = (var_1_55 - 16);
		}
	} else {
		var_1_59 = (var_1_54 - var_1_16);
	}


	// From: Req35Batch166Amount500
	if (var_1_87 > var_1_36) {
		var_1_91 = ((var_1_60 + var_1_59) - var_1_52);
	} else {
		var_1_91 = (var_1_59 - var_1_15);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 0);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 62);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 2147483647);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 536870911);
	assume_abort_if_not(var_1_28 <= 1073741824);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 536870912);
	assume_abort_if_not(var_1_29 <= 1073741823);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 1610612735);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65535);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 2147483647);
	assume_abort_if_not(var_1_44 <= 4294967294);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 63);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 16383);
	assume_abort_if_not(var_1_50 <= 32767);
	var_1_52 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_52 >= 16383);
	assume_abort_if_not(var_1_52 <= 32766);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 31);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 31);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 64);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 65534);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 2147483647);
	assume_abort_if_not(var_1_64 <= 4294967295);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 16384);
	assume_abort_if_not(var_1_65 <= 32767);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -31);
	assume_abort_if_not(var_1_71 <= 31);
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -922337.2036854776000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854776000e+12F && var_1_73 >= 1.0e-20F ));
	assume_abort_if_not(var_1_73 != 0.0F);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -31);
	assume_abort_if_not(var_1_78 <= 32);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 32767);
	assume_abort_if_not(var_1_82 <= 65534);
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427383000e+12F && var_1_87 >= 1.0e-20F ));
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 4611686.018427383000e+12F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427383000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 9223372.036854766000e+12F && var_1_90 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 1073741824);
	assume_abort_if_not(var_1_93 <= 2147483647);
	var_1_98 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_98 >= 24574);
	assume_abort_if_not(var_1_98 <= 32766);
	var_1_104 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_104 >= -127);
	assume_abort_if_not(var_1_104 <= 126);
	var_1_116 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_116 >= 1073741822);
	assume_abort_if_not(var_1_116 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_115 = var_1_115;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_115 <= (max (var_1_24 , var_1_109))) ? (var_1_1 == ((unsigned char) var_1_5)) : ((var_1_5 && last_1_var_1_1) ? ((var_1_115 >= var_1_24) ? (var_1_1 == ((unsigned char) (((var_1_7 - var_1_8) < var_1_108) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_5))) : 1)) && ((var_1_75 <= (~ var_1_109)) ? (var_1_10 == ((signed char) (max (var_1_11 , var_1_12)))) : (var_1_1 ? (var_1_10 == ((signed char) (min (var_1_12 , ((min (var_1_13 , var_1_14)) + (var_1_15 - var_1_16)))))) : (var_1_10 == ((signed char) (abs (var_1_14))))))) && ((((max (var_1_95 , var_1_7)) * var_1_8) <= ((var_1_58 / 32.8) / -0.4)) ? (var_1_17 == ((unsigned char) 1)) : ((var_1_96 < 5) ? (var_1_17 == ((unsigned char) (((9.4 > var_1_58) && var_1_5) || ((var_1_19 || var_1_20) || var_1_21)))) : (var_1_17 == ((unsigned char) var_1_21))))) && ((var_1_72 || var_1_20) ? (var_1_22 == ((signed char) ((var_1_23 - var_1_15) - var_1_16))) : (var_1_22 == ((signed char) var_1_15)))) && (((var_1_110 % var_1_23) <= ((var_1_26 - 32u) + var_1_15)) ? ((((var_1_12 / var_1_23) / var_1_27) < var_1_96) ? (var_1_24 == ((unsigned long int) (((var_1_28 + var_1_29) + (var_1_30 - var_1_16)) - var_1_15))) : 1) : (var_1_24 == ((unsigned long int) (var_1_29 + (max (var_1_16 , var_1_30))))))) && (var_1_101 ? ((! (var_1_108 > var_1_7)) ? ((var_1_108 <= var_1_7) ? (var_1_31 == ((float) var_1_32)) : 1) : 1) : (var_1_21 ? ((((var_1_33 - var_1_16) * var_1_113) < (var_1_28 * var_1_24)) ? (var_1_31 == ((float) var_1_32)) : 1) : 1))) && (var_1_34 == ((unsigned char) (abs (var_1_35))))) && (((- var_1_8) != var_1_32) ? (var_1_36 == ((float) ((1.375f - var_1_37) + var_1_38))) : (var_1_36 == ((float) var_1_37)))) && (var_1_39 == ((signed short int) (max (var_1_12 , var_1_16))))) && ((last_1_var_1_110 > 5u) ? ((((- var_1_27) << 1u) > last_1_var_1_10) ? ((var_1_30 >= var_1_29) ? (var_1_40 == ((unsigned char) (var_1_21 || var_1_41))) : (var_1_40 == ((unsigned char) (! var_1_20)))) : 1) : (var_1_40 == ((unsigned char) (((var_1_35 - last_1_var_1_107) < var_1_27) && var_1_42))))) && (var_1_43 == ((unsigned long int) (min (var_1_23 , (var_1_44 - (min (var_1_30 , var_1_33)))))))) && ((var_1_15 >= var_1_29) ? (var_1_21 ? (var_1_45 == ((unsigned char) (var_1_19 || (var_1_20 || (last_1_var_1_45 && var_1_42))))) : (var_1_45 == ((unsigned char) (var_1_41 && var_1_20)))) : 1)) && ((((var_1_23 + var_1_35) << var_1_111) < var_1_43) ? ((var_1_11 < (var_1_12 & var_1_74)) ? (var_1_46 == ((signed short int) (((var_1_16 + var_1_35) + var_1_74) - var_1_15))) : (((var_1_43 / (max (var_1_23 , var_1_27))) == (var_1_28 ^ var_1_16)) ? (var_1_46 == ((signed short int) (abs (abs (var_1_13))))) : (var_1_46 == ((signed short int) 256)))) : 1)) && ((var_1_58 != var_1_8) ? (var_1_47 == ((signed char) (var_1_15 - (var_1_48 - var_1_16)))) : (var_1_47 == ((signed char) (var_1_23 - 16))))) && (((var_1_16 - (var_1_50 - var_1_48)) < var_1_46) ? (var_1_49 == ((unsigned short int) (max (var_1_35 , var_1_23)))) : 1)) && (var_1_51 == ((signed short int) (var_1_16 - (var_1_52 - (var_1_15 + var_1_35)))))) && (var_1_21 ? (var_1_53 == ((unsigned char) (min (var_1_35 , (min ((var_1_54 - var_1_48) , (var_1_55 - var_1_23))))))) : ((! (var_1_108 > (256.48 * var_1_58))) ? (((var_1_24 / -8) < (- var_1_33)) ? ((var_1_20 && var_1_1) ? (var_1_53 == ((unsigned char) (128 - var_1_23))) : 1) : (var_1_53 == ((unsigned char) (var_1_48 + (min (var_1_15 , var_1_16)))))) : (var_1_53 == ((unsigned char) (var_1_48 + (var_1_15 + (var_1_56 - var_1_57)))))))) && ((last_1_var_1_95 > var_1_38) ? (var_1_58 == ((double) ((var_1_37 - 127.75) + var_1_38))) : (var_1_58 == ((double) (max (var_1_32 , 7.9)))))) && ((var_1_84 >= 2.4f) ? (var_1_1 ? (var_1_59 == ((unsigned char) ((var_1_48 + var_1_60) - (min (var_1_56 , var_1_15))))) : (var_1_59 == ((unsigned char) (var_1_55 - 16)))) : (var_1_59 == ((unsigned char) (var_1_54 - var_1_16))))) && ((-1000000000 >= ((var_1_106 / -256) / var_1_27)) ? (var_1_61 == ((unsigned char) (min (var_1_57 , (max ((min (var_1_60 , var_1_56)) , var_1_15)))))) : 1)) && ((var_1_48 < ((~ last_1_var_1_62) ^ var_1_43)) ? (var_1_62 == ((unsigned short int) (min (var_1_63 , (var_1_16 + var_1_113))))) : ((! var_1_42) ? (var_1_62 == ((unsigned short int) (256 + var_1_56))) : ((var_1_29 > (var_1_64 - var_1_50)) ? (((- var_1_107) >= ((abs (var_1_44)) - var_1_60)) ? (var_1_62 == ((unsigned short int) (var_1_57 + var_1_60))) : (var_1_62 == ((unsigned short int) ((var_1_52 + var_1_65) - var_1_57)))) : 1)))) && (((! var_1_19) && (var_1_30 < var_1_15)) ? (var_1_66 == ((unsigned long int) (var_1_30 + var_1_49))) : (var_1_72 ? (var_1_66 == ((unsigned long int) ((min (var_1_44 , 4142430810u)) - 128u))) : 1))) && ((! var_1_21) ? (var_1_67 == ((unsigned char) ((max (var_1_55 , var_1_54)) - var_1_23))) : ((var_1_51 >= 10) ? (var_1_67 == ((unsigned char) (max (var_1_15 , (var_1_55 - var_1_57))))) : (var_1_67 == ((unsigned char) (var_1_15 + (var_1_60 - var_1_16))))))) && ((var_1_9 != var_1_18) ? (var_1_68 == ((signed short int) (var_1_23 + var_1_55))) : 1)) && ((var_1_31 > 2.5f) ? (var_1_69 == ((signed char) ((abs (var_1_16)) + (var_1_57 + var_1_71)))) : (var_1_69 == ((signed char) (max ((max ((min (var_1_11 , var_1_14)) , var_1_23)) , (max ((min (var_1_15 , 64)) , var_1_16)))))))) && (((last_1_var_1_43 < var_1_64) && (last_1_var_1_66 >= last_1_var_1_106)) ? (((max (last_1_var_1_74 , (4 + last_1_var_1_115))) <= var_1_55) ? (var_1_72 == ((unsigned char) (! var_1_41))) : (var_1_72 == ((unsigned char) var_1_42))) : (((- (24.6f / var_1_73)) > var_1_8) ? (var_1_72 == ((unsigned char) ((var_1_30 >= 256u) || var_1_41))) : (var_1_72 == ((unsigned char) (((max (var_1_13 , last_1_var_1_99)) < last_1_var_1_22) && var_1_5)))))) && ((var_1_48 > var_1_99) ? (var_1_74 == ((signed long int) var_1_62)) : (var_1_74 == ((signed long int) (max (var_1_50 , var_1_63)))))) && (((var_1_109 / (var_1_29 + var_1_30)) > var_1_24) ? (var_1_75 == ((unsigned long int) (var_1_44 - var_1_50))) : (var_1_75 == ((unsigned long int) (max (var_1_68 , var_1_35)))))) && ((var_1_17 || var_1_41) ? (((max (var_1_57 , (var_1_62 + var_1_94))) == var_1_23) ? (var_1_77 == ((signed char) (var_1_13 + ((max (var_1_57 , var_1_78)) + (min (10 , var_1_71)))))) : (var_1_77 == ((signed char) ((var_1_23 - (var_1_56 - var_1_57)) - (max (var_1_48 , var_1_15)))))) : (var_1_77 == ((signed char) var_1_48)))) && (((var_1_75 * var_1_107) > ((var_1_35 / var_1_55) + var_1_81)) ? (var_1_79 == ((unsigned char) var_1_56)) : 1)) && ((4u <= var_1_39) ? (var_1_80 == ((unsigned short int) (61029 - ((max (var_1_55 , last_1_var_1_80)) + var_1_39)))) : 1)) && ((-128 < var_1_74) ? (var_1_81 == ((unsigned short int) (min (128 , var_1_60)))) : ((var_1_14 == (var_1_114 * var_1_105)) ? (var_1_81 == ((unsigned short int) (var_1_52 + var_1_56))) : (var_1_81 == ((unsigned short int) (var_1_82 - (128 + 32))))))) && ((((var_1_106 + var_1_110) & var_1_113) > 16u) ? (var_1_83 == ((signed char) (max (-5 , (min (var_1_48 , var_1_57)))))) : 1)) && ((((~ var_1_80) > var_1_15) || (var_1_63 >= var_1_33)) ? (((var_1_27 | (min (var_1_107 , var_1_49))) >= var_1_33) ? (var_1_84 == ((float) ((var_1_87 + var_1_37) - (min ((var_1_88 - var_1_89) , var_1_90))))) : (var_1_84 == ((float) (min (var_1_90 , (abs (var_1_87))))))) : (var_1_84 == ((float) (((abs (var_1_37)) - var_1_89) + var_1_87))))) && ((var_1_87 > var_1_36) ? (var_1_91 == ((signed short int) ((var_1_60 + var_1_59) - var_1_52))) : (var_1_91 == ((signed short int) (var_1_59 - var_1_15))))) && ((((var_1_30 + var_1_93) - var_1_63) >= (min ((var_1_15 << var_1_65) , var_1_107))) ? (var_1_92 == ((unsigned char) (! ((8 <= var_1_12) && var_1_5)))) : (var_1_92 == ((unsigned char) ((var_1_105 <= var_1_29) || (! var_1_19)))))) && ((last_1_var_1_94 >= (var_1_60 + var_1_56)) ? (var_1_94 == ((signed long int) (var_1_96 + (max (last_1_var_1_94 , var_1_71))))) : (var_1_94 == ((signed long int) (abs (var_1_48)))))) && ((var_1_51 <= (- var_1_61)) ? (var_1_41 ? (var_1_95 == ((double) ((min (var_1_89 , var_1_88)) - (16.75 + var_1_87)))) : 1) : ((var_1_62 > 0) ? (var_1_92 ? (var_1_95 == ((double) (var_1_87 + var_1_89))) : 1) : (var_1_40 ? ((var_1_42 || (var_1_44 <= (var_1_109 / var_1_26))) ? (var_1_95 == ((double) ((var_1_89 - var_1_37) + var_1_87))) : (var_1_95 == ((double) (min ((var_1_87 - var_1_37) , var_1_88))))) : (var_1_92 ? (var_1_95 == ((double) var_1_87)) : 1))))) && ((last_1_var_1_113 > (~ (var_1_30 + last_1_var_1_109))) ? ((last_1_var_1_51 == last_1_var_1_75) ? (var_1_96 == ((signed short int) ((abs (-8)) + last_1_var_1_105))) : (var_1_96 == ((signed short int) (((min (var_1_35 , var_1_60)) + 64) - (abs (var_1_14)))))) : (((last_1_var_1_109 | var_1_30) > var_1_65) ? (var_1_96 == ((signed short int) (((var_1_98 - last_1_var_1_96) - var_1_54) - last_1_var_1_113))) : 1))) && ((! var_1_92) ? (var_1_99 == ((signed long int) (max (var_1_51 , var_1_114)))) : 1)) && ((var_1_64 > 100u) ? (var_1_100 == ((signed char) (max ((var_1_57 + 10) , var_1_13)))) : ((! var_1_42) ? (var_1_100 == ((signed char) var_1_14)) : 1))) && (var_1_42 ? (var_1_101 == ((unsigned char) var_1_19)) : 1)) && (var_1_72 ? (var_1_102 == ((signed char) var_1_48)) : (var_1_102 == ((signed char) var_1_78)))) && (var_1_103 == ((signed char) var_1_104))) && (var_1_72 ? (var_1_105 == ((signed short int) var_1_15)) : (var_1_105 == ((signed short int) 64)))) && (var_1_19 ? (var_1_106 == ((signed short int) var_1_96)) : (var_1_106 == ((signed short int) var_1_47)))) && (var_1_107 == ((unsigned long int) last_1_var_1_115))) && (var_1_40 ? (var_1_108 == ((double) var_1_89)) : (var_1_108 == ((double) var_1_37)))) && (var_1_109 == ((unsigned long int) var_1_60))) && (var_1_72 ? (var_1_110 == ((unsigned long int) var_1_57)) : (var_1_110 == ((unsigned long int) var_1_107)))) && (var_1_92 ? (var_1_111 == ((unsigned short int) var_1_16)) : (var_1_111 == ((unsigned short int) var_1_50)))) && (var_1_112 == ((signed long int) var_1_35))) && (var_1_101 ? (var_1_113 == ((unsigned long int) var_1_111)) : (var_1_113 == ((unsigned long int) 8u)))) && (var_1_41 ? (var_1_114 == ((unsigned long int) var_1_98)) : 1)) && (var_1_17 ? (var_1_115 == ((signed long int) var_1_27)) : (var_1_115 == ((signed long int) ((max (var_1_60 , (var_1_116 - var_1_33))) - (min (5 , (max (var_1_54 , var_1_96))))))))) && (var_1_117 == ((unsigned char) var_1_55))
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
