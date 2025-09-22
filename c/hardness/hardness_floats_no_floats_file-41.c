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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41no_floats.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
unsigned long int var_1_2 = 64;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 8;
unsigned char var_1_5 = 0;
signed char var_1_6 = -8;
signed char var_1_7 = 5;
unsigned short int var_1_8 = 2;
unsigned short int var_1_9 = 8;
unsigned short int var_1_10 = 64;
unsigned char var_1_11 = 0;
signed long int var_1_12 = 0;
unsigned long int var_1_13 = 4062678883;
signed long int var_1_14 = -5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch41no_floats
	unsigned long int stepLocal_0 = (var_1_2 & 0u) * var_1_3;
	if (stepLocal_0 > var_1_4) {
		if (var_1_5) {
			var_1_1 = ((16 + var_1_6) + var_1_7);
		} else {
			var_1_1 = (abs (var_1_6));
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req2Batch41no_floats
	if (var_1_5) {
		var_1_8 = (var_1_9 + var_1_10);
	} else {
		if ((var_1_10 > var_1_4) || var_1_11) {
			var_1_8 = var_1_9;
		} else {
			var_1_8 = var_1_10;
		}
	}


	// From: Req3Batch41no_floats
	unsigned char stepLocal_2 = var_1_5;
	unsigned long int stepLocal_1 = (var_1_13 - var_1_8) - var_1_10;
	if (stepLocal_2 && (var_1_9 < var_1_2)) {
		if (var_1_3 == stepLocal_1) {
			var_1_12 = (min (var_1_14 , 8));
		} else {
			var_1_12 = var_1_14;
		}
	} else {
		var_1_12 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 3221225471);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((var_1_2 & 0u) * var_1_3) > var_1_4) ? (var_1_5 ? (var_1_1 == ((signed char) ((16 + var_1_6) + var_1_7))) : (var_1_1 == ((signed char) (abs (var_1_6))))) : (var_1_1 == ((signed char) var_1_6))) && (var_1_5 ? (var_1_8 == ((unsigned short int) (var_1_9 + var_1_10))) : (((var_1_10 > var_1_4) || var_1_11) ? (var_1_8 == ((unsigned short int) var_1_9)) : (var_1_8 == ((unsigned short int) var_1_10))))) && ((var_1_5 && (var_1_9 < var_1_2)) ? ((var_1_3 == ((var_1_13 - var_1_8) - var_1_10)) ? (var_1_12 == ((signed long int) (min (var_1_14 , 8)))) : (var_1_12 == ((signed long int) var_1_14))) : (var_1_12 == ((signed long int) var_1_14)))
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
