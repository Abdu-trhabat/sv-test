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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149no_floats.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 4;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 52712;
unsigned short int var_1_4 = 25;
unsigned long int var_1_5 = 64;
signed long int var_1_6 = 200;
signed long int var_1_7 = -500;
signed long int var_1_8 = -32;
signed long int var_1_9 = 10;
signed long int var_1_10 = 10;
signed long int var_1_11 = 32;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch149no_floats
	signed long int stepLocal_2 = 4;
	unsigned short int stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = - 4;
	if (var_1_2) {
		var_1_1 = (var_1_3 - var_1_4);
	} else {
		if (stepLocal_1 == var_1_4) {
			if (var_1_3 < stepLocal_2) {
				var_1_1 = var_1_4;
			} else {
				if (stepLocal_0 < var_1_3) {
					var_1_1 = (min (var_1_3 , var_1_4));
				} else {
					var_1_1 = var_1_3;
				}
			}
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch149no_floats
	unsigned short int stepLocal_4 = var_1_4;
	unsigned short int stepLocal_3 = var_1_3;
	if (var_1_3 < stepLocal_4) {
		if (var_1_1 < stepLocal_3) {
			var_1_5 = (var_1_4 + var_1_1);
		} else {
			var_1_5 = var_1_1;
		}
	}


	// From: Req3Batch149no_floats
	var_1_6 = (var_1_7 + var_1_8);


	// From: Req4Batch149no_floats
	if (var_1_6 == 8) {
		var_1_9 = ((min (0 , 2)) - (min (var_1_10 , var_1_11)));
	} else {
		var_1_9 = -64;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((var_1_2 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_4))) : ((var_1_3 == var_1_4) ? ((var_1_3 < 4) ? (var_1_1 == ((unsigned short int) var_1_4)) : (((- 4) < var_1_3) ? (var_1_1 == ((unsigned short int) (min (var_1_3 , var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_3)))) : (var_1_1 == ((unsigned short int) var_1_4)))) && ((var_1_3 < var_1_4) ? ((var_1_1 < var_1_3) ? (var_1_5 == ((unsigned long int) (var_1_4 + var_1_1))) : (var_1_5 == ((unsigned long int) var_1_1))) : 1)) && (var_1_6 == ((signed long int) (var_1_7 + var_1_8)))) && ((var_1_6 == 8) ? (var_1_9 == ((signed long int) ((min (0 , 2)) - (min (var_1_10 , var_1_11))))) : (var_1_9 == ((signed long int) -64)))
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
