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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143has_floats.c", 13, "reach_error"); }
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
signed short int var_1_1 = -8;
unsigned short int var_1_2 = 0;
unsigned char var_1_4 = 1;
signed short int var_1_5 = 100;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 4;
unsigned char var_1_9 = 64;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch143has_floats
	unsigned long int stepLocal_0 = - last_1_var_1_12;
	if (stepLocal_0 <= last_1_var_1_12) {
		if (! var_1_4) {
			var_1_1 = (abs (1 - var_1_5));
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req2Batch143has_floats
	signed short int stepLocal_2 = var_1_1;
	unsigned char stepLocal_1 = var_1_4;
	if (stepLocal_1 && (! var_1_7)) {
		var_1_6 = var_1_8;
	} else {
		if (stepLocal_2 != var_1_2) {
			var_1_6 = (min (var_1_8 , ((var_1_9 - var_1_10) + var_1_11)));
		} else {
			var_1_6 = var_1_11;
		}
	}


	// From: Req3Batch143has_floats
	unsigned char stepLocal_4 = var_1_13;
	signed short int stepLocal_3 = var_1_5;
	if (var_1_4) {
		if (var_1_7 && stepLocal_4) {
			var_1_12 = (abs (abs (var_1_6 + var_1_2)));
		}
	} else {
		if (stepLocal_3 > var_1_9) {
			var_1_12 = var_1_6;
		} else {
			var_1_12 = var_1_10;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 63);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	return ((((- last_1_var_1_12) <= last_1_var_1_12) ? ((! var_1_4) ? (var_1_1 == ((signed short int) (abs (1 - var_1_5)))) : 1) : (var_1_1 == ((signed short int) var_1_5))) && ((var_1_4 && (! var_1_7)) ? (var_1_6 == ((unsigned char) var_1_8)) : ((var_1_1 != var_1_2) ? (var_1_6 == ((unsigned char) (min (var_1_8 , ((var_1_9 - var_1_10) + var_1_11))))) : (var_1_6 == ((unsigned char) var_1_11))))) && (var_1_4 ? ((var_1_7 && var_1_13) ? (var_1_12 == ((unsigned long int) (abs (abs (var_1_6 + var_1_2))))) : 1) : ((var_1_5 > var_1_9) ? (var_1_12 == ((unsigned long int) var_1_6)) : (var_1_12 == ((unsigned long int) var_1_10))))
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
