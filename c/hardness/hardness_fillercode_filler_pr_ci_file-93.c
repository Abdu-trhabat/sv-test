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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93Filler_PR_CI.c", 13, "reach_error"); }
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
float var_1_1 = 0.5;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 64;
signed long int var_1_4 = 2;
float var_1_5 = 0.0;
float var_1_6 = 4.2;
float var_1_7 = 31.25;
float var_1_8 = 1.375;
unsigned short int var_1_9 = 32;
unsigned char var_1_10 = 1;
float var_1_11 = 0.625;
unsigned short int var_1_12 = 1;
float var_1_13 = -0.25;
signed short int var_1_14 = 4;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 8;
signed short int var_1_18 = 5;
signed short int var_1_19 = 128;
signed long int var_1_20 = -50;
signed short int var_1_21 = -16;
signed short int var_1_22 = 16;
signed short int var_1_23 = 32;
signed short int var_1_24 = 2;
signed short int var_1_25 = -4;
float var_1_26 = 0.2;
double var_1_27 = -0.375;
double var_1_28 = 255.5;
unsigned char var_1_33 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 25;
signed short int var_1_46 = 16;
unsigned short int var_1_47 = 128;
signed char var_1_48 = 2;
signed char var_1_49 = 8;
signed char var_1_50 = 100;
signed char var_1_51 = -50;
double var_1_52 = 31.75;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch93Filler_PR_CI
	signed long int stepLocal_2 = /* 941L, 20L, 24L, 399L, 436L) */ ((var_1_3) - (var_1_2));
	signed long int stepLocal_1 = var_1_4;
	unsigned short int stepLocal_0 = var_1_3;
	/* 975L, 65L, 390L, 427L) */ if (/* 948L, 6L, 7L, 391L, 428L) */ ((/* 947L, 4L, 8L, 392L, 429L) */ ((var_1_2) + (var_1_3))) < (stepLocal_1))) {
		/* 970L, 59L, 396L, 433L) */ if (/* 950L, 21L, 22L, 397L, 434L) */ ((var_1_4) <= (stepLocal_2))) {
			/* 961L, 49L, 402L, 439L) */ if (/* 952L, 34L, 35L, 403L, 440L) */ ((var_1_4) < (stepLocal_0))) {
				/* 960L, 48L, 406L, 443L) */ var_1_1 = (
					/* 959L, 47L, 409L, 446L) */ ((
						/* 957L, 45L, 410L, 447L) */ ((
							var_1_5
						) - (
							var_1_6
						))
					) - (
						var_1_7
					))
				);
			}
		} else {
			/* 969L, 58L, 414L, 451L) */ var_1_1 = (
				/* 968L, 57L, 417L, 454L) */ ((
					/* 966L, 55L, 418L, 455L) */ (min (
						/* 966L, 55L, 418L, 455L) */ (
							var_1_6
						) , (
							var_1_8
						)
					))
				) + (
					3.25f
				))
			);
		}
	} else {
		/* 974L, 64L, 422L, 459L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: CodeObject5
	/* 368L, 145L) */ var_1_46 = (
		var_1_9
	);


	// From: CodeObject8
	/* 394L, 255L) */ if (/* 395L, 182L, 183L) */ ((var_1_28) > (var_1_11))) {
		/* 398L, 249L) */ if (/* 399L, 191L, 192L) */ ((var_1_4) <= (var_1_12))) {
			/* 402L, 243L) */ if (/* 403L, 204L, 205L) */ ((/* 404L, 202L, 206L) */ ((/* 405L, 200L, 207L) */ ((var_1_5) - (var_1_7))) / (var_1_52))) > (var_1_8))) {
				/* 410L, 222L) */ var_1_51 = (
					var_1_49
				);
			} else {
				/* 414L, 242L) */ var_1_51 = (
					var_1_50
				);
			}
		} else {
			/* 418L, 248L) */ var_1_51 = (
				var_1_49
			);
		}
	} else {
		/* 422L, 254L) */ var_1_51 = (
			var_1_50
		);
	}


	// From: Req2Batch93Filler_PR_CI
	unsigned char stepLocal_4 = /* 989L, 96L, 100L, 549L, 572L) */ ((var_1_1) != (var_1_11));
	unsigned char stepLocal_3 = /* 982L, 77L, 81L, 541L, 564L) */ ((var_1_1) < (/* 984L, 76L, 83L, 543L, 566L) */ ((var_1_8) / (var_1_11))));
	/* 1006L, 118L, 538L, 561L) */ if (/* 994L, 78L, 79L, 539L, 562L) */ ((var_1_10) || (stepLocal_3))) {
		/* 1001L, 112L, 546L, 569L) */ if (/* 996L, 97L, 98L, 547L, 570L) */ ((var_1_10) || (stepLocal_4))) {
			/* 1000L, 111L, 552L, 575L) */ var_1_9 = (
				8
			);
		}
	} else {
		/* 1005L, 117L, 556L, 579L) */ var_1_9 = (
			var_1_12
		);
	}


	// From: CodeObject1
	/* 296L, 59L) */ if (/* 297L, 6L, 7L) */ ((/* 298L, 4L, 8L) */ (abs (/* 299L, 3L, 9L) */ (- (var_1_27))))) <= (var_1_28))) {
		/* 302L, 51L) */ if (/* 303L, 24L, 25L) */ ((/* 304L, 20L, 26L) */ (abs (/* 305L, 19L, 27L) */ (min (/* 305L, 19L, 27L) */ (var_1_28) , (25.6)))))) >= (/* 308L, 23L, 30L) */ (abs (/* 309L, 22L, 31L) */ (- (var_1_27))))))) {
			/* 311L, 50L) */ var_1_26 = (
				/* 314L, 49L) */ (max (
					/* 314L, 49L) */ (
						/* 315L, 45L) */ ((
							var_1_5
						) - (
							var_1_7
						))
					) , (
						/* 318L, 48L) */ (max (
							/* 318L, 48L) */ (
								var_1_8
							) , (
								var_1_7
							)
						))
					)
				))
			);
		}
	} else {
		/* 321L, 58L) */ var_1_26 = (
			/* 324L, 57L) */ ((
				8.25f
			) - (
				var_1_5
			))
		);
	}


	// From: CodeObject2
	/* 327L, 75L) */ if (var_1_16) {
		/* 329L, 74L) */ var_1_33 = (
			/* 332L, 73L) */ ((
				/* 333L, 71L) */ ((
					var_1_35
				) && (
					/* 335L, 70L) */ (! (
						var_1_36
					))
				))
			) && (
				var_1_37
			))
		);
	}


	// From: CodeObject4
	/* 347L, 138L) */ if (/* 348L, 98L, 99L) */ ((/* 349L, 96L, 100L) */ ((var_1_3) + (/* 351L, 95L, 102L) */ (min (/* 351L, 95L, 102L) */ (var_1_19) , (var_1_17)))))) <= (var_1_4))) {
		/* 355L, 136L) */ if (/* 356L, 118L, 119L) */ ((var_1_7) == (/* 358L, 117L, 121L) */ (max (/* 358L, 117L, 121L) */ (/* 359L, 115L, 122L) */ (abs (var_1_7))) , (var_1_28)))))) {
			/* 362L, 135L) */ var_1_40 = (
				/* 365L, 134L) */ (abs (
					var_1_12
				))
			);
		}
	}


	// From: Req3Batch93Filler_PR_CI
	/* 1011L, 141L, 630L, 647L) */ if (var_1_10) {
		/* 1013L, 132L, 632L, 649L) */ var_1_13 = (
			/* 1016L, 131L, 635L, 652L) */ (max (
				/* 1016L, 131L, 635L, 652L) */ (
					var_1_7
				) , (
					var_1_5
				)
			))
		);
	} else {
		/* 1019L, 140L, 638L, 655L) */ var_1_13 = (
			/* 1022L, 139L, 641L, 658L) */ (min (
				/* 1022L, 139L, 641L, 658L) */ (
					10.15f
				) , (
					/* 1024L, 138L, 643L, 660L) */ ((
						var_1_6
					) + (
						var_1_8
					))
				)
			))
		);
	}


	// From: Req4Batch93Filler_PR_CI
	unsigned char stepLocal_5 = var_1_16;
	/* 1044L, 173L, 698L, 714L) */ if (/* 1035L, 152L, 153L, 699L, 715L) */ ((/* 1034L, 150L, 154L, 700L, 716L) */ (! (/* 1033L, 149L, 155L, 701L, 717L) */ ((var_1_10) || (var_1_15))))) || (stepLocal_5))) {
		/* 1043L, 172L, 705L, 721L) */ var_1_14 = (
			/* 1042L, 171L, 708L, 724L) */ (max (
				/* 1042L, 171L, 708L, 724L) */ (
					var_1_17
				) , (
					/* 1041L, 170L, 710L, 726L) */ ((
						var_1_18
					) - (
						var_1_19
					))
				)
			))
		);
	}


	// From: Req5Batch93Filler_PR_CI
	/* 1048L, 188L, 762L, 771L) */ if (var_1_16) {
		/* 1050L, 187L, 764L, 773L) */ var_1_20 = (
			/* 1053L, 186L, 767L, 776L) */ ((
				var_1_9
			) - (
				50
			))
		);
	}


	// From: CodeObject7
	/* 377L, 176L) */ if (/* 378L, 160L, 161L) */ ((var_1_27) >= (var_1_7))) {
		/* 381L, 175L) */ var_1_48 = (
			/* 384L, 174L) */ ((
				var_1_49
			) - (
				/* 386L, 173L) */ (max (
					/* 386L, 173L) */ (
						var_1_50
					) , (
						/* 388L, 172L) */ (abs (
							5
						))
					)
				))
			))
		);
	}


	// From: Req6Batch93Filler_PR_CI
	/* 1058L, 205L, 799L, 811L) */ if (var_1_15) {
		/* 1060L, 204L, 801L, 813L) */ var_1_21 = (
			/* 1063L, 203L, 804L, 816L) */ ((
				/* 1064L, 201L, 805L, 817L) */ ((
					var_1_22
				) + (
					25
				))
			) - (
				var_1_19
			))
		);
	}


	// From: Req7Batch93Filler_PR_CI
	/* 1069L, 238L, 846L, 868L) */ if (var_1_10) {
		/* 1071L, 224L, 848L, 870L) */ var_1_23 = (
			/* 1074L, 223L, 851L, 873L) */ ((
				var_1_22
			) + (
				/* 1076L, 222L, 853L, 875L) */ ((
					/* 1077L, 220L, 854L, 876L) */ (abs (
						var_1_24
					))
				) + (
					var_1_25
				))
			))
		);
	} else {
		/* 1080L, 236L, 857L, 879L) */ if (var_1_16) {
			/* 1082L, 231L, 859L, 881L) */ var_1_23 = (
				var_1_24
			);
		} else {
			/* 1086L, 235L, 863L, 885L) */ var_1_23 = (
				var_1_17
			);
		}
	}


	// From: CodeObject3
	/* 340L, 85L) */ var_1_38 = (
		/* 343L, 84L) */ (! (
			/* 344L, 83L) */ ((
				var_1_36
			) && (
				var_1_39
			))
		))
	);


	// From: CodeObject6
	/* 373L, 153L) */ var_1_47 = (
		var_1_12
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= -32767);
	assume_abort_if_not(var_1_17 <= 32766);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -8192);
	assume_abort_if_not(var_1_24 <= 8192);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -8191);
	assume_abort_if_not(var_1_25 <= 8191);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -1);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 427L, 6L, 12L, 465L, 502L, 1092L) */ ((/* 428L, 4L, 13L, 466L, 503L, 1093L) */ ((var_1_2) + (var_1_3))) < (var_1_4))) {
		if (/* 433L, 21L, 27L, 471L, 508L, 1098L) */ ((var_1_4) <= (/* 435L, 20L, 29L, 473L, 510L, 1100L) */ ((var_1_3) - (var_1_2))))) {
			if (/* 439L, 34L, 38L, 477L, 514L, 1104L) */ ((var_1_4) < (var_1_3))) {
			}
		} else {
		}
	} else {
	}
	if (/* 464L, 78L, 86L, 585L, 608L, 1129L) */ ((var_1_10) || (/* 466L, 77L, 88L, 587L, 610L, 1131L) */ ((var_1_1) < (/* 468L, 76L, 90L, 589L, 612L, 1133L) */ ((var_1_8) / (var_1_11))))))) {
		if (/* 472L, 97L, 103L, 593L, 616L, 1137L) */ ((var_1_10) || (/* 474L, 96L, 105L, 595L, 618L, 1139L) */ ((var_1_1) != (var_1_11))))) {
		}
	} else {
	}
	if (var_1_10) {
	} else {
	}
	if (/* 504L, 152L, 159L, 731L, 747L, 1169L) */ ((/* 505L, 150L, 160L, 732L, 748L, 1170L) */ (! (/* 506L, 149L, 161L, 733L, 749L, 1171L) */ ((var_1_10) || (var_1_15))))) || (var_1_16))) {
	}
	if (var_1_16) {
	}
	if (var_1_15) {
	}
	if (var_1_10) {
	} else {
		if (var_1_16) {
		} else {
		}
	}
	return /* 567L) */ ((
	/* 566L) */ ((
		/* 565L) */ ((
			/* 564L) */ ((
				/* 563L) */ ((
					/* 562L) */ ((
						/* 426L, 66L, 464L, 501L, 1091L) */ ((
							/* 427L, 6L, 12L, 465L, 502L, 1092L) */ ((
								/* 428L, 4L, 13L, 466L, 503L, 1093L) */ ((
									var_1_2
								) + (
									var_1_3
								))
							) < (
								var_1_4
							))
						) ? (
							/* 432L, 60L, 470L, 507L, 1097L) */ ((
								/* 433L, 21L, 27L, 471L, 508L, 1098L) */ ((
									var_1_4
								) <= (
									/* 435L, 20L, 29L, 473L, 510L, 1100L) */ ((
										var_1_3
									) - (
										var_1_2
									))
								))
							) ? (
								/* 438L, 50L, 476L, 513L, 1103L) */ ((
									/* 439L, 34L, 38L, 477L, 514L, 1104L) */ ((
										var_1_4
									) < (
										var_1_3
									))
								) ? (
									/* 442L, 48L, 480L, 517L, 1107L) */ ((
										var_1_1
									) == (
										/* 442L, 48L, 480L, 517L, 1107L) */ ((float) (
											/* 445L, 47L, 483L, 520L, 1110L) */ ((
												/* 446L, 45L, 484L, 521L, 1111L) */ ((
													var_1_5
												) - (
													var_1_6
												))
											) - (
												var_1_7
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 450L, 58L, 488L, 525L, 1115L) */ ((
									var_1_1
								) == (
									/* 450L, 58L, 488L, 525L, 1115L) */ ((float) (
										/* 453L, 57L, 491L, 528L, 1118L) */ ((
											/* 454L, 55L, 492L, 529L, 1119L) */ (min (
												/* 454L, 55L, 492L, 529L, 1119L) */ (
													var_1_6
												) , (
													var_1_8
												)
											))
										) + (
											3.25f
										))
									))
								))
							))
						) : (
							/* 458L, 64L, 496L, 533L, 1123L) */ ((
								var_1_1
							) == (
								/* 458L, 64L, 496L, 533L, 1123L) */ ((float) (
									var_1_8
								))
							))
						))
					) && (
						/* 463L, 119L, 584L, 607L, 1128L) */ ((
							/* 464L, 78L, 86L, 585L, 608L, 1129L) */ ((
								var_1_10
							) || (
								/* 466L, 77L, 88L, 587L, 610L, 1131L) */ ((
									var_1_1
								) < (
									/* 468L, 76L, 90L, 589L, 612L, 1133L) */ ((
										var_1_8
									) / (
										var_1_11
									))
								))
							))
						) ? (
							/* 471L, 113L, 592L, 615L, 1136L) */ ((
								/* 472L, 97L, 103L, 593L, 616L, 1137L) */ ((
									var_1_10
								) || (
									/* 474L, 96L, 105L, 595L, 618L, 1139L) */ ((
										var_1_1
									) != (
										var_1_11
									))
								))
							) ? (
								/* 477L, 111L, 598L, 621L, 1142L) */ ((
									var_1_9
								) == (
									/* 477L, 111L, 598L, 621L, 1142L) */ ((unsigned short int) (
										8
									))
								))
							) : (
								1
							))
						) : (
							/* 481L, 117L, 602L, 625L, 1146L) */ ((
								var_1_9
							) == (
								/* 481L, 117L, 602L, 625L, 1146L) */ ((unsigned short int) (
									var_1_12
								))
							))
						))
					))
				) && (
					/* 486L, 142L, 664L, 681L, 1151L) */ ((
						var_1_10
					) ? (
						/* 488L, 132L, 666L, 683L, 1153L) */ ((
							var_1_13
						) == (
							/* 488L, 132L, 666L, 683L, 1153L) */ ((float) (
								/* 491L, 131L, 669L, 686L, 1156L) */ (max (
									/* 491L, 131L, 669L, 686L, 1156L) */ (
										var_1_7
									) , (
										var_1_5
									)
								))
							))
						))
					) : (
						/* 494L, 140L, 672L, 689L, 1159L) */ ((
							var_1_13
						) == (
							/* 494L, 140L, 672L, 689L, 1159L) */ ((float) (
								/* 497L, 139L, 675L, 692L, 1162L) */ (min (
									/* 497L, 139L, 675L, 692L, 1162L) */ (
										10.15f
									) , (
										/* 499L, 138L, 677L, 694L, 1164L) */ ((
											var_1_6
										) + (
											var_1_8
										))
									)
								))
							))
						))
					))
				))
			) && (
				/* 503L, 174L, 730L, 746L, 1168L) */ ((
					/* 504L, 152L, 159L, 731L, 747L, 1169L) */ ((
						/* 505L, 150L, 160L, 732L, 748L, 1170L) */ (! (
							/* 506L, 149L, 161L, 733L, 749L, 1171L) */ ((
								var_1_10
							) || (
								var_1_15
							))
						))
					) || (
						var_1_16
					))
				) ? (
					/* 510L, 172L, 737L, 753L, 1175L) */ ((
						var_1_14
					) == (
						/* 510L, 172L, 737L, 753L, 1175L) */ ((signed short int) (
							/* 513L, 171L, 740L, 756L, 1178L) */ (max (
								/* 513L, 171L, 740L, 756L, 1178L) */ (
									var_1_17
								) , (
									/* 515L, 170L, 742L, 758L, 1180L) */ ((
										var_1_18
									) - (
										var_1_19
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
			/* 519L, 189L, 780L, 789L, 1184L) */ ((
				var_1_16
			) ? (
				/* 521L, 187L, 782L, 791L, 1186L) */ ((
					var_1_20
				) == (
					/* 521L, 187L, 782L, 791L, 1186L) */ ((signed long int) (
						/* 524L, 186L, 785L, 794L, 1189L) */ ((
							var_1_9
						) - (
							50
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 529L, 206L, 823L, 835L, 1194L) */ ((
			var_1_15
		) ? (
			/* 531L, 204L, 825L, 837L, 1196L) */ ((
				var_1_21
			) == (
				/* 531L, 204L, 825L, 837L, 1196L) */ ((signed short int) (
					/* 534L, 203L, 828L, 840L, 1199L) */ ((
						/* 535L, 201L, 829L, 841L, 1200L) */ ((
							var_1_22
						) + (
							25
						))
					) - (
						var_1_19
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 540L, 239L, 890L, 912L, 1205L) */ ((
		var_1_10
	) ? (
		/* 542L, 224L, 892L, 914L, 1207L) */ ((
			var_1_23
		) == (
			/* 542L, 224L, 892L, 914L, 1207L) */ ((signed short int) (
				/* 545L, 223L, 895L, 917L, 1210L) */ ((
					var_1_22
				) + (
					/* 547L, 222L, 897L, 919L, 1212L) */ ((
						/* 548L, 220L, 898L, 920L, 1213L) */ (abs (
							var_1_24
						))
					) + (
						var_1_25
					))
				))
			))
		))
	) : (
		/* 551L, 237L, 901L, 923L, 1216L) */ ((
			var_1_16
		) ? (
			/* 553L, 231L, 903L, 925L, 1218L) */ ((
				var_1_23
			) == (
				/* 553L, 231L, 903L, 925L, 1218L) */ ((signed short int) (
					var_1_24
				))
			))
		) : (
			/* 557L, 235L, 907L, 929L, 1222L) */ ((
				var_1_23
			) == (
				/* 557L, 235L, 907L, 929L, 1222L) */ ((signed short int) (
					var_1_17
				))
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
