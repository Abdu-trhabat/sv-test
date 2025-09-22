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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114no_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = 500;
signed short int var_1_4 = 4;
signed short int var_1_5 = 5;
signed long int var_1_6 = 64;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 10;
unsigned short int var_1_10 = 25;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 128;
signed long int var_1_13 = 10;
signed long int var_1_14 = -64;
signed long int var_1_15 = 64;
signed long int var_1_16 = 256;
signed char var_1_17 = 1;
signed char var_1_18 = 32;
signed char var_1_19 = 50;
signed char var_1_20 = 8;
signed char var_1_21 = 8;
signed long int var_1_22 = 100;
unsigned long int var_1_23 = 5;
unsigned long int var_1_24 = 200;
signed short int var_1_25 = 16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_22 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch114no_floats
	signed long int stepLocal_1 = (last_1_var_1_22 + var_1_5) & last_1_var_1_22;
	if (stepLocal_1 > var_1_4) {
		if (var_1_7) {
			var_1_6 = -100;
		}
	}


	// From: Req4Batch114no_floats
	var_1_13 = ((abs (var_1_14)) - (max ((max (var_1_15 , 5)) , var_1_16)));


	// From: Req5Batch114no_floats
	if (var_1_7) {
		var_1_17 = (((var_1_18 + var_1_19) - var_1_20) - var_1_21);
	}


	// From: Req7Batch114no_floats
	var_1_23 = var_1_24;


	// From: Req8Batch114no_floats
	var_1_25 = var_1_18;


	// From: Req3Batch114no_floats
	if (var_1_13 > var_1_6) {
		var_1_8 = (var_1_10 + (max (var_1_11 , var_1_12)));
	} else {
		var_1_8 = var_1_10;
	}


	// From: Req6Batch114no_floats
	var_1_22 = var_1_8;


	// From: Req1Batch114no_floats
	signed short int stepLocal_0 = var_1_25;
	if (stepLocal_0 > var_1_22) {
		var_1_1 = (min (var_1_4 , var_1_5));
	} else {
		var_1_1 = 32;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 31);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	return ((((((((var_1_25 > var_1_22) ? (var_1_1 == ((signed short int) (min (var_1_4 , var_1_5)))) : (var_1_1 == ((signed short int) 32))) && ((((last_1_var_1_22 + var_1_5) & last_1_var_1_22) > var_1_4) ? (var_1_7 ? (var_1_6 == ((signed long int) -100)) : 1) : 1)) && ((var_1_13 > var_1_6) ? (var_1_8 == ((unsigned short int) (var_1_10 + (max (var_1_11 , var_1_12))))) : (var_1_8 == ((unsigned short int) var_1_10)))) && (var_1_13 == ((signed long int) ((abs (var_1_14)) - (max ((max (var_1_15 , 5)) , var_1_16)))))) && (var_1_7 ? (var_1_17 == ((signed char) (((var_1_18 + var_1_19) - var_1_20) - var_1_21))) : 1)) && (var_1_22 == ((signed long int) var_1_8))) && (var_1_23 == ((unsigned long int) var_1_24))) && (var_1_25 == ((signed short int) var_1_18))
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
