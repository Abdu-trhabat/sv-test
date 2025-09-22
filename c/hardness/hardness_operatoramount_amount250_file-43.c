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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 1;
float var_1_7 = 127.25;
float var_1_8 = 128.5;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -128;
signed char var_1_15 = 2;
signed char var_1_16 = -100;
signed char var_1_17 = 4;
signed char var_1_18 = -5;
signed char var_1_19 = 10;
signed char var_1_20 = 2;
signed char var_1_21 = 25;
unsigned char var_1_22 = 128;
signed char var_1_23 = 32;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 4;
float var_1_28 = 63.75;
float var_1_29 = 0.0;
float var_1_30 = 10000000000000.625;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 200;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 8;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 2;
unsigned short int var_1_38 = 50;
unsigned short int var_1_39 = 26014;
unsigned short int var_1_40 = 10000;
unsigned short int var_1_41 = 10000;
signed short int var_1_42 = 8;
signed short int var_1_43 = 31564;
double var_1_44 = 25.3;
double var_1_45 = 15.625;
signed short int var_1_46 = 8;
unsigned short int var_1_47 = 5;
float var_1_48 = 1.75;
float var_1_49 = 25.6;
float var_1_50 = 9.75;
float var_1_51 = 8.625;
signed short int var_1_52 = 10;
unsigned short int var_1_53 = 5;
unsigned short int var_1_54 = 37100;
unsigned short int var_1_55 = 58375;
signed char var_1_56 = -1;
unsigned char var_1_57 = 25;
float var_1_58 = 1.5;
signed long int var_1_59 = 8;
float var_1_60 = 3.8;
signed char var_1_61 = -1;
signed char var_1_62 = 100;
signed char var_1_63 = 100;
signed char var_1_64 = 32;
signed char var_1_65 = 16;
signed short int var_1_66 = 5;
signed char var_1_67 = 0;
signed long int var_1_68 = 1761447034;
double var_1_69 = -0.8;
unsigned short int var_1_70 = 2;
unsigned char var_1_71 = 5;
unsigned char var_1_72 = 1;
signed long int var_1_73 = 32;
unsigned short int var_1_74 = 16;
signed long int var_1_75 = 1202421011;
signed long int var_1_76 = 16;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_22 = 128;
unsigned char last_1_var_1_25 = 0;
unsigned char last_1_var_1_31 = 16;
double last_1_var_1_44 = 25.3;
double last_1_var_1_45 = 15.625;
unsigned short int last_1_var_1_47 = 5;
float last_1_var_1_48 = 1.75;
unsigned short int last_1_var_1_53 = 5;
signed long int last_1_var_1_59 = 8;
float last_1_var_1_60 = 3.8;
signed char last_1_var_1_61 = -1;
double last_1_var_1_69 = -0.8;
signed long int last_1_var_1_73 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req22Batch43Amount250
	if ((max (var_1_7 , last_1_var_1_44)) > (max (last_1_var_1_69 , (last_1_var_1_45 * 24.1)))) {
		var_1_59 = ((last_1_var_1_53 + (max (last_1_var_1_31 , 25))) - last_1_var_1_47);
	}


	// From: Req15Batch43Amount250
	signed long int stepLocal_8 = last_1_var_1_59 + (last_1_var_1_22 ^ var_1_5);
	if (var_1_43 != stepLocal_8) {
		var_1_47 = (var_1_32 + var_1_36);
	}


	// From: Req7Batch43Amount250
	if (var_1_8 >= (max (last_1_var_1_48 , var_1_7))) {
		var_1_27 = (var_1_24 + 32u);
	}


	// From: Req9Batch43Amount250
	if (last_1_var_1_44 <= var_1_30) {
		var_1_31 = ((var_1_32 - var_1_33) - (var_1_34 + var_1_35));
	} else {
		var_1_31 = ((var_1_34 + var_1_33) + (var_1_35 + (max (var_1_36 , var_1_37))));
	}


	// From: Req6Batch43Amount250
	unsigned char stepLocal_2 = var_1_16 >= var_1_31;
	if (stepLocal_2 || var_1_13) {
		var_1_25 = (var_1_13 && (! var_1_12));
	} else {
		if (var_1_12) {
			var_1_25 = (var_1_13 && var_1_26);
		}
	}


	// From: Req2Batch43Amount250
	if (((var_1_7 + 100000.5f) - var_1_8) > (last_1_var_1_69 + last_1_var_1_60)) {
		if (var_1_8 > last_1_var_1_69) {
			var_1_6 = (var_1_11 || (last_1_var_1_25 && var_1_12));
		} else {
			if (var_1_8 != last_1_var_1_60) {
				var_1_6 = 1;
			} else {
				var_1_6 = var_1_11;
			}
		}
	} else {
		var_1_6 = var_1_13;
	}


	// From: Req14Batch43Amount250
	var_1_46 = (max (-10000 , -32));


	// From: Req17Batch43Amount250
	if (var_1_26) {
		var_1_52 = (var_1_40 - var_1_32);
	}


	// From: Req19Batch43Amount250
	signed long int stepLocal_11 = (var_1_34 - var_1_39) + var_1_59;
	if (stepLocal_11 <= (var_1_36 - (var_1_32 + 64))) {
		var_1_56 = (-25 + var_1_18);
	} else {
		var_1_56 = (min (var_1_32 , 32));
	}


	// From: Req23Batch43Amount250
	if ((var_1_8 + (5.5f + var_1_7)) <= last_1_var_1_60) {
		var_1_60 = (var_1_29 - 8.125f);
	}


	// From: Req26Batch43Amount250
	var_1_69 = 8.5;


	// From: Req27Batch43Amount250
	var_1_70 = var_1_62;


	// From: Req28Batch43Amount250
	if (var_1_25) {
		var_1_71 = var_1_72;
	} else {
		var_1_71 = var_1_62;
	}


	// From: Req21Batch43Amount250
	if ((var_1_29 - (var_1_7 + var_1_30)) <= var_1_49) {
		if (var_1_60 == (var_1_60 * (var_1_50 * var_1_30))) {
			if (var_1_59 <= -16) {
				var_1_58 = ((abs (max (var_1_30 , var_1_49))) + var_1_50);
			}
		}
	}


	// From: Req18Batch43Amount250
	unsigned long int stepLocal_10 = var_1_39 * 5u;
	if (var_1_49 < 16.25f) {
		var_1_53 = (var_1_54 - 4);
	} else {
		if ((var_1_27 / 100000000) < stepLocal_10) {
			var_1_53 = (min (128 , var_1_35));
		} else {
			var_1_53 = ((min ((max (var_1_54 , 55740)) , var_1_55)) - var_1_47);
		}
	}


	// From: Req1Batch43Amount250
	unsigned char stepLocal_0 = var_1_25;
	if (stepLocal_0 && var_1_6) {
		var_1_1 = (var_1_4 + 5);
	} else {
		var_1_1 = (abs (var_1_5));
	}


	// From: Req20Batch43Amount250
	if (var_1_40 >= var_1_70) {
		var_1_57 = (min (var_1_37 , var_1_5));
	} else {
		if (! var_1_6) {
			var_1_57 = (var_1_32 - var_1_33);
		}
	}


	// From: Req4Batch43Amount250
	signed long int stepLocal_1 = - var_1_53;
	if (stepLocal_1 > (var_1_4 + var_1_71)) {
		var_1_15 = (abs (var_1_16));
	} else {
		var_1_15 = (var_1_17 + (max ((min (var_1_18 , var_1_19)) , (var_1_20 + var_1_21))));
	}


	// From: Req10Batch43Amount250
	if (var_1_35 < (abs (var_1_70))) {
		var_1_38 = ((var_1_39 + (var_1_40 + var_1_41)) - var_1_33);
	}


	// From: Req3Batch43Amount250
	if (var_1_58 < var_1_8) {
		var_1_14 = (var_1_4 - var_1_53);
	}


	// From: Req11Batch43Amount250
	if (var_1_35 > var_1_24) {
		var_1_42 = (var_1_40 - var_1_5);
	} else {
		var_1_42 = (((var_1_43 - var_1_35) - (min (var_1_14 , var_1_4))) - var_1_32);
	}


	// From: Req29Batch43Amount250
	if ((var_1_27 / (var_1_74 + var_1_41)) <= (last_1_var_1_73 ^ 5)) {
		var_1_73 = (min (((var_1_75 - var_1_76) - var_1_35) , var_1_36));
	} else {
		var_1_73 = var_1_57;
	}


	// From: Req12Batch43Amount250
	unsigned char stepLocal_6 = var_1_31;
	if (stepLocal_6 >= ((var_1_35 * var_1_73) % var_1_32)) {
		if (var_1_60 >= var_1_8) {
			var_1_44 = (max (var_1_29 , var_1_30));
		}
	}


	// From: Req5Batch43Amount250
	if (var_1_21 <= ((last_1_var_1_22 * var_1_19) + (var_1_73 / var_1_23))) {
		var_1_22 = (var_1_24 - var_1_4);
	}


	// From: Req24Batch43Amount250
	signed long int stepLocal_14 = var_1_20 / var_1_43;
	signed long int stepLocal_13 = var_1_43 - var_1_1;
	unsigned char stepLocal_12 = var_1_13;
	if (stepLocal_13 > ((max (last_1_var_1_61 , var_1_73)) * var_1_17)) {
		if (stepLocal_12 && (var_1_47 > (128 - 25))) {
			var_1_61 = (abs (var_1_21));
		}
	} else {
		if ((var_1_54 + var_1_36) == stepLocal_14) {
			var_1_61 = (var_1_33 - (max ((var_1_62 - var_1_35) , var_1_37)));
		} else {
			var_1_61 = ((min (var_1_34 , (var_1_62 - var_1_33))) - ((var_1_63 - 4) - (var_1_64 - var_1_65)));
		}
	}


	// From: Req25Batch43Amount250
	signed char stepLocal_17 = var_1_20;
	unsigned char stepLocal_16 = var_1_13 && (4 <= var_1_19);
	signed long int stepLocal_15 = var_1_52 - (var_1_68 - var_1_5);
	if (var_1_26 && stepLocal_16) {
		if (var_1_6) {
			var_1_66 = var_1_42;
		}
	} else {
		if ((var_1_67 - (var_1_62 - var_1_37)) > stepLocal_15) {
			if (stepLocal_17 == ((32 / var_1_62) + var_1_42)) {
				if (var_1_25) {
					var_1_66 = var_1_34;
				}
			}
		}
	}


	// From: Req13Batch43Amount250
	signed long int stepLocal_7 = var_1_24 + var_1_66;
	if (stepLocal_7 != (var_1_4 - var_1_37)) {
		var_1_45 = (max (var_1_30 , var_1_7));
	}


	// From: Req16Batch43Amount250
	signed long int stepLocal_9 = var_1_1 - (max (var_1_34 , var_1_33));
	if (stepLocal_9 <= (var_1_18 + var_1_66)) {
		var_1_48 = (min (var_1_30 , ((max (var_1_49 , var_1_50)) + var_1_51)));
	}


	// From: Req8Batch43Amount250
	unsigned char stepLocal_5 = var_1_24;
	signed long int stepLocal_4 = 256;
	unsigned char stepLocal_3 = var_1_6;
	if (stepLocal_3 && ((var_1_27 ^ var_1_66) <= var_1_5)) {
		if (stepLocal_4 >= var_1_27) {
			var_1_28 = ((var_1_29 - var_1_30) - var_1_7);
		} else {
			if (stepLocal_5 < var_1_27) {
				var_1_28 = var_1_7;
			}
		}
	} else {
		var_1_28 = var_1_7;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -126);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -31);
	assume_abort_if_not(var_1_20 <= 32);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -128);
	assume_abort_if_not(var_1_23 <= 127);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 190);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 8192);
	assume_abort_if_not(var_1_40 <= 16384);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 8192);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= 24574);
	assume_abort_if_not(var_1_43 <= 32766);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 32767);
	assume_abort_if_not(var_1_54 <= 65534);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 32767);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 63);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 94);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= 31);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 31);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -1);
	assume_abort_if_not(var_1_67 <= 127);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= 1073741823);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 254);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 1);
	assume_abort_if_not(var_1_74 <= 32768);
	var_1_75 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_75 >= 1073741822);
	assume_abort_if_not(var_1_75 <= 2147483646);
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
}

int property(void) {
	return (((((((((((((((((((((((((((((var_1_25 && var_1_6) ? (var_1_1 == ((unsigned char) (var_1_4 + 5))) : (var_1_1 == ((unsigned char) (abs (var_1_5))))) && ((((var_1_7 + 100000.5f) - var_1_8) > (last_1_var_1_69 + last_1_var_1_60)) ? ((var_1_8 > last_1_var_1_69) ? (var_1_6 == ((unsigned char) (var_1_11 || (last_1_var_1_25 && var_1_12)))) : ((var_1_8 != last_1_var_1_60) ? (var_1_6 == ((unsigned char) 1)) : (var_1_6 == ((unsigned char) var_1_11)))) : (var_1_6 == ((unsigned char) var_1_13)))) && ((var_1_58 < var_1_8) ? (var_1_14 == ((signed short int) (var_1_4 - var_1_53))) : 1)) && (((- var_1_53) > (var_1_4 + var_1_71)) ? (var_1_15 == ((signed char) (abs (var_1_16)))) : (var_1_15 == ((signed char) (var_1_17 + (max ((min (var_1_18 , var_1_19)) , (var_1_20 + var_1_21)))))))) && ((var_1_21 <= ((last_1_var_1_22 * var_1_19) + (var_1_73 / var_1_23))) ? (var_1_22 == ((unsigned char) (var_1_24 - var_1_4))) : 1)) && (((var_1_16 >= var_1_31) || var_1_13) ? (var_1_25 == ((unsigned char) (var_1_13 && (! var_1_12)))) : (var_1_12 ? (var_1_25 == ((unsigned char) (var_1_13 && var_1_26))) : 1))) && ((var_1_8 >= (max (last_1_var_1_48 , var_1_7))) ? (var_1_27 == ((unsigned long int) (var_1_24 + 32u))) : 1)) && ((var_1_6 && ((var_1_27 ^ var_1_66) <= var_1_5)) ? ((256 >= var_1_27) ? (var_1_28 == ((float) ((var_1_29 - var_1_30) - var_1_7))) : ((var_1_24 < var_1_27) ? (var_1_28 == ((float) var_1_7)) : 1)) : (var_1_28 == ((float) var_1_7)))) && ((last_1_var_1_44 <= var_1_30) ? (var_1_31 == ((unsigned char) ((var_1_32 - var_1_33) - (var_1_34 + var_1_35)))) : (var_1_31 == ((unsigned char) ((var_1_34 + var_1_33) + (var_1_35 + (max (var_1_36 , var_1_37)))))))) && ((var_1_35 < (abs (var_1_70))) ? (var_1_38 == ((unsigned short int) ((var_1_39 + (var_1_40 + var_1_41)) - var_1_33))) : 1)) && ((var_1_35 > var_1_24) ? (var_1_42 == ((signed short int) (var_1_40 - var_1_5))) : (var_1_42 == ((signed short int) (((var_1_43 - var_1_35) - (min (var_1_14 , var_1_4))) - var_1_32))))) && ((var_1_31 >= ((var_1_35 * var_1_73) % var_1_32)) ? ((var_1_60 >= var_1_8) ? (var_1_44 == ((double) (max (var_1_29 , var_1_30)))) : 1) : 1)) && (((var_1_24 + var_1_66) != (var_1_4 - var_1_37)) ? (var_1_45 == ((double) (max (var_1_30 , var_1_7)))) : 1)) && (var_1_46 == ((signed short int) (max (-10000 , -32))))) && ((var_1_43 != (last_1_var_1_59 + (last_1_var_1_22 ^ var_1_5))) ? (var_1_47 == ((unsigned short int) (var_1_32 + var_1_36))) : 1)) && (((var_1_1 - (max (var_1_34 , var_1_33))) <= (var_1_18 + var_1_66)) ? (var_1_48 == ((float) (min (var_1_30 , ((max (var_1_49 , var_1_50)) + var_1_51))))) : 1)) && (var_1_26 ? (var_1_52 == ((signed short int) (var_1_40 - var_1_32))) : 1)) && ((var_1_49 < 16.25f) ? (var_1_53 == ((unsigned short int) (var_1_54 - 4))) : (((var_1_27 / 100000000) < (var_1_39 * 5u)) ? (var_1_53 == ((unsigned short int) (min (128 , var_1_35)))) : (var_1_53 == ((unsigned short int) ((min ((max (var_1_54 , 55740)) , var_1_55)) - var_1_47)))))) && ((((var_1_34 - var_1_39) + var_1_59) <= (var_1_36 - (var_1_32 + 64))) ? (var_1_56 == ((signed char) (-25 + var_1_18))) : (var_1_56 == ((signed char) (min (var_1_32 , 32)))))) && ((var_1_40 >= var_1_70) ? (var_1_57 == ((unsigned char) (min (var_1_37 , var_1_5)))) : ((! var_1_6) ? (var_1_57 == ((unsigned char) (var_1_32 - var_1_33))) : 1))) && (((var_1_29 - (var_1_7 + var_1_30)) <= var_1_49) ? ((var_1_60 == (var_1_60 * (var_1_50 * var_1_30))) ? ((var_1_59 <= -16) ? (var_1_58 == ((float) ((abs (max (var_1_30 , var_1_49))) + var_1_50))) : 1) : 1) : 1)) && (((max (var_1_7 , last_1_var_1_44)) > (max (last_1_var_1_69 , (last_1_var_1_45 * 24.1)))) ? (var_1_59 == ((signed long int) ((last_1_var_1_53 + (max (last_1_var_1_31 , 25))) - last_1_var_1_47))) : 1)) && (((var_1_8 + (5.5f + var_1_7)) <= last_1_var_1_60) ? (var_1_60 == ((float) (var_1_29 - 8.125f))) : 1)) && (((var_1_43 - var_1_1) > ((max (last_1_var_1_61 , var_1_73)) * var_1_17)) ? ((var_1_13 && (var_1_47 > (128 - 25))) ? (var_1_61 == ((signed char) (abs (var_1_21)))) : 1) : (((var_1_54 + var_1_36) == (var_1_20 / var_1_43)) ? (var_1_61 == ((signed char) (var_1_33 - (max ((var_1_62 - var_1_35) , var_1_37))))) : (var_1_61 == ((signed char) ((min (var_1_34 , (var_1_62 - var_1_33))) - ((var_1_63 - 4) - (var_1_64 - var_1_65)))))))) && ((var_1_26 && (var_1_13 && (4 <= var_1_19))) ? (var_1_6 ? (var_1_66 == ((signed short int) var_1_42)) : 1) : (((var_1_67 - (var_1_62 - var_1_37)) > (var_1_52 - (var_1_68 - var_1_5))) ? ((var_1_20 == ((32 / var_1_62) + var_1_42)) ? (var_1_25 ? (var_1_66 == ((signed short int) var_1_34)) : 1) : 1) : 1))) && (var_1_69 == ((double) 8.5))) && (var_1_70 == ((unsigned short int) var_1_62))) && (var_1_25 ? (var_1_71 == ((unsigned char) var_1_72)) : (var_1_71 == ((unsigned char) var_1_62)))) && (((var_1_27 / (var_1_74 + var_1_41)) <= (last_1_var_1_73 ^ 5)) ? (var_1_73 == ((signed long int) (min (((var_1_75 - var_1_76) - var_1_35) , var_1_36)))) : (var_1_73 == ((signed long int) var_1_57)))
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
