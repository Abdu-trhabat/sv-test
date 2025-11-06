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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 128;
unsigned long int var_1_2 = 32;
unsigned long int var_1_3 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 1114432789;
unsigned long int var_1_16 = 2;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
float var_1_25 = -0.575;
signed char var_1_27 = 5;
signed char var_1_28 = 1;
float var_1_30 = 10.8;
float var_1_31 = 49.2;
float var_1_32 = 0.4;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 32;
unsigned char var_1_37 = 64;
signed char var_1_38 = -8;
unsigned short int var_1_40 = 200;
unsigned long int var_1_42 = 2;
unsigned long int var_1_44 = 10;
unsigned short int var_1_45 = 16;

// Calibration values

// Last'ed variables
double last_1_var_1_17 = 256.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 295L, 87L) */ if (/* 296L, 64L, 65L) */ ((/* 297L, 62L, 66L) */ ((var_1_11) % (/* 299L, 61L, 68L) */ (max (/* 299L, 61L, 68L) */ (var_1_27) , (var_1_28)))))) > (var_1_3))) {
		/* 303L, 86L) */ var_1_25 = (
			/* 306L, 85L) */ ((
				/* 307L, 83L) */ (max (
					/* 307L, 83L) */ (
						var_1_30
					) , (
						var_1_31
					)
				))
			) - (
				var_1_32
			))
		);
	}


	// From: CodeObject2
	/* 336L, 128L) */ if (/* 337L, 96L, 97L) */ ((var_1_32) < (/* 339L, 95L, 99L) */ (max (/* 339L, 95L, 99L) */ (var_1_30) , (/* 341L, 94L, 101L) */ (abs (var_1_18)))))))) {
		/* 343L, 114L) */ var_1_33 = (
			/* 346L, 113L) */ (max (
				/* 346L, 113L) */ (
					var_1_34
				) , (
					var_1_35
				)
			))
		);
	} else {
		/* 349L, 126L) */ if (var_1_24) {
			/* 351L, 125L) */ var_1_33 = (
				/* 354L, 124L) */ ((
					/* 355L, 122L) */ ((
						64
					) + (
						var_1_37
					))
				) - (
					50
				))
			);
		}
	}


	// From: CodeObject3
	/* 360L, 137L) */ var_1_38 = (
		var_1_10
	);


	// From: CodeObject4
	/* 364L, 181L) */ if (/* 365L, 147L, 148L) */ ((/* 366L, 144L, 149L) */ ((var_1_37) >= (var_1_2))) || (/* 369L, 146L, 152L) */ (! (0))))) {
		/* 371L, 163L) */ var_1_40 = (
			var_1_7
		);
	} else {
		/* 375L, 179L) */ if (/* 376L, 166L, 167L) */ ((var_1_14) && (var_1_24))) {
			/* 379L, 178L) */ var_1_40 = (
				/* 382L, 177L) */ ((
					var_1_37
				) + (
					var_1_2
				))
			);
		}
	}


	// From: CodeObject5
	/* 385L, 240L) */ if (/* 386L, 192L, 193L) */ ((/* 387L, 186L, 194L) */ (abs (1.000000095E7f))) < (/* 389L, 191L, 196L) */ ((/* 390L, 189L, 197L) */ ((9.9999999999996E12f) - (var_1_31))) / (var_1_22))))) {
		/* 394L, 234L) */ if (/* 395L, 215L, 216L) */ ((var_1_22) < (/* 397L, 214L, 218L) */ (max (/* 397L, 214L, 218L) */ (var_1_30) , (/* 399L, 213L, 220L) */ ((var_1_31) - (var_1_32)))))))) {
			/* 402L, 233L) */ var_1_42 = (
				var_1_2
			);
		}
	} else {
		/* 406L, 239L) */ var_1_42 = (
			100000u
		);
	}


	// From: CodeObject6
	/* 424L, 253L) */ var_1_44 = (
		/* 427L, 252L) */ ((
			/* 428L, 247L) */ (abs (
				var_1_37
			))
		) + (
			/* 430L, 251L) */ (abs (
				/* 431L, 250L) */ (max (
					/* 431L, 250L) */ (
						var_1_34
					) , (
						var_1_35
					)
				))
			))
		))
	);


	// From: CodeObject7
	/* 457L, 293L) */ if (var_1_24) {
		/* 459L, 270L) */ var_1_45 = (
			/* 462L, 269L) */ (max (
				/* 462L, 269L) */ (
					/* 463L, 267L) */ (max (
						/* 463L, 267L) */ (
							var_1_34
						) , (
							var_1_35
						)
					))
				) , (
					var_1_37
				)
			))
		);
	} else {
		/* 467L, 291L) */ if (/* 468L, 274L, 275L) */ ((var_1_9) > (/* 470L, 273L, 277L) */ (abs (var_1_11))))) {
			/* 472L, 286L) */ var_1_45 = (
				var_1_34
			);
		} else {
			/* 476L, 290L) */ var_1_45 = (
				10
			);
		}
	}


	// From: Req1Batch51Filler_PS_CI
	unsigned long int stepLocal_1 = var_1_3;
	unsigned long int stepLocal_0 = var_1_2;
	/* 29L, 47L, 361L, 384L, 1101L, 1153L) */ if (/* 9L, 4L, 5L, 362L, 385L, 1081L, 1134L) */ ((32u) >= (stepLocal_0))) {
		/* 24L, 41L, 365L, 388L, 1096L, 1148L) */ if (/* 12L, 13L, 14L, 366L, 389L, 1084L, 1136L) */ ((var_1_2) <= (stepLocal_1))) {
			/* 23L, 39L, 369L, 392L, 1095L, 1147L) */ if (/* 18L, 24L, 25L, 370L, 393L, 1090L, 1142L) */ ((/* 15L, 22L, 26L, 371L, 394L, 1087L, 1139L) */ ((var_1_4) - (var_1_5))) >= (last_1_var_1_17))) {
				/* 22L, 38L, 375L, 398L, 1094L, 1146L) */ var_1_1 = (
					var_1_7
				);
			}
		}
	} else {
		/* 28L, 46L, 379L, 402L, 1100L, 1152L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req3Batch51Filler_PS_CI
	unsigned char stepLocal_2 = var_1_13;
	/* 1200L, 115L, 575L, 598L) */ if (/* 1181L, 87L, 88L, 576L, 599L) */ ((stepLocal_2) && (var_1_14))) {
		/* 1185L, 97L, 579L, 602L) */ var_1_12 = (
			var_1_11
		);
	} else {
		/* 1199L, 113L, 583L, 606L) */ if (var_1_13) {
			/* 1198L, 112L, 585L, 608L) */ var_1_12 = (
				/* 1197L, 111L, 588L, 611L) */ ((
					/* 1193L, 107L, 589L, 612L) */ (max (
						/* 1193L, 107L, 589L, 612L) */ (
							var_1_1
						) , (
							/* 1192L, 106L, 591L, 614L) */ ((
								var_1_11
							) + (
								var_1_7
							))
						)
					))
				) + (
					/* 1196L, 110L, 594L, 617L) */ ((
						var_1_15
					) - (
						var_1_16
					))
				))
			);
		}
	}


	// From: Req4Batch51Filler_PS_CI
	/* 1205L, 144L, 668L, 681L) */ if (/* 1206L, 127L, 128L, 669L, 682L) */ ((/* 1207L, 125L, 129L, 670L, 683L) */ (min (/* 1207L, 125L, 129L, 670L, 683L) */ (/* 1208L, 123L, 130L, 671L, 684L) */ (~ (var_1_12))) , (8)))) > (var_1_11))) {
		/* 1212L, 143L, 675L, 688L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: Req2Batch51Filler_PS_CI
	/* 1159L, 77L, 454L, 473L) */ if (/* 1160L, 56L, 57L, 455L, 474L) */ (! (/* 1161L, 55L, 58L, 456L, 475L) */ ((var_1_17) > (var_1_5))))) {
		/* 1164L, 72L, 459L, 478L) */ var_1_8 = (
			/* 1167L, 71L, 462L, 481L) */ ((
				/* 1168L, 69L, 463L, 482L) */ (min (
					/* 1168L, 69L, 463L, 482L) */ (
						var_1_9
					) , (
						var_1_10
					)
				))
			) - (
				var_1_11
			))
		);
	} else {
		/* 1172L, 76L, 467L, 486L) */ var_1_8 = (
			-4
		);
	}


	// From: Req6Batch51Filler_PS_CI
	unsigned long int stepLocal_4 = var_1_3;
	/* 1279L, 265L, 951L, 983L) */ if (/* 1256L, 217L, 218L, 952L, 984L) */ ((/* 1254L, 215L, 219L, 953L, 985L) */ ((var_1_18) / (/* 1253L, 214L, 221L, 955L, 987L) */ (max (/* 1253L, 214L, 221L, 955L, 987L) */ (5.5) , (var_1_22)))))) > (10.5))) {
		/* 1274L, 259L, 959L, 991L) */ if (var_1_13) {
			/* 1269L, 253L, 961L, 993L) */ if (/* 1259L, 237L, 238L, 962L, 994L) */ ((var_1_2) < (stepLocal_4))) {
				/* 1264L, 248L, 965L, 997L) */ var_1_21 = (
					/* 1263L, 247L, 968L, 1000L) */ (! (
						var_1_23
					))
				);
			} else {
				/* 1268L, 252L, 970L, 1002L) */ var_1_21 = (
					var_1_24
				);
			}
		} else {
			/* 1273L, 258L, 974L, 1006L) */ var_1_21 = (
				var_1_23
			);
		}
	} else {
		/* 1278L, 264L, 978L, 1010L) */ var_1_21 = (
			var_1_23
		);
	}


	// From: Req5Batch51Filler_PS_CI
	unsigned char stepLocal_3 = /* 1218L, 163L, 167L, 722L, 748L) */ ((/* 1219L, 161L, 168L, 723L, 749L) */ (max (/* 1219L, 161L, 168L, 723L, 749L) */ (var_1_4) , (var_1_17)))) > (var_1_18));
	/* 1243L, 205L, 719L, 745L) */ if (/* 1225L, 164L, 165L, 720L, 746L) */ ((var_1_21) || (stepLocal_3))) {
		/* 1238L, 199L, 727L, 753L) */ if (/* 1229L, 182L, 183L, 728L, 754L) */ ((var_1_18) > (/* 1228L, 181L, 185L, 730L, 756L) */ (abs (var_1_17))))) {
			/* 1233L, 194L, 732L, 758L) */ var_1_19 = (
				var_1_16
			);
		} else {
			/* 1237L, 198L, 736L, 762L) */ var_1_19 = (
				var_1_11
			);
		}
	} else {
		/* 1242L, 204L, 740L, 766L) */ var_1_19 = (
			var_1_16
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741823);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -128);
	assume_abort_if_not(var_1_27 <= 127);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	assume_abort_if_not(var_1_28 != 0);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 64);
	assume_abort_if_not(var_1_37 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 481L, 4L, 8L, 408L, 431L, 1105L, 1284L, 34L) */ ((32u) >= (var_1_2))) {
		if (/* 485L, 13L, 17L, 412L, 435L, 1108L, 1288L, 37L) */ ((var_1_2) <= (var_1_3))) {
			if (/* 489L, 24L, 30L, 416L, 439L, 1114L, 1292L, 43L) */ ((/* 490L, 22L, 31L, 417L, 440L, 1111L, 1293L, 40L) */ ((var_1_4) - (var_1_5))) >= (last_1_var_1_17))) {
			}
		}
	} else {
	}
	if (/* 506L, 56L, 61L, 493L, 512L, 1309L) */ (! (/* 507L, 55L, 62L, 494L, 513L, 1310L) */ ((var_1_17) > (var_1_5))))) {
	} else {
	}
	if (/* 524L, 87L, 91L, 622L, 645L, 1327L) */ ((var_1_13) && (var_1_14))) {
	} else {
		if (var_1_13) {
		}
	}
	if (/* 548L, 127L, 134L, 695L, 708L, 1351L) */ ((/* 549L, 125L, 135L, 696L, 709L, 1352L) */ (min (/* 549L, 125L, 135L, 696L, 709L, 1352L) */ (/* 550L, 123L, 136L, 697L, 710L, 1353L) */ (~ (var_1_12))) , (8)))) > (var_1_11))) {
	}
	if (/* 560L, 164L, 172L, 772L, 798L, 1363L) */ ((var_1_21) || (/* 562L, 163L, 174L, 774L, 800L, 1365L) */ ((/* 563L, 161L, 175L, 775L, 801L, 1366L) */ (max (/* 563L, 161L, 175L, 775L, 801L, 1366L) */ (var_1_4) , (var_1_17)))) > (var_1_18))))) {
		if (/* 568L, 182L, 187L, 780L, 806L, 1371L) */ ((var_1_18) > (/* 570L, 181L, 189L, 782L, 808L, 1373L) */ (abs (var_1_17))))) {
		} else {
		}
	} else {
	}
	if (/* 586L, 217L, 225L, 1016L, 1048L, 1389L) */ ((/* 587L, 215L, 226L, 1017L, 1049L, 1390L) */ ((var_1_18) / (/* 589L, 214L, 228L, 1019L, 1051L, 1392L) */ (max (/* 589L, 214L, 228L, 1019L, 1051L, 1392L) */ (5.5) , (var_1_22)))))) > (10.5))) {
		if (var_1_13) {
			if (/* 596L, 237L, 241L, 1026L, 1058L, 1399L) */ ((var_1_2) < (var_1_3))) {
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 621L) */ ((
	/* 620L) */ ((
		/* 619L) */ ((
			/* 618L) */ ((
				/* 617L) */ ((
					/* 480L, 48L, 407L, 430L, 1125L, 1283L, 54L) */ ((
						/* 481L, 4L, 8L, 408L, 431L, 1105L, 1284L, 34L) */ ((
							32u
						) >= (
							var_1_2
						))
					) ? (
						/* 484L, 42L, 411L, 434L, 1120L, 1287L, 49L) */ ((
							/* 485L, 13L, 17L, 412L, 435L, 1108L, 1288L, 37L) */ ((
								var_1_2
							) <= (
								var_1_3
							))
						) ? (
							/* 488L, 40L, 415L, 438L, 1119L, 1291L, 48L) */ ((
								/* 489L, 24L, 30L, 416L, 439L, 1114L, 1292L, 43L) */ ((
									/* 490L, 22L, 31L, 417L, 440L, 1111L, 1293L, 40L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								) >= (
									last_1_var_1_17
								))
							) ? (
								/* 495L, 38L, 421L, 444L, 1118L, 1298L, 47L) */ ((
									var_1_1
								) == (
									/* 495L, 38L, 421L, 444L, 1118L, 1298L, 47L) */ ((unsigned char) (
										var_1_7
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) : (
						/* 499L, 46L, 425L, 448L, 1124L, 1302L, 53L) */ ((
							var_1_1
						) == (
							/* 499L, 46L, 425L, 448L, 1124L, 1302L, 53L) */ ((unsigned char) (
								var_1_7
							))
						))
					))
				) && (
					/* 505L, 78L, 492L, 511L, 1308L) */ ((
						/* 506L, 56L, 61L, 493L, 512L, 1309L) */ (! (
							/* 507L, 55L, 62L, 494L, 513L, 1310L) */ ((
								var_1_17
							) > (
								var_1_5
							))
						))
					) ? (
						/* 510L, 72L, 497L, 516L, 1313L) */ ((
							var_1_8
						) == (
							/* 510L, 72L, 497L, 516L, 1313L) */ ((signed char) (
								/* 513L, 71L, 500L, 519L, 1316L) */ ((
									/* 514L, 69L, 501L, 520L, 1317L) */ (min (
										/* 514L, 69L, 501L, 520L, 1317L) */ (
											var_1_9
										) , (
											var_1_10
										)
									))
								) - (
									var_1_11
								))
							))
						))
					) : (
						/* 518L, 76L, 505L, 524L, 1321L) */ ((
							var_1_8
						) == (
							/* 518L, 76L, 505L, 524L, 1321L) */ ((signed char) (
								-4
							))
						))
					))
				))
			) && (
				/* 523L, 116L, 621L, 644L, 1326L) */ ((
					/* 524L, 87L, 91L, 622L, 645L, 1327L) */ ((
						var_1_13
					) && (
						var_1_14
					))
				) ? (
					/* 527L, 97L, 625L, 648L, 1330L) */ ((
						var_1_12
					) == (
						/* 527L, 97L, 625L, 648L, 1330L) */ ((unsigned long int) (
							var_1_11
						))
					))
				) : (
					/* 531L, 114L, 629L, 652L, 1334L) */ ((
						var_1_13
					) ? (
						/* 533L, 112L, 631L, 654L, 1336L) */ ((
							var_1_12
						) == (
							/* 533L, 112L, 631L, 654L, 1336L) */ ((unsigned long int) (
								/* 536L, 111L, 634L, 657L, 1339L) */ ((
									/* 537L, 107L, 635L, 658L, 1340L) */ (max (
										/* 537L, 107L, 635L, 658L, 1340L) */ (
											var_1_1
										) , (
											/* 539L, 106L, 637L, 660L, 1342L) */ ((
												var_1_11
											) + (
												var_1_7
											))
										)
									))
								) + (
									/* 542L, 110L, 640L, 663L, 1345L) */ ((
										var_1_15
									) - (
										var_1_16
									))
								))
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 547L, 145L, 694L, 707L, 1350L) */ ((
				/* 548L, 127L, 134L, 695L, 708L, 1351L) */ ((
					/* 549L, 125L, 135L, 696L, 709L, 1352L) */ (min (
						/* 549L, 125L, 135L, 696L, 709L, 1352L) */ (
							/* 550L, 123L, 136L, 697L, 710L, 1353L) */ (~ (
								var_1_12
							))
						) , (
							8
						)
					))
				) > (
					var_1_11
				))
			) ? (
				/* 554L, 143L, 701L, 714L, 1357L) */ ((
					var_1_17
				) == (
					/* 554L, 143L, 701L, 714L, 1357L) */ ((double) (
						var_1_18
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 559L, 206L, 771L, 797L, 1362L) */ ((
			/* 560L, 164L, 172L, 772L, 798L, 1363L) */ ((
				var_1_21
			) || (
				/* 562L, 163L, 174L, 774L, 800L, 1365L) */ ((
					/* 563L, 161L, 175L, 775L, 801L, 1366L) */ (max (
						/* 563L, 161L, 175L, 775L, 801L, 1366L) */ (
							var_1_4
						) , (
							var_1_17
						)
					))
				) > (
					var_1_18
				))
			))
		) ? (
			/* 567L, 200L, 779L, 805L, 1370L) */ ((
				/* 568L, 182L, 187L, 780L, 806L, 1371L) */ ((
					var_1_18
				) > (
					/* 570L, 181L, 189L, 782L, 808L, 1373L) */ (abs (
						var_1_17
					))
				))
			) ? (
				/* 572L, 194L, 784L, 810L, 1375L) */ ((
					var_1_19
				) == (
					/* 572L, 194L, 784L, 810L, 1375L) */ ((unsigned long int) (
						var_1_16
					))
				))
			) : (
				/* 576L, 198L, 788L, 814L, 1379L) */ ((
					var_1_19
				) == (
					/* 576L, 198L, 788L, 814L, 1379L) */ ((unsigned long int) (
						var_1_11
					))
				))
			))
		) : (
			/* 580L, 204L, 792L, 818L, 1383L) */ ((
				var_1_19
			) == (
				/* 580L, 204L, 792L, 818L, 1383L) */ ((unsigned long int) (
					var_1_16
				))
			))
		))
	))
) && (
	/* 585L, 266L, 1015L, 1047L, 1388L) */ ((
		/* 586L, 217L, 225L, 1016L, 1048L, 1389L) */ ((
			/* 587L, 215L, 226L, 1017L, 1049L, 1390L) */ ((
				var_1_18
			) / (
				/* 589L, 214L, 228L, 1019L, 1051L, 1392L) */ (max (
					/* 589L, 214L, 228L, 1019L, 1051L, 1392L) */ (
						5.5
					) , (
						var_1_22
					)
				))
			))
		) > (
			10.5
		))
	) ? (
		/* 593L, 260L, 1023L, 1055L, 1396L) */ ((
			var_1_13
		) ? (
			/* 595L, 254L, 1025L, 1057L, 1398L) */ ((
				/* 596L, 237L, 241L, 1026L, 1058L, 1399L) */ ((
					var_1_2
				) < (
					var_1_3
				))
			) ? (
				/* 599L, 248L, 1029L, 1061L, 1402L) */ ((
					var_1_21
				) == (
					/* 599L, 248L, 1029L, 1061L, 1402L) */ ((unsigned char) (
						/* 602L, 247L, 1032L, 1064L, 1405L) */ (! (
							var_1_23
						))
					))
				))
			) : (
				/* 604L, 252L, 1034L, 1066L, 1407L) */ ((
					var_1_21
				) == (
					/* 604L, 252L, 1034L, 1066L, 1407L) */ ((unsigned char) (
						var_1_24
					))
				))
			))
		) : (
			/* 608L, 258L, 1038L, 1070L, 1411L) */ ((
				var_1_21
			) == (
				/* 608L, 258L, 1038L, 1070L, 1411L) */ ((unsigned char) (
					var_1_23
				))
			))
		))
	) : (
		/* 612L, 264L, 1042L, 1074L, 1415L) */ ((
			var_1_21
		) == (
			/* 612L, 264L, 1042L, 1074L, 1415L) */ ((unsigned char) (
				var_1_23
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
