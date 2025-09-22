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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19650_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
double var_1_2 = 500.25;
double var_1_3 = 15.55;
double var_1_4 = 127.5;
double var_1_5 = 2.25;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
float var_1_9 = 15.4;
unsigned long int var_1_10 = 2457580018;
unsigned long int var_1_11 = 25;
unsigned long int var_1_12 = 2510016289;
unsigned long int var_1_13 = 32;
float var_1_14 = 1.75;
float var_1_15 = 15.6;
float var_1_16 = 256.081;
signed short int var_1_17 = -2;
signed short int var_1_18 = 4;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 60766;
unsigned short int var_1_21 = 17186;
signed long int var_1_22 = 5;
signed char var_1_23 = -16;
signed char var_1_24 = 16;
signed short int var_1_25 = 2;
signed long int var_1_26 = 16;
float var_1_27 = 999.05;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch19650_1loop
	if ((var_1_2 + 3.25) >= ((min (var_1_3 , var_1_4)) - var_1_5)) {
		var_1_1 = (var_1_6 || (var_1_7 && var_1_8));
	}


	// From: Req2Batch19650_1loop
	unsigned long int stepLocal_1 = var_1_12;
	unsigned long int stepLocal_0 = ~ var_1_10;
	if (stepLocal_0 < ((var_1_12 - var_1_11) + var_1_13)) {
		var_1_9 = var_1_14;
	} else {
		if (stepLocal_1 < (var_1_10 * var_1_11)) {
			var_1_9 = var_1_14;
		} else {
			var_1_9 = (var_1_15 - var_1_16);
		}
	}


	// From: Req3Batch19650_1loop
	if (((min (var_1_12 , var_1_11)) >> var_1_18) != var_1_10) {
		var_1_17 = (min (var_1_18 , -100));
	} else {
		var_1_17 = var_1_18;
	}


	// From: Req4Batch19650_1loop
	signed short int stepLocal_2 = var_1_18;
	if (stepLocal_2 > var_1_11) {
		var_1_19 = ((max ((max (36708 , 41437)) , var_1_20)) - (var_1_21 - var_1_18));
	}


	// From: Req5Batch19650_1loop
	if ((var_1_5 + var_1_2) >= 499.6) {
		if ((var_1_13 / var_1_18) >= var_1_20) {
			var_1_22 = var_1_17;
		} else {
			var_1_22 = var_1_21;
		}
	} else {
		var_1_22 = var_1_17;
	}


	// From: Req6Batch19650_1loop
	if (var_1_18 >= var_1_21) {
		var_1_23 = (min (var_1_18 , var_1_24));
	}


	// From: Req7Batch19650_1loop
	var_1_25 = var_1_17;


	// From: Req8Batch19650_1loop
	var_1_26 = var_1_24;


	// From: Req9Batch19650_1loop
	var_1_27 = var_1_16;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((var_1_2 + 3.25) >= ((min (var_1_3 , var_1_4)) - var_1_5)) ? (var_1_1 == ((unsigned char) (var_1_6 || (var_1_7 && var_1_8)))) : 1) && (((~ var_1_10) < ((var_1_12 - var_1_11) + var_1_13)) ? (var_1_9 == ((float) var_1_14)) : ((var_1_12 < (var_1_10 * var_1_11)) ? (var_1_9 == ((float) var_1_14)) : (var_1_9 == ((float) (var_1_15 - var_1_16)))))) && ((((min (var_1_12 , var_1_11)) >> var_1_18) != var_1_10) ? (var_1_17 == ((signed short int) (min (var_1_18 , -100)))) : (var_1_17 == ((signed short int) var_1_18)))) && ((var_1_18 > var_1_11) ? (var_1_19 == ((unsigned short int) ((max ((max (36708 , 41437)) , var_1_20)) - (var_1_21 - var_1_18)))) : 1)) && (((var_1_5 + var_1_2) >= 499.6) ? (((var_1_13 / var_1_18) >= var_1_20) ? (var_1_22 == ((signed long int) var_1_17)) : (var_1_22 == ((signed long int) var_1_21))) : (var_1_22 == ((signed long int) var_1_17)))) && ((var_1_18 >= var_1_21) ? (var_1_23 == ((signed char) (min (var_1_18 , var_1_24)))) : 1)) && (var_1_25 == ((signed short int) var_1_17))) && (var_1_26 == ((signed long int) var_1_24))) && (var_1_27 == ((float) var_1_16))
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
