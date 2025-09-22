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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93100_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = -256;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 10;
signed long int var_1_6 = 5;
double var_1_7 = 31.25;
double var_1_8 = 7.6;
double var_1_9 = 8.9;
double var_1_10 = 256.8;
signed short int var_1_11 = 0;
signed short int var_1_12 = 10;
signed short int var_1_13 = -50;
signed short int var_1_14 = -25;
unsigned long int var_1_15 = 64;
unsigned long int var_1_16 = 16;
unsigned long int var_1_17 = 64;
signed short int var_1_18 = -5;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = -32;
signed long int var_1_25 = 50;
signed char var_1_26 = 1;
float var_1_27 = 256.25;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned long int var_1_30 = 0;
signed short int var_1_31 = 256;
signed long int var_1_33 = 1;
unsigned long int var_1_34 = 5;
signed long int var_1_35 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -256;
unsigned long int last_1_var_1_15 = 64;
unsigned char last_1_var_1_28 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch93100_1loop
	unsigned long int stepLocal_2 = last_1_var_1_15;
	signed long int stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = 25;
	if (stepLocal_1 == last_1_var_1_15) {
		if (var_1_6 < stepLocal_2) {
			var_1_7 = ((var_1_8 - var_1_9) + var_1_10);
		} else {
			if (last_1_var_1_15 >= stepLocal_0) {
				var_1_7 = (max ((var_1_8 - var_1_9) , var_1_10));
			} else {
				var_1_7 = var_1_10;
			}
		}
	} else {
		var_1_7 = var_1_10;
	}


	// From: Req4Batch93100_1loop
	if (var_1_13 == var_1_5) {
		var_1_15 = (max (var_1_16 , var_1_17));
	} else {
		if (var_1_9 < var_1_7) {
			var_1_15 = var_1_17;
		} else {
			var_1_15 = var_1_16;
		}
	}


	// From: Req6Batch93100_1loop
	if ((- (min (var_1_6 , 64))) >= last_1_var_1_1) {
		var_1_20 = 0;
	}


	// From: Req5Batch93100_1loop
	signed long int stepLocal_3 = 128 - var_1_19;
	if (stepLocal_3 != 32) {
		if (! var_1_20) {
			var_1_18 = var_1_12;
		} else {
			var_1_18 = var_1_19;
		}
	} else {
		var_1_18 = var_1_12;
	}


	// From: Req3Batch93100_1loop
	if ((- var_1_8) != var_1_7) {
		var_1_11 = (500 + var_1_12);
	} else {
		var_1_11 = (min (var_1_12 , (var_1_13 + var_1_14)));
	}


	// From: Req10Batch93100_1loop
	unsigned char stepLocal_4 = var_1_19;
	if (stepLocal_4 < ((var_1_13 + var_1_15) ^ var_1_15)) {
		if (last_1_var_1_28) {
			var_1_28 = var_1_29;
		}
	}


	// From: Req12Batch93100_1loop
	if (var_1_33 >= ((var_1_19 + var_1_35) - 32)) {
		var_1_34 = (max ((min ((var_1_35 + var_1_33) , 5u)) , var_1_19));
	}


	// From: Req11Batch93100_1loop
	signed short int stepLocal_5 = var_1_12;
	if (stepLocal_5 >= ((var_1_34 / var_1_31) + (var_1_19 >> var_1_33))) {
		var_1_30 = 1u;
	}


	// From: Req7Batch93100_1loop
	if (! var_1_20) {
		var_1_21 = (var_1_22 || var_1_23);
	} else {
		var_1_21 = ((var_1_13 > var_1_18) && (var_1_28 && var_1_23));
	}


	// From: Req1Batch93100_1loop
	if ((var_1_30 == var_1_15) && var_1_21) {
		var_1_1 = (min (var_1_5 , var_1_6));
	}


	// From: Req8Batch93100_1loop
	if (var_1_22) {
		if (-16 < ((var_1_19 - var_1_25) ^ (var_1_34 & var_1_13))) {
			if (var_1_4 && var_1_21) {
				var_1_24 = var_1_26;
			} else {
				var_1_24 = 16;
			}
		}
	} else {
		var_1_24 = var_1_26;
	}


	// From: Req9Batch93100_1loop
	if (128.125 >= ((var_1_9 - var_1_8) + var_1_10)) {
		if (! (var_1_1 >= var_1_18)) {
			var_1_27 = var_1_9;
		} else {
			var_1_27 = (min ((var_1_9 - (128.5f + var_1_8)) , var_1_10));
		}
	} else {
		var_1_27 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483647);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -16383);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -16383);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32768);
	assume_abort_if_not(var_1_31 <= 32767);
	assume_abort_if_not(var_1_31 != 0);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 7);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_28 = var_1_28;
}

int property(void) {
	return (((((((((((((var_1_30 == var_1_15) && var_1_21) ? (var_1_1 == ((signed long int) (min (var_1_5 , var_1_6)))) : 1) && ((var_1_5 == last_1_var_1_15) ? ((var_1_6 < last_1_var_1_15) ? (var_1_7 == ((double) ((var_1_8 - var_1_9) + var_1_10))) : ((last_1_var_1_15 >= 25) ? (var_1_7 == ((double) (max ((var_1_8 - var_1_9) , var_1_10)))) : (var_1_7 == ((double) var_1_10)))) : (var_1_7 == ((double) var_1_10)))) && (((- var_1_8) != var_1_7) ? (var_1_11 == ((signed short int) (500 + var_1_12))) : (var_1_11 == ((signed short int) (min (var_1_12 , (var_1_13 + var_1_14))))))) && ((var_1_13 == var_1_5) ? (var_1_15 == ((unsigned long int) (max (var_1_16 , var_1_17)))) : ((var_1_9 < var_1_7) ? (var_1_15 == ((unsigned long int) var_1_17)) : (var_1_15 == ((unsigned long int) var_1_16))))) && (((128 - var_1_19) != 32) ? ((! var_1_20) ? (var_1_18 == ((signed short int) var_1_12)) : (var_1_18 == ((signed short int) var_1_19))) : (var_1_18 == ((signed short int) var_1_12)))) && (((- (min (var_1_6 , 64))) >= last_1_var_1_1) ? (var_1_20 == ((unsigned char) 0)) : 1)) && ((! var_1_20) ? (var_1_21 == ((unsigned char) (var_1_22 || var_1_23))) : (var_1_21 == ((unsigned char) ((var_1_13 > var_1_18) && (var_1_28 && var_1_23)))))) && (var_1_22 ? ((-16 < ((var_1_19 - var_1_25) ^ (var_1_34 & var_1_13))) ? ((var_1_4 && var_1_21) ? (var_1_24 == ((signed char) var_1_26)) : (var_1_24 == ((signed char) 16))) : 1) : (var_1_24 == ((signed char) var_1_26)))) && ((128.125 >= ((var_1_9 - var_1_8) + var_1_10)) ? ((! (var_1_1 >= var_1_18)) ? (var_1_27 == ((float) var_1_9)) : (var_1_27 == ((float) (min ((var_1_9 - (128.5f + var_1_8)) , var_1_10))))) : (var_1_27 == ((float) var_1_10)))) && ((var_1_19 < ((var_1_13 + var_1_15) ^ var_1_15)) ? (last_1_var_1_28 ? (var_1_28 == ((unsigned char) var_1_29)) : 1) : 1)) && ((var_1_12 >= ((var_1_34 / var_1_31) + (var_1_19 >> var_1_33))) ? (var_1_30 == ((unsigned long int) 1u)) : 1)) && ((var_1_33 >= ((var_1_19 + var_1_35) - 32)) ? (var_1_34 == ((unsigned long int) (max ((min ((var_1_35 + var_1_33) , 5u)) , var_1_19)))) : 1)
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
