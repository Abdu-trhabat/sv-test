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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39100_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 200;
signed char var_1_2 = 64;
signed short int var_1_3 = 5;
signed short int var_1_4 = 2;
float var_1_6 = 15.125;
float var_1_7 = 4.75;
float var_1_8 = 64.5;
signed long int var_1_9 = 8;
unsigned long int var_1_10 = 0;
unsigned long int var_1_12 = 2829858397;
unsigned long int var_1_13 = 1815738001;
signed char var_1_14 = 1;
float var_1_15 = 8.6;
signed char var_1_16 = 32;
signed char var_1_17 = -1;
signed char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 500;
unsigned short int var_1_23 = 62390;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 64;
unsigned char var_1_26 = 64;
double var_1_27 = 100000000000.2;
double var_1_28 = -0.75;
double var_1_29 = 63.5;
double var_1_30 = 0.0;
double var_1_31 = 1.25;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 1;
unsigned long int var_1_35 = 64;
unsigned long int var_1_36 = 0;
unsigned long int var_1_37 = 500;
unsigned short int var_1_38 = 128;
signed short int var_1_39 = 64;
unsigned long int var_1_40 = 64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_19 = 1;
unsigned long int last_1_var_1_34 = 1;
signed short int last_1_var_1_39 = 64;
unsigned long int last_1_var_1_40 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch39100_while
	if (((max (var_1_13 , last_1_var_1_40)) + (var_1_4 - var_1_25)) >= last_1_var_1_39) {
		if (last_1_var_1_19) {
			var_1_32 = (var_1_21 || var_1_33);
		}
	} else {
		var_1_32 = (! var_1_33);
	}


	// From: Req5Batch39100_while
	if (var_1_32) {
		var_1_19 = (var_1_20 || var_1_21);
	}


	// From: Req2Batch39100_while
	if (var_1_8 >= 5.75f) {
		var_1_9 = ((var_1_4 + var_1_2) - var_1_3);
	}


	// From: Req12Batch39100_while
	var_1_36 = (var_1_12 - var_1_37);


	// From: Req15Batch39100_while
	var_1_40 = var_1_23;


	// From: Req1Batch39100_while
	unsigned long int stepLocal_0 = var_1_36;
	if (((min (8 , var_1_2)) << (max (var_1_3 , var_1_4))) <= stepLocal_0) {
		if (99.7f >= ((var_1_6 - var_1_7) / var_1_8)) {
			var_1_1 = 100;
		}
	} else {
		var_1_1 = var_1_3;
	}


	// From: Req3Batch39100_while
	if (! var_1_19) {
		var_1_10 = (max ((var_1_12 - (var_1_13 - var_1_36)) , var_1_2));
	}


	// From: Req4Batch39100_while
	if (var_1_10 >= var_1_2) {
		if ((var_1_8 / var_1_15) < 0.19999999999999996f) {
			var_1_14 = (min ((min ((var_1_4 - var_1_3) , var_1_16)) , var_1_17));
		} else {
			var_1_14 = ((var_1_18 - 1) - var_1_3);
		}
	} else {
		var_1_14 = var_1_4;
	}


	// From: Req6Batch39100_while
	if ((abs (var_1_12 - var_1_36)) >= var_1_18) {
		if (var_1_21) {
			var_1_22 = (abs (var_1_23 - var_1_4));
		} else {
			var_1_22 = 8;
		}
	} else {
		var_1_22 = var_1_3;
	}


	// From: Req9Batch39100_while
	if (var_1_28 >= var_1_8) {
		if (var_1_10 <= 10u) {
			var_1_29 = ((var_1_30 - var_1_31) - 64.5);
		}
	} else {
		var_1_29 = (min (var_1_31 , var_1_30));
	}


	// From: Req11Batch39100_while
	if (var_1_40 <= var_1_12) {
		if (0 <= var_1_3) {
			var_1_34 = (var_1_4 + var_1_22);
		} else {
			var_1_34 = var_1_35;
		}
	} else {
		var_1_34 = (var_1_22 + last_1_var_1_34);
	}


	// From: Req13Batch39100_while
	var_1_38 = var_1_40;


	// From: Req8Batch39100_while
	if (! (! var_1_19)) {
		if (var_1_3 < (var_1_38 * var_1_18)) {
			var_1_27 = var_1_28;
		} else {
			var_1_27 = 10.9;
		}
	} else {
		var_1_27 = var_1_28;
	}


	// From: Req7Batch39100_while
	unsigned short int stepLocal_1 = var_1_22;
	if (! (var_1_20 && var_1_32)) {
		var_1_24 = ((var_1_25 + var_1_26) - var_1_18);
	} else {
		if (stepLocal_1 <= var_1_23) {
			var_1_24 = var_1_2;
		} else {
			var_1_24 = var_1_18;
		}
	}


	// From: Req14Batch39100_while
	var_1_39 = var_1_24;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 27);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 27);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 1073741823);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 62);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 63);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 64);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_40 = var_1_40;
}

int property(void) {
	return (((((((((((((((((min (8 , var_1_2)) << (max (var_1_3 , var_1_4))) <= var_1_36) ? ((99.7f >= ((var_1_6 - var_1_7) / var_1_8)) ? (var_1_1 == ((unsigned char) 100)) : 1) : (var_1_1 == ((unsigned char) var_1_3))) && ((var_1_8 >= 5.75f) ? (var_1_9 == ((signed long int) ((var_1_4 + var_1_2) - var_1_3))) : 1)) && ((! var_1_19) ? (var_1_10 == ((unsigned long int) (max ((var_1_12 - (var_1_13 - var_1_36)) , var_1_2)))) : 1)) && ((var_1_10 >= var_1_2) ? (((var_1_8 / var_1_15) < 0.19999999999999996f) ? (var_1_14 == ((signed char) (min ((min ((var_1_4 - var_1_3) , var_1_16)) , var_1_17)))) : (var_1_14 == ((signed char) ((var_1_18 - 1) - var_1_3)))) : (var_1_14 == ((signed char) var_1_4)))) && (var_1_32 ? (var_1_19 == ((unsigned char) (var_1_20 || var_1_21))) : 1)) && (((abs (var_1_12 - var_1_36)) >= var_1_18) ? (var_1_21 ? (var_1_22 == ((unsigned short int) (abs (var_1_23 - var_1_4)))) : (var_1_22 == ((unsigned short int) 8))) : (var_1_22 == ((unsigned short int) var_1_3)))) && ((! (var_1_20 && var_1_32)) ? (var_1_24 == ((unsigned char) ((var_1_25 + var_1_26) - var_1_18))) : ((var_1_22 <= var_1_23) ? (var_1_24 == ((unsigned char) var_1_2)) : (var_1_24 == ((unsigned char) var_1_18))))) && ((! (! var_1_19)) ? ((var_1_3 < (var_1_38 * var_1_18)) ? (var_1_27 == ((double) var_1_28)) : (var_1_27 == ((double) 10.9))) : (var_1_27 == ((double) var_1_28)))) && ((var_1_28 >= var_1_8) ? ((var_1_10 <= 10u) ? (var_1_29 == ((double) ((var_1_30 - var_1_31) - 64.5))) : 1) : (var_1_29 == ((double) (min (var_1_31 , var_1_30)))))) && ((((max (var_1_13 , last_1_var_1_40)) + (var_1_4 - var_1_25)) >= last_1_var_1_39) ? (last_1_var_1_19 ? (var_1_32 == ((unsigned char) (var_1_21 || var_1_33))) : 1) : (var_1_32 == ((unsigned char) (! var_1_33))))) && ((var_1_40 <= var_1_12) ? ((0 <= var_1_3) ? (var_1_34 == ((unsigned long int) (var_1_4 + var_1_22))) : (var_1_34 == ((unsigned long int) var_1_35))) : (var_1_34 == ((unsigned long int) (var_1_22 + last_1_var_1_34))))) && (var_1_36 == ((unsigned long int) (var_1_12 - var_1_37)))) && (var_1_38 == ((unsigned short int) var_1_40))) && (var_1_39 == ((signed short int) var_1_24))) && (var_1_40 == ((unsigned long int) var_1_23))
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
