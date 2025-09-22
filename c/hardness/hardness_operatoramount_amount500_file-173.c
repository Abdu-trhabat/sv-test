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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch173Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 49.4;
unsigned long int var_1_3 = 1;
float var_1_5 = 3.6;
float var_1_6 = 3.8;
signed short int var_1_7 = 64;
signed short int var_1_10 = 10;
signed short int var_1_11 = 18539;
signed short int var_1_12 = 5;
signed short int var_1_13 = 10;
signed short int var_1_15 = 4;
float var_1_16 = 4.25;
float var_1_18 = 0.0;
float var_1_19 = 8.6;
signed char var_1_20 = -64;
unsigned long int var_1_21 = 2376949873;
double var_1_22 = 1.12;
signed char var_1_23 = 2;
signed char var_1_24 = -4;
signed char var_1_25 = 1;
signed char var_1_26 = -2;
signed char var_1_27 = 0;
signed char var_1_28 = 4;
signed short int var_1_29 = -64;
unsigned short int var_1_30 = 4;
unsigned short int var_1_31 = 0;
signed long int var_1_32 = 200;
signed long int var_1_33 = 1145305613;
signed char var_1_34 = 1;
signed long int var_1_35 = 256;
unsigned short int var_1_36 = 25;
unsigned short int var_1_37 = 46161;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 200;
unsigned char var_1_40 = 2;
signed char var_1_41 = -100;
signed char var_1_42 = 1;
signed char var_1_43 = 16;
signed char var_1_44 = 2;
double var_1_45 = 4.625;
double var_1_46 = 0.0;
double var_1_47 = 15.8;
double var_1_48 = 1000000000.1;
double var_1_49 = 63.5;
double var_1_50 = 4.6;
double var_1_51 = 1.95;
unsigned char var_1_52 = 5;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 10;
unsigned short int var_1_56 = 4;
unsigned char var_1_57 = 4;
double var_1_58 = 256.5;
double var_1_61 = 16.5;
signed short int var_1_62 = 2;
unsigned long int var_1_63 = 128;
unsigned long int var_1_64 = 1000000000;
unsigned long int var_1_65 = 1000000000;
double var_1_66 = 31.9;
double var_1_67 = 1000000000.6;
signed short int var_1_68 = -1;
unsigned char var_1_70 = 16;
unsigned char var_1_71 = 128;
float var_1_72 = 99.5;
signed char var_1_73 = 4;
float var_1_74 = 32.4;
unsigned short int var_1_75 = 32;
unsigned short int var_1_76 = 16;
unsigned short int var_1_77 = 10;
float var_1_78 = 49.72;
unsigned short int var_1_79 = 25;
float var_1_80 = 49.5;
float var_1_81 = 7.625;
unsigned char var_1_82 = 10;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
unsigned long int var_1_86 = 10;
unsigned long int var_1_87 = 3462905084;
unsigned long int var_1_88 = 3331618266;
signed short int var_1_89 = 5;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 0;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 0;
unsigned char var_1_97 = 64;
unsigned char var_1_98 = 100;
unsigned long int var_1_99 = 25;
unsigned char var_1_100 = 0;
float var_1_101 = 63.5;
signed long int var_1_102 = 128;
signed char var_1_103 = -2;
signed long int var_1_104 = 128;
unsigned short int var_1_105 = 256;
unsigned short int var_1_106 = 128;
float var_1_107 = 4.5;
unsigned long int var_1_108 = 256;
signed short int var_1_109 = 1;
signed long int var_1_110 = -32;
signed short int var_1_111 = -2;
unsigned short int var_1_112 = 8;
signed char var_1_113 = -64;
unsigned char var_1_114 = 1;
double var_1_115 = 4.5;
signed short int var_1_116 = 64;
unsigned char var_1_117 = 50;

// Calibration values

// Last'ed variables
float last_1_var_1_16 = 4.25;
signed short int last_1_var_1_29 = -64;
unsigned short int last_1_var_1_36 = 25;
unsigned char last_1_var_1_38 = 0;
unsigned char last_1_var_1_54 = 64;
double last_1_var_1_58 = 256.5;
unsigned long int last_1_var_1_63 = 128;
double last_1_var_1_67 = 1000000000.6;
signed short int last_1_var_1_68 = -1;
unsigned short int last_1_var_1_75 = 32;
unsigned short int last_1_var_1_76 = 16;
unsigned char last_1_var_1_82 = 10;
unsigned char last_1_var_1_84 = 1;
unsigned char last_1_var_1_100 = 0;
signed long int last_1_var_1_110 = -32;
unsigned short int last_1_var_1_112 = 8;
unsigned char last_1_var_1_114 = 1;
double last_1_var_1_115 = 4.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch173Amount500
	signed long int stepLocal_7 = min (var_1_20 , var_1_26);
	signed char stepLocal_6 = var_1_20;
	if (((last_1_var_1_76 * last_1_var_1_36) * var_1_13) > stepLocal_7) {
		var_1_36 = var_1_12;
	} else {
		if (stepLocal_6 <= -128) {
			if (last_1_var_1_114) {
				var_1_36 = (abs (var_1_37 - var_1_15));
			}
		} else {
			var_1_36 = (max (var_1_15 , var_1_37));
		}
	}


	// From: Req43Batch173Amount500
	var_1_108 = last_1_var_1_54;


	// From: Req46Batch173Amount500
	var_1_111 = var_1_108;


	// From: Req35Batch173Amount500
	unsigned char stepLocal_27 = last_1_var_1_114;
	if (stepLocal_27 && last_1_var_1_84) {
		var_1_99 = (var_1_87 - (last_1_var_1_110 + last_1_var_1_75));
	} else {
		var_1_99 = var_1_33;
	}


	// From: Req31Batch173Amount500
	if (last_1_var_1_67 >= (last_1_var_1_67 + last_1_var_1_16)) {
		var_1_86 = ((max (var_1_87 , (var_1_88 - var_1_44))) - var_1_42);
	} else {
		var_1_86 = (min (last_1_var_1_38 , var_1_13));
	}


	// From: Req33Batch173Amount500
	if ((var_1_77 / (var_1_56 + var_1_73)) < var_1_30) {
		if (((min (9.6f , var_1_46)) - var_1_74) != last_1_var_1_115) {
			var_1_90 = (var_1_91 || var_1_92);
		} else {
			var_1_90 = (last_1_var_1_100 || var_1_85);
		}
	} else {
		if (var_1_56 >= var_1_12) {
			var_1_90 = (! var_1_93);
		} else {
			if (last_1_var_1_100 && (! (var_1_48 > var_1_50))) {
				if ((- last_1_var_1_112) != (last_1_var_1_63 & last_1_var_1_29)) {
					var_1_90 = 0;
				} else {
					if (var_1_91 || (var_1_21 < (1u * 256u))) {
						var_1_90 = (! 1);
					} else {
						var_1_90 = (! var_1_91);
					}
				}
			} else {
				var_1_90 = (! (var_1_92 || var_1_91));
			}
		}
	}


	// From: Req1Batch173Amount500
	unsigned long int stepLocal_0 = var_1_86;
	if ((var_1_99 % var_1_3) <= stepLocal_0) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req8Batch173Amount500
	if (((var_1_30 | var_1_108) | (- var_1_21)) >= var_1_13) {
		var_1_31 = (abs (44313 - var_1_15));
	}


	// From: Req22Batch173Amount500
	var_1_67 = (var_1_5 - (max (var_1_18 , (var_1_46 - var_1_19))));


	// From: Req30Batch173Amount500
	var_1_84 = (! var_1_85);


	// From: Req36Batch173Amount500
	var_1_100 = var_1_93;


	// From: Req37Batch173Amount500
	var_1_101 = var_1_50;


	// From: Req38Batch173Amount500
	if (var_1_91) {
		var_1_102 = var_1_15;
	} else {
		var_1_102 = 128;
	}


	// From: Req39Batch173Amount500
	var_1_103 = var_1_55;


	// From: Req40Batch173Amount500
	if (var_1_91) {
		var_1_104 = var_1_24;
	} else {
		var_1_104 = var_1_97;
	}


	// From: Req41Batch173Amount500
	var_1_105 = var_1_106;


	// From: Req42Batch173Amount500
	if (var_1_85) {
		var_1_107 = var_1_49;
	} else {
		var_1_107 = var_1_74;
	}


	// From: Req45Batch173Amount500
	var_1_110 = var_1_13;


	// From: Req48Batch173Amount500
	var_1_113 = var_1_73;


	// From: Req49Batch173Amount500
	if (var_1_100) {
		var_1_114 = var_1_93;
	} else {
		var_1_114 = var_1_92;
	}


	// From: Req50Batch173Amount500
	var_1_115 = (var_1_80 + var_1_51);


	// From: Req52Batch173Amount500
	if (! var_1_85) {
		if (var_1_33 <= var_1_73) {
			var_1_117 = var_1_39;
		}
	}


	// From: Req27Batch173Amount500
	signed long int stepLocal_21 = var_1_37 - (var_1_13 + var_1_43);
	unsigned short int stepLocal_20 = var_1_36;
	if (stepLocal_21 >= ((max (var_1_28 , var_1_33)) ^ (var_1_26 ^ var_1_104))) {
		if (stepLocal_20 > (var_1_30 + (var_1_13 ^ var_1_36))) {
			var_1_76 = (min (var_1_42 , var_1_12));
		} else {
			var_1_76 = (var_1_37 - var_1_42);
		}
	} else {
		var_1_76 = (var_1_37 - (min (var_1_55 , var_1_77)));
	}


	// From: Req13Batch173Amount500
	unsigned char stepLocal_8 = var_1_36 <= var_1_86;
	if (var_1_90 || stepLocal_8) {
		var_1_38 = (var_1_39 - var_1_40);
	}


	// From: Req2Batch173Amount500
	unsigned char stepLocal_3 = var_1_90;
	unsigned long int stepLocal_2 = var_1_108;
	signed short int stepLocal_1 = var_1_13;
	if (var_1_3 >= stepLocal_2) {
		if (var_1_84 || stepLocal_3) {
			var_1_7 = (var_1_10 - (var_1_11 - (min (var_1_12 , var_1_13))));
		}
	} else {
		if (var_1_84) {
			if ((~ var_1_11) != stepLocal_1) {
				var_1_7 = (var_1_13 + var_1_12);
			} else {
				var_1_7 = (min ((max (var_1_13 , var_1_12)) , ((max (var_1_10 , var_1_11)) - var_1_15)));
			}
		}
	}


	// From: Req19Batch173Amount500
	signed short int stepLocal_12 = var_1_10;
	unsigned char stepLocal_11 = var_1_114;
	if (stepLocal_11 || (var_1_15 > var_1_42)) {
		if (((var_1_30 - var_1_42) + var_1_25) != stepLocal_12) {
			var_1_62 = (max (var_1_10 , (abs (var_1_38))));
		}
	} else {
		var_1_62 = (min ((var_1_44 + (min (var_1_25 , var_1_28))) , 500));
	}


	// From: Req4Batch173Amount500
	if (var_1_114) {
		var_1_22 = var_1_18;
	}


	// From: Req5Batch173Amount500
	unsigned char stepLocal_5 = var_1_18 == var_1_5;
	unsigned long int stepLocal_4 = var_1_13 / var_1_3;
	if (stepLocal_5 && var_1_100) {
		if ((var_1_21 / var_1_11) <= stepLocal_4) {
			var_1_23 = (var_1_24 + (max (var_1_25 , var_1_26)));
		} else {
			var_1_23 = (min (var_1_25 , var_1_24));
		}
	} else {
		var_1_23 = (max (var_1_26 , var_1_24));
	}


	// From: Req6Batch173Amount500
	if (var_1_114) {
		var_1_27 = (min (var_1_25 , ((max (var_1_26 , var_1_24)) + var_1_28)));
	} else {
		var_1_27 = var_1_28;
	}


	// From: Req10Batch173Amount500
	if (! var_1_114) {
		var_1_34 = (max (var_1_24 , var_1_28));
	}


	// From: Req14Batch173Amount500
	if (var_1_110 >= var_1_28) {
		var_1_41 = -5;
	} else {
		var_1_41 = ((var_1_42 + var_1_43) - var_1_44);
	}


	// From: Req15Batch173Amount500
	signed long int stepLocal_10 = 256;
	unsigned char stepLocal_9 = var_1_100;
	if (var_1_101 < (9.9999999999994E12f + (min (var_1_6 , var_1_5)))) {
		if (stepLocal_9 || var_1_114) {
			if (stepLocal_10 > var_1_40) {
				var_1_45 = (((var_1_46 - 3.5) - var_1_19) - (max ((var_1_47 + var_1_48) , (var_1_49 + 16.2))));
			}
		} else {
			var_1_45 = (var_1_47 + (var_1_50 + var_1_51));
		}
	}


	// From: Req16Batch173Amount500
	if (var_1_46 < var_1_45) {
		if (var_1_84) {
			var_1_52 = var_1_39;
		} else {
			var_1_52 = 50;
		}
	} else {
		var_1_52 = var_1_39;
	}


	// From: Req20Batch173Amount500
	if (var_1_84) {
		if (var_1_26 >= (var_1_30 / var_1_20)) {
			var_1_63 = var_1_55;
		} else {
			if (var_1_57 >= var_1_42) {
				var_1_63 = var_1_56;
			} else {
				var_1_63 = (((var_1_64 + var_1_65) + 1677797305u) - var_1_57);
			}
		}
	}


	// From: Req21Batch173Amount500
	if (var_1_114) {
		var_1_66 = var_1_18;
	} else {
		var_1_66 = ((var_1_46 - var_1_47) - var_1_49);
	}


	// From: Req28Batch173Amount500
	if ((var_1_73 / (max (var_1_3 , var_1_79))) > (max (var_1_76 , var_1_55))) {
		var_1_78 = (var_1_18 - var_1_48);
	} else {
		var_1_78 = (((var_1_80 + var_1_81) + var_1_51) + (var_1_61 + (min (63.8f , var_1_74))));
	}


	// From: Req32Batch173Amount500
	unsigned char stepLocal_25 = var_1_39;
	unsigned char stepLocal_24 = var_1_100;
	if ((var_1_88 - var_1_55) >= stepLocal_25) {
		var_1_89 = ((var_1_99 + var_1_39) + (var_1_86 - var_1_55));
	} else {
		if (var_1_84 || stepLocal_24) {
			var_1_89 = (max ((var_1_56 + var_1_44) , var_1_57));
		}
	}


	// From: Req17Batch173Amount500
	if (var_1_49 < (max (var_1_47 , (var_1_66 / var_1_46)))) {
		var_1_54 = (max ((var_1_39 - var_1_42) , ((200 - var_1_55) - var_1_44)));
	} else {
		if (var_1_111 <= (max (var_1_86 , (last_1_var_1_54 - var_1_12)))) {
			if (var_1_10 >= ((1000 >> var_1_56) + var_1_13)) {
				var_1_54 = (min ((var_1_39 - var_1_44) , var_1_56));
			} else {
				if ((var_1_13 & var_1_86) >= var_1_44) {
					var_1_54 = (max ((max ((min (var_1_42 , var_1_56)) , var_1_40)) , (max ((var_1_55 + var_1_43) , var_1_44))));
				} else {
					var_1_54 = (var_1_39 - (var_1_56 + 25));
				}
			}
		} else {
			var_1_54 = (var_1_57 + ((abs (var_1_55)) + var_1_43));
		}
	}


	// From: Req47Batch173Amount500
	var_1_112 = var_1_62;


	// From: Req18Batch173Amount500
	if (var_1_47 >= (abs (var_1_51))) {
		if (var_1_48 < var_1_49) {
			var_1_58 = (max ((var_1_49 + var_1_19) , 127.75));
		} else {
			if (! var_1_90) {
				if (var_1_19 != last_1_var_1_58) {
					var_1_58 = (max (var_1_5 , var_1_18));
				} else {
					var_1_58 = ((var_1_19 - var_1_49) + (min ((min (var_1_47 , var_1_50)) , (var_1_51 + var_1_61))));
				}
			} else {
				var_1_58 = (5.25 + (abs (var_1_48)));
			}
		}
	} else {
		if ((var_1_86 + var_1_11) > var_1_63) {
			var_1_58 = (var_1_6 - var_1_49);
		} else {
			var_1_58 = (max (var_1_51 , var_1_47));
		}
	}


	// From: Req24Batch173Amount500
	if (var_1_100 && var_1_90) {
		var_1_70 = ((max (var_1_39 , var_1_71)) - (min (var_1_43 , var_1_40)));
	} else {
		if ((max (var_1_61 , (var_1_67 + var_1_51))) != var_1_58) {
			var_1_70 = (max ((min (var_1_42 , var_1_39)) , (min (64 , var_1_57))));
		}
	}


	// From: Req11Batch173Amount500
	if (var_1_67 < var_1_66) {
		if (! (var_1_13 < var_1_36)) {
			if (var_1_112 == var_1_33) {
				if (var_1_63 > var_1_36) {
					var_1_35 = var_1_25;
				} else {
					if (var_1_114 && (var_1_3 <= var_1_63)) {
						var_1_35 = 16;
					}
				}
			} else {
				if (((var_1_111 * var_1_36) * var_1_13) < var_1_20) {
					var_1_35 = ((var_1_30 - (1 + var_1_15)) + var_1_24);
				}
			}
		} else {
			var_1_35 = var_1_11;
		}
	} else {
		if (var_1_99 < var_1_12) {
			var_1_35 = (max (var_1_26 , var_1_13));
		}
	}


	// From: Req51Batch173Amount500
	var_1_116 = (16 + var_1_70);


	// From: Req3Batch173Amount500
	if ((min (var_1_63 , (var_1_3 | var_1_112))) > var_1_99) {
		var_1_16 = ((max (var_1_6 , var_1_5)) - (var_1_18 - var_1_19));
	} else {
		if ((var_1_112 | (max (var_1_11 , var_1_63))) > (var_1_21 - var_1_13)) {
			var_1_16 = (var_1_6 - var_1_19);
		} else {
			var_1_16 = var_1_6;
		}
	}


	// From: Req34Batch173Amount500
	unsigned long int stepLocal_26 = (var_1_70 + var_1_99) << var_1_21;
	if ((var_1_7 / var_1_79) < stepLocal_26) {
		if (var_1_18 < (min ((var_1_107 * var_1_47) , var_1_16))) {
			var_1_94 = ((var_1_97 + var_1_98) - var_1_55);
		} else {
			if (var_1_100) {
				var_1_94 = ((var_1_97 - var_1_55) + (var_1_98 - 10));
			} else {
				var_1_94 = (min (((var_1_97 + var_1_98) - 32) , var_1_44));
			}
		}
	} else {
		var_1_94 = var_1_39;
	}


	// From: Req7Batch173Amount500
	if ((var_1_15 / (var_1_11 + var_1_30)) < var_1_25) {
		var_1_29 = (var_1_35 + (max (var_1_20 , var_1_24)));
	}


	// From: Req29Batch173Amount500
	unsigned char stepLocal_23 = var_1_94;
	unsigned long int stepLocal_22 = var_1_99;
	if (stepLocal_23 > last_1_var_1_82) {
		if (stepLocal_22 < var_1_36) {
			var_1_82 = (8 + var_1_43);
		}
	} else {
		var_1_82 = (min ((var_1_39 - (max (var_1_73 , 1))) , (var_1_57 + var_1_55)));
	}


	// From: Req44Batch173Amount500
	if (var_1_91) {
		var_1_109 = var_1_94;
	} else {
		var_1_109 = var_1_24;
	}


	// From: Req26Batch173Amount500
	if (var_1_84) {
		var_1_75 = var_1_30;
	} else {
		if ((var_1_56 - (var_1_57 + var_1_94)) > (~ var_1_10)) {
			var_1_75 = 4;
		} else {
			var_1_75 = (var_1_43 + (max ((var_1_11 - var_1_94) , var_1_73)));
		}
	}


	// From: Req9Batch173Amount500
	if (var_1_114) {
		var_1_32 = ((var_1_33 - var_1_30) - (max (var_1_75 , var_1_15)));
	} else {
		if ((var_1_10 + var_1_11) != var_1_86) {
			var_1_32 = ((max (var_1_11 , var_1_75)) - var_1_30);
		}
	}


	// From: Req23Batch173Amount500
	unsigned char stepLocal_16 = var_1_82;
	signed long int stepLocal_15 = var_1_35 / (min (var_1_56 , var_1_39));
	signed char stepLocal_14 = var_1_44;
	signed long int stepLocal_13 = 5;
	if (stepLocal_15 > var_1_105) {
		if (var_1_30 <= stepLocal_13) {
			if (var_1_84) {
				var_1_68 = (max (var_1_13 , var_1_43));
			} else {
				if (var_1_37 <= stepLocal_14) {
					if (var_1_100) {
						var_1_68 = var_1_42;
					}
				}
			}
		}
	} else {
		if ((max (4 , last_1_var_1_68)) <= stepLocal_16) {
			var_1_68 = (var_1_63 + (var_1_40 + var_1_57));
		}
	}


	// From: Req25Batch173Amount500
	unsigned long int stepLocal_19 = var_1_108 * var_1_43;
	signed long int stepLocal_18 = (var_1_55 >> var_1_73) + var_1_30;
	unsigned char stepLocal_17 = ! var_1_100;
	if (stepLocal_18 >= (var_1_99 + var_1_63)) {
		if (var_1_100 || stepLocal_17) {
			var_1_72 = (((min (var_1_51 , var_1_61)) + (var_1_74 - 8.25f)) + var_1_49);
		} else {
			var_1_72 = (min ((min (var_1_51 , (var_1_49 + var_1_74))) , var_1_19));
		}
	} else {
		if ((var_1_11 * var_1_32) != stepLocal_19) {
			var_1_72 = (0.375f - (max (var_1_49 , 10000.5f)));
		} else {
			var_1_72 = var_1_51;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 16383);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -128);
	assume_abort_if_not(var_1_20 <= 127);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 2147483647);
	assume_abort_if_not(var_1_21 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -63);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 1073741822);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 6917529.027641074000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -230584.3009213691400e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 63);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 30);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 127);
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -230584.3009213691400e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 536870911);
	assume_abort_if_not(var_1_64 <= 1073741824);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 536870912);
	assume_abort_if_not(var_1_65 <= 1073741823);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 127);
	assume_abort_if_not(var_1_71 <= 254);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 1);
	assume_abort_if_not(var_1_73 <= 7);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 32767);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 65535);
	assume_abort_if_not(var_1_79 != 0);
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= -115292.1504606845700e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 1152921.504606845700e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= -115292.1504606845700e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 1152921.504606845700e+12F && var_1_81 >= 1.0e-20F ));
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 2147483647);
	assume_abort_if_not(var_1_87 <= 4294967294);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 3221225470);
	assume_abort_if_not(var_1_88 <= 4294967294);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 0);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 0);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 63);
	assume_abort_if_not(var_1_97 <= 127);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 64);
	assume_abort_if_not(var_1_98 <= 127);
	var_1_106 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_112 = var_1_112;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_115 = var_1_115;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_99 % var_1_3) <= var_1_86) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_3 >= var_1_108) ? ((var_1_84 || var_1_90) ? (var_1_7 == ((signed short int) (var_1_10 - (var_1_11 - (min (var_1_12 , var_1_13)))))) : 1) : (var_1_84 ? (((~ var_1_11) != var_1_13) ? (var_1_7 == ((signed short int) (var_1_13 + var_1_12))) : (var_1_7 == ((signed short int) (min ((max (var_1_13 , var_1_12)) , ((max (var_1_10 , var_1_11)) - var_1_15)))))) : 1))) && (((min (var_1_63 , (var_1_3 | var_1_112))) > var_1_99) ? (var_1_16 == ((float) ((max (var_1_6 , var_1_5)) - (var_1_18 - var_1_19)))) : (((var_1_112 | (max (var_1_11 , var_1_63))) > (var_1_21 - var_1_13)) ? (var_1_16 == ((float) (var_1_6 - var_1_19))) : (var_1_16 == ((float) var_1_6))))) && (var_1_114 ? (var_1_22 == ((double) var_1_18)) : 1)) && (((var_1_18 == var_1_5) && var_1_100) ? (((var_1_21 / var_1_11) <= (var_1_13 / var_1_3)) ? (var_1_23 == ((signed char) (var_1_24 + (max (var_1_25 , var_1_26))))) : (var_1_23 == ((signed char) (min (var_1_25 , var_1_24))))) : (var_1_23 == ((signed char) (max (var_1_26 , var_1_24)))))) && (var_1_114 ? (var_1_27 == ((signed char) (min (var_1_25 , ((max (var_1_26 , var_1_24)) + var_1_28))))) : (var_1_27 == ((signed char) var_1_28)))) && (((var_1_15 / (var_1_11 + var_1_30)) < var_1_25) ? (var_1_29 == ((signed short int) (var_1_35 + (max (var_1_20 , var_1_24))))) : 1)) && ((((var_1_30 | var_1_108) | (- var_1_21)) >= var_1_13) ? (var_1_31 == ((unsigned short int) (abs (44313 - var_1_15)))) : 1)) && (var_1_114 ? (var_1_32 == ((signed long int) ((var_1_33 - var_1_30) - (max (var_1_75 , var_1_15))))) : (((var_1_10 + var_1_11) != var_1_86) ? (var_1_32 == ((signed long int) ((max (var_1_11 , var_1_75)) - var_1_30))) : 1))) && ((! var_1_114) ? (var_1_34 == ((signed char) (max (var_1_24 , var_1_28)))) : 1)) && ((var_1_67 < var_1_66) ? ((! (var_1_13 < var_1_36)) ? ((var_1_112 == var_1_33) ? ((var_1_63 > var_1_36) ? (var_1_35 == ((signed long int) var_1_25)) : ((var_1_114 && (var_1_3 <= var_1_63)) ? (var_1_35 == ((signed long int) 16)) : 1)) : ((((var_1_111 * var_1_36) * var_1_13) < var_1_20) ? (var_1_35 == ((signed long int) ((var_1_30 - (1 + var_1_15)) + var_1_24))) : 1)) : (var_1_35 == ((signed long int) var_1_11))) : ((var_1_99 < var_1_12) ? (var_1_35 == ((signed long int) (max (var_1_26 , var_1_13)))) : 1))) && ((((last_1_var_1_76 * last_1_var_1_36) * var_1_13) > (min (var_1_20 , var_1_26))) ? (var_1_36 == ((unsigned short int) var_1_12)) : ((var_1_20 <= -128) ? (last_1_var_1_114 ? (var_1_36 == ((unsigned short int) (abs (var_1_37 - var_1_15)))) : 1) : (var_1_36 == ((unsigned short int) (max (var_1_15 , var_1_37))))))) && ((var_1_90 || (var_1_36 <= var_1_86)) ? (var_1_38 == ((unsigned char) (var_1_39 - var_1_40))) : 1)) && ((var_1_110 >= var_1_28) ? (var_1_41 == ((signed char) -5)) : (var_1_41 == ((signed char) ((var_1_42 + var_1_43) - var_1_44))))) && ((var_1_101 < (9.9999999999994E12f + (min (var_1_6 , var_1_5)))) ? ((var_1_100 || var_1_114) ? ((256 > var_1_40) ? (var_1_45 == ((double) (((var_1_46 - 3.5) - var_1_19) - (max ((var_1_47 + var_1_48) , (var_1_49 + 16.2)))))) : 1) : (var_1_45 == ((double) (var_1_47 + (var_1_50 + var_1_51))))) : 1)) && ((var_1_46 < var_1_45) ? (var_1_84 ? (var_1_52 == ((unsigned char) var_1_39)) : (var_1_52 == ((unsigned char) 50))) : (var_1_52 == ((unsigned char) var_1_39)))) && ((var_1_49 < (max (var_1_47 , (var_1_66 / var_1_46)))) ? (var_1_54 == ((unsigned char) (max ((var_1_39 - var_1_42) , ((200 - var_1_55) - var_1_44))))) : ((var_1_111 <= (max (var_1_86 , (last_1_var_1_54 - var_1_12)))) ? ((var_1_10 >= ((1000 >> var_1_56) + var_1_13)) ? (var_1_54 == ((unsigned char) (min ((var_1_39 - var_1_44) , var_1_56)))) : (((var_1_13 & var_1_86) >= var_1_44) ? (var_1_54 == ((unsigned char) (max ((max ((min (var_1_42 , var_1_56)) , var_1_40)) , (max ((var_1_55 + var_1_43) , var_1_44)))))) : (var_1_54 == ((unsigned char) (var_1_39 - (var_1_56 + 25)))))) : (var_1_54 == ((unsigned char) (var_1_57 + ((abs (var_1_55)) + var_1_43))))))) && ((var_1_47 >= (abs (var_1_51))) ? ((var_1_48 < var_1_49) ? (var_1_58 == ((double) (max ((var_1_49 + var_1_19) , 127.75)))) : ((! var_1_90) ? ((var_1_19 != last_1_var_1_58) ? (var_1_58 == ((double) (max (var_1_5 , var_1_18)))) : (var_1_58 == ((double) ((var_1_19 - var_1_49) + (min ((min (var_1_47 , var_1_50)) , (var_1_51 + var_1_61))))))) : (var_1_58 == ((double) (5.25 + (abs (var_1_48))))))) : (((var_1_86 + var_1_11) > var_1_63) ? (var_1_58 == ((double) (var_1_6 - var_1_49))) : (var_1_58 == ((double) (max (var_1_51 , var_1_47))))))) && ((var_1_114 || (var_1_15 > var_1_42)) ? ((((var_1_30 - var_1_42) + var_1_25) != var_1_10) ? (var_1_62 == ((signed short int) (max (var_1_10 , (abs (var_1_38)))))) : 1) : (var_1_62 == ((signed short int) (min ((var_1_44 + (min (var_1_25 , var_1_28))) , 500)))))) && (var_1_84 ? ((var_1_26 >= (var_1_30 / var_1_20)) ? (var_1_63 == ((unsigned long int) var_1_55)) : ((var_1_57 >= var_1_42) ? (var_1_63 == ((unsigned long int) var_1_56)) : (var_1_63 == ((unsigned long int) (((var_1_64 + var_1_65) + 1677797305u) - var_1_57))))) : 1)) && (var_1_114 ? (var_1_66 == ((double) var_1_18)) : (var_1_66 == ((double) ((var_1_46 - var_1_47) - var_1_49))))) && (var_1_67 == ((double) (var_1_5 - (max (var_1_18 , (var_1_46 - var_1_19))))))) && (((var_1_35 / (min (var_1_56 , var_1_39))) > var_1_105) ? ((var_1_30 <= 5) ? (var_1_84 ? (var_1_68 == ((signed short int) (max (var_1_13 , var_1_43)))) : ((var_1_37 <= var_1_44) ? (var_1_100 ? (var_1_68 == ((signed short int) var_1_42)) : 1) : 1)) : 1) : (((max (4 , last_1_var_1_68)) <= var_1_82) ? (var_1_68 == ((signed short int) (var_1_63 + (var_1_40 + var_1_57)))) : 1))) && ((var_1_100 && var_1_90) ? (var_1_70 == ((unsigned char) ((max (var_1_39 , var_1_71)) - (min (var_1_43 , var_1_40))))) : (((max (var_1_61 , (var_1_67 + var_1_51))) != var_1_58) ? (var_1_70 == ((unsigned char) (max ((min (var_1_42 , var_1_39)) , (min (64 , var_1_57)))))) : 1))) && ((((var_1_55 >> var_1_73) + var_1_30) >= (var_1_99 + var_1_63)) ? ((var_1_100 || (! var_1_100)) ? (var_1_72 == ((float) (((min (var_1_51 , var_1_61)) + (var_1_74 - 8.25f)) + var_1_49))) : (var_1_72 == ((float) (min ((min (var_1_51 , (var_1_49 + var_1_74))) , var_1_19))))) : (((var_1_11 * var_1_32) != (var_1_108 * var_1_43)) ? (var_1_72 == ((float) (0.375f - (max (var_1_49 , 10000.5f))))) : (var_1_72 == ((float) var_1_51))))) && (var_1_84 ? (var_1_75 == ((unsigned short int) var_1_30)) : (((var_1_56 - (var_1_57 + var_1_94)) > (~ var_1_10)) ? (var_1_75 == ((unsigned short int) 4)) : (var_1_75 == ((unsigned short int) (var_1_43 + (max ((var_1_11 - var_1_94) , var_1_73)))))))) && (((var_1_37 - (var_1_13 + var_1_43)) >= ((max (var_1_28 , var_1_33)) ^ (var_1_26 ^ var_1_104))) ? ((var_1_36 > (var_1_30 + (var_1_13 ^ var_1_36))) ? (var_1_76 == ((unsigned short int) (min (var_1_42 , var_1_12)))) : (var_1_76 == ((unsigned short int) (var_1_37 - var_1_42)))) : (var_1_76 == ((unsigned short int) (var_1_37 - (min (var_1_55 , var_1_77))))))) && (((var_1_73 / (max (var_1_3 , var_1_79))) > (max (var_1_76 , var_1_55))) ? (var_1_78 == ((float) (var_1_18 - var_1_48))) : (var_1_78 == ((float) (((var_1_80 + var_1_81) + var_1_51) + (var_1_61 + (min (63.8f , var_1_74)))))))) && ((var_1_94 > last_1_var_1_82) ? ((var_1_99 < var_1_36) ? (var_1_82 == ((unsigned char) (8 + var_1_43))) : 1) : (var_1_82 == ((unsigned char) (min ((var_1_39 - (max (var_1_73 , 1))) , (var_1_57 + var_1_55))))))) && (var_1_84 == ((unsigned char) (! var_1_85)))) && ((last_1_var_1_67 >= (last_1_var_1_67 + last_1_var_1_16)) ? (var_1_86 == ((unsigned long int) ((max (var_1_87 , (var_1_88 - var_1_44))) - var_1_42))) : (var_1_86 == ((unsigned long int) (min (last_1_var_1_38 , var_1_13)))))) && (((var_1_88 - var_1_55) >= var_1_39) ? (var_1_89 == ((signed short int) ((var_1_99 + var_1_39) + (var_1_86 - var_1_55)))) : ((var_1_84 || var_1_100) ? (var_1_89 == ((signed short int) (max ((var_1_56 + var_1_44) , var_1_57)))) : 1))) && (((var_1_77 / (var_1_56 + var_1_73)) < var_1_30) ? ((((min (9.6f , var_1_46)) - var_1_74) != last_1_var_1_115) ? (var_1_90 == ((unsigned char) (var_1_91 || var_1_92))) : (var_1_90 == ((unsigned char) (last_1_var_1_100 || var_1_85)))) : ((var_1_56 >= var_1_12) ? (var_1_90 == ((unsigned char) (! var_1_93))) : ((last_1_var_1_100 && (! (var_1_48 > var_1_50))) ? (((- last_1_var_1_112) != (last_1_var_1_63 & last_1_var_1_29)) ? (var_1_90 == ((unsigned char) 0)) : ((var_1_91 || (var_1_21 < (1u * 256u))) ? (var_1_90 == ((unsigned char) (! 1))) : (var_1_90 == ((unsigned char) (! var_1_91))))) : (var_1_90 == ((unsigned char) (! (var_1_92 || var_1_91)))))))) && (((var_1_7 / var_1_79) < ((var_1_70 + var_1_99) << var_1_21)) ? ((var_1_18 < (min ((var_1_107 * var_1_47) , var_1_16))) ? (var_1_94 == ((unsigned char) ((var_1_97 + var_1_98) - var_1_55))) : (var_1_100 ? (var_1_94 == ((unsigned char) ((var_1_97 - var_1_55) + (var_1_98 - 10)))) : (var_1_94 == ((unsigned char) (min (((var_1_97 + var_1_98) - 32) , var_1_44)))))) : (var_1_94 == ((unsigned char) var_1_39)))) && ((last_1_var_1_114 && last_1_var_1_84) ? (var_1_99 == ((unsigned long int) (var_1_87 - (last_1_var_1_110 + last_1_var_1_75)))) : (var_1_99 == ((unsigned long int) var_1_33)))) && (var_1_100 == ((unsigned char) var_1_93))) && (var_1_101 == ((float) var_1_50))) && (var_1_91 ? (var_1_102 == ((signed long int) var_1_15)) : (var_1_102 == ((signed long int) 128)))) && (var_1_103 == ((signed char) var_1_55))) && (var_1_91 ? (var_1_104 == ((signed long int) var_1_24)) : (var_1_104 == ((signed long int) var_1_97)))) && (var_1_105 == ((unsigned short int) var_1_106))) && (var_1_85 ? (var_1_107 == ((float) var_1_49)) : (var_1_107 == ((float) var_1_74)))) && (var_1_108 == ((unsigned long int) last_1_var_1_54))) && (var_1_91 ? (var_1_109 == ((signed short int) var_1_94)) : (var_1_109 == ((signed short int) var_1_24)))) && (var_1_110 == ((signed long int) var_1_13))) && (var_1_111 == ((signed short int) var_1_108))) && (var_1_112 == ((unsigned short int) var_1_62))) && (var_1_113 == ((signed char) var_1_73))) && (var_1_100 ? (var_1_114 == ((unsigned char) var_1_93)) : (var_1_114 == ((unsigned char) var_1_92)))) && (var_1_115 == ((double) (var_1_80 + var_1_51)))) && (var_1_116 == ((signed short int) (16 + var_1_70)))) && ((! var_1_85) ? ((var_1_33 <= var_1_73) ? (var_1_117 == ((unsigned char) var_1_39)) : 1) : 1)
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
