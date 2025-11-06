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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188Filler_PR_CN.c", 13, "reach_error"); }
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
float var_1_1 = 255.25;
double var_1_2 = 3.6;
double var_1_3 = 3.25;
unsigned char var_1_4 = 0;
signed char var_1_6 = 4;
signed long int var_1_7 = 128;
signed long int var_1_8 = 1;
float var_1_9 = 99.6;
signed short int var_1_10 = 1;
signed short int var_1_11 = -4;
signed long int var_1_12 = -128;
signed long int var_1_13 = 2;
unsigned long int var_1_14 = 2434691654;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
float var_1_17 = -0.4;
float var_1_18 = 3.8;
float var_1_19 = 99999999.5;
unsigned long int var_1_20 = 10;
unsigned char var_1_21 = 1;
float var_1_22 = 5.85;
float var_1_23 = 25.875;
unsigned long int var_1_24 = 8;
unsigned long int var_1_25 = 256;
unsigned long int var_1_26 = 1;
double var_1_27 = 256.6;
float var_1_28 = 256.4;
float var_1_29 = 16.941;
double var_1_30 = 3.5;
double var_1_31 = 0.0;
double var_1_32 = 3.75;
double var_1_33 = 16.6;
double var_1_34 = 4.2;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 2;
unsigned long int var_1_41 = 2277800465;
unsigned long int var_1_42 = 256;
unsigned long int var_1_43 = 128;
signed char var_1_44 = 2;
unsigned char var_1_45 = 32;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_10 = 1;
float last_1_var_1_17 = -0.4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch188Filler_PR_CN
	/* 20L, 114L, 451L, 472L, 862L, 933L) */ if (/* 4L, 91L, 92L, 452L, 473L, 846L, 934L) */ ((var_1_2) >= (/* 3L, 90L, 94L, 454L, 475L, 845L, 936L) */ (- (last_1_var_1_17))))) {
		/* 15L, 109L, 456L, 477L, 857L, 939L) */ var_1_12 = (
			/* 14L, 108L, 459L, 480L, 856L, 942L) */ ((
				last_1_var_1_10
			) + (
				/* 13L, 107L, 461L, 482L, 855L, 945L) */ ((
					var_1_6
				) + (
					/* 12L, 106L, 463L, 484L, 854L, 947L) */ (min (
						/* 12L, 106L, 463L, 484L, 854L, 947L) */ (
							2
						) , (
							var_1_11
						)
					))
				))
			))
		);
	} else {
		/* 19L, 113L, 466L, 487L, 861L, 950L) */ var_1_12 = (
			var_1_6
		);
	}


	// From: CodeObject1
	/* 69L) */ if (var_1_21) {
		/* 67L) */ if (/* 54L, 53L) */ ((var_1_22) > (var_1_23))) {
			/* 66L) */ var_1_20 = (
				/* 65L) */ (abs (
					/* 64L) */ (max (
						/* 64L) */ (
							var_1_24
						) , (
							var_1_25
						)
					))
				))
			);
		}
	}


	// From: CodeObject5
	/* 223L) */ if (/* 199L, 198L) */ ((/* 200L, 196L) */ ((var_1_26) & (var_1_20))) <= (2u))) {
		/* 214L) */ var_1_40 = (
			/* 213L) */ (max (
				/* 213L) */ (
					var_1_24
				) , (
					10u
				)
			))
		);
	} else {
		/* 222L) */ var_1_40 = (
			/* 221L) */ ((
				/* 219L) */ (min (
					/* 219L) */ (
						var_1_41
					) , (
						3767249641u
					)
				))
			) - (
				var_1_42
			))
		);
	}


	// From: CodeObject6
	/* 256L) */ if (/* 234L, 233L) */ ((2) <= (/* 236L, 232L) */ ((var_1_26) & (/* 238L, 231L) */ ((var_1_42) >> (var_1_44))))))) {
		/* 255L) */ var_1_43 = (
			/* 254L) */ (abs (
				/* 253L) */ (abs (
					/* 252L) */ ((
						var_1_42
					) + (
						1000u
					))
				))
			))
		);
	}


	// From: Req4Batch188Filler_PR_CN
	/* 956L, 173L, 535L, 565L) */ if (/* 957L, 124L, 125L, 536L, 566L) */ ((var_1_12) >= (var_1_7))) {
		/* 960L, 136L, 539L, 569L) */ var_1_13 = (
			/* 963L, 135L, 542L, 572L) */ (min (
				/* 963L, 135L, 542L, 572L) */ (
					var_1_12
				) , (
					var_1_6
				)
			))
		);
	} else {
		/* 966L, 171L, 545L, 575L) */ if (/* 967L, 141L, 142L, 546L, 576L) */ ((/* 968L, 139L, 143L, 547L, 577L) */ ((var_1_14) - (128u))) > (var_1_12))) {
			/* 972L, 165L, 551L, 581L) */ if (/* 973L, 154L, 155L, 552L, 582L) */ ((var_1_7) != (var_1_11))) {
				/* 976L, 164L, 555L, 585L) */ var_1_13 = (
					var_1_6
				);
			}
		} else {
			/* 980L, 170L, 559L, 589L) */ var_1_13 = (
				var_1_12
			);
		}
	}


	// From: CodeObject2
	/* 80L) */ var_1_26 = (
		var_1_25
	);


	// From: CodeObject4
	/* 184L) */ if (/* 157L, 156L) */ ((var_1_23) <= (var_1_27))) {
		/* 176L) */ if (var_1_21) {
			/* 175L) */ var_1_35 = (
				/* 174L) */ ((
					var_1_36
				) && (
					/* 173L) */ ((
						var_1_37
					) && (
						/* 172L) */ ((
							var_1_38
						) || (
							var_1_39
						))
					))
				))
			);
		}
	} else {
		/* 183L) */ var_1_35 = (
			/* 182L) */ ((
				var_1_38
			) || (
				var_1_39
			))
		);
	}


	// From: Req2Batch188Filler_PR_CN
	/* 921L, 80L, 403L, 415L) */ if (/* 922L, 67L, 68L, 404L, 416L) */ ((var_1_13) >= (var_1_8))) {
		/* 925L, 79L, 407L, 419L) */ var_1_10 = (
			/* 928L, 78L, 410L, 422L) */ (min (
				/* 928L, 78L, 410L, 422L) */ (
					var_1_6
				) , (
					var_1_11
				)
			))
		);
	}


	// From: Req6Batch188Filler_PR_CN
	unsigned char stepLocal_1 = /* 1003L, 209L, 215L, 707L, 742L) */ ((var_1_13) < (var_1_7));
	signed long int stepLocal_0 = /* 998L, 227L, 235L, 712L, 747L) */ (max (/* 998L, 227L, 235L, 712L, 747L) */ (var_1_13) , (-2)));
	/* 1034L, 270L, 702L, 737L) */ if (/* 1010L, 210L, 211L, 703L, 738L) */ ((/* 1009L, 206L, 212L, 704L, 739L) */ ((-64) >= (var_1_13))) || (stepLocal_1))) {
		/* 1029L, 264L, 710L, 745L) */ if (/* 1016L, 233L, 234L, 711L, 746L) */ ((stepLocal_0) > (/* 1015L, 232L, 238L, 715L, 750L) */ (max (/* 1015L, 232L, 238L, 715L, 750L) */ (var_1_7) , (/* 1014L, 231L, 240L, 717L, 752L) */ ((var_1_12) * (var_1_13)))))))) {
			/* 1024L, 259L, 720L, 755L) */ var_1_17 = (
				/* 1023L, 258L, 723L, 758L) */ ((
					/* 1021L, 256L, 724L, 759L) */ (min (
						/* 1021L, 256L, 724L, 759L) */ (
							var_1_9
						) , (
							var_1_18
						)
					))
				) + (
					var_1_19
				))
			);
		} else {
			/* 1028L, 263L, 728L, 763L) */ var_1_17 = (
				7.1f
			);
		}
	} else {
		/* 1033L, 269L, 732L, 767L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: Req5Batch188Filler_PR_CN
	/* 990L, 188L, 659L, 671L) */ if (var_1_4) {
		/* 992L, 187L, 661L, 673L) */ var_1_15 = (
			var_1_16
		);
	}


	// From: CodeObject3
	/* 148L) */ if (var_1_21) {
		/* 115L) */ if (/* 95L, 94L) */ ((/* 96L, 90L) */ (max (/* 96L, 90L) */ (var_1_22) , (var_1_23)))) >= (/* 99L, 93L) */ ((var_1_28) + (var_1_29))))) {
			/* 114L) */ var_1_27 = (
				/* 113L) */ (min (
					/* 113L) */ (
						var_1_30
					) , (
						255.3
					)
				))
			);
		}
	} else {
		/* 146L) */ if (/* 120L, 119L) */ ((-0.8f) <= (var_1_29))) {
			/* 137L) */ var_1_27 = (
				/* 136L) */ ((
					/* 134L) */ ((
						/* 130L) */ ((
							var_1_31
						) - (
							var_1_32
						))
					) + (
						/* 133L) */ (min (
							/* 133L) */ (
								var_1_33
							) , (
								256.25
							)
						))
					))
				) - (
					var_1_34
				))
			);
		} else {
			/* 145L) */ var_1_27 = (
				/* 144L) */ (max (
					/* 144L) */ (
						var_1_31
					) , (
						/* 143L) */ ((
							var_1_33
						) + (
							var_1_32
						))
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 265L) */ var_1_45 = (
		var_1_44
	);


	// From: Req1Batch188Filler_PR_CN
	/* 889L, 56L, 275L, 307L) */ if (/* 890L, 4L, 5L, 276L, 308L) */ ((var_1_2) < (var_1_3))) {
		/* 893L, 50L, 279L, 311L) */ if (/* 894L, 19L, 20L, 280L, 312L) */ ((var_1_15) || (/* 896L, 18L, 22L, 282L, 314L) */ ((/* 897L, 14L, 23L, 283L, 315L) */ ((var_1_12) >> (var_1_6))) != (/* 900L, 17L, 26L, 286L, 318L) */ ((var_1_7) - (var_1_8))))))) {
			/* 903L, 45L, 289L, 321L) */ var_1_1 = (
				/* 906L, 44L, 292L, 324L) */ ((
					256.125f
				) + (
					/* 908L, 43L, 294L, 326L) */ ((
						128.1f
					) - (
						var_1_9
					))
				))
			);
		} else {
			/* 911L, 49L, 297L, 329L) */ var_1_1 = (
				var_1_9
			);
		}
	} else {
		/* 915L, 55L, 301L, 333L) */ var_1_1 = (
			var_1_9
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 15);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 2305843.009213691400e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 270L, 4L, 8L, 340L, 372L, 1041L) */ ((var_1_2) < (var_1_3))) {
		if (/* 274L, 19L, 29L, 344L, 376L, 1045L) */ ((var_1_15) || (/* 276L, 18L, 31L, 346L, 378L, 1047L) */ ((/* 277L, 14L, 32L, 347L, 379L, 1048L) */ ((var_1_12) >> (var_1_6))) != (/* 280L, 17L, 35L, 350L, 382L, 1051L) */ ((var_1_7) - (var_1_8))))))) {
		} else {
		}
	} else {
	}
	if (/* 302L, 67L, 71L, 428L, 440L, 1073L) */ ((var_1_13) >= (var_1_8))) {
	}
	if (/* 314L, 91L, 96L, 494L, 515L, 869L, 1085L, 27L) */ ((var_1_2) >= (/* 316L, 90L, 98L, 496L, 517L, 868L, 1087L, 26L) */ (- (last_1_var_1_17))))) {
	} else {
	}
	if (/* 337L, 124L, 128L, 596L, 626L, 1108L) */ ((var_1_12) >= (var_1_7))) {
	} else {
		if (/* 347L, 141L, 147L, 606L, 636L, 1118L) */ ((/* 348L, 139L, 148L, 607L, 637L, 1119L) */ ((var_1_14) - (128u))) > (var_1_12))) {
			if (/* 353L, 154L, 158L, 612L, 642L, 1124L) */ ((var_1_7) != (var_1_11))) {
			}
		} else {
		}
	}
	if (var_1_4) {
	}
	if (/* 378L, 210L, 218L, 773L, 808L, 1149L) */ ((/* 379L, 206L, 219L, 774L, 809L, 1150L) */ ((-64) >= (var_1_13))) || (/* 382L, 209L, 222L, 777L, 812L, 1153L) */ ((var_1_13) < (var_1_7))))) {
		if (/* 386L, 233L, 243L, 781L, 816L, 1157L) */ ((/* 387L, 227L, 244L, 782L, 817L, 1158L) */ (max (/* 387L, 227L, 244L, 782L, 817L, 1158L) */ (var_1_13) , (-2)))) > (/* 390L, 232L, 247L, 785L, 820L, 1161L) */ (max (/* 390L, 232L, 247L, 785L, 820L, 1161L) */ (var_1_7) , (/* 392L, 231L, 249L, 787L, 822L, 1163L) */ ((var_1_12) * (var_1_13)))))))) {
		} else {
		}
	} else {
	}
	return /* 416L) */ ((
	/* 415L) */ ((
		/* 414L) */ ((
			/* 413L) */ ((
				/* 412L) */ ((
					/* 269L, 57L, 339L, 371L, 1040L) */ ((
						/* 270L, 4L, 8L, 340L, 372L, 1041L) */ ((
							var_1_2
						) < (
							var_1_3
						))
					) ? (
						/* 273L, 51L, 343L, 375L, 1044L) */ ((
							/* 274L, 19L, 29L, 344L, 376L, 1045L) */ ((
								var_1_15
							) || (
								/* 276L, 18L, 31L, 346L, 378L, 1047L) */ ((
									/* 277L, 14L, 32L, 347L, 379L, 1048L) */ ((
										var_1_12
									) >> (
										var_1_6
									))
								) != (
									/* 280L, 17L, 35L, 350L, 382L, 1051L) */ ((
										var_1_7
									) - (
										var_1_8
									))
								))
							))
						) ? (
							/* 283L, 45L, 353L, 385L, 1054L) */ ((
								var_1_1
							) == (
								/* 283L, 45L, 353L, 385L, 1054L) */ ((float) (
									/* 286L, 44L, 356L, 388L, 1057L) */ ((
										256.125f
									) + (
										/* 288L, 43L, 358L, 390L, 1059L) */ ((
											128.1f
										) - (
											var_1_9
										))
									))
								))
							))
						) : (
							/* 291L, 49L, 361L, 393L, 1062L) */ ((
								var_1_1
							) == (
								/* 291L, 49L, 361L, 393L, 1062L) */ ((float) (
									var_1_9
								))
							))
						))
					) : (
						/* 295L, 55L, 365L, 397L, 1066L) */ ((
							var_1_1
						) == (
							/* 295L, 55L, 365L, 397L, 1066L) */ ((float) (
								var_1_9
							))
						))
					))
				) && (
					/* 301L, 81L, 427L, 439L, 1072L) */ ((
						/* 302L, 67L, 71L, 428L, 440L, 1073L) */ ((
							var_1_13
						) >= (
							var_1_8
						))
					) ? (
						/* 305L, 79L, 431L, 443L, 1076L) */ ((
							var_1_10
						) == (
							/* 305L, 79L, 431L, 443L, 1076L) */ ((signed short int) (
								/* 308L, 78L, 434L, 446L, 1079L) */ (min (
									/* 308L, 78L, 434L, 446L, 1079L) */ (
										var_1_6
									) , (
										var_1_11
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 313L, 115L, 493L, 514L, 885L, 1084L, 43L) */ ((
					/* 314L, 91L, 96L, 494L, 515L, 869L, 1085L, 27L) */ ((
						var_1_2
					) >= (
						/* 316L, 90L, 98L, 496L, 517L, 868L, 1087L, 26L) */ (- (
							last_1_var_1_17
						))
					))
				) ? (
					/* 319L, 109L, 498L, 519L, 880L, 1090L, 38L) */ ((
						var_1_12
					) == (
						/* 319L, 109L, 498L, 519L, 880L, 1090L, 38L) */ ((signed long int) (
							/* 322L, 108L, 501L, 522L, 879L, 1093L, 37L) */ ((
								last_1_var_1_10
							) + (
								/* 325L, 107L, 503L, 524L, 878L, 1096L, 36L) */ ((
									var_1_6
								) + (
									/* 327L, 106L, 505L, 526L, 877L, 1098L, 35L) */ (min (
										/* 327L, 106L, 505L, 526L, 877L, 1098L, 35L) */ (
											2
										) , (
											var_1_11
										)
									))
								))
							))
						))
					))
				) : (
					/* 330L, 113L, 508L, 529L, 884L, 1101L, 42L) */ ((
						var_1_12
					) == (
						/* 330L, 113L, 508L, 529L, 884L, 1101L, 42L) */ ((signed long int) (
							var_1_6
						))
					))
				))
			))
		) && (
			/* 336L, 174L, 595L, 625L, 1107L) */ ((
				/* 337L, 124L, 128L, 596L, 626L, 1108L) */ ((
					var_1_12
				) >= (
					var_1_7
				))
			) ? (
				/* 340L, 136L, 599L, 629L, 1111L) */ ((
					var_1_13
				) == (
					/* 340L, 136L, 599L, 629L, 1111L) */ ((signed long int) (
						/* 343L, 135L, 602L, 632L, 1114L) */ (min (
							/* 343L, 135L, 602L, 632L, 1114L) */ (
								var_1_12
							) , (
								var_1_6
							)
						))
					))
				))
			) : (
				/* 346L, 172L, 605L, 635L, 1117L) */ ((
					/* 347L, 141L, 147L, 606L, 636L, 1118L) */ ((
						/* 348L, 139L, 148L, 607L, 637L, 1119L) */ ((
							var_1_14
						) - (
							128u
						))
					) > (
						var_1_12
					))
				) ? (
					/* 352L, 166L, 611L, 641L, 1123L) */ ((
						/* 353L, 154L, 158L, 612L, 642L, 1124L) */ ((
							var_1_7
						) != (
							var_1_11
						))
					) ? (
						/* 356L, 164L, 615L, 645L, 1127L) */ ((
							var_1_13
						) == (
							/* 356L, 164L, 615L, 645L, 1127L) */ ((signed long int) (
								var_1_6
							))
						))
					) : (
						1
					))
				) : (
					/* 360L, 170L, 619L, 649L, 1131L) */ ((
						var_1_13
					) == (
						/* 360L, 170L, 619L, 649L, 1131L) */ ((signed long int) (
							var_1_12
						))
					))
				))
			))
		))
	) && (
		/* 370L, 189L, 683L, 695L, 1141L) */ ((
			var_1_4
		) ? (
			/* 372L, 187L, 685L, 697L, 1143L) */ ((
				var_1_15
			) == (
				/* 372L, 187L, 685L, 697L, 1143L) */ ((unsigned char) (
					var_1_16
				))
			))
		) : (
			1
		))
	))
) && (
	/* 377L, 271L, 772L, 807L, 1148L) */ ((
		/* 378L, 210L, 218L, 773L, 808L, 1149L) */ ((
			/* 379L, 206L, 219L, 774L, 809L, 1150L) */ ((
				-64
			) >= (
				var_1_13
			))
		) || (
			/* 382L, 209L, 222L, 777L, 812L, 1153L) */ ((
				var_1_13
			) < (
				var_1_7
			))
		))
	) ? (
		/* 385L, 265L, 780L, 815L, 1156L) */ ((
			/* 386L, 233L, 243L, 781L, 816L, 1157L) */ ((
				/* 387L, 227L, 244L, 782L, 817L, 1158L) */ (max (
					/* 387L, 227L, 244L, 782L, 817L, 1158L) */ (
						var_1_13
					) , (
						-2
					)
				))
			) > (
				/* 390L, 232L, 247L, 785L, 820L, 1161L) */ (max (
					/* 390L, 232L, 247L, 785L, 820L, 1161L) */ (
						var_1_7
					) , (
						/* 392L, 231L, 249L, 787L, 822L, 1163L) */ ((
							var_1_12
						) * (
							var_1_13
						))
					)
				))
			))
		) ? (
			/* 395L, 259L, 790L, 825L, 1166L) */ ((
				var_1_17
			) == (
				/* 395L, 259L, 790L, 825L, 1166L) */ ((float) (
					/* 398L, 258L, 793L, 828L, 1169L) */ ((
						/* 399L, 256L, 794L, 829L, 1170L) */ (min (
							/* 399L, 256L, 794L, 829L, 1170L) */ (
								var_1_9
							) , (
								var_1_18
							)
						))
					) + (
						var_1_19
					))
				))
			))
		) : (
			/* 403L, 263L, 798L, 833L, 1174L) */ ((
				var_1_17
			) == (
				/* 403L, 263L, 798L, 833L, 1174L) */ ((float) (
					7.1f
				))
			))
		))
	) : (
		/* 407L, 269L, 802L, 837L, 1178L) */ ((
			var_1_17
		) == (
			/* 407L, 269L, 802L, 837L, 1178L) */ ((float) (
				var_1_18
			))
		))
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
