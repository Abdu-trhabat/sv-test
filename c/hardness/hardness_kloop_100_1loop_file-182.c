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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182100_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = 500;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 256;
unsigned long int var_1_4 = 5;
unsigned long int var_1_5 = 5;
signed long int var_1_6 = 1;
signed long int var_1_7 = 10000;
signed short int var_1_8 = 1;
float var_1_9 = 32.44;
float var_1_10 = 24.6;
float var_1_11 = 32.25;
signed short int var_1_12 = 64;
signed short int var_1_13 = 4;
signed short int var_1_14 = 4;
signed short int var_1_15 = 8;
signed long int var_1_16 = -32;
float var_1_17 = 256.5;
signed long int var_1_18 = -1;
signed short int var_1_19 = -64;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -64;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
signed short int var_1_25 = 0;
signed short int var_1_26 = -5;
signed short int var_1_27 = 5;
signed long int var_1_28 = -25;
unsigned long int var_1_29 = 0;
unsigned long int var_1_30 = 10;
unsigned long int var_1_31 = 1934515792;
unsigned long int var_1_32 = 2311995430;
signed short int var_1_33 = -64;
double var_1_34 = -0.5;
double var_1_35 = 100.6;
double var_1_36 = 10000000.75;
double var_1_37 = 127.6;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
signed short int var_1_40 = 31884;
signed short int var_1_41 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 500;
signed short int last_1_var_1_19 = -64;
unsigned char last_1_var_1_21 = 0;
signed short int last_1_var_1_25 = 0;
unsigned long int last_1_var_1_29 = 0;
signed short int last_1_var_1_33 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch182100_1loop
	signed long int stepLocal_2 = var_1_7;
	unsigned long int stepLocal_1 = last_1_var_1_29;
	if (256 != stepLocal_2) {
		if (stepLocal_1 >= (last_1_var_1_29 / var_1_22)) {
			var_1_21 = (! var_1_23);
		} else {
			var_1_21 = (var_1_23 && var_1_24);
		}
	}


	// From: Req11Batch182100_1loop
	if (last_1_var_1_33 >= (max (var_1_27 , last_1_var_1_19))) {
		if ((- 1) >= last_1_var_1_33) {
			if (last_1_var_1_29 > (- (last_1_var_1_1 & 32u))) {
				var_1_38 = (! (last_1_var_1_21 && var_1_39));
			} else {
				if (((var_1_40 - var_1_41) << last_1_var_1_19) <= last_1_var_1_33) {
					var_1_38 = var_1_39;
				} else {
					var_1_38 = 0;
				}
			}
		}
	} else {
		var_1_38 = 0;
	}


	// From: Req1Batch182100_1loop
	if (((max (var_1_2 , var_1_3)) & var_1_4) <= var_1_5) {
		var_1_1 = (var_1_6 - var_1_7);
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch182100_1loop
	if ((2.8f * (min (var_1_9 , var_1_10))) <= var_1_11) {
		var_1_8 = ((min (var_1_12 , (max (1 , var_1_13)))) - (max (var_1_14 , var_1_15)));
	} else {
		var_1_8 = var_1_15;
	}


	// From: Req9Batch182100_1loop
	var_1_33 = (max (var_1_12 , (min ((var_1_13 - var_1_15) , (var_1_27 + var_1_26)))));


	// From: Req10Batch182100_1loop
	unsigned char stepLocal_5 = var_1_24;
	if (stepLocal_5 || var_1_23) {
		var_1_34 = (min (((abs (var_1_35)) - var_1_36) , var_1_37));
	}


	// From: Req3Batch182100_1loop
	if ((max ((- var_1_34) , (var_1_34 / var_1_17))) != var_1_34) {
		var_1_16 = (var_1_18 - var_1_15);
	} else {
		var_1_16 = (abs (-100000000));
	}


	// From: Req6Batch182100_1loop
	signed long int stepLocal_4 = var_1_16;
	signed long int stepLocal_3 = var_1_6;
	if (var_1_18 != stepLocal_4) {
		if (last_1_var_1_25 < stepLocal_3) {
			var_1_25 = var_1_12;
		} else {
			if (var_1_23) {
				var_1_25 = var_1_15;
			} else {
				var_1_25 = (var_1_26 + var_1_27);
			}
		}
	} else {
		var_1_25 = var_1_13;
	}


	// From: Req8Batch182100_1loop
	if (var_1_21) {
		if (var_1_24) {
			var_1_29 = var_1_7;
		}
	} else {
		if (var_1_38) {
			var_1_29 = (var_1_30 + (var_1_31 - var_1_14));
		} else {
			var_1_29 = (var_1_32 - var_1_14);
		}
	}


	// From: Req4Batch182100_1loop
	signed long int stepLocal_0 = var_1_1;
	if (stepLocal_0 != (last_1_var_1_19 | var_1_1)) {
		if (var_1_38) {
			var_1_19 = ((abs (var_1_14 - 10)) - var_1_15);
		} else {
			var_1_19 = var_1_15;
		}
	} else {
		var_1_19 = var_1_14;
	}


	// From: Req7Batch182100_1loop
	if ((127.25f + var_1_17) > var_1_34) {
		var_1_28 = (var_1_29 + var_1_1);
	} else {
		var_1_28 = (var_1_6 - var_1_14);
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
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 2147483646);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483648);
	assume_abort_if_not(var_1_22 <= 2147483647);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -16383);
	assume_abort_if_not(var_1_26 <= 16383);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -16383);
	assume_abort_if_not(var_1_27 <= 16383);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 16383);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return (((((((((((((max (var_1_2 , var_1_3)) & var_1_4) <= var_1_5) ? (var_1_1 == ((signed long int) (var_1_6 - var_1_7))) : (var_1_1 == ((signed long int) var_1_7))) && (((2.8f * (min (var_1_9 , var_1_10))) <= var_1_11) ? (var_1_8 == ((signed short int) ((min (var_1_12 , (max (1 , var_1_13)))) - (max (var_1_14 , var_1_15))))) : (var_1_8 == ((signed short int) var_1_15)))) && (((max ((- var_1_34) , (var_1_34 / var_1_17))) != var_1_34) ? (var_1_16 == ((signed long int) (var_1_18 - var_1_15))) : (var_1_16 == ((signed long int) (abs (-100000000)))))) && ((var_1_1 != (last_1_var_1_19 | var_1_1)) ? (var_1_38 ? (var_1_19 == ((signed short int) ((abs (var_1_14 - 10)) - var_1_15))) : (var_1_19 == ((signed short int) var_1_15))) : (var_1_19 == ((signed short int) var_1_14)))) && ((256 != var_1_7) ? ((last_1_var_1_29 >= (last_1_var_1_29 / var_1_22)) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) (var_1_23 && var_1_24)))) : 1)) && ((var_1_18 != var_1_16) ? ((last_1_var_1_25 < var_1_6) ? (var_1_25 == ((signed short int) var_1_12)) : (var_1_23 ? (var_1_25 == ((signed short int) var_1_15)) : (var_1_25 == ((signed short int) (var_1_26 + var_1_27))))) : (var_1_25 == ((signed short int) var_1_13)))) && (((127.25f + var_1_17) > var_1_34) ? (var_1_28 == ((signed long int) (var_1_29 + var_1_1))) : (var_1_28 == ((signed long int) (var_1_6 - var_1_14))))) && (var_1_21 ? (var_1_24 ? (var_1_29 == ((unsigned long int) var_1_7)) : 1) : (var_1_38 ? (var_1_29 == ((unsigned long int) (var_1_30 + (var_1_31 - var_1_14)))) : (var_1_29 == ((unsigned long int) (var_1_32 - var_1_14)))))) && (var_1_33 == ((signed short int) (max (var_1_12 , (min ((var_1_13 - var_1_15) , (var_1_27 + var_1_26)))))))) && ((var_1_24 || var_1_23) ? (var_1_34 == ((double) (min (((abs (var_1_35)) - var_1_36) , var_1_37)))) : 1)) && ((last_1_var_1_33 >= (max (var_1_27 , last_1_var_1_19))) ? (((- 1) >= last_1_var_1_33) ? ((last_1_var_1_29 > (- (last_1_var_1_1 & 32u))) ? (var_1_38 == ((unsigned char) (! (last_1_var_1_21 && var_1_39)))) : ((((var_1_40 - var_1_41) << last_1_var_1_19) <= last_1_var_1_33) ? (var_1_38 == ((unsigned char) var_1_39)) : (var_1_38 == ((unsigned char) 0)))) : 1) : (var_1_38 == ((unsigned char) 0)))
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
