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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81100_1loop.c", 13, "reach_error"); }
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
signed long int var_1_1 = 128;
double var_1_2 = 64.25;
double var_1_3 = 127.6;
signed long int var_1_7 = 1000;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 50;
unsigned short int var_1_10 = 256;
float var_1_11 = 32.6;
double var_1_12 = 64.5;
float var_1_13 = 200.375;
float var_1_14 = 0.09999999999999998;
float var_1_15 = 10.25;
float var_1_16 = 255.125;
signed long int var_1_17 = 0;
double var_1_18 = 200.8;
double var_1_19 = 128.5;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
signed char var_1_22 = -32;
signed char var_1_23 = 50;
signed char var_1_24 = -4;
unsigned short int var_1_25 = 200;
signed long int var_1_26 = -32;
float var_1_27 = 63.2;
float var_1_28 = 9.1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
double var_1_33 = 0.6;
signed char var_1_34 = 50;
signed char var_1_35 = 1;
signed char var_1_36 = 8;
double var_1_37 = 255.5;
double var_1_38 = 3.3;
double var_1_39 = 32.2;
unsigned short int var_1_40 = 2;
signed long int var_1_41 = -256;
unsigned short int var_1_42 = 4;
unsigned short int var_1_43 = 200;
unsigned short int var_1_44 = 64;
unsigned short int var_1_45 = 2;
unsigned short int var_1_46 = 1;
unsigned char var_1_47 = 0;
signed char var_1_48 = -1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 128;
signed long int last_1_var_1_17 = 0;
double last_1_var_1_33 = 0.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch81100_1loop
	if (var_1_12 >= last_1_var_1_33) {
		var_1_17 = (last_1_var_1_1 + 25);
	}


	// From: Req1Batch81100_1loop
	signed long int stepLocal_0 = ~ (abs (4));
	if (! (var_1_2 > var_1_3)) {
		if (stepLocal_0 >= (last_1_var_1_17 ^ last_1_var_1_1)) {
			var_1_1 = 16;
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req5Batch81100_1loop
	var_1_18 = var_1_19;


	// From: Req7Batch81100_1loop
	var_1_22 = ((min (0 , var_1_23)) + var_1_24);


	// From: Req13Batch81100_1loop
	var_1_44 = var_1_45;


	// From: Req14Batch81100_1loop
	var_1_46 = var_1_9;


	// From: Req15Batch81100_1loop
	var_1_47 = var_1_21;


	// From: Req16Batch81100_1loop
	var_1_48 = var_1_36;


	// From: Req3Batch81100_1loop
	if (var_1_18 == (1.00000000000528E11 - var_1_12)) {
		var_1_11 = (max (((max (var_1_13 , var_1_14)) - var_1_15) , (abs (abs (var_1_16)))));
	} else {
		var_1_11 = var_1_16;
	}


	// From: Req11Batch81100_1loop
	signed long int stepLocal_2 = var_1_44 + var_1_1;
	signed long int stepLocal_1 = var_1_34 - (var_1_35 + var_1_36);
	if (var_1_30) {
		if (var_1_23 <= stepLocal_1) {
			if (stepLocal_2 > var_1_17) {
				var_1_33 = (var_1_37 + (var_1_38 + var_1_39));
			}
		} else {
			var_1_33 = (min (((max (var_1_39 , var_1_37)) + var_1_38) , var_1_16));
		}
	}


	// From: Req9Batch81100_1loop
	if (var_1_33 == ((- var_1_16) / (min (var_1_27 , var_1_28)))) {
		var_1_26 = (abs (var_1_10));
	}


	// From: Req10Batch81100_1loop
	if (var_1_28 <= var_1_14) {
		var_1_29 = (var_1_30 && (var_1_31 && var_1_32));
	} else {
		if (var_1_23 < (max (var_1_44 , var_1_26))) {
			var_1_29 = ((var_1_17 <= (var_1_26 & var_1_44)) && (! var_1_31));
		}
	}


	// From: Req12Batch81100_1loop
	signed long int stepLocal_3 = var_1_26;
	if (stepLocal_3 > (var_1_36 / var_1_41)) {
		var_1_40 = (min ((var_1_35 + (min (var_1_36 , var_1_42))) , var_1_43));
	}


	// From: Req6Batch81100_1loop
	if (var_1_1 >= (var_1_26 + var_1_17)) {
		var_1_20 = (var_1_29 && ((1.8f == var_1_33) && var_1_21));
	} else {
		if ((max (var_1_33 , var_1_15)) != var_1_19) {
			var_1_20 = var_1_21;
		}
	}


	// From: Req2Batch81100_1loop
	if (! var_1_20) {
		var_1_8 = (max (var_1_9 , var_1_10));
	}


	// From: Req8Batch81100_1loop
	if (((var_1_17 + var_1_9) + (var_1_17 * var_1_8)) >= var_1_23) {
		if (var_1_21 || (var_1_13 > var_1_33)) {
			var_1_25 = var_1_9;
		} else {
			var_1_25 = var_1_10;
		}
	} else {
		var_1_25 = var_1_10;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	assume_abort_if_not(var_1_28 != 0.0F);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -1);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 64);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -230584.3009213691400e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -230584.3009213691400e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= -2147483648);
	assume_abort_if_not(var_1_41 <= 2147483647);
	assume_abort_if_not(var_1_41 != 0);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_33 = var_1_33;
}

int property(void) {
	return ((((((((((((((((! (var_1_2 > var_1_3)) ? (((~ (abs (4))) >= (last_1_var_1_17 ^ last_1_var_1_1)) ? (var_1_1 == ((signed long int) 16)) : (var_1_1 == ((signed long int) var_1_7))) : 1) && ((! var_1_20) ? (var_1_8 == ((unsigned short int) (max (var_1_9 , var_1_10)))) : 1)) && ((var_1_18 == (1.00000000000528E11 - var_1_12)) ? (var_1_11 == ((float) (max (((max (var_1_13 , var_1_14)) - var_1_15) , (abs (abs (var_1_16))))))) : (var_1_11 == ((float) var_1_16)))) && ((var_1_12 >= last_1_var_1_33) ? (var_1_17 == ((signed long int) (last_1_var_1_1 + 25))) : 1)) && (var_1_18 == ((double) var_1_19))) && ((var_1_1 >= (var_1_26 + var_1_17)) ? (var_1_20 == ((unsigned char) (var_1_29 && ((1.8f == var_1_33) && var_1_21)))) : (((max (var_1_33 , var_1_15)) != var_1_19) ? (var_1_20 == ((unsigned char) var_1_21)) : 1))) && (var_1_22 == ((signed char) ((min (0 , var_1_23)) + var_1_24)))) && ((((var_1_17 + var_1_9) + (var_1_17 * var_1_8)) >= var_1_23) ? ((var_1_21 || (var_1_13 > var_1_33)) ? (var_1_25 == ((unsigned short int) var_1_9)) : (var_1_25 == ((unsigned short int) var_1_10))) : (var_1_25 == ((unsigned short int) var_1_10)))) && ((var_1_33 == ((- var_1_16) / (min (var_1_27 , var_1_28)))) ? (var_1_26 == ((signed long int) (abs (var_1_10)))) : 1)) && ((var_1_28 <= var_1_14) ? (var_1_29 == ((unsigned char) (var_1_30 && (var_1_31 && var_1_32)))) : ((var_1_23 < (max (var_1_44 , var_1_26))) ? (var_1_29 == ((unsigned char) ((var_1_17 <= (var_1_26 & var_1_44)) && (! var_1_31)))) : 1))) && (var_1_30 ? ((var_1_23 <= (var_1_34 - (var_1_35 + var_1_36))) ? (((var_1_44 + var_1_1) > var_1_17) ? (var_1_33 == ((double) (var_1_37 + (var_1_38 + var_1_39)))) : 1) : (var_1_33 == ((double) (min (((max (var_1_39 , var_1_37)) + var_1_38) , var_1_16))))) : 1)) && ((var_1_26 > (var_1_36 / var_1_41)) ? (var_1_40 == ((unsigned short int) (min ((var_1_35 + (min (var_1_36 , var_1_42))) , var_1_43)))) : 1)) && (var_1_44 == ((unsigned short int) var_1_45))) && (var_1_46 == ((unsigned short int) var_1_9))) && (var_1_47 == ((unsigned char) var_1_21))) && (var_1_48 == ((signed char) var_1_36))
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
