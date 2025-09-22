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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199100_1loop.c", 13, "reach_error"); }
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
double var_1_1 = 9.125;
float var_1_3 = 128.8;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
double var_1_7 = 3.6;
double var_1_8 = 7.75;
unsigned long int var_1_9 = 4136462149;
unsigned long int var_1_10 = 2932124085;
unsigned long int var_1_11 = 5;
unsigned long int var_1_12 = 2;
double var_1_13 = 31.6;
double var_1_14 = 1.3;
double var_1_15 = 1.5;
unsigned short int var_1_16 = 1;
signed long int var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned short int var_1_19 = 10;
unsigned short int var_1_20 = 27869;
unsigned short int var_1_21 = 2;
unsigned short int var_1_22 = 10;
unsigned short int var_1_24 = 43990;
unsigned short int var_1_25 = 8;
signed char var_1_26 = -2;
signed char var_1_27 = 32;
signed char var_1_28 = -64;
signed short int var_1_29 = -64;
unsigned long int var_1_30 = 5;
unsigned long int var_1_31 = 1914008598;

// Calibration values

// Last'ed variables
double last_1_var_1_13 = 31.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch199100_1loop
	unsigned char stepLocal_0 = var_1_4;
	if ((- last_1_var_1_13) < (0.125f + last_1_var_1_13)) {
		if (stepLocal_0 || (var_1_5 || var_1_6)) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = 9.9999999999995E12;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req9Batch199100_1loop
	unsigned long int stepLocal_9 = var_1_12;
	unsigned long int stepLocal_8 = max ((var_1_24 | var_1_17) , (var_1_9 % var_1_20));
	if (var_1_6) {
		if (var_1_4) {
			var_1_30 = (16u + var_1_17);
		}
	} else {
		if (stepLocal_8 == (var_1_10 - (var_1_31 - var_1_25))) {
			if (stepLocal_9 != var_1_31) {
				var_1_30 = var_1_11;
			}
		} else {
			var_1_30 = 0u;
		}
	}


	// From: Req2Batch199100_1loop
	if (((max (var_1_9 , var_1_10)) - var_1_11) >= var_1_30) {
		var_1_8 = var_1_7;
	} else {
		var_1_8 = 128.75;
	}


	// From: Req4Batch199100_1loop
	signed long int stepLocal_2 = (10 + var_1_17) >> var_1_18;
	if (stepLocal_2 < var_1_30) {
		var_1_16 = (var_1_18 + var_1_19);
	} else {
		var_1_16 = (min (var_1_18 , (var_1_19 + (var_1_20 - var_1_21))));
	}


	// From: Req7Batch199100_1loop
	unsigned long int stepLocal_6 = var_1_10;
	signed long int stepLocal_5 = 8;
	if (stepLocal_5 >= var_1_30) {
		if ((- (- var_1_30)) != stepLocal_6) {
			var_1_27 = var_1_18;
		} else {
			var_1_27 = var_1_28;
		}
	} else {
		var_1_27 = 4;
	}


	// From: Req8Batch199100_1loop
	unsigned char stepLocal_7 = (var_1_1 + var_1_8) > var_1_8;
	if (var_1_6 && stepLocal_7) {
		var_1_29 = (min (var_1_18 , 16));
	} else {
		if (var_1_5) {
			var_1_29 = var_1_16;
		} else {
			var_1_29 = var_1_21;
		}
	}


	// From: Req3Batch199100_1loop
	unsigned long int stepLocal_1 = var_1_11;
	if (stepLocal_1 == var_1_30) {
		if (var_1_3 <= (- (var_1_8 * var_1_1))) {
			if ((var_1_7 * var_1_3) > var_1_14) {
				var_1_13 = var_1_7;
			} else {
				var_1_13 = var_1_15;
			}
		} else {
			var_1_13 = var_1_15;
		}
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req5Batch199100_1loop
	if (var_1_6) {
		if (100.5 > (var_1_13 + (max (var_1_13 , var_1_8)))) {
			if (! var_1_4) {
				var_1_22 = var_1_19;
			} else {
				if (var_1_5) {
					var_1_22 = (var_1_24 - (var_1_21 + var_1_18));
				} else {
					var_1_22 = var_1_24;
				}
			}
		}
	} else {
		var_1_22 = var_1_25;
	}


	// From: Req6Batch199100_1loop
	signed long int stepLocal_4 = var_1_17 / var_1_24;
	unsigned long int stepLocal_3 = var_1_30;
	if ((max (var_1_25 , var_1_20)) != stepLocal_4) {
		if (var_1_8 >= var_1_13) {
			if (var_1_4) {
				var_1_26 = -100;
			} else {
				if (stepLocal_3 >= var_1_18) {
					var_1_26 = var_1_18;
				} else {
					var_1_26 = -8;
				}
			}
		} else {
			var_1_26 = 4;
		}
	} else {
		var_1_26 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 30);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 32767);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return ((((((((((- last_1_var_1_13) < (0.125f + last_1_var_1_13)) ? ((var_1_4 || (var_1_5 || var_1_6)) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) 9.9999999999995E12))) : (var_1_1 == ((double) var_1_7))) && ((((max (var_1_9 , var_1_10)) - var_1_11) >= var_1_30) ? (var_1_8 == ((double) var_1_7)) : (var_1_8 == ((double) 128.75)))) && ((var_1_11 == var_1_30) ? ((var_1_3 <= (- (var_1_8 * var_1_1))) ? (((var_1_7 * var_1_3) > var_1_14) ? (var_1_13 == ((double) var_1_7)) : (var_1_13 == ((double) var_1_15))) : (var_1_13 == ((double) var_1_15))) : (var_1_13 == ((double) var_1_15)))) && ((((10 + var_1_17) >> var_1_18) < var_1_30) ? (var_1_16 == ((unsigned short int) (var_1_18 + var_1_19))) : (var_1_16 == ((unsigned short int) (min (var_1_18 , (var_1_19 + (var_1_20 - var_1_21)))))))) && (var_1_6 ? ((100.5 > (var_1_13 + (max (var_1_13 , var_1_8)))) ? ((! var_1_4) ? (var_1_22 == ((unsigned short int) var_1_19)) : (var_1_5 ? (var_1_22 == ((unsigned short int) (var_1_24 - (var_1_21 + var_1_18)))) : (var_1_22 == ((unsigned short int) var_1_24)))) : 1) : (var_1_22 == ((unsigned short int) var_1_25)))) && (((max (var_1_25 , var_1_20)) != (var_1_17 / var_1_24)) ? ((var_1_8 >= var_1_13) ? (var_1_4 ? (var_1_26 == ((signed char) -100)) : ((var_1_30 >= var_1_18) ? (var_1_26 == ((signed char) var_1_18)) : (var_1_26 == ((signed char) -8)))) : (var_1_26 == ((signed char) 4))) : (var_1_26 == ((signed char) var_1_18)))) && ((8 >= var_1_30) ? (((- (- var_1_30)) != var_1_10) ? (var_1_27 == ((signed char) var_1_18)) : (var_1_27 == ((signed char) var_1_28))) : (var_1_27 == ((signed char) 4)))) && ((var_1_6 && ((var_1_1 + var_1_8) > var_1_8)) ? (var_1_29 == ((signed short int) (min (var_1_18 , 16)))) : (var_1_5 ? (var_1_29 == ((signed short int) var_1_16)) : (var_1_29 == ((signed short int) var_1_21))))) && (var_1_6 ? (var_1_4 ? (var_1_30 == ((unsigned long int) (16u + var_1_17))) : 1) : (((max ((var_1_24 | var_1_17) , (var_1_9 % var_1_20))) == (var_1_10 - (var_1_31 - var_1_25))) ? ((var_1_12 != var_1_31) ? (var_1_30 == ((unsigned long int) var_1_11)) : 1) : (var_1_30 == ((unsigned long int) 0u))))
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
