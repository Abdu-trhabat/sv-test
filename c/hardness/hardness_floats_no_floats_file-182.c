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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -8;
unsigned char var_1_2 = 50;
signed long int var_1_3 = 2136283204;
signed long int var_1_4 = 64;
unsigned char var_1_5 = 1;
signed long int var_1_6 = 8;
signed long int var_1_7 = 4;
signed long int var_1_8 = -10;
signed long int var_1_9 = -32;
signed short int var_1_10 = 0;
signed char var_1_11 = -32;
unsigned char var_1_12 = 0;
signed char var_1_13 = -5;
signed char var_1_14 = 2;
signed char var_1_15 = 16;
signed char var_1_16 = -8;
unsigned char var_1_17 = 1;
signed short int var_1_18 = 16;
signed short int var_1_19 = -128;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch182no_floats
	if (-10 < ((var_1_3 - var_1_2) - var_1_4)) {
		if (! (var_1_2 >= var_1_5)) {
			var_1_1 = (max (var_1_6 , var_1_7));
		} else {
			var_1_1 = (var_1_8 + var_1_9);
		}
	}


	// From: Req2Batch182no_floats
	var_1_10 = (var_1_2 - var_1_5);


	// From: Req4Batch182no_floats
	if (! (var_1_17 || var_1_12)) {
		var_1_18 = (max (var_1_14 , var_1_19));
	}


	// From: Req5Batch182no_floats
	signed long int stepLocal_0 = var_1_4;
	if (stepLocal_0 <= var_1_18) {
		var_1_20 = (var_1_17 && (var_1_12 && var_1_21));
	}


	// From: Req3Batch182no_floats
	if (var_1_20) {
		var_1_11 = (max (var_1_13 , (var_1_14 + (var_1_15 + var_1_16))));
	} else {
		if (var_1_20) {
			var_1_11 = var_1_14;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 1073741823);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 255);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -31);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -31);
	assume_abort_if_not(var_1_16 <= 31);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((-10 < ((var_1_3 - var_1_2) - var_1_4)) ? ((! (var_1_2 >= var_1_5)) ? (var_1_1 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_1 == ((signed long int) (var_1_8 + var_1_9)))) : 1) && (var_1_10 == ((signed short int) (var_1_2 - var_1_5)))) && (var_1_20 ? (var_1_11 == ((signed char) (max (var_1_13 , (var_1_14 + (var_1_15 + var_1_16)))))) : (var_1_20 ? (var_1_11 == ((signed char) var_1_14)) : 1))) && ((! (var_1_17 || var_1_12)) ? (var_1_18 == ((signed short int) (max (var_1_14 , var_1_19)))) : 1)) && ((var_1_4 <= var_1_18) ? (var_1_20 == ((unsigned char) (var_1_17 && (var_1_12 && var_1_21)))) : 1)
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
