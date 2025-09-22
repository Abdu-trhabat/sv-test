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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Amount250.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 128;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 4;
signed long int var_1_6 = -128;
signed long int var_1_7 = -16;
unsigned short int var_1_9 = 25937;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 16;
unsigned short int var_1_12 = 8;
unsigned char var_1_13 = 0;
double var_1_15 = 128.875;
double var_1_16 = 10.8;
unsigned short int var_1_18 = 10;
float var_1_19 = 499.5;
float var_1_20 = 15.475;
signed char var_1_21 = -5;
float var_1_22 = 7.45;
unsigned char var_1_23 = 2;
unsigned char var_1_24 = 2;
float var_1_25 = 9.5;
unsigned char var_1_26 = 1;
float var_1_27 = 0.8089999999999999;
float var_1_28 = 1.941;
float var_1_29 = 0.19999999999999996;
float var_1_30 = 255.4;
float var_1_31 = 63.5;
float var_1_32 = 0.0;
float var_1_33 = 0.19999999999999996;
float var_1_34 = 63.2;
float var_1_35 = 16.5;
signed short int var_1_36 = 1;
unsigned char var_1_37 = 0;
signed short int var_1_38 = -5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
signed short int var_1_43 = 16;
signed short int var_1_44 = 100;
signed short int var_1_45 = 10000;
signed short int var_1_46 = 32;
unsigned char var_1_47 = 1;
signed long int var_1_48 = 8;
unsigned short int var_1_49 = 16;
unsigned short int var_1_50 = 10000;
unsigned short int var_1_51 = 10000;
unsigned long int var_1_52 = 16;
unsigned long int var_1_53 = 256;
unsigned long int var_1_54 = 8;
double var_1_56 = 4.125;
signed short int var_1_58 = -8;
signed short int var_1_59 = 16;
unsigned short int var_1_60 = 128;
unsigned short int var_1_62 = 49802;
unsigned char var_1_63 = 128;
unsigned char var_1_64 = 8;
float var_1_65 = -0.2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 128;
signed short int last_1_var_1_36 = 1;
unsigned char last_1_var_1_39 = 0;
unsigned long int last_1_var_1_52 = 16;
unsigned long int last_1_var_1_54 = 8;
signed short int last_1_var_1_58 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch163Amount250
	signed long int stepLocal_5 = 1000000;
	unsigned short int stepLocal_4 = var_1_5;
	if (var_1_18 <= stepLocal_4) {
		var_1_19 = (abs (var_1_20));
	} else {
		if (((abs (var_1_21)) + var_1_11) < stepLocal_5) {
			if (! ((var_1_20 * 1.6f) < var_1_15)) {
				if (last_1_var_1_39) {
					var_1_19 = var_1_20;
				} else {
					var_1_19 = 15.6f;
				}
			} else {
				var_1_19 = var_1_22;
			}
		} else {
			var_1_19 = 3.25f;
		}
	}


	// From: Req11Batch163Amount250
	signed long int stepLocal_15 = ~ var_1_24;
	unsigned long int stepLocal_14 = last_1_var_1_54;
	if (stepLocal_15 > (var_1_45 * last_1_var_1_52)) {
		if (stepLocal_14 == ((10 - last_1_var_1_1) * var_1_45)) {
			var_1_48 = (var_1_10 + var_1_5);
		} else {
			var_1_48 = var_1_38;
		}
	} else {
		var_1_48 = var_1_12;
	}


	// From: Req13Batch163Amount250
	if (! (var_1_51 > 1)) {
		var_1_52 = (8u + var_1_48);
	} else {
		if (! var_1_40) {
			var_1_52 = (var_1_44 + var_1_53);
		}
	}


	// From: Req16Batch163Amount250
	signed long int stepLocal_18 = var_1_24 - (max (var_1_9 , var_1_51));
	if (stepLocal_18 != var_1_52) {
		var_1_58 = (min ((abs (max (-100 , var_1_24))) , var_1_44));
	} else {
		var_1_58 = ((last_1_var_1_58 + var_1_24) - var_1_59);
	}


	// From: Req10Batch163Amount250
	unsigned char stepLocal_13 = (var_1_10 / var_1_24) <= last_1_var_1_36;
	if ((! (var_1_21 <= var_1_9)) || stepLocal_13) {
		var_1_47 = ((var_1_40 || (last_1_var_1_39 && var_1_41)) || (last_1_var_1_39 && (! var_1_42)));
	}


	// From: Req4Batch163Amount250
	signed long int stepLocal_8 = 2 << var_1_10;
	unsigned short int stepLocal_7 = var_1_12;
	if (var_1_21 < stepLocal_8) {
		if (var_1_10 >= stepLocal_7) {
			var_1_25 = (2.5f + var_1_27);
		}
	} else {
		var_1_25 = (abs (var_1_22));
	}


	// From: Req15Batch163Amount250
	if (var_1_16 >= var_1_15) {
		var_1_56 = (min ((min ((min (var_1_33 , var_1_22)) , var_1_35)) , var_1_27));
	}


	// From: Req18Batch163Amount250
	unsigned char stepLocal_21 = var_1_47;
	if (((var_1_12 << var_1_5) <= var_1_52) || stepLocal_21) {
		var_1_65 = var_1_27;
	}


	// From: Req6Batch163Amount250
	if (var_1_26 || var_1_4) {
		if ((~ var_1_48) <= -2) {
			var_1_31 = ((min ((var_1_32 - var_1_33) , var_1_30)) - (max (9.999999999925E10f , (var_1_34 + var_1_35))));
		} else {
			if (var_1_19 > var_1_34) {
				var_1_31 = (var_1_34 + (var_1_35 - var_1_33));
			} else {
				var_1_31 = var_1_32;
			}
		}
	}


	// From: Req3Batch163Amount250
	signed long int stepLocal_6 = (var_1_48 / var_1_24) ^ var_1_10;
	if (var_1_47) {
		if (stepLocal_6 >= var_1_52) {
			var_1_23 = 200;
		}
	}


	// From: Req5Batch163Amount250
	if (var_1_21 > var_1_10) {
		var_1_28 = (max (var_1_20 , (var_1_29 - var_1_30)));
	} else {
		if (var_1_13 || var_1_26) {
			var_1_28 = (var_1_29 - var_1_30);
		} else {
			if (var_1_29 <= var_1_56) {
				var_1_28 = (var_1_27 + 0.8f);
			}
		}
	}


	// From: Req17Batch163Amount250
	signed short int stepLocal_20 = var_1_58;
	unsigned long int stepLocal_19 = var_1_52 & var_1_48;
	if (var_1_19 < var_1_31) {
		if (var_1_52 >= stepLocal_19) {
			var_1_60 = (var_1_62 - var_1_12);
		} else {
			if (((var_1_63 - var_1_64) / var_1_24) <= stepLocal_20) {
				if ((128.15f - var_1_35) > var_1_56) {
					var_1_60 = (var_1_62 - 128);
				} else {
					if (var_1_47) {
						if (var_1_19 > ((var_1_27 + var_1_56) * var_1_20)) {
							var_1_60 = var_1_5;
						}
					}
				}
			} else {
				var_1_60 = var_1_18;
			}
		}
	} else {
		var_1_60 = var_1_51;
	}


	// From: Req7Batch163Amount250
	if (var_1_47) {
		var_1_36 = (var_1_24 - (abs (var_1_21)));
	} else {
		var_1_36 = ((var_1_21 + var_1_24) + (min (var_1_23 , (max (var_1_10 , var_1_38)))));
	}


	// From: Req8Batch163Amount250
	unsigned short int stepLocal_10 = var_1_60;
	unsigned char stepLocal_9 = var_1_37;
	if (stepLocal_9 || var_1_4) {
		if (var_1_38 >= stepLocal_10) {
			var_1_39 = (var_1_40 || (var_1_41 || (! var_1_42)));
		} else {
			var_1_39 = (! var_1_42);
		}
	}


	// From: Req12Batch163Amount250
	if ((max (var_1_29 , var_1_30)) <= var_1_15) {
		if (var_1_36 < var_1_10) {
			var_1_49 = (abs (var_1_9));
		} else {
			var_1_49 = (abs (var_1_5));
		}
	} else {
		if (var_1_38 >= var_1_36) {
			var_1_49 = (((var_1_50 + var_1_51) - var_1_46) + var_1_9);
		}
	}


	// From: Req9Batch163Amount250
	unsigned char stepLocal_12 = var_1_40;
	unsigned char stepLocal_11 = var_1_35 <= var_1_56;
	if (var_1_31 > var_1_30) {
		if ((var_1_22 > (var_1_56 * var_1_32)) || stepLocal_12) {
			var_1_43 = ((max ((var_1_24 - var_1_60) , (var_1_10 - var_1_44))) + var_1_38);
		} else {
			var_1_43 = (max (var_1_38 , var_1_44));
		}
	} else {
		if (stepLocal_11 && var_1_39) {
			if (! var_1_39) {
				var_1_43 = (abs (min (var_1_45 , var_1_38)));
			} else {
				var_1_43 = (var_1_10 - (var_1_60 + (var_1_24 + var_1_46)));
			}
		} else {
			var_1_43 = ((max (var_1_44 , var_1_60)) + var_1_24);
		}
	}


	// From: Req1Batch163Amount250
	unsigned short int stepLocal_3 = var_1_60;
	signed long int stepLocal_2 = var_1_7;
	signed long int stepLocal_1 = max (var_1_5 , var_1_49);
	unsigned short int stepLocal_0 = var_1_5;
	if (stepLocal_3 >= (- (var_1_49 + 8))) {
		if (var_1_39) {
			var_1_1 = var_1_5;
		} else {
			if (stepLocal_1 < ((max (var_1_60 , var_1_6)) * var_1_7)) {
				if (stepLocal_0 >= var_1_49) {
					if (var_1_6 > stepLocal_2) {
						var_1_1 = ((max ((var_1_9 - var_1_10) , var_1_11)) + var_1_12);
					}
				}
			} else {
				if (var_1_47) {
					if ((min ((var_1_56 / var_1_15) , var_1_56)) >= var_1_56) {
						if (var_1_56 < (var_1_15 * var_1_56)) {
							var_1_1 = (37147 - var_1_18);
						} else {
							var_1_1 = var_1_18;
						}
					}
				} else {
					var_1_1 = var_1_9;
				}
			}
		}
	} else {
		var_1_1 = var_1_18;
	}


	// From: Req14Batch163Amount250
	signed long int stepLocal_17 = - var_1_9;
	unsigned char stepLocal_16 = var_1_47;
	if ((var_1_39 || var_1_47) && stepLocal_16) {
		var_1_54 = (var_1_1 + var_1_49);
	} else {
		if (var_1_11 >= stepLocal_17) {
			var_1_54 = (abs (var_1_48));
		} else {
			if (var_1_47) {
				var_1_54 = var_1_5;
			} else {
				var_1_54 = (max (var_1_11 , (min (var_1_48 , var_1_18))));
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -127);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 255);
	assume_abort_if_not(var_1_24 != 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 4611686.018427383000e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= -16383);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 16383);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -32766);
	assume_abort_if_not(var_1_45 <= 32766);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 8191);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16384);
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 8192);
	assume_abort_if_not(var_1_51 <= 16383);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 32767);
	assume_abort_if_not(var_1_62 <= 65534);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 127);
	assume_abort_if_not(var_1_63 <= 255);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_58 = var_1_58;
}

int property(void) {
	return ((((((((((((((((((var_1_60 >= (- (var_1_49 + 8))) ? (var_1_39 ? (var_1_1 == ((unsigned short int) var_1_5)) : (((max (var_1_5 , var_1_49)) < ((max (var_1_60 , var_1_6)) * var_1_7)) ? ((var_1_5 >= var_1_49) ? ((var_1_6 > var_1_7) ? (var_1_1 == ((unsigned short int) ((max ((var_1_9 - var_1_10) , var_1_11)) + var_1_12))) : 1) : 1) : (var_1_47 ? (((min ((var_1_56 / var_1_15) , var_1_56)) >= var_1_56) ? ((var_1_56 < (var_1_15 * var_1_56)) ? (var_1_1 == ((unsigned short int) (37147 - var_1_18))) : (var_1_1 == ((unsigned short int) var_1_18))) : 1) : (var_1_1 == ((unsigned short int) var_1_9))))) : (var_1_1 == ((unsigned short int) var_1_18))) && ((var_1_18 <= var_1_5) ? (var_1_19 == ((float) (abs (var_1_20)))) : ((((abs (var_1_21)) + var_1_11) < 1000000) ? ((! ((var_1_20 * 1.6f) < var_1_15)) ? (last_1_var_1_39 ? (var_1_19 == ((float) var_1_20)) : (var_1_19 == ((float) 15.6f))) : (var_1_19 == ((float) var_1_22))) : (var_1_19 == ((float) 3.25f))))) && (var_1_47 ? ((((var_1_48 / var_1_24) ^ var_1_10) >= var_1_52) ? (var_1_23 == ((unsigned char) 200)) : 1) : 1)) && ((var_1_21 < (2 << var_1_10)) ? ((var_1_10 >= var_1_12) ? (var_1_25 == ((float) (2.5f + var_1_27))) : 1) : (var_1_25 == ((float) (abs (var_1_22)))))) && ((var_1_21 > var_1_10) ? (var_1_28 == ((float) (max (var_1_20 , (var_1_29 - var_1_30))))) : ((var_1_13 || var_1_26) ? (var_1_28 == ((float) (var_1_29 - var_1_30))) : ((var_1_29 <= var_1_56) ? (var_1_28 == ((float) (var_1_27 + 0.8f))) : 1)))) && ((var_1_26 || var_1_4) ? (((~ var_1_48) <= -2) ? (var_1_31 == ((float) ((min ((var_1_32 - var_1_33) , var_1_30)) - (max (9.999999999925E10f , (var_1_34 + var_1_35)))))) : ((var_1_19 > var_1_34) ? (var_1_31 == ((float) (var_1_34 + (var_1_35 - var_1_33)))) : (var_1_31 == ((float) var_1_32)))) : 1)) && (var_1_47 ? (var_1_36 == ((signed short int) (var_1_24 - (abs (var_1_21))))) : (var_1_36 == ((signed short int) ((var_1_21 + var_1_24) + (min (var_1_23 , (max (var_1_10 , var_1_38))))))))) && ((var_1_37 || var_1_4) ? ((var_1_38 >= var_1_60) ? (var_1_39 == ((unsigned char) (var_1_40 || (var_1_41 || (! var_1_42))))) : (var_1_39 == ((unsigned char) (! var_1_42)))) : 1)) && ((var_1_31 > var_1_30) ? (((var_1_22 > (var_1_56 * var_1_32)) || var_1_40) ? (var_1_43 == ((signed short int) ((max ((var_1_24 - var_1_60) , (var_1_10 - var_1_44))) + var_1_38))) : (var_1_43 == ((signed short int) (max (var_1_38 , var_1_44))))) : (((var_1_35 <= var_1_56) && var_1_39) ? ((! var_1_39) ? (var_1_43 == ((signed short int) (abs (min (var_1_45 , var_1_38))))) : (var_1_43 == ((signed short int) (var_1_10 - (var_1_60 + (var_1_24 + var_1_46)))))) : (var_1_43 == ((signed short int) ((max (var_1_44 , var_1_60)) + var_1_24)))))) && (((! (var_1_21 <= var_1_9)) || ((var_1_10 / var_1_24) <= last_1_var_1_36)) ? (var_1_47 == ((unsigned char) ((var_1_40 || (last_1_var_1_39 && var_1_41)) || (last_1_var_1_39 && (! var_1_42))))) : 1)) && (((~ var_1_24) > (var_1_45 * last_1_var_1_52)) ? ((last_1_var_1_54 == ((10 - last_1_var_1_1) * var_1_45)) ? (var_1_48 == ((signed long int) (var_1_10 + var_1_5))) : (var_1_48 == ((signed long int) var_1_38))) : (var_1_48 == ((signed long int) var_1_12)))) && (((max (var_1_29 , var_1_30)) <= var_1_15) ? ((var_1_36 < var_1_10) ? (var_1_49 == ((unsigned short int) (abs (var_1_9)))) : (var_1_49 == ((unsigned short int) (abs (var_1_5))))) : ((var_1_38 >= var_1_36) ? (var_1_49 == ((unsigned short int) (((var_1_50 + var_1_51) - var_1_46) + var_1_9))) : 1))) && ((! (var_1_51 > 1)) ? (var_1_52 == ((unsigned long int) (8u + var_1_48))) : ((! var_1_40) ? (var_1_52 == ((unsigned long int) (var_1_44 + var_1_53))) : 1))) && (((var_1_39 || var_1_47) && var_1_47) ? (var_1_54 == ((unsigned long int) (var_1_1 + var_1_49))) : ((var_1_11 >= (- var_1_9)) ? (var_1_54 == ((unsigned long int) (abs (var_1_48)))) : (var_1_47 ? (var_1_54 == ((unsigned long int) var_1_5)) : (var_1_54 == ((unsigned long int) (max (var_1_11 , (min (var_1_48 , var_1_18)))))))))) && ((var_1_16 >= var_1_15) ? (var_1_56 == ((double) (min ((min ((min (var_1_33 , var_1_22)) , var_1_35)) , var_1_27)))) : 1)) && (((var_1_24 - (max (var_1_9 , var_1_51))) != var_1_52) ? (var_1_58 == ((signed short int) (min ((abs (max (-100 , var_1_24))) , var_1_44)))) : (var_1_58 == ((signed short int) ((last_1_var_1_58 + var_1_24) - var_1_59))))) && ((var_1_19 < var_1_31) ? ((var_1_52 >= (var_1_52 & var_1_48)) ? (var_1_60 == ((unsigned short int) (var_1_62 - var_1_12))) : ((((var_1_63 - var_1_64) / var_1_24) <= var_1_58) ? (((128.15f - var_1_35) > var_1_56) ? (var_1_60 == ((unsigned short int) (var_1_62 - 128))) : (var_1_47 ? ((var_1_19 > ((var_1_27 + var_1_56) * var_1_20)) ? (var_1_60 == ((unsigned short int) var_1_5)) : 1) : 1)) : (var_1_60 == ((unsigned short int) var_1_18)))) : (var_1_60 == ((unsigned short int) var_1_51)))) && ((((var_1_12 << var_1_5) <= var_1_52) || var_1_47) ? (var_1_65 == ((float) var_1_27)) : 1)
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
