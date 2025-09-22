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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Amount25.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 5;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
signed long int var_1_7 = -64;
unsigned char var_1_8 = 8;
unsigned char var_1_9 = 8;
unsigned char var_1_10 = 64;
signed char var_1_11 = -1;
signed char var_1_12 = 64;
signed char var_1_13 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch172Amount25
	if (var_1_2 >= var_1_3) {
		var_1_1 = (var_1_4 || var_1_5);
	} else {
		if (var_1_2 >= var_1_3) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch172Amount25
	if (var_1_2 < var_1_3) {
		if (var_1_2 <= var_1_3) {
			if (var_1_6) {
				var_1_7 = var_1_2;
			}
		}
	}


	// From: Req3Batch172Amount25
	if (var_1_7 < 8) {
		var_1_8 = (min (var_1_9 , var_1_10));
	} else {
		var_1_8 = (abs (var_1_10));
	}


	// From: Req4Batch172Amount25
	if (var_1_9 == var_1_7) {
		var_1_11 = ((var_1_12 - 8) - var_1_13);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 62);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : ((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_5)))) && ((var_1_2 < var_1_3) ? ((var_1_2 <= var_1_3) ? (var_1_6 ? (var_1_7 == ((signed long int) var_1_2)) : 1) : 1) : 1)) && ((var_1_7 < 8) ? (var_1_8 == ((unsigned char) (min (var_1_9 , var_1_10)))) : (var_1_8 == ((unsigned char) (abs (var_1_10)))))) && ((var_1_9 == var_1_7) ? (var_1_11 == ((signed char) ((var_1_12 - 8) - var_1_13))) : 1)
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
