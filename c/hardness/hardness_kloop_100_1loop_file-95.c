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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95100_1loop.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = 10;
double var_1_9 = 255.75;
double var_1_10 = 7.7;
double var_1_11 = 1.5;
double var_1_12 = 49.4;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 256;
signed char var_1_15 = 5;
signed long int var_1_16 = -256;
signed long int var_1_17 = -32;
signed char var_1_18 = 8;
signed char var_1_19 = 1;
signed char var_1_20 = 2;
unsigned long int var_1_21 = 4;
unsigned long int var_1_22 = 4189771843;
float var_1_23 = 2.5;
unsigned char var_1_24 = 100;
unsigned short int var_1_25 = 32;
unsigned short int var_1_26 = 48431;
float var_1_27 = 128.2;
double var_1_28 = 0.8;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed char var_1_31 = -16;
signed long int var_1_32 = 1000;
unsigned char var_1_33 = 10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_21 = 4;
unsigned short int last_1_var_1_25 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch95100_1loop
	unsigned long int stepLocal_1 = (var_1_14 - var_1_8) * last_1_var_1_21;
	if ((10 / (min (var_1_16 , var_1_17))) <= stepLocal_1) {
		var_1_15 = var_1_8;
	} else {
		var_1_15 = 1;
	}


	// From: Req6Batch95100_1loop
	signed char stepLocal_2 = var_1_15;
	if (stepLocal_2 <= var_1_17) {
		var_1_21 = (var_1_8 + var_1_14);
	} else {
		var_1_21 = (var_1_22 - var_1_8);
	}


	// From: Req7Batch95100_1loop
	if (((128 + var_1_24) - var_1_8) < (var_1_21 - var_1_14)) {
		var_1_23 = var_1_12;
	}


	// From: Req8Batch95100_1loop
	if (last_1_var_1_25 != var_1_21) {
		var_1_25 = (var_1_26 - var_1_14);
	} else {
		if ((var_1_14 << var_1_21) <= 4) {
			var_1_25 = 256;
		} else {
			var_1_25 = var_1_24;
		}
	}


	// From: Req9Batch95100_1loop
	if (var_1_4 || var_1_6) {
		var_1_27 = (abs (min (var_1_12 , var_1_11)));
	} else {
		var_1_27 = var_1_12;
	}


	// From: Req10Batch95100_1loop
	unsigned long int stepLocal_3 = var_1_21;
	if (stepLocal_3 >= var_1_17) {
		var_1_28 = (max ((max (var_1_11 , 2.1)) , var_1_12));
	}


	// From: Req11Batch95100_1loop
	unsigned long int stepLocal_4 = var_1_14 * var_1_22;
	if (stepLocal_4 >= (max (var_1_16 , var_1_25))) {
		if (var_1_23 != var_1_27) {
			var_1_29 = (! (var_1_5 && var_1_30));
		}
	}


	// From: Req12Batch95100_1loop
	var_1_31 = var_1_20;


	// From: Req13Batch95100_1loop
	var_1_32 = var_1_26;


	// From: Req14Batch95100_1loop
	var_1_33 = var_1_24;


	// From: Req2Batch95100_1loop
	if (var_1_28 < ((10.5 + var_1_28) / var_1_10)) {
		var_1_9 = (var_1_11 + var_1_12);
	} else {
		var_1_9 = (16.6 + var_1_12);
	}


	// From: Req3Batch95100_1loop
	if (var_1_11 != var_1_12) {
		if (var_1_9 > (var_1_11 / 127.95)) {
			var_1_13 = var_1_8;
		} else {
			var_1_13 = (var_1_8 + var_1_14);
		}
	}


	// From: Req1Batch95100_1loop
	unsigned char stepLocal_0 = var_1_7;
	if (var_1_28 > var_1_9) {
		if (var_1_9 < var_1_28) {
			if (((var_1_4 || var_1_5) && var_1_6) && stepLocal_0) {
				var_1_1 = (8 - (64 - var_1_8));
			} else {
				var_1_1 = var_1_8;
			}
		}
	}


	// From: Req5Batch95100_1loop
	if (var_1_1 != var_1_32) {
		if (var_1_12 >= (- (max (var_1_28 , var_1_11)))) {
			if (var_1_16 >= var_1_25) {
				var_1_18 = (min (var_1_8 , var_1_19));
			} else {
				if (var_1_10 >= (var_1_9 + var_1_28)) {
					var_1_18 = (max (var_1_8 , var_1_19));
				} else {
					var_1_18 = (min ((abs (var_1_8)) , var_1_19));
				}
			}
		} else {
			var_1_18 = var_1_19;
		}
	} else {
		var_1_18 = var_1_20;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	assume_abort_if_not(var_1_17 != 0);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -127);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 64);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
}

int property(void) {
	return ((((((((((((((var_1_28 > var_1_9) ? ((var_1_9 < var_1_28) ? ((((var_1_4 || var_1_5) && var_1_6) && var_1_7) ? (var_1_1 == ((signed char) (8 - (64 - var_1_8)))) : (var_1_1 == ((signed char) var_1_8))) : 1) : 1) && ((var_1_28 < ((10.5 + var_1_28) / var_1_10)) ? (var_1_9 == ((double) (var_1_11 + var_1_12))) : (var_1_9 == ((double) (16.6 + var_1_12))))) && ((var_1_11 != var_1_12) ? ((var_1_9 > (var_1_11 / 127.95)) ? (var_1_13 == ((unsigned short int) var_1_8)) : (var_1_13 == ((unsigned short int) (var_1_8 + var_1_14)))) : 1)) && (((10 / (min (var_1_16 , var_1_17))) <= ((var_1_14 - var_1_8) * last_1_var_1_21)) ? (var_1_15 == ((signed char) var_1_8)) : (var_1_15 == ((signed char) 1)))) && ((var_1_1 != var_1_32) ? ((var_1_12 >= (- (max (var_1_28 , var_1_11)))) ? ((var_1_16 >= var_1_25) ? (var_1_18 == ((signed char) (min (var_1_8 , var_1_19)))) : ((var_1_10 >= (var_1_9 + var_1_28)) ? (var_1_18 == ((signed char) (max (var_1_8 , var_1_19)))) : (var_1_18 == ((signed char) (min ((abs (var_1_8)) , var_1_19)))))) : (var_1_18 == ((signed char) var_1_19))) : (var_1_18 == ((signed char) var_1_20)))) && ((var_1_15 <= var_1_17) ? (var_1_21 == ((unsigned long int) (var_1_8 + var_1_14))) : (var_1_21 == ((unsigned long int) (var_1_22 - var_1_8))))) && ((((128 + var_1_24) - var_1_8) < (var_1_21 - var_1_14)) ? (var_1_23 == ((float) var_1_12)) : 1)) && ((last_1_var_1_25 != var_1_21) ? (var_1_25 == ((unsigned short int) (var_1_26 - var_1_14))) : (((var_1_14 << var_1_21) <= 4) ? (var_1_25 == ((unsigned short int) 256)) : (var_1_25 == ((unsigned short int) var_1_24))))) && ((var_1_4 || var_1_6) ? (var_1_27 == ((float) (abs (min (var_1_12 , var_1_11))))) : (var_1_27 == ((float) var_1_12)))) && ((var_1_21 >= var_1_17) ? (var_1_28 == ((double) (max ((max (var_1_11 , 2.1)) , var_1_12)))) : 1)) && (((var_1_14 * var_1_22) >= (max (var_1_16 , var_1_25))) ? ((var_1_23 != var_1_27) ? (var_1_29 == ((unsigned char) (! (var_1_5 && var_1_30)))) : 1) : 1)) && (var_1_31 == ((signed char) var_1_20))) && (var_1_32 == ((signed long int) var_1_26))) && (var_1_33 == ((unsigned char) var_1_24))
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
