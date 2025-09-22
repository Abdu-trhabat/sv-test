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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24100_1loop.c", 13, "reach_error"); }
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
float var_1_1 = 0.8;
float var_1_5 = 10000000000.75;
float var_1_6 = 50.5;
float var_1_7 = 3.875;
unsigned long int var_1_8 = 256;
unsigned long int var_1_9 = 4;
unsigned short int var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 64;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 2;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 2053472543;
unsigned long int var_1_25 = 3893650370;
unsigned long int var_1_26 = 8;
float var_1_27 = 32.5;
float var_1_28 = 0.0;
float var_1_29 = 127.5;
float var_1_30 = 5.25;
float var_1_31 = 9.4;
float var_1_32 = 5.4;
float var_1_33 = 0.5;
signed char var_1_34 = 5;
signed char var_1_35 = -1;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_8 = 256;
unsigned char last_1_var_1_15 = 0;
unsigned char last_1_var_1_16 = 1;
unsigned char last_1_var_1_20 = 8;
unsigned long int last_1_var_1_23 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch24100_1loop
	if (last_1_var_1_16) {
		var_1_11 = (last_1_var_1_15 && var_1_13);
	} else {
		var_1_11 = ((! var_1_13) && var_1_14);
	}


	// From: Req10Batch24100_1loop
	if (var_1_11) {
		var_1_27 = (max (var_1_7 , 24.8f));
	} else {
		var_1_27 = (min (((min (var_1_6 , var_1_5)) - (var_1_28 - var_1_29)) , var_1_7));
	}


	// From: Req9Batch24100_1loop
	if (((1.5899999999999999 * var_1_5) * (var_1_27 / 9.5)) <= var_1_6) {
		var_1_26 = var_1_19;
	}


	// From: Req8Batch24100_1loop
	unsigned long int stepLocal_5 = last_1_var_1_8;
	unsigned long int stepLocal_4 = last_1_var_1_8;
	if (stepLocal_5 == last_1_var_1_20) {
		if (var_1_19 >= stepLocal_4) {
			var_1_23 = (var_1_22 + (var_1_24 - var_1_21));
		} else {
			var_1_23 = ((var_1_25 - last_1_var_1_23) - var_1_18);
		}
	}


	// From: Req6Batch24100_1loop
	signed long int stepLocal_2 = (var_1_18 + 64) - var_1_19;
	if (var_1_13) {
		var_1_16 = (var_1_14 && var_1_17);
	} else {
		if (var_1_23 <= stepLocal_2) {
			var_1_16 = var_1_14;
		} else {
			var_1_16 = var_1_17;
		}
	}


	// From: Req7Batch24100_1loop
	unsigned long int stepLocal_3 = var_1_9;
	if (stepLocal_3 > (var_1_23 | (max (var_1_18 , var_1_23)))) {
		var_1_20 = (max (var_1_19 , (abs (var_1_21 + var_1_22))));
	}


	// From: Req12Batch24100_1loop
	if ((- 3.75) < var_1_29) {
		var_1_33 = (abs (abs (var_1_6 - var_1_29)));
	} else {
		var_1_33 = (min (var_1_31 , 8.75f));
	}


	// From: Req13Batch24100_1loop
	var_1_34 = var_1_35;


	// From: Req2Batch24100_1loop
	unsigned long int stepLocal_1 = var_1_26;
	if (var_1_5 >= var_1_6) {
		if (var_1_23 < stepLocal_1) {
			var_1_8 = (max ((var_1_26 + (max (var_1_23 , var_1_9))) , 1u));
		} else {
			var_1_8 = var_1_9;
		}
	} else {
		var_1_8 = var_1_23;
	}


	// From: Req11Batch24100_1loop
	if (var_1_7 <= var_1_6) {
		var_1_30 = ((var_1_31 + var_1_32) + (max (var_1_29 , var_1_7)));
	} else {
		if (var_1_18 >= (min ((var_1_8 + var_1_24) , 25))) {
			var_1_30 = (var_1_32 + (min ((min (var_1_7 , var_1_31)) , var_1_29)));
		} else {
			var_1_30 = (32.5f - (64.4f + var_1_29));
		}
	}


	// From: Req5Batch24100_1loop
	if ((var_1_5 * var_1_30) < var_1_7) {
		var_1_15 = ((var_1_11 && var_1_13) || (! var_1_14));
	} else {
		var_1_15 = (! var_1_13);
	}


	// From: Req1Batch24100_1loop
	unsigned char stepLocal_0 = var_1_20;
	if (stepLocal_0 <= var_1_8) {
		var_1_1 = (var_1_5 - var_1_6);
	} else {
		var_1_1 = (10.5f + var_1_7);
	}


	// From: Req3Batch24100_1loop
	var_1_10 = var_1_8;
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 128);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 3221225470);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 4611686.018427383000e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	return (((((((((((((var_1_20 <= var_1_8) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : (var_1_1 == ((float) (10.5f + var_1_7)))) && ((var_1_5 >= var_1_6) ? ((var_1_23 < var_1_26) ? (var_1_8 == ((unsigned long int) (max ((var_1_26 + (max (var_1_23 , var_1_9))) , 1u)))) : (var_1_8 == ((unsigned long int) var_1_9))) : (var_1_8 == ((unsigned long int) var_1_23)))) && (var_1_10 == ((unsigned short int) var_1_8))) && (last_1_var_1_16 ? (var_1_11 == ((unsigned char) (last_1_var_1_15 && var_1_13))) : (var_1_11 == ((unsigned char) ((! var_1_13) && var_1_14))))) && (((var_1_5 * var_1_30) < var_1_7) ? (var_1_15 == ((unsigned char) ((var_1_11 && var_1_13) || (! var_1_14)))) : (var_1_15 == ((unsigned char) (! var_1_13))))) && (var_1_13 ? (var_1_16 == ((unsigned char) (var_1_14 && var_1_17))) : ((var_1_23 <= ((var_1_18 + 64) - var_1_19)) ? (var_1_16 == ((unsigned char) var_1_14)) : (var_1_16 == ((unsigned char) var_1_17))))) && ((var_1_9 > (var_1_23 | (max (var_1_18 , var_1_23)))) ? (var_1_20 == ((unsigned char) (max (var_1_19 , (abs (var_1_21 + var_1_22)))))) : 1)) && ((last_1_var_1_8 == last_1_var_1_20) ? ((var_1_19 >= last_1_var_1_8) ? (var_1_23 == ((unsigned long int) (var_1_22 + (var_1_24 - var_1_21)))) : (var_1_23 == ((unsigned long int) ((var_1_25 - last_1_var_1_23) - var_1_18)))) : 1)) && ((((1.5899999999999999 * var_1_5) * (var_1_27 / 9.5)) <= var_1_6) ? (var_1_26 == ((unsigned long int) var_1_19)) : 1)) && (var_1_11 ? (var_1_27 == ((float) (max (var_1_7 , 24.8f)))) : (var_1_27 == ((float) (min (((min (var_1_6 , var_1_5)) - (var_1_28 - var_1_29)) , var_1_7)))))) && ((var_1_7 <= var_1_6) ? (var_1_30 == ((float) ((var_1_31 + var_1_32) + (max (var_1_29 , var_1_7))))) : ((var_1_18 >= (min ((var_1_8 + var_1_24) , 25))) ? (var_1_30 == ((float) (var_1_32 + (min ((min (var_1_7 , var_1_31)) , var_1_29))))) : (var_1_30 == ((float) (32.5f - (64.4f + var_1_29))))))) && (((- 3.75) < var_1_29) ? (var_1_33 == ((float) (abs (abs (var_1_6 - var_1_29))))) : (var_1_33 == ((float) (min (var_1_31 , 8.75f)))))) && (var_1_34 == ((signed char) var_1_35))
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
