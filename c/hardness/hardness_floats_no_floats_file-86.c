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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86no_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = 0;
unsigned char var_1_2 = 0;
signed short int var_1_3 = 2;
signed short int var_1_4 = 256;
signed short int var_1_5 = -256;
signed short int var_1_6 = 2;
signed long int var_1_7 = 8;
signed long int var_1_8 = 0;
signed long int var_1_9 = 1;
signed long int var_1_10 = 5;
signed long int var_1_11 = 64;
signed long int var_1_12 = -64;
signed char var_1_13 = -10;
signed char var_1_14 = 2;
signed char var_1_15 = 32;
signed short int var_1_16 = -10;
signed short int var_1_17 = 8;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch86no_floats
	if (! var_1_2) {
		var_1_1 = (min ((var_1_3 + (var_1_4 + var_1_5)) , var_1_6));
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch86no_floats
	signed long int stepLocal_0 = var_1_4 << (min (var_1_8 , var_1_9));
	if (stepLocal_0 != (var_1_10 - var_1_11)) {
		if (var_1_2) {
			var_1_7 = var_1_12;
		}
	} else {
		var_1_7 = var_1_12;
	}


	// From: Req3Batch86no_floats
	if ((min (var_1_5 , var_1_9)) < -500) {
		var_1_13 = (var_1_14 - var_1_9);
	} else {
		var_1_13 = (min (var_1_14 , (var_1_8 - (var_1_9 + var_1_15))));
	}


	// From: Req4Batch86no_floats
	signed short int stepLocal_1 = var_1_5;
	if (stepLocal_1 >= (var_1_10 / (abs (var_1_17)))) {
		var_1_16 = (abs (var_1_3));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -8191);
	assume_abort_if_not(var_1_4 <= 8192);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -8191);
	assume_abort_if_not(var_1_5 <= 8191);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32767);
	assume_abort_if_not(var_1_17 <= 32767);
	assume_abort_if_not(var_1_17 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((! var_1_2) ? (var_1_1 == ((signed short int) (min ((var_1_3 + (var_1_4 + var_1_5)) , var_1_6)))) : (var_1_1 == ((signed short int) var_1_5))) && (((var_1_4 << (min (var_1_8 , var_1_9))) != (var_1_10 - var_1_11)) ? (var_1_2 ? (var_1_7 == ((signed long int) var_1_12)) : 1) : (var_1_7 == ((signed long int) var_1_12)))) && (((min (var_1_5 , var_1_9)) < -500) ? (var_1_13 == ((signed char) (var_1_14 - var_1_9))) : (var_1_13 == ((signed char) (min (var_1_14 , (var_1_8 - (var_1_9 + var_1_15)))))))) && ((var_1_5 >= (var_1_10 / (abs (var_1_17)))) ? (var_1_16 == ((signed short int) (abs (var_1_3)))) : 1)
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
