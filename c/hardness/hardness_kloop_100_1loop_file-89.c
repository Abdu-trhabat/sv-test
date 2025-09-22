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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch89100_1loop.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 128;
signed long int var_1_2 = 16;
signed long int var_1_3 = 4;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 2082256544;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 2478717280;
signed short int var_1_8 = 256;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 8;
unsigned short int var_1_11 = 100;
unsigned short int var_1_12 = 256;
unsigned short int var_1_13 = 2;
unsigned short int var_1_14 = 128;
unsigned short int var_1_15 = 8;
signed short int var_1_16 = 128;
signed short int var_1_17 = 16;
signed short int var_1_18 = 128;
signed short int var_1_19 = 128;
float var_1_20 = 128.375;
float var_1_21 = -0.5;
float var_1_22 = 31.75;
float var_1_23 = 10.8;
signed char var_1_24 = 4;
unsigned short int var_1_25 = 4;
signed char var_1_26 = 2;
signed char var_1_27 = 4;
signed char var_1_28 = 32;
signed char var_1_29 = 1;
signed char var_1_30 = 10;
double var_1_31 = 100.75;
float var_1_32 = 8.4;
float var_1_34 = 256.75;
unsigned short int var_1_35 = 32;
unsigned short int var_1_37 = 40097;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 16;
double var_1_40 = 15.4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch89100_1loop
	signed long int stepLocal_0 = var_1_3;
	if (var_1_2 != stepLocal_0) {
		if (var_1_4) {
			var_1_1 = ((var_1_5 + 1668503833u) - (50u + 256u));
		}
	}


	// From: Req2Batch89100_1loop
	unsigned char stepLocal_2 = var_1_5 < var_1_1;
	unsigned long int stepLocal_1 = var_1_1;
	if (stepLocal_1 > var_1_5) {
		if (stepLocal_2 || var_1_4) {
			var_1_6 = (var_1_7 - var_1_5);
		}
	}


	// From: Req3Batch89100_1loop
	if (var_1_4 && var_1_9) {
		if (var_1_5 < var_1_7) {
			if (var_1_1 <= (5u ^ var_1_6)) {
				var_1_8 = var_1_10;
			} else {
				var_1_8 = 256;
			}
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req4Batch89100_1loop
	var_1_11 = (max ((max (var_1_12 , (max (var_1_13 , var_1_14)))) , var_1_15));


	// From: Req5Batch89100_1loop
	if ((~ var_1_12) > 5) {
		if ((var_1_17 - (min (var_1_18 , var_1_19))) > var_1_11) {
			var_1_16 = var_1_10;
		} else {
			var_1_16 = -200;
		}
	}


	// From: Req6Batch89100_1loop
	unsigned long int stepLocal_5 = var_1_6;
	unsigned char stepLocal_4 = var_1_13 <= var_1_5;
	unsigned short int stepLocal_3 = var_1_14;
	if (stepLocal_3 >= var_1_16) {
		if (var_1_4 || stepLocal_4) {
			if (stepLocal_5 == var_1_5) {
				var_1_20 = (abs (var_1_21));
			} else {
				var_1_20 = (var_1_22 - var_1_23);
			}
		}
	}


	// From: Req8Batch89100_1loop
	signed long int stepLocal_8 = var_1_27 * var_1_13;
	unsigned long int stepLocal_7 = 64 & (var_1_1 * var_1_18);
	if ((abs (var_1_6)) <= stepLocal_8) {
		if (var_1_6 <= stepLocal_7) {
			var_1_28 = (max ((max (var_1_26 , var_1_27)) , (max (var_1_29 , var_1_30))));
		} else {
			var_1_28 = var_1_29;
		}
	} else {
		var_1_28 = var_1_29;
	}


	// From: Req9Batch89100_1loop
	signed short int stepLocal_9 = var_1_18;
	if (-4 >= stepLocal_9) {
		var_1_31 = var_1_21;
	}


	// From: Req11Batch89100_1loop
	if (var_1_19 > var_1_16) {
		if (var_1_9) {
			if ((abs (var_1_11)) <= (var_1_19 | var_1_17)) {
				var_1_35 = (max ((min (var_1_15 , var_1_14)) , (min (var_1_13 , var_1_12))));
			} else {
				var_1_35 = (var_1_37 - var_1_27);
			}
		} else {
			var_1_35 = (min (var_1_19 , var_1_12));
		}
	}


	// From: Req12Batch89100_1loop
	var_1_38 = (min (var_1_27 , (abs (var_1_39))));


	// From: Req13Batch89100_1loop
	var_1_40 = var_1_22;


	// From: Req7Batch89100_1loop
	signed long int stepLocal_6 = 256 / var_1_25;
	if (stepLocal_6 < (var_1_15 * var_1_35)) {
		var_1_24 = (var_1_26 - var_1_27);
	} else {
		var_1_24 = (min (var_1_27 , var_1_26));
	}


	// From: Req10Batch89100_1loop
	if (0.4f <= var_1_40) {
		var_1_32 = (var_1_34 + 24.5f);
	} else {
		var_1_32 = (max (3.7f , (max (var_1_22 , 10.5f))));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 1073741823);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 2147483647);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -1);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((((((var_1_2 != var_1_3) ? (var_1_4 ? (var_1_1 == ((unsigned long int) ((var_1_5 + 1668503833u) - (50u + 256u)))) : 1) : 1) && ((var_1_1 > var_1_5) ? (((var_1_5 < var_1_1) || var_1_4) ? (var_1_6 == ((unsigned long int) (var_1_7 - var_1_5))) : 1) : 1)) && ((var_1_4 && var_1_9) ? ((var_1_5 < var_1_7) ? ((var_1_1 <= (5u ^ var_1_6)) ? (var_1_8 == ((signed short int) var_1_10)) : (var_1_8 == ((signed short int) 256))) : (var_1_8 == ((signed short int) var_1_10))) : (var_1_8 == ((signed short int) var_1_10)))) && (var_1_11 == ((unsigned short int) (max ((max (var_1_12 , (max (var_1_13 , var_1_14)))) , var_1_15))))) && (((~ var_1_12) > 5) ? (((var_1_17 - (min (var_1_18 , var_1_19))) > var_1_11) ? (var_1_16 == ((signed short int) var_1_10)) : (var_1_16 == ((signed short int) -200))) : 1)) && ((var_1_14 >= var_1_16) ? ((var_1_4 || (var_1_13 <= var_1_5)) ? ((var_1_6 == var_1_5) ? (var_1_20 == ((float) (abs (var_1_21)))) : (var_1_20 == ((float) (var_1_22 - var_1_23)))) : 1) : 1)) && (((256 / var_1_25) < (var_1_15 * var_1_35)) ? (var_1_24 == ((signed char) (var_1_26 - var_1_27))) : (var_1_24 == ((signed char) (min (var_1_27 , var_1_26)))))) && (((abs (var_1_6)) <= (var_1_27 * var_1_13)) ? ((var_1_6 <= (64 & (var_1_1 * var_1_18))) ? (var_1_28 == ((signed char) (max ((max (var_1_26 , var_1_27)) , (max (var_1_29 , var_1_30)))))) : (var_1_28 == ((signed char) var_1_29))) : (var_1_28 == ((signed char) var_1_29)))) && ((-4 >= var_1_18) ? (var_1_31 == ((double) var_1_21)) : 1)) && ((0.4f <= var_1_40) ? (var_1_32 == ((float) (var_1_34 + 24.5f))) : (var_1_32 == ((float) (max (3.7f , (max (var_1_22 , 10.5f)))))))) && ((var_1_19 > var_1_16) ? (var_1_9 ? (((abs (var_1_11)) <= (var_1_19 | var_1_17)) ? (var_1_35 == ((unsigned short int) (max ((min (var_1_15 , var_1_14)) , (min (var_1_13 , var_1_12)))))) : (var_1_35 == ((unsigned short int) (var_1_37 - var_1_27)))) : (var_1_35 == ((unsigned short int) (min (var_1_19 , var_1_12))))) : 1)) && (var_1_38 == ((unsigned char) (min (var_1_27 , (abs (var_1_39))))))) && (var_1_40 == ((double) var_1_22))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
