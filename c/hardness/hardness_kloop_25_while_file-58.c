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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5825_while.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 64;
unsigned char var_1_3 = 25;
unsigned char var_1_4 = 100;
unsigned long int var_1_5 = 16;
unsigned long int var_1_6 = 2343635789;
signed long int var_1_8 = 1;
unsigned long int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch5825_while
	var_1_8 = var_1_4;


	// From: Req4Batch5825_while
	var_1_9 = var_1_4;


	// From: Req5Batch5825_while
	var_1_10 = var_1_11;


	// From: Req2Batch5825_while
	unsigned char stepLocal_3 = var_1_3;
	unsigned char stepLocal_2 = var_1_4;
	if (stepLocal_3 >= (var_1_9 | var_1_8)) {
		if (((var_1_6 - var_1_3) + var_1_9) > stepLocal_2) {
			if (var_1_10) {
				var_1_5 = var_1_4;
			} else {
				var_1_5 = var_1_8;
			}
		} else {
			var_1_5 = var_1_4;
		}
	} else {
		var_1_5 = var_1_3;
	}


	// From: Req1Batch5825_while
	unsigned long int stepLocal_1 = var_1_5;
	unsigned char stepLocal_0 = var_1_4;
	if (stepLocal_1 <= -256) {
		var_1_1 = (min (var_1_3 , ((var_1_4 - 8) + 5)));
	} else {
		if (stepLocal_0 <= var_1_5) {
			var_1_1 = var_1_3;
		} else {
			var_1_1 = var_1_4;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 63);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 2147483647);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_5 <= -256) ? (var_1_1 == ((unsigned char) (min (var_1_3 , ((var_1_4 - 8) + 5))))) : ((var_1_4 <= var_1_5) ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) var_1_4)))) && ((var_1_3 >= (var_1_9 | var_1_8)) ? ((((var_1_6 - var_1_3) + var_1_9) > var_1_4) ? (var_1_10 ? (var_1_5 == ((unsigned long int) var_1_4)) : (var_1_5 == ((unsigned long int) var_1_8))) : (var_1_5 == ((unsigned long int) var_1_4))) : (var_1_5 == ((unsigned long int) var_1_3)))) && (var_1_8 == ((signed long int) var_1_4))) && (var_1_9 == ((unsigned long int) var_1_4))) && (var_1_10 == ((unsigned char) var_1_11))
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
