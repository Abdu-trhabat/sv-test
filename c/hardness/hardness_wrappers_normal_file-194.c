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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194normal.c", 13, "reach_error"); }
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
signed char var_1_1 = 16;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 32;
unsigned long int var_1_4 = 8;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 0;
signed long int var_1_7 = 10;
signed char var_1_8 = -100;
signed long int var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned short int var_1_11 = 64;
signed char var_1_12 = -50;
signed char var_1_13 = 32;
signed char var_1_14 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch194normal
	unsigned char stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = var_1_5 / (min (var_1_7 , var_1_11));
	if (stepLocal_2 && var_1_10) {
		var_1_9 = var_1_6;
	} else {
		if (var_1_10) {
			if (var_1_6 >= stepLocal_1) {
				var_1_9 = var_1_8;
			}
		}
	}


	// From: Req3Batch194normal
	if (var_1_2) {
		if (var_1_7 > (var_1_8 | (max (var_1_11 , var_1_3)))) {
			if ((var_1_13 - var_1_14) < (var_1_8 / (max (var_1_7 , var_1_11)))) {
				var_1_12 = var_1_8;
			} else {
				var_1_12 = 8;
			}
		} else {
			var_1_12 = var_1_8;
		}
	}


	// From: Req1Batch194normal
	unsigned char stepLocal_0 = (var_1_9 % var_1_7) >= var_1_9;
	if (var_1_2) {
		if ((var_1_3 == var_1_4) && stepLocal_0) {
			var_1_1 = (abs (var_1_8));
		}
	} else {
		var_1_1 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -126);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65535);
	assume_abort_if_not(var_1_11 != 0);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((var_1_2 ? (((var_1_3 == var_1_4) && ((var_1_9 % var_1_7) >= var_1_9)) ? (var_1_1 == ((signed char) (abs (var_1_8)))) : 1) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_2 && var_1_10) ? (var_1_9 == ((signed long int) var_1_6)) : (var_1_10 ? ((var_1_6 >= (var_1_5 / (min (var_1_7 , var_1_11)))) ? (var_1_9 == ((signed long int) var_1_8)) : 1) : 1))) && (var_1_2 ? ((var_1_7 > (var_1_8 | (max (var_1_11 , var_1_3)))) ? (((var_1_13 - var_1_14) < (var_1_8 / (max (var_1_7 , var_1_11)))) ? (var_1_12 == ((signed char) var_1_8)) : (var_1_12 == ((signed char) 8))) : (var_1_12 == ((signed char) var_1_8))) : 1)
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
