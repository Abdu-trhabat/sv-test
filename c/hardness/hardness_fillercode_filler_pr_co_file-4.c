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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
signed long int var_1_8 = 100000000;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 10;
unsigned short int var_1_11 = 100;
unsigned long int var_1_12 = 3727049225;
signed long int var_1_13 = -10;
signed long int var_1_14 = -5;
float var_1_15 = 16.75;
float var_1_16 = 2.6;
float var_1_17 = 1000000000000.5;
float var_1_18 = 10.6;
float var_1_19 = 1.25;
signed short int var_1_20 = 0;
signed short int var_1_21 = 64;
signed short int var_1_22 = 8;
signed short int var_1_23 = 256;
signed char var_1_24 = 1;
signed char var_1_25 = 2;
signed short int var_1_26 = -500;
signed char var_1_27 = -2;
float var_1_28 = 31.25;
float var_1_29 = 2.95;
signed char var_1_30 = 10;
double var_1_31 = 0.5;
double var_1_34 = 3.2;
unsigned char var_1_35 = 2;
unsigned char var_1_36 = 4;
signed long int var_1_37 = -256;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 4;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 10;
unsigned short int var_1_43 = 50;
signed char var_1_44 = 4;
unsigned short int var_1_45 = 5;
signed char var_1_46 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 4;
unsigned short int last_1_var_1_9 = 4;
signed long int last_1_var_1_13 = -10;
signed short int last_1_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch4Filler_PR_CO
	/* 94L, 35L, 281L, 303L, 961L, 1023L) */ if (/* 76L, 4L, 5L, 282L, 304L, 943L, 1024L) */ ((last_1_var_1_9) <= (last_1_var_1_6))) {
		/* 87L, 27L, 285L, 307L, 954L, 1029L) */ if (/* 82L, 14L, 15L, 286L, 308L, 949L, 1030L) */ ((/* 79L, 12L, 16L, 287L, 309L, 946L, 1031L) */ (- (last_1_var_1_6))) > (last_1_var_1_9))) {
			/* 86L, 26L, 290L, 312L, 953L, 1036L) */ var_1_1 = (
				0
			);
		}
	} else {
		/* 93L, 34L, 294L, 316L, 960L, 1040L) */ var_1_1 = (
			/* 92L, 33L, 297L, 319L, 959L, 1043L) */ ((
				var_1_4
			) || (
				var_1_5
			))
		);
	}


	// From: CodeObject7
	/* 478L, 292L) */ if (/* 479L, 254L, 255L) */ ((var_1_29) >= (var_1_28))) {
		/* 482L, 280L) */ if (/* 483L, 263L, 264L) */ ((var_1_11) != (var_1_6))) {
			/* 486L, 273L) */ var_1_38 = (
				var_1_36
			);
		} else {
			/* 490L, 279L) */ var_1_38 = (
				/* 493L, 278L) */ (max (
					/* 493L, 278L) */ (
						var_1_36
					) , (
						64
					)
				))
			);
		}
	} else {
		/* 496L, 291L) */ var_1_38 = (
			/* 499L, 290L) */ ((
				var_1_39
			) - (
				/* 501L, 289L) */ (min (
					/* 501L, 289L) */ (
						var_1_40
					) , (
						/* 503L, 288L) */ (max (
							/* 503L, 288L) */ (
								var_1_41
							) , (
								var_1_42
							)
						))
					)
				))
			))
		);
	}


	// From: Req4Batch4Filler_PR_CO
	/* 54L, 157L, 520L, 533L, 1003L, 1101L) */ if (/* 48L, 141L, 142L, 521L, 534L, 997L, 1102L) */ ((/* 45L, 139L, 143L, 522L, 535L, 994L, 1103L) */ ((var_1_12) - (last_1_var_1_13))) < (last_1_var_1_13))) {
		/* 53L, 156L, 526L, 539L, 1002L, 1109L) */ var_1_11 = (
			/* 52L, 155L, 529L, 542L, 1001L, 1112L) */ (abs (
				var_1_10
			))
		);
	}


	// From: CodeObject3
	/* 404L, 160L) */ if (/* 405L, 145L, 146L) */ ((/* 406L, 143L, 147L) */ (- (var_1_15))) >= (var_1_15))) {
		/* 409L, 159L) */ var_1_27 = (
			/* 412L, 158L) */ (max (
				/* 412L, 158L) */ (
					var_1_25
				) , (
					var_1_30
				)
			))
		);
	}


	// From: CodeObject5
	/* 427L, 220L) */ if (/* 428L, 209L, 210L) */ ((var_1_6) < (var_1_11))) {
		/* 431L, 219L) */ var_1_35 = (
			var_1_36
		);
	}


	// From: CodeObject6
	/* 435L, 248L) */ if (/* 436L, 228L, 229L) */ ((var_1_31) != (/* 438L, 227L, 231L) */ (max (/* 438L, 227L, 231L) */ (var_1_34) , (9.25)))))) {
		/* 441L, 247L) */ var_1_37 = (
			/* 444L, 246L) */ ((
				-64
			) + (
				/* 446L, 245L) */ ((
					var_1_30
				) + (
					/* 448L, 244L) */ (abs (
						var_1_13
					))
				))
			))
		);
	}


	// From: Req2Batch4Filler_PR_CO
	signed long int stepLocal_0 = /* 8L, 52L, 56L, 371L, 386L, 909L, 1048L) */ ((last_1_var_1_13) * (/* 7L, 51L, 58L, 373L, 388L, 908L, 1051L) */ ((last_1_var_1_13) + (last_1_var_1_20))));
	/* 20L, 75L, 367L, 382L, 918L, 1066L) */ if (var_1_5) {
		/* 19L, 73L, 369L, 384L, 917L, 1065L) */ if (/* 14L, 54L, 55L, 370L, 385L, 912L, 1060L) */ ((stepLocal_0) > (last_1_var_1_13))) {
			/* 18L, 72L, 377L, 392L, 916L, 1064L) */ var_1_6 = (
				256
			);
		}
	}


	// From: CodeObject2
	/* 399L, 137L) */ var_1_26 = (
		var_1_6
	);


	// From: Req6Batch4Filler_PR_CO
	/* 1162L, 244L, 777L, 796L) */ if (var_1_4) {
		/* 1164L, 243L, 779L, 798L) */ var_1_15 = (
			/* 1167L, 242L, 782L, 801L) */ (max (
				/* 1167L, 242L, 782L, 801L) */ (
					/* 1168L, 236L, 783L, 802L) */ (max (
						/* 1168L, 236L, 783L, 802L) */ (
							var_1_16
						) , (
							var_1_17
						)
					))
				) , (
					/* 1171L, 241L, 786L, 805L) */ (max (
						/* 1171L, 241L, 786L, 805L) */ (
							/* 1172L, 239L, 787L, 806L) */ ((
								var_1_18
							) + (
								var_1_19
							))
						) , (
							128.25f
						)
					))
				)
			))
		);
	}


	// From: CodeObject9
	/* 535L, 391L) */ if (/* 536L, 369L, 370L) */ ((var_1_13) < (var_1_45))) {
		/* 539L, 389L) */ if (/* 540L, 378L, 379L) */ ((var_1_15) > (var_1_31))) {
			/* 543L, 388L) */ var_1_46 = (
				var_1_30
			);
		}
	}


	// From: Req7Batch4Filler_PR_CO
	signed long int stepLocal_6 = 16;
	/* 1190L, 275L, 849L, 862L) */ if (/* 1181L, 260L, 261L, 850L, 863L) */ ((var_1_14) != (stepLocal_6))) {
		/* 1189L, 274L, 853L, 866L) */ var_1_20 = (
			/* 1188L, 273L, 856L, 869L) */ (min (
				/* 1188L, 273L, 856L, 869L) */ (
					/* 1186L, 271L, 857L, 870L) */ ((
						var_1_21
					) - (
						var_1_22
					))
				) , (
					var_1_23
				)
			))
		);
	}


	// From: Req3Batch4Filler_PR_CO
	unsigned short int stepLocal_2 = var_1_11;
	unsigned char stepLocal_1 = var_1_4;
	/* 1095L, 131L, 427L, 450L) */ if (/* 1077L, 83L, 84L, 428L, 451L) */ ((stepLocal_1) || (var_1_1))) {
		/* 1083L, 95L, 431L, 454L) */ var_1_9 = (
			/* 1082L, 94L, 434L, 457L) */ (min (
				/* 1082L, 94L, 434L, 457L) */ (
					32
				) , (
					var_1_10
				)
			))
		);
	} else {
		/* 1094L, 129L, 437L, 460L) */ if (/* 1085L, 98L, 99L, 438L, 461L) */ ((stepLocal_2) >= (var_1_6))) {
			/* 1089L, 108L, 441L, 464L) */ var_1_9 = (
				var_1_10
			);
		} else {
			/* 1093L, 128L, 445L, 468L) */ var_1_9 = (
				100
			);
		}
	}


	// From: CodeObject4
	/* 415L, 196L) */ if (var_1_1) {
		/* 417L, 194L) */ if (/* 418L, 179L, 180L) */ ((/* 419L, 177L, 181L) */ ((var_1_13) * (var_1_9))) < (var_1_11))) {
			/* 423L, 193L) */ var_1_31 = (
				var_1_34
			);
		}
	}


	// From: CodeObject8
	/* 506L, 360L) */ if (/* 507L, 300L, 301L) */ ((/* 508L, 298L, 302L) */ (min (/* 508L, 298L, 302L) */ (var_1_15) , (var_1_31)))) < (var_1_15))) {
		/* 512L, 329L) */ if (/* 513L, 317L, 318L) */ ((var_1_31) > (var_1_15))) {
			/* 516L, 328L) */ var_1_43 = (
				/* 519L, 327L) */ (abs (
					var_1_36
				))
			);
		}
	} else {
		/* 521L, 358L) */ if (/* 522L, 337L, 338L) */ ((var_1_11) > (/* 524L, 336L, 340L) */ ((var_1_40) >> (/* 526L, 335L, 342L) */ ((var_1_44) - (2))))))) {
			/* 529L, 357L) */ var_1_43 = (
				/* 532L, 356L) */ ((
					var_1_44
				) + (
					var_1_45
				))
			);
		}
	}


	// From: Req5Batch4Filler_PR_CO
	signed long int stepLocal_5 = var_1_8;
	unsigned char stepLocal_4 = var_1_4;
	unsigned short int stepLocal_3 = var_1_11;
	/* 1152L, 223L, 641L, 674L) */ if (/* 1125L, 167L, 168L, 642L, 675L) */ ((stepLocal_5) < (var_1_6))) {
		/* 1147L, 217L, 645L, 678L) */ if (/* 1129L, 178L, 179L, 646L, 679L) */ ((stepLocal_4) && (/* 1128L, 177L, 181L, 648L, 681L) */ ((var_1_8) >= (var_1_11))))) {
			/* 1146L, 215L, 651L, 684L) */ if (/* 1131L, 191L, 192L, 652L, 685L) */ ((var_1_6) <= (stepLocal_3))) {
				/* 1141L, 209L, 655L, 688L) */ if (var_1_1) {
					/* 1136L, 204L, 657L, 690L) */ var_1_13 = (
						var_1_9
					);
				} else {
					/* 1140L, 208L, 661L, 694L) */ var_1_13 = (
						var_1_6
					);
				}
			} else {
				/* 1145L, 214L, 665L, 698L) */ var_1_13 = (
					var_1_11
				);
			}
		}
	} else {
		/* 1151L, 222L, 669L, 702L) */ var_1_13 = (
			var_1_14
		);
	}


	// From: CodeObject1
	/* 394L, 129L) */ var_1_24 = (
		var_1_25
	);
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483647);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32767);
	assume_abort_if_not(var_1_23 <= 32766);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 4);
	assume_abort_if_not(var_1_44 <= 7);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 550L, 4L, 8L, 326L, 348L, 969L, 1197L, 102L) */ ((last_1_var_1_9) <= (last_1_var_1_6))) {
		if (/* 556L, 14L, 19L, 330L, 352L, 975L, 1203L, 108L) */ ((/* 557L, 12L, 20L, 331L, 353L, 972L, 1204L, 105L) */ (- (last_1_var_1_6))) > (last_1_var_1_9))) {
		}
	} else {
	}
	if (var_1_5) {
		if (/* 576L, 54L, 62L, 400L, 415L, 931L, 1223L, 34L) */ ((/* 577L, 52L, 63L, 401L, 416L, 928L, 1224L, 31L) */ ((last_1_var_1_13) * (/* 580L, 51L, 65L, 403L, 418L, 927L, 1227L, 30L) */ ((last_1_var_1_13) + (last_1_var_1_20))))) > (last_1_var_1_13))) {
		}
	}
	if (/* 593L, 83L, 87L, 474L, 497L, 1240L) */ ((var_1_4) || (var_1_1))) {
	} else {
		if (/* 603L, 98L, 102L, 484L, 507L, 1250L) */ ((var_1_11) >= (var_1_6))) {
		} else {
		}
	}
	if (/* 617L, 141L, 147L, 547L, 560L, 1012L, 1264L, 63L) */ ((/* 618L, 139L, 148L, 548L, 561L, 1009L, 1265L, 60L) */ ((var_1_12) - (last_1_var_1_13))) < (last_1_var_1_13))) {
	}
	if (/* 631L, 167L, 171L, 708L, 741L, 1278L) */ ((var_1_8) < (var_1_6))) {
		if (/* 635L, 178L, 184L, 712L, 745L, 1282L) */ ((var_1_4) && (/* 637L, 177L, 186L, 714L, 747L, 1284L) */ ((var_1_8) >= (var_1_11))))) {
			if (/* 641L, 191L, 195L, 718L, 751L, 1288L) */ ((var_1_6) <= (var_1_11))) {
				if (var_1_1) {
				} else {
				}
			} else {
			}
		}
	} else {
	}
	if (var_1_4) {
	}
	if (/* 683L, 260L, 264L, 876L, 889L, 1330L) */ ((var_1_14) != (16))) {
	}
	return /* 700L) */ ((
	/* 699L) */ ((
		/* 698L) */ ((
			/* 697L) */ ((
				/* 696L) */ ((
					/* 695L) */ ((
						/* 549L, 36L, 325L, 347L, 987L, 1196L, 120L) */ ((
							/* 550L, 4L, 8L, 326L, 348L, 969L, 1197L, 102L) */ ((
								last_1_var_1_9
							) <= (
								last_1_var_1_6
							))
						) ? (
							/* 555L, 28L, 329L, 351L, 980L, 1202L, 113L) */ ((
								/* 556L, 14L, 19L, 330L, 352L, 975L, 1203L, 108L) */ ((
									/* 557L, 12L, 20L, 331L, 353L, 972L, 1204L, 105L) */ (- (
										last_1_var_1_6
									))
								) > (
									last_1_var_1_9
								))
							) ? (
								/* 562L, 26L, 334L, 356L, 979L, 1209L, 112L) */ ((
									var_1_1
								) == (
									/* 562L, 26L, 334L, 356L, 979L, 1209L, 112L) */ ((unsigned char) (
										0
									))
								))
							) : (
								1
							))
						) : (
							/* 566L, 34L, 338L, 360L, 986L, 1213L, 119L) */ ((
								var_1_1
							) == (
								/* 566L, 34L, 338L, 360L, 986L, 1213L, 119L) */ ((unsigned char) (
									/* 569L, 33L, 341L, 363L, 985L, 1216L, 118L) */ ((
										var_1_4
									) || (
										var_1_5
									))
								))
							))
						))
					) && (
						/* 573L, 76L, 397L, 412L, 937L, 1220L, 40L) */ ((
							var_1_5
						) ? (
							/* 575L, 74L, 399L, 414L, 936L, 1222L, 39L) */ ((
								/* 576L, 54L, 62L, 400L, 415L, 931L, 1223L, 34L) */ ((
									/* 577L, 52L, 63L, 401L, 416L, 928L, 1224L, 31L) */ ((
										last_1_var_1_13
									) * (
										/* 580L, 51L, 65L, 403L, 418L, 927L, 1227L, 30L) */ ((
											last_1_var_1_13
										) + (
											last_1_var_1_20
										))
									))
								) > (
									last_1_var_1_13
								))
							) ? (
								/* 587L, 72L, 407L, 422L, 935L, 1234L, 38L) */ ((
									var_1_6
								) == (
									/* 587L, 72L, 407L, 422L, 935L, 1234L, 38L) */ ((unsigned short int) (
										256
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
					/* 592L, 132L, 473L, 496L, 1239L) */ ((
						/* 593L, 83L, 87L, 474L, 497L, 1240L) */ ((
							var_1_4
						) || (
							var_1_1
						))
					) ? (
						/* 596L, 95L, 477L, 500L, 1243L) */ ((
							var_1_9
						) == (
							/* 596L, 95L, 477L, 500L, 1243L) */ ((unsigned short int) (
								/* 599L, 94L, 480L, 503L, 1246L) */ (min (
									/* 599L, 94L, 480L, 503L, 1246L) */ (
										32
									) , (
										var_1_10
									)
								))
							))
						))
					) : (
						/* 602L, 130L, 483L, 506L, 1249L) */ ((
							/* 603L, 98L, 102L, 484L, 507L, 1250L) */ ((
								var_1_11
							) >= (
								var_1_6
							))
						) ? (
							/* 606L, 108L, 487L, 510L, 1253L) */ ((
								var_1_9
							) == (
								/* 606L, 108L, 487L, 510L, 1253L) */ ((unsigned short int) (
									var_1_10
								))
							))
						) : (
							/* 610L, 128L, 491L, 514L, 1257L) */ ((
								var_1_9
							) == (
								/* 610L, 128L, 491L, 514L, 1257L) */ ((unsigned short int) (
									100
								))
							))
						))
					))
				))
			) && (
				/* 616L, 158L, 546L, 559L, 1018L, 1263L, 69L) */ ((
					/* 617L, 141L, 147L, 547L, 560L, 1012L, 1264L, 63L) */ ((
						/* 618L, 139L, 148L, 548L, 561L, 1009L, 1265L, 60L) */ ((
							var_1_12
						) - (
							last_1_var_1_13
						))
					) < (
						last_1_var_1_13
					))
				) ? (
					/* 624L, 156L, 552L, 565L, 1017L, 1271L, 68L) */ ((
						var_1_11
					) == (
						/* 624L, 156L, 552L, 565L, 1017L, 1271L, 68L) */ ((unsigned short int) (
							/* 627L, 155L, 555L, 568L, 1016L, 1274L, 67L) */ (abs (
								var_1_10
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 630L, 224L, 707L, 740L, 1277L) */ ((
				/* 631L, 167L, 171L, 708L, 741L, 1278L) */ ((
					var_1_8
				) < (
					var_1_6
				))
			) ? (
				/* 634L, 218L, 711L, 744L, 1281L) */ ((
					/* 635L, 178L, 184L, 712L, 745L, 1282L) */ ((
						var_1_4
					) && (
						/* 637L, 177L, 186L, 714L, 747L, 1284L) */ ((
							var_1_8
						) >= (
							var_1_11
						))
					))
				) ? (
					/* 640L, 216L, 717L, 750L, 1287L) */ ((
						/* 641L, 191L, 195L, 718L, 751L, 1288L) */ ((
							var_1_6
						) <= (
							var_1_11
						))
					) ? (
						/* 644L, 210L, 721L, 754L, 1291L) */ ((
							var_1_1
						) ? (
							/* 646L, 204L, 723L, 756L, 1293L) */ ((
								var_1_13
							) == (
								/* 646L, 204L, 723L, 756L, 1293L) */ ((signed long int) (
									var_1_9
								))
							))
						) : (
							/* 650L, 208L, 727L, 760L, 1297L) */ ((
								var_1_13
							) == (
								/* 650L, 208L, 727L, 760L, 1297L) */ ((signed long int) (
									var_1_6
								))
							))
						))
					) : (
						/* 654L, 214L, 731L, 764L, 1301L) */ ((
							var_1_13
						) == (
							/* 654L, 214L, 731L, 764L, 1301L) */ ((signed long int) (
								var_1_11
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 658L, 222L, 735L, 768L, 1305L) */ ((
					var_1_13
				) == (
					/* 658L, 222L, 735L, 768L, 1305L) */ ((signed long int) (
						var_1_14
					))
				))
			))
		))
	) && (
		/* 667L, 245L, 815L, 834L, 1314L) */ ((
			var_1_4
		) ? (
			/* 669L, 243L, 817L, 836L, 1316L) */ ((
				var_1_15
			) == (
				/* 669L, 243L, 817L, 836L, 1316L) */ ((float) (
					/* 672L, 242L, 820L, 839L, 1319L) */ (max (
						/* 672L, 242L, 820L, 839L, 1319L) */ (
							/* 673L, 236L, 821L, 840L, 1320L) */ (max (
								/* 673L, 236L, 821L, 840L, 1320L) */ (
									var_1_16
								) , (
									var_1_17
								)
							))
						) , (
							/* 676L, 241L, 824L, 843L, 1323L) */ (max (
								/* 676L, 241L, 824L, 843L, 1323L) */ (
									/* 677L, 239L, 825L, 844L, 1324L) */ ((
										var_1_18
									) + (
										var_1_19
									))
								) , (
									128.25f
								)
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
	/* 682L, 276L, 875L, 888L, 1329L) */ ((
		/* 683L, 260L, 264L, 876L, 889L, 1330L) */ ((
			var_1_14
		) != (
			16
		))
	) ? (
		/* 686L, 274L, 879L, 892L, 1333L) */ ((
			var_1_20
		) == (
			/* 686L, 274L, 879L, 892L, 1333L) */ ((signed short int) (
				/* 689L, 273L, 882L, 895L, 1336L) */ (min (
					/* 689L, 273L, 882L, 895L, 1336L) */ (
						/* 690L, 271L, 883L, 896L, 1337L) */ ((
							var_1_21
						) - (
							var_1_22
						))
					) , (
						var_1_23
					)
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
