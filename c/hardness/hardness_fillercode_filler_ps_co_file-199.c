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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Filler_PS_CO.c", 13, "reach_error"); }
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
double var_1_1 = 8.7;
signed short int var_1_3 = 16;
signed short int var_1_4 = 10;
signed long int var_1_5 = 32;
signed long int var_1_6 = 2;
double var_1_8 = 0.5;
unsigned short int var_1_9 = 256;
signed short int var_1_10 = 1;
signed short int var_1_11 = 2;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed long int var_1_14 = 0;
signed long int var_1_15 = -256;
signed long int var_1_16 = 1000000000;
signed long int var_1_17 = 4;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 64;
unsigned short int var_1_21 = 100;
signed short int var_1_22 = 256;
signed long int var_1_23 = 1;
signed long int var_1_24 = -16;
unsigned short int var_1_25 = 10;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 0;
unsigned short int var_1_28 = 128;
unsigned short int var_1_29 = 256;
double var_1_30 = 4.6;
double var_1_31 = 5.95;
double var_1_32 = 24.75;
double var_1_33 = 16.125;
double var_1_34 = 16.125;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed char var_1_37 = -128;
signed char var_1_38 = 1;
signed char var_1_39 = -64;
unsigned short int var_1_40 = 0;
signed char var_1_41 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 236L, 5L) */ var_1_23 = (
		var_1_24
	);


	// From: CodeObject2
	/* 241L, 21L) */ var_1_25 = (
		/* 244L, 20L) */ (min (
			/* 244L, 20L) */ (
				/* 245L, 16L) */ (min (
					/* 245L, 16L) */ (
						var_1_26
					) , (
						/* 247L, 15L) */ (max (
							/* 247L, 15L) */ (
								var_1_27
							) , (
								var_1_28
							)
						))
					)
				))
			) , (
				/* 250L, 19L) */ ((
					var_1_29
				) + (
					4
				))
			)
		))
	);


	// From: CodeObject3
	/* 284L, 73L) */ if (/* 285L, 28L, 29L) */ ((var_1_9) < (var_1_23))) {
		/* 288L, 67L) */ if (/* 289L, 39L, 40L) */ ((var_1_29) == (/* 291L, 38L, 42L) */ ((var_1_9) ^ (32))))) {
			/* 294L, 55L) */ var_1_30 = (
				/* 297L, 54L) */ (abs (
					/* 298L, 53L) */ (abs (
						var_1_31
					))
				))
			);
		} else {
			/* 300L, 66L) */ var_1_30 = (
				/* 303L, 65L) */ (min (
					/* 303L, 65L) */ (
						/* 304L, 63L) */ ((
							/* 305L, 59L) */ (abs (
								var_1_32
							))
						) + (
							/* 307L, 62L) */ ((
								var_1_33
							) + (
								var_1_34
							))
						))
					) , (
						var_1_31
					)
				))
			);
		}
	} else {
		/* 311L, 72L) */ var_1_30 = (
			var_1_34
		);
	}


	// From: CodeObject4
	/* 315L, 114L) */ if (/* 316L, 83L, 84L) */ ((/* 317L, 81L, 85L) */ (max (/* 317L, 81L, 85L) */ (var_1_26) , (/* 319L, 80L, 87L) */ ((var_1_9) / (2)))))) <= (4))) {
		/* 323L, 101L) */ var_1_35 = (
			var_1_36
		);
	} else {
		/* 327L, 113L) */ var_1_35 = (
			/* 330L, 112L) */ ((
				/* 331L, 110L) */ ((
					var_1_14
				) >= (
					var_1_26
				))
			) && (
				var_1_36
			))
		);
	}


	// From: CodeObject5
	/* 335L, 146L) */ if (/* 336L, 123L, 124L) */ ((/* 337L, 119L, 125L) */ (abs (var_1_27))) <= (/* 339L, 122L, 127L) */ ((var_1_29) * (var_1_28))))) {
		/* 342L, 141L) */ var_1_37 = (
			/* 345L, 140L) */ ((
				var_1_38
			) - (
				25
			))
		);
	} else {
		/* 348L, 145L) */ var_1_37 = (
			var_1_39
		);
	}


	// From: CodeObject6
	/* 352L, 185L) */ if (/* 353L, 157L, 158L) */ ((var_1_27) != (/* 355L, 156L, 160L) */ ((var_1_26) * (var_1_21))))) {
		/* 358L, 183L) */ if (var_1_36) {
			/* 360L, 178L) */ var_1_40 = (
				/* 363L, 177L) */ (min (
					/* 363L, 177L) */ (
						/* 364L, 175L) */ (max (
							/* 364L, 175L) */ (
								var_1_29
							) , (
								var_1_28
							)
						))
					) , (
						128
					)
				))
			);
		} else {
			/* 368L, 182L) */ var_1_40 = (
				var_1_28
			);
		}
	}


	// From: CodeObject7
	/* 372L, 233L) */ if (/* 373L, 197L, 198L) */ ((/* 374L, 193L, 199L) */ ((/* 375L, 191L, 200L) */ (min (/* 375L, 191L, 200L) */ (var_1_32) , (var_1_31)))) <= (var_1_1))) && (/* 379L, 196L, 204L) */ ((var_1_33) < (var_1_34))))) {
		/* 382L, 227L) */ if (var_1_12) {
			/* 384L, 222L) */ var_1_41 = (
				var_1_38
			);
		} else {
			/* 388L, 226L) */ var_1_41 = (
				16
			);
		}
	} else {
		/* 392L, 232L) */ var_1_41 = (
			var_1_38
		);
	}


	// From: Req6Batch199Filler_PS_CO
	/* 1146L, 341L, 945L, 951L) */ var_1_21 = (
		var_1_20
	);


	// From: Req7Batch199Filler_PS_CO
	/* 1152L, 351L, 969L, 975L) */ var_1_22 = (
		var_1_20
	);


	// From: Req3Batch199Filler_PS_CO
	signed long int stepLocal_4 = /* 1059L, 210L, 214L, 646L, 661L) */ ((var_1_21) * (var_1_5));
	signed short int stepLocal_3 = var_1_11;
	/* 1072L, 229L, 640L, 655L) */ if (/* 1064L, 201L, 202L, 641L, 656L) */ ((stepLocal_3) != (var_1_4))) {
		/* 1071L, 227L, 644L, 659L) */ if (/* 1066L, 212L, 213L, 645L, 660L) */ ((stepLocal_4) != (5))) {
			/* 1070L, 226L, 650L, 665L) */ var_1_12 = (
				var_1_13
			);
		}
	}


	// From: Req1Batch199Filler_PS_CO
	signed long int stepLocal_0 = /* 993L, 12L, 20L, 411L, 434L) */ ((var_1_5) * (var_1_6));
	/* 1015L, 47L, 402L, 425L) */ if (var_1_12) {
		/* 1014L, 45L, 404L, 427L) */ if (/* 1003L, 13L, 14L, 405L, 428L) */ ((/* 1002L, 9L, 15L, 406L, 429L) */ ((/* 1000L, 7L, 16L, 407L, 430L) */ ((-128) / (var_1_3))) / (var_1_4))) < (stepLocal_0))) {
			/* 1013L, 43L, 414L, 437L) */ if (var_1_12) {
				/* 1008L, 38L, 416L, 439L) */ var_1_1 = (
					var_1_8
				);
			} else {
				/* 1012L, 42L, 420L, 443L) */ var_1_1 = (
					5.2
				);
			}
		}
	}


	// From: Req2Batch199Filler_PS_CO
	signed long int stepLocal_2 = /* 1025L, 75L, 79L, 503L, 532L) */ ((/* 1026L, 71L, 80L, 504L, 533L) */ ((var_1_10) - (var_1_11))) % (/* 1029L, 74L, 83L, 507L, 536L) */ (max (/* 1029L, 74L, 83L, 507L, 536L) */ (var_1_3) , (-64)))));
	unsigned char stepLocal_1 = /* 1020L, 56L, 60L, 497L, 526L) */ ((var_1_1) < (var_1_8));
	/* 1050L, 193L, 494L, 523L) */ if (/* 1034L, 57L, 58L, 495L, 524L) */ ((var_1_12) && (stepLocal_1))) {
		/* 1045L, 187L, 500L, 529L) */ if (/* 1036L, 76L, 77L, 501L, 530L) */ ((var_1_4) <= (stepLocal_2))) {
			/* 1040L, 98L, 510L, 539L) */ var_1_9 = (
				var_1_11
			);
		} else {
			/* 1044L, 186L, 514L, 543L) */ var_1_9 = (
				256
			);
		}
	} else {
		/* 1049L, 192L, 518L, 547L) */ var_1_9 = (
			var_1_11
		);
	}


	// From: Req4Batch199Filler_PS_CO
	/* 1081L, 260L, 704L, 729L) */ if (/* 1082L, 237L, 238L, 705L, 730L) */ ((var_1_11) < (var_1_3))) {
		/* 1085L, 249L, 708L, 733L) */ var_1_14 = (
			/* 1088L, 248L, 711L, 736L) */ ((
				var_1_9
			) + (
				var_1_15
			))
		);
	} else {
		/* 1091L, 259L, 714L, 739L) */ var_1_14 = (
			/* 1094L, 258L, 717L, 742L) */ ((
				/* 1095L, 256L, 718L, 743L) */ ((
					/* 1096L, 254L, 719L, 744L) */ ((
						var_1_16
					) - (
						var_1_11
					))
				) + (
					var_1_9
				))
			) - (
				var_1_17
			))
		);
	}


	// From: Req5Batch199Filler_PS_CO
	unsigned char stepLocal_6 = var_1_13;
	signed short int stepLocal_5 = var_1_3;
	/* 1140L, 332L, 800L, 836L) */ if (/* 1109L, 276L, 277L, 801L, 837L) */ ((var_1_14) <= (stepLocal_5))) {
		/* 1135L, 326L, 804L, 840L) */ if (/* 1115L, 289L, 290L, 805L, 841L) */ ((stepLocal_6) || (/* 1114L, 288L, 292L, 807L, 843L) */ ((var_1_10) != (/* 1113L, 287L, 294L, 809L, 845L) */ ((var_1_11) >> (var_1_19))))))) {
			/* 1124L, 312L, 812L, 848L) */ var_1_18 = (
				/* 1123L, 311L, 815L, 851L) */ ((
					/* 1121L, 309L, 816L, 852L) */ (abs (
						/* 1120L, 308L, 817L, 853L) */ ((
							100
						) + (
							var_1_20
						))
					))
				) - (
					var_1_19
				))
			);
		} else {
			/* 1134L, 324L, 821L, 857L) */ if (var_1_12) {
				/* 1129L, 319L, 823L, 859L) */ var_1_18 = (
					var_1_20
				);
			} else {
				/* 1133L, 323L, 827L, 863L) */ var_1_18 = (
					32
				);
			}
		}
	} else {
		/* 1139L, 331L, 831L, 867L) */ var_1_18 = (
			var_1_20
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1073741823);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 536870911);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483646);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 14);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 64);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483647);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 65534);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -230584.3009213691400e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -1);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_12) {
		if (/* 399L, 13L, 23L, 451L, 474L, 1160L) */ ((/* 400L, 9L, 24L, 452L, 475L, 1161L) */ ((/* 401L, 7L, 25L, 453L, 476L, 1162L) */ ((-128) / (var_1_3))) / (var_1_4))) < (/* 405L, 12L, 29L, 457L, 480L, 1166L) */ ((var_1_5) * (var_1_6))))) {
			if (var_1_12) {
			} else {
			}
		}
	}
	if (/* 420L, 57L, 63L, 553L, 582L, 1181L) */ ((var_1_12) && (/* 422L, 56L, 65L, 555L, 584L, 1183L) */ ((var_1_1) < (var_1_8))))) {
		if (/* 426L, 76L, 86L, 559L, 588L, 1187L) */ ((var_1_4) <= (/* 428L, 75L, 88L, 561L, 590L, 1189L) */ ((/* 429L, 71L, 89L, 562L, 591L, 1190L) */ ((var_1_10) - (var_1_11))) % (/* 432L, 74L, 92L, 565L, 594L, 1193L) */ (max (/* 432L, 74L, 92L, 565L, 594L, 1193L) */ (var_1_3) , (-64)))))))) {
		} else {
		}
	} else {
	}
	if (/* 449L, 201L, 205L, 671L, 686L, 1210L) */ ((var_1_11) != (var_1_4))) {
		if (/* 453L, 212L, 218L, 675L, 690L, 1214L) */ ((/* 454L, 210L, 219L, 676L, 691L, 1215L) */ ((var_1_21) * (var_1_5))) != (5))) {
		}
	}
	if (/* 468L, 237L, 241L, 755L, 780L, 1229L) */ ((var_1_11) < (var_1_3))) {
	} else {
	}
	if (/* 489L, 276L, 280L, 873L, 909L, 1250L) */ ((var_1_14) <= (var_1_3))) {
		if (/* 493L, 289L, 297L, 877L, 913L, 1254L) */ ((var_1_13) || (/* 495L, 288L, 299L, 879L, 915L, 1256L) */ ((var_1_10) != (/* 497L, 287L, 301L, 881L, 917L, 1258L) */ ((var_1_11) >> (var_1_19))))))) {
		} else {
			if (var_1_12) {
			} else {
			}
		}
	} else {
	}
	return /* 541L) */ ((
	/* 540L) */ ((
		/* 539L) */ ((
			/* 538L) */ ((
				/* 537L) */ ((
					/* 536L) */ ((
						/* 396L, 48L, 448L, 471L, 1157L) */ ((
							var_1_12
						) ? (
							/* 398L, 46L, 450L, 473L, 1159L) */ ((
								/* 399L, 13L, 23L, 451L, 474L, 1160L) */ ((
									/* 400L, 9L, 24L, 452L, 475L, 1161L) */ ((
										/* 401L, 7L, 25L, 453L, 476L, 1162L) */ ((
											-128
										) / (
											var_1_3
										))
									) / (
										var_1_4
									))
								) < (
									/* 405L, 12L, 29L, 457L, 480L, 1166L) */ ((
										var_1_5
									) * (
										var_1_6
									))
								))
							) ? (
								/* 408L, 44L, 460L, 483L, 1169L) */ ((
									var_1_12
								) ? (
									/* 410L, 38L, 462L, 485L, 1171L) */ ((
										var_1_1
									) == (
										/* 410L, 38L, 462L, 485L, 1171L) */ ((double) (
											var_1_8
										))
									))
								) : (
									/* 414L, 42L, 466L, 489L, 1175L) */ ((
										var_1_1
									) == (
										/* 414L, 42L, 466L, 489L, 1175L) */ ((double) (
											5.2
										))
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) && (
						/* 419L, 194L, 552L, 581L, 1180L) */ ((
							/* 420L, 57L, 63L, 553L, 582L, 1181L) */ ((
								var_1_12
							) && (
								/* 422L, 56L, 65L, 555L, 584L, 1183L) */ ((
									var_1_1
								) < (
									var_1_8
								))
							))
						) ? (
							/* 425L, 188L, 558L, 587L, 1186L) */ ((
								/* 426L, 76L, 86L, 559L, 588L, 1187L) */ ((
									var_1_4
								) <= (
									/* 428L, 75L, 88L, 561L, 590L, 1189L) */ ((
										/* 429L, 71L, 89L, 562L, 591L, 1190L) */ ((
											var_1_10
										) - (
											var_1_11
										))
									) % (
										/* 432L, 74L, 92L, 565L, 594L, 1193L) */ (max (
											/* 432L, 74L, 92L, 565L, 594L, 1193L) */ (
												var_1_3
											) , (
												-64
											)
										))
									))
								))
							) ? (
								/* 435L, 98L, 568L, 597L, 1196L) */ ((
									var_1_9
								) == (
									/* 435L, 98L, 568L, 597L, 1196L) */ ((unsigned short int) (
										var_1_11
									))
								))
							) : (
								/* 439L, 186L, 572L, 601L, 1200L) */ ((
									var_1_9
								) == (
									/* 439L, 186L, 572L, 601L, 1200L) */ ((unsigned short int) (
										256
									))
								))
							))
						) : (
							/* 443L, 192L, 576L, 605L, 1204L) */ ((
								var_1_9
							) == (
								/* 443L, 192L, 576L, 605L, 1204L) */ ((unsigned short int) (
									var_1_11
								))
							))
						))
					))
				) && (
					/* 448L, 230L, 670L, 685L, 1209L) */ ((
						/* 449L, 201L, 205L, 671L, 686L, 1210L) */ ((
							var_1_11
						) != (
							var_1_4
						))
					) ? (
						/* 452L, 228L, 674L, 689L, 1213L) */ ((
							/* 453L, 212L, 218L, 675L, 690L, 1214L) */ ((
								/* 454L, 210L, 219L, 676L, 691L, 1215L) */ ((
									var_1_21
								) * (
									var_1_5
								))
							) != (
								5
							))
						) ? (
							/* 458L, 226L, 680L, 695L, 1219L) */ ((
								var_1_12
							) == (
								/* 458L, 226L, 680L, 695L, 1219L) */ ((unsigned char) (
									var_1_13
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
				/* 467L, 261L, 754L, 779L, 1228L) */ ((
					/* 468L, 237L, 241L, 755L, 780L, 1229L) */ ((
						var_1_11
					) < (
						var_1_3
					))
				) ? (
					/* 471L, 249L, 758L, 783L, 1232L) */ ((
						var_1_14
					) == (
						/* 471L, 249L, 758L, 783L, 1232L) */ ((signed long int) (
							/* 474L, 248L, 761L, 786L, 1235L) */ ((
								var_1_9
							) + (
								var_1_15
							))
						))
					))
				) : (
					/* 477L, 259L, 764L, 789L, 1238L) */ ((
						var_1_14
					) == (
						/* 477L, 259L, 764L, 789L, 1238L) */ ((signed long int) (
							/* 480L, 258L, 767L, 792L, 1241L) */ ((
								/* 481L, 256L, 768L, 793L, 1242L) */ ((
									/* 482L, 254L, 769L, 794L, 1243L) */ ((
										var_1_16
									) - (
										var_1_11
									))
								) + (
									var_1_9
								))
							) - (
								var_1_17
							))
						))
					))
				))
			))
		) && (
			/* 488L, 333L, 872L, 908L, 1249L) */ ((
				/* 489L, 276L, 280L, 873L, 909L, 1250L) */ ((
					var_1_14
				) <= (
					var_1_3
				))
			) ? (
				/* 492L, 327L, 876L, 912L, 1253L) */ ((
					/* 493L, 289L, 297L, 877L, 913L, 1254L) */ ((
						var_1_13
					) || (
						/* 495L, 288L, 299L, 879L, 915L, 1256L) */ ((
							var_1_10
						) != (
							/* 497L, 287L, 301L, 881L, 917L, 1258L) */ ((
								var_1_11
							) >> (
								var_1_19
							))
						))
					))
				) ? (
					/* 500L, 312L, 884L, 920L, 1261L) */ ((
						var_1_18
					) == (
						/* 500L, 312L, 884L, 920L, 1261L) */ ((unsigned char) (
							/* 503L, 311L, 887L, 923L, 1264L) */ ((
								/* 504L, 309L, 888L, 924L, 1265L) */ (abs (
									/* 505L, 308L, 889L, 925L, 1266L) */ ((
										100
									) + (
										var_1_20
									))
								))
							) - (
								var_1_19
							))
						))
					))
				) : (
					/* 509L, 325L, 893L, 929L, 1270L) */ ((
						var_1_12
					) ? (
						/* 511L, 319L, 895L, 931L, 1272L) */ ((
							var_1_18
						) == (
							/* 511L, 319L, 895L, 931L, 1272L) */ ((unsigned char) (
								var_1_20
							))
						))
					) : (
						/* 515L, 323L, 899L, 935L, 1276L) */ ((
							var_1_18
						) == (
							/* 515L, 323L, 899L, 935L, 1276L) */ ((unsigned char) (
								32
							))
						))
					))
				))
			) : (
				/* 519L, 331L, 903L, 939L, 1280L) */ ((
					var_1_18
				) == (
					/* 519L, 331L, 903L, 939L, 1280L) */ ((unsigned char) (
						var_1_20
					))
				))
			))
		))
	) && (
		/* 525L, 341L, 957L, 963L, 1286L) */ ((
			var_1_21
		) == (
			/* 525L, 341L, 957L, 963L, 1286L) */ ((unsigned short int) (
				var_1_20
			))
		))
	))
) && (
	/* 531L, 351L, 981L, 987L, 1292L) */ ((
		var_1_22
	) == (
		/* 531L, 351L, 981L, 987L, 1292L) */ ((signed short int) (
			var_1_20
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
