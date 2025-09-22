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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39normal.c", 13, "reach_error"); }
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
signed short int var_1_1 = -1;
signed long int var_1_5 = 50;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_12 = 50;
signed long int var_1_13 = -10;
signed long int var_1_14 = 2040141804;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 10;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 25;
unsigned short int var_1_20 = 2;
unsigned char var_1_21 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 10;
unsigned long int last_1_var_1_12 = 50;
signed short int last_1_var_1_17 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch39normal
	unsigned long int stepLocal_0 = (last_1_var_1_17 + last_1_var_1_10) ^ last_1_var_1_12;
	if (stepLocal_0 < (var_1_5 | -4)) {
		var_1_1 = (var_1_7 - var_1_8);
	} else {
		var_1_1 = (last_1_var_1_12 + -16);
	}


	// From: Req3Batch39normal
	var_1_10 = (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_5))));


	// From: Req4Batch39normal
	signed long int stepLocal_3 = var_1_5;
	signed long int stepLocal_2 = min (var_1_8 , (64 - 16));
	if (var_1_7 < stepLocal_2) {
		if (stepLocal_3 > (max (last_1_var_1_12 , -2))) {
			var_1_12 = (max (var_1_8 , var_1_5));
		} else {
			var_1_12 = 5u;
		}
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req5Batch39normal
	if ((var_1_12 + var_1_8) <= ((var_1_14 - 25) - var_1_5)) {
		if (var_1_6) {
			if (var_1_15 && var_1_16) {
				var_1_13 = var_1_7;
			} else {
				var_1_13 = var_1_8;
			}
		}
	} else {
		var_1_13 = var_1_12;
	}


	// From: Req7Batch39normal
	var_1_18 = var_1_19;


	// From: Req8Batch39normal
	var_1_20 = var_1_8;


	// From: Req9Batch39normal
	var_1_21 = var_1_6;


	// From: Req6Batch39normal
	if ((var_1_10 != var_1_11) && (! var_1_21)) {
		var_1_17 = (max (var_1_1 , var_1_8));
	}


	// From: Req2Batch39normal
	signed long int stepLocal_1 = min (var_1_17 , var_1_13);
	if (var_1_17 >= stepLocal_1) {
		if (var_1_6) {
			var_1_9 = var_1_5;
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 1073741823);
	assume_abort_if_not(var_1_14 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return (((((((((((last_1_var_1_17 + last_1_var_1_10) ^ last_1_var_1_12) < (var_1_5 | -4)) ? (var_1_1 == ((signed short int) (var_1_7 - var_1_8))) : (var_1_1 == ((signed short int) (last_1_var_1_12 + -16)))) && ((var_1_17 >= (min (var_1_17 , var_1_13))) ? (var_1_6 ? (var_1_9 == ((unsigned long int) var_1_5)) : 1) : 1)) && (var_1_10 == ((unsigned long int) (min ((abs (var_1_11 - var_1_8)) , (max (0u , var_1_5))))))) && ((var_1_7 < (min (var_1_8 , (64 - 16)))) ? ((var_1_5 > (max (last_1_var_1_12 , -2))) ? (var_1_12 == ((unsigned long int) (max (var_1_8 , var_1_5)))) : (var_1_12 == ((unsigned long int) 5u))) : (var_1_12 == ((unsigned long int) var_1_11)))) && (((var_1_12 + var_1_8) <= ((var_1_14 - 25) - var_1_5)) ? (var_1_6 ? ((var_1_15 && var_1_16) ? (var_1_13 == ((signed long int) var_1_7)) : (var_1_13 == ((signed long int) var_1_8))) : 1) : (var_1_13 == ((signed long int) var_1_12)))) && (((var_1_10 != var_1_11) && (! var_1_21)) ? (var_1_17 == ((signed short int) (max (var_1_1 , var_1_8)))) : 1)) && (var_1_18 == ((unsigned char) var_1_19))) && (var_1_20 == ((unsigned short int) var_1_8))) && (var_1_21 == ((unsigned char) var_1_6))
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
