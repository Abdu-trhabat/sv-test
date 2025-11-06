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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Filler_PS_CN.c", 13, "reach_error"); }
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
double var_1_1 = 1000.6;
float var_1_2 = 255.675;
float var_1_3 = 10.4;
float var_1_4 = 31.4;
double var_1_5 = 7.75;
double var_1_6 = 63.1;
signed char var_1_7 = 32;
signed long int var_1_8 = -1;
signed long int var_1_9 = 50;
signed char var_1_10 = 64;
signed short int var_1_11 = 5;
unsigned short int var_1_12 = 4;
unsigned char var_1_13 = 1;
unsigned short int var_1_14 = 49632;
unsigned short int var_1_15 = 0;
signed char var_1_16 = 50;
float var_1_17 = 128.5;
signed char var_1_18 = 2;
signed char var_1_19 = 25;
signed char var_1_20 = 10;
signed char var_1_21 = 1;
signed char var_1_22 = 8;
unsigned long int var_1_23 = 25;
unsigned short int var_1_24 = 32;
unsigned long int var_1_25 = 16;
signed long int var_1_26 = 50;
unsigned long int var_1_27 = 8;
unsigned long int var_1_28 = 5;
float var_1_29 = 4.5;
unsigned long int var_1_30 = 8;
signed long int var_1_31 = -32;
float var_1_32 = 5.75;
signed long int var_1_33 = 64;
unsigned char var_1_34 = 0;
float var_1_35 = 4.75;
float var_1_36 = 99.5;
unsigned short int var_1_37 = 2;
unsigned short int var_1_38 = 25;
unsigned long int var_1_39 = 5;
unsigned short int var_1_40 = 128;
unsigned short int var_1_41 = 128;
unsigned long int var_1_42 = 25;
unsigned long int var_1_43 = 2711454658;
unsigned long int var_1_44 = 3606433920;
signed char var_1_45 = 2;
unsigned short int var_1_46 = 40733;
signed char var_1_47 = 100;
unsigned long int var_1_48 = 1;
double var_1_49 = 1000000.8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_26 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 53L) */ var_1_27 = (
		var_1_28
	);


	// From: CodeObject2
	/* 77L) */ if (/* 63L, 62L) */ ((var_1_28) != (/* 65L, 61L) */ ((var_1_27) + (var_1_30))))) {
		/* 76L) */ var_1_29 = (
			63.875f
		);
	}


	// From: CodeObject3
	/* 84L) */ var_1_31 = (
		64
	);


	// From: CodeObject4
	/* 120L) */ if (/* 95L, 94L) */ ((/* 96L, 92L) */ ((var_1_27) | (/* 98L, 91L) */ (abs (var_1_33))))) > (var_1_28))) {
		/* 118L) */ if (var_1_34) {
			/* 117L) */ var_1_32 = (
				/* 116L) */ (min (
					/* 116L) */ (
						var_1_35
					) , (
						/* 115L) */ (max (
							/* 115L) */ (
								256.5f
							) , (
								var_1_36
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject5
	/* 146L) */ if (/* 131L, 130L) */ ((var_1_34) && (/* 133L, 129L) */ ((var_1_27) >= (var_1_28))))) {
		/* 145L) */ var_1_37 = (
			/* 144L) */ (abs (
				var_1_38
			))
		);
	}


	// From: CodeObject6
	/* 227L) */ if (/* 156L, 155L) */ ((/* 157L, 153L) */ (- (var_1_32))) < (var_1_36))) {
		/* 219L) */ if (/* 167L, 166L) */ ((var_1_29) > (var_1_36))) {
			/* 217L) */ if (/* 189L, 188L) */ ((/* 190L, 184L) */ ((/* 191L, 181L) */ ((var_1_27) % (var_1_40))) % (/* 194L, 183L) */ (abs (var_1_41))))) == (/* 196L, 187L) */ ((var_1_31) / (var_1_42))))) {
				/* 216L) */ var_1_39 = (
					/* 215L) */ ((
						/* 213L) */ (max (
							/* 213L) */ (
								var_1_43
							) , (
								var_1_44
							)
						))
					) - (
						var_1_37
					))
				);
			}
		}
	} else {
		/* 226L) */ var_1_39 = (
			/* 225L) */ ((
				var_1_40
			) + (
				var_1_37
			))
		);
	}


	// From: CodeObject7
	/* 281L) */ if (/* 238L, 237L) */ ((var_1_27) > (/* 240L, 236L) */ (~ (/* 241L, 235L) */ ((var_1_30) % (var_1_43))))))) {
		/* 275L) */ if (/* 257L, 256L) */ ((/* 258L, 254L) */ ((/* 259L, 252L) */ ((var_1_46) - (1000))) >= (var_1_27))) && (var_1_34))) {
			/* 274L) */ var_1_45 = (
				var_1_47
			);
		}
	} else {
		/* 280L) */ var_1_45 = (
			var_1_47
		);
	}


	// From: CodeObject8
	/* 288L) */ var_1_48 = (
		var_1_41
	);


	// From: CodeObject9
	/* 314L) */ if (/* 295L, 294L) */ (! (var_1_34))) {
		/* 312L) */ if (/* 302L, 301L) */ ((var_1_29) > (var_1_36))) {
			/* 311L) */ var_1_49 = (
				var_1_35
			);
		}
	}


	// From: Req6Batch43Filler_PS_CN
	/* 21L, 219L, 787L, 810L, 959L, 1093L) */ if (/* 6L, 192L, 193L, 788L, 811L, 944L, 1094L) */ ((/* 3L, 190L, 194L, 789L, 812L, 941L, 1095L) */ (- (/* 2L, 189L, 195L, 790L, 813L, 940L, 1096L) */ ((var_1_14) - (var_1_24))))) < (last_1_var_1_26))) {
		/* 14L, 212L, 794L, 817L, 952L, 1101L) */ var_1_23 = (
			/* 13L, 211L, 797L, 820L, 951L, 1104L) */ ((
				var_1_24
			) + (
				/* 12L, 210L, 799L, 822L, 950L, 1106L) */ ((
					var_1_22
				) + (
					4u
				))
			))
		);
	} else {
		/* 20L, 218L, 802L, 825L, 958L, 1109L) */ var_1_23 = (
			/* 19L, 217L, 805L, 828L, 957L, 1112L) */ (min (
				/* 19L, 217L, 805L, 828L, 957L, 1112L) */ (
					var_1_14
				) , (
					var_1_25
				)
			))
		);
	}


	// From: Req7Batch43Filler_PS_CN
	/* 1117L, 254L, 879L, 894L) */ if (/* 1118L, 229L, 230L, 880L, 895L) */ ((var_1_6) != (49.125))) {
		/* 1121L, 252L, 883L, 898L) */ if (/* 1122L, 239L, 240L, 884L, 899L) */ ((/* 1123L, 237L, 241L, 885L, 900L) */ (abs (64u))) < (var_1_23))) {
			/* 1126L, 251L, 888L, 903L) */ var_1_26 = (
				var_1_15
			);
		}
	}


	// From: Req1Batch43Filler_PS_CN
	/* 988L, 36L, 262L, 284L) */ if (/* 989L, 9L, 10L, 263L, 285L) */ ((/* 990L, 3L, 11L, 264L, 286L) */ (- (1000.5f))) != (/* 992L, 8L, 13L, 266L, 288L) */ ((var_1_2) * (/* 994L, 7L, 15L, 268L, 290L) */ ((var_1_3) / (var_1_4))))))) {
		/* 997L, 31L, 271L, 293L) */ var_1_1 = (
			/* 1000L, 30L, 274L, 296L) */ (max (
				/* 1000L, 30L, 274L, 296L) */ (
					var_1_5
				) , (
					var_1_6
				)
			))
		);
	} else {
		/* 1003L, 35L, 277L, 299L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req2Batch43Filler_PS_CN
	/* 1010L, 65L, 402L, 415L) */ if (/* 1011L, 50L, 51L, 403L, 416L) */ ((-4) > (/* 1013L, 49L, 53L, 405L, 418L) */ ((var_1_8) & (var_1_9))))) {
		/* 1016L, 64L, 408L, 421L) */ var_1_7 = (
			var_1_10
		);
	}


	// From: Req3Batch43Filler_PS_CN
	/* 1022L, 100L, 453L, 475L) */ if (/* 1023L, 77L, 78L, 454L, 476L) */ ((var_1_1) > (var_1_4))) {
		/* 1026L, 87L, 457L, 479L) */ var_1_11 = (
			var_1_10
		);
	} else {
		/* 1030L, 99L, 461L, 483L) */ var_1_11 = (
			/* 1033L, 98L, 464L, 486L) */ (min (
				/* 1033L, 98L, 464L, 486L) */ (
					var_1_26
				) , (
					/* 1035L, 97L, 466L, 488L) */ ((
						/* 1036L, 93L, 467L, 489L) */ ((
							16
						) - (
							32
						))
					) + (
						/* 1039L, 96L, 470L, 492L) */ ((
							64
						) + (
							var_1_10
						))
					))
				)
			))
		);
	}


	// From: Req4Batch43Filler_PS_CN
	/* 1046L, 117L, 543L, 555L) */ if (var_1_13) {
		/* 1048L, 116L, 545L, 557L) */ var_1_12 = (
			/* 1051L, 115L, 548L, 560L) */ ((
				var_1_14
			) - (
				var_1_15
			))
		);
	}


	// From: Req5Batch43Filler_PS_CN
	signed char stepLocal_0 = var_1_20;
	/* 1088L, 181L, 654L, 687L) */ if (/* 1064L, 135L, 136L, 655L, 688L) */ ((var_1_2) <= (/* 1063L, 134L, 138L, 657L, 690L) */ ((/* 1061L, 132L, 139L, 658L, 691L) */ (min (/* 1061L, 132L, 139L, 658L, 691L) */ (var_1_3) , (var_1_17)))) + (var_1_1))))) {
		/* 1074L, 159L, 662L, 695L) */ var_1_16 = (
			/* 1073L, 158L, 665L, 698L) */ (min (
				/* 1073L, 158L, 665L, 698L) */ (
					var_1_10
				) , (
					/* 1072L, 157L, 667L, 700L) */ ((
						/* 1070L, 155L, 668L, 701L) */ (min (
							/* 1070L, 155L, 668L, 701L) */ (
								var_1_18
							) , (
								var_1_19
							)
						))
					) + (
						var_1_20
					))
				)
			))
		);
	} else {
		/* 1087L, 179L, 672L, 705L) */ if (/* 1076L, 162L, 163L, 673L, 706L) */ ((var_1_19) < (stepLocal_0))) {
			/* 1082L, 174L, 676L, 709L) */ var_1_16 = (
				/* 1081L, 173L, 679L, 712L) */ ((
					var_1_21
				) - (
					var_1_22
				))
			);
		} else {
			/* 1086L, 178L, 682L, 715L) */ var_1_16 = (
				var_1_10
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 65535);
	assume_abort_if_not(var_1_41 != 0);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 4294967295);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 2147483647);
	assume_abort_if_not(var_1_44 <= 4294967294);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 32767);
	assume_abort_if_not(var_1_46 <= 65535);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -127);
	assume_abort_if_not(var_1_47 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	if (/* 319L, 9L, 18L, 307L, 329L, 1134L) */ ((/* 320L, 3L, 19L, 308L, 330L, 1135L) */ (- (1000.5f))) != (/* 322L, 8L, 21L, 310L, 332L, 1137L) */ ((var_1_2) * (/* 324L, 7L, 23L, 312L, 334L, 1139L) */ ((var_1_3) / (var_1_4))))))) {
	} else {
	}
	if (/* 341L, 50L, 56L, 429L, 442L, 1156L) */ ((-4) > (/* 343L, 49L, 58L, 431L, 444L, 1158L) */ ((var_1_8) & (var_1_9))))) {
	}
	if (/* 353L, 77L, 81L, 498L, 520L, 1168L) */ ((var_1_1) > (var_1_4))) {
	} else {
	}
	if (var_1_13) {
	}
	if (/* 386L, 135L, 143L, 721L, 754L, 1201L) */ ((var_1_2) <= (/* 388L, 134L, 145L, 723L, 756L, 1203L) */ ((/* 389L, 132L, 146L, 724L, 757L, 1204L) */ (min (/* 389L, 132L, 146L, 724L, 757L, 1204L) */ (var_1_3) , (var_1_17)))) + (var_1_1))))) {
	} else {
		if (/* 404L, 162L, 166L, 739L, 772L, 1219L) */ ((var_1_19) < (var_1_20))) {
		} else {
		}
	}
	if (/* 420L, 192L, 199L, 834L, 857L, 968L, 1235L, 30L) */ ((/* 421L, 190L, 200L, 835L, 858L, 965L, 1236L, 27L) */ (- (/* 422L, 189L, 201L, 836L, 859L, 964L, 1237L, 26L) */ ((var_1_14) - (var_1_24))))) < (last_1_var_1_26))) {
	} else {
	}
	if (/* 444L, 229L, 233L, 910L, 925L, 1259L) */ ((var_1_6) != (49.125))) {
		if (/* 448L, 239L, 244L, 914L, 929L, 1263L) */ ((/* 449L, 237L, 245L, 915L, 930L, 1264L) */ (abs (64u))) < (var_1_23))) {
		}
	}
	return /* 462L) */ ((
	/* 461L) */ ((
		/* 460L) */ ((
			/* 459L) */ ((
				/* 458L) */ ((
					/* 457L) */ ((
						/* 318L, 37L, 306L, 328L, 1133L) */ ((
							/* 319L, 9L, 18L, 307L, 329L, 1134L) */ ((
								/* 320L, 3L, 19L, 308L, 330L, 1135L) */ (- (
									1000.5f
								))
							) != (
								/* 322L, 8L, 21L, 310L, 332L, 1137L) */ ((
									var_1_2
								) * (
									/* 324L, 7L, 23L, 312L, 334L, 1139L) */ ((
										var_1_3
									) / (
										var_1_4
									))
								))
							))
						) ? (
							/* 327L, 31L, 315L, 337L, 1142L) */ ((
								var_1_1
							) == (
								/* 327L, 31L, 315L, 337L, 1142L) */ ((double) (
									/* 330L, 30L, 318L, 340L, 1145L) */ (max (
										/* 330L, 30L, 318L, 340L, 1145L) */ (
											var_1_5
										) , (
											var_1_6
										)
									))
								))
							))
						) : (
							/* 333L, 35L, 321L, 343L, 1148L) */ ((
								var_1_1
							) == (
								/* 333L, 35L, 321L, 343L, 1148L) */ ((double) (
									var_1_5
								))
							))
						))
					) && (
						/* 340L, 66L, 428L, 441L, 1155L) */ ((
							/* 341L, 50L, 56L, 429L, 442L, 1156L) */ ((
								-4
							) > (
								/* 343L, 49L, 58L, 431L, 444L, 1158L) */ ((
									var_1_8
								) & (
									var_1_9
								))
							))
						) ? (
							/* 346L, 64L, 434L, 447L, 1161L) */ ((
								var_1_7
							) == (
								/* 346L, 64L, 434L, 447L, 1161L) */ ((signed char) (
									var_1_10
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 352L, 101L, 497L, 519L, 1167L) */ ((
						/* 353L, 77L, 81L, 498L, 520L, 1168L) */ ((
							var_1_1
						) > (
							var_1_4
						))
					) ? (
						/* 356L, 87L, 501L, 523L, 1171L) */ ((
							var_1_11
						) == (
							/* 356L, 87L, 501L, 523L, 1171L) */ ((signed short int) (
								var_1_10
							))
						))
					) : (
						/* 360L, 99L, 505L, 527L, 1175L) */ ((
							var_1_11
						) == (
							/* 360L, 99L, 505L, 527L, 1175L) */ ((signed short int) (
								/* 363L, 98L, 508L, 530L, 1178L) */ (min (
									/* 363L, 98L, 508L, 530L, 1178L) */ (
										var_1_26
									) , (
										/* 365L, 97L, 510L, 532L, 1180L) */ ((
											/* 366L, 93L, 511L, 533L, 1181L) */ ((
												16
											) - (
												32
											))
										) + (
											/* 369L, 96L, 514L, 536L, 1184L) */ ((
												64
											) + (
												var_1_10
											))
										))
									)
								))
							))
						))
					))
				))
			) && (
				/* 376L, 118L, 567L, 579L, 1191L) */ ((
					var_1_13
				) ? (
					/* 378L, 116L, 569L, 581L, 1193L) */ ((
						var_1_12
					) == (
						/* 378L, 116L, 569L, 581L, 1193L) */ ((unsigned short int) (
							/* 381L, 115L, 572L, 584L, 1196L) */ ((
								var_1_14
							) - (
								var_1_15
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 385L, 182L, 720L, 753L, 1200L) */ ((
				/* 386L, 135L, 143L, 721L, 754L, 1201L) */ ((
					var_1_2
				) <= (
					/* 388L, 134L, 145L, 723L, 756L, 1203L) */ ((
						/* 389L, 132L, 146L, 724L, 757L, 1204L) */ (min (
							/* 389L, 132L, 146L, 724L, 757L, 1204L) */ (
								var_1_3
							) , (
								var_1_17
							)
						))
					) + (
						var_1_1
					))
				))
			) ? (
				/* 393L, 159L, 728L, 761L, 1208L) */ ((
					var_1_16
				) == (
					/* 393L, 159L, 728L, 761L, 1208L) */ ((signed char) (
						/* 396L, 158L, 731L, 764L, 1211L) */ (min (
							/* 396L, 158L, 731L, 764L, 1211L) */ (
								var_1_10
							) , (
								/* 398L, 157L, 733L, 766L, 1213L) */ ((
									/* 399L, 155L, 734L, 767L, 1214L) */ (min (
										/* 399L, 155L, 734L, 767L, 1214L) */ (
											var_1_18
										) , (
											var_1_19
										)
									))
								) + (
									var_1_20
								))
							)
						))
					))
				))
			) : (
				/* 403L, 180L, 738L, 771L, 1218L) */ ((
					/* 404L, 162L, 166L, 739L, 772L, 1219L) */ ((
						var_1_19
					) < (
						var_1_20
					))
				) ? (
					/* 407L, 174L, 742L, 775L, 1222L) */ ((
						var_1_16
					) == (
						/* 407L, 174L, 742L, 775L, 1222L) */ ((signed char) (
							/* 410L, 173L, 745L, 778L, 1225L) */ ((
								var_1_21
							) - (
								var_1_22
							))
						))
					))
				) : (
					/* 413L, 178L, 748L, 781L, 1228L) */ ((
						var_1_16
					) == (
						/* 413L, 178L, 748L, 781L, 1228L) */ ((signed char) (
							var_1_10
						))
					))
				))
			))
		))
	) && (
		/* 419L, 220L, 833L, 856L, 983L, 1234L, 45L) */ ((
			/* 420L, 192L, 199L, 834L, 857L, 968L, 1235L, 30L) */ ((
				/* 421L, 190L, 200L, 835L, 858L, 965L, 1236L, 27L) */ (- (
					/* 422L, 189L, 201L, 836L, 859L, 964L, 1237L, 26L) */ ((
						var_1_14
					) - (
						var_1_24
					))
				))
			) < (
				last_1_var_1_26
			))
		) ? (
			/* 427L, 212L, 840L, 863L, 976L, 1242L, 38L) */ ((
				var_1_23
			) == (
				/* 427L, 212L, 840L, 863L, 976L, 1242L, 38L) */ ((unsigned long int) (
					/* 430L, 211L, 843L, 866L, 975L, 1245L, 37L) */ ((
						var_1_24
					) + (
						/* 432L, 210L, 845L, 868L, 974L, 1247L, 36L) */ ((
							var_1_22
						) + (
							4u
						))
					))
				))
			))
		) : (
			/* 435L, 218L, 848L, 871L, 982L, 1250L, 44L) */ ((
				var_1_23
			) == (
				/* 435L, 218L, 848L, 871L, 982L, 1250L, 44L) */ ((unsigned long int) (
					/* 438L, 217L, 851L, 874L, 981L, 1253L, 43L) */ (min (
						/* 438L, 217L, 851L, 874L, 981L, 1253L, 43L) */ (
							var_1_14
						) , (
							var_1_25
						)
					))
				))
			))
		))
	))
) && (
	/* 443L, 255L, 909L, 924L, 1258L) */ ((
		/* 444L, 229L, 233L, 910L, 925L, 1259L) */ ((
			var_1_6
		) != (
			49.125
		))
	) ? (
		/* 447L, 253L, 913L, 928L, 1262L) */ ((
			/* 448L, 239L, 244L, 914L, 929L, 1263L) */ ((
				/* 449L, 237L, 245L, 915L, 930L, 1264L) */ (abs (
					64u
				))
			) < (
				var_1_23
			))
		) ? (
			/* 452L, 251L, 918L, 933L, 1267L) */ ((
				var_1_26
			) == (
				/* 452L, 251L, 918L, 933L, 1267L) */ ((signed long int) (
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
