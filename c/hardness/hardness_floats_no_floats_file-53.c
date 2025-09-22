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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53no_floats.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 1456677701;
unsigned long int var_1_4 = 1000000000;
unsigned long int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -10;
signed long int var_1_10 = -1;
signed long int var_1_11 = -2;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 16;
signed short int var_1_14 = 10;
signed long int var_1_15 = -25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch53no_floats
	var_1_1 = (var_1_2 + (var_1_3 - (var_1_4 - var_1_5)));


	// From: Req2Batch53no_floats
	var_1_6 = var_1_7;


	// From: Req3Batch53no_floats
	unsigned long int stepLocal_0 = min (var_1_1 , var_1_5);
	if (stepLocal_0 != (min (var_1_4 , var_1_3))) {
		if (var_1_9 == (min (-50 , (var_1_10 * var_1_11)))) {
			var_1_8 = ((! var_1_12) || var_1_7);
		}
	} else {
		var_1_8 = 0;
	}


	// From: Req4Batch53no_floats
	if (((min (var_1_14 , 10)) - (abs (-500))) != var_1_4) {
		if (! var_1_7) {
			if (var_1_11 > var_1_10) {
				if ((var_1_4 - var_1_2) <= var_1_3) {
					var_1_13 = var_1_15;
				} else {
					var_1_13 = -10;
				}
			} else {
				var_1_13 = 128;
			}
		}
	} else {
		var_1_13 = var_1_15;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 1073741823);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 536870911);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_1 == ((unsigned long int) (var_1_2 + (var_1_3 - (var_1_4 - var_1_5))))) && (var_1_6 == ((unsigned char) var_1_7))) && (((min (var_1_1 , var_1_5)) != (min (var_1_4 , var_1_3))) ? ((var_1_9 == (min (-50 , (var_1_10 * var_1_11)))) ? (var_1_8 == ((unsigned char) ((! var_1_12) || var_1_7))) : 1) : (var_1_8 == ((unsigned char) 0)))) && ((((min (var_1_14 , 10)) - (abs (-500))) != var_1_4) ? ((! var_1_7) ? ((var_1_11 > var_1_10) ? (((var_1_4 - var_1_2) <= var_1_3) ? (var_1_13 == ((signed long int) var_1_15)) : (var_1_13 == ((signed long int) -10))) : (var_1_13 == ((signed long int) 128))) : 1) : (var_1_13 == ((signed long int) var_1_15)))
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
