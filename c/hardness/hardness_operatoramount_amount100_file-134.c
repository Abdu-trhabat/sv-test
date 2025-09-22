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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134Amount100.c", 13, "reach_error"); }
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
signed long int var_1_1 = 50;
signed long int var_1_3 = 128;
signed long int var_1_5 = -25;
signed short int var_1_7 = 128;
unsigned char var_1_8 = 1;
signed short int var_1_9 = 64;
signed short int var_1_10 = 256;
signed long int var_1_12 = 4;
signed long int var_1_13 = 8;
signed short int var_1_14 = 1;
signed short int var_1_15 = 128;
signed short int var_1_16 = 64;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -128;
signed short int var_1_19 = -256;
signed short int var_1_20 = 0;
signed short int var_1_21 = 2;
float var_1_22 = 2.7;
float var_1_23 = 5.625;
float var_1_24 = 4.875;
signed long int var_1_25 = 1;
signed long int var_1_26 = -5;
unsigned char var_1_27 = 1;
signed long int var_1_28 = -4;
signed long int var_1_29 = -32;
unsigned long int var_1_30 = 10;
unsigned char var_1_31 = 128;
unsigned char var_1_32 = 5;
unsigned long int var_1_33 = 256;
signed char var_1_34 = 0;
signed char var_1_35 = -5;
unsigned short int var_1_36 = 256;
unsigned short int var_1_37 = 16;
signed short int var_1_38 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch134Amount100
	if (var_1_17) {
		var_1_22 = (var_1_23 + var_1_24);
	} else {
		var_1_22 = (abs (abs (var_1_24)));
	}


	// From: Req4Batch134Amount100
	if ((- var_1_16) == var_1_3) {
		var_1_25 = (max (var_1_10 , ((var_1_14 + var_1_16) - var_1_20)));
	}


	// From: Req5Batch134Amount100
	signed long int stepLocal_4 = 2;
	if (stepLocal_4 <= ((var_1_16 + var_1_20) << var_1_3)) {
		if ((var_1_22 + var_1_24) != 127.8f) {
			var_1_26 = (min (var_1_14 , var_1_9));
		}
	}


	// From: Req6Batch134Amount100
	var_1_27 = (abs (1));


	// From: Req7Batch134Amount100
	if ((var_1_3 * (var_1_20 * var_1_16)) < (var_1_15 % var_1_29)) {
		var_1_28 = var_1_19;
	}


	// From: Req8Batch134Amount100
	if ((var_1_31 - var_1_32) >= (var_1_25 + (var_1_26 & var_1_3))) {
		if (var_1_31 < var_1_10) {
			var_1_30 = var_1_33;
		} else {
			var_1_30 = var_1_20;
		}
	} else {
		var_1_30 = var_1_14;
	}


	// From: Req9Batch134Amount100
	if ((var_1_25 % var_1_31) <= (-256 & (var_1_5 % var_1_29))) {
		if (var_1_8) {
			var_1_34 = var_1_35;
		} else {
			var_1_34 = -10;
		}
	} else {
		var_1_34 = var_1_35;
	}


	// From: Req11Batch134Amount100
	signed char stepLocal_9 = var_1_35;
	signed long int stepLocal_8 = var_1_3 * var_1_5;
	if (stepLocal_9 <= var_1_30) {
		if (stepLocal_8 <= (abs (min (var_1_21 , var_1_19)))) {
			var_1_38 = var_1_10;
		} else {
			var_1_38 = var_1_14;
		}
	} else {
		var_1_38 = var_1_26;
	}


	// From: Req1Batch134Amount100
	signed long int stepLocal_1 = var_1_26;
	unsigned long int stepLocal_0 = var_1_30;
	if ((var_1_30 / (abs (var_1_3))) >= stepLocal_0) {
		var_1_1 = (max (-64 , var_1_5));
	} else {
		if (stepLocal_1 <= (var_1_5 + var_1_3)) {
			var_1_1 = var_1_26;
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch134Amount100
	signed long int stepLocal_3 = var_1_12 - var_1_13;
	unsigned long int stepLocal_2 = var_1_30;
	if (var_1_8) {
		if (stepLocal_2 >= var_1_25) {
			var_1_7 = (min (var_1_9 , var_1_10));
		}
	} else {
		if ((var_1_25 * var_1_1) >= stepLocal_3) {
			var_1_7 = (abs (var_1_14 - (max (var_1_15 , var_1_16))));
		} else {
			if (var_1_17) {
				var_1_7 = ((var_1_18 + (min (16 , var_1_19))) + (var_1_20 - (min (5 , var_1_21))));
			}
		}
	}


	// From: Req10Batch134Amount100
	signed long int stepLocal_7 = 64;
	signed long int stepLocal_6 = var_1_32 >> 1;
	signed long int stepLocal_5 = var_1_3;
	if (var_1_35 == stepLocal_6) {
		if (var_1_25 <= stepLocal_7) {
			if (stepLocal_5 <= var_1_30) {
				var_1_36 = (var_1_32 + var_1_37);
			} else {
				var_1_36 = var_1_21;
			}
		} else {
			var_1_36 = var_1_38;
		}
	} else {
		var_1_36 = var_1_16;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483647);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -8191);
	assume_abort_if_not(var_1_18 <= 8192);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -8191);
	assume_abort_if_not(var_1_19 <= 8191);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	assume_abort_if_not(var_1_29 != 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((((var_1_30 / (abs (var_1_3))) >= var_1_30) ? (var_1_1 == ((signed long int) (max (-64 , var_1_5)))) : ((var_1_26 <= (var_1_5 + var_1_3)) ? (var_1_1 == ((signed long int) var_1_26)) : (var_1_1 == ((signed long int) var_1_5)))) && (var_1_8 ? ((var_1_30 >= var_1_25) ? (var_1_7 == ((signed short int) (min (var_1_9 , var_1_10)))) : 1) : (((var_1_25 * var_1_1) >= (var_1_12 - var_1_13)) ? (var_1_7 == ((signed short int) (abs (var_1_14 - (max (var_1_15 , var_1_16)))))) : (var_1_17 ? (var_1_7 == ((signed short int) ((var_1_18 + (min (16 , var_1_19))) + (var_1_20 - (min (5 , var_1_21)))))) : 1)))) && (var_1_17 ? (var_1_22 == ((float) (var_1_23 + var_1_24))) : (var_1_22 == ((float) (abs (abs (var_1_24))))))) && (((- var_1_16) == var_1_3) ? (var_1_25 == ((signed long int) (max (var_1_10 , ((var_1_14 + var_1_16) - var_1_20))))) : 1)) && ((2 <= ((var_1_16 + var_1_20) << var_1_3)) ? (((var_1_22 + var_1_24) != 127.8f) ? (var_1_26 == ((signed long int) (min (var_1_14 , var_1_9)))) : 1) : 1)) && (var_1_27 == ((unsigned char) (abs (1))))) && (((var_1_3 * (var_1_20 * var_1_16)) < (var_1_15 % var_1_29)) ? (var_1_28 == ((signed long int) var_1_19)) : 1)) && (((var_1_31 - var_1_32) >= (var_1_25 + (var_1_26 & var_1_3))) ? ((var_1_31 < var_1_10) ? (var_1_30 == ((unsigned long int) var_1_33)) : (var_1_30 == ((unsigned long int) var_1_20))) : (var_1_30 == ((unsigned long int) var_1_14)))) && (((var_1_25 % var_1_31) <= (-256 & (var_1_5 % var_1_29))) ? (var_1_8 ? (var_1_34 == ((signed char) var_1_35)) : (var_1_34 == ((signed char) -10))) : (var_1_34 == ((signed char) var_1_35)))) && ((var_1_35 == (var_1_32 >> 1)) ? ((var_1_25 <= 64) ? ((var_1_3 <= var_1_30) ? (var_1_36 == ((unsigned short int) (var_1_32 + var_1_37))) : (var_1_36 == ((unsigned short int) var_1_21))) : (var_1_36 == ((unsigned short int) var_1_38))) : (var_1_36 == ((unsigned short int) var_1_16)))) && ((var_1_35 <= var_1_30) ? (((var_1_3 * var_1_5) <= (abs (min (var_1_21 , var_1_19)))) ? (var_1_38 == ((signed short int) var_1_10)) : (var_1_38 == ((signed short int) var_1_14))) : (var_1_38 == ((signed short int) var_1_26)))
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
