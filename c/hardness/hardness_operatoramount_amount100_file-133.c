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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133Amount100.c", 13, "reach_error"); }
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
float var_1_1 = 64.5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
double var_1_4 = 3.75;
double var_1_5 = 0.30000000000000004;
double var_1_6 = 15.375;
float var_1_7 = 127.5;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 2;
float var_1_12 = 127.6;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 25;
unsigned char var_1_16 = 10;
signed char var_1_17 = 32;
signed char var_1_18 = 50;
signed char var_1_19 = 10;
signed char var_1_20 = 10;
double var_1_21 = 4.125;
double var_1_23 = 3.2;
double var_1_24 = 0.0;
double var_1_25 = 3.2;
signed char var_1_26 = 64;
unsigned char var_1_27 = 1;
unsigned short int var_1_28 = 128;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned short int var_1_31 = 32;
signed long int var_1_32 = 4;
signed long int var_1_33 = -8;
unsigned long int var_1_34 = 3168745914;
signed short int var_1_35 = 8;
double var_1_36 = 4.2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;
unsigned char last_1_var_1_27 = 1;
unsigned short int last_1_var_1_31 = 32;
signed long int last_1_var_1_32 = 4;
signed long int last_1_var_1_33 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch133Amount100
	signed long int stepLocal_0 = last_1_var_1_31;
	if (last_1_var_1_27) {
		if (last_1_var_1_8) {
			if ((last_1_var_1_31 + last_1_var_1_33) == stepLocal_0) {
				var_1_15 = var_1_16;
			} else {
				var_1_15 = 50;
			}
		} else {
			var_1_15 = var_1_16;
		}
	}


	// From: Req10Batch133Amount100
	unsigned char stepLocal_7 = last_1_var_1_8;
	signed long int stepLocal_6 = min (last_1_var_1_31 , last_1_var_1_32);
	unsigned long int stepLocal_5 = 256u << 4u;
	if (var_1_14) {
		if (var_1_29 && stepLocal_7) {
			if (stepLocal_5 < ((var_1_34 - last_1_var_1_32) + last_1_var_1_31)) {
				var_1_33 = (last_1_var_1_32 + var_1_16);
			} else {
				var_1_33 = (var_1_19 + (max (last_1_var_1_33 , last_1_var_1_31)));
			}
		} else {
			var_1_33 = (max (var_1_19 , var_1_16));
		}
	} else {
		if (last_1_var_1_8) {
			if (stepLocal_6 >= ((min (last_1_var_1_32 , last_1_var_1_31)) << (max (var_1_35 , 10)))) {
				var_1_33 = var_1_28;
			} else {
				var_1_33 = ((8 - last_1_var_1_32) + last_1_var_1_33);
			}
		} else {
			var_1_33 = var_1_35;
		}
	}


	// From: Req7Batch133Amount100
	signed long int stepLocal_4 = var_1_33 / var_1_28;
	if (stepLocal_4 != var_1_20) {
		var_1_27 = ((var_1_13 || var_1_29) || var_1_30);
	}


	// From: Req8Batch133Amount100
	if (last_1_var_1_27) {
		var_1_31 = (var_1_10 + var_1_9);
	}


	// From: Req4Batch133Amount100
	if (var_1_4 != var_1_5) {
		var_1_17 = var_1_18;
	} else {
		var_1_17 = (var_1_19 + var_1_20);
	}


	// From: Req11Batch133Amount100
	var_1_36 = var_1_24;


	// From: Req9Batch133Amount100
	if (var_1_30 && var_1_27) {
		if ((var_1_33 / var_1_28) > (var_1_19 * var_1_31)) {
			var_1_32 = 1;
		} else {
			var_1_32 = var_1_28;
		}
	} else {
		var_1_32 = var_1_15;
	}


	// From: Req5Batch133Amount100
	signed long int stepLocal_1 = abs (var_1_32);
	if (var_1_31 >= stepLocal_1) {
		var_1_21 = (var_1_23 - (var_1_24 - var_1_25));
	} else {
		var_1_21 = (min (var_1_23 , (var_1_25 - var_1_24)));
	}


	// From: Req6Batch133Amount100
	unsigned char stepLocal_3 = var_1_15;
	signed long int stepLocal_2 = var_1_33;
	if (stepLocal_2 > (var_1_15 & var_1_33)) {
		if (var_1_7 <= var_1_36) {
			if (stepLocal_3 <= var_1_33) {
				var_1_26 = var_1_20;
			}
		} else {
			var_1_26 = var_1_18;
		}
	} else {
		var_1_26 = var_1_18;
	}


	// From: Req1Batch133Amount100
	if (var_1_2 && var_1_3) {
		if (var_1_21 <= ((10.5 + var_1_21) / var_1_6)) {
			var_1_1 = (var_1_7 + 255.2f);
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch133Amount100
	if ((var_1_15 & var_1_33) <= var_1_33) {
		if (var_1_1 >= (var_1_7 * (var_1_6 / var_1_12))) {
			if (var_1_3 || var_1_2) {
				var_1_8 = var_1_13;
			} else {
				var_1_8 = var_1_14;
			}
		} else {
			var_1_8 = var_1_13;
		}
	} else {
		var_1_8 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 255);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -127);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 4611686.018427383000e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 65535);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 23);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return (((((((((((var_1_2 && var_1_3) ? ((var_1_21 <= ((10.5 + var_1_21) / var_1_6)) ? (var_1_1 == ((float) (var_1_7 + 255.2f))) : 1) : (var_1_1 == ((float) var_1_7))) && (((var_1_15 & var_1_33) <= var_1_33) ? ((var_1_1 >= (var_1_7 * (var_1_6 / var_1_12))) ? ((var_1_3 || var_1_2) ? (var_1_8 == ((unsigned char) var_1_13)) : (var_1_8 == ((unsigned char) var_1_14))) : (var_1_8 == ((unsigned char) var_1_13))) : (var_1_8 == ((unsigned char) var_1_14)))) && (last_1_var_1_27 ? (last_1_var_1_8 ? (((last_1_var_1_31 + last_1_var_1_33) == last_1_var_1_31) ? (var_1_15 == ((unsigned char) var_1_16)) : (var_1_15 == ((unsigned char) 50))) : (var_1_15 == ((unsigned char) var_1_16))) : 1)) && ((var_1_4 != var_1_5) ? (var_1_17 == ((signed char) var_1_18)) : (var_1_17 == ((signed char) (var_1_19 + var_1_20))))) && ((var_1_31 >= (abs (var_1_32))) ? (var_1_21 == ((double) (var_1_23 - (var_1_24 - var_1_25)))) : (var_1_21 == ((double) (min (var_1_23 , (var_1_25 - var_1_24))))))) && ((var_1_33 > (var_1_15 & var_1_33)) ? ((var_1_7 <= var_1_36) ? ((var_1_15 <= var_1_33) ? (var_1_26 == ((signed char) var_1_20)) : 1) : (var_1_26 == ((signed char) var_1_18))) : (var_1_26 == ((signed char) var_1_18)))) && (((var_1_33 / var_1_28) != var_1_20) ? (var_1_27 == ((unsigned char) ((var_1_13 || var_1_29) || var_1_30))) : 1)) && (last_1_var_1_27 ? (var_1_31 == ((unsigned short int) (var_1_10 + var_1_9))) : 1)) && ((var_1_30 && var_1_27) ? (((var_1_33 / var_1_28) > (var_1_19 * var_1_31)) ? (var_1_32 == ((signed long int) 1)) : (var_1_32 == ((signed long int) var_1_28))) : (var_1_32 == ((signed long int) var_1_15)))) && (var_1_14 ? ((var_1_29 && last_1_var_1_8) ? (((256u << 4u) < ((var_1_34 - last_1_var_1_32) + last_1_var_1_31)) ? (var_1_33 == ((signed long int) (last_1_var_1_32 + var_1_16))) : (var_1_33 == ((signed long int) (var_1_19 + (max (last_1_var_1_33 , last_1_var_1_31)))))) : (var_1_33 == ((signed long int) (max (var_1_19 , var_1_16))))) : (last_1_var_1_8 ? (((min (last_1_var_1_31 , last_1_var_1_32)) >= ((min (last_1_var_1_32 , last_1_var_1_31)) << (max (var_1_35 , 10)))) ? (var_1_33 == ((signed long int) var_1_28)) : (var_1_33 == ((signed long int) ((8 - last_1_var_1_32) + last_1_var_1_33)))) : (var_1_33 == ((signed long int) var_1_35))))) && (var_1_36 == ((double) var_1_24))
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
