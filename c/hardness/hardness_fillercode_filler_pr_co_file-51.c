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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 64;
signed char var_1_38 = -8;
signed char var_1_39 = -1;
unsigned short int var_1_40 = 200;
unsigned char var_1_41 = 0;
unsigned long int var_1_42 = 2;
float var_1_43 = 1.75;
unsigned long int var_1_44 = 10;
unsigned short int var_1_45 = 16;

// Calibration values

// Last'ed variables
double last_1_var_1_17 = 256.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch51Filler_PR_CO
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


	// From: CodeObject3
	/* 336L, 137L) */ var_1_38 = (
		var_1_39
	);


	// From: Req3Batch51Filler_PR_CO
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


	// From: Req4Batch51Filler_PR_CO
	/* 1205L, 144L, 668L, 681L) */ if (/* 1206L, 127L, 128L, 669L, 682L) */ ((/* 1207L, 125L, 129L, 670L, 683L) */ (min (/* 1207L, 125L, 129L, 670L, 683L) */ (/* 1208L, 123L, 130L, 671L, 684L) */ (~ (var_1_12))) , (8)))) > (var_1_11))) {
		/* 1212L, 143L, 675L, 688L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: CodeObject2
	/* 312L, 128L) */ if (/* 313L, 96L, 97L) */ ((var_1_32) < (/* 315L, 95L, 99L) */ (max (/* 315L, 95L, 99L) */ (var_1_30) , (/* 317L, 94L, 101L) */ (abs (var_1_17)))))))) {
		/* 319L, 114L) */ var_1_33 = (
			/* 322L, 113L) */ (max (
				/* 322L, 113L) */ (
					var_1_34
				) , (
					var_1_35
				)
			))
		);
	} else {
		/* 325L, 126L) */ if (var_1_21) {
			/* 327L, 125L) */ var_1_33 = (
				/* 330L, 124L) */ ((
					/* 331L, 122L) */ ((
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


	// From: CodeObject4
	/* 361L, 181L) */ if (/* 362L, 147L, 148L) */ ((/* 363L, 144L, 149L) */ ((var_1_37) >= (var_1_1))) || (/* 366L, 146L, 152L) */ (! (0))))) {
		/* 368L, 163L) */ var_1_40 = (
			var_1_34
		);
	} else {
		/* 372L, 179L) */ if (/* 373L, 166L, 167L) */ ((var_1_36) && (var_1_41))) {
			/* 376L, 178L) */ var_1_40 = (
				/* 379L, 177L) */ ((
					var_1_37
				) + (
					var_1_1
				))
			);
		}
	}


	// From: CodeObject6
	/* 409L, 253L) */ var_1_44 = (
		/* 412L, 252L) */ ((
			/* 413L, 247L) */ (abs (
				var_1_37
			))
		) + (
			/* 415L, 251L) */ (abs (
				/* 416L, 250L) */ (max (
					/* 416L, 250L) */ (
						var_1_34
					) , (
						var_1_35
					)
				))
			))
		))
	);


	// From: Req2Batch51Filler_PR_CO
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


	// From: Req6Batch51Filler_PR_CO
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


	// From: CodeObject5
	/* 382L, 240L) */ if (/* 383L, 192L, 193L) */ ((/* 384L, 186L, 194L) */ (abs (1.000000095E7f))) < (/* 386L, 191L, 196L) */ ((/* 387L, 189L, 197L) */ ((9.9999999999996E12f) - (var_1_31))) / (var_1_43))))) {
		/* 391L, 234L) */ if (/* 392L, 215L, 216L) */ ((var_1_43) < (/* 394L, 214L, 218L) */ (max (/* 394L, 214L, 218L) */ (var_1_30) , (/* 396L, 213L, 220L) */ ((var_1_31) - (var_1_32)))))))) {
			/* 399L, 233L) */ var_1_42 = (
				var_1_19
			);
		}
	} else {
		/* 403L, 239L) */ var_1_42 = (
			100000u
		);
	}


	// From: CodeObject7
	/* 419L, 293L) */ if (var_1_21) {
		/* 421L, 270L) */ var_1_45 = (
			/* 424L, 269L) */ (max (
				/* 424L, 269L) */ (
					/* 425L, 267L) */ (max (
						/* 425L, 267L) */ (
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
		/* 429L, 291L) */ if (/* 430L, 274L, 275L) */ ((var_1_1) > (/* 432L, 273L, 277L) */ (abs (var_1_39))))) {
			/* 434L, 286L) */ var_1_45 = (
				var_1_34
			);
		} else {
			/* 438L, 290L) */ var_1_45 = (
				10
			);
		}
	}


	// From: Req5Batch51Filler_PR_CO
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


	// From: CodeObject1
	/* 295L, 87L) */ if (/* 296L, 64L, 65L) */ ((/* 297L, 62L, 66L) */ ((var_1_12) % (/* 299L, 61L, 68L) */ (max (/* 299L, 61L, 68L) */ (var_1_27) , (var_1_28)))))) > (var_1_19))) {
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
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 64);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 443L, 4L, 8L, 408L, 431L, 1105L, 1284L, 34L) */ ((32u) >= (var_1_2))) {
		if (/* 447L, 13L, 17L, 412L, 435L, 1108L, 1288L, 37L) */ ((var_1_2) <= (var_1_3))) {
			if (/* 451L, 24L, 30L, 416L, 439L, 1114L, 1292L, 43L) */ ((/* 452L, 22L, 31L, 417L, 440L, 1111L, 1293L, 40L) */ ((var_1_4) - (var_1_5))) >= (last_1_var_1_17))) {
			}
		}
	} else {
	}
	if (/* 468L, 56L, 61L, 493L, 512L, 1309L) */ (! (/* 469L, 55L, 62L, 494L, 513L, 1310L) */ ((var_1_17) > (var_1_5))))) {
	} else {
	}
	if (/* 486L, 87L, 91L, 622L, 645L, 1327L) */ ((var_1_13) && (var_1_14))) {
	} else {
		if (var_1_13) {
		}
	}
	if (/* 510L, 127L, 134L, 695L, 708L, 1351L) */ ((/* 511L, 125L, 135L, 696L, 709L, 1352L) */ (min (/* 511L, 125L, 135L, 696L, 709L, 1352L) */ (/* 512L, 123L, 136L, 697L, 710L, 1353L) */ (~ (var_1_12))) , (8)))) > (var_1_11))) {
	}
	if (/* 522L, 164L, 172L, 772L, 798L, 1363L) */ ((var_1_21) || (/* 524L, 163L, 174L, 774L, 800L, 1365L) */ ((/* 525L, 161L, 175L, 775L, 801L, 1366L) */ (max (/* 525L, 161L, 175L, 775L, 801L, 1366L) */ (var_1_4) , (var_1_17)))) > (var_1_18))))) {
		if (/* 530L, 182L, 187L, 780L, 806L, 1371L) */ ((var_1_18) > (/* 532L, 181L, 189L, 782L, 808L, 1373L) */ (abs (var_1_17))))) {
		} else {
		}
	} else {
	}
	if (/* 548L, 217L, 225L, 1016L, 1048L, 1389L) */ ((/* 549L, 215L, 226L, 1017L, 1049L, 1390L) */ ((var_1_18) / (/* 551L, 214L, 228L, 1019L, 1051L, 1392L) */ (max (/* 551L, 214L, 228L, 1019L, 1051L, 1392L) */ (5.5) , (var_1_22)))))) > (10.5))) {
		if (var_1_13) {
			if (/* 558L, 237L, 241L, 1026L, 1058L, 1399L) */ ((var_1_2) < (var_1_3))) {
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 583L) */ ((
	/* 582L) */ ((
		/* 581L) */ ((
			/* 580L) */ ((
				/* 579L) */ ((
					/* 442L, 48L, 407L, 430L, 1125L, 1283L, 54L) */ ((
						/* 443L, 4L, 8L, 408L, 431L, 1105L, 1284L, 34L) */ ((
							32u
						) >= (
							var_1_2
						))
					) ? (
						/* 446L, 42L, 411L, 434L, 1120L, 1287L, 49L) */ ((
							/* 447L, 13L, 17L, 412L, 435L, 1108L, 1288L, 37L) */ ((
								var_1_2
							) <= (
								var_1_3
							))
						) ? (
							/* 450L, 40L, 415L, 438L, 1119L, 1291L, 48L) */ ((
								/* 451L, 24L, 30L, 416L, 439L, 1114L, 1292L, 43L) */ ((
									/* 452L, 22L, 31L, 417L, 440L, 1111L, 1293L, 40L) */ ((
										var_1_4
									) - (
										var_1_5
									))
								) >= (
									last_1_var_1_17
								))
							) ? (
								/* 457L, 38L, 421L, 444L, 1118L, 1298L, 47L) */ ((
									var_1_1
								) == (
									/* 457L, 38L, 421L, 444L, 1118L, 1298L, 47L) */ ((unsigned char) (
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
						/* 461L, 46L, 425L, 448L, 1124L, 1302L, 53L) */ ((
							var_1_1
						) == (
							/* 461L, 46L, 425L, 448L, 1124L, 1302L, 53L) */ ((unsigned char) (
								var_1_7
							))
						))
					))
				) && (
					/* 467L, 78L, 492L, 511L, 1308L) */ ((
						/* 468L, 56L, 61L, 493L, 512L, 1309L) */ (! (
							/* 469L, 55L, 62L, 494L, 513L, 1310L) */ ((
								var_1_17
							) > (
								var_1_5
							))
						))
					) ? (
						/* 472L, 72L, 497L, 516L, 1313L) */ ((
							var_1_8
						) == (
							/* 472L, 72L, 497L, 516L, 1313L) */ ((signed char) (
								/* 475L, 71L, 500L, 519L, 1316L) */ ((
									/* 476L, 69L, 501L, 520L, 1317L) */ (min (
										/* 476L, 69L, 501L, 520L, 1317L) */ (
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
						/* 480L, 76L, 505L, 524L, 1321L) */ ((
							var_1_8
						) == (
							/* 480L, 76L, 505L, 524L, 1321L) */ ((signed char) (
								-4
							))
						))
					))
				))
			) && (
				/* 485L, 116L, 621L, 644L, 1326L) */ ((
					/* 486L, 87L, 91L, 622L, 645L, 1327L) */ ((
						var_1_13
					) && (
						var_1_14
					))
				) ? (
					/* 489L, 97L, 625L, 648L, 1330L) */ ((
						var_1_12
					) == (
						/* 489L, 97L, 625L, 648L, 1330L) */ ((unsigned long int) (
							var_1_11
						))
					))
				) : (
					/* 493L, 114L, 629L, 652L, 1334L) */ ((
						var_1_13
					) ? (
						/* 495L, 112L, 631L, 654L, 1336L) */ ((
							var_1_12
						) == (
							/* 495L, 112L, 631L, 654L, 1336L) */ ((unsigned long int) (
								/* 498L, 111L, 634L, 657L, 1339L) */ ((
									/* 499L, 107L, 635L, 658L, 1340L) */ (max (
										/* 499L, 107L, 635L, 658L, 1340L) */ (
											var_1_1
										) , (
											/* 501L, 106L, 637L, 660L, 1342L) */ ((
												var_1_11
											) + (
												var_1_7
											))
										)
									))
								) + (
									/* 504L, 110L, 640L, 663L, 1345L) */ ((
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
			/* 509L, 145L, 694L, 707L, 1350L) */ ((
				/* 510L, 127L, 134L, 695L, 708L, 1351L) */ ((
					/* 511L, 125L, 135L, 696L, 709L, 1352L) */ (min (
						/* 511L, 125L, 135L, 696L, 709L, 1352L) */ (
							/* 512L, 123L, 136L, 697L, 710L, 1353L) */ (~ (
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
				/* 516L, 143L, 701L, 714L, 1357L) */ ((
					var_1_17
				) == (
					/* 516L, 143L, 701L, 714L, 1357L) */ ((double) (
						var_1_18
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 521L, 206L, 771L, 797L, 1362L) */ ((
			/* 522L, 164L, 172L, 772L, 798L, 1363L) */ ((
				var_1_21
			) || (
				/* 524L, 163L, 174L, 774L, 800L, 1365L) */ ((
					/* 525L, 161L, 175L, 775L, 801L, 1366L) */ (max (
						/* 525L, 161L, 175L, 775L, 801L, 1366L) */ (
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
			/* 529L, 200L, 779L, 805L, 1370L) */ ((
				/* 530L, 182L, 187L, 780L, 806L, 1371L) */ ((
					var_1_18
				) > (
					/* 532L, 181L, 189L, 782L, 808L, 1373L) */ (abs (
						var_1_17
					))
				))
			) ? (
				/* 534L, 194L, 784L, 810L, 1375L) */ ((
					var_1_19
				) == (
					/* 534L, 194L, 784L, 810L, 1375L) */ ((unsigned long int) (
						var_1_16
					))
				))
			) : (
				/* 538L, 198L, 788L, 814L, 1379L) */ ((
					var_1_19
				) == (
					/* 538L, 198L, 788L, 814L, 1379L) */ ((unsigned long int) (
						var_1_11
					))
				))
			))
		) : (
			/* 542L, 204L, 792L, 818L, 1383L) */ ((
				var_1_19
			) == (
				/* 542L, 204L, 792L, 818L, 1383L) */ ((unsigned long int) (
					var_1_16
				))
			))
		))
	))
) && (
	/* 547L, 266L, 1015L, 1047L, 1388L) */ ((
		/* 548L, 217L, 225L, 1016L, 1048L, 1389L) */ ((
			/* 549L, 215L, 226L, 1017L, 1049L, 1390L) */ ((
				var_1_18
			) / (
				/* 551L, 214L, 228L, 1019L, 1051L, 1392L) */ (max (
					/* 551L, 214L, 228L, 1019L, 1051L, 1392L) */ (
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
		/* 555L, 260L, 1023L, 1055L, 1396L) */ ((
			var_1_13
		) ? (
			/* 557L, 254L, 1025L, 1057L, 1398L) */ ((
				/* 558L, 237L, 241L, 1026L, 1058L, 1399L) */ ((
					var_1_2
				) < (
					var_1_3
				))
			) ? (
				/* 561L, 248L, 1029L, 1061L, 1402L) */ ((
					var_1_21
				) == (
					/* 561L, 248L, 1029L, 1061L, 1402L) */ ((unsigned char) (
						/* 564L, 247L, 1032L, 1064L, 1405L) */ (! (
							var_1_23
						))
					))
				))
			) : (
				/* 566L, 252L, 1034L, 1066L, 1407L) */ ((
					var_1_21
				) == (
					/* 566L, 252L, 1034L, 1066L, 1407L) */ ((unsigned char) (
						var_1_24
					))
				))
			))
		) : (
			/* 570L, 258L, 1038L, 1070L, 1411L) */ ((
				var_1_21
			) == (
				/* 570L, 258L, 1038L, 1070L, 1411L) */ ((unsigned char) (
					var_1_23
				))
			))
		))
	) : (
		/* 574L, 264L, 1042L, 1074L, 1415L) */ ((
			var_1_21
		) == (
			/* 574L, 264L, 1042L, 1074L, 1415L) */ ((unsigned char) (
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
