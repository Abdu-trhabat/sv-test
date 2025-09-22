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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -128;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
signed short int var_1_4 = 0;
signed short int var_1_5 = 500;
signed long int var_1_7 = -128;
unsigned char var_1_8 = 10;
signed long int var_1_9 = 128;
signed long int var_1_10 = -2;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 4;
unsigned char var_1_13 = 100;
signed long int var_1_14 = -2;
unsigned long int var_1_15 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_15 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch185no_floats
	unsigned char stepLocal_4 = var_1_12 >= last_1_var_1_15;
	if (stepLocal_4 || var_1_2) {
		var_1_14 = (max (50 , (min (var_1_4 , (abs (last_1_var_1_15))))));
	}


	// From: Req5Batch185no_floats
	if (var_1_3) {
		if (var_1_4 <= var_1_13) {
			var_1_15 = var_1_14;
		}
	}


	// From: Req1Batch185no_floats
	unsigned char stepLocal_1 = var_1_2;
	unsigned long int stepLocal_0 = var_1_15;
	if (stepLocal_1 && var_1_3) {
		if ((var_1_4 - var_1_5) <= stepLocal_0) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch185no_floats
	signed short int stepLocal_3 = var_1_4;
	signed long int stepLocal_2 = (var_1_5 % var_1_8) + var_1_14;
	if (stepLocal_3 >= var_1_14) {
		if (stepLocal_2 <= (var_1_4 - var_1_9)) {
			var_1_7 = var_1_10;
		} else {
			var_1_7 = 128;
		}
	} else {
		var_1_7 = var_1_10;
	}


	// From: Req3Batch185no_floats
	var_1_11 = ((10 + var_1_12) + var_1_13);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	return (((((var_1_2 && var_1_3) ? (((var_1_4 - var_1_5) <= var_1_15) ? (var_1_1 == ((signed long int) var_1_5)) : 1) : 1) && ((var_1_4 >= var_1_14) ? ((((var_1_5 % var_1_8) + var_1_14) <= (var_1_4 - var_1_9)) ? (var_1_7 == ((signed long int) var_1_10)) : (var_1_7 == ((signed long int) 128))) : (var_1_7 == ((signed long int) var_1_10)))) && (var_1_11 == ((unsigned char) ((10 + var_1_12) + var_1_13)))) && (((var_1_12 >= last_1_var_1_15) || var_1_2) ? (var_1_14 == ((signed long int) (max (50 , (min (var_1_4 , (abs (last_1_var_1_15)))))))) : 1)) && (var_1_3 ? ((var_1_4 <= var_1_13) ? (var_1_15 == ((unsigned long int) var_1_14)) : 1) : 1)
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
