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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196has_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 256;
unsigned short int var_1_4 = 19354;
unsigned short int var_1_5 = 16876;
unsigned short int var_1_6 = 2;
unsigned short int var_1_7 = 47567;
unsigned short int var_1_8 = 2;
signed char var_1_9 = -128;
signed char var_1_10 = 5;
signed char var_1_11 = -2;
signed char var_1_12 = -5;
signed char var_1_13 = -16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch196has_floats
	if (var_1_2) {
		var_1_1 = (max (var_1_3 , 100));
	} else {
		var_1_1 = (((min (var_1_4 , var_1_5)) - 32) + 10);
	}


	// From: Req2Batch196has_floats
	unsigned short int stepLocal_1 = var_1_3;
	unsigned short int stepLocal_0 = var_1_1;
	if (var_1_1 <= stepLocal_1) {
		if (stepLocal_0 >= var_1_3) {
			var_1_6 = (min ((min ((var_1_7 - var_1_5) , var_1_4)) , (min (var_1_3 , var_1_8))));
		}
	} else {
		var_1_6 = var_1_3;
	}


	// From: Req3Batch196has_floats
	if (var_1_8 <= (abs (var_1_6))) {
		var_1_9 = (10 - var_1_10);
	} else {
		if (! var_1_2) {
			var_1_9 = (var_1_11 + (min (var_1_12 , var_1_13)));
		} else {
			if (var_1_2) {
				var_1_9 = 64;
			} else {
				var_1_9 = var_1_11;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 16383);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 16383);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((var_1_2 ? (var_1_1 == ((unsigned short int) (max (var_1_3 , 100)))) : (var_1_1 == ((unsigned short int) (((min (var_1_4 , var_1_5)) - 32) + 10)))) && ((var_1_1 <= var_1_3) ? ((var_1_1 >= var_1_3) ? (var_1_6 == ((unsigned short int) (min ((min ((var_1_7 - var_1_5) , var_1_4)) , (min (var_1_3 , var_1_8)))))) : 1) : (var_1_6 == ((unsigned short int) var_1_3)))) && ((var_1_8 <= (abs (var_1_6))) ? (var_1_9 == ((signed char) (10 - var_1_10))) : ((! var_1_2) ? (var_1_9 == ((signed char) (var_1_11 + (min (var_1_12 , var_1_13))))) : (var_1_2 ? (var_1_9 == ((signed char) 64)) : (var_1_9 == ((signed char) var_1_11)))))
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
