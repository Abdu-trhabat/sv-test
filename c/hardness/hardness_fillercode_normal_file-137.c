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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137normal.c", 13, "reach_error"); }
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
signed char var_1_1 = -10;
unsigned short int var_1_2 = 128;
unsigned short int var_1_3 = 5;
signed char var_1_4 = -16;
signed char var_1_5 = 2;
signed char var_1_6 = 4;
signed char var_1_7 = -10;
signed long int var_1_8 = -1;
signed long int var_1_9 = 4;
float var_1_11 = 8.75;
float var_1_13 = 99999999999.5;
unsigned short int var_1_14 = 25;
signed char var_1_15 = 1;
signed char var_1_16 = 25;
signed char var_1_17 = 5;
unsigned char var_1_18 = 0;
double var_1_19 = 63.8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
signed char var_1_22 = 50;
double var_1_23 = 1.5;
signed long int var_1_24 = 64;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch137normal
	unsigned short int stepLocal_0 = var_1_2;
	if (stepLocal_0 >= var_1_3) {
		var_1_1 = (min ((var_1_4 + (var_1_5 - var_1_6)) , var_1_7));
	}


	// From: Req4Batch137normal
	var_1_14 = (min (var_1_6 , var_1_5));


	// From: Req7Batch137normal
	var_1_22 = var_1_4;


	// From: Req8Batch137normal
	var_1_23 = var_1_13;


	// From: Req9Batch137normal
	var_1_24 = var_1_7;


	// From: Req3Batch137normal
	if ((2.75f >= var_1_23) && ((var_1_6 - var_1_5) > (var_1_7 * var_1_4))) {
		var_1_11 = var_1_13;
	}


	// From: Req5Batch137normal
	if (128.8f != (1.6f * var_1_11)) {
		var_1_15 = ((var_1_16 + (max (var_1_17 , 4))) + (min (var_1_5 , var_1_4)));
	}


	// From: Req6Batch137normal
	if ((min ((24.875 - var_1_19) , var_1_11)) >= 99.2) {
		var_1_18 = ((! var_1_20) || var_1_21);
	} else {
		if (var_1_13 < var_1_11) {
			var_1_18 = var_1_20;
		} else {
			var_1_18 = var_1_21;
		}
	}


	// From: Req2Batch137normal
	signed char stepLocal_2 = var_1_5;
	signed char stepLocal_1 = var_1_6;
	if (stepLocal_2 > (min (var_1_7 , var_1_24))) {
		if (stepLocal_1 < (var_1_5 << var_1_24)) {
			var_1_8 = (max (var_1_24 , (var_1_9 + 1)));
		} else {
			var_1_8 = (abs (var_1_5));
		}
	} else {
		if (var_1_18) {
			var_1_8 = var_1_9;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1073741823);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -31);
	assume_abort_if_not(var_1_16 <= 32);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -31);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((((var_1_2 >= var_1_3) ? (var_1_1 == ((signed char) (min ((var_1_4 + (var_1_5 - var_1_6)) , var_1_7)))) : 1) && ((var_1_5 > (min (var_1_7 , var_1_24))) ? ((var_1_6 < (var_1_5 << var_1_24)) ? (var_1_8 == ((signed long int) (max (var_1_24 , (var_1_9 + 1))))) : (var_1_8 == ((signed long int) (abs (var_1_5))))) : (var_1_18 ? (var_1_8 == ((signed long int) var_1_9)) : 1))) && (((2.75f >= var_1_23) && ((var_1_6 - var_1_5) > (var_1_7 * var_1_4))) ? (var_1_11 == ((float) var_1_13)) : 1)) && (var_1_14 == ((unsigned short int) (min (var_1_6 , var_1_5))))) && ((128.8f != (1.6f * var_1_11)) ? (var_1_15 == ((signed char) ((var_1_16 + (max (var_1_17 , 4))) + (min (var_1_5 , var_1_4))))) : 1)) && (((min ((24.875 - var_1_19) , var_1_11)) >= 99.2) ? (var_1_18 == ((unsigned char) ((! var_1_20) || var_1_21))) : ((var_1_13 < var_1_11) ? (var_1_18 == ((unsigned char) var_1_20)) : (var_1_18 == ((unsigned char) var_1_21))))) && (var_1_22 == ((signed char) var_1_4))) && (var_1_23 == ((double) var_1_13))) && (var_1_24 == ((signed long int) var_1_7))
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
