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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 128;
signed long int var_1_2 = 2;
signed long int var_1_3 = 256;
unsigned char var_1_4 = 25;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 64;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 27843;
signed short int var_1_11 = -4;
unsigned char var_1_13 = 128;
unsigned char var_1_14 = 5;
signed short int var_1_15 = 28020;
signed short int var_1_16 = 128;
signed long int var_1_17 = -25;
signed long int var_1_18 = 50;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_11 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch84no_floats
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 != var_1_3) {
		var_1_1 = (var_1_4 + (max ((min (var_1_5 , var_1_6)) , var_1_7)));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch84no_floats
	if (var_1_9) {
		var_1_8 = ((var_1_10 + 23103) - (32 + var_1_6));
	}


	// From: Req3Batch84no_floats
	if (var_1_3 < var_1_8) {
		if (((- 8) / (var_1_13 - var_1_14)) >= var_1_6) {
			var_1_11 = (last_1_var_1_11 - (var_1_15 - var_1_14));
		}
	}


	// From: Req4Batch84no_floats
	if (! (var_1_5 > var_1_10)) {
		var_1_16 = (32 - 8);
	} else {
		var_1_16 = (var_1_13 - var_1_4);
	}


	// From: Req5Batch84no_floats
	var_1_17 = var_1_18;
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16383);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 127);
	assume_abort_if_not(var_1_13 <= 255);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 126);
	assume_abort_if_not(var_1_14 != 127);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -2147483648);
	assume_abort_if_not(var_1_18 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	return (((((var_1_2 != var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 + (max ((min (var_1_5 , var_1_6)) , var_1_7))))) : (var_1_1 == ((unsigned char) var_1_4))) && (var_1_9 ? (var_1_8 == ((unsigned short int) ((var_1_10 + 23103) - (32 + var_1_6)))) : 1)) && ((var_1_3 < var_1_8) ? ((((- 8) / (var_1_13 - var_1_14)) >= var_1_6) ? (var_1_11 == ((signed short int) (last_1_var_1_11 - (var_1_15 - var_1_14)))) : 1) : 1)) && ((! (var_1_5 > var_1_10)) ? (var_1_16 == ((signed short int) (32 - 8))) : (var_1_16 == ((signed short int) (var_1_13 - var_1_4))))) && (var_1_17 == ((signed long int) var_1_18))
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
