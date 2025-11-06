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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Filler_PS_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
signed long int var_1_2 = 256;
signed long int var_1_3 = -16;
signed long int var_1_4 = -4;
signed char var_1_5 = -10;
signed char var_1_6 = -10;
signed char var_1_7 = -2;
float var_1_8 = 100.9;
float var_1_10 = 16.6;
float var_1_11 = -0.4;
float var_1_12 = 255.25;
float var_1_13 = 99.875;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned long int var_1_17 = 4;
unsigned long int var_1_18 = 1;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 8;
unsigned long int var_1_21 = 8;
signed char var_1_22 = 8;
signed char var_1_23 = 64;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
signed char var_1_29 = -128;
unsigned long int var_1_30 = 5;
unsigned char var_1_31 = 100;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 4;
double var_1_35 = 1.75;
double var_1_36 = 7.65;
signed char var_1_37 = -32;
unsigned long int var_1_38 = 32;
signed char var_1_41 = 10;
signed char var_1_42 = -5;
signed char var_1_43 = 0;
signed char var_1_44 = -50;
double var_1_45 = 1000000000000000.8;
signed char var_1_46 = -64;
signed char var_1_47 = 8;
double var_1_48 = 99.45;
double var_1_49 = 256.25;
float var_1_50 = 10000000000000.4;
signed char var_1_51 = 100;
float var_1_52 = 49.8;
float var_1_53 = 10000000000000.25;
float var_1_54 = 49.9;
unsigned short int var_1_55 = 32;
unsigned short int var_1_56 = 61542;
signed char var_1_57 = 32;
signed char var_1_58 = -32;
signed char var_1_59 = 2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_14 = 0;
unsigned long int last_1_var_1_19 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 262L, 53L) */ if (/* 263L, 37L, 38L) */ ((127.5f) > (/* 265L, 36L, 40L) */ (- (var_1_8))))) {
		/* 267L, 52L) */ var_1_31 = (
			/* 270L, 51L) */ (min (
				/* 270L, 51L) */ (
					var_1_33
				) , (
					/* 272L, 50L) */ (abs (
						var_1_34
					))
				)
			))
		);
	}


	// From: CodeObject2
	/* 275L, 60L) */ var_1_35 = (
		var_1_36
	);


	// From: CodeObject3
	/* 279L, 106L) */ if (/* 280L, 69L, 70L) */ ((/* 281L, 67L, 71L) */ ((var_1_19) / (var_1_38))) >= (var_1_33))) {
		/* 285L, 94L) */ if (/* 286L, 82L, 83L) */ ((var_1_24) || (var_1_14))) {
			/* 289L, 93L) */ var_1_37 = (
				/* 292L, 92L) */ (abs (
					var_1_41
				))
			);
		}
	} else {
		/* 294L, 105L) */ var_1_37 = (
			/* 297L, 104L) */ (min (
				/* 297L, 104L) */ (
					var_1_41
				) , (
					/* 299L, 103L) */ (max (
						/* 299L, 103L) */ (
							/* 300L, 101L) */ (max (
								/* 300L, 101L) */ (
									var_1_42
								) , (
									var_1_43
								)
							))
						) , (
							var_1_44
						)
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 304L, 138L) */ if (/* 305L, 115L, 116L) */ ((var_1_29) > (/* 307L, 114L, 118L) */ (abs (/* 308L, 113L, 119L) */ (max (/* 308L, 113L, 119L) */ (var_1_46) , (var_1_47)))))))) {
		/* 311L, 133L) */ var_1_45 = (
			/* 314L, 132L) */ ((
				var_1_48
			) - (
				var_1_49
			))
		);
	} else {
		/* 317L, 137L) */ var_1_45 = (
			15.5
		);
	}


	// From: CodeObject5
	/* 322L, 198L) */ if (/* 323L, 155L, 156L) */ ((var_1_8) <= (/* 325L, 154L, 158L) */ (max (/* 325L, 154L, 158L) */ (var_1_36) , (var_1_48)))))) {
		/* 328L, 196L) */ if (/* 329L, 171L, 172L) */ ((/* 330L, 168L, 173L) */ ((var_1_51) - (16))) <= (/* 333L, 170L, 176L) */ (abs (var_1_34))))) {
			/* 335L, 195L) */ var_1_50 = (
				/* 338L, 194L) */ (min (
					/* 338L, 194L) */ (
						/* 339L, 192L) */ ((
							/* 340L, 188L) */ ((
								50.7f
							) - (
								var_1_52
							))
						) + (
							/* 343L, 191L) */ (min (
								/* 343L, 191L) */ (
									var_1_53
								) , (
									var_1_54
								)
							))
						))
					) , (
						var_1_49
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 349L, 210L) */ var_1_55 = (
		/* 352L, 209L) */ ((
			var_1_56
		) - (
			/* 354L, 208L) */ (abs (
				8
			))
		))
	);


	// From: CodeObject7
	/* 356L, 260L) */ if (/* 357L, 219L, 220L) */ ((var_1_41) >= (var_1_46))) {
		/* 360L, 234L) */ var_1_57 = (
			/* 363L, 233L) */ (min (
				/* 363L, 233L) */ (
					/* 364L, 229L) */ (abs (
						var_1_41
					))
				) , (
					/* 366L, 232L) */ ((
						var_1_58
					) + (
						var_1_59
					))
				)
			))
		);
	} else {
		/* 369L, 258L) */ if (/* 370L, 239L, 240L) */ ((/* 371L, 237L, 241L) */ ((var_1_17) / (var_1_38))) < (var_1_33))) {
			/* 375L, 253L) */ var_1_57 = (
				var_1_59
			);
		} else {
			/* 379L, 257L) */ var_1_57 = (
				var_1_42
			);
		}
	}


	// From: Req4Batch164Filler_PS_CO
	/* 13L, 133L, 553L, 567L, 869L, 947L) */ if (/* 3L, 111L, 112L, 554L, 568L, 859L, 948L) */ ((last_1_var_1_19) >= (4))) {
		/* 12L, 131L, 557L, 571L, 868L, 952L) */ if (/* 7L, 120L, 121L, 558L, 572L, 863L, 953L) */ ((var_1_16) || (last_1_var_1_14))) {
			/* 11L, 130L, 561L, 575L, 867L, 957L) */ var_1_17 = (
				var_1_18
			);
		}
	}


	// From: Req3Batch164Filler_PS_CO
	/* 931L, 99L, 486L, 503L) */ if (/* 932L, 78L, 79L, 487L, 504L) */ ((/* 933L, 74L, 80L, 488L, 505L) */ (min (/* 933L, 74L, 80L, 488L, 505L) */ (var_1_6) , (var_1_17)))) == (/* 936L, 77L, 83L, 491L, 508L) */ ((var_1_17) + (var_1_7))))) {
		/* 939L, 98L, 494L, 511L) */ var_1_14 = (
			/* 942L, 97L, 497L, 514L) */ ((
				var_1_15
			) || (
				var_1_16
			))
		);
	}


	// From: Req5Batch164Filler_PS_CO
	unsigned char stepLocal_1 = var_1_16;
	/* 989L, 197L, 608L, 635L) */ if (/* 968L, 144L, 145L, 609L, 636L) */ ((var_1_11) != (/* 967L, 143L, 147L, 611L, 638L) */ (- (var_1_12))))) {
		/* 977L, 165L, 613L, 640L) */ if (/* 970L, 154L, 155L, 614L, 641L) */ (! (var_1_16))) {
			/* 976L, 164L, 616L, 643L) */ var_1_19 = (
				/* 975L, 163L, 619L, 646L) */ ((
					var_1_20
				) + (
					var_1_21
				))
			);
		}
	} else {
		/* 988L, 195L, 622L, 649L) */ if (/* 983L, 176L, 177L, 623L, 650L) */ ((stepLocal_1) && (/* 982L, 175L, 179L, 625L, 652L) */ ((var_1_17) <= (/* 981L, 174L, 181L, 627L, 654L) */ ((var_1_22) - (var_1_23))))))) {
			/* 987L, 194L, 630L, 657L) */ var_1_19 = (
				var_1_21
			);
		}
	}


	// From: Req1Batch164Filler_PS_CO
	unsigned char stepLocal_0 = /* 889L, 7L, 13L, 341L, 358L) */ ((var_1_3) < (var_1_4));
	/* 905L, 31L, 336L, 353L) */ if (/* 896L, 8L, 9L, 337L, 354L) */ ((/* 895L, 4L, 10L, 338L, 355L) */ ((4) <= (var_1_2))) || (stepLocal_0))) {
		/* 904L, 30L, 344L, 361L) */ var_1_1 = (
			/* 903L, 29L, 347L, 364L) */ ((
				var_1_5
			) + (
				/* 902L, 28L, 349L, 366L) */ (max (
					/* 902L, 28L, 349L, 366L) */ (
						var_1_6
					) , (
						var_1_7
					)
				))
			))
		);
	}


	// From: Req6Batch164Filler_PS_CO
	unsigned long int stepLocal_2 = var_1_17;
	/* 1014L, 232L, 716L, 737L) */ if (/* 999L, 207L, 208L, 717L, 738L) */ ((/* 998L, 205L, 209L, 718L, 739L) */ (max (/* 998L, 205L, 209L, 718L, 739L) */ (var_1_5) , (var_1_17)))) >= (stepLocal_2))) {
		/* 1009L, 227L, 722L, 743L) */ var_1_24 = (
			/* 1008L, 226L, 725L, 746L) */ ((
				var_1_25
			) && (
				/* 1007L, 225L, 727L, 748L) */ ((
					var_1_26
				) && (
					/* 1006L, 224L, 729L, 750L) */ ((
						var_1_27
					) && (
						var_1_28
					))
				))
			))
		);
	} else {
		/* 1013L, 231L, 732L, 753L) */ var_1_24 = (
			var_1_25
		);
	}


	// From: Req7Batch164Filler_PS_CO
	/* 1020L, 260L, 802L, 816L) */ if (/* 1021L, 243L, 244L, 803L, 817L) */ ((/* 1022L, 241L, 245L, 804L, 818L) */ ((var_1_21) / (/* 1024L, 240L, 247L, 806L, 820L) */ (abs (var_1_30))))) <= (var_1_19))) {
		/* 1027L, 259L, 809L, 823L) */ var_1_29 = (
			var_1_6
		);
	}


	// From: Req2Batch164Filler_PS_CO
	/* 909L, 66L, 404L, 424L) */ if (var_1_24) {
		/* 911L, 60L, 406L, 426L) */ if (/* 912L, 43L, 44L, 407L, 427L) */ ((/* 913L, 41L, 45L, 408L, 428L) */ (- (var_1_10))) < (127.25f))) {
			/* 916L, 59L, 411L, 431L) */ var_1_8 = (
				/* 919L, 58L, 414L, 434L) */ (min (
					/* 919L, 58L, 414L, 434L) */ (
						/* 920L, 56L, 415L, 435L) */ ((
							var_1_11
						) + (
							var_1_12
						))
					) , (
						var_1_13
					)
				))
			);
		}
	} else {
		/* 924L, 65L, 419L, 439L) */ var_1_8 = (
			var_1_11
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -1);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	assume_abort_if_not(var_1_30 != 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967295);
	assume_abort_if_not(var_1_38 != 0);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -126);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -127);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -127);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -127);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -1);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 32767);
	assume_abort_if_not(var_1_56 <= 65534);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -63);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -63);
	assume_abort_if_not(var_1_59 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 384L, 8L, 16L, 371L, 388L, 1033L) */ ((/* 385L, 4L, 17L, 372L, 389L, 1034L) */ ((4) <= (var_1_2))) || (/* 388L, 7L, 20L, 375L, 392L, 1037L) */ ((var_1_3) < (var_1_4))))) {
	}
	if (var_1_24) {
		if (/* 403L, 43L, 48L, 447L, 467L, 1052L) */ ((/* 404L, 41L, 49L, 448L, 468L, 1053L) */ (- (var_1_10))) < (127.25f))) {
		}
	} else {
	}
	if (/* 423L, 78L, 86L, 521L, 538L, 1072L) */ ((/* 424L, 74L, 87L, 522L, 539L, 1073L) */ (min (/* 424L, 74L, 87L, 522L, 539L, 1073L) */ (var_1_6) , (var_1_17)))) == (/* 427L, 77L, 90L, 525L, 542L, 1076L) */ ((var_1_17) + (var_1_7))))) {
	}
	if (/* 439L, 111L, 115L, 582L, 596L, 875L, 1088L, 19L) */ ((last_1_var_1_19) >= (4))) {
		if (/* 444L, 120L, 124L, 586L, 600L, 879L, 1093L, 23L) */ ((var_1_16) || (last_1_var_1_14))) {
		}
	}
	if (/* 454L, 144L, 149L, 663L, 690L, 1103L) */ ((var_1_11) != (/* 456L, 143L, 151L, 665L, 692L, 1105L) */ (- (var_1_12))))) {
		if (/* 459L, 154L, 157L, 668L, 695L, 1108L) */ (! (var_1_16))) {
		}
	} else {
		if (/* 468L, 176L, 184L, 677L, 704L, 1117L) */ ((var_1_16) && (/* 470L, 175L, 186L, 679L, 706L, 1119L) */ ((var_1_17) <= (/* 472L, 174L, 188L, 681L, 708L, 1121L) */ ((var_1_22) - (var_1_23))))))) {
		}
	}
	if (/* 481L, 207L, 213L, 759L, 780L, 1130L) */ ((/* 482L, 205L, 214L, 760L, 781L, 1131L) */ (max (/* 482L, 205L, 214L, 760L, 781L, 1131L) */ (var_1_5) , (var_1_17)))) >= (var_1_17))) {
	} else {
	}
	if (/* 504L, 243L, 250L, 831L, 845L, 1153L) */ ((/* 505L, 241L, 251L, 832L, 846L, 1154L) */ ((var_1_21) / (/* 507L, 240L, 253L, 834L, 848L, 1156L) */ (abs (var_1_30))))) <= (var_1_19))) {
	}
	return /* 520L) */ ((
	/* 519L) */ ((
		/* 518L) */ ((
			/* 517L) */ ((
				/* 516L) */ ((
					/* 515L) */ ((
						/* 383L, 32L, 370L, 387L, 1032L) */ ((
							/* 384L, 8L, 16L, 371L, 388L, 1033L) */ ((
								/* 385L, 4L, 17L, 372L, 389L, 1034L) */ ((
									4
								) <= (
									var_1_2
								))
							) || (
								/* 388L, 7L, 20L, 375L, 392L, 1037L) */ ((
									var_1_3
								) < (
									var_1_4
								))
							))
						) ? (
							/* 391L, 30L, 378L, 395L, 1040L) */ ((
								var_1_1
							) == (
								/* 391L, 30L, 378L, 395L, 1040L) */ ((signed char) (
									/* 394L, 29L, 381L, 398L, 1043L) */ ((
										var_1_5
									) + (
										/* 396L, 28L, 383L, 400L, 1045L) */ (max (
											/* 396L, 28L, 383L, 400L, 1045L) */ (
												var_1_6
											) , (
												var_1_7
											)
										))
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 400L, 67L, 444L, 464L, 1049L) */ ((
							var_1_24
						) ? (
							/* 402L, 61L, 446L, 466L, 1051L) */ ((
								/* 403L, 43L, 48L, 447L, 467L, 1052L) */ ((
									/* 404L, 41L, 49L, 448L, 468L, 1053L) */ (- (
										var_1_10
									))
								) < (
									127.25f
								))
							) ? (
								/* 407L, 59L, 451L, 471L, 1056L) */ ((
									var_1_8
								) == (
									/* 407L, 59L, 451L, 471L, 1056L) */ ((float) (
										/* 410L, 58L, 454L, 474L, 1059L) */ (min (
											/* 410L, 58L, 454L, 474L, 1059L) */ (
												/* 411L, 56L, 455L, 475L, 1060L) */ ((
													var_1_11
												) + (
													var_1_12
												))
											) , (
												var_1_13
											)
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 415L, 65L, 459L, 479L, 1064L) */ ((
								var_1_8
							) == (
								/* 415L, 65L, 459L, 479L, 1064L) */ ((float) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 422L, 100L, 520L, 537L, 1071L) */ ((
						/* 423L, 78L, 86L, 521L, 538L, 1072L) */ ((
							/* 424L, 74L, 87L, 522L, 539L, 1073L) */ (min (
								/* 424L, 74L, 87L, 522L, 539L, 1073L) */ (
									var_1_6
								) , (
									var_1_17
								)
							))
						) == (
							/* 427L, 77L, 90L, 525L, 542L, 1076L) */ ((
								var_1_17
							) + (
								var_1_7
							))
						))
					) ? (
						/* 430L, 98L, 528L, 545L, 1079L) */ ((
							var_1_14
						) == (
							/* 430L, 98L, 528L, 545L, 1079L) */ ((unsigned char) (
								/* 433L, 97L, 531L, 548L, 1082L) */ ((
									var_1_15
								) || (
									var_1_16
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 438L, 134L, 581L, 595L, 885L, 1087L, 29L) */ ((
					/* 439L, 111L, 115L, 582L, 596L, 875L, 1088L, 19L) */ ((
						last_1_var_1_19
					) >= (
						4
					))
				) ? (
					/* 443L, 132L, 585L, 599L, 884L, 1092L, 28L) */ ((
						/* 444L, 120L, 124L, 586L, 600L, 879L, 1093L, 23L) */ ((
							var_1_16
						) || (
							last_1_var_1_14
						))
					) ? (
						/* 448L, 130L, 589L, 603L, 883L, 1097L, 27L) */ ((
							var_1_17
						) == (
							/* 448L, 130L, 589L, 603L, 883L, 1097L, 27L) */ ((unsigned long int) (
								var_1_18
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			))
		) && (
			/* 453L, 198L, 662L, 689L, 1102L) */ ((
				/* 454L, 144L, 149L, 663L, 690L, 1103L) */ ((
					var_1_11
				) != (
					/* 456L, 143L, 151L, 665L, 692L, 1105L) */ (- (
						var_1_12
					))
				))
			) ? (
				/* 458L, 166L, 667L, 694L, 1107L) */ ((
					/* 459L, 154L, 157L, 668L, 695L, 1108L) */ (! (
						var_1_16
					))
				) ? (
					/* 461L, 164L, 670L, 697L, 1110L) */ ((
						var_1_19
					) == (
						/* 461L, 164L, 670L, 697L, 1110L) */ ((unsigned long int) (
							/* 464L, 163L, 673L, 700L, 1113L) */ ((
								var_1_20
							) + (
								var_1_21
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 467L, 196L, 676L, 703L, 1116L) */ ((
					/* 468L, 176L, 184L, 677L, 704L, 1117L) */ ((
						var_1_16
					) && (
						/* 470L, 175L, 186L, 679L, 706L, 1119L) */ ((
							var_1_17
						) <= (
							/* 472L, 174L, 188L, 681L, 708L, 1121L) */ ((
								var_1_22
							) - (
								var_1_23
							))
						))
					))
				) ? (
					/* 475L, 194L, 684L, 711L, 1124L) */ ((
						var_1_19
					) == (
						/* 475L, 194L, 684L, 711L, 1124L) */ ((unsigned long int) (
							var_1_21
						))
					))
				) : (
					1
				))
			))
		))
	) && (
		/* 480L, 233L, 758L, 779L, 1129L) */ ((
			/* 481L, 207L, 213L, 759L, 780L, 1130L) */ ((
				/* 482L, 205L, 214L, 760L, 781L, 1131L) */ (max (
					/* 482L, 205L, 214L, 760L, 781L, 1131L) */ (
						var_1_5
					) , (
						var_1_17
					)
				))
			) >= (
				var_1_17
			))
		) ? (
			/* 486L, 227L, 764L, 785L, 1135L) */ ((
				var_1_24
			) == (
				/* 486L, 227L, 764L, 785L, 1135L) */ ((unsigned char) (
					/* 489L, 226L, 767L, 788L, 1138L) */ ((
						var_1_25
					) && (
						/* 491L, 225L, 769L, 790L, 1140L) */ ((
							var_1_26
						) && (
							/* 493L, 224L, 771L, 792L, 1142L) */ ((
								var_1_27
							) && (
								var_1_28
							))
						))
					))
				))
			))
		) : (
			/* 496L, 231L, 774L, 795L, 1145L) */ ((
				var_1_24
			) == (
				/* 496L, 231L, 774L, 795L, 1145L) */ ((unsigned char) (
					var_1_25
				))
			))
		))
	))
) && (
	/* 503L, 261L, 830L, 844L, 1152L) */ ((
		/* 504L, 243L, 250L, 831L, 845L, 1153L) */ ((
			/* 505L, 241L, 251L, 832L, 846L, 1154L) */ ((
				var_1_21
			) / (
				/* 507L, 240L, 253L, 834L, 848L, 1156L) */ (abs (
					var_1_30
				))
			))
		) <= (
			var_1_19
		))
	) ? (
		/* 510L, 259L, 837L, 851L, 1159L) */ ((
			var_1_29
		) == (
			/* 510L, 259L, 837L, 851L, 1159L) */ ((signed char) (
				var_1_6
			))
		))
	) : (
		1
	))
))
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
