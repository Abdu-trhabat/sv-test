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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47100_while.c", 13, "reach_error"); }
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
signed char var_1_1 = 5;
signed char var_1_3 = -32;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 4;
unsigned long int var_1_7 = 8;
unsigned long int var_1_8 = 16;
signed short int var_1_9 = 16;
unsigned long int var_1_10 = 256;
signed short int var_1_11 = 10;
signed short int var_1_12 = 8;
unsigned long int var_1_13 = 2549704529;
signed short int var_1_14 = 10000;
signed char var_1_15 = 8;
signed short int var_1_16 = 256;
unsigned long int var_1_17 = 16;
signed long int var_1_18 = -8;
signed long int var_1_19 = -128;
signed char var_1_20 = 5;
signed char var_1_21 = 4;
signed char var_1_22 = 4;
signed char var_1_23 = 16;
signed char var_1_24 = 5;
float var_1_25 = 0.8;
float var_1_26 = 9.25;
float var_1_27 = 64.2;
signed char var_1_28 = 0;
signed char var_1_29 = 1;
signed char var_1_30 = 32;
signed char var_1_31 = 10;
unsigned char var_1_32 = 1;
float var_1_33 = 100.625;
float var_1_34 = 8.25;
float var_1_35 = 64.4;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
signed short int var_1_39 = -8;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_9 = 16;
signed char last_1_var_1_15 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch47100_while
	signed char stepLocal_0 = var_1_3;
	if (stepLocal_0 > last_1_var_1_15) {
		var_1_6 = (abs (var_1_7));
	} else {
		var_1_6 = (max (var_1_7 , var_1_8));
	}


	// From: Req7Batch47100_while
	if ((var_1_6 / (min (var_1_18 , var_1_19))) < (max (var_1_16 , var_1_13))) {
		var_1_17 = (min ((5u + 100u) , var_1_13));
	}


	// From: Req3Batch47100_while
	if ((min (var_1_3 , (-32 | last_1_var_1_9))) == var_1_6) {
		if (var_1_3 > (var_1_6 + var_1_7)) {
			var_1_9 = -8;
		} else {
			var_1_9 = last_1_var_1_9;
		}
	} else {
		var_1_9 = last_1_var_1_9;
	}


	// From: Req12Batch47100_while
	if (var_1_26 < (var_1_33 - (max (var_1_34 , var_1_35)))) {
		var_1_32 = ((var_1_5 || var_1_36) && ((var_1_17 >= var_1_13) || var_1_37));
	} else {
		var_1_32 = (var_1_36 || (var_1_37 && (var_1_4 || var_1_38)));
	}


	// From: Req6Batch47100_while
	if (var_1_17 != ((50 + var_1_16) << var_1_9)) {
		if (var_1_32) {
			var_1_15 = var_1_3;
		}
	}


	// From: Req1Batch47100_while
	if (var_1_32) {
		var_1_1 = (abs (min (10 , var_1_3)));
	} else {
		if (var_1_32) {
			if (var_1_32) {
				var_1_1 = var_1_3;
			} else {
				var_1_1 = 32;
			}
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req4Batch47100_while
	signed long int stepLocal_1 = var_1_11 - var_1_12;
	if (stepLocal_1 > (var_1_17 + var_1_3)) {
		var_1_10 = (var_1_13 - var_1_12);
	} else {
		var_1_10 = var_1_12;
	}


	// From: Req8Batch47100_while
	unsigned long int stepLocal_6 = var_1_17;
	signed long int stepLocal_5 = (var_1_12 - var_1_16) * 32;
	unsigned long int stepLocal_4 = var_1_10;
	if (var_1_3 < stepLocal_4) {
		if (var_1_7 < stepLocal_6) {
			if (var_1_19 > stepLocal_5) {
				var_1_20 = var_1_3;
			} else {
				var_1_20 = -10;
			}
		}
	}


	// From: Req9Batch47100_while
	if (var_1_32) {
		if (var_1_19 <= (var_1_17 + (var_1_11 * var_1_18))) {
			if (var_1_32 || (var_1_10 < var_1_9)) {
				var_1_21 = (var_1_22 + (max (var_1_23 , var_1_24)));
			} else {
				var_1_21 = var_1_23;
			}
		}
	} else {
		var_1_21 = 1;
	}


	// From: Req10Batch47100_while
	var_1_25 = (max (var_1_26 , var_1_27));


	// From: Req11Batch47100_while
	var_1_28 = (var_1_29 - (var_1_30 + var_1_31));


	// From: Req13Batch47100_while
	unsigned char stepLocal_7 = var_1_36;
	if ((var_1_27 + (var_1_34 - var_1_33)) >= var_1_26) {
		if (stepLocal_7 || var_1_32) {
			var_1_39 = var_1_22;
		} else {
			var_1_39 = var_1_24;
		}
	} else {
		var_1_39 = var_1_30;
	}


	// From: Req5Batch47100_while
	unsigned long int stepLocal_3 = var_1_7;
	unsigned long int stepLocal_2 = var_1_7;
	if (stepLocal_2 < (var_1_8 + var_1_6)) {
		if (var_1_13 <= stepLocal_3) {
			var_1_14 = (min (var_1_20 , var_1_3));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -126);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 2147483647);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -2147483648);
	assume_abort_if_not(var_1_18 <= 2147483647);
	assume_abort_if_not(var_1_18 != 0);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	assume_abort_if_not(var_1_19 != 0);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -1);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	return ((((((((((((var_1_32 ? (var_1_1 == ((signed char) (abs (min (10 , var_1_3))))) : (var_1_32 ? (var_1_32 ? (var_1_1 == ((signed char) var_1_3)) : (var_1_1 == ((signed char) 32))) : (var_1_1 == ((signed char) var_1_3)))) && ((var_1_3 > last_1_var_1_15) ? (var_1_6 == ((unsigned long int) (abs (var_1_7)))) : (var_1_6 == ((unsigned long int) (max (var_1_7 , var_1_8)))))) && (((min (var_1_3 , (-32 | last_1_var_1_9))) == var_1_6) ? ((var_1_3 > (var_1_6 + var_1_7)) ? (var_1_9 == ((signed short int) -8)) : (var_1_9 == ((signed short int) last_1_var_1_9))) : (var_1_9 == ((signed short int) last_1_var_1_9)))) && (((var_1_11 - var_1_12) > (var_1_17 + var_1_3)) ? (var_1_10 == ((unsigned long int) (var_1_13 - var_1_12))) : (var_1_10 == ((unsigned long int) var_1_12)))) && ((var_1_7 < (var_1_8 + var_1_6)) ? ((var_1_13 <= var_1_7) ? (var_1_14 == ((signed short int) (min (var_1_20 , var_1_3)))) : 1) : 1)) && ((var_1_17 != ((50 + var_1_16) << var_1_9)) ? (var_1_32 ? (var_1_15 == ((signed char) var_1_3)) : 1) : 1)) && (((var_1_6 / (min (var_1_18 , var_1_19))) < (max (var_1_16 , var_1_13))) ? (var_1_17 == ((unsigned long int) (min ((5u + 100u) , var_1_13)))) : 1)) && ((var_1_3 < var_1_10) ? ((var_1_7 < var_1_17) ? ((var_1_19 > ((var_1_12 - var_1_16) * 32)) ? (var_1_20 == ((signed char) var_1_3)) : (var_1_20 == ((signed char) -10))) : 1) : 1)) && (var_1_32 ? ((var_1_19 <= (var_1_17 + (var_1_11 * var_1_18))) ? ((var_1_32 || (var_1_10 < var_1_9)) ? (var_1_21 == ((signed char) (var_1_22 + (max (var_1_23 , var_1_24))))) : (var_1_21 == ((signed char) var_1_23))) : 1) : (var_1_21 == ((signed char) 1)))) && (var_1_25 == ((float) (max (var_1_26 , var_1_27))))) && (var_1_28 == ((signed char) (var_1_29 - (var_1_30 + var_1_31))))) && ((var_1_26 < (var_1_33 - (max (var_1_34 , var_1_35)))) ? (var_1_32 == ((unsigned char) ((var_1_5 || var_1_36) && ((var_1_17 >= var_1_13) || var_1_37)))) : (var_1_32 == ((unsigned char) (var_1_36 || (var_1_37 && (var_1_4 || var_1_38))))))) && (((var_1_27 + (var_1_34 - var_1_33)) >= var_1_26) ? ((var_1_36 || var_1_32) ? (var_1_39 == ((signed short int) var_1_22)) : (var_1_39 == ((signed short int) var_1_24))) : (var_1_39 == ((signed short int) var_1_30)))
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
