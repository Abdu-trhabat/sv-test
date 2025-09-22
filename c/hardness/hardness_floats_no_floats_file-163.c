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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163no_floats.c", 13, "reach_error"); }
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
signed long int var_1_1 = -2;
unsigned short int var_1_4 = 4;
unsigned long int var_1_5 = 100000000;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed long int var_1_10 = 1000000;
signed char var_1_11 = 100;
signed char var_1_12 = 8;
signed long int var_1_13 = -16;
signed long int var_1_14 = 2;
unsigned short int var_1_15 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_5 = 100000000;
unsigned short int last_1_var_1_15 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch163no_floats
	unsigned long int stepLocal_0 = last_1_var_1_5 / var_1_4;
	if (last_1_var_1_15 >= stepLocal_0) {
		var_1_1 = last_1_var_1_15;
	}


	// From: Req3Batch163no_floats
	signed long int stepLocal_4 = (var_1_11 - var_1_12) - 32;
	if (stepLocal_4 < var_1_4) {
		var_1_10 = (min ((-128 + (max (var_1_13 , -100))) , var_1_14));
	}


	// From: Req4Batch163no_floats
	signed long int stepLocal_6 = 8;
	unsigned char stepLocal_5 = var_1_7;
	if (var_1_6 && stepLocal_5) {
		if (var_1_6) {
			if (var_1_7) {
				if (stepLocal_6 > var_1_11) {
					var_1_15 = var_1_11;
				}
			} else {
				var_1_15 = var_1_11;
			}
		} else {
			var_1_15 = var_1_11;
		}
	} else {
		var_1_15 = var_1_12;
	}


	// From: Req2Batch163no_floats
	signed long int stepLocal_3 = (max (var_1_4 , var_1_15)) * var_1_1;
	unsigned char stepLocal_2 = var_1_7;
	unsigned short int stepLocal_1 = var_1_15;
	if (var_1_6 || stepLocal_2) {
		if ((max (var_1_15 , last_1_var_1_5)) < stepLocal_3) {
			if (stepLocal_1 >= var_1_1) {
				var_1_5 = var_1_4;
			}
		} else {
			var_1_5 = var_1_15;
		}
	} else {
		var_1_5 = var_1_15;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_15 = var_1_15;
}

int property(void) {
	return ((((last_1_var_1_15 >= (last_1_var_1_5 / var_1_4)) ? (var_1_1 == ((signed long int) last_1_var_1_15)) : 1) && ((var_1_6 || var_1_7) ? (((max (var_1_15 , last_1_var_1_5)) < ((max (var_1_4 , var_1_15)) * var_1_1)) ? ((var_1_15 >= var_1_1) ? (var_1_5 == ((unsigned long int) var_1_4)) : 1) : (var_1_5 == ((unsigned long int) var_1_15))) : (var_1_5 == ((unsigned long int) var_1_15)))) && ((((var_1_11 - var_1_12) - 32) < var_1_4) ? (var_1_10 == ((signed long int) (min ((-128 + (max (var_1_13 , -100))) , var_1_14)))) : 1)) && ((var_1_6 && var_1_7) ? (var_1_6 ? (var_1_7 ? ((8 > var_1_11) ? (var_1_15 == ((unsigned short int) var_1_11)) : 1) : (var_1_15 == ((unsigned short int) var_1_11))) : (var_1_15 == ((unsigned short int) var_1_11))) : (var_1_15 == ((unsigned short int) var_1_12)))
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
