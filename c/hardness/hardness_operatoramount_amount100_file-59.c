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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Amount100.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 50;
unsigned long int var_1_2 = 32;
unsigned long int var_1_3 = 1;
unsigned long int var_1_4 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 64;
signed short int var_1_7 = -2;
signed short int var_1_8 = 1;
signed long int var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
signed char var_1_13 = 8;
signed char var_1_14 = 10;
signed char var_1_15 = 8;
unsigned char var_1_16 = 5;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 0;
signed short int var_1_19 = -128;
unsigned long int var_1_20 = 0;
unsigned char var_1_21 = 8;
signed char var_1_22 = 2;
double var_1_23 = 1000000.225;
unsigned char var_1_24 = 0;
double var_1_25 = 127.4;
signed long int var_1_26 = 128;
signed char var_1_27 = 25;
float var_1_28 = 8.1;
signed short int var_1_29 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_19 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch59Amount100
	if (var_1_15 > last_1_var_1_19) {
		var_1_16 = (var_1_5 - ((var_1_17 - var_1_8) - var_1_18));
	}


	// From: Req1Batch59Amount100
	if ((var_1_2 + (var_1_3 + 4u)) != var_1_4) {
		var_1_1 = ((var_1_5 - 2) - var_1_6);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req4Batch59Amount100
	if (! var_1_11) {
		if ((var_1_4 >= var_1_2) && var_1_11) {
			var_1_12 = (min (var_1_5 , var_1_8));
		} else {
			var_1_12 = var_1_6;
		}
	}


	// From: Req5Batch59Amount100
	if (var_1_11 || var_1_10) {
		var_1_13 = (var_1_8 + (min (var_1_14 , var_1_15)));
	}


	// From: Req11Batch59Amount100
	unsigned long int stepLocal_11 = (-5 * var_1_17) * (var_1_4 + var_1_20);
	if (var_1_11) {
		if (stepLocal_11 == var_1_12) {
			var_1_27 = (abs (var_1_14));
		}
	}


	// From: Req12Batch59Amount100
	var_1_28 = var_1_25;


	// From: Req13Batch59Amount100
	var_1_29 = var_1_5;


	// From: Req2Batch59Amount100
	unsigned long int stepLocal_2 = ~ (min (var_1_12 , var_1_2));
	unsigned long int stepLocal_1 = var_1_3;
	unsigned char stepLocal_0 = var_1_12;
	if (var_1_5 >= stepLocal_2) {
		if (stepLocal_0 <= (var_1_3 >> var_1_8)) {
			if (stepLocal_1 > (var_1_5 ^ (var_1_8 + var_1_6))) {
				var_1_7 = (min (var_1_6 , var_1_5));
			} else {
				var_1_7 = var_1_6;
			}
		}
	} else {
		var_1_7 = var_1_12;
	}


	// From: Req8Batch59Amount100
	unsigned char stepLocal_9 = var_1_11;
	signed long int stepLocal_8 = var_1_6 >> var_1_22;
	unsigned long int stepLocal_7 = var_1_4;
	if (var_1_29 < stepLocal_8) {
		if (32u <= stepLocal_7) {
			var_1_21 = (var_1_5 - 4);
		} else {
			if (var_1_10 || stepLocal_9) {
				var_1_21 = var_1_22;
			} else {
				var_1_21 = (max (((var_1_5 - var_1_8) - 8) , var_1_18));
			}
		}
	} else {
		var_1_21 = var_1_22;
	}


	// From: Req10Batch59Amount100
	unsigned long int stepLocal_10 = var_1_2;
	if (-16 >= stepLocal_10) {
		var_1_26 = var_1_6;
	} else {
		var_1_26 = (max ((max (var_1_5 , (var_1_6 - var_1_7))) , var_1_24));
	}


	// From: Req3Batch59Amount100
	unsigned char stepLocal_5 = var_1_11;
	unsigned long int stepLocal_4 = var_1_2;
	unsigned long int stepLocal_3 = var_1_2;
	if (var_1_3 <= stepLocal_3) {
		var_1_9 = (var_1_26 - var_1_8);
	} else {
		if (var_1_10 || stepLocal_5) {
			if (2 < stepLocal_4) {
				var_1_9 = var_1_26;
			}
		}
	}


	// From: Req7Batch59Amount100
	signed long int stepLocal_6 = var_1_17 << (1u + var_1_20);
	if (stepLocal_6 > var_1_16) {
		var_1_19 = (max (-1 , (max ((var_1_9 - var_1_16) , var_1_8))));
	} else {
		var_1_19 = (var_1_6 + var_1_20);
	}


	// From: Req9Batch59Amount100
	if ((var_1_17 << (var_1_20 + var_1_24)) >= var_1_19) {
		var_1_23 = ((199.4 + 9.99999999999993E13) + var_1_25);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 31);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 95);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 7);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	return ((((((((((((((var_1_2 + (var_1_3 + 4u)) != var_1_4) ? (var_1_1 == ((unsigned char) ((var_1_5 - 2) - var_1_6))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_5 >= (~ (min (var_1_12 , var_1_2)))) ? ((var_1_12 <= (var_1_3 >> var_1_8)) ? ((var_1_3 > (var_1_5 ^ (var_1_8 + var_1_6))) ? (var_1_7 == ((signed short int) (min (var_1_6 , var_1_5)))) : (var_1_7 == ((signed short int) var_1_6))) : 1) : (var_1_7 == ((signed short int) var_1_12)))) && ((var_1_3 <= var_1_2) ? (var_1_9 == ((signed long int) (var_1_26 - var_1_8))) : ((var_1_10 || var_1_11) ? ((2 < var_1_2) ? (var_1_9 == ((signed long int) var_1_26)) : 1) : 1))) && ((! var_1_11) ? (((var_1_4 >= var_1_2) && var_1_11) ? (var_1_12 == ((unsigned char) (min (var_1_5 , var_1_8)))) : (var_1_12 == ((unsigned char) var_1_6))) : 1)) && ((var_1_11 || var_1_10) ? (var_1_13 == ((signed char) (var_1_8 + (min (var_1_14 , var_1_15))))) : 1)) && ((var_1_15 > last_1_var_1_19) ? (var_1_16 == ((unsigned char) (var_1_5 - ((var_1_17 - var_1_8) - var_1_18)))) : 1)) && (((var_1_17 << (1u + var_1_20)) > var_1_16) ? (var_1_19 == ((signed short int) (max (-1 , (max ((var_1_9 - var_1_16) , var_1_8)))))) : (var_1_19 == ((signed short int) (var_1_6 + var_1_20))))) && ((var_1_29 < (var_1_6 >> var_1_22)) ? ((32u <= var_1_4) ? (var_1_21 == ((unsigned char) (var_1_5 - 4))) : ((var_1_10 || var_1_11) ? (var_1_21 == ((unsigned char) var_1_22)) : (var_1_21 == ((unsigned char) (max (((var_1_5 - var_1_8) - 8) , var_1_18)))))) : (var_1_21 == ((unsigned char) var_1_22)))) && (((var_1_17 << (var_1_20 + var_1_24)) >= var_1_19) ? (var_1_23 == ((double) ((199.4 + 9.99999999999993E13) + var_1_25))) : 1)) && ((-16 >= var_1_2) ? (var_1_26 == ((signed long int) var_1_6)) : (var_1_26 == ((signed long int) (max ((max (var_1_5 , (var_1_6 - var_1_7))) , var_1_24)))))) && (var_1_11 ? ((((-5 * var_1_17) * (var_1_4 + var_1_20)) == var_1_12) ? (var_1_27 == ((signed char) (abs (var_1_14)))) : 1) : 1)) && (var_1_28 == ((float) var_1_25))) && (var_1_29 == ((signed short int) var_1_5))
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
