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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96100_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = 200;
signed long int var_1_2 = 64;
signed long int var_1_3 = 50;
signed long int var_1_4 = 256;
signed long int var_1_5 = 8;
float var_1_6 = 100000000.15;
unsigned char var_1_8 = 0;
float var_1_9 = -0.25;
float var_1_10 = 63.5;
signed short int var_1_11 = 1;
signed short int var_1_12 = -128;
signed short int var_1_13 = 1;
signed short int var_1_14 = -128;
signed short int var_1_15 = 128;
float var_1_16 = 1000000000000.145;
float var_1_17 = 255.4;
float var_1_18 = 1.8;
float var_1_19 = 50.2;
unsigned short int var_1_20 = 2;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 256;
unsigned short int var_1_24 = 32;
unsigned short int var_1_25 = 10;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 100;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 2;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 5;
signed long int var_1_39 = -50;
signed long int var_1_40 = -8;
double var_1_41 = 31.4;
unsigned long int var_1_42 = 8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 200;
unsigned short int last_1_var_1_24 = 32;
unsigned short int last_1_var_1_25 = 10;
signed long int last_1_var_1_39 = -50;
unsigned long int last_1_var_1_42 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch96100_1loop
	unsigned char stepLocal_7 = var_1_27;
	signed long int stepLocal_6 = last_1_var_1_24;
	signed long int stepLocal_5 = max (last_1_var_1_25 , var_1_4);
	if (stepLocal_6 > last_1_var_1_1) {
		if (var_1_8 || stepLocal_7) {
			if (var_1_23 <= stepLocal_5) {
				var_1_26 = var_1_28;
			} else {
				var_1_26 = var_1_29;
			}
		} else {
			var_1_26 = var_1_29;
		}
	} else {
		var_1_26 = var_1_28;
	}


	// From: Req1Batch96100_1loop
	var_1_1 = (min (var_1_2 , (var_1_3 - (min (var_1_4 , var_1_5)))));


	// From: Req3Batch96100_1loop
	var_1_11 = (min (var_1_12 , 2));


	// From: Req4Batch96100_1loop
	signed long int stepLocal_2 = var_1_3;
	if (var_1_4 <= stepLocal_2) {
		var_1_13 = (abs (max (var_1_14 , var_1_15)));
	}


	// From: Req5Batch96100_1loop
	if (! (var_1_10 > var_1_9)) {
		var_1_16 = (max ((max (var_1_9 , (var_1_17 - var_1_18))) , var_1_10));
	}


	// From: Req6Batch96100_1loop
	if (var_1_18 <= (- var_1_10)) {
		var_1_19 = (min (var_1_9 , var_1_10));
	}


	// From: Req11Batch96100_1loop
	if (var_1_26) {
		var_1_30 = (max ((8 + var_1_31) , (max (var_1_32 , var_1_33))));
	} else {
		var_1_30 = (((min (var_1_34 , var_1_35)) + var_1_36) + (var_1_37 + var_1_38));
	}


	// From: Req14Batch96100_1loop
	var_1_41 = var_1_9;


	// From: Req15Batch96100_1loop
	var_1_42 = last_1_var_1_42;


	// From: Req8Batch96100_1loop
	signed long int stepLocal_3 = var_1_1;
	if (var_1_10 >= (var_1_18 - var_1_17)) {
		if (var_1_26) {
			if (stepLocal_3 >= var_1_22) {
				var_1_24 = var_1_22;
			}
		}
	} else {
		var_1_24 = 25;
	}


	// From: Req12Batch96100_1loop
	if (! var_1_26) {
		var_1_39 = (min (var_1_35 , var_1_4));
	} else {
		var_1_39 = (var_1_11 + (last_1_var_1_39 + var_1_36));
	}


	// From: Req9Batch96100_1loop
	signed long int stepLocal_4 = var_1_39;
	if (stepLocal_4 == var_1_4) {
		if (var_1_26) {
			if (var_1_18 <= var_1_17) {
				var_1_25 = var_1_21;
			} else {
				var_1_25 = 16;
			}
		}
	}


	// From: Req2Batch96100_1loop
	signed long int stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = 0;
	if (stepLocal_0 == (min (-4 , var_1_39))) {
		if (var_1_26) {
			if (var_1_4 < stepLocal_1) {
				var_1_6 = (max (var_1_9 , var_1_10));
			} else {
				var_1_6 = var_1_10;
			}
		}
	}


	// From: Req7Batch96100_1loop
	if ((max ((128.25f + var_1_6) , var_1_16)) < (max (var_1_18 , var_1_10))) {
		var_1_20 = (max (var_1_21 , (256 + (min (var_1_22 , var_1_23)))));
	}


	// From: Req13Batch96100_1loop
	if ((min (var_1_1 , var_1_42)) <= var_1_38) {
		if ((var_1_1 * var_1_39) < var_1_15) {
			if ((max (10 , var_1_37)) <= var_1_31) {
				var_1_40 = ((var_1_38 - var_1_23) + var_1_12);
			} else {
				var_1_40 = var_1_14;
			}
		}
	} else {
		var_1_40 = var_1_14;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32766);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32766);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 64);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 64);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_42 = var_1_42;
}

int property(void) {
	return ((((((((((((((var_1_1 == ((signed long int) (min (var_1_2 , (var_1_3 - (min (var_1_4 , var_1_5))))))) && ((0 == (min (-4 , var_1_39))) ? (var_1_26 ? ((var_1_4 < var_1_5) ? (var_1_6 == ((float) (max (var_1_9 , var_1_10)))) : (var_1_6 == ((float) var_1_10))) : 1) : 1)) && (var_1_11 == ((signed short int) (min (var_1_12 , 2))))) && ((var_1_4 <= var_1_3) ? (var_1_13 == ((signed short int) (abs (max (var_1_14 , var_1_15))))) : 1)) && ((! (var_1_10 > var_1_9)) ? (var_1_16 == ((float) (max ((max (var_1_9 , (var_1_17 - var_1_18))) , var_1_10)))) : 1)) && ((var_1_18 <= (- var_1_10)) ? (var_1_19 == ((float) (min (var_1_9 , var_1_10)))) : 1)) && (((max ((128.25f + var_1_6) , var_1_16)) < (max (var_1_18 , var_1_10))) ? (var_1_20 == ((unsigned short int) (max (var_1_21 , (256 + (min (var_1_22 , var_1_23))))))) : 1)) && ((var_1_10 >= (var_1_18 - var_1_17)) ? (var_1_26 ? ((var_1_1 >= var_1_22) ? (var_1_24 == ((unsigned short int) var_1_22)) : 1) : 1) : (var_1_24 == ((unsigned short int) 25)))) && ((var_1_39 == var_1_4) ? (var_1_26 ? ((var_1_18 <= var_1_17) ? (var_1_25 == ((unsigned short int) var_1_21)) : (var_1_25 == ((unsigned short int) 16))) : 1) : 1)) && ((last_1_var_1_24 > last_1_var_1_1) ? ((var_1_8 || var_1_27) ? ((var_1_23 <= (max (last_1_var_1_25 , var_1_4))) ? (var_1_26 == ((unsigned char) var_1_28)) : (var_1_26 == ((unsigned char) var_1_29))) : (var_1_26 == ((unsigned char) var_1_29))) : (var_1_26 == ((unsigned char) var_1_28)))) && (var_1_26 ? (var_1_30 == ((unsigned char) (max ((8 + var_1_31) , (max (var_1_32 , var_1_33)))))) : (var_1_30 == ((unsigned char) (((min (var_1_34 , var_1_35)) + var_1_36) + (var_1_37 + var_1_38)))))) && ((! var_1_26) ? (var_1_39 == ((signed long int) (min (var_1_35 , var_1_4)))) : (var_1_39 == ((signed long int) (var_1_11 + (last_1_var_1_39 + var_1_36)))))) && (((min (var_1_1 , var_1_42)) <= var_1_38) ? (((var_1_1 * var_1_39) < var_1_15) ? (((max (10 , var_1_37)) <= var_1_31) ? (var_1_40 == ((signed long int) ((var_1_38 - var_1_23) + var_1_12))) : (var_1_40 == ((signed long int) var_1_14))) : 1) : (var_1_40 == ((signed long int) var_1_14)))) && (var_1_41 == ((double) var_1_9))) && (var_1_42 == ((unsigned long int) last_1_var_1_42))
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
