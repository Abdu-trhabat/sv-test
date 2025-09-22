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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
signed long int var_1_6 = 200;
signed long int var_1_7 = 16;
signed long int var_1_8 = 32;
signed long int var_1_9 = 256;
unsigned char var_1_10 = 32;
signed char var_1_11 = -4;
signed char var_1_12 = -32;
signed char var_1_13 = -2;
signed char var_1_14 = -2;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 2;
unsigned long int var_1_18 = 10;
signed long int var_1_19 = -128;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned short int var_1_23 = 50;
double var_1_24 = 1000.6;
double var_1_25 = 31.25;
signed long int var_1_26 = 10;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 64;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 200;
unsigned char var_1_38 = 200;
unsigned char var_1_39 = 128;
float var_1_40 = 50.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 5;
signed char last_1_var_1_14 = -2;
signed long int last_1_var_1_19 = -128;
unsigned char last_1_var_1_20 = 1;
unsigned short int last_1_var_1_23 = 50;
signed long int last_1_var_1_26 = 10;
unsigned char last_1_var_1_27 = 0;
unsigned char last_1_var_1_30 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch132100_1loop
	var_1_19 = ((last_1_var_1_30 - (var_1_10 + last_1_var_1_23)) + last_1_var_1_14);


	// From: Req10Batch132100_1loop
	signed long int stepLocal_6 = -5 / var_1_17;
	unsigned char stepLocal_5 = last_1_var_1_1 > -2;
	if (last_1_var_1_27 || stepLocal_5) {
		if (last_1_var_1_26 == stepLocal_6) {
			var_1_27 = (! var_1_22);
		} else {
			var_1_27 = (! var_1_21);
		}
	} else {
		if (! last_1_var_1_20) {
			var_1_27 = ((var_1_21 || (last_1_var_1_20 && var_1_28)) || var_1_29);
		} else {
			var_1_27 = var_1_21;
		}
	}


	// From: Req11Batch132100_1loop
	if (var_1_27) {
		var_1_30 = ((var_1_31 + (max (var_1_32 , var_1_33))) - ((max (var_1_34 , 100)) - (var_1_35 + var_1_36)));
	} else {
		var_1_30 = ((min (var_1_37 , (var_1_38 - var_1_35))) - var_1_32);
	}


	// From: Req3Batch132100_1loop
	if (var_1_15 || var_1_16) {
		if (var_1_15) {
			if ((var_1_10 / var_1_17) >= var_1_7) {
				if (var_1_6 >= (var_1_10 - var_1_8)) {
					var_1_14 = var_1_12;
				} else {
					var_1_14 = var_1_13;
				}
			}
		} else {
			var_1_14 = var_1_13;
		}
	}


	// From: Req4Batch132100_1loop
	var_1_18 = var_1_17;


	// From: Req8Batch132100_1loop
	var_1_24 = var_1_25;


	// From: Req12Batch132100_1loop
	unsigned long int stepLocal_9 = var_1_18;
	unsigned char stepLocal_8 = var_1_17 < var_1_35;
	signed long int stepLocal_7 = -32;
	if (var_1_21 && stepLocal_8) {
		var_1_39 = (abs (var_1_35));
	} else {
		if (stepLocal_9 < 4u) {
			var_1_39 = (var_1_33 + var_1_36);
		} else {
			if (stepLocal_7 >= var_1_10) {
				var_1_39 = (min (var_1_33 , var_1_36));
			} else {
				var_1_39 = var_1_10;
			}
		}
	}


	// From: Req13Batch132100_1loop
	var_1_40 = var_1_25;


	// From: Req7Batch132100_1loop
	var_1_23 = ((var_1_39 + var_1_19) + var_1_10);


	// From: Req9Batch132100_1loop
	if (last_1_var_1_27) {
		var_1_26 = ((min (last_1_var_1_30 , last_1_var_1_19)) + var_1_10);
	}


	// From: Req6Batch132100_1loop
	unsigned char stepLocal_4 = var_1_27;
	signed long int stepLocal_3 = var_1_8;
	if ((var_1_26 >= (var_1_8 | var_1_9)) || stepLocal_4) {
		if (var_1_24 == var_1_40) {
			if (var_1_18 >= stepLocal_3) {
				var_1_20 = var_1_21;
			} else {
				var_1_20 = var_1_22;
			}
		} else {
			var_1_20 = var_1_21;
		}
	} else {
		var_1_20 = var_1_22;
	}


	// From: Req1Batch132100_1loop
	signed long int stepLocal_0 = (var_1_6 + var_1_7) - (min (var_1_8 , var_1_9));
	if ((var_1_26 * var_1_39) == stepLocal_0) {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch132100_1loop
	signed long int stepLocal_2 = var_1_7;
	signed long int stepLocal_1 = var_1_26;
	if (((min (5 , var_1_39)) + (var_1_7 << var_1_1)) < stepLocal_1) {
		var_1_11 = (var_1_12 + (abs (var_1_13)));
	} else {
		if (var_1_8 < stepLocal_2) {
			var_1_11 = 64;
		} else {
			var_1_11 = var_1_12;
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741824);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65535);
	assume_abort_if_not(var_1_17 != 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 63);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 64);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 64);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 31);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 190);
	assume_abort_if_not(var_1_38 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_30 = var_1_30;
}

int property(void) {
	return ((((((((((((((var_1_26 * var_1_39) == ((var_1_6 + var_1_7) - (min (var_1_8 , var_1_9)))) ? (var_1_1 == ((unsigned char) var_1_10)) : 1) && ((((min (5 , var_1_39)) + (var_1_7 << var_1_1)) < var_1_26) ? (var_1_11 == ((signed char) (var_1_12 + (abs (var_1_13))))) : ((var_1_8 < var_1_7) ? (var_1_11 == ((signed char) 64)) : (var_1_11 == ((signed char) var_1_12))))) && ((var_1_15 || var_1_16) ? (var_1_15 ? (((var_1_10 / var_1_17) >= var_1_7) ? ((var_1_6 >= (var_1_10 - var_1_8)) ? (var_1_14 == ((signed char) var_1_12)) : (var_1_14 == ((signed char) var_1_13))) : 1) : (var_1_14 == ((signed char) var_1_13))) : 1)) && (var_1_18 == ((unsigned long int) var_1_17))) && (var_1_19 == ((signed long int) ((last_1_var_1_30 - (var_1_10 + last_1_var_1_23)) + last_1_var_1_14)))) && (((var_1_26 >= (var_1_8 | var_1_9)) || var_1_27) ? ((var_1_24 == var_1_40) ? ((var_1_18 >= var_1_8) ? (var_1_20 == ((unsigned char) var_1_21)) : (var_1_20 == ((unsigned char) var_1_22))) : (var_1_20 == ((unsigned char) var_1_21))) : (var_1_20 == ((unsigned char) var_1_22)))) && (var_1_23 == ((unsigned short int) ((var_1_39 + var_1_19) + var_1_10)))) && (var_1_24 == ((double) var_1_25))) && (last_1_var_1_27 ? (var_1_26 == ((signed long int) ((min (last_1_var_1_30 , last_1_var_1_19)) + var_1_10))) : 1)) && ((last_1_var_1_27 || (last_1_var_1_1 > -2)) ? ((last_1_var_1_26 == (-5 / var_1_17)) ? (var_1_27 == ((unsigned char) (! var_1_22))) : (var_1_27 == ((unsigned char) (! var_1_21)))) : ((! last_1_var_1_20) ? (var_1_27 == ((unsigned char) ((var_1_21 || (last_1_var_1_20 && var_1_28)) || var_1_29))) : (var_1_27 == ((unsigned char) var_1_21))))) && (var_1_27 ? (var_1_30 == ((unsigned char) ((var_1_31 + (max (var_1_32 , var_1_33))) - ((max (var_1_34 , 100)) - (var_1_35 + var_1_36))))) : (var_1_30 == ((unsigned char) ((min (var_1_37 , (var_1_38 - var_1_35))) - var_1_32))))) && ((var_1_21 && (var_1_17 < var_1_35)) ? (var_1_39 == ((unsigned char) (abs (var_1_35)))) : ((var_1_18 < 4u) ? (var_1_39 == ((unsigned char) (var_1_33 + var_1_36))) : ((-32 >= var_1_10) ? (var_1_39 == ((unsigned char) (min (var_1_33 , var_1_36)))) : (var_1_39 == ((unsigned char) var_1_10)))))) && (var_1_40 == ((float) var_1_25))
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
