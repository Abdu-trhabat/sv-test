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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 10;
signed short int var_1_2 = 16;
signed short int var_1_3 = -256;
signed long int var_1_4 = -5;
unsigned char var_1_5 = 50;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 1;
signed char var_1_8 = 10;
unsigned char var_1_9 = 0;
signed char var_1_10 = 32;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 256;
signed long int var_1_13 = 25;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch137no_floats
	if ((var_1_12 / var_1_13) <= var_1_14) {
		if (var_1_7 || var_1_9) {
			if (var_1_9 && var_1_7) {
				if (var_1_3 >= var_1_2) {
					var_1_11 = var_1_15;
				} else {
					var_1_11 = var_1_16;
				}
			} else {
				var_1_11 = var_1_15;
			}
		} else {
			var_1_11 = var_1_15;
		}
	}


	// From: Req1Batch137no_floats
	signed long int stepLocal_1 = var_1_2 + var_1_3;
	signed long int stepLocal_0 = var_1_4;
	if (stepLocal_1 < var_1_4) {
		if (var_1_2 <= stepLocal_0) {
			var_1_1 = (min (var_1_5 , var_1_6));
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		if (var_1_11) {
			var_1_1 = var_1_5;
		} else {
			var_1_1 = var_1_6;
		}
	}


	// From: Req2Batch137no_floats
	if (var_1_11) {
		if (var_1_11) {
			var_1_8 = (abs (var_1_10));
		} else {
			var_1_8 = (max (var_1_10 , 2));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -126);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 + var_1_3) < var_1_4) ? ((var_1_2 <= var_1_4) ? (var_1_1 == ((unsigned char) (min (var_1_5 , var_1_6)))) : (var_1_1 == ((unsigned char) var_1_6))) : (var_1_11 ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) var_1_6)))) && (var_1_11 ? (var_1_11 ? (var_1_8 == ((signed char) (abs (var_1_10)))) : (var_1_8 == ((signed char) (max (var_1_10 , 2))))) : 1)) && (((var_1_12 / var_1_13) <= var_1_14) ? ((var_1_7 || var_1_9) ? ((var_1_9 && var_1_7) ? ((var_1_3 >= var_1_2) ? (var_1_11 == ((unsigned char) var_1_15)) : (var_1_11 == ((unsigned char) var_1_16))) : (var_1_11 == ((unsigned char) var_1_15))) : (var_1_11 == ((unsigned char) var_1_15))) : 1)
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
