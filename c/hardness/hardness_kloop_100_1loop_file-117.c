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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117100_1loop.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 256;
unsigned char var_1_2 = 0;
unsigned long int var_1_4 = 0;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 1;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 100;
unsigned char var_1_9 = 32;
unsigned char var_1_10 = 0;
double var_1_11 = 49.25;
double var_1_12 = 3.25;
double var_1_13 = 128.5;
double var_1_14 = 16.2;
unsigned short int var_1_15 = 32;
unsigned short int var_1_16 = 44429;
unsigned short int var_1_17 = 256;
unsigned long int var_1_18 = 0;
unsigned char var_1_19 = 50;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 8;
unsigned short int var_1_22 = 2;
double var_1_23 = 255.4;
double var_1_24 = 0.0;
double var_1_25 = 7.48;
double var_1_26 = 99999999999.5;
double var_1_27 = 3.5;
double var_1_28 = 32.4;
unsigned long int var_1_29 = 64;
unsigned long int var_1_30 = 1352948721;
unsigned long int var_1_31 = 3112583498;
unsigned long int var_1_32 = 128;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 2544889372;
signed long int var_1_35 = 1;
signed long int var_1_36 = 32;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 0;
double last_1_var_1_23 = 255.4;
unsigned long int last_1_var_1_29 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch117100_1loop
	if (last_1_var_1_23 < var_1_26) {
		var_1_35 = (max ((last_1_var_1_29 - last_1_var_1_18) , var_1_36));
	}


	// From: Req2Batch117100_1loop
	var_1_6 = ((abs (abs (var_1_4))) + var_1_7);


	// From: Req5Batch117100_1loop
	unsigned long int stepLocal_4 = var_1_4;
	if (4 > stepLocal_4) {
		if (var_1_2) {
			var_1_15 = (var_1_16 - var_1_10);
		}
	}


	// From: Req7Batch117100_1loop
	var_1_18 = (var_1_10 + (abs (var_1_6)));


	// From: Req10Batch117100_1loop
	var_1_23 = ((var_1_24 - (max (128.2 , var_1_25))) - ((var_1_26 + var_1_27) + var_1_28));


	// From: Req1Batch117100_1loop
	unsigned long int stepLocal_1 = var_1_6;
	unsigned long int stepLocal_0 = var_1_6;
	if (stepLocal_0 < 16u) {
		if (stepLocal_1 >= 4u) {
			var_1_1 = (max ((var_1_4 + 100u) , var_1_5));
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req4Batch117100_1loop
	unsigned long int stepLocal_3 = 64u;
	if (var_1_18 >= stepLocal_3) {
		var_1_11 = var_1_12;
	} else {
		var_1_11 = ((max (var_1_13 , 64.5)) - var_1_14);
	}


	// From: Req8Batch117100_1loop
	if (var_1_23 == ((- var_1_14) * var_1_13)) {
		var_1_19 = ((var_1_20 - var_1_21) + var_1_9);
	} else {
		var_1_19 = var_1_9;
	}


	// From: Req9Batch117100_1loop
	unsigned char stepLocal_7 = var_1_19;
	unsigned char stepLocal_6 = var_1_2;
	if (((var_1_1 * var_1_35) <= var_1_4) || stepLocal_6) {
		var_1_22 = (var_1_16 - var_1_35);
	} else {
		if (stepLocal_7 == (var_1_21 << var_1_7)) {
			var_1_22 = (var_1_20 + var_1_35);
		} else {
			var_1_22 = var_1_16;
		}
	}


	// From: Req6Batch117100_1loop
	unsigned char stepLocal_5 = var_1_9;
	if (stepLocal_5 <= var_1_6) {
		var_1_17 = (53266 - var_1_9);
	} else {
		var_1_17 = (max ((max (var_1_9 , 0)) , var_1_35));
	}


	// From: Req11Batch117100_1loop
	if (var_1_35 == var_1_5) {
		if ((var_1_25 + var_1_11) < var_1_12) {
			if ((- var_1_10) != (var_1_18 - var_1_20)) {
				var_1_29 = ((var_1_30 + 1795584486u) - ((abs (1321311146u)) - var_1_21));
			} else {
				var_1_29 = (min (var_1_17 , (var_1_31 - 50u)));
			}
		} else {
			var_1_29 = var_1_16;
		}
	} else {
		if ((var_1_26 * var_1_14) > (- var_1_11)) {
			if (var_1_2) {
				var_1_29 = (var_1_18 + var_1_32);
			} else {
				if (var_1_33) {
					var_1_29 = (min (((min (var_1_31 , var_1_34)) - var_1_10) , var_1_18));
				}
			}
		}
	}


	// From: Req3Batch117100_1loop
	unsigned long int stepLocal_2 = var_1_1;
	if (var_1_29 != stepLocal_2) {
		var_1_8 = ((min (var_1_9 , 0)) + var_1_10);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 63);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 4611686.018427383000e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 1073741823);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483647);
	assume_abort_if_not(var_1_36 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	return ((((((((((((var_1_6 < 16u) ? ((var_1_6 >= 4u) ? (var_1_1 == ((unsigned long int) (max ((var_1_4 + 100u) , var_1_5)))) : (var_1_1 == ((unsigned long int) var_1_5))) : (var_1_1 == ((unsigned long int) var_1_4))) && (var_1_6 == ((unsigned long int) ((abs (abs (var_1_4))) + var_1_7)))) && ((var_1_29 != var_1_1) ? (var_1_8 == ((unsigned char) ((min (var_1_9 , 0)) + var_1_10))) : 1)) && ((var_1_18 >= 64u) ? (var_1_11 == ((double) var_1_12)) : (var_1_11 == ((double) ((max (var_1_13 , 64.5)) - var_1_14))))) && ((4 > var_1_4) ? (var_1_2 ? (var_1_15 == ((unsigned short int) (var_1_16 - var_1_10))) : 1) : 1)) && ((var_1_9 <= var_1_6) ? (var_1_17 == ((unsigned short int) (53266 - var_1_9))) : (var_1_17 == ((unsigned short int) (max ((max (var_1_9 , 0)) , var_1_35)))))) && (var_1_18 == ((unsigned long int) (var_1_10 + (abs (var_1_6)))))) && ((var_1_23 == ((- var_1_14) * var_1_13)) ? (var_1_19 == ((unsigned char) ((var_1_20 - var_1_21) + var_1_9))) : (var_1_19 == ((unsigned char) var_1_9)))) && ((((var_1_1 * var_1_35) <= var_1_4) || var_1_2) ? (var_1_22 == ((unsigned short int) (var_1_16 - var_1_35))) : ((var_1_19 == (var_1_21 << var_1_7)) ? (var_1_22 == ((unsigned short int) (var_1_20 + var_1_35))) : (var_1_22 == ((unsigned short int) var_1_16))))) && (var_1_23 == ((double) ((var_1_24 - (max (128.2 , var_1_25))) - ((var_1_26 + var_1_27) + var_1_28))))) && ((var_1_35 == var_1_5) ? (((var_1_25 + var_1_11) < var_1_12) ? (((- var_1_10) != (var_1_18 - var_1_20)) ? (var_1_29 == ((unsigned long int) ((var_1_30 + 1795584486u) - ((abs (1321311146u)) - var_1_21)))) : (var_1_29 == ((unsigned long int) (min (var_1_17 , (var_1_31 - 50u)))))) : (var_1_29 == ((unsigned long int) var_1_16))) : (((var_1_26 * var_1_14) > (- var_1_11)) ? (var_1_2 ? (var_1_29 == ((unsigned long int) (var_1_18 + var_1_32))) : (var_1_33 ? (var_1_29 == ((unsigned long int) (min (((min (var_1_31 , var_1_34)) - var_1_10) , var_1_18)))) : 1)) : 1))) && ((last_1_var_1_23 < var_1_26) ? (var_1_35 == ((signed long int) (max ((last_1_var_1_29 - last_1_var_1_18) , var_1_36)))) : 1)
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
