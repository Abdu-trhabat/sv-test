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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136normal.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned long int var_1_4 = 10;
unsigned long int var_1_5 = 10;
unsigned long int var_1_6 = 4016566698;
float var_1_7 = 99999999999999.6;
signed char var_1_8 = 4;
signed char var_1_9 = 16;
signed char var_1_10 = 2;
float var_1_11 = 50.625;
float var_1_12 = 32.5;
signed long int var_1_13 = 2;
unsigned char var_1_14 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch136normal
	if (var_1_2) {
		if (var_1_3) {
			var_1_1 = (var_1_4 + var_1_5);
		} else {
			var_1_1 = ((min (var_1_6 , 3757035609u)) - var_1_4);
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch136normal
	signed long int stepLocal_1 = var_1_9 - var_1_10;
	signed long int stepLocal_0 = var_1_8 - var_1_9;
	if (stepLocal_0 == var_1_4) {
		if (var_1_8 < stepLocal_1) {
			var_1_7 = (abs (var_1_11 - var_1_12));
		} else {
			if (var_1_2) {
				var_1_7 = var_1_11;
			} else {
				var_1_7 = var_1_12;
			}
		}
	}


	// From: Req3Batch136normal
	if (var_1_2) {
		if (var_1_3 || var_1_14) {
			var_1_13 = var_1_8;
		} else {
			var_1_13 = (var_1_9 - var_1_10);
		}
	} else {
		if (var_1_14) {
			if (var_1_9 <= var_1_6) {
				var_1_13 = var_1_9;
			} else {
				var_1_13 = var_1_10;
			}
		} else {
			var_1_13 = 32;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 2147483647);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((var_1_2 ? (var_1_3 ? (var_1_1 == ((unsigned long int) (var_1_4 + var_1_5))) : (var_1_1 == ((unsigned long int) ((min (var_1_6 , 3757035609u)) - var_1_4)))) : (var_1_1 == ((unsigned long int) var_1_4))) && (((var_1_8 - var_1_9) == var_1_4) ? ((var_1_8 < (var_1_9 - var_1_10)) ? (var_1_7 == ((float) (abs (var_1_11 - var_1_12)))) : (var_1_2 ? (var_1_7 == ((float) var_1_11)) : (var_1_7 == ((float) var_1_12)))) : 1)) && (var_1_2 ? ((var_1_3 || var_1_14) ? (var_1_13 == ((signed long int) var_1_8)) : (var_1_13 == ((signed long int) (var_1_9 - var_1_10)))) : (var_1_14 ? ((var_1_9 <= var_1_6) ? (var_1_13 == ((signed long int) var_1_9)) : (var_1_13 == ((signed long int) var_1_10))) : (var_1_13 == ((signed long int) 32))))
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
