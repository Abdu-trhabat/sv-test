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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151Filler_PR_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned long int var_1_5 = 32;
unsigned long int var_1_6 = 100;
signed long int var_1_7 = 1;
double var_1_8 = 16.75;
double var_1_9 = 2.5;
signed char var_1_10 = -32;
unsigned long int var_1_11 = 256;
signed char var_1_12 = -10;
signed long int var_1_13 = -1;
signed long int var_1_14 = 100;
signed long int var_1_15 = 8;
signed long int var_1_16 = 16;
signed long int var_1_17 = 10;
unsigned short int var_1_18 = 16;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 29880;
unsigned short int var_1_21 = 30724;
unsigned short int var_1_22 = 10;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 8;
float var_1_27 = 7.9;
float var_1_28 = 9.25;
float var_1_29 = 255.5;
signed long int var_1_30 = -4;
signed long int var_1_31 = -128;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 256;
unsigned long int var_1_36 = 0;
float var_1_37 = 4.5;
unsigned long int var_1_38 = 25;
signed char var_1_39 = 5;
unsigned long int var_1_40 = 4;
signed char var_1_41 = -1;
unsigned long int var_1_42 = 3132493146;
unsigned long int var_1_43 = 4220834214;
unsigned char var_1_44 = 32;
unsigned long int var_1_45 = 128;
float var_1_46 = 16.2;
unsigned long int var_1_47 = 2055164369;
unsigned long int var_1_48 = 128;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch151Filler_PR_CN
	signed long int stepLocal_0 = var_1_7;
	/* 842L, 69L, 363L, 372L) */ if (/* 837L, 58L, 59L, 364L, 373L) */ ((stepLocal_0) < (var_1_5))) {
		/* 841L, 68L, 367L, 376L) */ var_1_8 = (
			var_1_9
		);
	}


	// From: CodeObject1
	/* 8L) */ var_1_27 = (
		/* 7L) */ ((
			/* 5L) */ (abs (
				var_1_28
			))
		) + (
			var_1_29
		))
	);


	// From: CodeObject3
	/* 55L) */ if (var_1_33) {
		/* 49L) */ if (/* 27L, 26L) */ ((var_1_31) != (var_1_30))) {
			/* 47L) */ if (var_1_34) {
				/* 46L) */ var_1_32 = (
					/* 45L) */ (max (
						/* 45L) */ (
							/* 40L) */ ((
								3576466738u
							) - (
								var_1_35
							))
						) , (
							/* 44L) */ ((
								var_1_36
							) + (
								/* 43L) */ (abs (
									10u
								))
							))
						)
					))
				);
			}
		}
	} else {
		/* 54L) */ var_1_32 = (
			var_1_36
		);
	}


	// From: CodeObject4
	/* 64L) */ var_1_37 = (
		var_1_29
	);


	// From: Req6Batch151Filler_PR_CN
	/* 929L, 255L, 703L, 729L) */ if (/* 930L, 218L, 219L, 704L, 730L) */ ((9.99999999999925E12) <= (var_1_8))) {
		/* 933L, 249L, 707L, 733L) */ if (/* 934L, 228L, 229L, 708L, 734L) */ ((/* 935L, 226L, 230L, 709L, 735L) */ (- (var_1_8))) == (var_1_8))) {
			/* 938L, 244L, 712L, 738L) */ var_1_23 = (
				/* 941L, 243L, 715L, 741L) */ ((
					var_1_24
				) - (
					/* 943L, 242L, 717L, 743L) */ (max (
						/* 943L, 242L, 717L, 743L) */ (
							var_1_25
						) , (
							var_1_26
						)
					))
				))
			);
		} else {
			/* 946L, 248L, 720L, 746L) */ var_1_23 = (
				var_1_25
			);
		}
	} else {
		/* 950L, 254L, 724L, 750L) */ var_1_23 = (
			var_1_25
		);
	}


	// From: Req1Batch151Filler_PR_CN
	/* 811L, 42L, 263L, 289L) */ if (/* 812L, 12L, 13L, 264L, 290L) */ ((/* 813L, 6L, 14L, 265L, 291L) */ ((32.4) == (var_1_8))) || (/* 816L, 11L, 17L, 268L, 294L) */ ((/* 817L, 9L, 18L, 269L, 295L) */ ((var_1_5) > (var_1_6))) && (var_1_2))))) {
		/* 821L, 35L, 273L, 299L) */ var_1_1 = (
			/* 824L, 34L, 276L, 302L) */ (abs (
				var_1_7
			))
		);
	} else {
		/* 826L, 41L, 278L, 304L) */ var_1_1 = (
			/* 829L, 40L, 281L, 307L) */ (max (
				/* 829L, 40L, 281L, 307L) */ (
					var_1_7
				) , (
					200
				)
			))
		);
	}


	// From: CodeObject8
	/* 225L) */ if (/* 213L, 212L) */ ((var_1_35) < (10u))) {
		/* 224L) */ var_1_48 = (
			/* 223L) */ (min (
				/* 223L) */ (
					var_1_47
				) , (
					1u
				)
			))
		);
	}


	// From: Req4Batch151Filler_PR_CN
	/* 884L, 177L, 523L, 550L) */ if (var_1_2) {
		/* 886L, 159L, 525L, 552L) */ var_1_13 = (
			/* 889L, 158L, 528L, 555L) */ (max (
				/* 889L, 158L, 528L, 555L) */ (
					/* 890L, 152L, 529L, 556L) */ ((
						var_1_12
					) + (
						/* 892L, 151L, 531L, 558L) */ ((
							var_1_14
						) - (
							var_1_15
						))
					))
				) , (
					/* 895L, 157L, 534L, 561L) */ ((
						var_1_23
					) + (
						/* 897L, 156L, 536L, 563L) */ ((
							var_1_16
						) + (
							var_1_17
						))
					))
				)
			))
		);
	} else {
		/* 900L, 175L, 539L, 566L) */ if (var_1_3) {
			/* 902L, 166L, 541L, 568L) */ var_1_13 = (
				var_1_7
			);
		} else {
			/* 906L, 174L, 545L, 572L) */ var_1_13 = (
				var_1_12
			);
		}
	}


	// From: CodeObject2
	/* 16L) */ var_1_30 = (
		var_1_31
	);


	// From: CodeObject5
	/* 119L) */ if (/* 76L, 75L) */ ((/* 77L, 73L) */ ((/* 78L, 71L) */ ((var_1_39) >> (var_1_40))) + (var_1_41))) <= (var_1_30))) {
		/* 112L) */ if (/* 93L, 92L) */ ((var_1_35) > (var_1_40))) {
			/* 102L) */ var_1_38 = (
				var_1_39
			);
		} else {
			/* 111L) */ var_1_38 = (
				/* 110L) */ ((
					/* 108L) */ (abs (
						/* 107L) */ (min (
							/* 107L) */ (
								var_1_42
							) , (
								var_1_43
							)
						))
					))
				) - (
					var_1_36
				))
			);
		}
	} else {
		/* 118L) */ var_1_38 = (
			/* 117L) */ (abs (
				128u
			))
		);
	}


	// From: CodeObject6
	/* 168L) */ if (var_1_34) {
		/* 166L) */ if (/* 133L, 132L) */ ((var_1_43) < (/* 135L, 131L) */ ((var_1_32) | (/* 137L, 130L) */ ((var_1_38) ^ (var_1_40))))))) {
			/* 150L) */ var_1_44 = (
				var_1_39
			);
		} else {
			/* 164L) */ if (/* 154L, 153L) */ ((var_1_27) > (127.4f))) {
				/* 163L) */ var_1_44 = (
					var_1_40
				);
			}
		}
	}


	// From: CodeObject7
	/* 206L) */ if (/* 180L, 179L) */ ((/* 181L, 174L) */ (max (/* 181L, 174L) */ (var_1_37) , (var_1_29)))) >= (/* 184L, 178L) */ ((var_1_46) - (/* 186L, 177L) */ (abs (127.4f))))))) {
		/* 205L) */ var_1_45 = (
			/* 204L) */ ((
				/* 202L) */ ((
					var_1_47
				) - (
					/* 201L) */ ((
						var_1_39
					) + (
						var_1_40
					))
				))
			) + (
				var_1_44
			))
		);
	}


	// From: Req5Batch151Filler_PR_CN
	/* 912L, 208L, 632L, 650L) */ if (/* 913L, 187L, 188L, 633L, 651L) */ ((/* 914L, 185L, 189L, 634L, 652L) */ ((var_1_17) >= (var_1_1))) && (var_1_3))) {
		/* 918L, 207L, 638L, 656L) */ var_1_18 = (
			/* 921L, 206L, 641L, 659L) */ (min (
				/* 921L, 206L, 641L, 659L) */ (
					var_1_19
				) , (
					/* 923L, 205L, 643L, 661L) */ ((
						/* 924L, 203L, 644L, 662L) */ ((
							var_1_20
						) + (
							var_1_21
						))
					) - (
						var_1_22
					))
				)
			))
		);
	}


	// From: Req3Batch151Filler_PR_CN
	unsigned char stepLocal_2 = var_1_3;
	unsigned long int stepLocal_1 = /* 847L, 103L, 111L, 414L, 445L) */ (max (/* 847L, 103L, 111L, 414L, 445L) */ (2u) , (var_1_11)));
	/* 879L, 137L, 399L, 430L) */ if (/* 859L, 81L, 82L, 400L, 431L) */ ((stepLocal_2) || (/* 858L, 80L, 84L, 402L, 433L) */ ((/* 856L, 78L, 85L, 403L, 434L) */ (min (/* 856L, 78L, 85L, 403L, 434L) */ (var_1_6) , (var_1_5)))) <= (var_1_13))))) {
		/* 874L, 131L, 407L, 438L) */ if (/* 865L, 104L, 105L, 408L, 439L) */ ((/* 864L, 100L, 106L, 409L, 440L) */ ((/* 862L, 98L, 107L, 410L, 441L) */ ((var_1_5) + (var_1_6))) + (var_1_13))) <= (stepLocal_1))) {
			/* 869L, 126L, 417L, 448L) */ var_1_10 = (
				10
			);
		} else {
			/* 873L, 130L, 421L, 452L) */ var_1_10 = (
				var_1_12
			);
		}
	} else {
		/* 878L, 136L, 425L, 456L) */ var_1_10 = (
			var_1_12
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483646);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -536870911);
	assume_abort_if_not(var_1_16 <= 536870912);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -536870911);
	assume_abort_if_not(var_1_17 <= 536870911);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16384);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483647);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 6);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -128);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741823);
	assume_abort_if_not(var_1_47 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 232L, 12L, 22L, 316L, 342L, 960L) */ ((/* 233L, 6L, 23L, 317L, 343L, 961L) */ ((32.4) == (var_1_8))) || (/* 236L, 11L, 26L, 320L, 346L, 964L) */ ((/* 237L, 9L, 27L, 321L, 347L, 965L) */ ((var_1_5) > (var_1_6))) && (var_1_2))))) {
	} else {
	}
	if (/* 254L, 58L, 62L, 382L, 391L, 982L) */ ((var_1_7) < (var_1_5))) {
	}
	if (/* 263L, 81L, 89L, 462L, 493L, 991L) */ ((var_1_3) || (/* 265L, 80L, 91L, 464L, 495L, 993L) */ ((/* 266L, 78L, 92L, 465L, 496L, 994L) */ (min (/* 266L, 78L, 92L, 465L, 496L, 994L) */ (var_1_6) , (var_1_5)))) <= (var_1_13))))) {
		if (/* 271L, 104L, 114L, 470L, 501L, 999L) */ ((/* 272L, 100L, 115L, 471L, 502L, 1000L) */ ((/* 273L, 98L, 116L, 472L, 503L, 1001L) */ ((var_1_5) + (var_1_6))) + (var_1_13))) <= (/* 277L, 103L, 120L, 476L, 507L, 1005L) */ (max (/* 277L, 103L, 120L, 476L, 507L, 1005L) */ (2u) , (var_1_11)))))) {
		} else {
		}
	} else {
	}
	if (var_1_2) {
	} else {
		if (var_1_3) {
		} else {
		}
	}
	if (/* 322L, 187L, 193L, 669L, 687L, 1050L) */ ((/* 323L, 185L, 194L, 670L, 688L, 1051L) */ ((var_1_17) >= (var_1_1))) && (var_1_3))) {
	}
	if (/* 339L, 218L, 222L, 756L, 782L, 1067L) */ ((9.99999999999925E12) <= (var_1_8))) {
		if (/* 343L, 228L, 233L, 760L, 786L, 1071L) */ ((/* 344L, 226L, 234L, 761L, 787L, 1072L) */ (- (var_1_8))) == (var_1_8))) {
		} else {
		}
	} else {
	}
	return /* 368L) */ ((
	/* 367L) */ ((
		/* 366L) */ ((
			/* 365L) */ ((
				/* 364L) */ ((
					/* 231L, 43L, 315L, 341L, 959L) */ ((
						/* 232L, 12L, 22L, 316L, 342L, 960L) */ ((
							/* 233L, 6L, 23L, 317L, 343L, 961L) */ ((
								32.4
							) == (
								var_1_8
							))
						) || (
							/* 236L, 11L, 26L, 320L, 346L, 964L) */ ((
								/* 237L, 9L, 27L, 321L, 347L, 965L) */ ((
									var_1_5
								) > (
									var_1_6
								))
							) && (
								var_1_2
							))
						))
					) ? (
						/* 241L, 35L, 325L, 351L, 969L) */ ((
							var_1_1
						) == (
							/* 241L, 35L, 325L, 351L, 969L) */ ((signed long int) (
								/* 244L, 34L, 328L, 354L, 972L) */ (abs (
									var_1_7
								))
							))
						))
					) : (
						/* 246L, 41L, 330L, 356L, 974L) */ ((
							var_1_1
						) == (
							/* 246L, 41L, 330L, 356L, 974L) */ ((signed long int) (
								/* 249L, 40L, 333L, 359L, 977L) */ (max (
									/* 249L, 40L, 333L, 359L, 977L) */ (
										var_1_7
									) , (
										200
									)
								))
							))
						))
					))
				) && (
					/* 253L, 70L, 381L, 390L, 981L) */ ((
						/* 254L, 58L, 62L, 382L, 391L, 982L) */ ((
							var_1_7
						) < (
							var_1_5
						))
					) ? (
						/* 257L, 68L, 385L, 394L, 985L) */ ((
							var_1_8
						) == (
							/* 257L, 68L, 385L, 394L, 985L) */ ((double) (
								var_1_9
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 262L, 138L, 461L, 492L, 990L) */ ((
					/* 263L, 81L, 89L, 462L, 493L, 991L) */ ((
						var_1_3
					) || (
						/* 265L, 80L, 91L, 464L, 495L, 993L) */ ((
							/* 266L, 78L, 92L, 465L, 496L, 994L) */ (min (
								/* 266L, 78L, 92L, 465L, 496L, 994L) */ (
									var_1_6
								) , (
									var_1_5
								)
							))
						) <= (
							var_1_13
						))
					))
				) ? (
					/* 270L, 132L, 469L, 500L, 998L) */ ((
						/* 271L, 104L, 114L, 470L, 501L, 999L) */ ((
							/* 272L, 100L, 115L, 471L, 502L, 1000L) */ ((
								/* 273L, 98L, 116L, 472L, 503L, 1001L) */ ((
									var_1_5
								) + (
									var_1_6
								))
							) + (
								var_1_13
							))
						) <= (
							/* 277L, 103L, 120L, 476L, 507L, 1005L) */ (max (
								/* 277L, 103L, 120L, 476L, 507L, 1005L) */ (
									2u
								) , (
									var_1_11
								)
							))
						))
					) ? (
						/* 280L, 126L, 479L, 510L, 1008L) */ ((
							var_1_10
						) == (
							/* 280L, 126L, 479L, 510L, 1008L) */ ((signed char) (
								10
							))
						))
					) : (
						/* 284L, 130L, 483L, 514L, 1012L) */ ((
							var_1_10
						) == (
							/* 284L, 130L, 483L, 514L, 1012L) */ ((signed char) (
								var_1_12
							))
						))
					))
				) : (
					/* 288L, 136L, 487L, 518L, 1016L) */ ((
						var_1_10
					) == (
						/* 288L, 136L, 487L, 518L, 1016L) */ ((signed char) (
							var_1_12
						))
					))
				))
			))
		) && (
			/* 293L, 178L, 577L, 604L, 1021L) */ ((
				var_1_2
			) ? (
				/* 295L, 159L, 579L, 606L, 1023L) */ ((
					var_1_13
				) == (
					/* 295L, 159L, 579L, 606L, 1023L) */ ((signed long int) (
						/* 298L, 158L, 582L, 609L, 1026L) */ (max (
							/* 298L, 158L, 582L, 609L, 1026L) */ (
								/* 299L, 152L, 583L, 610L, 1027L) */ ((
									var_1_12
								) + (
									/* 301L, 151L, 585L, 612L, 1029L) */ ((
										var_1_14
									) - (
										var_1_15
									))
								))
							) , (
								/* 304L, 157L, 588L, 615L, 1032L) */ ((
									var_1_23
								) + (
									/* 306L, 156L, 590L, 617L, 1034L) */ ((
										var_1_16
									) + (
										var_1_17
									))
								))
							)
						))
					))
				))
			) : (
				/* 309L, 176L, 593L, 620L, 1037L) */ ((
					var_1_3
				) ? (
					/* 311L, 166L, 595L, 622L, 1039L) */ ((
						var_1_13
					) == (
						/* 311L, 166L, 595L, 622L, 1039L) */ ((signed long int) (
							var_1_7
						))
					))
				) : (
					/* 315L, 174L, 599L, 626L, 1043L) */ ((
						var_1_13
					) == (
						/* 315L, 174L, 599L, 626L, 1043L) */ ((signed long int) (
							var_1_12
						))
					))
				))
			))
		))
	) && (
		/* 321L, 209L, 668L, 686L, 1049L) */ ((
			/* 322L, 187L, 193L, 669L, 687L, 1050L) */ ((
				/* 323L, 185L, 194L, 670L, 688L, 1051L) */ ((
					var_1_17
				) >= (
					var_1_1
				))
			) && (
				var_1_3
			))
		) ? (
			/* 327L, 207L, 674L, 692L, 1055L) */ ((
				var_1_18
			) == (
				/* 327L, 207L, 674L, 692L, 1055L) */ ((unsigned short int) (
					/* 330L, 206L, 677L, 695L, 1058L) */ (min (
						/* 330L, 206L, 677L, 695L, 1058L) */ (
							var_1_19
						) , (
							/* 332L, 205L, 679L, 697L, 1060L) */ ((
								/* 333L, 203L, 680L, 698L, 1061L) */ ((
									var_1_20
								) + (
									var_1_21
								))
							) - (
								var_1_22
							))
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 338L, 256L, 755L, 781L, 1066L) */ ((
		/* 339L, 218L, 222L, 756L, 782L, 1067L) */ ((
			9.99999999999925E12
		) <= (
			var_1_8
		))
	) ? (
		/* 342L, 250L, 759L, 785L, 1070L) */ ((
			/* 343L, 228L, 233L, 760L, 786L, 1071L) */ ((
				/* 344L, 226L, 234L, 761L, 787L, 1072L) */ (- (
					var_1_8
				))
			) == (
				var_1_8
			))
		) ? (
			/* 347L, 244L, 764L, 790L, 1075L) */ ((
				var_1_23
			) == (
				/* 347L, 244L, 764L, 790L, 1075L) */ ((unsigned char) (
					/* 350L, 243L, 767L, 793L, 1078L) */ ((
						var_1_24
					) - (
						/* 352L, 242L, 769L, 795L, 1080L) */ (max (
							/* 352L, 242L, 769L, 795L, 1080L) */ (
								var_1_25
							) , (
								var_1_26
							)
						))
					))
				))
			))
		) : (
			/* 355L, 248L, 772L, 798L, 1083L) */ ((
				var_1_23
			) == (
				/* 355L, 248L, 772L, 798L, 1083L) */ ((unsigned char) (
					var_1_25
				))
			))
		))
	) : (
		/* 359L, 254L, 776L, 802L, 1087L) */ ((
			var_1_23
		) == (
			/* 359L, 254L, 776L, 802L, 1087L) */ ((unsigned char) (
				var_1_25
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
