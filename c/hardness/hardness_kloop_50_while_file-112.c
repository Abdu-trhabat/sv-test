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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11250_while.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 8;
unsigned long int var_1_4 = 3917050220;
unsigned char var_1_5 = 1;
float var_1_6 = 7.5;
float var_1_7 = 16.75;
float var_1_8 = 10.125;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = 100;
unsigned char var_1_12 = 1;
signed char var_1_13 = -4;
unsigned long int var_1_14 = 64;
unsigned short int var_1_15 = 100;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
unsigned short int var_1_18 = 128;
unsigned long int var_1_19 = 1450604137;
unsigned long int var_1_20 = 1115287165;
unsigned short int var_1_21 = 24626;
unsigned short int var_1_22 = 2;
unsigned short int var_1_23 = 50515;
double var_1_24 = 5.4;
double var_1_25 = 9999.2;
signed short int var_1_26 = 32;

// Calibration values

// Last'ed variables
signed char last_1_var_1_11 = 100;
unsigned long int last_1_var_1_14 = 64;
unsigned short int last_1_var_1_18 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch11250_while
	signed long int stepLocal_0 = last_1_var_1_11;
	if (last_1_var_1_14 != stepLocal_0) {
		var_1_1 = (var_1_4 - 100000000u);
	}


	// From: Req3Batch11250_while
	unsigned char stepLocal_2 = var_1_9;
	unsigned long int stepLocal_1 = (var_1_4 - var_1_10) | var_1_1;
	if (stepLocal_2 && var_1_12) {
		if (stepLocal_1 > var_1_1) {
			var_1_11 = var_1_13;
		} else {
			var_1_11 = -32;
		}
	}


	// From: Req5Batch11250_while
	if ((var_1_16 - var_1_17) < (var_1_10 - var_1_1)) {
		var_1_15 = 1;
	}


	// From: Req4Batch11250_while
	var_1_14 = (max ((var_1_15 + var_1_10) , var_1_4));


	// From: Req2Batch11250_while
	if ((var_1_6 * var_1_7) >= var_1_8) {
		if (var_1_9) {
			var_1_5 = var_1_10;
		}
	}


	// From: Req6Batch11250_while
	if (((var_1_19 + var_1_20) - (var_1_17 + var_1_16)) > (var_1_4 - var_1_10)) {
		if (var_1_1 > var_1_20) {
			var_1_18 = ((var_1_21 - var_1_17) + last_1_var_1_18);
		} else {
			var_1_18 = var_1_17;
		}
	} else {
		if (((var_1_16 % var_1_21) % var_1_22) > last_1_var_1_18) {
			var_1_18 = ((abs (var_1_23)) - var_1_17);
		} else {
			if (! var_1_9) {
				var_1_18 = var_1_21;
			} else {
				var_1_18 = var_1_10;
			}
		}
	}


	// From: Req7Batch11250_while
	var_1_24 = var_1_25;


	// From: Req8Batch11250_while
	var_1_26 = 10;
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483648);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741824);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65535);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	return ((((((((last_1_var_1_14 != last_1_var_1_11) ? (var_1_1 == ((unsigned long int) (var_1_4 - 100000000u))) : 1) && (((var_1_6 * var_1_7) >= var_1_8) ? (var_1_9 ? (var_1_5 == ((unsigned char) var_1_10)) : 1) : 1)) && ((var_1_9 && var_1_12) ? ((((var_1_4 - var_1_10) | var_1_1) > var_1_1) ? (var_1_11 == ((signed char) var_1_13)) : (var_1_11 == ((signed char) -32))) : 1)) && (var_1_14 == ((unsigned long int) (max ((var_1_15 + var_1_10) , var_1_4))))) && (((var_1_16 - var_1_17) < (var_1_10 - var_1_1)) ? (var_1_15 == ((unsigned short int) 1)) : 1)) && ((((var_1_19 + var_1_20) - (var_1_17 + var_1_16)) > (var_1_4 - var_1_10)) ? ((var_1_1 > var_1_20) ? (var_1_18 == ((unsigned short int) ((var_1_21 - var_1_17) + last_1_var_1_18))) : (var_1_18 == ((unsigned short int) var_1_17))) : ((((var_1_16 % var_1_21) % var_1_22) > last_1_var_1_18) ? (var_1_18 == ((unsigned short int) ((abs (var_1_23)) - var_1_17))) : ((! var_1_9) ? (var_1_18 == ((unsigned short int) var_1_21)) : (var_1_18 == ((unsigned short int) var_1_10)))))) && (var_1_24 == ((double) var_1_25))) && (var_1_26 == ((signed short int) 10))
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
