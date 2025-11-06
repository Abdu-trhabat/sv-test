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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 128;
unsigned short int var_1_6 = 25;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 64;
signed long int var_1_9 = 32;
unsigned short int var_1_10 = 41078;
unsigned short int var_1_11 = 0;
unsigned short int var_1_12 = 0;
float var_1_13 = 64.6;
float var_1_14 = 7.5;
float var_1_15 = 63.4;
float var_1_18 = 31.25;
float var_1_19 = 15.75;
float var_1_20 = 49.625;
signed short int var_1_21 = 10;
signed short int var_1_22 = 16;
unsigned long int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 0;
unsigned long int var_1_27 = 5;
unsigned char var_1_28 = 1;
signed long int var_1_29 = -50;
signed long int var_1_30 = 256;
unsigned char var_1_31 = 0;
unsigned long int var_1_32 = 128;
double var_1_33 = 1.5;
double var_1_34 = 1.8;
double var_1_35 = 49.6;
unsigned long int var_1_36 = 5;
unsigned char var_1_37 = 10;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 200;
signed char var_1_41 = -16;
signed char var_1_42 = -100;
signed char var_1_43 = -8;
double var_1_44 = 64.875;
signed long int var_1_45 = 5;
signed long int var_1_46 = 8;
double var_1_47 = 64.52;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 21L) */ if (/* 4L, 3L) */ (! (var_1_24))) {
		/* 19L) */ if (var_1_24) {
			/* 18L) */ var_1_23 = (
				/* 17L) */ (max (
					/* 17L) */ (
						/* 15L) */ (max (
							/* 15L) */ (
								var_1_25
							) , (
								var_1_26
							)
						))
					) , (
						var_1_27
					)
				))
			);
		}
	}


	// From: CodeObject2
	/* 57L) */ if (var_1_24) {
		/* 55L) */ if (/* 34L, 33L) */ ((/* 35L, 31L) */ (abs (/* 36L, 30L) */ (max (/* 36L, 30L) */ (var_1_29) , (var_1_30)))))) > (var_1_23))) {
			/* 54L) */ var_1_28 = (
				/* 53L) */ ((
					/* 50L) */ ((
						var_1_26
					) > (
						var_1_25
					))
				) || (
					/* 52L) */ (! (
						var_1_31
					))
				))
			);
		}
	}


	// From: CodeObject3
	/* 106L) */ if (/* 70L, 69L) */ ((/* 71L, 65L) */ ((0.8) * (var_1_33))) < (/* 74L, 68L) */ ((var_1_34) * (var_1_35))))) {
		/* 100L) */ if (var_1_28) {
			/* 95L) */ var_1_32 = (
				/* 94L) */ (max (
					/* 94L) */ (
						/* 92L) */ ((
							2u
						) + (
							/* 91L) */ (abs (
								var_1_36
							))
						))
					) , (
						var_1_25
					)
				))
			);
		} else {
			/* 99L) */ var_1_32 = (
				var_1_26
			);
		}
	} else {
		/* 105L) */ var_1_32 = (
			var_1_27
		);
	}


	// From: CodeObject4
	/* 126L) */ if (/* 114L, 113L) */ (! (var_1_24))) {
		/* 125L) */ var_1_37 = (
			/* 124L) */ (max (
				/* 124L) */ (
					var_1_38
				) , (
					/* 123L) */ (min (
						/* 123L) */ (
							var_1_39
						) , (
							var_1_40
						)
					))
				)
			))
		);
	}


	// From: CodeObject5
	/* 168L) */ if (/* 136L, 135L) */ ((var_1_39) == (/* 138L, 134L) */ ((var_1_30) + (var_1_37))))) {
		/* 166L) */ if (/* 151L, 150L) */ ((var_1_34) != (/* 153L, 149L) */ (max (/* 153L, 149L) */ (var_1_33) , (var_1_35)))))) {
			/* 165L) */ var_1_41 = (
				/* 164L) */ (abs (
					var_1_42
				))
			);
		}
	}


	// From: CodeObject6
	/* 198L) */ if (/* 183L, 182L) */ ((/* 184L, 180L) */ ((var_1_25) ^ (var_1_40))) >= (var_1_23))) {
		/* 197L) */ var_1_43 = (
			/* 196L) */ (abs (
				var_1_42
			))
		);
	}


	// From: CodeObject7
	/* 308L) */ if (/* 212L, 211L) */ ((/* 213L, 205L) */ ((/* 214L, 203L) */ (abs (var_1_37))) % (var_1_45))) < (/* 217L, 210L) */ ((/* 218L, 208L) */ (min (/* 218L, 208L) */ (var_1_38) , (var_1_40)))) >> (var_1_46))))) {
		/* 235L) */ var_1_44 = (
			var_1_47
		);
	} else {
		/* 307L) */ var_1_44 = (
			1.25
		);
	}


	// From: Req1Batch166Filler_PS_CN
	unsigned short int stepLocal_1 = var_1_2;
	unsigned short int stepLocal_0 = var_1_3;
	/* 889L, 44L, 311L, 335L) */ if (/* 870L, 4L, 5L, 312L, 336L) */ ((var_1_2) <= (stepLocal_0))) {
		/* 888L, 42L, 315L, 339L) */ if (/* 874L, 18L, 19L, 316L, 340L) */ ((stepLocal_1) > (/* 873L, 17L, 21L, 318L, 342L) */ ((var_1_3) * (var_1_6))))) {
			/* 883L, 37L, 321L, 345L) */ var_1_1 = (
				/* 882L, 36L, 324L, 348L) */ (! (
					/* 881L, 35L, 325L, 349L) */ ((
						/* 879L, 33L, 326L, 350L) */ ((
							var_1_3
						) <= (
							var_1_2
						))
					) || (
						var_1_7
					))
				))
			);
		} else {
			/* 887L, 41L, 330L, 354L) */ var_1_1 = (
				var_1_7
			);
		}
	}


	// From: Req2Batch166Filler_PS_CN
	/* 897L, 74L, 410L, 426L) */ if (/* 898L, 59L, 60L, 411L, 427L) */ ((var_1_2) != (var_1_6))) {
		/* 901L, 73L, 414L, 430L) */ var_1_8 = (
			/* 904L, 72L, 417L, 433L) */ ((
				var_1_10
			) - (
				/* 906L, 71L, 419L, 435L) */ ((
					var_1_11
				) + (
					var_1_12
				))
			))
		);
	}


	// From: Req4Batch166Filler_PS_CN
	unsigned short int stepLocal_2 = var_1_11;
	/* 958L, 171L, 615L, 627L) */ if (/* 950L, 157L, 158L, 616L, 628L) */ ((var_1_8) > (stepLocal_2))) {
		/* 957L, 170L, 619L, 631L) */ var_1_20 = (
			/* 956L, 169L, 622L, 634L) */ (min (
				/* 956L, 169L, 622L, 634L) */ (
					/* 954L, 167L, 623L, 635L) */ (abs (
						63.5f
					))
				) , (
					var_1_15
				)
			))
		);
	}


	// From: Req6Batch166Filler_PS_CN
	/* 989L, 257L, 768L, 792L) */ if (var_1_1) {
		/* 991L, 251L, 770L, 794L) */ if (/* 992L, 230L, 231L, 771L, 795L) */ ((10) == (/* 994L, 229L, 233L, 773L, 797L) */ ((var_1_11) + (var_1_8))))) {
			/* 997L, 246L, 776L, 800L) */ var_1_22 = (
				/* 1000L, 245L, 779L, 803L) */ ((
					var_1_12
				) - (
					var_1_11
				))
			);
		} else {
			/* 1003L, 250L, 782L, 806L) */ var_1_22 = (
				var_1_11
			);
		}
	} else {
		/* 1007L, 256L, 786L, 810L) */ var_1_22 = (
			var_1_12
		);
	}


	// From: Req3Batch166Filler_PS_CN
	/* 911L, 147L, 472L, 508L) */ if (/* 912L, 88L, 89L, 473L, 509L) */ ((var_1_1) || (var_1_7))) {
		/* 915L, 100L, 476L, 512L) */ var_1_13 = (
			/* 918L, 99L, 479L, 515L) */ ((
				var_1_14
			) + (
				var_1_15
			))
		);
	} else {
		/* 921L, 145L, 482L, 518L) */ if (/* 922L, 107L, 108L, 483L, 519L) */ ((/* 923L, 105L, 109L, 484L, 520L) */ ((/* 924L, 103L, 110L, 485L, 521L) */ (max (/* 924L, 103L, 110L, 485L, 521L) */ (var_1_14) , (var_1_15)))) * (var_1_20))) <= (var_1_20))) {
			/* 929L, 139L, 490L, 526L) */ if (/* 930L, 124L, 125L, 491L, 527L) */ ((var_1_9) == (var_1_12))) {
				/* 933L, 138L, 494L, 530L) */ var_1_13 = (
					/* 936L, 137L, 497L, 533L) */ ((
						var_1_18
					) - (
						/* 938L, 136L, 499L, 535L) */ (min (
							/* 938L, 136L, 499L, 535L) */ (
								var_1_19
							) , (
								2.225f
							)
						))
					))
				);
			}
		} else {
			/* 941L, 144L, 502L, 538L) */ var_1_13 = (
				var_1_15
			);
		}
	}


	// From: Req5Batch166Filler_PS_CN
	/* 964L, 213L, 665L, 691L) */ if (/* 965L, 180L, 181L, 666L, 692L) */ ((var_1_15) < (/* 967L, 179L, 183L, 668L, 694L) */ (- (var_1_13))))) {
		/* 969L, 194L, 670L, 696L) */ var_1_21 = (
			/* 972L, 193L, 673L, 699L) */ (min (
				/* 972L, 193L, 673L, 699L) */ (
					var_1_12
				) , (
					var_1_11
				)
			))
		);
	} else {
		/* 975L, 211L, 676L, 702L) */ if (var_1_1) {
			/* 977L, 205L, 678L, 704L) */ if (var_1_1) {
				/* 979L, 204L, 680L, 706L) */ var_1_21 = (
					var_1_12
				);
			}
		} else {
			/* 983L, 210L, 684L, 710L) */ var_1_21 = (
				var_1_11
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483647);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -126);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 30);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 311L, 4L, 8L, 360L, 384L, 1013L) */ ((var_1_2) <= (var_1_3))) {
		if (/* 315L, 18L, 24L, 364L, 388L, 1017L) */ ((var_1_2) > (/* 317L, 17L, 26L, 366L, 390L, 1019L) */ ((var_1_3) * (var_1_6))))) {
		} else {
		}
	}
	if (/* 338L, 59L, 63L, 443L, 459L, 1040L) */ ((var_1_2) != (var_1_6))) {
	}
	if (/* 352L, 88L, 92L, 545L, 581L, 1054L) */ ((var_1_1) || (var_1_7))) {
	} else {
		if (/* 362L, 107L, 115L, 555L, 591L, 1064L) */ ((/* 363L, 105L, 116L, 556L, 592L, 1065L) */ ((/* 364L, 103L, 117L, 557L, 593L, 1066L) */ (max (/* 364L, 103L, 117L, 557L, 593L, 1066L) */ (var_1_14) , (var_1_15)))) * (var_1_20))) <= (var_1_20))) {
			if (/* 370L, 124L, 128L, 563L, 599L, 1072L) */ ((var_1_9) == (var_1_12))) {
			}
		} else {
		}
	}
	if (/* 387L, 157L, 161L, 640L, 652L, 1089L) */ ((var_1_8) > (var_1_11))) {
	}
	if (/* 401L, 180L, 185L, 718L, 744L, 1103L) */ ((var_1_15) < (/* 403L, 179L, 187L, 720L, 746L, 1105L) */ (- (var_1_13))))) {
	} else {
		if (var_1_1) {
			if (var_1_1) {
			}
		} else {
		}
	}
	if (var_1_1) {
		if (/* 428L, 230L, 236L, 819L, 843L, 1130L) */ ((10) == (/* 430L, 229L, 238L, 821L, 845L, 1132L) */ ((var_1_11) + (var_1_8))))) {
		} else {
		}
	} else {
	}
	return /* 452L) */ ((
	/* 451L) */ ((
		/* 450L) */ ((
			/* 449L) */ ((
				/* 448L) */ ((
					/* 310L, 45L, 359L, 383L, 1012L) */ ((
						/* 311L, 4L, 8L, 360L, 384L, 1013L) */ ((
							var_1_2
						) <= (
							var_1_3
						))
					) ? (
						/* 314L, 43L, 363L, 387L, 1016L) */ ((
							/* 315L, 18L, 24L, 364L, 388L, 1017L) */ ((
								var_1_2
							) > (
								/* 317L, 17L, 26L, 366L, 390L, 1019L) */ ((
									var_1_3
								) * (
									var_1_6
								))
							))
						) ? (
							/* 320L, 37L, 369L, 393L, 1022L) */ ((
								var_1_1
							) == (
								/* 320L, 37L, 369L, 393L, 1022L) */ ((unsigned char) (
									/* 323L, 36L, 372L, 396L, 1025L) */ (! (
										/* 324L, 35L, 373L, 397L, 1026L) */ ((
											/* 325L, 33L, 374L, 398L, 1027L) */ ((
												var_1_3
											) <= (
												var_1_2
											))
										) || (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 329L, 41L, 378L, 402L, 1031L) */ ((
								var_1_1
							) == (
								/* 329L, 41L, 378L, 402L, 1031L) */ ((unsigned char) (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 337L, 75L, 442L, 458L, 1039L) */ ((
						/* 338L, 59L, 63L, 443L, 459L, 1040L) */ ((
							var_1_2
						) != (
							var_1_6
						))
					) ? (
						/* 341L, 73L, 446L, 462L, 1043L) */ ((
							var_1_8
						) == (
							/* 341L, 73L, 446L, 462L, 1043L) */ ((unsigned short int) (
								/* 344L, 72L, 449L, 465L, 1046L) */ ((
									var_1_10
								) - (
									/* 346L, 71L, 451L, 467L, 1048L) */ ((
										var_1_11
									) + (
										var_1_12
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 351L, 148L, 544L, 580L, 1053L) */ ((
					/* 352L, 88L, 92L, 545L, 581L, 1054L) */ ((
						var_1_1
					) || (
						var_1_7
					))
				) ? (
					/* 355L, 100L, 548L, 584L, 1057L) */ ((
						var_1_13
					) == (
						/* 355L, 100L, 548L, 584L, 1057L) */ ((float) (
							/* 358L, 99L, 551L, 587L, 1060L) */ ((
								var_1_14
							) + (
								var_1_15
							))
						))
					))
				) : (
					/* 361L, 146L, 554L, 590L, 1063L) */ ((
						/* 362L, 107L, 115L, 555L, 591L, 1064L) */ ((
							/* 363L, 105L, 116L, 556L, 592L, 1065L) */ ((
								/* 364L, 103L, 117L, 557L, 593L, 1066L) */ (max (
									/* 364L, 103L, 117L, 557L, 593L, 1066L) */ (
										var_1_14
									) , (
										var_1_15
									)
								))
							) * (
								var_1_20
							))
						) <= (
							var_1_20
						))
					) ? (
						/* 369L, 140L, 562L, 598L, 1071L) */ ((
							/* 370L, 124L, 128L, 563L, 599L, 1072L) */ ((
								var_1_9
							) == (
								var_1_12
							))
						) ? (
							/* 373L, 138L, 566L, 602L, 1075L) */ ((
								var_1_13
							) == (
								/* 373L, 138L, 566L, 602L, 1075L) */ ((float) (
									/* 376L, 137L, 569L, 605L, 1078L) */ ((
										var_1_18
									) - (
										/* 378L, 136L, 571L, 607L, 1080L) */ (min (
											/* 378L, 136L, 571L, 607L, 1080L) */ (
												var_1_19
											) , (
												2.225f
											)
										))
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 381L, 144L, 574L, 610L, 1083L) */ ((
							var_1_13
						) == (
							/* 381L, 144L, 574L, 610L, 1083L) */ ((float) (
								var_1_15
							))
						))
					))
				))
			))
		) && (
			/* 386L, 172L, 639L, 651L, 1088L) */ ((
				/* 387L, 157L, 161L, 640L, 652L, 1089L) */ ((
					var_1_8
				) > (
					var_1_11
				))
			) ? (
				/* 390L, 170L, 643L, 655L, 1092L) */ ((
					var_1_20
				) == (
					/* 390L, 170L, 643L, 655L, 1092L) */ ((float) (
						/* 393L, 169L, 646L, 658L, 1095L) */ (min (
							/* 393L, 169L, 646L, 658L, 1095L) */ (
								/* 394L, 167L, 647L, 659L, 1096L) */ (abs (
									63.5f
								))
							) , (
								var_1_15
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 400L, 214L, 717L, 743L, 1102L) */ ((
			/* 401L, 180L, 185L, 718L, 744L, 1103L) */ ((
				var_1_15
			) < (
				/* 403L, 179L, 187L, 720L, 746L, 1105L) */ (- (
					var_1_13
				))
			))
		) ? (
			/* 405L, 194L, 722L, 748L, 1107L) */ ((
				var_1_21
			) == (
				/* 405L, 194L, 722L, 748L, 1107L) */ ((signed short int) (
					/* 408L, 193L, 725L, 751L, 1110L) */ (min (
						/* 408L, 193L, 725L, 751L, 1110L) */ (
							var_1_12
						) , (
							var_1_11
						)
					))
				))
			))
		) : (
			/* 411L, 212L, 728L, 754L, 1113L) */ ((
				var_1_1
			) ? (
				/* 413L, 206L, 730L, 756L, 1115L) */ ((
					var_1_1
				) ? (
					/* 415L, 204L, 732L, 758L, 1117L) */ ((
						var_1_21
					) == (
						/* 415L, 204L, 732L, 758L, 1117L) */ ((signed short int) (
							var_1_12
						))
					))
				) : (
					1
				))
			) : (
				/* 419L, 210L, 736L, 762L, 1121L) */ ((
					var_1_21
				) == (
					/* 419L, 210L, 736L, 762L, 1121L) */ ((signed short int) (
						var_1_11
					))
				))
			))
		))
	))
) && (
	/* 425L, 258L, 816L, 840L, 1127L) */ ((
		var_1_1
	) ? (
		/* 427L, 252L, 818L, 842L, 1129L) */ ((
			/* 428L, 230L, 236L, 819L, 843L, 1130L) */ ((
				10
			) == (
				/* 430L, 229L, 238L, 821L, 845L, 1132L) */ ((
					var_1_11
				) + (
					var_1_8
				))
			))
		) ? (
			/* 433L, 246L, 824L, 848L, 1135L) */ ((
				var_1_22
			) == (
				/* 433L, 246L, 824L, 848L, 1135L) */ ((signed short int) (
					/* 436L, 245L, 827L, 851L, 1138L) */ ((
						var_1_12
					) - (
						var_1_11
					))
				))
			))
		) : (
			/* 439L, 250L, 830L, 854L, 1141L) */ ((
				var_1_22
			) == (
				/* 439L, 250L, 830L, 854L, 1141L) */ ((signed short int) (
					var_1_11
				))
			))
		))
	) : (
		/* 443L, 256L, 834L, 858L, 1145L) */ ((
			var_1_22
		) == (
			/* 443L, 256L, 834L, 858L, 1145L) */ ((signed short int) (
				var_1_12
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
