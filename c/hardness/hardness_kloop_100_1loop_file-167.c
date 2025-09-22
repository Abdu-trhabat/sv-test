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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167100_1loop.c", 13, "reach_error"); }
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
double var_1_1 = 0.6;
double var_1_6 = 8.75;
double var_1_7 = 10.5;
double var_1_8 = 3.4;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 32;
signed long int var_1_16 = 64;
signed long int var_1_17 = 1;
signed long int var_1_18 = 8;
signed short int var_1_19 = 8;
signed short int var_1_20 = 2;
signed short int var_1_21 = 16;
signed short int var_1_22 = 2;
signed short int var_1_23 = 32;
double var_1_24 = 16.4;
unsigned long int var_1_25 = 256;
float var_1_26 = 16.95;
signed long int var_1_27 = -8;
unsigned long int var_1_28 = 4179295872;
unsigned long int var_1_29 = 1749351189;
signed char var_1_30 = -64;
signed char var_1_31 = 32;
signed char var_1_32 = -32;
signed char var_1_33 = 1;
signed char var_1_34 = 10;
signed char var_1_35 = 2;
signed long int var_1_36 = 1;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 8;
unsigned char var_1_40 = 4;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 64;
signed long int var_1_43 = 128;
unsigned short int var_1_44 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_10 = 0;
signed long int last_1_var_1_13 = 32;
unsigned long int last_1_var_1_25 = 256;
unsigned char last_1_var_1_37 = 1;
unsigned char last_1_var_1_40 = 4;
signed long int last_1_var_1_43 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch167100_1loop
	signed long int stepLocal_1 = last_1_var_1_40;
	signed long int stepLocal_0 = last_1_var_1_40 * last_1_var_1_43;
	if (stepLocal_1 != ((min (last_1_var_1_40 , last_1_var_1_25)) + last_1_var_1_43)) {
		if (last_1_var_1_40 != stepLocal_0) {
			var_1_1 = (max ((var_1_6 - var_1_7) , var_1_8));
		}
	} else {
		if (last_1_var_1_10) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req8Batch167100_1loop
	unsigned char stepLocal_6 = last_1_var_1_37;
	if (stepLocal_6 && (var_1_27 > last_1_var_1_13)) {
		var_1_36 = (((min (var_1_35 , var_1_22)) + 4) - var_1_23);
	}


	// From: Req2Batch167100_1loop
	var_1_10 = (! ((var_1_9 || var_1_11) && var_1_12));


	// From: Req7Batch167100_1loop
	signed short int stepLocal_5 = var_1_22;
	if (stepLocal_5 <= (10 << var_1_27)) {
		var_1_30 = (min (var_1_31 , var_1_32));
	} else {
		var_1_30 = (var_1_33 - ((abs (var_1_34)) + var_1_35));
	}


	// From: Req10Batch167100_1loop
	signed short int stepLocal_7 = var_1_21;
	if (stepLocal_7 >= (var_1_33 / var_1_27)) {
		if (var_1_26 > var_1_8) {
			var_1_39 = (var_1_28 - var_1_29);
		} else {
			if (var_1_10) {
				var_1_39 = var_1_28;
			} else {
				var_1_39 = var_1_29;
			}
		}
	} else {
		var_1_39 = var_1_35;
	}


	// From: Req11Batch167100_1loop
	if (var_1_28 <= (var_1_29 * var_1_39)) {
		var_1_40 = (var_1_41 - var_1_35);
	} else {
		var_1_40 = (var_1_35 + var_1_42);
	}


	// From: Req12Batch167100_1loop
	var_1_43 = var_1_21;


	// From: Req13Batch167100_1loop
	var_1_44 = var_1_41;


	// From: Req3Batch167100_1loop
	unsigned long int stepLocal_2 = ~ var_1_39;
	if (var_1_39 != stepLocal_2) {
		var_1_13 = ((max (var_1_16 , var_1_17)) - var_1_18);
	}


	// From: Req6Batch167100_1loop
	signed long int stepLocal_4 = var_1_16;
	signed long int stepLocal_3 = min ((var_1_17 - var_1_22) , (var_1_36 / var_1_27));
	if (((max (var_1_1 , 7.2f)) * (var_1_8 / var_1_26)) > var_1_6) {
		if ((64 * var_1_39) < stepLocal_3) {
			var_1_25 = ((var_1_28 - (var_1_22 + var_1_23)) - (var_1_29 - 1000u));
		}
	} else {
		if (stepLocal_4 != var_1_39) {
			var_1_25 = (max (var_1_29 , var_1_22));
		} else {
			var_1_25 = var_1_18;
		}
	}


	// From: Req9Batch167100_1loop
	if ((0u <= var_1_36) || var_1_10) {
		var_1_37 = var_1_38;
	} else {
		var_1_37 = 0;
	}


	// From: Req4Batch167100_1loop
	if (var_1_37) {
		if (var_1_37) {
			var_1_19 = ((max ((min (64 , var_1_20)) , var_1_21)) - (var_1_22 + var_1_23));
		} else {
			var_1_19 = var_1_21;
		}
	} else {
		var_1_19 = var_1_20;
	}


	// From: Req5Batch167100_1loop
	if (var_1_37) {
		if (var_1_7 != (abs (var_1_8))) {
			if (var_1_10) {
				var_1_24 = 255.25;
			}
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -1);
	assume_abort_if_not(var_1_16 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483646);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 3221225470);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 1073741823);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -1);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -63);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 127);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
}

int property(void) {
	return (((((((((((((last_1_var_1_40 != ((min (last_1_var_1_40 , last_1_var_1_25)) + last_1_var_1_43)) ? ((last_1_var_1_40 != (last_1_var_1_40 * last_1_var_1_43)) ? (var_1_1 == ((double) (max ((var_1_6 - var_1_7) , var_1_8)))) : 1) : (last_1_var_1_10 ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) var_1_6)))) && (var_1_10 == ((unsigned char) (! ((var_1_9 || var_1_11) && var_1_12))))) && ((var_1_39 != (~ var_1_39)) ? (var_1_13 == ((signed long int) ((max (var_1_16 , var_1_17)) - var_1_18))) : 1)) && (var_1_37 ? (var_1_37 ? (var_1_19 == ((signed short int) ((max ((min (64 , var_1_20)) , var_1_21)) - (var_1_22 + var_1_23)))) : (var_1_19 == ((signed short int) var_1_21))) : (var_1_19 == ((signed short int) var_1_20)))) && (var_1_37 ? ((var_1_7 != (abs (var_1_8))) ? (var_1_10 ? (var_1_24 == ((double) 255.25)) : 1) : 1) : 1)) && ((((max (var_1_1 , 7.2f)) * (var_1_8 / var_1_26)) > var_1_6) ? (((64 * var_1_39) < (min ((var_1_17 - var_1_22) , (var_1_36 / var_1_27)))) ? (var_1_25 == ((unsigned long int) ((var_1_28 - (var_1_22 + var_1_23)) - (var_1_29 - 1000u)))) : 1) : ((var_1_16 != var_1_39) ? (var_1_25 == ((unsigned long int) (max (var_1_29 , var_1_22)))) : (var_1_25 == ((unsigned long int) var_1_18))))) && ((var_1_22 <= (10 << var_1_27)) ? (var_1_30 == ((signed char) (min (var_1_31 , var_1_32)))) : (var_1_30 == ((signed char) (var_1_33 - ((abs (var_1_34)) + var_1_35)))))) && ((last_1_var_1_37 && (var_1_27 > last_1_var_1_13)) ? (var_1_36 == ((signed long int) (((min (var_1_35 , var_1_22)) + 4) - var_1_23))) : 1)) && (((0u <= var_1_36) || var_1_10) ? (var_1_37 == ((unsigned char) var_1_38)) : (var_1_37 == ((unsigned char) 0)))) && ((var_1_21 >= (var_1_33 / var_1_27)) ? ((var_1_26 > var_1_8) ? (var_1_39 == ((unsigned long int) (var_1_28 - var_1_29))) : (var_1_10 ? (var_1_39 == ((unsigned long int) var_1_28)) : (var_1_39 == ((unsigned long int) var_1_29)))) : (var_1_39 == ((unsigned long int) var_1_35)))) && ((var_1_28 <= (var_1_29 * var_1_39)) ? (var_1_40 == ((unsigned char) (var_1_41 - var_1_35))) : (var_1_40 == ((unsigned char) (var_1_35 + var_1_42))))) && (var_1_43 == ((signed long int) var_1_21))) && (var_1_44 == ((unsigned short int) var_1_41))
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
