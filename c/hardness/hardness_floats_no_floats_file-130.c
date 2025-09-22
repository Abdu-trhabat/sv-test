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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130no_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = -128;
signed long int var_1_2 = 256;
signed long int var_1_3 = 0;
signed long int var_1_4 = 4;
signed long int var_1_5 = 16;
signed char var_1_6 = -16;
signed long int var_1_7 = 4;
signed long int var_1_8 = 4;
signed long int var_1_9 = 5;
signed long int var_1_10 = 32;
unsigned short int var_1_11 = 32;
signed long int var_1_12 = -64;
unsigned short int var_1_13 = 128;
unsigned short int var_1_14 = 29917;
unsigned short int var_1_15 = 10000;
unsigned short int var_1_16 = 4;
signed long int var_1_17 = -10000;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch130no_floats
	signed long int stepLocal_1 = var_1_4 / (min (-25 , var_1_5));
	signed long int stepLocal_0 = var_1_5;
	if ((var_1_2 & var_1_3) <= stepLocal_1) {
		var_1_1 = var_1_6;
	} else {
		if (stepLocal_0 != var_1_4) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = 5;
		}
	}


	// From: Req3Batch130no_floats
	if (((abs (var_1_9)) / var_1_12) >= var_1_10) {
		var_1_11 = (var_1_13 + ((abs (var_1_14)) - (var_1_15 - var_1_16)));
	}


	// From: Req4Batch130no_floats
	var_1_17 = var_1_11;


	// From: Req2Batch130no_floats
	signed long int stepLocal_2 = var_1_17;
	if ((var_1_8 - var_1_9) <= var_1_10) {
		if (var_1_11 != stepLocal_2) {
			if (var_1_8 >= -8) {
				var_1_7 = -4;
			} else {
				var_1_7 = var_1_11;
			}
		} else {
			var_1_7 = var_1_11;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 8191);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8191);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 & var_1_3) <= (var_1_4 / (min (-25 , var_1_5)))) ? (var_1_1 == ((signed char) var_1_6)) : ((var_1_5 != var_1_4) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) 5)))) && (((var_1_8 - var_1_9) <= var_1_10) ? ((var_1_11 != var_1_17) ? ((var_1_8 >= -8) ? (var_1_7 == ((signed long int) -4)) : (var_1_7 == ((signed long int) var_1_11))) : (var_1_7 == ((signed long int) var_1_11))) : 1)) && ((((abs (var_1_9)) / var_1_12) >= var_1_10) ? (var_1_11 == ((unsigned short int) (var_1_13 + ((abs (var_1_14)) - (var_1_15 - var_1_16))))) : 1)) && (var_1_17 == ((signed long int) var_1_11))
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
