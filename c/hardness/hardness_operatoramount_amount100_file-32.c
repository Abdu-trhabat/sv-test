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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch32Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
signed char var_1_9 = 4;
signed char var_1_10 = 2;
signed char var_1_11 = 4;
signed char var_1_12 = -25;
signed char var_1_13 = 8;
signed char var_1_14 = 50;
signed char var_1_15 = 32;
signed char var_1_16 = 64;
double var_1_17 = 4.775;
unsigned long int var_1_18 = 0;
unsigned long int var_1_19 = 3621235500;
signed char var_1_20 = 50;
unsigned long int var_1_21 = 0;
unsigned long int var_1_22 = 2941649671;
float var_1_23 = 9.5;
float var_1_24 = 255.4;
float var_1_25 = 100.75;
signed short int var_1_26 = -64;
unsigned char var_1_27 = 128;
double var_1_28 = 10000000000000.8;
signed short int var_1_29 = 30488;
signed short int var_1_30 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned short int last_1_var_1_6 = 4;
unsigned long int last_1_var_1_18 = 0;
unsigned long int last_1_var_1_21 = 0;
signed short int last_1_var_1_26 = -64;
unsigned char last_1_var_1_27 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch32Amount100
	if (last_1_var_1_1) {
		if (last_1_var_1_1) {
			var_1_18 = last_1_var_1_6;
		} else {
			if (((var_1_12 + last_1_var_1_27) * last_1_var_1_21) >= last_1_var_1_21) {
				var_1_18 = (var_1_19 - var_1_16);
			} else {
				var_1_18 = var_1_13;
			}
		}
	}


	// From: Req2Batch32Amount100
	unsigned char stepLocal_0 = last_1_var_1_18 >= last_1_var_1_26;
	if (stepLocal_0 && var_1_5) {
		var_1_6 = last_1_var_1_26;
	} else {
		if (! (! (last_1_var_1_26 < last_1_var_1_18))) {
			var_1_6 = (last_1_var_1_26 + last_1_var_1_18);
		}
	}


	// From: Req1Batch32Amount100
	if (var_1_2) {
		var_1_1 = ((! (var_1_3 || var_1_4)) && var_1_5);
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch32Amount100
	if ((max ((var_1_14 / var_1_16) , var_1_10)) > var_1_11) {
		var_1_17 = (8.25 - 255.8);
	}


	// From: Req6Batch32Amount100
	signed char stepLocal_2 = var_1_12;
	signed char stepLocal_1 = var_1_14;
	if (stepLocal_1 <= var_1_16) {
		var_1_20 = var_1_16;
	} else {
		if (var_1_15 <= stepLocal_2) {
			var_1_20 = (max (var_1_12 , var_1_13));
		} else {
			var_1_20 = var_1_11;
		}
	}


	// From: Req8Batch32Amount100
	signed long int stepLocal_5 = var_1_6 * var_1_13;
	signed char stepLocal_4 = var_1_10;
	signed long int stepLocal_3 = 0;
	if (var_1_12 <= stepLocal_4) {
		if (stepLocal_5 == var_1_15) {
			var_1_23 = (abs (var_1_24));
		} else {
			if (stepLocal_3 >= var_1_14) {
				var_1_23 = var_1_24;
			} else {
				var_1_23 = var_1_25;
			}
		}
	}


	// From: Req10Batch32Amount100
	signed char stepLocal_6 = var_1_16;
	if (var_1_15 < stepLocal_6) {
		var_1_27 = ((var_1_10 + var_1_11) + var_1_16);
	} else {
		if (! (var_1_2 && var_1_1)) {
			var_1_27 = (var_1_13 + var_1_14);
		}
	}


	// From: Req11Batch32Amount100
	if (! var_1_4) {
		if (((var_1_29 - var_1_10) >> var_1_30) == var_1_6) {
			if ((100 / var_1_16) != var_1_11) {
				var_1_28 = var_1_25;
			} else {
				var_1_28 = var_1_24;
			}
		} else {
			var_1_28 = var_1_25;
		}
	} else {
		var_1_28 = var_1_25;
	}


	// From: Req9Batch32Amount100
	if (var_1_18 <= var_1_16) {
		if ((abs (var_1_24)) != (- var_1_17)) {
			if (var_1_1) {
				var_1_26 = var_1_6;
			} else {
				var_1_26 = var_1_12;
			}
		}
	} else {
		var_1_26 = var_1_6;
	}


	// From: Req7Batch32Amount100
	if ((max (var_1_19 , var_1_26)) <= (var_1_22 - 4u)) {
		var_1_21 = var_1_13;
	} else {
		var_1_21 = var_1_14;
	}


	// From: Req3Batch32Amount100
	if (var_1_26 > var_1_27) {
		if (var_1_21 > (var_1_26 * var_1_27)) {
			var_1_9 = ((var_1_10 - var_1_11) + (max (var_1_12 , (var_1_13 - var_1_14))));
		} else {
			var_1_9 = (max (var_1_15 , (var_1_13 - (var_1_16 - var_1_11))));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 63);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 30);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((((((var_1_2 ? (var_1_1 == ((unsigned char) ((! (var_1_3 || var_1_4)) && var_1_5))) : (var_1_1 == ((unsigned char) var_1_4))) && (((last_1_var_1_18 >= last_1_var_1_26) && var_1_5) ? (var_1_6 == ((unsigned short int) last_1_var_1_26)) : ((! (! (last_1_var_1_26 < last_1_var_1_18))) ? (var_1_6 == ((unsigned short int) (last_1_var_1_26 + last_1_var_1_18))) : 1))) && ((var_1_26 > var_1_27) ? ((var_1_21 > (var_1_26 * var_1_27)) ? (var_1_9 == ((signed char) ((var_1_10 - var_1_11) + (max (var_1_12 , (var_1_13 - var_1_14)))))) : (var_1_9 == ((signed char) (max (var_1_15 , (var_1_13 - (var_1_16 - var_1_11))))))) : 1)) && (((max ((var_1_14 / var_1_16) , var_1_10)) > var_1_11) ? (var_1_17 == ((double) (8.25 - 255.8))) : 1)) && (last_1_var_1_1 ? (last_1_var_1_1 ? (var_1_18 == ((unsigned long int) last_1_var_1_6)) : ((((var_1_12 + last_1_var_1_27) * last_1_var_1_21) >= last_1_var_1_21) ? (var_1_18 == ((unsigned long int) (var_1_19 - var_1_16))) : (var_1_18 == ((unsigned long int) var_1_13)))) : 1)) && ((var_1_14 <= var_1_16) ? (var_1_20 == ((signed char) var_1_16)) : ((var_1_15 <= var_1_12) ? (var_1_20 == ((signed char) (max (var_1_12 , var_1_13)))) : (var_1_20 == ((signed char) var_1_11))))) && (((max (var_1_19 , var_1_26)) <= (var_1_22 - 4u)) ? (var_1_21 == ((unsigned long int) var_1_13)) : (var_1_21 == ((unsigned long int) var_1_14)))) && ((var_1_12 <= var_1_10) ? (((var_1_6 * var_1_13) == var_1_15) ? (var_1_23 == ((float) (abs (var_1_24)))) : ((0 >= var_1_14) ? (var_1_23 == ((float) var_1_24)) : (var_1_23 == ((float) var_1_25)))) : 1)) && ((var_1_18 <= var_1_16) ? (((abs (var_1_24)) != (- var_1_17)) ? (var_1_1 ? (var_1_26 == ((signed short int) var_1_6)) : (var_1_26 == ((signed short int) var_1_12))) : 1) : (var_1_26 == ((signed short int) var_1_6)))) && ((var_1_15 < var_1_16) ? (var_1_27 == ((unsigned char) ((var_1_10 + var_1_11) + var_1_16))) : ((! (var_1_2 && var_1_1)) ? (var_1_27 == ((unsigned char) (var_1_13 + var_1_14))) : 1))) && ((! var_1_4) ? ((((var_1_29 - var_1_10) >> var_1_30) == var_1_6) ? (((100 / var_1_16) != var_1_11) ? (var_1_28 == ((double) var_1_25)) : (var_1_28 == ((double) var_1_24))) : (var_1_28 == ((double) var_1_25))) : (var_1_28 == ((double) var_1_25)))
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
