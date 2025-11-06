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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190Filler_PE_CI.c", 13, "reach_error"); }
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
signed char var_1_1 = -8;
signed char var_1_4 = 16;
unsigned char var_1_5 = 0;
float var_1_6 = 24.5;
unsigned short int var_1_7 = 32;
unsigned char var_1_8 = 1;
unsigned short int var_1_9 = 38529;
unsigned short int var_1_10 = 16;
float var_1_11 = 5.5;
double var_1_12 = 2.8;
double var_1_13 = 64.525;
double var_1_14 = 16.75;
float var_1_15 = 15.875;
signed char var_1_16 = 1;
signed char var_1_17 = 25;
signed char var_1_18 = 64;
signed char var_1_19 = 16;
signed char var_1_20 = 1;
signed char var_1_21 = 1;
signed short int var_1_22 = -4;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 1;
unsigned long int var_1_26 = 1176567833;
signed char var_1_27 = -5;
signed long int var_1_29 = -2;
signed long int var_1_30 = -2;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned short int var_1_36 = 2;
unsigned char var_1_38 = 1;
unsigned long int var_1_40 = 256;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
signed char var_1_46 = -4;

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = 1;
unsigned char last_1_var_1_23 = 0;
unsigned long int last_1_var_1_25 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch190Filler_PE_CI
	unsigned char stepLocal_3 = last_1_var_1_23;
	/* 39L, 123L, 521L, 554L, 981L, 1101L) */ if (/* 8L, 67L, 68L, 522L, 555L, 950L, 1070L) */ ((stepLocal_3) || (/* 7L, 66L, 70L, 524L, 557L, 949L, 1069L) */ (! (last_1_var_1_23))))) {
		/* 27L, 100L, 526L, 559L, 969L, 1089L) */ if (/* 14L, 79L, 80L, 527L, 560L, 956L, 1076L) */ (! (/* 13L, 78L, 81L, 528L, 561L, 955L, 1075L) */ ((last_1_var_1_25) == (last_1_var_1_16))))) {
			/* 22L, 95L, 531L, 564L, 964L, 1084L) */ var_1_7 = (
				/* 21L, 94L, 534L, 567L, 963L, 1083L) */ ((
					var_1_9
				) - (
					/* 20L, 93L, 536L, 569L, 962L, 1082L) */ (max (
						/* 20L, 93L, 536L, 569L, 962L, 1082L) */ (
							var_1_10
						) , (
							8
						)
					))
				))
			);
		} else {
			/* 26L, 99L, 539L, 572L, 968L, 1088L) */ var_1_7 = (
				var_1_9
			);
		}
	} else {
		/* 38L, 121L, 543L, 576L, 980L, 1100L) */ if (last_1_var_1_23) {
			/* 33L, 108L, 545L, 578L, 975L, 1095L) */ var_1_7 = (
				var_1_10
			);
		} else {
			/* 37L, 120L, 549L, 582L, 979L, 1099L) */ var_1_7 = (
				var_1_9
			);
		}
	}


	// From: Req4Batch190Filler_PE_CI
	signed long int stepLocal_4 = /* 1124L, 176L, 180L, 728L, 743L) */ ((var_1_17) - (var_1_18));
	/* 1138L, 196L, 725L, 740L) */ if (/* 1129L, 177L, 178L, 726L, 741L) */ ((var_1_4) >= (stepLocal_4))) {
		/* 1137L, 195L, 731L, 746L) */ var_1_16 = (
			/* 1136L, 194L, 734L, 749L) */ ((
				var_1_19
			) + (
				/* 1135L, 193L, 736L, 751L) */ ((
					var_1_20
				) - (
					var_1_21
				))
			))
		);
	}


	// From: Req5Batch190Filler_PE_CI
	/* 1146L, 211L, 789L, 804L) */ var_1_22 = (
		/* 1149L, 210L, 792L, 807L) */ (min (
			/* 1149L, 210L, 792L, 807L) */ (
				var_1_19
			) , (
				/* 1151L, 209L, 794L, 809L) */ (min (
					/* 1151L, 209L, 794L, 809L) */ (
						var_1_20
					) , (
						/* 1153L, 208L, 796L, 811L) */ ((
							var_1_21
						) - (
							var_1_18
						))
					)
				))
			)
		))
	);


	// From: Req6Batch190Filler_PE_CI
	/* 1160L, 231L, 848L, 860L) */ var_1_23 = (
		/* 1163L, 230L, 851L, 863L) */ ((
			var_1_8
		) || (
			/* 1165L, 229L, 853L, 865L) */ ((
				var_1_5
			) || (
				var_1_24
			))
		))
	);


	// From: Req3Batch190Filler_PE_CI
	/* 1106L, 165L, 654L, 672L) */ if (/* 1107L, 131L, 132L, 655L, 673L) */ ((var_1_7) <= (var_1_22))) {
		/* 1110L, 163L, 658L, 676L) */ if (/* 1111L, 144L, 145L, 659L, 677L) */ ((/* 1112L, 140L, 146L, 660L, 678L) */ ((var_1_6) + (var_1_12))) <= (/* 1115L, 143L, 149L, 663L, 681L) */ (max (/* 1115L, 143L, 149L, 663L, 681L) */ (var_1_13) , (var_1_14)))))) {
			/* 1118L, 162L, 666L, 684L) */ var_1_11 = (
				var_1_15
			);
		}
	}


	// From: Req7Batch190Filler_PE_CI
	/* 1169L, 259L, 893L, 906L) */ if (/* 1170L, 244L, 245L, 894L, 907L) */ ((var_1_12) == (var_1_11))) {
		/* 1173L, 258L, 897L, 910L) */ var_1_25 = (
			/* 1176L, 257L, 900L, 913L) */ ((
				/* 1177L, 255L, 901L, 914L) */ ((
					var_1_26
				) - (
					var_1_10
				))
			) + (
				var_1_18
			))
		);
	}


	// From: Req1Batch190Filler_PE_CI
	unsigned short int stepLocal_2 = var_1_7;
	signed short int stepLocal_1 = var_1_22;
	unsigned char stepLocal_0 = /* 1022L, 28L, 32L, 342L, 374L) */ ((/* 1023L, 26L, 33L, 343L, 375L) */ (- (var_1_11))) < (32.6f));
	/* 1057L, 58L, 327L, 359L) */ if (/* 1034L, 4L, 5L, 328L, 360L) */ ((var_1_7) <= (stepLocal_1))) {
		/* 1052L, 52L, 331L, 363L) */ if (/* 1036L, 13L, 14L, 332L, 364L) */ ((var_1_22) <= (stepLocal_2))) {
			/* 1040L, 23L, 335L, 367L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 1051L, 50L, 339L, 371L) */ if (/* 1042L, 29L, 30L, 340L, 372L) */ ((var_1_23) || (stepLocal_0))) {
				/* 1046L, 45L, 346L, 378L) */ var_1_1 = (
					64
				);
			} else {
				/* 1050L, 49L, 350L, 382L) */ var_1_1 = (
					var_1_4
				);
			}
		}
	} else {
		/* 1056L, 57L, 354L, 386L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject1
	/* 355L, 106L) */ if (/* 356L, 86L, 87L) */ ((var_1_26) <= (/* 358L, 85L, 89L) */ (min (/* 358L, 85L, 89L) */ (var_1_26) , (var_1_25)))))) {
		/* 361L, 104L) */ if (var_1_23) {
			/* 363L, 103L) */ var_1_27 = (
				var_1_20
			);
		}
	}


	// From: CodeObject2
	/* 403L, 148L) */ if (/* 404L, 119L, 120L) */ ((/* 405L, 117L, 121L) */ (- (var_1_30))) >= (var_1_19))) {
		/* 408L, 146L) */ if (/* 409L, 130L, 131L) */ ((var_1_29) != (var_1_30))) {
			/* 412L, 140L) */ var_1_33 = (
				var_1_34
			);
		} else {
			/* 416L, 145L) */ var_1_33 = (
				/* 419L, 144L) */ (! (
					var_1_24
				))
			);
		}
	}


	// From: CodeObject3
	/* 421L, 209L) */ if (/* 422L, 157L, 158L) */ ((/* 423L, 153L, 159L) */ (abs (2))) <= (/* 425L, 156L, 161L) */ ((var_1_26) >> (var_1_38))))) {
		/* 428L, 203L) */ if (/* 429L, 176L, 177L) */ ((/* 430L, 174L, 178L) */ (max (/* 430L, 174L, 178L) */ (/* 431L, 172L, 179L) */ (max (/* 431L, 172L, 179L) */ (var_1_26) , (var_1_25)))) , (64)))) > (var_1_26))) {
			/* 436L, 194L) */ var_1_36 = (
				var_1_38
			);
		} else {
			/* 440L, 202L) */ var_1_36 = (
				32
			);
		}
	} else {
		/* 444L, 208L) */ var_1_36 = (
			var_1_10
		);
	}


	// From: CodeObject4
	/* 448L, 231L) */ if (/* 449L, 218L, 219L) */ ((/* 450L, 216L, 220L) */ (abs (24.7))) != (var_1_12))) {
		/* 453L, 230L) */ var_1_40 = (
			var_1_10
		);
	}


	// From: CodeObject5
	/* 457L, 264L) */ if (/* 458L, 241L, 242L) */ ((/* 459L, 239L, 243L) */ ((/* 460L, 237L, 244L) */ ((var_1_10) * (var_1_26))) % (var_1_38))) < (-1))) {
		/* 465L, 263L) */ var_1_42 = (
			/* 468L, 262L) */ ((
				var_1_34
			) || (
				/* 470L, 261L) */ ((
					var_1_43
				) || (
					var_1_44
				))
			))
		);
	}


	// From: CodeObject6
	/* 473L, 324L) */ if (/* 474L, 275L, 276L) */ ((var_1_16) <= (/* 476L, 274L, 278L) */ ((var_1_10) * (var_1_26))))) {
		/* 479L, 322L) */ if (/* 480L, 290L, 291L) */ ((/* 481L, 288L, 292L) */ ((var_1_25) ^ (var_1_26))) > (var_1_25))) {
			/* 485L, 320L) */ if (/* 486L, 305L, 306L) */ ((var_1_34) || (/* 488L, 304L, 308L) */ ((var_1_26) <= (var_1_25))))) {
				/* 491L, 319L) */ var_1_45 = (
					var_1_24
				);
			}
		}
	}


	// From: CodeObject7
	/* 495L, 350L) */ if (/* 496L, 333L, 334L) */ ((/* 497L, 329L, 335L) */ (abs (var_1_20))) < (/* 499L, 332L, 337L) */ ((var_1_26) + (var_1_25))))) {
		/* 502L, 349L) */ var_1_46 = (
			var_1_20
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1073741823);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 30);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_25 = var_1_25;
}

int property(void) {
	if (/* 507L, 4L, 8L, 392L, 424L, 1183L) */ ((var_1_7) <= (var_1_22))) {
		if (/* 511L, 13L, 17L, 396L, 428L, 1187L) */ ((var_1_22) <= (var_1_7))) {
		} else {
			if (/* 519L, 29L, 36L, 404L, 436L, 1195L) */ ((var_1_23) || (/* 521L, 28L, 38L, 406L, 438L, 1197L) */ ((/* 522L, 26L, 39L, 407L, 439L, 1198L) */ (- (var_1_11))) < (32.6f))))) {
			} else {
			}
		}
	} else {
	}
	if (/* 539L, 67L, 72L, 588L, 621L, 988L, 1215L, 47L) */ ((last_1_var_1_23) || (/* 542L, 66L, 74L, 590L, 623L, 987L, 1218L, 46L) */ (! (last_1_var_1_23))))) {
		if (/* 546L, 79L, 84L, 593L, 626L, 994L, 1222L, 53L) */ (! (/* 547L, 78L, 85L, 594L, 627L, 993L, 1223L, 52L) */ ((last_1_var_1_25) == (last_1_var_1_16))))) {
		} else {
		}
	} else {
		if (last_1_var_1_23) {
		} else {
		}
	}
	if (/* 578L, 131L, 135L, 691L, 709L, 1254L) */ ((var_1_7) <= (var_1_22))) {
		if (/* 582L, 144L, 152L, 695L, 713L, 1258L) */ ((/* 583L, 140L, 153L, 696L, 714L, 1259L) */ ((var_1_6) + (var_1_12))) <= (/* 586L, 143L, 156L, 699L, 717L, 1262L) */ (max (/* 586L, 143L, 156L, 699L, 717L, 1262L) */ (var_1_13) , (var_1_14)))))) {
		}
	}
	if (/* 595L, 177L, 183L, 756L, 771L, 1271L) */ ((var_1_4) >= (/* 597L, 176L, 185L, 758L, 773L, 1273L) */ ((var_1_17) - (var_1_18))))) {
	}
	if (/* 637L, 244L, 248L, 920L, 933L, 1313L) */ ((var_1_12) == (var_1_11))) {
	}
	return /* 654L) */ ((
	/* 653L) */ ((
		/* 652L) */ ((
			/* 651L) */ ((
				/* 650L) */ ((
					/* 649L) */ ((
						/* 506L, 59L, 391L, 423L, 1182L) */ ((
							/* 507L, 4L, 8L, 392L, 424L, 1183L) */ ((
								var_1_7
							) <= (
								var_1_22
							))
						) ? (
							/* 510L, 53L, 395L, 427L, 1186L) */ ((
								/* 511L, 13L, 17L, 396L, 428L, 1187L) */ ((
									var_1_22
								) <= (
									var_1_7
								))
							) ? (
								/* 514L, 23L, 399L, 431L, 1190L) */ ((
									var_1_1
								) == (
									/* 514L, 23L, 399L, 431L, 1190L) */ ((signed char) (
										var_1_4
									))
								))
							) : (
								/* 518L, 51L, 403L, 435L, 1194L) */ ((
									/* 519L, 29L, 36L, 404L, 436L, 1195L) */ ((
										var_1_23
									) || (
										/* 521L, 28L, 38L, 406L, 438L, 1197L) */ ((
											/* 522L, 26L, 39L, 407L, 439L, 1198L) */ (- (
												var_1_11
											))
										) < (
											32.6f
										))
									))
								) ? (
									/* 525L, 45L, 410L, 442L, 1201L) */ ((
										var_1_1
									) == (
										/* 525L, 45L, 410L, 442L, 1201L) */ ((signed char) (
											64
										))
									))
								) : (
									/* 529L, 49L, 414L, 446L, 1205L) */ ((
										var_1_1
									) == (
										/* 529L, 49L, 414L, 446L, 1205L) */ ((signed char) (
											var_1_4
										))
									))
								))
							))
						) : (
							/* 533L, 57L, 418L, 450L, 1209L) */ ((
								var_1_1
							) == (
								/* 533L, 57L, 418L, 450L, 1209L) */ ((signed char) (
									var_1_4
								))
							))
						))
					) && (
						/* 538L, 124L, 587L, 620L, 1019L, 1214L, 78L) */ ((
							/* 539L, 67L, 72L, 588L, 621L, 988L, 1215L, 47L) */ ((
								last_1_var_1_23
							) || (
								/* 542L, 66L, 74L, 590L, 623L, 987L, 1218L, 46L) */ (! (
									last_1_var_1_23
								))
							))
						) ? (
							/* 545L, 101L, 592L, 625L, 1007L, 1221L, 66L) */ ((
								/* 546L, 79L, 84L, 593L, 626L, 994L, 1222L, 53L) */ (! (
									/* 547L, 78L, 85L, 594L, 627L, 993L, 1223L, 52L) */ ((
										last_1_var_1_25
									) == (
										last_1_var_1_16
									))
								))
							) ? (
								/* 552L, 95L, 597L, 630L, 1002L, 1228L, 61L) */ ((
									var_1_7
								) == (
									/* 552L, 95L, 597L, 630L, 1002L, 1228L, 61L) */ ((unsigned short int) (
										/* 555L, 94L, 600L, 633L, 1001L, 1231L, 60L) */ ((
											var_1_9
										) - (
											/* 557L, 93L, 602L, 635L, 1000L, 1233L, 59L) */ (max (
												/* 557L, 93L, 602L, 635L, 1000L, 1233L, 59L) */ (
													var_1_10
												) , (
													8
												)
											))
										))
									))
								))
							) : (
								/* 560L, 99L, 605L, 638L, 1006L, 1236L, 65L) */ ((
									var_1_7
								) == (
									/* 560L, 99L, 605L, 638L, 1006L, 1236L, 65L) */ ((unsigned short int) (
										var_1_9
									))
								))
							))
						) : (
							/* 564L, 122L, 609L, 642L, 1018L, 1240L, 77L) */ ((
								last_1_var_1_23
							) ? (
								/* 567L, 108L, 611L, 644L, 1013L, 1243L, 72L) */ ((
									var_1_7
								) == (
									/* 567L, 108L, 611L, 644L, 1013L, 1243L, 72L) */ ((unsigned short int) (
										var_1_10
									))
								))
							) : (
								/* 571L, 120L, 615L, 648L, 1017L, 1247L, 76L) */ ((
									var_1_7
								) == (
									/* 571L, 120L, 615L, 648L, 1017L, 1247L, 76L) */ ((unsigned short int) (
										var_1_9
									))
								))
							))
						))
					))
				) && (
					/* 577L, 166L, 690L, 708L, 1253L) */ ((
						/* 578L, 131L, 135L, 691L, 709L, 1254L) */ ((
							var_1_7
						) <= (
							var_1_22
						))
					) ? (
						/* 581L, 164L, 694L, 712L, 1257L) */ ((
							/* 582L, 144L, 152L, 695L, 713L, 1258L) */ ((
								/* 583L, 140L, 153L, 696L, 714L, 1259L) */ ((
									var_1_6
								) + (
									var_1_12
								))
							) <= (
								/* 586L, 143L, 156L, 699L, 717L, 1262L) */ (max (
									/* 586L, 143L, 156L, 699L, 717L, 1262L) */ (
										var_1_13
									) , (
										var_1_14
									)
								))
							))
						) ? (
							/* 589L, 162L, 702L, 720L, 1265L) */ ((
								var_1_11
							) == (
								/* 589L, 162L, 702L, 720L, 1265L) */ ((float) (
									var_1_15
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
				/* 594L, 197L, 755L, 770L, 1270L) */ ((
					/* 595L, 177L, 183L, 756L, 771L, 1271L) */ ((
						var_1_4
					) >= (
						/* 597L, 176L, 185L, 758L, 773L, 1273L) */ ((
							var_1_17
						) - (
							var_1_18
						))
					))
				) ? (
					/* 600L, 195L, 761L, 776L, 1276L) */ ((
						var_1_16
					) == (
						/* 600L, 195L, 761L, 776L, 1276L) */ ((signed char) (
							/* 603L, 194L, 764L, 779L, 1279L) */ ((
								var_1_19
							) + (
								/* 605L, 193L, 766L, 781L, 1281L) */ ((
									var_1_20
								) - (
									var_1_21
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 613L, 211L, 819L, 834L, 1289L) */ ((
				var_1_22
			) == (
				/* 613L, 211L, 819L, 834L, 1289L) */ ((signed short int) (
					/* 616L, 210L, 822L, 837L, 1292L) */ (min (
						/* 616L, 210L, 822L, 837L, 1292L) */ (
							var_1_19
						) , (
							/* 618L, 209L, 824L, 839L, 1294L) */ (min (
								/* 618L, 209L, 824L, 839L, 1294L) */ (
									var_1_20
								) , (
									/* 620L, 208L, 826L, 841L, 1296L) */ ((
										var_1_21
									) - (
										var_1_18
									))
								)
							))
						)
					))
				))
			))
		))
	) && (
		/* 627L, 231L, 872L, 884L, 1303L) */ ((
			var_1_23
		) == (
			/* 627L, 231L, 872L, 884L, 1303L) */ ((unsigned char) (
				/* 630L, 230L, 875L, 887L, 1306L) */ ((
					var_1_8
				) || (
					/* 632L, 229L, 877L, 889L, 1308L) */ ((
						var_1_5
					) || (
						var_1_24
					))
				))
			))
		))
	))
) && (
	/* 636L, 260L, 919L, 932L, 1312L) */ ((
		/* 637L, 244L, 248L, 920L, 933L, 1313L) */ ((
			var_1_12
		) == (
			var_1_11
		))
	) ? (
		/* 640L, 258L, 923L, 936L, 1316L) */ ((
			var_1_25
		) == (
			/* 640L, 258L, 923L, 936L, 1316L) */ ((unsigned long int) (
				/* 643L, 257L, 926L, 939L, 1319L) */ ((
					/* 644L, 255L, 927L, 940L, 1320L) */ ((
						var_1_26
					) - (
						var_1_10
					))
				) + (
					var_1_18
				))
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
