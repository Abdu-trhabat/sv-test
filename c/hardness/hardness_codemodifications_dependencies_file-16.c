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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16dependencies.c", 13, "reach_error"); }
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
signed short int var_1_1 = -50;
signed long int var_1_3 = 64;
unsigned char var_1_4 = 0;
signed short int var_1_5 = 8;
signed short int var_1_6 = 64;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 256;
signed long int var_1_9 = 2;
signed long int var_1_10 = 1441729073;
unsigned short int var_1_11 = 32;
double var_1_12 = 7.6;
double var_1_13 = 127.8;
signed char var_1_14 = 32;
signed char var_1_15 = 50;
signed char var_1_16 = 0;
signed char var_1_17 = 16;
float var_1_18 = 0.4;
unsigned char var_1_19 = 0;
float var_1_20 = 24.4;
float var_1_21 = 500.5;
float var_1_22 = 99.324;
unsigned short int var_1_23 = 128;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 8;
signed long int last_1_var_1_9 = 2;
unsigned short int last_1_var_1_23 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch16dependencies
	if (((last_1_var_1_23 + last_1_var_1_9) * var_1_3) < (var_1_5 | var_1_6)) {
		if (var_1_4) {
			var_1_11 = var_1_8;
		}
	} else {
		var_1_11 = var_1_8;
	}


	// From: Req8Batch16dependencies
	if (var_1_4 && ((abs (var_1_11)) > var_1_5)) {
		var_1_23 = var_1_6;
	}


	// From: Req2Batch16dependencies
	if (last_1_var_1_7 < var_1_6) {
		var_1_7 = (var_1_6 + var_1_8);
	}


	// From: Req3Batch16dependencies
	if (var_1_6 > 128) {
		var_1_9 = (var_1_8 - (var_1_10 - var_1_7));
	}


	// From: Req5Batch16dependencies
	if (var_1_7 < (- var_1_10)) {
		if (var_1_8 <= var_1_11) {
			var_1_12 = (var_1_13 - 63.75);
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req6Batch16dependencies
	if (var_1_9 <= var_1_8) {
		var_1_14 = (((max (var_1_15 , var_1_16)) - var_1_17) + -2);
	}


	// From: Req7Batch16dependencies
	if (var_1_4 || var_1_19) {
		var_1_18 = (abs (var_1_20 + (var_1_21 + var_1_22)));
	}


	// From: Req1Batch16dependencies
	if ((var_1_23 / -50) >= var_1_9) {
		if (var_1_4) {
			var_1_1 = (var_1_5 - var_1_6);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	return (((((((((var_1_23 / -50) >= var_1_9) ? (var_1_4 ? (var_1_1 == ((signed short int) (var_1_5 - var_1_6))) : (var_1_1 == ((signed short int) var_1_5))) : (var_1_1 == ((signed short int) var_1_5))) && ((last_1_var_1_7 < var_1_6) ? (var_1_7 == ((unsigned short int) (var_1_6 + var_1_8))) : 1)) && ((var_1_6 > 128) ? (var_1_9 == ((signed long int) (var_1_8 - (var_1_10 - var_1_7)))) : 1)) && ((((last_1_var_1_23 + last_1_var_1_9) * var_1_3) < (var_1_5 | var_1_6)) ? (var_1_4 ? (var_1_11 == ((unsigned short int) var_1_8)) : 1) : (var_1_11 == ((unsigned short int) var_1_8)))) && ((var_1_7 < (- var_1_10)) ? ((var_1_8 <= var_1_11) ? (var_1_12 == ((double) (var_1_13 - 63.75))) : 1) : (var_1_12 == ((double) var_1_13)))) && ((var_1_9 <= var_1_8) ? (var_1_14 == ((signed char) (((max (var_1_15 , var_1_16)) - var_1_17) + -2))) : 1)) && ((var_1_4 || var_1_19) ? (var_1_18 == ((float) (abs (var_1_20 + (var_1_21 + var_1_22))))) : 1)) && ((var_1_4 && ((abs (var_1_11)) > var_1_5)) ? (var_1_23 == ((unsigned short int) var_1_6)) : 1)
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
