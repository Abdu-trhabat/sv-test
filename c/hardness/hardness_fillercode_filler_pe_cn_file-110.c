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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = -1;
signed long int var_1_2 = 1;
signed long int var_1_3 = -10;
signed long int var_1_4 = -1000;
signed long int var_1_5 = -16;
signed char var_1_6 = 1;
signed char var_1_7 = 4;
signed char var_1_8 = 64;
signed char var_1_9 = 4;
signed long int var_1_10 = 10;
signed long int var_1_11 = 10;
signed long int var_1_12 = -1;
signed char var_1_14 = 1;
signed short int var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 16.5;
double var_1_21 = 1.075;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 10.6;
unsigned char var_1_27 = 100;
signed char var_1_28 = 1;
unsigned char var_1_29 = 1;
signed long int var_1_30 = -25;
unsigned char var_1_31 = 4;
double var_1_32 = 4.6;
double var_1_33 = 1.75;
double var_1_34 = 256.4;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 2;
unsigned short int var_1_38 = 64073;
unsigned char var_1_39 = 0;
double var_1_40 = 0.4;
unsigned short int var_1_41 = 5;
signed char var_1_42 = -32;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_11 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch110Filler_PE_CN
	/* 14L, 79L, 509L, 528L, 1033L, 1091L) */ if (/* 4L, 53L, 54L, 510L, 529L, 1023L, 1092L) */ ((var_1_5) < (/* 3L, 52L, 56L, 512L, 531L, 1022L, 1094L) */ ((var_1_8) - (var_1_9))))) {
		/* 13L, 77L, 515L, 534L, 1032L, 1097L) */ if (/* 8L, 66L, 67L, 516L, 535L, 1027L, 1098L) */ ((last_1_var_1_11) >= (var_1_6))) {
			/* 12L, 76L, 519L, 538L, 1031L, 1102L) */ var_1_10 = (
				128
			);
		}
	}


	// From: Req1Batch110Filler_PE_CN
	/* 1060L, 41L, 394L, 422L) */ if (/* 1061L, 8L, 9L, 395L, 423L) */ ((var_1_2) != (/* 1063L, 7L, 11L, 397L, 425L) */ ((/* 1064L, 5L, 12L, 398L, 426L) */ (min (/* 1064L, 5L, 12L, 398L, 426L) */ (var_1_3) , (var_1_4)))) / (var_1_5))))) {
		/* 1068L, 30L, 402L, 430L) */ var_1_1 = (
			/* 1071L, 29L, 405L, 433L) */ (max (
				/* 1071L, 29L, 405L, 433L) */ (
					/* 1072L, 27L, 406L, 434L) */ ((
						var_1_6
					) + (
						25
					))
				) , (
					var_1_7
				)
			))
		);
	} else {
		/* 1076L, 40L, 410L, 438L) */ var_1_1 = (
			/* 1079L, 39L, 413L, 441L) */ ((
				/* 1080L, 37L, 414L, 442L) */ ((
					var_1_8
				) - (
					/* 1082L, 36L, 416L, 444L) */ ((
						var_1_9
					) + (
						2
					))
				))
			) - (
				10
			))
		);
	}


	// From: Req6Batch110Filler_PE_CN
	/* 1182L, 241L, 908L, 916L) */ var_1_20 = (
		/* 1185L, 240L, 911L, 919L) */ (min (
			/* 1185L, 240L, 911L, 919L) */ (
				var_1_21
			) , (
				8.25
			)
		))
	);


	// From: Req7Batch110Filler_PE_CN
	/* 1190L, 275L, 940L, 960L) */ if (/* 1191L, 252L, 253L, 941L, 961L) */ ((/* 1192L, 250L, 254L, 942L, 962L) */ ((var_1_8) == (var_1_6))) && (var_1_19))) {
		/* 1196L, 270L, 946L, 966L) */ var_1_22 = (
			/* 1199L, 269L, 949L, 969L) */ ((
				/* 1200L, 267L, 950L, 970L) */ ((
					var_1_23
				) || (
					var_1_24
				))
			) || (
				var_1_25
			))
		);
	} else {
		/* 1204L, 274L, 954L, 974L) */ var_1_22 = (
			var_1_25
		);
	}


	// From: Req5Batch110Filler_PE_CN
	/* 1172L, 228L, 868L, 878L) */ if (var_1_22) {
		/* 1174L, 227L, 870L, 880L) */ var_1_17 = (
			/* 1177L, 226L, 873L, 883L) */ ((
				var_1_18
			) && (
				var_1_19
			))
		);
	}


	// From: Req3Batch110Filler_PE_CN
	/* 1108L, 147L, 640L, 670L) */ if (/* 1109L, 105L, 106L, 641L, 671L) */ ((/* 1110L, 96L, 107L, 642L, 672L) */ (- (/* 1111L, 95L, 108L, 643L, 673L) */ ((last_1_var_1_11) + (var_1_10))))) != (/* 1115L, 104L, 111L, 647L, 677L) */ ((/* 1116L, 99L, 112L, 648L, 678L) */ (min (/* 1116L, 99L, 112L, 648L, 678L) */ (var_1_9) , (var_1_5)))) * (/* 1119L, 103L, 115L, 651L, 681L) */ ((var_1_12) / (var_1_8))))))) {
		/* 1122L, 141L, 654L, 684L) */ if (var_1_22) {
			/* 1124L, 136L, 656L, 686L) */ var_1_11 = (
				var_1_7
			);
		} else {
			/* 1128L, 140L, 660L, 690L) */ var_1_11 = (
				var_1_6
			);
		}
	} else {
		/* 1132L, 146L, 664L, 694L) */ var_1_11 = (
			var_1_7
		);
	}


	// From: Req4Batch110Filler_PE_CN
	signed long int stepLocal_1 = var_1_11;
	signed long int stepLocal_0 = /* 1138L, 179L, 187L, 772L, 799L) */ ((/* 1139L, 177L, 188L, 773L, 800L) */ ((var_1_8) >> (var_1_16))) + (var_1_6));
	/* 1166L, 213L, 759L, 786L) */ if (/* 1150L, 159L, 160L, 760L, 787L) */ ((/* 1149L, 157L, 161L, 761L, 788L) */ ((var_1_8) - (var_1_9))) < (stepLocal_1))) {
		/* 1165L, 211L, 765L, 792L) */ if (/* 1156L, 180L, 181L, 766L, 793L) */ ((/* 1155L, 174L, 182L, 767L, 794L) */ (max (/* 1155L, 174L, 182L, 767L, 794L) */ (var_1_7) , (/* 1154L, 173L, 184L, 769L, 796L) */ ((var_1_5) ^ (var_1_10)))))) <= (stepLocal_0))) {
			/* 1160L, 206L, 777L, 804L) */ var_1_14 = (
				var_1_7
			);
		} else {
			/* 1164L, 210L, 781L, 808L) */ var_1_14 = (
				32
			);
		}
	}


	// From: CodeObject1
	/* 128L) */ if (/* 51L, 50L) */ ((/* 52L, 48L) */ ((var_1_27) / (var_1_28))) > (var_1_30))) {
		/* 117L) */ if (/* 68L, 67L) */ ((/* 69L, 63L) */ ((var_1_28) < (var_1_30))) && (/* 72L, 66L) */ ((var_1_27) == (var_1_31))))) {
			/* 115L) */ if (/* 85L, 84L) */ ((var_1_27) > (var_1_28))) {
				/* 103L) */ if (var_1_29) {
					/* 97L) */ var_1_26 = (
						var_1_32
					);
				} else {
					/* 102L) */ var_1_26 = (
						/* 101L) */ (abs (
							0.19999999999999996
						))
					);
				}
			} else {
				/* 114L) */ var_1_26 = (
					/* 113L) */ (min (
						/* 113L) */ (
							/* 111L) */ (max (
								/* 111L) */ (
									var_1_32
								) , (
									/* 110L) */ ((
										var_1_33
									) - (
										1.0000000000002E12
									))
								)
							))
						) , (
							var_1_34
						)
					))
				);
			}
		}
	} else {
		/* 126L) */ if (var_1_35) {
			/* 125L) */ var_1_26 = (
				var_1_33
			);
		}
	}


	// From: CodeObject2
	/* 146L) */ if (/* 135L, 134L) */ ((var_1_32) >= (var_1_33))) {
		/* 145L) */ var_1_36 = (
			/* 144L) */ (abs (
				var_1_28
			))
		);
	}


	// From: CodeObject3
	/* 190L) */ if (/* 161L, 160L) */ ((/* 162L, 158L) */ ((/* 163L, 154L) */ ((var_1_38) - (var_1_31))) - (/* 166L, 157L) */ (max (/* 166L, 157L) */ (var_1_27) , (var_1_28)))))) < (var_1_30))) {
		/* 184L) */ var_1_37 = (
			/* 183L) */ ((
				var_1_28
			) + (
				var_1_39
			))
		);
	} else {
		/* 189L) */ var_1_37 = (
			/* 188L) */ (abs (
				var_1_39
			))
		);
	}


	// From: CodeObject4
	/* 197L) */ var_1_40 = (
		var_1_34
	);


	// From: CodeObject5
	/* 239L) */ if (/* 205L, 204L) */ ((var_1_31) > (var_1_38))) {
		/* 237L) */ if (/* 214L, 213L) */ ((var_1_34) > (var_1_32))) {
			/* 225L) */ var_1_41 = (
				/* 224L) */ ((
					var_1_31
				) + (
					var_1_27
				))
			);
		} else {
			/* 236L) */ var_1_41 = (
				/* 235L) */ ((
					/* 232L) */ ((
						var_1_36
					) + (
						/* 231L) */ (max (
							/* 231L) */ (
								var_1_27
							) , (
								10
							)
						))
					))
				) + (
					/* 234L) */ (abs (
						var_1_37
					))
				))
			);
		}
	}


	// From: CodeObject6
	/* 266L) */ if (/* 247L, 246L) */ (! (/* 248L, 245L) */ ((var_1_28) <= (var_1_30))))) {
		/* 261L) */ var_1_42 = (
			/* 260L) */ (max (
				/* 260L) */ (
					/* 258L) */ (abs (
						var_1_28
					))
				) , (
					2
				)
			))
		);
	} else {
		/* 265L) */ var_1_42 = (
			var_1_28
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
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 62);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 6);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 255);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 7);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 49151);
	assume_abort_if_not(var_1_38 <= 65535);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
}

int property(void) {
	if (/* 270L, 8L, 16L, 451L, 479L, 1211L) */ ((var_1_2) != (/* 272L, 7L, 18L, 453L, 481L, 1213L) */ ((/* 273L, 5L, 19L, 454L, 482L, 1214L) */ (min (/* 273L, 5L, 19L, 454L, 482L, 1214L) */ (var_1_3) , (var_1_4)))) / (var_1_5))))) {
	} else {
	}
	if (/* 301L, 53L, 59L, 548L, 567L, 1043L, 1242L, 24L) */ ((var_1_5) < (/* 303L, 52L, 61L, 550L, 569L, 1042L, 1244L, 23L) */ ((var_1_8) - (var_1_9))))) {
		if (/* 307L, 66L, 70L, 554L, 573L, 1047L, 1248L, 28L) */ ((last_1_var_1_11) >= (var_1_6))) {
		}
	}
	if (/* 318L, 105L, 118L, 701L, 731L, 1259L) */ ((/* 319L, 96L, 119L, 702L, 732L, 1260L) */ (- (/* 320L, 95L, 120L, 703L, 733L, 1261L) */ ((last_1_var_1_11) + (var_1_10))))) != (/* 324L, 104L, 123L, 707L, 737L, 1265L) */ ((/* 325L, 99L, 124L, 708L, 738L, 1266L) */ (min (/* 325L, 99L, 124L, 708L, 738L, 1266L) */ (var_1_9) , (var_1_5)))) * (/* 328L, 103L, 127L, 711L, 741L, 1269L) */ ((var_1_12) / (var_1_8))))))) {
		if (var_1_22) {
		} else {
		}
	} else {
	}
	if (/* 347L, 159L, 165L, 814L, 841L, 1288L) */ ((/* 348L, 157L, 166L, 815L, 842L, 1289L) */ ((var_1_8) - (var_1_9))) < (var_1_11))) {
		if (/* 353L, 180L, 192L, 820L, 847L, 1294L) */ ((/* 354L, 174L, 193L, 821L, 848L, 1295L) */ (max (/* 354L, 174L, 193L, 821L, 848L, 1295L) */ (var_1_7) , (/* 356L, 173L, 195L, 823L, 850L, 1297L) */ ((var_1_5) ^ (var_1_10)))))) <= (/* 359L, 179L, 198L, 826L, 853L, 1300L) */ ((/* 360L, 177L, 199L, 827L, 854L, 1301L) */ ((var_1_8) >> (var_1_16))) + (var_1_6))))) {
		} else {
		}
	}
	if (var_1_22) {
	}
	if (/* 393L, 252L, 258L, 981L, 1001L, 1334L) */ ((/* 394L, 250L, 259L, 982L, 1002L, 1335L) */ ((var_1_8) == (var_1_6))) && (var_1_19))) {
	} else {
	}
	return /* 416L) */ ((
	/* 415L) */ ((
		/* 414L) */ ((
			/* 413L) */ ((
				/* 412L) */ ((
					/* 411L) */ ((
						/* 269L, 42L, 450L, 478L, 1210L) */ ((
							/* 270L, 8L, 16L, 451L, 479L, 1211L) */ ((
								var_1_2
							) != (
								/* 272L, 7L, 18L, 453L, 481L, 1213L) */ ((
									/* 273L, 5L, 19L, 454L, 482L, 1214L) */ (min (
										/* 273L, 5L, 19L, 454L, 482L, 1214L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								) / (
									var_1_5
								))
							))
						) ? (
							/* 277L, 30L, 458L, 486L, 1218L) */ ((
								var_1_1
							) == (
								/* 277L, 30L, 458L, 486L, 1218L) */ ((signed char) (
									/* 280L, 29L, 461L, 489L, 1221L) */ (max (
										/* 280L, 29L, 461L, 489L, 1221L) */ (
											/* 281L, 27L, 462L, 490L, 1222L) */ ((
												var_1_6
											) + (
												25
											))
										) , (
											var_1_7
										)
									))
								))
							))
						) : (
							/* 285L, 40L, 466L, 494L, 1226L) */ ((
								var_1_1
							) == (
								/* 285L, 40L, 466L, 494L, 1226L) */ ((signed char) (
									/* 288L, 39L, 469L, 497L, 1229L) */ ((
										/* 289L, 37L, 470L, 498L, 1230L) */ ((
											var_1_8
										) - (
											/* 291L, 36L, 472L, 500L, 1232L) */ ((
												var_1_9
											) + (
												2
											))
										))
									) - (
										10
									))
								))
							))
						))
					) && (
						/* 300L, 80L, 547L, 566L, 1053L, 1241L, 34L) */ ((
							/* 301L, 53L, 59L, 548L, 567L, 1043L, 1242L, 24L) */ ((
								var_1_5
							) < (
								/* 303L, 52L, 61L, 550L, 569L, 1042L, 1244L, 23L) */ ((
									var_1_8
								) - (
									var_1_9
								))
							))
						) ? (
							/* 306L, 78L, 553L, 572L, 1052L, 1247L, 33L) */ ((
								/* 307L, 66L, 70L, 554L, 573L, 1047L, 1248L, 28L) */ ((
									last_1_var_1_11
								) >= (
									var_1_6
								))
							) ? (
								/* 311L, 76L, 557L, 576L, 1051L, 1252L, 32L) */ ((
									var_1_10
								) == (
									/* 311L, 76L, 557L, 576L, 1051L, 1252L, 32L) */ ((signed long int) (
										128
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
					/* 317L, 148L, 700L, 730L, 1258L) */ ((
						/* 318L, 105L, 118L, 701L, 731L, 1259L) */ ((
							/* 319L, 96L, 119L, 702L, 732L, 1260L) */ (- (
								/* 320L, 95L, 120L, 703L, 733L, 1261L) */ ((
									last_1_var_1_11
								) + (
									var_1_10
								))
							))
						) != (
							/* 324L, 104L, 123L, 707L, 737L, 1265L) */ ((
								/* 325L, 99L, 124L, 708L, 738L, 1266L) */ (min (
									/* 325L, 99L, 124L, 708L, 738L, 1266L) */ (
										var_1_9
									) , (
										var_1_5
									)
								))
							) * (
								/* 328L, 103L, 127L, 711L, 741L, 1269L) */ ((
									var_1_12
								) / (
									var_1_8
								))
							))
						))
					) ? (
						/* 331L, 142L, 714L, 744L, 1272L) */ ((
							var_1_22
						) ? (
							/* 333L, 136L, 716L, 746L, 1274L) */ ((
								var_1_11
							) == (
								/* 333L, 136L, 716L, 746L, 1274L) */ ((signed long int) (
									var_1_7
								))
							))
						) : (
							/* 337L, 140L, 720L, 750L, 1278L) */ ((
								var_1_11
							) == (
								/* 337L, 140L, 720L, 750L, 1278L) */ ((signed long int) (
									var_1_6
								))
							))
						))
					) : (
						/* 341L, 146L, 724L, 754L, 1282L) */ ((
							var_1_11
						) == (
							/* 341L, 146L, 724L, 754L, 1282L) */ ((signed long int) (
								var_1_7
							))
						))
					))
				))
			) && (
				/* 346L, 214L, 813L, 840L, 1287L) */ ((
					/* 347L, 159L, 165L, 814L, 841L, 1288L) */ ((
						/* 348L, 157L, 166L, 815L, 842L, 1289L) */ ((
							var_1_8
						) - (
							var_1_9
						))
					) < (
						var_1_11
					))
				) ? (
					/* 352L, 212L, 819L, 846L, 1293L) */ ((
						/* 353L, 180L, 192L, 820L, 847L, 1294L) */ ((
							/* 354L, 174L, 193L, 821L, 848L, 1295L) */ (max (
								/* 354L, 174L, 193L, 821L, 848L, 1295L) */ (
									var_1_7
								) , (
									/* 356L, 173L, 195L, 823L, 850L, 1297L) */ ((
										var_1_5
									) ^ (
										var_1_10
									))
								)
							))
						) <= (
							/* 359L, 179L, 198L, 826L, 853L, 1300L) */ ((
								/* 360L, 177L, 199L, 827L, 854L, 1301L) */ ((
									var_1_8
								) >> (
									var_1_16
								))
							) + (
								var_1_6
							))
						))
					) ? (
						/* 364L, 206L, 831L, 858L, 1305L) */ ((
							var_1_14
						) == (
							/* 364L, 206L, 831L, 858L, 1305L) */ ((signed char) (
								var_1_7
							))
						))
					) : (
						/* 368L, 210L, 835L, 862L, 1309L) */ ((
							var_1_14
						) == (
							/* 368L, 210L, 835L, 862L, 1309L) */ ((signed char) (
								32
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 374L, 229L, 888L, 898L, 1315L) */ ((
				var_1_22
			) ? (
				/* 376L, 227L, 890L, 900L, 1317L) */ ((
					var_1_17
				) == (
					/* 376L, 227L, 890L, 900L, 1317L) */ ((unsigned char) (
						/* 379L, 226L, 893L, 903L, 1320L) */ ((
							var_1_18
						) && (
							var_1_19
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 384L, 241L, 924L, 932L, 1325L) */ ((
			var_1_20
		) == (
			/* 384L, 241L, 924L, 932L, 1325L) */ ((double) (
				/* 387L, 240L, 927L, 935L, 1328L) */ (min (
					/* 387L, 240L, 927L, 935L, 1328L) */ (
						var_1_21
					) , (
						8.25
					)
				))
			))
		))
	))
) && (
	/* 392L, 276L, 980L, 1000L, 1333L) */ ((
		/* 393L, 252L, 258L, 981L, 1001L, 1334L) */ ((
			/* 394L, 250L, 259L, 982L, 1002L, 1335L) */ ((
				var_1_8
			) == (
				var_1_6
			))
		) && (
			var_1_19
		))
	) ? (
		/* 398L, 270L, 986L, 1006L, 1339L) */ ((
			var_1_22
		) == (
			/* 398L, 270L, 986L, 1006L, 1339L) */ ((unsigned char) (
				/* 401L, 269L, 989L, 1009L, 1342L) */ ((
					/* 402L, 267L, 990L, 1010L, 1343L) */ ((
						var_1_23
					) || (
						var_1_24
					))
				) || (
					var_1_25
				))
			))
		))
	) : (
		/* 406L, 274L, 994L, 1014L, 1347L) */ ((
			var_1_22
		) == (
			/* 406L, 274L, 994L, 1014L, 1347L) */ ((unsigned char) (
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
