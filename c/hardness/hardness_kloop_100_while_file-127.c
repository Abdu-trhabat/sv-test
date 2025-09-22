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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127100_while.c", 13, "reach_error"); }
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
signed short int var_1_1 = 1000;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 50;
signed char var_1_13 = 5;
double var_1_14 = 999999999999.875;
double var_1_15 = 8.05;
unsigned long int var_1_16 = 1;
unsigned char var_1_17 = 128;
signed short int var_1_18 = -500;
signed short int var_1_19 = 64;
signed short int var_1_20 = 16;
signed char var_1_21 = -1;
signed char var_1_22 = 5;
unsigned char var_1_23 = 1;
signed long int var_1_24 = -64;
signed char var_1_25 = -1;
signed char var_1_26 = 10;
signed char var_1_27 = 1;
unsigned long int var_1_28 = 256;
signed char var_1_29 = 16;
signed char var_1_30 = 0;
signed char var_1_31 = 8;
signed char var_1_32 = 100;
signed char var_1_33 = -64;
signed char var_1_34 = 4;
signed char var_1_35 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_6 = 1;
unsigned short int last_1_var_1_12 = 50;
double last_1_var_1_14 = 999999999999.875;
unsigned long int last_1_var_1_16 = 1;
signed long int last_1_var_1_24 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch127100_while
	if (! last_1_var_1_6) {
		if ((4 + last_1_var_1_12) >= (min (last_1_var_1_16 , last_1_var_1_24))) {
			var_1_1 = last_1_var_1_12;
		} else {
			var_1_1 = 8;
		}
	} else {
		var_1_1 = last_1_var_1_12;
	}


	// From: Req5Batch127100_while
	unsigned char stepLocal_1 = var_1_17;
	signed long int stepLocal_0 = var_1_17 - var_1_13;
	if (stepLocal_0 < (last_1_var_1_24 - 64)) {
		if (last_1_var_1_24 > stepLocal_1) {
			if (last_1_var_1_14 != var_1_15) {
				var_1_16 = last_1_var_1_24;
			} else {
				var_1_16 = var_1_17;
			}
		} else {
			var_1_16 = var_1_13;
		}
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req10Batch127100_while
	var_1_24 = ((var_1_17 + (min (var_1_13 , var_1_16))) - var_1_19);


	// From: Req8Batch127100_while
	unsigned char stepLocal_3 = var_1_17;
	if ((var_1_16 + var_1_24) <= stepLocal_3) {
		var_1_22 = (var_1_13 - 50);
	}


	// From: Req9Batch127100_while
	var_1_23 = (var_1_8 || var_1_9);


	// From: Req13Batch127100_while
	var_1_29 = (var_1_13 - (var_1_30 + var_1_31));


	// From: Req2Batch127100_while
	if ((var_1_16 * -8) > var_1_24) {
		var_1_6 = (var_1_8 || (var_1_23 && var_1_9));
	} else {
		var_1_6 = (var_1_10 && var_1_11);
	}


	// From: Req14Batch127100_while
	if ((var_1_9 || (! var_1_6)) && var_1_10) {
		var_1_32 = (min (((abs (var_1_26)) - var_1_31) , (abs (-1))));
	} else {
		var_1_32 = (var_1_26 + var_1_13);
	}


	// From: Req15Batch127100_while
	if (var_1_6) {
		var_1_33 = (((var_1_13 - var_1_34) + var_1_35) + (min (var_1_26 , var_1_31)));
	} else {
		var_1_33 = var_1_34;
	}


	// From: Req12Batch127100_while
	signed long int stepLocal_4 = var_1_29 ^ var_1_27;
	if (var_1_16 != stepLocal_4) {
		var_1_28 = var_1_17;
	}


	// From: Req4Batch127100_while
	if (! ((min (var_1_28 , var_1_24)) >= 16)) {
		var_1_14 = var_1_15;
	}


	// From: Req6Batch127100_while
	if (var_1_10 || (var_1_28 > var_1_24)) {
		var_1_18 = (max (var_1_13 , (var_1_16 - (max (var_1_17 , var_1_19)))));
	} else {
		if (var_1_28 < var_1_16) {
			var_1_18 = (max (var_1_20 , var_1_19));
		} else {
			var_1_18 = (var_1_16 + var_1_13);
		}
	}


	// From: Req7Batch127100_while
	unsigned long int stepLocal_2 = min (var_1_16 , var_1_18);
	if (stepLocal_2 < 500u) {
		var_1_21 = (abs (var_1_13));
	}


	// From: Req11Batch127100_while
	if (var_1_15 < var_1_14) {
		var_1_25 = (var_1_13 + (min (var_1_26 , var_1_27)));
	}


	// From: Req3Batch127100_while
	if (var_1_28 < (last_1_var_1_12 >> var_1_13)) {
		if (! (var_1_1 > var_1_28)) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = last_1_var_1_12;
		}
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 7);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 127);
	assume_abort_if_not(var_1_17 <= 255);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32767);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -63);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -31);
	assume_abort_if_not(var_1_35 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	return (((((((((((((((! last_1_var_1_6) ? (((4 + last_1_var_1_12) >= (min (last_1_var_1_16 , last_1_var_1_24))) ? (var_1_1 == ((signed short int) last_1_var_1_12)) : (var_1_1 == ((signed short int) 8))) : (var_1_1 == ((signed short int) last_1_var_1_12))) && (((var_1_16 * -8) > var_1_24) ? (var_1_6 == ((unsigned char) (var_1_8 || (var_1_23 && var_1_9)))) : (var_1_6 == ((unsigned char) (var_1_10 && var_1_11))))) && ((var_1_28 < (last_1_var_1_12 >> var_1_13)) ? ((! (var_1_1 > var_1_28)) ? (var_1_12 == ((unsigned short int) var_1_13)) : (var_1_12 == ((unsigned short int) last_1_var_1_12))) : 1)) && ((! ((min (var_1_28 , var_1_24)) >= 16)) ? (var_1_14 == ((double) var_1_15)) : 1)) && (((var_1_17 - var_1_13) < (last_1_var_1_24 - 64)) ? ((last_1_var_1_24 > var_1_17) ? ((last_1_var_1_14 != var_1_15) ? (var_1_16 == ((unsigned long int) last_1_var_1_24)) : (var_1_16 == ((unsigned long int) var_1_17))) : (var_1_16 == ((unsigned long int) var_1_13))) : (var_1_16 == ((unsigned long int) var_1_17)))) && ((var_1_10 || (var_1_28 > var_1_24)) ? (var_1_18 == ((signed short int) (max (var_1_13 , (var_1_16 - (max (var_1_17 , var_1_19))))))) : ((var_1_28 < var_1_16) ? (var_1_18 == ((signed short int) (max (var_1_20 , var_1_19)))) : (var_1_18 == ((signed short int) (var_1_16 + var_1_13)))))) && (((min (var_1_16 , var_1_18)) < 500u) ? (var_1_21 == ((signed char) (abs (var_1_13)))) : 1)) && (((var_1_16 + var_1_24) <= var_1_17) ? (var_1_22 == ((signed char) (var_1_13 - 50))) : 1)) && (var_1_23 == ((unsigned char) (var_1_8 || var_1_9)))) && (var_1_24 == ((signed long int) ((var_1_17 + (min (var_1_13 , var_1_16))) - var_1_19)))) && ((var_1_15 < var_1_14) ? (var_1_25 == ((signed char) (var_1_13 + (min (var_1_26 , var_1_27))))) : 1)) && ((var_1_16 != (var_1_29 ^ var_1_27)) ? (var_1_28 == ((unsigned long int) var_1_17)) : 1)) && (var_1_29 == ((signed char) (var_1_13 - (var_1_30 + var_1_31))))) && (((var_1_9 || (! var_1_6)) && var_1_10) ? (var_1_32 == ((signed char) (min (((abs (var_1_26)) - var_1_31) , (abs (-1)))))) : (var_1_32 == ((signed char) (var_1_26 + var_1_13))))) && (var_1_6 ? (var_1_33 == ((signed char) (((var_1_13 - var_1_34) + var_1_35) + (min (var_1_26 , var_1_31))))) : (var_1_33 == ((signed char) var_1_34)))
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
