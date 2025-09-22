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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
float var_1_7 = 999.5;
float var_1_8 = 0.75;
float var_1_9 = 1000000000000.5;
float var_1_10 = 1.4;
unsigned char var_1_11 = 0;
float var_1_12 = 15.8;
float var_1_13 = 63.3;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 2886849928;
unsigned long int var_1_20 = 0;
unsigned long int var_1_22 = 10;
unsigned short int var_1_23 = 10;
unsigned short int var_1_24 = 5;
unsigned short int var_1_25 = 100;
unsigned short int var_1_26 = 64;
unsigned short int var_1_27 = 64;
unsigned short int var_1_28 = 256;
unsigned short int var_1_29 = 10;
unsigned short int var_1_30 = 16;
unsigned short int var_1_31 = 2;
unsigned short int var_1_32 = 64;
unsigned short int var_1_34 = 32615;
unsigned short int var_1_35 = 43335;
unsigned short int var_1_36 = 10000;
unsigned short int var_1_37 = 128;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float var_1_40 = 127.1;
float var_1_41 = 64.8;
float var_1_42 = 31.5;
float var_1_43 = 0.75;
unsigned short int var_1_44 = 64;
signed char var_1_45 = 8;
signed char var_1_46 = 32;
unsigned short int var_1_48 = 61065;
unsigned short int var_1_49 = 23500;
unsigned short int var_1_50 = 64;
unsigned char var_1_51 = 5;
unsigned char var_1_52 = 128;
unsigned char var_1_53 = 32;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
unsigned long int var_1_57 = 10000000;
unsigned long int var_1_58 = 3758197973;
unsigned long int var_1_59 = 0;
float var_1_60 = 15.125;
signed short int var_1_61 = 8;
signed short int var_1_62 = 4;
float var_1_63 = 255.6;
float var_1_64 = 3.05;
float var_1_65 = 4.875;
unsigned char var_1_66 = 1;
unsigned char var_1_68 = 16;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 64;
unsigned char var_1_71 = 64;
signed short int var_1_72 = -16;
unsigned char var_1_73 = 8;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 2;
unsigned char var_1_77 = 200;
unsigned short int var_1_78 = 10;
unsigned short int var_1_79 = 59171;
signed short int var_1_80 = 5;
signed long int var_1_82 = 8;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
signed short int var_1_86 = -64;
double var_1_87 = 15.91;
signed long int var_1_88 = 2;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 32;
unsigned char var_1_91 = 32;
unsigned long int var_1_92 = 256;
unsigned char var_1_93 = 1;
signed short int var_1_94 = -8;
signed short int var_1_95 = 25352;
unsigned char var_1_96 = 1;
unsigned long int var_1_97 = 32;
unsigned long int var_1_98 = 1713327711;
float var_1_99 = 4.3;
unsigned char var_1_101 = 5;
float var_1_102 = 1.25;
unsigned char var_1_103 = 8;
double var_1_104 = 0.1;
unsigned char var_1_105 = 0;
unsigned char var_1_106 = 1;
unsigned char var_1_107 = 64;
signed short int var_1_108 = 2;
signed short int var_1_109 = 2;
double var_1_110 = 9.5;
signed long int var_1_111 = -100000000;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_32 = 64;
unsigned short int last_1_var_1_44 = 64;
unsigned char last_1_var_1_55 = 1;
unsigned char last_1_var_1_66 = 1;
unsigned char last_1_var_1_68 = 16;
unsigned char last_1_var_1_71 = 64;
signed short int last_1_var_1_72 = -16;
unsigned short int last_1_var_1_78 = 10;
signed short int last_1_var_1_80 = 5;
signed long int last_1_var_1_82 = 8;
unsigned char last_1_var_1_84 = 1;
double last_1_var_1_87 = 15.91;
unsigned char last_1_var_1_89 = 1;
unsigned char last_1_var_1_90 = 32;
unsigned long int last_1_var_1_97 = 32;
signed long int last_1_var_1_111 = -100000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req32Batch103Amount500
	if (last_1_var_1_87 < var_1_64) {
		if (var_1_49 < var_1_54) {
			var_1_97 = (var_1_58 - (var_1_98 - (min (var_1_53 , last_1_var_1_80))));
		}
	} else {
		var_1_97 = (min (last_1_var_1_72 , var_1_53));
	}


	// From: Req16Batch103Amount500
	if (var_1_39 && last_1_var_1_55) {
		if (last_1_var_1_44 <= (- (var_1_35 - var_1_53))) {
			if ((min (var_1_61 , last_1_var_1_71)) >= (last_1_var_1_82 / var_1_34)) {
				var_1_72 = (last_1_var_1_68 - (max (var_1_37 , 32)));
			}
		} else {
			var_1_72 = (last_1_var_1_71 - var_1_52);
		}
	}


	// From: Req18Batch103Amount500
	unsigned char stepLocal_20 = last_1_var_1_55 && last_1_var_1_84;
	if (stepLocal_20 && var_1_39) {
		var_1_78 = (min (((var_1_79 - var_1_75) - var_1_28) , var_1_37));
	} else {
		var_1_78 = ((min ((min (last_1_var_1_90 , last_1_var_1_71)) , var_1_27)) + var_1_69);
	}


	// From: Req26Batch103Amount500
	if (64 < last_1_var_1_97) {
		var_1_89 = (last_1_var_1_89 && var_1_18);
	}


	// From: Req37Batch103Amount500
	if (var_1_89) {
		var_1_104 = var_1_43;
	} else {
		var_1_104 = var_1_8;
	}


	// From: Req25Batch103Amount500
	signed long int stepLocal_23 = (var_1_69 ^ var_1_46) + last_1_var_1_78;
	if (stepLocal_23 < ((var_1_45 | last_1_var_1_32) / var_1_61)) {
		var_1_88 = ((max (var_1_36 , var_1_52)) - var_1_48);
	} else {
		var_1_88 = (abs (last_1_var_1_111 - (max (var_1_24 , var_1_49))));
	}


	// From: Req41Batch103Amount500
	if (var_1_85) {
		var_1_108 = var_1_75;
	} else {
		var_1_108 = var_1_88;
	}


	// From: Req8Batch103Amount500
	if (var_1_16) {
		var_1_51 = var_1_46;
	} else {
		var_1_51 = (var_1_52 - (min ((max (var_1_46 , var_1_53)) , var_1_54)));
	}


	// From: Req9Batch103Amount500
	var_1_55 = (! var_1_18);


	// From: Req12Batch103Amount500
	unsigned char stepLocal_13 = var_1_54;
	signed long int stepLocal_12 = var_1_36 >> (var_1_61 - var_1_62);
	if (var_1_45 > stepLocal_13) {
		if (stepLocal_12 >= var_1_26) {
			var_1_60 = ((var_1_63 - var_1_64) + var_1_8);
		} else {
			var_1_60 = var_1_41;
		}
	} else {
		var_1_60 = (var_1_8 + (var_1_9 + var_1_65));
	}


	// From: Req14Batch103Amount500
	var_1_68 = ((var_1_69 + var_1_70) - var_1_61);


	// From: Req21Batch103Amount500
	if (var_1_15) {
		var_1_83 = (! var_1_18);
	} else {
		var_1_83 = (var_1_16 && var_1_18);
	}


	// From: Req34Batch103Amount500
	var_1_101 = var_1_75;


	// From: Req35Batch103Amount500
	var_1_102 = 10.5f;


	// From: Req36Batch103Amount500
	var_1_103 = var_1_70;


	// From: Req40Batch103Amount500
	if (var_1_85) {
		var_1_107 = var_1_69;
	} else {
		var_1_107 = var_1_53;
	}


	// From: Req42Batch103Amount500
	var_1_109 = var_1_52;


	// From: Req28Batch103Amount500
	unsigned char stepLocal_24 = var_1_55;
	if (var_1_8 < var_1_10) {
		if ((var_1_37 > var_1_88) && stepLocal_24) {
			var_1_92 = (var_1_58 - var_1_26);
		}
	}


	// From: Req4Batch103Amount500
	unsigned long int stepLocal_2 = var_1_92;
	unsigned char stepLocal_1 = var_1_16;
	if (stepLocal_2 < var_1_30) {
		if ((var_1_10 < 31.7f) && stepLocal_1) {
			var_1_32 = (var_1_31 + (var_1_34 - var_1_30));
		}
	} else {
		var_1_32 = ((min (54462 , var_1_35)) - (var_1_34 - (var_1_36 - var_1_37)));
	}


	// From: Req3Batch103Amount500
	unsigned long int stepLocal_0 = var_1_92;
	if (stepLocal_0 < (abs (var_1_22))) {
		var_1_23 = (min ((max (var_1_24 , var_1_25)) , var_1_26));
	} else {
		if (var_1_15) {
			var_1_23 = var_1_26;
		} else {
			if (var_1_10 > (var_1_13 / var_1_12)) {
				var_1_23 = (abs (var_1_25));
			} else {
				var_1_23 = ((max (var_1_27 , (var_1_28 + var_1_29))) + ((var_1_30 + 8) + var_1_31));
			}
		}
	}


	// From: Req11Batch103Amount500
	signed long int stepLocal_11 = var_1_25 % (var_1_34 + var_1_52);
	if (stepLocal_11 <= var_1_27) {
		var_1_57 = (min ((var_1_58 - var_1_59) , (min (var_1_46 , var_1_20))));
	} else {
		var_1_57 = (max (((abs (var_1_58)) - var_1_32) , (max (0u , var_1_24))));
	}


	// From: Req2Batch103Amount500
	if ((var_1_60 / (max (var_1_12 , var_1_13))) >= (- var_1_7)) {
		var_1_11 = (var_1_14 && (var_1_15 && var_1_16));
	} else {
		if ((var_1_12 / (abs (var_1_13))) >= var_1_7) {
			var_1_11 = ((var_1_88 > (~ var_1_108)) && var_1_18);
		} else {
			if (var_1_16) {
				var_1_11 = (! var_1_18);
			} else {
				var_1_11 = (((var_1_19 - var_1_20) <= (var_1_57 / var_1_22)) || var_1_15);
			}
		}
	}


	// From: Req31Batch103Amount500
	unsigned long int stepLocal_32 = - var_1_57;
	if (stepLocal_32 == (- (- var_1_92))) {
		var_1_96 = var_1_61;
	}


	// From: Req38Batch103Amount500
	if (var_1_11) {
		var_1_105 = var_1_15;
	}


	// From: Req13Batch103Amount500
	unsigned char stepLocal_15 = var_1_83;
	unsigned char stepLocal_14 = var_1_105;
	if (! (var_1_78 <= var_1_34)) {
		if (last_1_var_1_66 && stepLocal_15) {
			var_1_66 = ((var_1_41 < var_1_8) && ((var_1_15 || var_1_39) && var_1_18));
		} else {
			var_1_66 = (last_1_var_1_66 && var_1_39);
		}
	} else {
		if (stepLocal_14 && var_1_14) {
			var_1_66 = (! (! (var_1_16 && var_1_15)));
		} else {
			if (var_1_105) {
				var_1_66 = (var_1_15 && var_1_16);
			}
		}
	}


	// From: Req27Batch103Amount500
	if (var_1_78 <= (5 << 4)) {
		if (((min (8 , var_1_62)) - var_1_70) <= var_1_28) {
			if (! var_1_66) {
				var_1_90 = (var_1_91 + var_1_61);
			} else {
				var_1_90 = (var_1_52 - var_1_76);
			}
		}
	} else {
		var_1_90 = (min ((var_1_52 - var_1_62) , (max (var_1_54 , 16))));
	}


	// From: Req10Batch103Amount500
	signed long int stepLocal_10 = (max (var_1_31 , var_1_36)) / var_1_52;
	if (var_1_30 > stepLocal_10) {
		if (! var_1_39) {
			var_1_56 = (var_1_105 && var_1_39);
		} else {
			var_1_56 = (var_1_39 || var_1_18);
		}
	} else {
		if (var_1_42 < (min (var_1_41 , var_1_102))) {
			var_1_56 = (var_1_14 || var_1_16);
		} else {
			var_1_56 = var_1_39;
		}
	}


	// From: Req43Batch103Amount500
	if (var_1_56) {
		var_1_110 = var_1_65;
	} else {
		var_1_110 = var_1_8;
	}


	// From: Req22Batch103Amount500
	if (var_1_43 != var_1_110) {
		var_1_84 = (var_1_14 && var_1_18);
	} else {
		var_1_84 = (var_1_85 || (! var_1_14));
	}


	// From: Req39Batch103Amount500
	if (var_1_66) {
		var_1_106 = var_1_52;
	}


	// From: Req29Batch103Amount500
	unsigned long int stepLocal_26 = max (var_1_97 , var_1_61);
	unsigned long int stepLocal_25 = 50u;
	if (var_1_104 <= (9.99999999994E10 / -0.5)) {
		var_1_93 = var_1_85;
	} else {
		if (stepLocal_26 >= var_1_57) {
			if (stepLocal_25 >= var_1_72) {
				var_1_93 = (! ((var_1_89 && var_1_66) && var_1_85));
			}
		} else {
			var_1_93 = (var_1_39 || var_1_15);
		}
	}


	// From: Req44Batch103Amount500
	if (var_1_89) {
		if (var_1_93) {
			var_1_111 = (min (((min (var_1_23 , var_1_30)) + var_1_50) , var_1_34));
		} else {
			if (var_1_23 >= var_1_72) {
				var_1_111 = var_1_70;
			} else {
				var_1_111 = var_1_24;
			}
		}
	}


	// From: Req17Batch103Amount500
	unsigned short int stepLocal_19 = var_1_35;
	unsigned short int stepLocal_18 = var_1_78;
	unsigned long int stepLocal_17 = var_1_22 + var_1_57;
	if (((var_1_111 % var_1_48) << (min (var_1_61 , 4))) == stepLocal_19) {
		var_1_73 = (var_1_52 - var_1_54);
	} else {
		if (stepLocal_18 < var_1_31) {
			if (stepLocal_17 >= var_1_57) {
				var_1_73 = var_1_62;
			} else {
				if (var_1_89) {
					var_1_73 = ((var_1_77 - var_1_76) - var_1_75);
				} else {
					var_1_73 = (var_1_53 + var_1_46);
				}
			}
		} else {
			var_1_73 = (min (var_1_61 , (128 - (abs (var_1_70)))));
		}
	}


	// From: Req5Batch103Amount500
	unsigned char stepLocal_3 = var_1_15;
	if ((var_1_93 && var_1_18) && stepLocal_3) {
		var_1_38 = (var_1_18 || var_1_39);
	} else {
		var_1_38 = ((var_1_29 >= var_1_92) && var_1_39);
	}


	// From: Req7Batch103Amount500
	unsigned char stepLocal_9 = (var_1_45 - var_1_46) > (var_1_26 | var_1_88);
	unsigned short int stepLocal_8 = var_1_28;
	unsigned short int stepLocal_7 = var_1_24;
	unsigned long int stepLocal_6 = var_1_20;
	signed long int stepLocal_5 = (abs (var_1_27)) - var_1_37;
	unsigned long int stepLocal_4 = var_1_22;
	if (stepLocal_7 >= var_1_37) {
		var_1_44 = (var_1_35 - var_1_27);
	} else {
		if (stepLocal_5 == var_1_28) {
			var_1_44 = ((max ((var_1_28 + var_1_31) , var_1_36)) + (max (var_1_37 , var_1_27)));
		} else {
			if (var_1_14) {
				if (var_1_56 && stepLocal_9) {
					if (! var_1_56) {
						var_1_44 = (34870 - var_1_31);
					} else {
						var_1_44 = (max ((var_1_35 - (abs (var_1_46))) , (max (var_1_30 , var_1_34))));
					}
				} else {
					if ((var_1_29 + last_1_var_1_44) >= stepLocal_4) {
						if (stepLocal_6 < (max (var_1_97 , var_1_92))) {
							var_1_44 = (max ((abs (var_1_26)) , 5));
						}
					} else {
						var_1_44 = (min (((max (var_1_35 , var_1_48)) - (var_1_34 - var_1_30)) , var_1_46));
					}
				}
			} else {
				if (last_1_var_1_44 != stepLocal_8) {
					var_1_44 = ((var_1_34 + var_1_49) - (var_1_30 + var_1_29));
				} else {
					var_1_44 = var_1_50;
				}
			}
		}
	}


	// From: Req24Batch103Amount500
	unsigned char stepLocal_22 = var_1_52;
	if (var_1_7 <= (- (var_1_63 - var_1_41))) {
		if ((var_1_104 / var_1_13) >= var_1_110) {
			var_1_87 = ((abs (var_1_41)) - var_1_64);
		}
	} else {
		if ((var_1_35 - var_1_57) <= stepLocal_22) {
			var_1_87 = (min ((abs (99.375)) , var_1_8));
		} else {
			var_1_87 = (abs (max ((abs (var_1_64)) , var_1_42)));
		}
	}


	// From: Req33Batch103Amount500
	unsigned long int stepLocal_36 = var_1_57;
	unsigned long int stepLocal_35 = var_1_59 * var_1_77;
	unsigned char stepLocal_34 = var_1_53;
	unsigned long int stepLocal_33 = var_1_92;
	if ((var_1_54 >> var_1_76) > stepLocal_35) {
		var_1_99 = (max (((var_1_65 + var_1_8) + var_1_63) , (max (var_1_7 , var_1_9))));
	} else {
		if (var_1_93) {
			if (stepLocal_33 >= (- var_1_35)) {
				if (stepLocal_36 < var_1_92) {
					if (var_1_10 > (var_1_13 * (var_1_41 - var_1_63))) {
						if (var_1_38) {
							var_1_99 = (var_1_43 + 7.25f);
						} else {
							if (stepLocal_34 <= var_1_78) {
								var_1_99 = (abs (max (var_1_63 , var_1_65)));
							}
						}
					}
				} else {
					var_1_99 = var_1_64;
				}
			} else {
				var_1_99 = var_1_63;
			}
		} else {
			var_1_99 = var_1_43;
		}
	}


	// From: Req15Batch103Amount500
	unsigned char stepLocal_16 = var_1_24 == var_1_31;
	if (stepLocal_16 && var_1_38) {
		var_1_71 = (abs (var_1_62));
	}


	// From: Req20Batch103Amount500
	if ((var_1_88 < (var_1_92 + var_1_28)) && (var_1_63 == (max (var_1_8 , var_1_87)))) {
		var_1_82 = (var_1_27 + (max ((max (var_1_34 , var_1_69)) , var_1_62)));
	}


	// From: Req23Batch103Amount500
	if (((- var_1_99) * var_1_8) > var_1_42) {
		var_1_86 = (var_1_107 + (max (var_1_46 , var_1_62)));
	}


	// From: Req19Batch103Amount500
	signed long int stepLocal_21 = var_1_73 + var_1_29;
	if (var_1_82 <= stepLocal_21) {
		var_1_80 = (var_1_75 - (var_1_54 + var_1_37));
	} else {
		var_1_80 = (var_1_61 - (min (var_1_70 , (max (var_1_73 , var_1_54)))));
	}


	// From: Req1Batch103Amount500
	if (var_1_80 <= ((var_1_80 + var_1_32) * var_1_111)) {
		if (var_1_84) {
			var_1_1 = (abs (var_1_7));
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = (max (var_1_7 , ((var_1_8 + var_1_9) + var_1_10)));
	}


	// From: Req6Batch103Amount500
	if ((var_1_31 <= var_1_36) && (var_1_80 <= var_1_78)) {
		if ((abs (var_1_24 & var_1_22)) >= var_1_23) {
			var_1_40 = (var_1_41 - var_1_42);
		} else {
			var_1_40 = ((var_1_8 + var_1_9) + (max (var_1_10 , var_1_43)));
		}
	} else {
		if ((var_1_41 != var_1_60) || var_1_15) {
			if (! var_1_11) {
				var_1_40 = (max (var_1_41 , var_1_8));
			}
		} else {
			var_1_40 = (var_1_8 + var_1_9);
		}
	}


	// From: Req30Batch103Amount500
	unsigned char stepLocal_31 = var_1_54;
	unsigned char stepLocal_30 = var_1_56;
	signed short int stepLocal_29 = var_1_80;
	unsigned char stepLocal_28 = var_1_70;
	unsigned char stepLocal_27 = (- var_1_9) > var_1_102;
	if (stepLocal_31 >= var_1_57) {
		if ((var_1_72 / var_1_48) <= stepLocal_29) {
			if ((-8 % var_1_61) > stepLocal_28) {
				if (var_1_102 <= (max (var_1_1 , (var_1_65 + var_1_64)))) {
					if (var_1_85 || stepLocal_30) {
						var_1_94 = var_1_80;
					} else {
						var_1_94 = (((var_1_37 - var_1_76) + (max (var_1_80 , var_1_77))) + ((10000 - var_1_91) - var_1_75));
					}
				} else {
					var_1_94 = (max (var_1_75 , ((var_1_95 - var_1_76) - (var_1_36 + var_1_30))));
				}
			}
		}
	} else {
		if (stepLocal_27 && var_1_105) {
			var_1_94 = (var_1_69 + var_1_31);
		} else {
			var_1_94 = (min (-8 , var_1_52));
		}
	}
}



void updateVariables(void) {
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -230584.3009213691400e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691400e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967295);
	assume_abort_if_not(var_1_22 != 0);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16384);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 8192);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 8191);
	assume_abort_if_not(var_1_36 <= 16383);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 8191);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16384);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 127);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 2147483647);
	assume_abort_if_not(var_1_58 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 2147483647);
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= 8);
	assume_abort_if_not(var_1_61 <= 15);
	var_1_62 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 7);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691400e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 63);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 64);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 4);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 3);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 190);
	assume_abort_if_not(var_1_77 <= 254);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 49150);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 0);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 127);
	var_1_95 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_95 >= 16382);
	assume_abort_if_not(var_1_95 <= 32766);
	var_1_98 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_98 >= 1073741823);
	assume_abort_if_not(var_1_98 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_32 = var_1_32;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_111 = var_1_111;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((var_1_80 <= ((var_1_80 + var_1_32) * var_1_111)) ? (var_1_84 ? (var_1_1 == ((float) (abs (var_1_7)))) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) (max (var_1_7 , ((var_1_8 + var_1_9) + var_1_10)))))) && (((var_1_60 / (max (var_1_12 , var_1_13))) >= (- var_1_7)) ? (var_1_11 == ((unsigned char) (var_1_14 && (var_1_15 && var_1_16)))) : (((var_1_12 / (abs (var_1_13))) >= var_1_7) ? (var_1_11 == ((unsigned char) ((var_1_88 > (~ var_1_108)) && var_1_18))) : (var_1_16 ? (var_1_11 == ((unsigned char) (! var_1_18))) : (var_1_11 == ((unsigned char) (((var_1_19 - var_1_20) <= (var_1_57 / var_1_22)) || var_1_15))))))) && ((var_1_92 < (abs (var_1_22))) ? (var_1_23 == ((unsigned short int) (min ((max (var_1_24 , var_1_25)) , var_1_26)))) : (var_1_15 ? (var_1_23 == ((unsigned short int) var_1_26)) : ((var_1_10 > (var_1_13 / var_1_12)) ? (var_1_23 == ((unsigned short int) (abs (var_1_25)))) : (var_1_23 == ((unsigned short int) ((max (var_1_27 , (var_1_28 + var_1_29))) + ((var_1_30 + 8) + var_1_31)))))))) && ((var_1_92 < var_1_30) ? (((var_1_10 < 31.7f) && var_1_16) ? (var_1_32 == ((unsigned short int) (var_1_31 + (var_1_34 - var_1_30)))) : 1) : (var_1_32 == ((unsigned short int) ((min (54462 , var_1_35)) - (var_1_34 - (var_1_36 - var_1_37))))))) && (((var_1_93 && var_1_18) && var_1_15) ? (var_1_38 == ((unsigned char) (var_1_18 || var_1_39))) : (var_1_38 == ((unsigned char) ((var_1_29 >= var_1_92) && var_1_39))))) && (((var_1_31 <= var_1_36) && (var_1_80 <= var_1_78)) ? (((abs (var_1_24 & var_1_22)) >= var_1_23) ? (var_1_40 == ((float) (var_1_41 - var_1_42))) : (var_1_40 == ((float) ((var_1_8 + var_1_9) + (max (var_1_10 , var_1_43)))))) : (((var_1_41 != var_1_60) || var_1_15) ? ((! var_1_11) ? (var_1_40 == ((float) (max (var_1_41 , var_1_8)))) : 1) : (var_1_40 == ((float) (var_1_8 + var_1_9)))))) && ((var_1_24 >= var_1_37) ? (var_1_44 == ((unsigned short int) (var_1_35 - var_1_27))) : ((((abs (var_1_27)) - var_1_37) == var_1_28) ? (var_1_44 == ((unsigned short int) ((max ((var_1_28 + var_1_31) , var_1_36)) + (max (var_1_37 , var_1_27))))) : (var_1_14 ? ((var_1_56 && ((var_1_45 - var_1_46) > (var_1_26 | var_1_88))) ? ((! var_1_56) ? (var_1_44 == ((unsigned short int) (34870 - var_1_31))) : (var_1_44 == ((unsigned short int) (max ((var_1_35 - (abs (var_1_46))) , (max (var_1_30 , var_1_34))))))) : (((var_1_29 + last_1_var_1_44) >= var_1_22) ? ((var_1_20 < (max (var_1_97 , var_1_92))) ? (var_1_44 == ((unsigned short int) (max ((abs (var_1_26)) , 5)))) : 1) : (var_1_44 == ((unsigned short int) (min (((max (var_1_35 , var_1_48)) - (var_1_34 - var_1_30)) , var_1_46)))))) : ((last_1_var_1_44 != var_1_28) ? (var_1_44 == ((unsigned short int) ((var_1_34 + var_1_49) - (var_1_30 + var_1_29)))) : (var_1_44 == ((unsigned short int) var_1_50))))))) && (var_1_16 ? (var_1_51 == ((unsigned char) var_1_46)) : (var_1_51 == ((unsigned char) (var_1_52 - (min ((max (var_1_46 , var_1_53)) , var_1_54))))))) && (var_1_55 == ((unsigned char) (! var_1_18)))) && ((var_1_30 > ((max (var_1_31 , var_1_36)) / var_1_52)) ? ((! var_1_39) ? (var_1_56 == ((unsigned char) (var_1_105 && var_1_39))) : (var_1_56 == ((unsigned char) (var_1_39 || var_1_18)))) : ((var_1_42 < (min (var_1_41 , var_1_102))) ? (var_1_56 == ((unsigned char) (var_1_14 || var_1_16))) : (var_1_56 == ((unsigned char) var_1_39))))) && (((var_1_25 % (var_1_34 + var_1_52)) <= var_1_27) ? (var_1_57 == ((unsigned long int) (min ((var_1_58 - var_1_59) , (min (var_1_46 , var_1_20)))))) : (var_1_57 == ((unsigned long int) (max (((abs (var_1_58)) - var_1_32) , (max (0u , var_1_24)))))))) && ((var_1_45 > var_1_54) ? (((var_1_36 >> (var_1_61 - var_1_62)) >= var_1_26) ? (var_1_60 == ((float) ((var_1_63 - var_1_64) + var_1_8))) : (var_1_60 == ((float) var_1_41))) : (var_1_60 == ((float) (var_1_8 + (var_1_9 + var_1_65)))))) && ((! (var_1_78 <= var_1_34)) ? ((last_1_var_1_66 && var_1_83) ? (var_1_66 == ((unsigned char) ((var_1_41 < var_1_8) && ((var_1_15 || var_1_39) && var_1_18)))) : (var_1_66 == ((unsigned char) (last_1_var_1_66 && var_1_39)))) : ((var_1_105 && var_1_14) ? (var_1_66 == ((unsigned char) (! (! (var_1_16 && var_1_15))))) : (var_1_105 ? (var_1_66 == ((unsigned char) (var_1_15 && var_1_16))) : 1)))) && (var_1_68 == ((unsigned char) ((var_1_69 + var_1_70) - var_1_61)))) && (((var_1_24 == var_1_31) && var_1_38) ? (var_1_71 == ((unsigned char) (abs (var_1_62)))) : 1)) && ((var_1_39 && last_1_var_1_55) ? ((last_1_var_1_44 <= (- (var_1_35 - var_1_53))) ? (((min (var_1_61 , last_1_var_1_71)) >= (last_1_var_1_82 / var_1_34)) ? (var_1_72 == ((signed short int) (last_1_var_1_68 - (max (var_1_37 , 32))))) : 1) : (var_1_72 == ((signed short int) (last_1_var_1_71 - var_1_52)))) : 1)) && ((((var_1_111 % var_1_48) << (min (var_1_61 , 4))) == var_1_35) ? (var_1_73 == ((unsigned char) (var_1_52 - var_1_54))) : ((var_1_78 < var_1_31) ? (((var_1_22 + var_1_57) >= var_1_57) ? (var_1_73 == ((unsigned char) var_1_62)) : (var_1_89 ? (var_1_73 == ((unsigned char) ((var_1_77 - var_1_76) - var_1_75))) : (var_1_73 == ((unsigned char) (var_1_53 + var_1_46))))) : (var_1_73 == ((unsigned char) (min (var_1_61 , (128 - (abs (var_1_70)))))))))) && (((last_1_var_1_55 && last_1_var_1_84) && var_1_39) ? (var_1_78 == ((unsigned short int) (min (((var_1_79 - var_1_75) - var_1_28) , var_1_37)))) : (var_1_78 == ((unsigned short int) ((min ((min (last_1_var_1_90 , last_1_var_1_71)) , var_1_27)) + var_1_69))))) && ((var_1_82 <= (var_1_73 + var_1_29)) ? (var_1_80 == ((signed short int) (var_1_75 - (var_1_54 + var_1_37)))) : (var_1_80 == ((signed short int) (var_1_61 - (min (var_1_70 , (max (var_1_73 , var_1_54))))))))) && (((var_1_88 < (var_1_92 + var_1_28)) && (var_1_63 == (max (var_1_8 , var_1_87)))) ? (var_1_82 == ((signed long int) (var_1_27 + (max ((max (var_1_34 , var_1_69)) , var_1_62))))) : 1)) && (var_1_15 ? (var_1_83 == ((unsigned char) (! var_1_18))) : (var_1_83 == ((unsigned char) (var_1_16 && var_1_18))))) && ((var_1_43 != var_1_110) ? (var_1_84 == ((unsigned char) (var_1_14 && var_1_18))) : (var_1_84 == ((unsigned char) (var_1_85 || (! var_1_14)))))) && ((((- var_1_99) * var_1_8) > var_1_42) ? (var_1_86 == ((signed short int) (var_1_107 + (max (var_1_46 , var_1_62))))) : 1)) && ((var_1_7 <= (- (var_1_63 - var_1_41))) ? (((var_1_104 / var_1_13) >= var_1_110) ? (var_1_87 == ((double) ((abs (var_1_41)) - var_1_64))) : 1) : (((var_1_35 - var_1_57) <= var_1_52) ? (var_1_87 == ((double) (min ((abs (99.375)) , var_1_8)))) : (var_1_87 == ((double) (abs (max ((abs (var_1_64)) , var_1_42)))))))) && ((((var_1_69 ^ var_1_46) + last_1_var_1_78) < ((var_1_45 | last_1_var_1_32) / var_1_61)) ? (var_1_88 == ((signed long int) ((max (var_1_36 , var_1_52)) - var_1_48))) : (var_1_88 == ((signed long int) (abs (last_1_var_1_111 - (max (var_1_24 , var_1_49)))))))) && ((64 < last_1_var_1_97) ? (var_1_89 == ((unsigned char) (last_1_var_1_89 && var_1_18))) : 1)) && ((var_1_78 <= (5 << 4)) ? ((((min (8 , var_1_62)) - var_1_70) <= var_1_28) ? ((! var_1_66) ? (var_1_90 == ((unsigned char) (var_1_91 + var_1_61))) : (var_1_90 == ((unsigned char) (var_1_52 - var_1_76)))) : 1) : (var_1_90 == ((unsigned char) (min ((var_1_52 - var_1_62) , (max (var_1_54 , 16)))))))) && ((var_1_8 < var_1_10) ? (((var_1_37 > var_1_88) && var_1_55) ? (var_1_92 == ((unsigned long int) (var_1_58 - var_1_26))) : 1) : 1)) && ((var_1_104 <= (9.99999999994E10 / -0.5)) ? (var_1_93 == ((unsigned char) var_1_85)) : (((max (var_1_97 , var_1_61)) >= var_1_57) ? ((50u >= var_1_72) ? (var_1_93 == ((unsigned char) (! ((var_1_89 && var_1_66) && var_1_85)))) : 1) : (var_1_93 == ((unsigned char) (var_1_39 || var_1_15)))))) && ((var_1_54 >= var_1_57) ? (((var_1_72 / var_1_48) <= var_1_80) ? (((-8 % var_1_61) > var_1_70) ? ((var_1_102 <= (max (var_1_1 , (var_1_65 + var_1_64)))) ? ((var_1_85 || var_1_56) ? (var_1_94 == ((signed short int) var_1_80)) : (var_1_94 == ((signed short int) (((var_1_37 - var_1_76) + (max (var_1_80 , var_1_77))) + ((10000 - var_1_91) - var_1_75))))) : (var_1_94 == ((signed short int) (max (var_1_75 , ((var_1_95 - var_1_76) - (var_1_36 + var_1_30))))))) : 1) : 1) : ((((- var_1_9) > var_1_102) && var_1_105) ? (var_1_94 == ((signed short int) (var_1_69 + var_1_31))) : (var_1_94 == ((signed short int) (min (-8 , var_1_52))))))) && (((- var_1_57) == (- (- var_1_92))) ? (var_1_96 == ((unsigned char) var_1_61)) : 1)) && ((last_1_var_1_87 < var_1_64) ? ((var_1_49 < var_1_54) ? (var_1_97 == ((unsigned long int) (var_1_58 - (var_1_98 - (min (var_1_53 , last_1_var_1_80)))))) : 1) : (var_1_97 == ((unsigned long int) (min (last_1_var_1_72 , var_1_53)))))) && (((var_1_54 >> var_1_76) > (var_1_59 * var_1_77)) ? (var_1_99 == ((float) (max (((var_1_65 + var_1_8) + var_1_63) , (max (var_1_7 , var_1_9)))))) : (var_1_93 ? ((var_1_92 >= (- var_1_35)) ? ((var_1_57 < var_1_92) ? ((var_1_10 > (var_1_13 * (var_1_41 - var_1_63))) ? (var_1_38 ? (var_1_99 == ((float) (var_1_43 + 7.25f))) : ((var_1_53 <= var_1_78) ? (var_1_99 == ((float) (abs (max (var_1_63 , var_1_65))))) : 1)) : 1) : (var_1_99 == ((float) var_1_64))) : (var_1_99 == ((float) var_1_63))) : (var_1_99 == ((float) var_1_43))))) && (var_1_101 == ((unsigned char) var_1_75))) && (var_1_102 == ((float) 10.5f))) && (var_1_103 == ((unsigned char) var_1_70))) && (var_1_89 ? (var_1_104 == ((double) var_1_43)) : (var_1_104 == ((double) var_1_8)))) && (var_1_11 ? (var_1_105 == ((unsigned char) var_1_15)) : 1)) && (var_1_66 ? (var_1_106 == ((unsigned char) var_1_52)) : 1)) && (var_1_85 ? (var_1_107 == ((unsigned char) var_1_69)) : (var_1_107 == ((unsigned char) var_1_53)))) && (var_1_85 ? (var_1_108 == ((signed short int) var_1_75)) : (var_1_108 == ((signed short int) var_1_88)))) && (var_1_109 == ((signed short int) var_1_52))) && (var_1_56 ? (var_1_110 == ((double) var_1_65)) : (var_1_110 == ((double) var_1_8)))) && (var_1_89 ? (var_1_93 ? (var_1_111 == ((signed long int) (min (((min (var_1_23 , var_1_30)) + var_1_50) , var_1_34)))) : ((var_1_23 >= var_1_72) ? (var_1_111 == ((signed long int) var_1_70)) : (var_1_111 == ((signed long int) var_1_24)))) : 1)
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
