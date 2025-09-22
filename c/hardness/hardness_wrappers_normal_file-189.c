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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189normal.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
float var_1_5 = 0.9;
signed long int var_1_8 = 5;
float var_1_9 = 4.5;
float var_1_10 = 24.5;
float var_1_11 = 5.25;
unsigned short int var_1_12 = 60381;
unsigned short int var_1_13 = 0;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 8;
unsigned long int var_1_16 = 4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned long int last_1_var_1_16 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch189normal
	signed long int stepLocal_1 = var_1_12 - var_1_13;
	if (last_1_var_1_1) {
		if (stepLocal_1 < last_1_var_1_16) {
			var_1_11 = var_1_9;
		}
	} else {
		var_1_11 = var_1_9;
	}


	// From: Req4Batch189normal
	if (64.8f <= var_1_11) {
		var_1_14 = var_1_15;
	}


	// From: Req5Batch189normal
	signed long int stepLocal_2 = var_1_8;
	if (var_1_14 <= stepLocal_2) {
		if (! (var_1_13 <= var_1_12)) {
			var_1_16 = (max ((max ((var_1_14 + var_1_15) , var_1_12)) , var_1_13));
		}
	} else {
		var_1_16 = var_1_13;
	}


	// From: Req1Batch189normal
	if (var_1_2) {
		var_1_1 = var_1_3;
	} else {
		var_1_1 = (! var_1_4);
	}


	// From: Req2Batch189normal
	unsigned long int stepLocal_0 = min (var_1_16 , var_1_14);
	if (stepLocal_0 >= var_1_16) {
		var_1_5 = (abs (var_1_9 - var_1_10));
	} else {
		var_1_5 = (abs (var_1_10));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 32767);
	assume_abort_if_not(var_1_12 <= 65535);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return ((((var_1_2 ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) (! var_1_4)))) && (((min (var_1_16 , var_1_14)) >= var_1_16) ? (var_1_5 == ((float) (abs (var_1_9 - var_1_10)))) : (var_1_5 == ((float) (abs (var_1_10)))))) && (last_1_var_1_1 ? (((var_1_12 - var_1_13) < last_1_var_1_16) ? (var_1_11 == ((float) var_1_9)) : 1) : (var_1_11 == ((float) var_1_9)))) && ((64.8f <= var_1_11) ? (var_1_14 == ((unsigned char) var_1_15)) : 1)) && ((var_1_14 <= var_1_8) ? ((! (var_1_13 <= var_1_12)) ? (var_1_16 == ((unsigned long int) (max ((max ((var_1_14 + var_1_15) , var_1_12)) , var_1_13)))) : 1) : (var_1_16 == ((unsigned long int) var_1_13)))
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
