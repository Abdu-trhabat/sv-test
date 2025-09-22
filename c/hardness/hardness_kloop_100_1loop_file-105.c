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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105100_1loop.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 4;
unsigned short int var_1_3 = 4;
unsigned short int var_1_4 = 16;
unsigned short int var_1_5 = 8;
float var_1_6 = 5.6;
float var_1_7 = 8.15;
float var_1_8 = -0.6;
unsigned short int var_1_9 = 45213;
float var_1_10 = 99999999999.04;
unsigned short int var_1_11 = 32;
unsigned short int var_1_12 = 256;
float var_1_13 = 5.25;
signed short int var_1_14 = 0;
float var_1_15 = 25.1;
signed short int var_1_16 = 20052;
signed short int var_1_17 = 2;
unsigned long int var_1_18 = 1;
signed short int var_1_20 = 0;
signed short int var_1_21 = -4;
signed short int var_1_22 = -500;
unsigned long int var_1_23 = 5;
signed short int var_1_24 = 0;
signed char var_1_25 = -4;
signed char var_1_26 = 25;
signed char var_1_27 = 32;
unsigned char var_1_28 = 0;
float var_1_29 = 1.5;
unsigned long int var_1_30 = 4224709082;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
float var_1_33 = 99.5;
float var_1_34 = 32.2;
signed short int var_1_35 = 16;
signed char var_1_36 = 50;
signed char var_1_37 = 25;
signed short int var_1_38 = 2;
unsigned char var_1_39 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 4;
float last_1_var_1_10 = 99999999999.04;
signed short int last_1_var_1_14 = 0;
unsigned long int last_1_var_1_18 = 1;
unsigned long int last_1_var_1_23 = 5;
unsigned char last_1_var_1_28 = 0;
float last_1_var_1_33 = 99.5;
unsigned char last_1_var_1_39 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch105100_1loop
	unsigned long int stepLocal_4 = var_1_30 - var_1_5;
	unsigned short int stepLocal_3 = var_1_11;
	unsigned char stepLocal_2 = last_1_var_1_39;
	if ((24.25f / var_1_29) < var_1_15) {
		if (stepLocal_4 <= last_1_var_1_18) {
			if (var_1_3 >= stepLocal_3) {
				if ((last_1_var_1_23 >= last_1_var_1_1) && stepLocal_2) {
					var_1_28 = 0;
				} else {
					var_1_28 = var_1_31;
				}
			} else {
				var_1_28 = 0;
			}
		} else {
			var_1_28 = var_1_32;
		}
	} else {
		var_1_28 = 0;
	}


	// From: Req1Batch105100_1loop
	if (! var_1_28) {
		var_1_1 = ((min (var_1_3 , var_1_4)) + (max (10 , var_1_5)));
	} else {
		if (((max (31.25f , 64.6f)) * var_1_6) > var_1_7) {
			if (var_1_6 > var_1_8) {
				var_1_1 = (max (8 , 16));
			}
		} else {
			if (var_1_6 >= (var_1_7 * var_1_8)) {
				var_1_1 = (var_1_9 - var_1_3);
			}
		}
	}


	// From: Req10Batch105100_1loop
	unsigned long int stepLocal_5 = last_1_var_1_18;
	if ((var_1_21 * last_1_var_1_14) >= stepLocal_5) {
		var_1_33 = ((min (var_1_13 , var_1_34)) + 50.25f);
	}


	// From: Req3Batch105100_1loop
	if (((var_1_15 + 10.6f) - 63.125f) >= var_1_33) {
		var_1_14 = (var_1_12 - (var_1_16 - var_1_17));
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req6Batch105100_1loop
	signed long int stepLocal_1 = - var_1_11;
	if (stepLocal_1 > (var_1_3 % (abs (var_1_16)))) {
		var_1_23 = (min (100u , var_1_9));
	}


	// From: Req7Batch105100_1loop
	var_1_24 = (min (var_1_17 , var_1_12));


	// From: Req8Batch105100_1loop
	var_1_25 = (min (var_1_26 , var_1_27));


	// From: Req11Batch105100_1loop
	signed char stepLocal_6 = var_1_27;
	if (stepLocal_6 == (var_1_36 - var_1_37)) {
		var_1_35 = (var_1_17 - (var_1_37 + var_1_38));
	} else {
		if (! var_1_32) {
			if (var_1_13 > var_1_34) {
				var_1_35 = (max (var_1_17 , (abs (var_1_26 + var_1_38))));
			} else {
				var_1_35 = var_1_38;
			}
		}
	}


	// From: Req12Batch105100_1loop
	var_1_39 = var_1_31;


	// From: Req2Batch105100_1loop
	unsigned long int stepLocal_0 = var_1_4 - var_1_23;
	if ((var_1_9 - (var_1_11 + var_1_12)) < stepLocal_0) {
		var_1_10 = (1000000.875f + var_1_13);
	} else {
		var_1_10 = var_1_13;
	}


	// From: Req5Batch105100_1loop
	if ((var_1_7 <= var_1_6) && var_1_39) {
		var_1_20 = ((min (var_1_16 , (abs (10)))) - var_1_17);
	} else {
		var_1_20 = ((var_1_21 + var_1_22) + var_1_17);
	}


	// From: Req4Batch105100_1loop
	if ((max (var_1_13 , last_1_var_1_10)) >= last_1_var_1_33) {
		if (last_1_var_1_39) {
			if (last_1_var_1_28) {
				var_1_18 = var_1_3;
			}
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427388000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -8191);
	assume_abort_if_not(var_1_21 <= 8192);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -8191);
	assume_abort_if_not(var_1_22 <= 8191);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	assume_abort_if_not(var_1_29 != 0.0F);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_39 = var_1_39;
}

int property(void) {
	return ((((((((((((! var_1_28) ? (var_1_1 == ((unsigned short int) ((min (var_1_3 , var_1_4)) + (max (10 , var_1_5))))) : ((((max (31.25f , 64.6f)) * var_1_6) > var_1_7) ? ((var_1_6 > var_1_8) ? (var_1_1 == ((unsigned short int) (max (8 , 16)))) : 1) : ((var_1_6 >= (var_1_7 * var_1_8)) ? (var_1_1 == ((unsigned short int) (var_1_9 - var_1_3))) : 1))) && (((var_1_9 - (var_1_11 + var_1_12)) < (var_1_4 - var_1_23)) ? (var_1_10 == ((float) (1000000.875f + var_1_13))) : (var_1_10 == ((float) var_1_13)))) && ((((var_1_15 + 10.6f) - 63.125f) >= var_1_33) ? (var_1_14 == ((signed short int) (var_1_12 - (var_1_16 - var_1_17)))) : (var_1_14 == ((signed short int) var_1_16)))) && (((max (var_1_13 , last_1_var_1_10)) >= last_1_var_1_33) ? (last_1_var_1_39 ? (last_1_var_1_28 ? (var_1_18 == ((unsigned long int) var_1_3)) : 1) : 1) : 1)) && (((var_1_7 <= var_1_6) && var_1_39) ? (var_1_20 == ((signed short int) ((min (var_1_16 , (abs (10)))) - var_1_17))) : (var_1_20 == ((signed short int) ((var_1_21 + var_1_22) + var_1_17))))) && (((- var_1_11) > (var_1_3 % (abs (var_1_16)))) ? (var_1_23 == ((unsigned long int) (min (100u , var_1_9)))) : 1)) && (var_1_24 == ((signed short int) (min (var_1_17 , var_1_12))))) && (var_1_25 == ((signed char) (min (var_1_26 , var_1_27))))) && (((24.25f / var_1_29) < var_1_15) ? (((var_1_30 - var_1_5) <= last_1_var_1_18) ? ((var_1_3 >= var_1_11) ? (((last_1_var_1_23 >= last_1_var_1_1) && last_1_var_1_39) ? (var_1_28 == ((unsigned char) 0)) : (var_1_28 == ((unsigned char) var_1_31))) : (var_1_28 == ((unsigned char) 0))) : (var_1_28 == ((unsigned char) var_1_32))) : (var_1_28 == ((unsigned char) 0)))) && (((var_1_21 * last_1_var_1_14) >= last_1_var_1_18) ? (var_1_33 == ((float) ((min (var_1_13 , var_1_34)) + 50.25f))) : 1)) && ((var_1_27 == (var_1_36 - var_1_37)) ? (var_1_35 == ((signed short int) (var_1_17 - (var_1_37 + var_1_38)))) : ((! var_1_32) ? ((var_1_13 > var_1_34) ? (var_1_35 == ((signed short int) (max (var_1_17 , (abs (var_1_26 + var_1_38)))))) : (var_1_35 == ((signed short int) var_1_38))) : 1))) && (var_1_39 == ((unsigned char) var_1_31))
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
