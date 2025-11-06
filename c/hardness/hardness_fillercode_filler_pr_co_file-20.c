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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch20Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 32;
signed long int var_1_7 = 128;
unsigned short int var_1_8 = 100;
float var_1_9 = 255.75;
signed char var_1_10 = 64;
signed char var_1_11 = 32;
signed char var_1_12 = 4;
float var_1_13 = 0.0;
float var_1_14 = 7.25;
float var_1_15 = 8.125;
float var_1_16 = 24.5;
signed short int var_1_17 = -256;
double var_1_18 = 31.5;
double var_1_20 = 127.5;
float var_1_21 = 255.2;
float var_1_22 = 5.5;
signed long int var_1_23 = -8;
double var_1_24 = 0.5;
unsigned short int var_1_25 = 200;
unsigned char var_1_26 = 0;
float var_1_27 = 127.9;
double var_1_28 = 1.8;
unsigned char var_1_29 = 1;
unsigned short int var_1_31 = 8;
signed long int var_1_33 = 1000;
unsigned short int var_1_34 = 64;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 8;
unsigned short int var_1_38 = 2;
unsigned char var_1_39 = 1;
unsigned short int var_1_40 = 5;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch20Filler_PR_CO
	/* 967L, 17L, 281L, 296L) */ if (var_1_2) {
		/* 969L, 10L, 283L, 298L) */ var_1_1 = (
			/* 972L, 9L, 286L, 301L) */ ((
				var_1_3
			) - (
				var_1_4
			))
		);
	} else {
		/* 975L, 16L, 289L, 304L) */ var_1_1 = (
			/* 978L, 15L, 292L, 307L) */ ((
				var_1_4
			) + (
				var_1_5
			))
		);
	}


	// From: CodeObject1
	/* 249L, 5L) */ var_1_21 = (
		var_1_22
	);


	// From: Req2Batch20Filler_PR_CO
	signed long int stepLocal_0 = /* 983L, 28L, 36L, 343L, 364L) */ ((64) + (/* 985L, 27L, 38L, 345L, 366L) */ ((var_1_5) / (var_1_3))));
	/* 1003L, 65L, 341L, 362L) */ if (/* 994L, 34L, 35L, 342L, 363L) */ ((stepLocal_0) != (/* 993L, 33L, 41L, 348L, 369L) */ ((var_1_1) - (/* 992L, 32L, 43L, 350L, 371L) */ ((var_1_4) + (var_1_7))))))) {
		/* 998L, 60L, 353L, 374L) */ var_1_6 = (
			var_1_4
		);
	} else {
		/* 1002L, 64L, 357L, 378L) */ var_1_6 = (
			128
		);
	}


	// From: CodeObject7
	/* 383L, 212L) */ if (/* 384L, 191L, 192L) */ ((var_1_26) || (/* 386L, 190L, 194L) */ ((var_1_8) <= (/* 388L, 189L, 196L) */ ((var_1_35) / (var_1_40))))))) {
		/* 391L, 211L) */ var_1_39 = (
			/* 394L, 210L) */ ((
				var_1_41
			) || (
				var_1_42
			))
		);
	}


	// From: CodeObject8
	/* 397L, 246L) */ if (/* 398L, 222L, 223L) */ ((/* 399L, 220L, 224L) */ ((var_1_33) + (/* 401L, 219L, 226L) */ (min (/* 401L, 219L, 226L) */ (var_1_35) , (var_1_36)))))) <= (var_1_8))) {
		/* 405L, 244L) */ if (var_1_29) {
			/* 407L, 243L) */ var_1_43 = (
				var_1_36
			);
		}
	}


	// From: Req3Batch20Filler_PR_CO
	signed long int stepLocal_1 = /* 1008L, 73L, 79L, 541L, 560L) */ ((var_1_6) + (var_1_1));
	/* 1026L, 102L, 539L, 558L) */ if (/* 1015L, 77L, 78L, 540L, 559L) */ ((stepLocal_1) >= (/* 1014L, 76L, 82L, 544L, 563L) */ ((var_1_3) - (var_1_5))))) {
		/* 1021L, 97L, 547L, 566L) */ var_1_8 = (
			/* 1020L, 96L, 550L, 569L) */ (max (
				/* 1020L, 96L, 550L, 569L) */ (
					var_1_1
				) , (
					var_1_3
				)
			))
		);
	} else {
		/* 1025L, 101L, 553L, 572L) */ var_1_8 = (
			var_1_1
		);
	}


	// From: CodeObject6
	/* 343L, 181L) */ if (/* 344L, 117L, 118L) */ ((var_1_29) || (/* 346L, 116L, 120L) */ ((var_1_15) <= (var_1_28))))) {
		/* 349L, 170L) */ if (/* 350L, 136L, 137L) */ ((/* 351L, 132L, 138L) */ ((var_1_8) | (/* 353L, 131L, 140L) */ ((var_1_23) * (var_1_8))))) == (/* 356L, 135L, 143L) */ (min (/* 356L, 135L, 143L) */ (var_1_33) , (-32)))))) {
			/* 359L, 161L) */ var_1_31 = (
				/* 362L, 160L) */ (max (
					/* 362L, 160L) */ (
						/* 363L, 158L) */ (abs (
							var_1_34
						))
					) , (
						var_1_35
					)
				))
			);
		} else {
			/* 366L, 169L) */ var_1_31 = (
				/* 369L, 168L) */ (abs (
					/* 370L, 167L) */ (min (
						/* 370L, 167L) */ (
							var_1_34
						) , (
							/* 372L, 166L) */ (abs (
								var_1_35
							))
						)
					))
				))
			);
		}
	} else {
		/* 374L, 180L) */ var_1_31 = (
			/* 377L, 179L) */ ((
				var_1_36
			) + (
				/* 379L, 178L) */ ((
					/* 380L, 176L) */ (abs (
						var_1_37
					))
				) + (
					var_1_38
				))
			))
		);
	}


	// From: Req4Batch20Filler_PR_CO
	/* 1031L, 147L, 616L, 640L) */ if (/* 1032L, 116L, 117L, 617L, 641L) */ ((/* 1033L, 114L, 118L, 618L, 642L) */ ((/* 1034L, 110L, 119L, 619L, 643L) */ ((var_1_10) - (var_1_11))) - (/* 1037L, 113L, 122L, 622L, 646L) */ ((16) + (var_1_12))))) != (var_1_5))) {
		/* 1041L, 142L, 626L, 650L) */ var_1_9 = (
			/* 1044L, 141L, 629L, 653L) */ ((
				64.8f
			) - (
				/* 1046L, 140L, 631L, 655L) */ ((
					var_1_13
				) - (
					var_1_14
				))
			))
		);
	} else {
		/* 1049L, 146L, 634L, 658L) */ var_1_9 = (
			var_1_13
		);
	}


	// From: Req5Batch20Filler_PR_CO
	/* 1057L, 160L, 714L, 724L) */ var_1_15 = (
		/* 1060L, 159L, 717L, 727L) */ ((
			var_1_14
		) + (
			var_1_16
		))
	);


	// From: CodeObject4
	/* 263L, 57L) */ if (var_1_26) {
		/* 265L, 55L) */ if (/* 266L, 34L, 35L) */ ((var_1_15) > (/* 268L, 33L, 37L) */ ((var_1_18) / (/* 270L, 32L, 39L) */ (abs (var_1_27))))))) {
			/* 272L, 50L) */ var_1_25 = (
				100
			);
		} else {
			/* 276L, 54L) */ var_1_25 = (
				10
			);
		}
	}


	// From: Req6Batch20Filler_PR_CO
	/* 1064L, 219L, 751L, 780L) */ if (var_1_2) {
		/* 1066L, 179L, 753L, 782L) */ var_1_17 = (
			/* 1069L, 178L, 756L, 785L) */ ((
				var_1_3
			) + (
				var_1_12
			))
		);
	} else {
		/* 1072L, 217L, 759L, 788L) */ if (/* 1073L, 188L, 189L, 760L, 789L) */ ((var_1_14) == (/* 1075L, 187L, 191L, 762L, 791L) */ ((/* 1076L, 183L, 192L, 763L, 792L) */ (min (/* 1076L, 183L, 192L, 763L, 792L) */ (99.8f) , (var_1_16)))) / (/* 1079L, 186L, 195L, 766L, 795L) */ (max (/* 1079L, 186L, 195L, 766L, 795L) */ (255.6f) , (var_1_13)))))))) {
			/* 1082L, 210L, 769L, 798L) */ var_1_17 = (
				var_1_4
			);
		} else {
			/* 1086L, 216L, 773L, 802L) */ var_1_17 = (
				/* 1089L, 215L, 776L, 805L) */ ((
					var_1_5
				) - (
					var_1_3
				))
			);
		}
	}


	// From: CodeObject2
	/* 254L, 13L) */ var_1_23 = (
		-16
	);


	// From: CodeObject5
	/* 280L, 109L) */ if (/* 281L, 63L, 64L) */ ((var_1_18) > (var_1_22))) {
		/* 284L, 73L) */ var_1_28 = (
			var_1_22
		);
	} else {
		/* 288L, 107L) */ if (/* 289L, 84L, 85L) */ ((/* 290L, 79L, 86L) */ ((var_1_26) || (var_1_29))) || (/* 293L, 83L, 89L) */ ((/* 294L, 81L, 90L) */ (- (var_1_18))) <= (var_1_18))))) {
			/* 297L, 106L) */ var_1_28 = (
				/* 300L, 105L) */ (min (
					/* 300L, 105L) */ (
						9.99999999739E8
					) , (
						var_1_22
					)
				))
			);
		}
	}


	// From: Req7Batch20Filler_PR_CO
	/* 1094L, 275L, 868L, 893L) */ if (/* 1095L, 233L, 234L, 869L, 894L) */ ((/* 1096L, 229L, 235L, 870L, 895L) */ ((var_1_2) || (/* 1098L, 228L, 237L, 872L, 897L) */ ((var_1_16) > (var_1_13))))) && (/* 1101L, 232L, 240L, 875L, 900L) */ ((var_1_3) < (var_1_8))))) {
		/* 1104L, 269L, 878L, 903L) */ if (/* 1105L, 256L, 257L, 879L, 904L) */ ((/* 1106L, 254L, 258L, 880L, 905L) */ (- (var_1_8))) > (var_1_5))) {
			/* 1109L, 268L, 883L, 908L) */ var_1_18 = (
				var_1_20
			);
		}
	} else {
		/* 1113L, 274L, 887L, 912L) */ var_1_18 = (
			1.000000075E7
		);
	}


	// From: CodeObject3
	/* 259L, 21L) */ var_1_24 = (
		var_1_22
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 127);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 64);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16384);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	} else {
	}
	if (/* 427L, 34L, 46L, 384L, 405L, 1134L) */ ((/* 428L, 28L, 47L, 385L, 406L, 1135L) */ ((64) + (/* 430L, 27L, 49L, 387L, 408L, 1137L) */ ((var_1_5) / (var_1_3))))) != (/* 433L, 33L, 52L, 390L, 411L, 1140L) */ ((var_1_1) - (/* 435L, 32L, 54L, 392L, 413L, 1142L) */ ((var_1_4) + (var_1_7))))))) {
	} else {
	}
	if (/* 448L, 77L, 85L, 578L, 597L, 1155L) */ ((/* 449L, 73L, 86L, 579L, 598L, 1156L) */ ((var_1_6) + (var_1_1))) >= (/* 452L, 76L, 89L, 582L, 601L, 1159L) */ ((var_1_3) - (var_1_5))))) {
	} else {
	}
	if (/* 468L, 116L, 126L, 665L, 689L, 1175L) */ ((/* 469L, 114L, 127L, 666L, 690L, 1176L) */ ((/* 470L, 110L, 128L, 667L, 691L, 1177L) */ ((var_1_10) - (var_1_11))) - (/* 473L, 113L, 131L, 670L, 694L, 1180L) */ ((16) + (var_1_12))))) != (var_1_5))) {
	} else {
	}
	if (var_1_2) {
	} else {
		if (/* 509L, 188L, 198L, 818L, 847L, 1216L) */ ((var_1_14) == (/* 511L, 187L, 200L, 820L, 849L, 1218L) */ ((/* 512L, 183L, 201L, 821L, 850L, 1219L) */ (min (/* 512L, 183L, 201L, 821L, 850L, 1219L) */ (99.8f) , (var_1_16)))) / (/* 515L, 186L, 204L, 824L, 853L, 1222L) */ (max (/* 515L, 186L, 204L, 824L, 853L, 1222L) */ (255.6f) , (var_1_13)))))))) {
		} else {
		}
	}
	if (/* 531L, 233L, 243L, 919L, 944L, 1238L) */ ((/* 532L, 229L, 244L, 920L, 945L, 1239L) */ ((var_1_2) || (/* 534L, 228L, 246L, 922L, 947L, 1241L) */ ((var_1_16) > (var_1_13))))) && (/* 537L, 232L, 249L, 925L, 950L, 1244L) */ ((var_1_3) < (var_1_8))))) {
		if (/* 541L, 256L, 261L, 929L, 954L, 1248L) */ ((/* 542L, 254L, 262L, 930L, 955L, 1249L) */ (- (var_1_8))) > (var_1_5))) {
		}
	} else {
	}
	return /* 559L) */ ((
	/* 558L) */ ((
		/* 557L) */ ((
			/* 556L) */ ((
				/* 555L) */ ((
					/* 554L) */ ((
						/* 411L, 18L, 311L, 326L, 1118L) */ ((
							var_1_2
						) ? (
							/* 413L, 10L, 313L, 328L, 1120L) */ ((
								var_1_1
							) == (
								/* 413L, 10L, 313L, 328L, 1120L) */ ((unsigned char) (
									/* 416L, 9L, 316L, 331L, 1123L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								))
							))
						) : (
							/* 419L, 16L, 319L, 334L, 1126L) */ ((
								var_1_1
							) == (
								/* 419L, 16L, 319L, 334L, 1126L) */ ((unsigned char) (
									/* 422L, 15L, 322L, 337L, 1129L) */ ((
										var_1_4
									) + (
										var_1_5
									))
								))
							))
						))
					) && (
						/* 426L, 66L, 383L, 404L, 1133L) */ ((
							/* 427L, 34L, 46L, 384L, 405L, 1134L) */ ((
								/* 428L, 28L, 47L, 385L, 406L, 1135L) */ ((
									64
								) + (
									/* 430L, 27L, 49L, 387L, 408L, 1137L) */ ((
										var_1_5
									) / (
										var_1_3
									))
								))
							) != (
								/* 433L, 33L, 52L, 390L, 411L, 1140L) */ ((
									var_1_1
								) - (
									/* 435L, 32L, 54L, 392L, 413L, 1142L) */ ((
										var_1_4
									) + (
										var_1_7
									))
								))
							))
						) ? (
							/* 438L, 60L, 395L, 416L, 1145L) */ ((
								var_1_6
							) == (
								/* 438L, 60L, 395L, 416L, 1145L) */ ((unsigned char) (
									var_1_4
								))
							))
						) : (
							/* 442L, 64L, 399L, 420L, 1149L) */ ((
								var_1_6
							) == (
								/* 442L, 64L, 399L, 420L, 1149L) */ ((unsigned char) (
									128
								))
							))
						))
					))
				) && (
					/* 447L, 103L, 577L, 596L, 1154L) */ ((
						/* 448L, 77L, 85L, 578L, 597L, 1155L) */ ((
							/* 449L, 73L, 86L, 579L, 598L, 1156L) */ ((
								var_1_6
							) + (
								var_1_1
							))
						) >= (
							/* 452L, 76L, 89L, 582L, 601L, 1159L) */ ((
								var_1_3
							) - (
								var_1_5
							))
						))
					) ? (
						/* 455L, 97L, 585L, 604L, 1162L) */ ((
							var_1_8
						) == (
							/* 455L, 97L, 585L, 604L, 1162L) */ ((unsigned short int) (
								/* 458L, 96L, 588L, 607L, 1165L) */ (max (
									/* 458L, 96L, 588L, 607L, 1165L) */ (
										var_1_1
									) , (
										var_1_3
									)
								))
							))
						))
					) : (
						/* 461L, 101L, 591L, 610L, 1168L) */ ((
							var_1_8
						) == (
							/* 461L, 101L, 591L, 610L, 1168L) */ ((unsigned short int) (
								var_1_1
							))
						))
					))
				))
			) && (
				/* 467L, 148L, 664L, 688L, 1174L) */ ((
					/* 468L, 116L, 126L, 665L, 689L, 1175L) */ ((
						/* 469L, 114L, 127L, 666L, 690L, 1176L) */ ((
							/* 470L, 110L, 128L, 667L, 691L, 1177L) */ ((
								var_1_10
							) - (
								var_1_11
							))
						) - (
							/* 473L, 113L, 131L, 670L, 694L, 1180L) */ ((
								16
							) + (
								var_1_12
							))
						))
					) != (
						var_1_5
					))
				) ? (
					/* 477L, 142L, 674L, 698L, 1184L) */ ((
						var_1_9
					) == (
						/* 477L, 142L, 674L, 698L, 1184L) */ ((float) (
							/* 480L, 141L, 677L, 701L, 1187L) */ ((
								64.8f
							) - (
								/* 482L, 140L, 679L, 703L, 1189L) */ ((
									var_1_13
								) - (
									var_1_14
								))
							))
						))
					))
				) : (
					/* 485L, 146L, 682L, 706L, 1192L) */ ((
						var_1_9
					) == (
						/* 485L, 146L, 682L, 706L, 1192L) */ ((float) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 493L, 160L, 734L, 744L, 1200L) */ ((
				var_1_15
			) == (
				/* 493L, 160L, 734L, 744L, 1200L) */ ((float) (
					/* 496L, 159L, 737L, 747L, 1203L) */ ((
						var_1_14
					) + (
						var_1_16
					))
				))
			))
		))
	) && (
		/* 500L, 220L, 809L, 838L, 1207L) */ ((
			var_1_2
		) ? (
			/* 502L, 179L, 811L, 840L, 1209L) */ ((
				var_1_17
			) == (
				/* 502L, 179L, 811L, 840L, 1209L) */ ((signed short int) (
					/* 505L, 178L, 814L, 843L, 1212L) */ ((
						var_1_3
					) + (
						var_1_12
					))
				))
			))
		) : (
			/* 508L, 218L, 817L, 846L, 1215L) */ ((
				/* 509L, 188L, 198L, 818L, 847L, 1216L) */ ((
					var_1_14
				) == (
					/* 511L, 187L, 200L, 820L, 849L, 1218L) */ ((
						/* 512L, 183L, 201L, 821L, 850L, 1219L) */ (min (
							/* 512L, 183L, 201L, 821L, 850L, 1219L) */ (
								99.8f
							) , (
								var_1_16
							)
						))
					) / (
						/* 515L, 186L, 204L, 824L, 853L, 1222L) */ (max (
							/* 515L, 186L, 204L, 824L, 853L, 1222L) */ (
								255.6f
							) , (
								var_1_13
							)
						))
					))
				))
			) ? (
				/* 518L, 210L, 827L, 856L, 1225L) */ ((
					var_1_17
				) == (
					/* 518L, 210L, 827L, 856L, 1225L) */ ((signed short int) (
						var_1_4
					))
				))
			) : (
				/* 522L, 216L, 831L, 860L, 1229L) */ ((
					var_1_17
				) == (
					/* 522L, 216L, 831L, 860L, 1229L) */ ((signed short int) (
						/* 525L, 215L, 834L, 863L, 1232L) */ ((
							var_1_5
						) - (
							var_1_3
						))
					))
				))
			))
		))
	))
) && (
	/* 530L, 276L, 918L, 943L, 1237L) */ ((
		/* 531L, 233L, 243L, 919L, 944L, 1238L) */ ((
			/* 532L, 229L, 244L, 920L, 945L, 1239L) */ ((
				var_1_2
			) || (
				/* 534L, 228L, 246L, 922L, 947L, 1241L) */ ((
					var_1_16
				) > (
					var_1_13
				))
			))
		) && (
			/* 537L, 232L, 249L, 925L, 950L, 1244L) */ ((
				var_1_3
			) < (
				var_1_8
			))
		))
	) ? (
		/* 540L, 270L, 928L, 953L, 1247L) */ ((
			/* 541L, 256L, 261L, 929L, 954L, 1248L) */ ((
				/* 542L, 254L, 262L, 930L, 955L, 1249L) */ (- (
					var_1_8
				))
			) > (
				var_1_5
			))
		) ? (
			/* 545L, 268L, 933L, 958L, 1252L) */ ((
				var_1_18
			) == (
				/* 545L, 268L, 933L, 958L, 1252L) */ ((double) (
					var_1_20
				))
			))
		) : (
			1
		))
	) : (
		/* 549L, 274L, 937L, 962L, 1256L) */ ((
			var_1_18
		) == (
			/* 549L, 274L, 937L, 962L, 1256L) */ ((double) (
				1.000000075E7
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
