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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35100_while.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
double var_1_2 = 1.1;
double var_1_3 = 24.5;
signed char var_1_6 = -4;
unsigned short int var_1_7 = 50;
unsigned short int var_1_8 = 1;
signed short int var_1_9 = 128;
signed short int var_1_10 = -32;
signed short int var_1_11 = -25;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned short int var_1_14 = 4;
unsigned short int var_1_15 = 1;
signed long int var_1_17 = 128;
float var_1_18 = 25.75;
double var_1_19 = 10.4;
float var_1_20 = 15.125;
float var_1_21 = 4.44;
float var_1_22 = 49.375;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
double var_1_28 = 255.98;
float var_1_29 = 2.25;
unsigned long int var_1_31 = 1000000;
unsigned long int var_1_32 = 1;
double var_1_33 = 10.625;
double var_1_34 = 255.5;
double var_1_35 = 7.5;
double var_1_36 = 127.9;
double var_1_37 = 2.15;
unsigned short int var_1_38 = 100;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_9 = 128;
signed long int last_1_var_1_17 = 128;
unsigned char last_1_var_1_23 = 1;
double last_1_var_1_28 = 255.98;
unsigned long int last_1_var_1_31 = 1000000;
unsigned short int last_1_var_1_38 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch35100_while
	unsigned char stepLocal_1 = last_1_var_1_23;
	signed long int stepLocal_0 = last_1_var_1_9 >> (var_1_14 + var_1_15);
	if (stepLocal_1 || ((max (last_1_var_1_31 , last_1_var_1_9)) != last_1_var_1_38)) {
		if (stepLocal_0 >= (last_1_var_1_17 + last_1_var_1_31)) {
			if (last_1_var_1_23) {
				var_1_12 = 2;
			}
		}
	}


	// From: Req8Batch35100_while
	var_1_23 = (var_1_13 && ((var_1_24 && var_1_25) || (var_1_26 && var_1_27)));


	// From: Req9Batch35100_while
	if (var_1_21 >= (- last_1_var_1_28)) {
		var_1_28 = (min (var_1_20 , var_1_21));
	} else {
		var_1_28 = var_1_21;
	}


	// From: Req11Batch35100_while
	if (var_1_23) {
		var_1_31 = (var_1_32 + var_1_14);
	}


	// From: Req13Batch35100_while
	var_1_38 = var_1_14;


	// From: Req7Batch35100_while
	unsigned char stepLocal_2 = var_1_23;
	if (stepLocal_2 || ((max (var_1_10 , var_1_8)) < (var_1_15 << 2))) {
		var_1_22 = (min (var_1_21 , var_1_20));
	}


	// From: Req2Batch35100_while
	if (var_1_31 >= var_1_12) {
		var_1_7 = (min (var_1_12 , var_1_8));
	}


	// From: Req3Batch35100_while
	var_1_9 = ((var_1_7 + var_1_31) + (min (var_1_6 , (var_1_10 + var_1_11))));


	// From: Req5Batch35100_while
	if (var_1_23) {
		var_1_17 = ((var_1_12 + (var_1_6 + var_1_10)) + (var_1_15 - var_1_38));
	}


	// From: Req6Batch35100_while
	if ((var_1_3 * var_1_2) >= var_1_19) {
		if ((- (16 % var_1_15)) >= ((max (var_1_17 , var_1_8)) ^ var_1_31)) {
			var_1_18 = var_1_20;
		} else {
			var_1_18 = var_1_21;
		}
	} else {
		var_1_18 = 9.26f;
	}


	// From: Req10Batch35100_while
	unsigned short int stepLocal_4 = var_1_14;
	unsigned char stepLocal_3 = (var_1_31 + 50u) >= (2368507037u - 10u);
	if ((- (var_1_31 + var_1_17)) < stepLocal_4) {
		if (var_1_23 && stepLocal_3) {
			var_1_29 = var_1_21;
		} else {
			var_1_29 = var_1_20;
		}
	}


	// From: Req12Batch35100_while
	if ((- (var_1_29 + var_1_28)) > (var_1_28 / var_1_34)) {
		var_1_33 = ((abs (var_1_35)) + (abs (var_1_36 - var_1_37)));
	} else {
		if (((32 * var_1_17) * var_1_31) < ((abs (var_1_17)) % var_1_15)) {
			var_1_33 = (var_1_37 - var_1_36);
		} else {
			var_1_33 = var_1_20;
		}
	}


	// From: Req1Batch35100_while
	if (var_1_28 < var_1_33) {
		if ((128 + (max (var_1_12 , 4))) <= (min (var_1_31 , 2))) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = 10;
		}
	} else {
		var_1_1 = var_1_6;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -8191);
	assume_abort_if_not(var_1_10 <= 8192);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -8191);
	assume_abort_if_not(var_1_11 <= 8191);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 3);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_38 = var_1_38;
}

int property(void) {
	return (((((((((((((var_1_28 < var_1_33) ? (((128 + (max (var_1_12 , 4))) <= (min (var_1_31 , 2))) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) 10))) : (var_1_1 == ((signed char) var_1_6))) && ((var_1_31 >= var_1_12) ? (var_1_7 == ((unsigned short int) (min (var_1_12 , var_1_8)))) : 1)) && (var_1_9 == ((signed short int) ((var_1_7 + var_1_31) + (min (var_1_6 , (var_1_10 + var_1_11))))))) && ((last_1_var_1_23 || ((max (last_1_var_1_31 , last_1_var_1_9)) != last_1_var_1_38)) ? (((last_1_var_1_9 >> (var_1_14 + var_1_15)) >= (last_1_var_1_17 + last_1_var_1_31)) ? (last_1_var_1_23 ? (var_1_12 == ((unsigned char) 2)) : 1) : 1) : 1)) && (var_1_23 ? (var_1_17 == ((signed long int) ((var_1_12 + (var_1_6 + var_1_10)) + (var_1_15 - var_1_38)))) : 1)) && (((var_1_3 * var_1_2) >= var_1_19) ? (((- (16 % var_1_15)) >= ((max (var_1_17 , var_1_8)) ^ var_1_31)) ? (var_1_18 == ((float) var_1_20)) : (var_1_18 == ((float) var_1_21))) : (var_1_18 == ((float) 9.26f)))) && ((var_1_23 || ((max (var_1_10 , var_1_8)) < (var_1_15 << 2))) ? (var_1_22 == ((float) (min (var_1_21 , var_1_20)))) : 1)) && (var_1_23 == ((unsigned char) (var_1_13 && ((var_1_24 && var_1_25) || (var_1_26 && var_1_27)))))) && ((var_1_21 >= (- last_1_var_1_28)) ? (var_1_28 == ((double) (min (var_1_20 , var_1_21)))) : (var_1_28 == ((double) var_1_21)))) && (((- (var_1_31 + var_1_17)) < var_1_14) ? ((var_1_23 && ((var_1_31 + 50u) >= (2368507037u - 10u))) ? (var_1_29 == ((float) var_1_21)) : (var_1_29 == ((float) var_1_20))) : 1)) && (var_1_23 ? (var_1_31 == ((unsigned long int) (var_1_32 + var_1_14))) : 1)) && (((- (var_1_29 + var_1_28)) > (var_1_28 / var_1_34)) ? (var_1_33 == ((double) ((abs (var_1_35)) + (abs (var_1_36 - var_1_37))))) : ((((32 * var_1_17) * var_1_31) < ((abs (var_1_17)) % var_1_15)) ? (var_1_33 == ((double) (var_1_37 - var_1_36))) : (var_1_33 == ((double) var_1_20))))) && (var_1_38 == ((unsigned short int) var_1_14))
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
