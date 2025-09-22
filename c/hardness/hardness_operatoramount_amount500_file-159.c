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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 10.25;
double var_1_3 = 256.9;
double var_1_4 = 0.75;
double var_1_5 = 9.8;
double var_1_6 = 1.5;
double var_1_7 = 16.1;
unsigned short int var_1_8 = 0;
signed long int var_1_12 = -1;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 57031;
unsigned short int var_1_15 = 51286;
unsigned short int var_1_16 = 32;
signed long int var_1_17 = -16;
double var_1_18 = 16.25;
unsigned short int var_1_19 = 44274;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 4;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 128;
unsigned long int var_1_24 = 1;
unsigned long int var_1_25 = 1408292917;
float var_1_26 = 127.5;
float var_1_27 = 0.0;
unsigned short int var_1_28 = 2;
signed char var_1_29 = 64;
signed char var_1_30 = -2;
signed char var_1_31 = -16;
signed long int var_1_32 = 64;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 5;
unsigned char var_1_38 = 50;
unsigned char var_1_39 = 100;
unsigned char var_1_40 = 32;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 4;
double var_1_44 = 1.125;
double var_1_45 = 16.5;
double var_1_46 = 1.625;
double var_1_47 = 127.5;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
float var_1_51 = 64.45;
unsigned long int var_1_52 = 256;
signed char var_1_53 = 10;
unsigned long int var_1_54 = 3553486296;
unsigned short int var_1_55 = 32;
float var_1_56 = 256.75;
unsigned char var_1_59 = 25;
unsigned short int var_1_60 = 100;
unsigned short int var_1_62 = 53564;
unsigned short int var_1_63 = 22210;
unsigned char var_1_64 = 200;
unsigned char var_1_65 = 32;
unsigned char var_1_66 = 200;
double var_1_67 = 31.2;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 1;
signed short int var_1_70 = 0;
unsigned short int var_1_71 = 5;
unsigned short int var_1_72 = 0;
unsigned short int var_1_73 = 27248;
unsigned short int var_1_74 = 31478;
signed short int var_1_75 = -200;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 0;
float var_1_80 = 10000000000000.6;
float var_1_81 = 255.625;
float var_1_82 = 1000000000000.4;
float var_1_83 = 255.75;
float var_1_84 = 63.9;
unsigned char var_1_85 = 64;
float var_1_86 = 200.15;
float var_1_87 = 100.9;
float var_1_89 = 0.0;
float var_1_90 = 16.6;
unsigned short int var_1_91 = 2;
unsigned short int var_1_92 = 0;
unsigned char var_1_93 = 1;
unsigned char var_1_97 = 64;
unsigned char var_1_98 = 1;
signed short int var_1_99 = -8;
signed short int var_1_100 = 500;
signed long int var_1_101 = 50;
double var_1_102 = 16.8;
signed long int var_1_103 = -1;
signed long int var_1_104 = -16;
signed long int var_1_105 = 1000000000;
signed long int var_1_106 = 1000000000;
signed short int var_1_107 = -256;
signed long int var_1_109 = 10;
float var_1_111 = 32.75;
float var_1_112 = 500.7;
unsigned short int var_1_113 = 64;
signed long int var_1_114 = 1000000000;
float var_1_116 = 15.6;
signed long int var_1_117 = 256;
signed char var_1_118 = 50;
signed char var_1_119 = -8;
unsigned short int var_1_120 = 128;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 10.25;
double last_1_var_1_18 = 16.25;
float last_1_var_1_26 = 127.5;
signed long int last_1_var_1_32 = 64;
double last_1_var_1_46 = 1.625;
unsigned char last_1_var_1_48 = 1;
unsigned long int last_1_var_1_52 = 256;
unsigned short int last_1_var_1_55 = 32;
unsigned char last_1_var_1_68 = 1;
signed short int last_1_var_1_70 = 0;
unsigned short int last_1_var_1_71 = 5;
unsigned short int last_1_var_1_72 = 0;
unsigned char last_1_var_1_93 = 1;
unsigned char last_1_var_1_98 = 1;
signed short int last_1_var_1_99 = -8;
double last_1_var_1_102 = 16.8;
signed long int last_1_var_1_109 = 10;
unsigned short int last_1_var_1_113 = 64;
signed long int last_1_var_1_117 = 256;
unsigned short int last_1_var_1_120 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch159Amount500
	unsigned char stepLocal_21 = var_1_50;
	unsigned char stepLocal_20 = var_1_42;
	unsigned char stepLocal_19 = var_1_49;
	if (stepLocal_21 || (last_1_var_1_46 >= (last_1_var_1_18 / var_1_27))) {
		if ((var_1_27 * last_1_var_1_46) >= (- var_1_6)) {
			var_1_76 = ((! (var_1_69 && var_1_77)) || ((! var_1_78) || (var_1_49 && var_1_50)));
		} else {
			var_1_76 = (((4 > var_1_74) || last_1_var_1_93) || (last_1_var_1_68 || var_1_69));
		}
	} else {
		if (var_1_50) {
			if (stepLocal_20 <= last_1_var_1_70) {
				var_1_76 = (! (var_1_49 || var_1_79));
			} else {
				var_1_76 = (! var_1_79);
			}
		} else {
			if (last_1_var_1_93 || stepLocal_19) {
				var_1_76 = ((! var_1_79) && (! var_1_49));
			}
		}
	}


	// From: Req16Batch159Amount500
	signed long int stepLocal_8 = min (last_1_var_1_117 , var_1_53);
	signed char stepLocal_7 = var_1_30;
	if (stepLocal_7 == (var_1_53 - (min (var_1_40 , var_1_42)))) {
		var_1_52 = (var_1_19 + (min (last_1_var_1_72 , var_1_42)));
	} else {
		if (stepLocal_8 > var_1_21) {
			var_1_52 = (var_1_54 - var_1_14);
		} else {
			var_1_52 = (max (last_1_var_1_55 , var_1_41));
		}
	}


	// From: Req6Batch159Amount500
	if (((var_1_6 * var_1_7) + var_1_5) <= (last_1_var_1_46 * (- var_1_4))) {
		if (var_1_14 != var_1_19) {
			if (last_1_var_1_48) {
				var_1_24 = ((var_1_25 - var_1_23) + 64u);
			}
		} else {
			var_1_24 = (max ((var_1_21 + last_1_var_1_71) , (max ((abs (var_1_15)) , 2u))));
		}
	}


	// From: Req34Batch159Amount500
	if (last_1_var_1_52 <= (last_1_var_1_109 * var_1_73)) {
		if ((var_1_82 >= var_1_5) || last_1_var_1_68) {
			if (last_1_var_1_52 > last_1_var_1_120) {
				var_1_93 = ((var_1_19 != (last_1_var_1_32 * last_1_var_1_113)) && var_1_50);
			}
		}
	} else {
		var_1_93 = var_1_79;
	}


	// From: Req23Batch159Amount500
	if (var_1_67 < (- (last_1_var_1_1 + last_1_var_1_26))) {
		var_1_68 = var_1_49;
	} else {
		var_1_68 = ((last_1_var_1_93 && last_1_var_1_98) && (! var_1_69));
	}


	// From: Req7Batch159Amount500
	if (var_1_76) {
		var_1_26 = (8.75f - (var_1_27 - var_1_7));
	}


	// From: Req36Batch159Amount500
	if (last_1_var_1_46 >= (last_1_var_1_102 + (abs (var_1_83)))) {
		var_1_98 = (var_1_77 && var_1_69);
	}


	// From: Req1Batch159Amount500
	if (var_1_98) {
		var_1_1 = (min (var_1_3 , var_1_4));
	} else {
		var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
	}


	// From: Req4Batch159Amount500
	signed long int stepLocal_3 = var_1_19 - var_1_16;
	if (var_1_15 == stepLocal_3) {
		var_1_18 = (var_1_7 - (var_1_6 + 5.5));
	}


	// From: Req5Batch159Amount500
	unsigned short int stepLocal_4 = var_1_16;
	if (var_1_14 <= stepLocal_4) {
		var_1_20 = ((var_1_21 + (min (var_1_22 , var_1_23))) + var_1_16);
	}


	// From: Req9Batch159Amount500
	if (! var_1_68) {
		var_1_29 = (min (var_1_30 , var_1_31));
	}


	// From: Req12Batch159Amount500
	var_1_44 = (var_1_6 + (var_1_7 - var_1_45));


	// From: Req14Batch159Amount500
	var_1_48 = (var_1_49 || var_1_50);


	// From: Req18Batch159Amount500
	unsigned char stepLocal_11 = var_1_40;
	unsigned long int stepLocal_10 = var_1_24;
	if (stepLocal_11 > var_1_24) {
		if (stepLocal_10 <= var_1_13) {
			var_1_56 = (max ((var_1_45 - (var_1_7 + var_1_6)) , var_1_5));
		} else {
			var_1_56 = (abs (100.625f));
		}
	} else {
		var_1_56 = var_1_6;
	}


	// From: Req19Batch159Amount500
	if (var_1_50) {
		var_1_59 = var_1_43;
	}


	// From: Req21Batch159Amount500
	var_1_64 = var_1_37;


	// From: Req22Batch159Amount500
	unsigned char stepLocal_13 = var_1_68;
	if (var_1_6 <= var_1_47) {
		var_1_65 = (var_1_40 + (var_1_39 - var_1_42));
	} else {
		if (var_1_98 || stepLocal_13) {
			var_1_65 = ((var_1_66 - var_1_38) - (var_1_37 + 5));
		} else {
			if ((min (3.5f , var_1_3)) == (var_1_67 - var_1_7)) {
				var_1_65 = (var_1_66 - var_1_38);
			} else {
				var_1_65 = (min ((min (var_1_43 , (128 - var_1_40))) , var_1_66));
			}
		}
	}


	// From: Req32Batch159Amount500
	if (((var_1_41 - var_1_43) - var_1_40) != (var_1_15 * var_1_37)) {
		if (var_1_43 == (2 + (max (var_1_24 , var_1_52)))) {
			var_1_87 = (var_1_83 + ((var_1_89 - var_1_90) - var_1_6));
		}
	}


	// From: Req38Batch159Amount500
	var_1_101 = var_1_39;


	// From: Req42Batch159Amount500
	if (var_1_48) {
		var_1_109 = var_1_104;
	} else {
		var_1_109 = var_1_106;
	}


	// From: Req43Batch159Amount500
	if (var_1_50) {
		var_1_111 = var_1_83;
	} else {
		var_1_111 = var_1_89;
	}


	// From: Req44Batch159Amount500
	if (var_1_48) {
		var_1_112 = var_1_6;
	} else {
		var_1_112 = var_1_82;
	}


	// From: Req45Batch159Amount500
	var_1_113 = var_1_15;


	// From: Req46Batch159Amount500
	if (var_1_48) {
		var_1_114 = var_1_39;
	} else {
		var_1_114 = var_1_19;
	}


	// From: Req47Batch159Amount500
	if (var_1_98) {
		var_1_116 = 49.5f;
	} else {
		var_1_116 = var_1_4;
	}


	// From: Req48Batch159Amount500
	if (var_1_49) {
		var_1_117 = var_1_15;
	} else {
		var_1_117 = var_1_30;
	}


	// From: Req49Batch159Amount500
	var_1_118 = var_1_31;


	// From: Req10Batch159Amount500
	unsigned char stepLocal_5 = var_1_48;
	if (var_1_76 || stepLocal_5) {
		var_1_32 = ((min (-10000 , (var_1_13 - var_1_21))) + var_1_14);
	}


	// From: Req24Batch159Amount500
	unsigned char stepLocal_14 = var_1_24 <= (min (var_1_25 , var_1_52));
	if (stepLocal_14 && var_1_68) {
		var_1_70 = (min ((min (var_1_40 , var_1_39)) , var_1_101));
	}


	// From: Req11Batch159Amount500
	if (var_1_98) {
		var_1_34 = (var_1_35 + var_1_36);
	} else {
		if (! var_1_68) {
			var_1_34 = ((min ((var_1_37 + var_1_38) , (var_1_39 - var_1_40))) + (var_1_41 - (var_1_42 - var_1_43)));
		} else {
			var_1_34 = (max (var_1_42 , ((var_1_41 - 2) + var_1_40)));
		}
	}


	// From: Req51Batch159Amount500
	if (! (var_1_6 < (var_1_1 * var_1_27))) {
		if (var_1_105 > -10) {
			var_1_120 = 64;
		} else {
			var_1_120 = var_1_114;
		}
	}


	// From: Req40Batch159Amount500
	signed long int stepLocal_35 = var_1_19 - var_1_43;
	if ((var_1_6 - (min (var_1_67 , var_1_45))) >= (- var_1_1)) {
		if (var_1_74 > stepLocal_35) {
			var_1_103 = (max (((100 - var_1_73) + var_1_21) , var_1_15));
		} else {
			var_1_103 = (var_1_117 + var_1_104);
		}
	} else {
		var_1_103 = (var_1_15 - ((var_1_105 + var_1_106) - var_1_92));
	}


	// From: Req8Batch159Amount500
	if (var_1_12 <= (var_1_16 ^ var_1_109)) {
		if (var_1_5 == (- var_1_6)) {
			var_1_28 = (max ((var_1_15 - 128) , var_1_14));
		} else {
			var_1_28 = var_1_22;
		}
	} else {
		var_1_28 = var_1_13;
	}


	// From: Req15Batch159Amount500
	if ((var_1_21 <= var_1_43) && (var_1_36 != (- var_1_109))) {
		if (var_1_98 || ((-2 <= var_1_22) && (var_1_101 <= var_1_23))) {
			var_1_51 = var_1_6;
		}
	}


	// From: Req30Batch159Amount500
	signed long int stepLocal_26 = -128;
	unsigned char stepLocal_25 = var_1_68;
	signed long int stepLocal_24 = 16;
	if (stepLocal_25 && (var_1_23 != (61449 - var_1_21))) {
		if (stepLocal_24 < var_1_52) {
			if (stepLocal_26 <= (var_1_19 * (var_1_34 - var_1_41))) {
				var_1_85 = 1;
			} else {
				var_1_85 = var_1_41;
			}
		} else {
			var_1_85 = ((var_1_66 - 32) - (max (var_1_41 , var_1_38)));
		}
	}


	// From: Req2Batch159Amount500
	signed long int stepLocal_1 = var_1_32;
	signed long int stepLocal_0 = var_1_32;
	if (var_1_98) {
		if (stepLocal_1 < var_1_24) {
			if (stepLocal_0 > (var_1_12 - 50)) {
				if (var_1_76) {
					var_1_8 = var_1_13;
				}
			}
		} else {
			var_1_8 = (((min (var_1_14 , var_1_15)) - 8) - var_1_16);
		}
	} else {
		var_1_8 = (max (var_1_16 , (abs (var_1_14))));
	}


	// From: Req39Batch159Amount500
	signed long int stepLocal_34 = var_1_8 / var_1_15;
	if ((var_1_21 * var_1_24) < stepLocal_34) {
		var_1_102 = (var_1_27 - var_1_5);
	} else {
		var_1_102 = ((var_1_27 - var_1_90) - var_1_89);
	}


	// From: Req3Batch159Amount500
	unsigned char stepLocal_2 = var_1_5 <= var_1_102;
	if (var_1_48 && stepLocal_2) {
		var_1_17 = var_1_15;
	}


	// From: Req17Batch159Amount500
	unsigned long int stepLocal_9 = var_1_52;
	if (var_1_103 <= stepLocal_9) {
		var_1_55 = ((abs (last_1_var_1_55)) + var_1_43);
	} else {
		var_1_55 = (var_1_37 + (var_1_22 + (abs (var_1_35))));
	}


	// From: Req26Batch159Amount500
	unsigned short int stepLocal_18 = var_1_63;
	signed long int stepLocal_17 = var_1_40 ^ var_1_17;
	if (var_1_93) {
		var_1_72 = (((var_1_73 - var_1_66) + (var_1_74 - var_1_37)) - (var_1_63 - (var_1_38 + var_1_40)));
	} else {
		if (stepLocal_18 > (- var_1_42)) {
			if (stepLocal_17 != var_1_42) {
				var_1_72 = (var_1_16 + var_1_35);
			} else {
				var_1_72 = (max (var_1_62 , var_1_21));
			}
		} else {
			var_1_72 = (var_1_62 - 16);
		}
	}


	// From: Req27Batch159Amount500
	if (var_1_93) {
		var_1_75 = (var_1_120 + var_1_43);
	}


	// From: Req33Batch159Amount500
	signed long int stepLocal_31 = (var_1_120 ^ var_1_34) + (abs (var_1_30));
	signed long int stepLocal_30 = var_1_20 + 128;
	if (var_1_18 < (min (63.5f , 50.125f))) {
		if (var_1_73 <= stepLocal_30) {
			var_1_91 = (var_1_62 - var_1_22);
		} else {
			var_1_91 = var_1_43;
		}
	} else {
		if (var_1_120 == stepLocal_31) {
			var_1_91 = ((var_1_92 + var_1_42) + 4);
		}
	}


	// From: Req20Batch159Amount500
	signed long int stepLocal_12 = 200;
	if (stepLocal_12 >= var_1_37) {
		if (var_1_6 <= (var_1_111 + var_1_102)) {
			if (! var_1_68) {
				var_1_60 = ((abs (var_1_62)) - var_1_91);
			} else {
				var_1_60 = (var_1_38 + (min ((var_1_63 - var_1_117) , (27854 - var_1_22))));
			}
		}
	}


	// From: Req29Batch159Amount500
	unsigned char stepLocal_23 = var_1_48;
	unsigned long int stepLocal_22 = var_1_24;
	if (stepLocal_23 || var_1_93) {
		if (var_1_47 <= var_1_18) {
			var_1_80 = ((var_1_81 + var_1_82) + (var_1_6 - 9.9999999999995E12f));
		}
	} else {
		if (var_1_4 < 63.6) {
			var_1_80 = (min ((min (var_1_7 , (max (var_1_47 , var_1_81)))) , var_1_27));
		} else {
			if ((max ((max (var_1_31 , var_1_17)) , var_1_73)) > stepLocal_22) {
				var_1_80 = (var_1_83 + var_1_47);
			} else {
				var_1_80 = (min (((var_1_45 + var_1_7) - var_1_27) , (var_1_82 + (var_1_81 + var_1_84))));
			}
		}
	}


	// From: Req31Batch159Amount500
	signed long int stepLocal_29 = var_1_103;
	signed long int stepLocal_28 = var_1_15 - var_1_36;
	unsigned char stepLocal_27 = var_1_19 < var_1_24;
	if (var_1_103 >= stepLocal_28) {
		if (! ((var_1_12 / var_1_14) >= var_1_91)) {
			if (var_1_76 || stepLocal_27) {
				var_1_86 = (var_1_82 + (abs (var_1_7)));
			} else {
				if (var_1_35 > stepLocal_29) {
					var_1_86 = var_1_5;
				}
			}
		} else {
			var_1_86 = (5.6f + (var_1_81 + var_1_84));
		}
	} else {
		var_1_86 = (var_1_45 + (4.5f + var_1_81));
	}


	// From: Req37Batch159Amount500
	unsigned char stepLocal_33 = var_1_42;
	if (stepLocal_33 > var_1_16) {
		var_1_99 = (var_1_38 - (max ((max (last_1_var_1_99 , var_1_22)) , var_1_117)));
	} else {
		var_1_99 = (max (((var_1_40 - var_1_91) + (min (var_1_100 , var_1_41))) , (var_1_38 + var_1_31)));
	}


	// From: Req41Batch159Amount500
	signed long int stepLocal_36 = var_1_101;
	if (stepLocal_36 <= (var_1_19 * (var_1_39 - var_1_99))) {
		if (var_1_68) {
			var_1_107 = var_1_43;
		} else {
			var_1_107 = var_1_15;
		}
	} else {
		var_1_107 = var_1_66;
	}


	// From: Req50Batch159Amount500
	signed long int stepLocal_37 = var_1_23 + var_1_106;
	if (stepLocal_37 <= var_1_8) {
		var_1_119 = var_1_43;
	}


	// From: Req25Batch159Amount500
	signed long int stepLocal_16 = var_1_117;
	unsigned char stepLocal_15 = var_1_43 <= var_1_12;
	if (var_1_98 && stepLocal_15) {
		var_1_71 = (var_1_14 - (var_1_8 + (10000 - var_1_36)));
	} else {
		if (var_1_102 < (63.25 / var_1_27)) {
			if (var_1_39 < stepLocal_16) {
				var_1_71 = ((var_1_75 + var_1_39) + (min (var_1_66 , var_1_40)));
			} else {
				var_1_71 = ((var_1_63 - 1000) + (abs (var_1_35)));
			}
		} else {
			var_1_71 = (var_1_38 + var_1_103);
		}
	}


	// From: Req35Batch159Amount500
	signed short int stepLocal_32 = var_1_107;
	if (stepLocal_32 == (- var_1_72)) {
		var_1_97 = (abs (var_1_66 - var_1_42));
	}


	// From: Req13Batch159Amount500
	unsigned char stepLocal_6 = var_1_48;
	if ((min ((max (var_1_6 , var_1_3)) , (-0.5f / var_1_27))) <= var_1_45) {
		var_1_46 = (var_1_27 - 0.75);
	} else {
		if (64.3 > var_1_5) {
			var_1_46 = var_1_27;
		} else {
			if (((var_1_71 / var_1_15) <= var_1_91) && stepLocal_6) {
				if (var_1_44 <= (abs (var_1_18 / var_1_27))) {
					var_1_46 = (max ((min ((var_1_6 + var_1_7) , (var_1_45 + var_1_47))) , (min (var_1_4 , var_1_3))));
				}
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 49150);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 49150);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65535);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16384);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 4611686.018427383000e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 64);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 63);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 31);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 31);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -1);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 2147483647);
	assume_abort_if_not(var_1_54 <= 4294967294);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 32767);
	assume_abort_if_not(var_1_62 <= 65534);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 16383);
	assume_abort_if_not(var_1_63 <= 32767);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 190);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 1);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 24575);
	assume_abort_if_not(var_1_73 <= 32767);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 24575);
	assume_abort_if_not(var_1_74 <= 32767);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 1);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 0);
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= -230584.3009213691400e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691400e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -230584.3009213691400e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 2305843.009213691400e+12F && var_1_82 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= -461168.6018427383000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427383000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -230584.3009213691400e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691400e+12F && var_1_84 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 2305843.009213691400e+12F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427383000e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691400e+12F && var_1_90 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 16384);
	var_1_100 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_100 >= -16383);
	assume_abort_if_not(var_1_100 <= 16383);
	var_1_104 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_104 >= -1073741823);
	assume_abort_if_not(var_1_104 <= 1073741823);
	var_1_105 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_105 >= 536870911);
	assume_abort_if_not(var_1_105 <= 1073741823);
	var_1_106 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_106 >= 536870912);
	assume_abort_if_not(var_1_106 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_120 = var_1_120;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((var_1_98 ? (var_1_1 == ((double) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((double) (var_1_5 - (var_1_6 + var_1_7))))) && (var_1_98 ? ((var_1_32 < var_1_24) ? ((var_1_32 > (var_1_12 - 50)) ? (var_1_76 ? (var_1_8 == ((unsigned short int) var_1_13)) : 1) : 1) : (var_1_8 == ((unsigned short int) (((min (var_1_14 , var_1_15)) - 8) - var_1_16)))) : (var_1_8 == ((unsigned short int) (max (var_1_16 , (abs (var_1_14)))))))) && ((var_1_48 && (var_1_5 <= var_1_102)) ? (var_1_17 == ((signed long int) var_1_15)) : 1)) && ((var_1_15 == (var_1_19 - var_1_16)) ? (var_1_18 == ((double) (var_1_7 - (var_1_6 + 5.5)))) : 1)) && ((var_1_14 <= var_1_16) ? (var_1_20 == ((unsigned short int) ((var_1_21 + (min (var_1_22 , var_1_23))) + var_1_16))) : 1)) && ((((var_1_6 * var_1_7) + var_1_5) <= (last_1_var_1_46 * (- var_1_4))) ? ((var_1_14 != var_1_19) ? (last_1_var_1_48 ? (var_1_24 == ((unsigned long int) ((var_1_25 - var_1_23) + 64u))) : 1) : (var_1_24 == ((unsigned long int) (max ((var_1_21 + last_1_var_1_71) , (max ((abs (var_1_15)) , 2u))))))) : 1)) && (var_1_76 ? (var_1_26 == ((float) (8.75f - (var_1_27 - var_1_7)))) : 1)) && ((var_1_12 <= (var_1_16 ^ var_1_109)) ? ((var_1_5 == (- var_1_6)) ? (var_1_28 == ((unsigned short int) (max ((var_1_15 - 128) , var_1_14)))) : (var_1_28 == ((unsigned short int) var_1_22))) : (var_1_28 == ((unsigned short int) var_1_13)))) && ((! var_1_68) ? (var_1_29 == ((signed char) (min (var_1_30 , var_1_31)))) : 1)) && ((var_1_76 || var_1_48) ? (var_1_32 == ((signed long int) ((min (-10000 , (var_1_13 - var_1_21))) + var_1_14))) : 1)) && (var_1_98 ? (var_1_34 == ((unsigned char) (var_1_35 + var_1_36))) : ((! var_1_68) ? (var_1_34 == ((unsigned char) ((min ((var_1_37 + var_1_38) , (var_1_39 - var_1_40))) + (var_1_41 - (var_1_42 - var_1_43))))) : (var_1_34 == ((unsigned char) (max (var_1_42 , ((var_1_41 - 2) + var_1_40)))))))) && (var_1_44 == ((double) (var_1_6 + (var_1_7 - var_1_45))))) && (((min ((max (var_1_6 , var_1_3)) , (-0.5f / var_1_27))) <= var_1_45) ? (var_1_46 == ((double) (var_1_27 - 0.75))) : ((64.3 > var_1_5) ? (var_1_46 == ((double) var_1_27)) : ((((var_1_71 / var_1_15) <= var_1_91) && var_1_48) ? ((var_1_44 <= (abs (var_1_18 / var_1_27))) ? (var_1_46 == ((double) (max ((min ((var_1_6 + var_1_7) , (var_1_45 + var_1_47))) , (min (var_1_4 , var_1_3)))))) : 1) : 1)))) && (var_1_48 == ((unsigned char) (var_1_49 || var_1_50)))) && (((var_1_21 <= var_1_43) && (var_1_36 != (- var_1_109))) ? ((var_1_98 || ((-2 <= var_1_22) && (var_1_101 <= var_1_23))) ? (var_1_51 == ((float) var_1_6)) : 1) : 1)) && ((var_1_30 == (var_1_53 - (min (var_1_40 , var_1_42)))) ? (var_1_52 == ((unsigned long int) (var_1_19 + (min (last_1_var_1_72 , var_1_42))))) : (((min (last_1_var_1_117 , var_1_53)) > var_1_21) ? (var_1_52 == ((unsigned long int) (var_1_54 - var_1_14))) : (var_1_52 == ((unsigned long int) (max (last_1_var_1_55 , var_1_41))))))) && ((var_1_103 <= var_1_52) ? (var_1_55 == ((unsigned short int) ((abs (last_1_var_1_55)) + var_1_43))) : (var_1_55 == ((unsigned short int) (var_1_37 + (var_1_22 + (abs (var_1_35)))))))) && ((var_1_40 > var_1_24) ? ((var_1_24 <= var_1_13) ? (var_1_56 == ((float) (max ((var_1_45 - (var_1_7 + var_1_6)) , var_1_5)))) : (var_1_56 == ((float) (abs (100.625f))))) : (var_1_56 == ((float) var_1_6)))) && (var_1_50 ? (var_1_59 == ((unsigned char) var_1_43)) : 1)) && ((200 >= var_1_37) ? ((var_1_6 <= (var_1_111 + var_1_102)) ? ((! var_1_68) ? (var_1_60 == ((unsigned short int) ((abs (var_1_62)) - var_1_91))) : (var_1_60 == ((unsigned short int) (var_1_38 + (min ((var_1_63 - var_1_117) , (27854 - var_1_22))))))) : 1) : 1)) && (var_1_64 == ((unsigned char) var_1_37))) && ((var_1_6 <= var_1_47) ? (var_1_65 == ((unsigned char) (var_1_40 + (var_1_39 - var_1_42)))) : ((var_1_98 || var_1_68) ? (var_1_65 == ((unsigned char) ((var_1_66 - var_1_38) - (var_1_37 + 5)))) : (((min (3.5f , var_1_3)) == (var_1_67 - var_1_7)) ? (var_1_65 == ((unsigned char) (var_1_66 - var_1_38))) : (var_1_65 == ((unsigned char) (min ((min (var_1_43 , (128 - var_1_40))) , var_1_66)))))))) && ((var_1_67 < (- (last_1_var_1_1 + last_1_var_1_26))) ? (var_1_68 == ((unsigned char) var_1_49)) : (var_1_68 == ((unsigned char) ((last_1_var_1_93 && last_1_var_1_98) && (! var_1_69)))))) && (((var_1_24 <= (min (var_1_25 , var_1_52))) && var_1_68) ? (var_1_70 == ((signed short int) (min ((min (var_1_40 , var_1_39)) , var_1_101)))) : 1)) && ((var_1_98 && (var_1_43 <= var_1_12)) ? (var_1_71 == ((unsigned short int) (var_1_14 - (var_1_8 + (10000 - var_1_36))))) : ((var_1_102 < (63.25 / var_1_27)) ? ((var_1_39 < var_1_117) ? (var_1_71 == ((unsigned short int) ((var_1_75 + var_1_39) + (min (var_1_66 , var_1_40))))) : (var_1_71 == ((unsigned short int) ((var_1_63 - 1000) + (abs (var_1_35)))))) : (var_1_71 == ((unsigned short int) (var_1_38 + var_1_103)))))) && (var_1_93 ? (var_1_72 == ((unsigned short int) (((var_1_73 - var_1_66) + (var_1_74 - var_1_37)) - (var_1_63 - (var_1_38 + var_1_40))))) : ((var_1_63 > (- var_1_42)) ? (((var_1_40 ^ var_1_17) != var_1_42) ? (var_1_72 == ((unsigned short int) (var_1_16 + var_1_35))) : (var_1_72 == ((unsigned short int) (max (var_1_62 , var_1_21))))) : (var_1_72 == ((unsigned short int) (var_1_62 - 16)))))) && (var_1_93 ? (var_1_75 == ((signed short int) (var_1_120 + var_1_43))) : 1)) && ((var_1_50 || (last_1_var_1_46 >= (last_1_var_1_18 / var_1_27))) ? (((var_1_27 * last_1_var_1_46) >= (- var_1_6)) ? (var_1_76 == ((unsigned char) ((! (var_1_69 && var_1_77)) || ((! var_1_78) || (var_1_49 && var_1_50))))) : (var_1_76 == ((unsigned char) (((4 > var_1_74) || last_1_var_1_93) || (last_1_var_1_68 || var_1_69))))) : (var_1_50 ? ((var_1_42 <= last_1_var_1_70) ? (var_1_76 == ((unsigned char) (! (var_1_49 || var_1_79)))) : (var_1_76 == ((unsigned char) (! var_1_79)))) : ((last_1_var_1_93 || var_1_49) ? (var_1_76 == ((unsigned char) ((! var_1_79) && (! var_1_49)))) : 1)))) && ((var_1_48 || var_1_93) ? ((var_1_47 <= var_1_18) ? (var_1_80 == ((float) ((var_1_81 + var_1_82) + (var_1_6 - 9.9999999999995E12f)))) : 1) : ((var_1_4 < 63.6) ? (var_1_80 == ((float) (min ((min (var_1_7 , (max (var_1_47 , var_1_81)))) , var_1_27)))) : (((max ((max (var_1_31 , var_1_17)) , var_1_73)) > var_1_24) ? (var_1_80 == ((float) (var_1_83 + var_1_47))) : (var_1_80 == ((float) (min (((var_1_45 + var_1_7) - var_1_27) , (var_1_82 + (var_1_81 + var_1_84)))))))))) && ((var_1_68 && (var_1_23 != (61449 - var_1_21))) ? ((16 < var_1_52) ? ((-128 <= (var_1_19 * (var_1_34 - var_1_41))) ? (var_1_85 == ((unsigned char) 1)) : (var_1_85 == ((unsigned char) var_1_41))) : (var_1_85 == ((unsigned char) ((var_1_66 - 32) - (max (var_1_41 , var_1_38)))))) : 1)) && ((var_1_103 >= (var_1_15 - var_1_36)) ? ((! ((var_1_12 / var_1_14) >= var_1_91)) ? ((var_1_76 || (var_1_19 < var_1_24)) ? (var_1_86 == ((float) (var_1_82 + (abs (var_1_7))))) : ((var_1_35 > var_1_103) ? (var_1_86 == ((float) var_1_5)) : 1)) : (var_1_86 == ((float) (5.6f + (var_1_81 + var_1_84))))) : (var_1_86 == ((float) (var_1_45 + (4.5f + var_1_81)))))) && ((((var_1_41 - var_1_43) - var_1_40) != (var_1_15 * var_1_37)) ? ((var_1_43 == (2 + (max (var_1_24 , var_1_52)))) ? (var_1_87 == ((float) (var_1_83 + ((var_1_89 - var_1_90) - var_1_6)))) : 1) : 1)) && ((var_1_18 < (min (63.5f , 50.125f))) ? ((var_1_73 <= (var_1_20 + 128)) ? (var_1_91 == ((unsigned short int) (var_1_62 - var_1_22))) : (var_1_91 == ((unsigned short int) var_1_43))) : ((var_1_120 == ((var_1_120 ^ var_1_34) + (abs (var_1_30)))) ? (var_1_91 == ((unsigned short int) ((var_1_92 + var_1_42) + 4))) : 1))) && ((last_1_var_1_52 <= (last_1_var_1_109 * var_1_73)) ? (((var_1_82 >= var_1_5) || last_1_var_1_68) ? ((last_1_var_1_52 > last_1_var_1_120) ? (var_1_93 == ((unsigned char) ((var_1_19 != (last_1_var_1_32 * last_1_var_1_113)) && var_1_50))) : 1) : 1) : (var_1_93 == ((unsigned char) var_1_79)))) && ((var_1_107 == (- var_1_72)) ? (var_1_97 == ((unsigned char) (abs (var_1_66 - var_1_42)))) : 1)) && ((last_1_var_1_46 >= (last_1_var_1_102 + (abs (var_1_83)))) ? (var_1_98 == ((unsigned char) (var_1_77 && var_1_69))) : 1)) && ((var_1_42 > var_1_16) ? (var_1_99 == ((signed short int) (var_1_38 - (max ((max (last_1_var_1_99 , var_1_22)) , var_1_117))))) : (var_1_99 == ((signed short int) (max (((var_1_40 - var_1_91) + (min (var_1_100 , var_1_41))) , (var_1_38 + var_1_31))))))) && (var_1_101 == ((signed long int) var_1_39))) && (((var_1_21 * var_1_24) < (var_1_8 / var_1_15)) ? (var_1_102 == ((double) (var_1_27 - var_1_5))) : (var_1_102 == ((double) ((var_1_27 - var_1_90) - var_1_89))))) && (((var_1_6 - (min (var_1_67 , var_1_45))) >= (- var_1_1)) ? ((var_1_74 > (var_1_19 - var_1_43)) ? (var_1_103 == ((signed long int) (max (((100 - var_1_73) + var_1_21) , var_1_15)))) : (var_1_103 == ((signed long int) (var_1_117 + var_1_104)))) : (var_1_103 == ((signed long int) (var_1_15 - ((var_1_105 + var_1_106) - var_1_92)))))) && ((var_1_101 <= (var_1_19 * (var_1_39 - var_1_99))) ? (var_1_68 ? (var_1_107 == ((signed short int) var_1_43)) : (var_1_107 == ((signed short int) var_1_15))) : (var_1_107 == ((signed short int) var_1_66)))) && (var_1_48 ? (var_1_109 == ((signed long int) var_1_104)) : (var_1_109 == ((signed long int) var_1_106)))) && (var_1_50 ? (var_1_111 == ((float) var_1_83)) : (var_1_111 == ((float) var_1_89)))) && (var_1_48 ? (var_1_112 == ((float) var_1_6)) : (var_1_112 == ((float) var_1_82)))) && (var_1_113 == ((unsigned short int) var_1_15))) && (var_1_48 ? (var_1_114 == ((signed long int) var_1_39)) : (var_1_114 == ((signed long int) var_1_19)))) && (var_1_98 ? (var_1_116 == ((float) 49.5f)) : (var_1_116 == ((float) var_1_4)))) && (var_1_49 ? (var_1_117 == ((signed long int) var_1_15)) : (var_1_117 == ((signed long int) var_1_30)))) && (var_1_118 == ((signed char) var_1_31))) && (((var_1_23 + var_1_106) <= var_1_8) ? (var_1_119 == ((signed char) var_1_43)) : 1)) && ((! (var_1_6 < (var_1_1 * var_1_27))) ? ((var_1_105 > -10) ? (var_1_120 == ((unsigned short int) 64)) : (var_1_120 == ((unsigned short int) var_1_114))) : 1)
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
