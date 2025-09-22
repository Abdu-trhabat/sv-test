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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111normal.c", 13, "reach_error"); }
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
signed long int var_1_2 = -1;
signed long int var_1_3 = 25;
unsigned long int var_1_4 = 1181973178;
unsigned long int var_1_5 = 1000000000;
unsigned long int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = -32;
signed char var_1_12 = 2;
signed char var_1_13 = 2;
unsigned char var_1_14 = 10;
double var_1_15 = 7.5;
double var_1_16 = 32.8;
signed char var_1_17 = -128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 32;
float var_1_22 = 10.5;
unsigned char var_1_23 = 8;
signed long int var_1_24 = -256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch111normal
	if (-16 < var_1_2) {
		if (var_1_2 == (100 - var_1_3)) {
			var_1_1 = (((min (var_1_4 , 1415909508u)) - (var_1_5 - var_1_6)) + var_1_3);
		}
	} else {
		var_1_1 = (2872698422u - 2u);
	}


	// From: Req2Batch111normal
	if ((max (var_1_2 , var_1_6)) == var_1_5) {
		var_1_7 = (! (! 1));
	}


	// From: Req3Batch111normal
	if (var_1_7 && var_1_9) {
		var_1_8 = var_1_10;
	}


	// From: Req4Batch111normal
	if (((var_1_2 * var_1_8) + var_1_4) < (var_1_6 + (min (var_1_5 , var_1_10)))) {
		var_1_11 = var_1_12;
	} else {
		var_1_11 = 32;
	}


	// From: Req5Batch111normal
	if ((-128 >= (min (var_1_10 , var_1_11))) && var_1_9) {
		var_1_13 = var_1_12;
	}


	// From: Req6Batch111normal
	var_1_14 = var_1_10;


	// From: Req7Batch111normal
	var_1_15 = var_1_16;


	// From: Req8Batch111normal
	if (var_1_8 != (var_1_18 - (max (var_1_19 , var_1_20)))) {
		if (var_1_20 == var_1_4) {
			var_1_17 = var_1_12;
		}
	}


	// From: Req9Batch111normal
	if (var_1_15 == var_1_16) {
		var_1_21 = (var_1_19 + var_1_20);
	}


	// From: Req10Batch111normal
	var_1_22 = var_1_16;


	// From: Req11Batch111normal
	var_1_23 = var_1_19;


	// From: Req12Batch111normal
	var_1_24 = -8;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 536870911);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 536870911);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 255);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((((((-16 < var_1_2) ? ((var_1_2 == (100 - var_1_3)) ? (var_1_1 == ((unsigned long int) (((min (var_1_4 , 1415909508u)) - (var_1_5 - var_1_6)) + var_1_3))) : 1) : (var_1_1 == ((unsigned long int) (2872698422u - 2u)))) && (((max (var_1_2 , var_1_6)) == var_1_5) ? (var_1_7 == ((unsigned char) (! (! 1)))) : 1)) && ((var_1_7 && var_1_9) ? (var_1_8 == ((unsigned char) var_1_10)) : 1)) && ((((var_1_2 * var_1_8) + var_1_4) < (var_1_6 + (min (var_1_5 , var_1_10)))) ? (var_1_11 == ((signed char) var_1_12)) : (var_1_11 == ((signed char) 32)))) && (((-128 >= (min (var_1_10 , var_1_11))) && var_1_9) ? (var_1_13 == ((signed char) var_1_12)) : 1)) && (var_1_14 == ((unsigned char) var_1_10))) && (var_1_15 == ((double) var_1_16))) && ((var_1_8 != (var_1_18 - (max (var_1_19 , var_1_20)))) ? ((var_1_20 == var_1_4) ? (var_1_17 == ((signed char) var_1_12)) : 1) : 1)) && ((var_1_15 == var_1_16) ? (var_1_21 == ((unsigned char) (var_1_19 + var_1_20))) : 1)) && (var_1_22 == ((float) var_1_16))) && (var_1_23 == ((unsigned char) var_1_19))) && (var_1_24 == ((signed long int) -8))
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
