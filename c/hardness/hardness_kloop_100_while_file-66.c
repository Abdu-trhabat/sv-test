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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66100_while.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 64;
unsigned char var_1_4 = 0;
unsigned short int var_1_5 = 63575;
unsigned long int var_1_6 = 10;
unsigned long int var_1_8 = 3366149252;
signed long int var_1_9 = -10;
unsigned char var_1_10 = 0;
signed long int var_1_11 = 1938698816;
unsigned char var_1_12 = 5;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 64;
double var_1_15 = 99.625;
double var_1_16 = 0.0;
double var_1_17 = 999.5;
double var_1_18 = 9.35;
float var_1_19 = 99.875;
float var_1_20 = 10000.71;
double var_1_21 = 1000.5;
double var_1_23 = 15.25;
signed long int var_1_24 = 8;
unsigned short int var_1_25 = 32;
signed short int var_1_26 = 2;
signed short int var_1_27 = 20847;
float var_1_28 = 31.4;
float var_1_30 = 1.2;
double var_1_31 = 10.75;
signed long int var_1_32 = -10;
double var_1_33 = 31.8;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 64;
unsigned long int last_1_var_1_6 = 10;
signed long int last_1_var_1_9 = -10;
unsigned char last_1_var_1_12 = 5;
signed long int last_1_var_1_24 = 8;
signed short int last_1_var_1_26 = 2;
signed long int last_1_var_1_32 = -10;
double last_1_var_1_33 = 31.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch66100_while
	unsigned long int stepLocal_6 = var_1_8;
	unsigned long int stepLocal_5 = max (last_1_var_1_12 , last_1_var_1_6);
	if (0 >= stepLocal_5) {
		if (var_1_10) {
			var_1_25 = (max ((var_1_5 - last_1_var_1_1) , (last_1_var_1_26 + last_1_var_1_32)));
		}
	} else {
		if (stepLocal_6 < 25u) {
			var_1_25 = last_1_var_1_12;
		}
	}


	// From: Req1Batch66100_while
	if (last_1_var_1_12 >= last_1_var_1_9) {
		if (var_1_4) {
			var_1_1 = (var_1_5 - last_1_var_1_12);
		}
	}


	// From: Req4Batch66100_while
	if (var_1_10) {
		var_1_12 = (64 + var_1_13);
	} else {
		var_1_12 = (32 + (abs (var_1_14 - 2)));
	}


	// From: Req5Batch66100_while
	var_1_15 = ((var_1_16 - var_1_17) - var_1_18);


	// From: Req6Batch66100_while
	if (var_1_15 >= 0.25) {
		var_1_19 = (var_1_17 + var_1_20);
	}


	// From: Req8Batch66100_while
	if (var_1_4) {
		var_1_23 = (abs (4.5));
	}


	// From: Req13Batch66100_while
	var_1_31 = var_1_30;


	// From: Req15Batch66100_while
	var_1_33 = 9.999999999995E11;


	// From: Req3Batch66100_while
	if (var_1_4) {
		if (var_1_10) {
			var_1_9 = (var_1_1 + 100);
		} else {
			var_1_9 = (max ((var_1_5 + var_1_1) , var_1_25));
		}
	} else {
		var_1_9 = ((var_1_11 - 16) - var_1_1);
	}


	// From: Req14Batch66100_while
	var_1_32 = var_1_9;


	// From: Req9Batch66100_while
	signed long int stepLocal_4 = var_1_32 * (var_1_5 * var_1_32);
	unsigned char stepLocal_3 = var_1_4;
	unsigned char stepLocal_2 = var_1_10;
	if (stepLocal_4 <= var_1_14) {
		var_1_24 = 50;
	} else {
		if (var_1_10 || stepLocal_3) {
			if (stepLocal_2 || var_1_4) {
				var_1_24 = var_1_12;
			}
		} else {
			var_1_24 = var_1_13;
		}
	}


	// From: Req2Batch66100_while
	if ((last_1_var_1_33 * 8.2) < 10.4) {
		var_1_6 = (var_1_8 - last_1_var_1_24);
	}


	// From: Req11Batch66100_while
	unsigned long int stepLocal_8 = 128u + var_1_1;
	unsigned long int stepLocal_7 = var_1_6;
	if (var_1_6 >= stepLocal_8) {
		if (10000000 != stepLocal_7) {
			if (var_1_15 <= var_1_20) {
				var_1_26 = (var_1_12 - (max ((var_1_27 - var_1_1) , (max (var_1_25 , var_1_14)))));
			}
		}
	}


	// From: Req7Batch66100_while
	unsigned long int stepLocal_1 = var_1_6;
	signed long int stepLocal_0 = var_1_24;
	if (stepLocal_1 >= (var_1_26 + (var_1_14 * 16))) {
		if (-256 > stepLocal_0) {
			var_1_21 = var_1_17;
		}
	} else {
		var_1_21 = ((min (1.75 , var_1_18)) - (9.9999999995E9 + var_1_17));
	}


	// From: Req12Batch66100_while
	signed long int stepLocal_10 = var_1_32;
	unsigned char stepLocal_9 = var_1_10 || (var_1_23 < var_1_31);
	if (stepLocal_10 < var_1_6) {
		var_1_28 = (max ((var_1_17 + var_1_20) , 0.25f));
	} else {
		if (stepLocal_9 || var_1_4) {
			var_1_28 = (abs (max (var_1_16 , var_1_17)));
		} else {
			var_1_28 = (var_1_20 + (max (var_1_17 , var_1_30)));
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741822);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 63);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 4611686.018427383000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 16383);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return (((((((((((((((last_1_var_1_12 >= last_1_var_1_9) ? (var_1_4 ? (var_1_1 == ((unsigned short int) (var_1_5 - last_1_var_1_12))) : 1) : 1) && (((last_1_var_1_33 * 8.2) < 10.4) ? (var_1_6 == ((unsigned long int) (var_1_8 - last_1_var_1_24))) : 1)) && (var_1_4 ? (var_1_10 ? (var_1_9 == ((signed long int) (var_1_1 + 100))) : (var_1_9 == ((signed long int) (max ((var_1_5 + var_1_1) , var_1_25))))) : (var_1_9 == ((signed long int) ((var_1_11 - 16) - var_1_1))))) && (var_1_10 ? (var_1_12 == ((unsigned char) (64 + var_1_13))) : (var_1_12 == ((unsigned char) (32 + (abs (var_1_14 - 2))))))) && (var_1_15 == ((double) ((var_1_16 - var_1_17) - var_1_18)))) && ((var_1_15 >= 0.25) ? (var_1_19 == ((float) (var_1_17 + var_1_20))) : 1)) && ((var_1_6 >= (var_1_26 + (var_1_14 * 16))) ? ((-256 > var_1_24) ? (var_1_21 == ((double) var_1_17)) : 1) : (var_1_21 == ((double) ((min (1.75 , var_1_18)) - (9.9999999995E9 + var_1_17)))))) && (var_1_4 ? (var_1_23 == ((double) (abs (4.5)))) : 1)) && (((var_1_32 * (var_1_5 * var_1_32)) <= var_1_14) ? (var_1_24 == ((signed long int) 50)) : ((var_1_10 || var_1_4) ? ((var_1_10 || var_1_4) ? (var_1_24 == ((signed long int) var_1_12)) : 1) : (var_1_24 == ((signed long int) var_1_13))))) && ((0 >= (max (last_1_var_1_12 , last_1_var_1_6))) ? (var_1_10 ? (var_1_25 == ((unsigned short int) (max ((var_1_5 - last_1_var_1_1) , (last_1_var_1_26 + last_1_var_1_32))))) : 1) : ((var_1_8 < 25u) ? (var_1_25 == ((unsigned short int) last_1_var_1_12)) : 1))) && ((var_1_6 >= (128u + var_1_1)) ? ((10000000 != var_1_6) ? ((var_1_15 <= var_1_20) ? (var_1_26 == ((signed short int) (var_1_12 - (max ((var_1_27 - var_1_1) , (max (var_1_25 , var_1_14))))))) : 1) : 1) : 1)) && ((var_1_32 < var_1_6) ? (var_1_28 == ((float) (max ((var_1_17 + var_1_20) , 0.25f)))) : (((var_1_10 || (var_1_23 < var_1_31)) || var_1_4) ? (var_1_28 == ((float) (abs (max (var_1_16 , var_1_17))))) : (var_1_28 == ((float) (var_1_20 + (max (var_1_17 , var_1_30)))))))) && (var_1_31 == ((double) var_1_30))) && (var_1_32 == ((signed long int) var_1_9))) && (var_1_33 == ((double) 9.999999999995E11))
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
