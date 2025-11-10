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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Filler_PS_CN.c", 13, "reach_error"); }
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
double var_1_1 = 7.3;
unsigned short int var_1_2 = 256;
unsigned short int var_1_3 = 10;
double var_1_6 = 1.2;
float var_1_7 = 9999.5;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 100000;
unsigned char var_1_11 = 0;
double var_1_12 = 8.1;
float var_1_13 = 3.9;
unsigned char var_1_14 = 50;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 200;
unsigned char var_1_19 = 32;
unsigned short int var_1_20 = 1;
unsigned short int var_1_21 = 32;
signed long int var_1_22 = 8;
signed short int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 10000;
signed short int var_1_26 = 1;
signed short int var_1_27 = 256;
unsigned char var_1_28 = 0;
signed long int var_1_29 = 0;
float var_1_30 = 4.45;
float var_1_31 = 99999999.2;
float var_1_32 = 100000000.8;
float var_1_33 = 31.9;
float var_1_34 = 9.5;
float var_1_35 = 10000000000000.25;
float var_1_36 = 32.25;
float var_1_37 = 0.25;
float var_1_38 = 2.25;
signed short int var_1_39 = -4;
signed short int var_1_40 = -25;
signed short int var_1_41 = 8;
signed short int var_1_42 = 0;
signed short int var_1_43 = 16;
float var_1_44 = 9.1;
signed short int var_1_45 = 8;
unsigned short int var_1_46 = 5;
signed long int var_1_47 = 32;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 7.3;
float last_1_var_1_13 = 3.9;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 100L) */ if (var_1_24) {
		/* 98L) */ if (/* 64L, 63L) */ ((var_1_25) > (16u))) {
			/* 76L) */ var_1_23 = (
				/* 75L) */ (abs (
					/* 74L) */ ((
						var_1_26
					) - (
						var_1_27
					))
				))
			);
		} else {
			/* 96L) */ if (var_1_28) {
				/* 83L) */ var_1_23 = (
					var_1_26
				);
			} else {
				/* 95L) */ var_1_23 = (
					var_1_27
				);
			}
		}
	}


	// From: CodeObject2
	/* 148L) */ if (var_1_28) {
		/* 146L) */ if (/* 117L, 116L) */ ((/* 118L, 110L) */ ((var_1_30) * (/* 120L, 109L) */ (abs (var_1_31))))) >= (/* 122L, 115L) */ (min (/* 122L, 115L) */ (var_1_32) , (/* 124L, 114L) */ ((var_1_33) * (var_1_34)))))))) {
			/* 141L) */ var_1_29 = (
				/* 140L) */ (abs (
					var_1_26
				))
			);
		} else {
			/* 145L) */ var_1_29 = (
				var_1_27
			);
		}
	}


	// From: CodeObject3
	/* 178L) */ if (/* 157L, 156L) */ ((/* 158L, 154L) */ ((var_1_26) ^ (var_1_23))) >= (var_1_27))) {
		/* 176L) */ if (var_1_24) {
			/* 175L) */ var_1_35 = (
				/* 174L) */ (min (
					/* 174L) */ (
						var_1_36
					) , (
						var_1_37
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 185L) */ var_1_38 = (
		var_1_36
	);


	// From: CodeObject5
	/* 201L) */ if (var_1_28) {
		/* 200L) */ var_1_39 = (
			/* 199L) */ ((
				var_1_40
			) + (
				/* 198L) */ ((
					var_1_41
				) - (
					var_1_42
				))
			))
		);
	}


	// From: CodeObject6
	/* 247L) */ if (/* 212L, 211L) */ ((var_1_38) <= (/* 214L, 210L) */ ((/* 215L, 208L) */ (max (/* 215L, 208L) */ (var_1_44) , (32.4f)))) + (var_1_30))))) {
		/* 240L) */ if (/* 229L, 228L) */ ((var_1_31) > (var_1_37))) {
			/* 239L) */ var_1_43 = (
				/* 238L) */ (abs (
					256
				))
			);
		}
	} else {
		/* 246L) */ var_1_43 = (
			/* 245L) */ (abs (
				var_1_27
			))
		);
	}


	// From: CodeObject7
	/* 293L) */ if (/* 255L, 254L) */ ((var_1_46) <= (/* 257L, 253L) */ (abs (var_1_39))))) {
		/* 287L) */ if (/* 269L, 268L) */ ((/* 270L, 264L) */ (abs (var_1_29))) < (/* 272L, 267L) */ (max (/* 272L, 267L) */ (var_1_42) , (var_1_47)))))) {
			/* 286L) */ var_1_45 = (
				/* 285L) */ ((
					var_1_42
				) - (
					256
				))
			);
		}
	} else {
		/* 292L) */ var_1_45 = (
			var_1_42
		);
	}


	// From: Req3Batch162Filler_PS_CN
	/* 25L, 237L, 652L, 678L, 976L, 1087L) */ if (/* 2L, 191L, 192L, 653L, 679L, 953L, 1088L) */ ((var_1_9) || (var_1_11))) {
		/* 20L, 231L, 656L, 682L, 971L, 1091L) */ if (/* 11L, 204L, 205L, 657L, 683L, 962L, 1092L) */ ((var_1_6) == (/* 10L, 203L, 207L, 659L, 685L, 961L, 1094L) */ ((/* 8L, 201L, 208L, 660L, 686L, 959L, 1095L) */ ((last_1_var_1_1) + (last_1_var_1_13))) + (var_1_12))))) {
			/* 15L, 222L, 664L, 690L, 966L, 1101L) */ var_1_10 = (
				var_1_3
			);
		} else {
			/* 19L, 230L, 668L, 694L, 970L, 1105L) */ var_1_10 = (
				var_1_2
			);
		}
	} else {
		/* 24L, 236L, 672L, 698L, 975L, 1109L) */ var_1_10 = (
			var_1_2
		);
	}


	// From: Req4Batch162Filler_PS_CN
	/* 1116L, 265L, 757L, 775L) */ if (/* 1117L, 247L, 248L, 758L, 776L) */ ((var_1_3) > (var_1_10))) {
		/* 1120L, 257L, 761L, 779L) */ var_1_13 = (
			var_1_6
		);
	} else {
		/* 1124L, 264L, 765L, 783L) */ var_1_13 = (
			/* 1127L, 263L, 768L, 786L) */ (min (
				/* 1127L, 263L, 768L, 786L) */ (
					/* 1128L, 261L, 769L, 787L) */ (abs (
						1.75f
					))
				) , (
					var_1_6
				)
			))
		);
	}


	// From: Req6Batch162Filler_PS_CN
	/* 1152L, 308L, 904L, 910L) */ var_1_20 = (
		var_1_21
	);


	// From: Req7Batch162Filler_PS_CN
	/* 1158L, 318L, 928L, 934L) */ var_1_22 = (
		1
	);


	// From: Req2Batch162Filler_PS_CN
	/* 1052L, 179L, 457L, 493L) */ if (var_1_8) {
		/* 1054L, 173L, 459L, 495L) */ if (/* 1055L, 87L, 88L, 460L, 496L) */ ((/* 1056L, 83L, 89L, 461L, 497L) */ ((var_1_3) >= (var_1_2))) || (/* 1059L, 86L, 92L, 464L, 500L) */ ((var_1_10) < (var_1_22))))) {
			/* 1062L, 171L, 467L, 503L) */ if (/* 1063L, 105L, 106L, 468L, 504L) */ ((/* 1064L, 103L, 107L, 469L, 505L) */ (- (var_1_2))) < (var_1_3))) {
				/* 1067L, 165L, 472L, 508L) */ if (var_1_9) {
					/* 1069L, 120L, 474L, 510L) */ var_1_7 = (
						var_1_6
					);
				} else {
					/* 1073L, 164L, 478L, 514L) */ var_1_7 = (
						64.4f
					);
				}
			} else {
				/* 1077L, 170L, 482L, 518L) */ var_1_7 = (
					var_1_6
				);
			}
		}
	} else {
		/* 1081L, 178L, 486L, 522L) */ var_1_7 = (
			var_1_6
		);
	}


	// From: Req5Batch162Filler_PS_CN
	/* 1133L, 297L, 828L, 847L) */ if (/* 1134L, 277L, 278L, 829L, 848L) */ ((var_1_22) > (var_1_10))) {
		/* 1137L, 289L, 832L, 851L) */ var_1_14 = (
			/* 1140L, 288L, 835L, 854L) */ (max (
				/* 1140L, 288L, 835L, 854L) */ (
					var_1_16
				) , (
					var_1_17
				)
			))
		);
	} else {
		/* 1143L, 296L, 838L, 857L) */ var_1_14 = (
			/* 1146L, 295L, 841L, 860L) */ ((
				var_1_18
			) - (
				/* 1148L, 294L, 843L, 862L) */ (abs (
					var_1_19
				))
			))
		);
	}


	// From: Req1Batch162Filler_PS_CN
	unsigned short int stepLocal_2 = var_1_2;
	signed long int stepLocal_1 = var_1_22;
	signed long int stepLocal_0 = /* 1008L, 7L, 11L, 325L, 358L) */ ((200) / (/* 1010L, 6L, 13L, 327L, 360L) */ ((var_1_2) + (var_1_3))));
	/* 1044L, 72L, 323L, 356L) */ if (/* 1021L, 9L, 10L, 324L, 357L) */ ((stepLocal_0) < (var_1_22))) {
		/* 1039L, 66L, 331L, 364L) */ if (/* 1023L, 26L, 27L, 332L, 365L) */ ((stepLocal_2) <= (var_1_22))) {
			/* 1038L, 64L, 335L, 368L) */ if (/* 1029L, 41L, 42L, 336L, 369L) */ ((stepLocal_1) != (/* 1028L, 40L, 44L, 338L, 371L) */ ((var_1_2) * (/* 1027L, 39L, 46L, 340L, 373L) */ ((var_1_3) + (var_1_10))))))) {
				/* 1033L, 59L, 343L, 376L) */ var_1_1 = (
					25.25
				);
			} else {
				/* 1037L, 63L, 347L, 380L) */ var_1_1 = (
					var_1_6
				);
			}
		}
	} else {
		/* 1043L, 71L, 351L, 384L) */ var_1_1 = (
			var_1_6
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 1);
	assume_abort_if_not(var_1_2 <= 32768);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967295);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -16383);
	assume_abort_if_not(var_1_40 <= 16383);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 65535);
	var_1_47 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_47 >= -2147483648);
	assume_abort_if_not(var_1_47 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	if (/* 296L, 9L, 17L, 390L, 423L, 1164L) */ ((/* 297L, 7L, 18L, 391L, 424L, 1165L) */ ((200) / (/* 299L, 6L, 20L, 393L, 426L, 1167L) */ ((var_1_2) + (var_1_3))))) < (var_1_22))) {
		if (/* 304L, 26L, 30L, 398L, 431L, 1172L) */ ((var_1_2) <= (var_1_22))) {
			if (/* 308L, 41L, 49L, 402L, 435L, 1176L) */ ((var_1_22) != (/* 310L, 40L, 51L, 404L, 437L, 1178L) */ ((var_1_2) * (/* 312L, 39L, 53L, 406L, 439L, 1180L) */ ((var_1_3) + (var_1_10))))))) {
			} else {
			}
		}
	} else {
	}
	if (var_1_8) {
		if (/* 333L, 87L, 95L, 532L, 568L, 1201L) */ ((/* 334L, 83L, 96L, 533L, 569L, 1202L) */ ((var_1_3) >= (var_1_2))) || (/* 337L, 86L, 99L, 536L, 572L, 1205L) */ ((var_1_10) < (var_1_22))))) {
			if (/* 341L, 105L, 110L, 540L, 576L, 1209L) */ ((/* 342L, 103L, 111L, 541L, 577L, 1210L) */ (- (var_1_2))) < (var_1_3))) {
				if (var_1_9) {
				} else {
				}
			} else {
			}
		}
	} else {
	}
	if (/* 366L, 191L, 195L, 705L, 731L, 981L, 1234L, 30L) */ ((var_1_9) || (var_1_11))) {
		if (/* 370L, 204L, 212L, 709L, 735L, 990L, 1238L, 39L) */ ((var_1_6) == (/* 372L, 203L, 214L, 711L, 737L, 989L, 1240L, 38L) */ ((/* 373L, 201L, 215L, 712L, 738L, 987L, 1241L, 36L) */ ((last_1_var_1_1) + (last_1_var_1_13))) + (var_1_12))))) {
		} else {
		}
	} else {
	}
	if (/* 395L, 247L, 251L, 794L, 812L, 1263L) */ ((var_1_3) > (var_1_10))) {
	} else {
	}
	if (/* 412L, 277L, 281L, 867L, 886L, 1280L) */ ((var_1_22) > (var_1_10))) {
	} else {
	}
	return /* 446L) */ ((
	/* 445L) */ ((
		/* 444L) */ ((
			/* 443L) */ ((
				/* 442L) */ ((
					/* 441L) */ ((
						/* 295L, 73L, 389L, 422L, 1163L) */ ((
							/* 296L, 9L, 17L, 390L, 423L, 1164L) */ ((
								/* 297L, 7L, 18L, 391L, 424L, 1165L) */ ((
									200
								) / (
									/* 299L, 6L, 20L, 393L, 426L, 1167L) */ ((
										var_1_2
									) + (
										var_1_3
									))
								))
							) < (
								var_1_22
							))
						) ? (
							/* 303L, 67L, 397L, 430L, 1171L) */ ((
								/* 304L, 26L, 30L, 398L, 431L, 1172L) */ ((
									var_1_2
								) <= (
									var_1_22
								))
							) ? (
								/* 307L, 65L, 401L, 434L, 1175L) */ ((
									/* 308L, 41L, 49L, 402L, 435L, 1176L) */ ((
										var_1_22
									) != (
										/* 310L, 40L, 51L, 404L, 437L, 1178L) */ ((
											var_1_2
										) * (
											/* 312L, 39L, 53L, 406L, 439L, 1180L) */ ((
												var_1_3
											) + (
												var_1_10
											))
										))
									))
								) ? (
									/* 315L, 59L, 409L, 442L, 1183L) */ ((
										var_1_1
									) == (
										/* 315L, 59L, 409L, 442L, 1183L) */ ((double) (
											25.25
										))
									))
								) : (
									/* 319L, 63L, 413L, 446L, 1187L) */ ((
										var_1_1
									) == (
										/* 319L, 63L, 413L, 446L, 1187L) */ ((double) (
											var_1_6
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 323L, 71L, 417L, 450L, 1191L) */ ((
								var_1_1
							) == (
								/* 323L, 71L, 417L, 450L, 1191L) */ ((double) (
									var_1_6
								))
							))
						))
					) && (
						/* 330L, 180L, 529L, 565L, 1198L) */ ((
							var_1_8
						) ? (
							/* 332L, 174L, 531L, 567L, 1200L) */ ((
								/* 333L, 87L, 95L, 532L, 568L, 1201L) */ ((
									/* 334L, 83L, 96L, 533L, 569L, 1202L) */ ((
										var_1_3
									) >= (
										var_1_2
									))
								) || (
									/* 337L, 86L, 99L, 536L, 572L, 1205L) */ ((
										var_1_10
									) < (
										var_1_22
									))
								))
							) ? (
								/* 340L, 172L, 539L, 575L, 1208L) */ ((
									/* 341L, 105L, 110L, 540L, 576L, 1209L) */ ((
										/* 342L, 103L, 111L, 541L, 577L, 1210L) */ (- (
											var_1_2
										))
									) < (
										var_1_3
									))
								) ? (
									/* 345L, 166L, 544L, 580L, 1213L) */ ((
										var_1_9
									) ? (
										/* 347L, 120L, 546L, 582L, 1215L) */ ((
											var_1_7
										) == (
											/* 347L, 120L, 546L, 582L, 1215L) */ ((float) (
												var_1_6
											))
										))
									) : (
										/* 351L, 164L, 550L, 586L, 1219L) */ ((
											var_1_7
										) == (
											/* 351L, 164L, 550L, 586L, 1219L) */ ((float) (
												64.4f
											))
										))
									))
								) : (
									/* 355L, 170L, 554L, 590L, 1223L) */ ((
										var_1_7
									) == (
										/* 355L, 170L, 554L, 590L, 1223L) */ ((float) (
											var_1_6
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 359L, 178L, 558L, 594L, 1227L) */ ((
								var_1_7
							) == (
								/* 359L, 178L, 558L, 594L, 1227L) */ ((float) (
									var_1_6
								))
							))
						))
					))
				) && (
					/* 365L, 238L, 704L, 730L, 1004L, 1233L, 53L) */ ((
						/* 366L, 191L, 195L, 705L, 731L, 981L, 1234L, 30L) */ ((
							var_1_9
						) || (
							var_1_11
						))
					) ? (
						/* 369L, 232L, 708L, 734L, 999L, 1237L, 48L) */ ((
							/* 370L, 204L, 212L, 709L, 735L, 990L, 1238L, 39L) */ ((
								var_1_6
							) == (
								/* 372L, 203L, 214L, 711L, 737L, 989L, 1240L, 38L) */ ((
									/* 373L, 201L, 215L, 712L, 738L, 987L, 1241L, 36L) */ ((
										last_1_var_1_1
									) + (
										last_1_var_1_13
									))
								) + (
									var_1_12
								))
							))
						) ? (
							/* 379L, 222L, 716L, 742L, 994L, 1247L, 43L) */ ((
								var_1_10
							) == (
								/* 379L, 222L, 716L, 742L, 994L, 1247L, 43L) */ ((unsigned long int) (
									var_1_3
								))
							))
						) : (
							/* 383L, 230L, 720L, 746L, 998L, 1251L, 47L) */ ((
								var_1_10
							) == (
								/* 383L, 230L, 720L, 746L, 998L, 1251L, 47L) */ ((unsigned long int) (
									var_1_2
								))
							))
						))
					) : (
						/* 387L, 236L, 724L, 750L, 1003L, 1255L, 52L) */ ((
							var_1_10
						) == (
							/* 387L, 236L, 724L, 750L, 1003L, 1255L, 52L) */ ((unsigned long int) (
								var_1_2
							))
						))
					))
				))
			) && (
				/* 394L, 266L, 793L, 811L, 1262L) */ ((
					/* 395L, 247L, 251L, 794L, 812L, 1263L) */ ((
						var_1_3
					) > (
						var_1_10
					))
				) ? (
					/* 398L, 257L, 797L, 815L, 1266L) */ ((
						var_1_13
					) == (
						/* 398L, 257L, 797L, 815L, 1266L) */ ((float) (
							var_1_6
						))
					))
				) : (
					/* 402L, 264L, 801L, 819L, 1270L) */ ((
						var_1_13
					) == (
						/* 402L, 264L, 801L, 819L, 1270L) */ ((float) (
							/* 405L, 263L, 804L, 822L, 1273L) */ (min (
								/* 405L, 263L, 804L, 822L, 1273L) */ (
									/* 406L, 261L, 805L, 823L, 1274L) */ (abs (
										1.75f
									))
								) , (
									var_1_6
								)
							))
						))
					))
				))
			))
		) && (
			/* 411L, 298L, 866L, 885L, 1279L) */ ((
				/* 412L, 277L, 281L, 867L, 886L, 1280L) */ ((
					var_1_22
				) > (
					var_1_10
				))
			) ? (
				/* 415L, 289L, 870L, 889L, 1283L) */ ((
					var_1_14
				) == (
					/* 415L, 289L, 870L, 889L, 1283L) */ ((unsigned char) (
						/* 418L, 288L, 873L, 892L, 1286L) */ (max (
							/* 418L, 288L, 873L, 892L, 1286L) */ (
								var_1_16
							) , (
								var_1_17
							)
						))
					))
				))
			) : (
				/* 421L, 296L, 876L, 895L, 1289L) */ ((
					var_1_14
				) == (
					/* 421L, 296L, 876L, 895L, 1289L) */ ((unsigned char) (
						/* 424L, 295L, 879L, 898L, 1292L) */ ((
							var_1_18
						) - (
							/* 426L, 294L, 881L, 900L, 1294L) */ (abs (
								var_1_19
							))
						))
					))
				))
			))
		))
	) && (
		/* 430L, 308L, 916L, 922L, 1298L) */ ((
			var_1_20
		) == (
			/* 430L, 308L, 916L, 922L, 1298L) */ ((unsigned short int) (
				var_1_21
			))
		))
	))
) && (
	/* 436L, 318L, 940L, 946L, 1304L) */ ((
		var_1_22
	) == (
		/* 436L, 318L, 940L, 946L, 1304L) */ ((signed long int) (
			1
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
