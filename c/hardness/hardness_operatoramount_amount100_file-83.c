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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Amount100.c", 13, "reach_error"); }
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
signed short int var_1_1 = -256;
signed short int var_1_3 = 24009;
signed short int var_1_4 = 32;
signed short int var_1_5 = 64;
signed short int var_1_6 = 19467;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
signed short int var_1_13 = 10;
float var_1_14 = 25.75;
float var_1_15 = 9.5;
signed short int var_1_16 = -128;
signed long int var_1_17 = -8;
double var_1_18 = 100.5;
signed char var_1_19 = 16;
unsigned short int var_1_20 = 19664;
unsigned short int var_1_21 = 18224;
signed char var_1_22 = -32;
signed char var_1_23 = -10;
float var_1_24 = 199.875;
float var_1_25 = 0.875;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
signed short int var_1_31 = -8;
signed char var_1_32 = 2;

// Calibration values

// Last'ed variables
float last_1_var_1_12 = 15.4;
unsigned char last_1_var_1_30 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch83Amount100
	if (last_1_var_1_12 > (var_1_14 + var_1_15)) {
		var_1_26 = (last_1_var_1_30 || (var_1_27 && var_1_28));
	} else {
		var_1_26 = (! var_1_29);
	}


	// From: Req1Batch83Amount100
	if (var_1_26) {
		var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
	} else {
		var_1_1 = ((max (var_1_3 , (var_1_6 - var_1_4))) - var_1_5);
	}


	// From: Req3Batch83Amount100
	if (! var_1_26) {
		var_1_12 = ((var_1_14 + (abs (49.5f))) + var_1_15);
	} else {
		var_1_12 = (var_1_15 + var_1_14);
	}


	// From: Req2Batch83Amount100
	var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));


	// From: Req4Batch83Amount100
	if ((abs (var_1_15)) < var_1_12) {
		var_1_16 = -4;
	}


	// From: Req6Batch83Amount100
	if (var_1_13 == (var_1_10 * (var_1_8 + 16))) {
		var_1_18 = var_1_14;
	} else {
		var_1_18 = var_1_15;
	}


	// From: Req8Batch83Amount100
	if (var_1_18 < var_1_14) {
		var_1_22 = (var_1_11 + var_1_23);
	} else {
		var_1_22 = var_1_8;
	}


	// From: Req9Batch83Amount100
	var_1_24 = (max ((var_1_25 - 9.9999999999995E12f) , var_1_14));


	// From: Req12Batch83Amount100
	unsigned char stepLocal_1 = var_1_29;
	if (((var_1_13 / var_1_8) > -4) || stepLocal_1) {
		var_1_31 = (min ((var_1_1 - (var_1_10 + var_1_11)) , (min (var_1_9 , var_1_23))));
	}


	// From: Req5Batch83Amount100
	if (var_1_24 <= var_1_15) {
		var_1_17 = (max ((max ((abs (var_1_6)) , var_1_5)) , (var_1_3 + var_1_1)));
	}


	// From: Req11Batch83Amount100
	unsigned short int stepLocal_0 = var_1_20;
	if ((- (var_1_25 - 4.6)) < (- var_1_24)) {
		if ((var_1_17 + var_1_21) < stepLocal_0) {
			var_1_30 = (var_1_28 || var_1_27);
		} else {
			var_1_30 = var_1_27;
		}
	} else {
		var_1_30 = var_1_28;
	}


	// From: Req7Batch83Amount100
	if (var_1_18 == var_1_15) {
		if (var_1_30) {
			if (((var_1_20 + var_1_21) - var_1_8) < (min ((var_1_13 / var_1_6) , -5))) {
				var_1_19 = (var_1_9 + 8);
			} else {
				var_1_19 = var_1_8;
			}
		}
	} else {
		var_1_19 = -4;
	}


	// From: Req13Batch83Amount100
	if ((var_1_6 != var_1_9) || (var_1_4 < var_1_21)) {
		var_1_32 = var_1_11;
	} else {
		if ((var_1_11 / var_1_8) < ((var_1_5 / var_1_21) * var_1_17)) {
			var_1_32 = var_1_10;
		} else {
			var_1_32 = var_1_23;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 16382);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16382);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32768);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16384);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_30 = var_1_30;
}

int property(void) {
	return ((((((((((((var_1_26 ? (var_1_1 == ((signed short int) ((var_1_3 - var_1_4) - var_1_5))) : (var_1_1 == ((signed short int) ((max (var_1_3 , (var_1_6 - var_1_4))) - var_1_5)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((! var_1_26) ? (var_1_12 == ((float) ((var_1_14 + (abs (49.5f))) + var_1_15))) : (var_1_12 == ((float) (var_1_15 + var_1_14))))) && (((abs (var_1_15)) < var_1_12) ? (var_1_16 == ((signed short int) -4)) : 1)) && ((var_1_24 <= var_1_15) ? (var_1_17 == ((signed long int) (max ((max ((abs (var_1_6)) , var_1_5)) , (var_1_3 + var_1_1))))) : 1)) && ((var_1_13 == (var_1_10 * (var_1_8 + 16))) ? (var_1_18 == ((double) var_1_14)) : (var_1_18 == ((double) var_1_15)))) && ((var_1_18 == var_1_15) ? (var_1_30 ? ((((var_1_20 + var_1_21) - var_1_8) < (min ((var_1_13 / var_1_6) , -5))) ? (var_1_19 == ((signed char) (var_1_9 + 8))) : (var_1_19 == ((signed char) var_1_8))) : 1) : (var_1_19 == ((signed char) -4)))) && ((var_1_18 < var_1_14) ? (var_1_22 == ((signed char) (var_1_11 + var_1_23))) : (var_1_22 == ((signed char) var_1_8)))) && (var_1_24 == ((float) (max ((var_1_25 - 9.9999999999995E12f) , var_1_14))))) && ((last_1_var_1_12 > (var_1_14 + var_1_15)) ? (var_1_26 == ((unsigned char) (last_1_var_1_30 || (var_1_27 && var_1_28)))) : (var_1_26 == ((unsigned char) (! var_1_29))))) && (((- (var_1_25 - 4.6)) < (- var_1_24)) ? (((var_1_17 + var_1_21) < var_1_20) ? (var_1_30 == ((unsigned char) (var_1_28 || var_1_27))) : (var_1_30 == ((unsigned char) var_1_27))) : (var_1_30 == ((unsigned char) var_1_28)))) && ((((var_1_13 / var_1_8) > -4) || var_1_29) ? (var_1_31 == ((signed short int) (min ((var_1_1 - (var_1_10 + var_1_11)) , (min (var_1_9 , var_1_23)))))) : 1)) && (((var_1_6 != var_1_9) || (var_1_4 < var_1_21)) ? (var_1_32 == ((signed char) var_1_11)) : (((var_1_11 / var_1_8) < ((var_1_5 / var_1_21) * var_1_17)) ? (var_1_32 == ((signed char) var_1_10)) : (var_1_32 == ((signed char) var_1_23))))
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
