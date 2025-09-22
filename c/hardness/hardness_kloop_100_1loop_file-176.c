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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 2;
float var_1_2 = 256.75;
float var_1_3 = 8.5;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 50;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 128;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 64;
unsigned short int var_1_13 = 25;
unsigned short int var_1_14 = 54326;
unsigned long int var_1_15 = 128;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 100;
unsigned long int var_1_19 = 5;
unsigned long int var_1_20 = 3227898927;
unsigned long int var_1_21 = 1000000000;
double var_1_22 = 9999999999.4;
double var_1_23 = 31.6;
double var_1_24 = 127.5;
double var_1_25 = 64.25;
double var_1_26 = 255.6;
double var_1_27 = 128.29;
double var_1_28 = 7.5;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
double var_1_35 = 7.25;
signed char var_1_36 = -4;
signed char var_1_37 = -8;
signed char var_1_38 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 2;
unsigned char last_1_var_1_12 = 64;
unsigned short int last_1_var_1_13 = 25;
unsigned char last_1_var_1_17 = 128;
unsigned long int last_1_var_1_19 = 5;
double last_1_var_1_35 = 7.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch176100_1loop
	if (var_1_8 == ((- last_1_var_1_13) * last_1_var_1_1)) {
		if ((min ((var_1_3 * var_1_2) , last_1_var_1_35)) > last_1_var_1_35) {
			var_1_15 = var_1_5;
		} else {
			var_1_15 = last_1_var_1_17;
		}
	} else {
		var_1_15 = last_1_var_1_12;
	}


	// From: Req13Batch176100_1loop
	signed long int stepLocal_1 = 0;
	if (stepLocal_1 <= var_1_15) {
		var_1_35 = (var_1_26 - var_1_25);
	}


	// From: Req12Batch176100_1loop
	if (var_1_27 < (last_1_var_1_35 * var_1_25)) {
		var_1_29 = (var_1_30 && (var_1_31 && var_1_32));
	} else {
		if ((max (last_1_var_1_13 , last_1_var_1_19)) != (last_1_var_1_19 + -8)) {
			var_1_29 = ((var_1_33 || var_1_34) || (! var_1_30));
		}
	}


	// From: Req3Batch176100_1loop
	if (var_1_29) {
		var_1_9 = (var_1_8 + var_1_7);
	}


	// From: Req10Batch176100_1loop
	if (var_1_8 <= (min (25 , var_1_7))) {
		if (var_1_29) {
			var_1_22 = ((var_1_23 + var_1_24) + (var_1_25 - (max (var_1_26 , var_1_27))));
		}
	} else {
		var_1_22 = (var_1_23 + (abs (var_1_27)));
	}


	// From: Req1Batch176100_1loop
	if (! ((var_1_2 - var_1_3) < var_1_22)) {
		var_1_1 = (128 - var_1_5);
	}


	// From: Req2Batch176100_1loop
	var_1_6 = ((64 - (var_1_7 - var_1_8)) + var_1_5);


	// From: Req4Batch176100_1loop
	if (50 < var_1_9) {
		var_1_11 = var_1_8;
	}


	// From: Req5Batch176100_1loop
	if (var_1_3 < var_1_2) {
		var_1_12 = var_1_8;
	}


	// From: Req11Batch176100_1loop
	if ((var_1_14 == var_1_20) && (var_1_8 >= 0)) {
		var_1_28 = (var_1_26 - var_1_27);
	} else {
		var_1_28 = ((7.84392133852235E18 - var_1_25) - var_1_26);
	}


	// From: Req14Batch176100_1loop
	unsigned char stepLocal_2 = (var_1_15 > var_1_1) || var_1_32;
	if (var_1_34 || stepLocal_2) {
		var_1_36 = (32 + var_1_37);
	} else {
		var_1_36 = (16 - (max (var_1_38 , var_1_8)));
	}


	// From: Req6Batch176100_1loop
	if (var_1_5 <= var_1_15) {
		if (var_1_29) {
			var_1_13 = (var_1_14 - (max (var_1_8 , last_1_var_1_13)));
		} else {
			var_1_13 = var_1_15;
		}
	} else {
		var_1_13 = var_1_14;
	}


	// From: Req9Batch176100_1loop
	if (var_1_29) {
		var_1_19 = (var_1_20 - var_1_9);
	} else {
		var_1_19 = (var_1_8 + ((var_1_21 - var_1_12) + 8u));
	}


	// From: Req8Batch176100_1loop
	unsigned char stepLocal_0 = (var_1_8 != var_1_19) && (var_1_19 < var_1_5);
	if (var_1_29 && stepLocal_0) {
		var_1_17 = var_1_18;
	} else {
		var_1_17 = var_1_5;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 31);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 31);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 536870912);
	assume_abort_if_not(var_1_21 <= 1073741824);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -230584.3009213691400e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691400e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return ((((((((((((((! ((var_1_2 - var_1_3) < var_1_22)) ? (var_1_1 == ((unsigned char) (128 - var_1_5))) : 1) && (var_1_6 == ((unsigned char) ((64 - (var_1_7 - var_1_8)) + var_1_5)))) && (var_1_29 ? (var_1_9 == ((unsigned char) (var_1_8 + var_1_7))) : 1)) && ((50 < var_1_9) ? (var_1_11 == ((unsigned char) var_1_8)) : 1)) && ((var_1_3 < var_1_2) ? (var_1_12 == ((unsigned char) var_1_8)) : 1)) && ((var_1_5 <= var_1_15) ? (var_1_29 ? (var_1_13 == ((unsigned short int) (var_1_14 - (max (var_1_8 , last_1_var_1_13))))) : (var_1_13 == ((unsigned short int) var_1_15))) : (var_1_13 == ((unsigned short int) var_1_14)))) && ((var_1_8 == ((- last_1_var_1_13) * last_1_var_1_1)) ? (((min ((var_1_3 * var_1_2) , last_1_var_1_35)) > last_1_var_1_35) ? (var_1_15 == ((unsigned long int) var_1_5)) : (var_1_15 == ((unsigned long int) last_1_var_1_17))) : (var_1_15 == ((unsigned long int) last_1_var_1_12)))) && ((var_1_29 && ((var_1_8 != var_1_19) && (var_1_19 < var_1_5))) ? (var_1_17 == ((unsigned char) var_1_18)) : (var_1_17 == ((unsigned char) var_1_5)))) && (var_1_29 ? (var_1_19 == ((unsigned long int) (var_1_20 - var_1_9))) : (var_1_19 == ((unsigned long int) (var_1_8 + ((var_1_21 - var_1_12) + 8u)))))) && ((var_1_8 <= (min (25 , var_1_7))) ? (var_1_29 ? (var_1_22 == ((double) ((var_1_23 + var_1_24) + (var_1_25 - (max (var_1_26 , var_1_27)))))) : 1) : (var_1_22 == ((double) (var_1_23 + (abs (var_1_27))))))) && (((var_1_14 == var_1_20) && (var_1_8 >= 0)) ? (var_1_28 == ((double) (var_1_26 - var_1_27))) : (var_1_28 == ((double) ((7.84392133852235E18 - var_1_25) - var_1_26))))) && ((var_1_27 < (last_1_var_1_35 * var_1_25)) ? (var_1_29 == ((unsigned char) (var_1_30 && (var_1_31 && var_1_32)))) : (((max (last_1_var_1_13 , last_1_var_1_19)) != (last_1_var_1_19 + -8)) ? (var_1_29 == ((unsigned char) ((var_1_33 || var_1_34) || (! var_1_30)))) : 1))) && ((0 <= var_1_15) ? (var_1_35 == ((double) (var_1_26 - var_1_25))) : 1)) && ((var_1_34 || ((var_1_15 > var_1_1) || var_1_32)) ? (var_1_36 == ((signed char) (32 + var_1_37))) : (var_1_36 == ((signed char) (16 - (max (var_1_38 , var_1_8))))))
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
