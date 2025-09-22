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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142100_while.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 32;
unsigned long int var_1_5 = 1;
unsigned long int var_1_6 = 8;
unsigned long int var_1_7 = 2;
signed char var_1_8 = 25;
signed char var_1_9 = -2;
signed char var_1_10 = 32;
unsigned long int var_1_11 = 128;
signed long int var_1_13 = 1;
signed long int var_1_14 = 4;
signed long int var_1_15 = 32;
signed long int var_1_16 = 1000;
unsigned long int var_1_17 = 2;
unsigned long int var_1_18 = 128;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 16;
unsigned char var_1_23 = 50;
unsigned char var_1_24 = 64;
unsigned short int var_1_25 = 5;
signed char var_1_26 = 5;
signed long int var_1_29 = 10;
unsigned char var_1_31 = 4;
unsigned char var_1_33 = 200;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 8;
signed char var_1_36 = 5;
unsigned short int var_1_37 = 16;
signed char var_1_38 = 1;
unsigned short int var_1_39 = 10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 32;
unsigned long int last_1_var_1_11 = 128;
unsigned long int last_1_var_1_17 = 2;
unsigned char last_1_var_1_19 = 0;
unsigned short int last_1_var_1_37 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch142100_while
	unsigned long int stepLocal_0 = last_1_var_1_17;
	if (last_1_var_1_11 < stepLocal_0) {
		if (last_1_var_1_19) {
			var_1_1 = (abs (min (var_1_5 , var_1_6)));
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = 1u;
	}


	// From: Req8Batch142100_while
	unsigned char stepLocal_7 = var_1_20;
	unsigned long int stepLocal_6 = last_1_var_1_1;
	unsigned long int stepLocal_5 = last_1_var_1_37 * last_1_var_1_17;
	if (stepLocal_5 > 5u) {
		if (var_1_5 >= stepLocal_6) {
			var_1_24 = var_1_22;
		} else {
			if (stepLocal_7 || last_1_var_1_19) {
				var_1_24 = var_1_22;
			} else {
				var_1_24 = var_1_23;
			}
		}
	} else {
		var_1_24 = var_1_23;
	}


	// From: Req5Batch142100_while
	unsigned long int stepLocal_4 = var_1_6;
	if (var_1_7 > stepLocal_4) {
		var_1_17 = (var_1_15 + (max (var_1_16 , (max (var_1_14 , var_1_18)))));
	} else {
		var_1_17 = (2284571271u - (var_1_15 + var_1_14));
	}


	// From: Req6Batch142100_while
	var_1_19 = var_1_20;


	// From: Req7Batch142100_while
	if (var_1_17 >= var_1_9) {
		if (var_1_19) {
			var_1_21 = (abs (max (var_1_22 , var_1_23)));
		} else {
			var_1_21 = var_1_23;
		}
	}


	// From: Req10Batch142100_while
	signed long int stepLocal_13 = -2;
	unsigned long int stepLocal_12 = var_1_6;
	signed long int stepLocal_11 = var_1_14 >> var_1_36;
	if (stepLocal_12 > var_1_17) {
		var_1_31 = (var_1_33 - (var_1_34 + (min (var_1_35 , 16))));
	} else {
		if (stepLocal_13 <= var_1_10) {
			if (var_1_18 < stepLocal_11) {
				var_1_31 = var_1_22;
			} else {
				var_1_31 = var_1_36;
			}
		}
	}


	// From: Req13Batch142100_while
	var_1_39 = var_1_33;


	// From: Req4Batch142100_while
	unsigned long int stepLocal_3 = var_1_17;
	if (stepLocal_3 != var_1_9) {
		var_1_13 = ((64 - (abs (var_1_9))) + (var_1_14 - (var_1_15 + var_1_16)));
	}


	// From: Req9Batch142100_while
	unsigned long int stepLocal_10 = var_1_5;
	signed char stepLocal_9 = var_1_9;
	unsigned char stepLocal_8 = -100000000 <= (max (var_1_17 , var_1_22));
	if (var_1_19 || stepLocal_8) {
		if (stepLocal_10 < 16u) {
			if (var_1_17 > stepLocal_9) {
				var_1_25 = (128 + var_1_23);
			}
		}
	} else {
		var_1_25 = (min ((max (var_1_23 , var_1_39)) , 16));
	}


	// From: Req12Batch142100_while
	signed long int stepLocal_14 = max (var_1_13 , (max (var_1_25 , var_1_39)));
	if (stepLocal_14 > (var_1_29 / (min (var_1_26 , var_1_33)))) {
		var_1_38 = ((var_1_36 + var_1_35) - var_1_34);
	}


	// From: Req3Batch142100_while
	if (! (var_1_19 || (var_1_1 < last_1_var_1_11))) {
		var_1_11 = (abs (var_1_5));
	} else {
		if (var_1_19) {
			var_1_11 = var_1_5;
		} else {
			var_1_11 = 4u;
		}
	}


	// From: Req11Batch142100_while
	var_1_37 = (var_1_24 + (var_1_34 + var_1_25));


	// From: Req2Batch142100_while
	unsigned long int stepLocal_2 = var_1_11;
	unsigned char stepLocal_1 = var_1_19;
	if (stepLocal_2 > var_1_5) {
		if (stepLocal_1 || (var_1_11 != var_1_5)) {
			var_1_8 = var_1_9;
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_9;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 536870912);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 536870911);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	assume_abort_if_not(var_1_26 != 0);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	assume_abort_if_not(var_1_29 != 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 30);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_37 = var_1_37;
}

int property(void) {
	return (((((((((((((last_1_var_1_11 < last_1_var_1_17) ? (last_1_var_1_19 ? (var_1_1 == ((unsigned long int) (abs (min (var_1_5 , var_1_6))))) : (var_1_1 == ((unsigned long int) var_1_7))) : (var_1_1 == ((unsigned long int) 1u))) && ((var_1_11 > var_1_5) ? ((var_1_19 || (var_1_11 != var_1_5)) ? (var_1_8 == ((signed char) var_1_9)) : (var_1_8 == ((signed char) var_1_10))) : (var_1_8 == ((signed char) var_1_9)))) && ((! (var_1_19 || (var_1_1 < last_1_var_1_11))) ? (var_1_11 == ((unsigned long int) (abs (var_1_5)))) : (var_1_19 ? (var_1_11 == ((unsigned long int) var_1_5)) : (var_1_11 == ((unsigned long int) 4u))))) && ((var_1_17 != var_1_9) ? (var_1_13 == ((signed long int) ((64 - (abs (var_1_9))) + (var_1_14 - (var_1_15 + var_1_16))))) : 1)) && ((var_1_7 > var_1_6) ? (var_1_17 == ((unsigned long int) (var_1_15 + (max (var_1_16 , (max (var_1_14 , var_1_18))))))) : (var_1_17 == ((unsigned long int) (2284571271u - (var_1_15 + var_1_14)))))) && (var_1_19 == ((unsigned char) var_1_20))) && ((var_1_17 >= var_1_9) ? (var_1_19 ? (var_1_21 == ((unsigned char) (abs (max (var_1_22 , var_1_23))))) : (var_1_21 == ((unsigned char) var_1_23))) : 1)) && (((last_1_var_1_37 * last_1_var_1_17) > 5u) ? ((var_1_5 >= last_1_var_1_1) ? (var_1_24 == ((unsigned char) var_1_22)) : ((var_1_20 || last_1_var_1_19) ? (var_1_24 == ((unsigned char) var_1_22)) : (var_1_24 == ((unsigned char) var_1_23)))) : (var_1_24 == ((unsigned char) var_1_23)))) && ((var_1_19 || (-100000000 <= (max (var_1_17 , var_1_22)))) ? ((var_1_5 < 16u) ? ((var_1_17 > var_1_9) ? (var_1_25 == ((unsigned short int) (128 + var_1_23))) : 1) : 1) : (var_1_25 == ((unsigned short int) (min ((max (var_1_23 , var_1_39)) , 16)))))) && ((var_1_6 > var_1_17) ? (var_1_31 == ((unsigned char) (var_1_33 - (var_1_34 + (min (var_1_35 , 16)))))) : ((-2 <= var_1_10) ? ((var_1_18 < (var_1_14 >> var_1_36)) ? (var_1_31 == ((unsigned char) var_1_22)) : (var_1_31 == ((unsigned char) var_1_36))) : 1))) && (var_1_37 == ((unsigned short int) (var_1_24 + (var_1_34 + var_1_25))))) && (((max (var_1_13 , (max (var_1_25 , var_1_39)))) > (var_1_29 / (min (var_1_26 , var_1_33)))) ? (var_1_38 == ((signed char) ((var_1_36 + var_1_35) - var_1_34))) : 1)) && (var_1_39 == ((unsigned short int) var_1_33))
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
