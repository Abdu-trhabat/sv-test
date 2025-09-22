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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84Amount100.c", 13, "reach_error"); }
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
float var_1_1 = 99999999999.75;
signed long int var_1_3 = 10000000;
float var_1_4 = 31.25;
float var_1_5 = 0.0;
float var_1_6 = 99.5;
float var_1_7 = 500.5;
double var_1_8 = 199.96;
double var_1_9 = 256.95;
signed long int var_1_10 = 256;
signed long int var_1_11 = 1523382513;
signed long int var_1_12 = 32;
signed long int var_1_13 = 2;
double var_1_14 = 32.6;
double var_1_15 = 0.875;
unsigned short int var_1_16 = 1;
unsigned char var_1_17 = 1;
float var_1_18 = 0.3;
signed short int var_1_19 = 4;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 10;
signed short int var_1_23 = 64;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 5;
signed short int var_1_27 = 64;
unsigned char var_1_28 = 1;
float var_1_29 = 64.5;
float var_1_30 = 0.0;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 1140371764;
unsigned long int var_1_33 = 3119542188;
double var_1_34 = 10.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch84Amount100
	var_1_29 = (var_1_6 + ((var_1_30 - 7.6f) - var_1_7));


	// From: Req10Batch84Amount100
	var_1_31 = ((max ((var_1_11 + var_1_32) , var_1_33)) - var_1_26);


	// From: Req11Batch84Amount100
	unsigned long int stepLocal_8 = var_1_31;
	unsigned char stepLocal_7 = var_1_26;
	if ((~ var_1_12) > stepLocal_8) {
		if ((var_1_23 / var_1_11) >= stepLocal_7) {
			var_1_34 = (((abs (-5.200103693899211E18)) - 50.25) - var_1_4);
		} else {
			var_1_34 = var_1_7;
		}
	}


	// From: Req4Batch84Amount100
	unsigned long int stepLocal_3 = var_1_31;
	signed long int stepLocal_2 = var_1_10;
	if (var_1_17) {
		if (var_1_11 <= stepLocal_2) {
			if (var_1_12 <= stepLocal_3) {
				var_1_16 = var_1_31;
			}
		}
	} else {
		var_1_16 = var_1_31;
	}


	// From: Req5Batch84Amount100
	if (var_1_31 <= var_1_12) {
		var_1_18 = (var_1_15 + 64.4f);
	}


	// From: Req7Batch84Amount100
	if (! var_1_20) {
		if (var_1_16 <= var_1_10) {
			var_1_24 = ((var_1_25 + 1) + var_1_26);
		} else {
			var_1_24 = var_1_26;
		}
	} else {
		var_1_24 = var_1_26;
	}


	// From: Req8Batch84Amount100
	unsigned char stepLocal_6 = var_1_28;
	signed long int stepLocal_5 = min (var_1_13 , var_1_21);
	if (stepLocal_5 < var_1_25) {
		if ((var_1_20 || var_1_17) && stepLocal_6) {
			var_1_27 = (min (((max (var_1_21 , var_1_31)) + var_1_16) , (max (var_1_25 , var_1_26))));
		}
	}


	// From: Req1Batch84Amount100
	signed long int stepLocal_0 = ~ var_1_24;
	if (stepLocal_0 <= var_1_31) {
		var_1_1 = (var_1_4 - (var_1_5 - (min (var_1_6 , var_1_7))));
	}


	// From: Req2Batch84Amount100
	unsigned char stepLocal_1 = var_1_24;
	if (var_1_4 < (var_1_29 + (abs (var_1_6)))) {
		if (var_1_3 < stepLocal_1) {
			var_1_8 = ((abs (var_1_6)) + var_1_7);
		} else {
			var_1_8 = var_1_4;
		}
	} else {
		var_1_8 = var_1_7;
	}


	// From: Req3Batch84Amount100
	if ((var_1_27 - var_1_10) < ((var_1_11 - var_1_12) - var_1_13)) {
		var_1_9 = (var_1_7 + (max (var_1_6 , (var_1_14 + var_1_15))));
	} else {
		var_1_9 = (var_1_7 - var_1_5);
	}


	// From: Req6Batch84Amount100
	unsigned char stepLocal_4 = var_1_20;
	if (var_1_17 && stepLocal_4) {
		if (var_1_17) {
			var_1_19 = ((var_1_31 - var_1_21) + 50);
		} else {
			var_1_19 = (max (var_1_21 , var_1_31));
		}
	} else {
		if ((var_1_9 * (- var_1_5)) < (var_1_6 - var_1_7)) {
			if (var_1_14 == var_1_8) {
				var_1_19 = var_1_31;
			} else {
				var_1_19 = (var_1_31 + var_1_21);
			}
		} else {
			var_1_19 = ((var_1_31 + var_1_23) + 16);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741824);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -8191);
	assume_abort_if_not(var_1_23 <= 8191);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 64);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 2305843.009213691400e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741824);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((((~ var_1_24) <= var_1_31) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - (min (var_1_6 , var_1_7)))))) : 1) && ((var_1_4 < (var_1_29 + (abs (var_1_6)))) ? ((var_1_3 < var_1_24) ? (var_1_8 == ((double) ((abs (var_1_6)) + var_1_7))) : (var_1_8 == ((double) var_1_4))) : (var_1_8 == ((double) var_1_7)))) && (((var_1_27 - var_1_10) < ((var_1_11 - var_1_12) - var_1_13)) ? (var_1_9 == ((double) (var_1_7 + (max (var_1_6 , (var_1_14 + var_1_15)))))) : (var_1_9 == ((double) (var_1_7 - var_1_5))))) && (var_1_17 ? ((var_1_11 <= var_1_10) ? ((var_1_12 <= var_1_31) ? (var_1_16 == ((unsigned short int) var_1_31)) : 1) : 1) : (var_1_16 == ((unsigned short int) var_1_31)))) && ((var_1_31 <= var_1_12) ? (var_1_18 == ((float) (var_1_15 + 64.4f))) : 1)) && ((var_1_17 && var_1_20) ? (var_1_17 ? (var_1_19 == ((signed short int) ((var_1_31 - var_1_21) + 50))) : (var_1_19 == ((signed short int) (max (var_1_21 , var_1_31))))) : (((var_1_9 * (- var_1_5)) < (var_1_6 - var_1_7)) ? ((var_1_14 == var_1_8) ? (var_1_19 == ((signed short int) var_1_31)) : (var_1_19 == ((signed short int) (var_1_31 + var_1_21)))) : (var_1_19 == ((signed short int) ((var_1_31 + var_1_23) + 16)))))) && ((! var_1_20) ? ((var_1_16 <= var_1_10) ? (var_1_24 == ((unsigned char) ((var_1_25 + 1) + var_1_26))) : (var_1_24 == ((unsigned char) var_1_26))) : (var_1_24 == ((unsigned char) var_1_26)))) && (((min (var_1_13 , var_1_21)) < var_1_25) ? (((var_1_20 || var_1_17) && var_1_28) ? (var_1_27 == ((signed short int) (min (((max (var_1_21 , var_1_31)) + var_1_16) , (max (var_1_25 , var_1_26)))))) : 1) : 1)) && (var_1_29 == ((float) (var_1_6 + ((var_1_30 - 7.6f) - var_1_7))))) && (var_1_31 == ((unsigned long int) ((max ((var_1_11 + var_1_32) , var_1_33)) - var_1_26)))) && (((~ var_1_12) > var_1_31) ? (((var_1_23 / var_1_11) >= var_1_26) ? (var_1_34 == ((double) (((abs (-5.200103693899211E18)) - 50.25) - var_1_4))) : (var_1_34 == ((double) var_1_7))) : 1)
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
