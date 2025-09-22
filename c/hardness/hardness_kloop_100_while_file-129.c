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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129100_while.c", 13, "reach_error"); }
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
float var_1_1 = 32.125;
float var_1_3 = 4.7;
float var_1_4 = 255.75;
float var_1_5 = 255.5;
float var_1_6 = 64.8;
float var_1_7 = 128.75;
float var_1_8 = 99.4;
float var_1_9 = 4.6;
unsigned char var_1_10 = 32;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned short int var_1_17 = 5;
unsigned short int var_1_18 = 8;
unsigned short int var_1_19 = 39345;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 50;
unsigned long int var_1_23 = 8;
unsigned long int var_1_24 = 4249846817;
unsigned long int var_1_25 = 5;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
signed long int var_1_28 = 5;
signed long int var_1_29 = 1211825801;
unsigned long int var_1_30 = 1;
unsigned short int var_1_31 = 1;
unsigned char var_1_32 = 100;
unsigned short int var_1_33 = 20363;
signed char var_1_34 = -25;
signed short int var_1_35 = 128;
signed short int var_1_36 = -8;

// Calibration values

// Last'ed variables
float last_1_var_1_6 = 64.8;
unsigned short int last_1_var_1_17 = 5;
unsigned char last_1_var_1_20 = 1;
unsigned long int last_1_var_1_23 = 8;
signed long int last_1_var_1_28 = 5;
unsigned long int last_1_var_1_30 = 1;
unsigned short int last_1_var_1_31 = 1;
signed short int last_1_var_1_35 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch129100_while
	signed long int stepLocal_4 = (abs (var_1_14)) >> 5;
	if (stepLocal_4 > last_1_var_1_30) {
		if (var_1_3 < var_1_4) {
			var_1_26 = var_1_27;
		}
	}


	// From: Req1Batch129100_while
	if (! var_1_26) {
		var_1_1 = (max ((var_1_3 - var_1_4) , var_1_5));
	}


	// From: Req4Batch129100_while
	if (var_1_26) {
		var_1_15 = var_1_16;
	}


	// From: Req5Batch129100_while
	signed long int stepLocal_2 = last_1_var_1_28;
	if (stepLocal_2 > last_1_var_1_35) {
		var_1_17 = (min (last_1_var_1_23 , var_1_14));
	}


	// From: Req2Batch129100_while
	unsigned char stepLocal_0 = var_1_15;
	if ((var_1_5 == last_1_var_1_6) && stepLocal_0) {
		if (last_1_var_1_6 > (var_1_4 + var_1_5)) {
			var_1_6 = (var_1_7 + (min (var_1_8 , var_1_9)));
		}
	} else {
		var_1_6 = var_1_9;
	}


	// From: Req10Batch129100_while
	unsigned char stepLocal_5 = var_1_14;
	if (stepLocal_5 > var_1_25) {
		var_1_28 = ((last_1_var_1_30 + last_1_var_1_17) - (var_1_29 - var_1_14));
	} else {
		var_1_28 = (last_1_var_1_31 - var_1_19);
	}


	// From: Req13Batch129100_while
	var_1_34 = var_1_21;


	// From: Req6Batch129100_while
	signed long int stepLocal_3 = var_1_19 - (var_1_17 + var_1_14);
	if (stepLocal_3 > var_1_17) {
		if (var_1_1 > var_1_4) {
			var_1_18 = var_1_17;
		}
	} else {
		var_1_18 = var_1_17;
	}


	// From: Req7Batch129100_while
	if ((var_1_18 == last_1_var_1_20) || var_1_15) {
		var_1_20 = (128 - (min ((100 - var_1_21) , var_1_22)));
	} else {
		if (15.8f < var_1_4) {
			var_1_20 = (min (var_1_14 , var_1_21));
		} else {
			if (var_1_15) {
				var_1_20 = var_1_22;
			}
		}
	}


	// From: Req11Batch129100_while
	if ((var_1_28 + last_1_var_1_30) < (last_1_var_1_30 / var_1_19)) {
		if ((var_1_19 * var_1_28) >= var_1_20) {
			var_1_30 = var_1_20;
		} else {
			var_1_30 = var_1_21;
		}
	}


	// From: Req15Batch129100_while
	var_1_36 = var_1_30;


	// From: Req14Batch129100_while
	var_1_35 = var_1_36;


	// From: Req3Batch129100_while
	signed long int stepLocal_1 = var_1_28 + var_1_35;
	if (stepLocal_1 > var_1_28) {
		if (var_1_4 >= var_1_8) {
			var_1_10 = var_1_14;
		}
	}


	// From: Req12Batch129100_while
	unsigned short int stepLocal_8 = var_1_17;
	unsigned char stepLocal_7 = var_1_10;
	signed long int stepLocal_6 = var_1_29 / var_1_32;
	if (stepLocal_6 <= var_1_14) {
		if (var_1_10 <= stepLocal_8) {
			if (((var_1_24 * var_1_32) / 100) > stepLocal_7) {
				var_1_31 = (var_1_10 + (var_1_33 - var_1_28));
			} else {
				var_1_31 = ((25 + var_1_21) + (var_1_33 - var_1_22));
			}
		} else {
			var_1_31 = (37538 - var_1_28);
		}
	}


	// From: Req8Batch129100_while
	if (var_1_6 > var_1_1) {
		var_1_23 = (abs ((var_1_24 - var_1_31) - (abs (var_1_25))));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65535);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 3221225470);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= 1073741823);
	assume_abort_if_not(var_1_29 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 255);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 16383);
	assume_abort_if_not(var_1_33 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return (((((((((((((((! var_1_26) ? (var_1_1 == ((float) (max ((var_1_3 - var_1_4) , var_1_5)))) : 1) && (((var_1_5 == last_1_var_1_6) && var_1_15) ? ((last_1_var_1_6 > (var_1_4 + var_1_5)) ? (var_1_6 == ((float) (var_1_7 + (min (var_1_8 , var_1_9))))) : 1) : (var_1_6 == ((float) var_1_9)))) && (((var_1_28 + var_1_35) > var_1_28) ? ((var_1_4 >= var_1_8) ? (var_1_10 == ((unsigned char) var_1_14)) : 1) : 1)) && (var_1_26 ? (var_1_15 == ((unsigned char) var_1_16)) : 1)) && ((last_1_var_1_28 > last_1_var_1_35) ? (var_1_17 == ((unsigned short int) (min (last_1_var_1_23 , var_1_14)))) : 1)) && (((var_1_19 - (var_1_17 + var_1_14)) > var_1_17) ? ((var_1_1 > var_1_4) ? (var_1_18 == ((unsigned short int) var_1_17)) : 1) : (var_1_18 == ((unsigned short int) var_1_17)))) && (((var_1_18 == last_1_var_1_20) || var_1_15) ? (var_1_20 == ((unsigned char) (128 - (min ((100 - var_1_21) , var_1_22))))) : ((15.8f < var_1_4) ? (var_1_20 == ((unsigned char) (min (var_1_14 , var_1_21)))) : (var_1_15 ? (var_1_20 == ((unsigned char) var_1_22)) : 1)))) && ((var_1_6 > var_1_1) ? (var_1_23 == ((unsigned long int) (abs ((var_1_24 - var_1_31) - (abs (var_1_25)))))) : 1)) && ((((abs (var_1_14)) >> 5) > last_1_var_1_30) ? ((var_1_3 < var_1_4) ? (var_1_26 == ((unsigned char) var_1_27)) : 1) : 1)) && ((var_1_14 > var_1_25) ? (var_1_28 == ((signed long int) ((last_1_var_1_30 + last_1_var_1_17) - (var_1_29 - var_1_14)))) : (var_1_28 == ((signed long int) (last_1_var_1_31 - var_1_19))))) && (((var_1_28 + last_1_var_1_30) < (last_1_var_1_30 / var_1_19)) ? (((var_1_19 * var_1_28) >= var_1_20) ? (var_1_30 == ((unsigned long int) var_1_20)) : (var_1_30 == ((unsigned long int) var_1_21))) : 1)) && (((var_1_29 / var_1_32) <= var_1_14) ? ((var_1_10 <= var_1_17) ? ((((var_1_24 * var_1_32) / 100) > var_1_10) ? (var_1_31 == ((unsigned short int) (var_1_10 + (var_1_33 - var_1_28)))) : (var_1_31 == ((unsigned short int) ((25 + var_1_21) + (var_1_33 - var_1_22))))) : (var_1_31 == ((unsigned short int) (37538 - var_1_28)))) : 1)) && (var_1_34 == ((signed char) var_1_21))) && (var_1_35 == ((signed short int) var_1_36))) && (var_1_36 == ((signed short int) var_1_30))
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
