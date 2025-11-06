// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15325_1loop.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 50;
unsigned long int var_1_3 = 256;
signed short int var_1_4 = -50;
signed short int var_1_5 = -10;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 1;
unsigned short int var_1_9 = 32;
unsigned short int var_1_10 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 50;
signed short int last_1_var_1_4 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch15325_1loop
	if (last_1_var_1_1 <= ((abs (-32)) + 16)) {
		var_1_1 = (abs (var_1_3));
	} else {
		var_1_1 = var_1_3;
	}


	// From: Req2Batch15325_1loop
	if (last_1_var_1_4 >= (var_1_3 + 8)) {
		var_1_4 = (last_1_var_1_4 + var_1_5);
	} else {
		if (var_1_6 || var_1_7) {
			if (! var_1_6) {
				var_1_4 = var_1_5;
			} else {
				var_1_4 = last_1_var_1_4;
			}
		} else {
			var_1_4 = var_1_5;
		}
	}


	// From: Req3Batch15325_1loop
	if (var_1_3 == var_1_1) {
		var_1_8 = (var_1_9 + var_1_10);
	} else {
		var_1_8 = (max (var_1_10 , 64));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_4 = var_1_4;
}

int property(void) {
	return (((last_1_var_1_1 <= ((abs (-32)) + 16)) ? (var_1_1 == ((unsigned long int) (abs (var_1_3)))) : (var_1_1 == ((unsigned long int) var_1_3))) && ((last_1_var_1_4 >= (var_1_3 + 8)) ? (var_1_4 == ((signed short int) (last_1_var_1_4 + var_1_5))) : ((var_1_6 || var_1_7) ? ((! var_1_6) ? (var_1_4 == ((signed short int) var_1_5)) : (var_1_4 == ((signed short int) last_1_var_1_4))) : (var_1_4 == ((signed short int) var_1_5))))) && ((var_1_3 == var_1_1) ? (var_1_8 == ((unsigned short int) (var_1_9 + var_1_10))) : (var_1_8 == ((unsigned short int) (max (var_1_10 , 64)))))
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
