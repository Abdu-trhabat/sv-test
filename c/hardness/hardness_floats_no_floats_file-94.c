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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
signed long int var_1_2 = -25;
signed long int var_1_3 = -16;
signed long int var_1_4 = -1;
signed short int var_1_5 = -32;
signed long int var_1_6 = 16;
signed long int var_1_7 = 5;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 25;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch94no_floats
	if (-16 < (min (var_1_2 , (1 - 10)))) {
		var_1_1 = var_1_3;
	}


	// From: Req3Batch94no_floats
	signed long int stepLocal_3 = abs (var_1_7);
	signed long int stepLocal_2 = var_1_5 | var_1_7;
	unsigned char stepLocal_1 = var_1_8;
	signed long int stepLocal_0 = var_1_6;
	if (var_1_6 != stepLocal_2) {
		if ((abs (var_1_5)) >= stepLocal_0) {
			if (stepLocal_1 || var_1_11) {
				var_1_10 = (! var_1_12);
			} else {
				if (stepLocal_3 < var_1_6) {
					var_1_10 = (! var_1_13);
				} else {
					var_1_10 = var_1_12;
				}
			}
		} else {
			var_1_10 = var_1_12;
		}
	} else {
		var_1_10 = var_1_13;
	}


	// From: Req2Batch94no_floats
	if ((-256 / var_1_5) > (var_1_6 + var_1_7)) {
		if (var_1_10) {
			var_1_4 = (max (var_1_3 , var_1_9));
		} else {
			var_1_4 = var_1_3;
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
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((-16 < (min (var_1_2 , (1 - 10)))) ? (var_1_1 == ((signed long int) var_1_3)) : 1) && (((-256 / var_1_5) > (var_1_6 + var_1_7)) ? (var_1_10 ? (var_1_4 == ((signed long int) (max (var_1_3 , var_1_9)))) : (var_1_4 == ((signed long int) var_1_3))) : 1)) && ((var_1_6 != (var_1_5 | var_1_7)) ? (((abs (var_1_5)) >= var_1_6) ? ((var_1_8 || var_1_11) ? (var_1_10 == ((unsigned char) (! var_1_12))) : (((abs (var_1_7)) < var_1_6) ? (var_1_10 == ((unsigned char) (! var_1_13))) : (var_1_10 == ((unsigned char) var_1_12)))) : (var_1_10 == ((unsigned char) var_1_12))) : (var_1_10 == ((unsigned char) var_1_13)))
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
