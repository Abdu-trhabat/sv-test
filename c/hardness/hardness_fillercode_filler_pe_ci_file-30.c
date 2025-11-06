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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed short int var_1_2 = -256;
unsigned char var_1_4 = 0;
double var_1_5 = 127.5;
double var_1_7 = 10000000000000.125;
double var_1_8 = 1.25;
double var_1_10 = 25.7;
signed long int var_1_11 = -2;
signed long int var_1_13 = 5;
signed long int var_1_14 = 128;
signed long int var_1_15 = 1000;
double var_1_16 = 1000000000000000.2;
signed short int var_1_17 = -64;
double var_1_18 = 256.75;
double var_1_19 = 100.4;
double var_1_20 = 4.5;
double var_1_21 = -0.5;
signed long int var_1_22 = 10;
signed char var_1_23 = -8;
double var_1_24 = 9.75;
signed char var_1_26 = 8;
signed char var_1_27 = -1;
signed short int var_1_28 = -1;
float var_1_29 = 25.7;
signed char var_1_30 = 100;
signed char var_1_31 = 16;
float var_1_32 = 9.449;
float var_1_33 = 8.2;
float var_1_35 = 4.9;
double var_1_36 = 8.325;
unsigned char var_1_37 = 32;
unsigned long int var_1_38 = 8;
unsigned char var_1_39 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
double last_1_var_1_5 = 127.5;
signed long int last_1_var_1_15 = 1000;
double last_1_var_1_16 = 1000000000000000.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch30Filler_PE_CI
	/* 58L, 173L, 563L, 586L, 1017L, 1125L) */ if (last_1_var_1_1) {
		/* 52L, 167L, 565L, 588L, 1011L, 1128L) */ if (/* 40L, 146L, 147L, 566L, 589L, 999L, 1129L) */ ((/* 37L, 144L, 148L, 567L, 590L, 996L, 1130L) */ (max (/* 37L, 144L, 148L, 567L, 590L, 996L, 1130L) */ (last_1_var_1_5) , (49.75)))) > (last_1_var_1_16))) {
			/* 51L, 166L, 571L, 594L, 1010L, 1136L) */ var_1_11 = (
				/* 50L, 165L, 574L, 597L, 1009L, 1139L) */ (min (
					/* 50L, 165L, 574L, 597L, 1009L, 1139L) */ (
						last_1_var_1_15
					) , (
						/* 49L, 164L, 576L, 599L, 1008L, 1142L) */ (max (
							/* 49L, 164L, 576L, 599L, 1008L, 1142L) */ (
								/* 47L, 162L, 577L, 600L, 1006L, 1143L) */ ((
									var_1_13
								) - (
									5
								))
							) , (
								var_1_14
							)
						))
					)
				))
			);
		}
	} else {
		/* 57L, 172L, 581L, 604L, 1016L, 1147L) */ var_1_11 = (
			last_1_var_1_15
		);
	}


	// From: Req1Batch30Filler_PE_CI
	signed long int stepLocal_0 = last_1_var_1_15;
	/* 15L, 24L, 303L, 315L, 975L, 1061L) */ if (/* 10L, 7L, 8L, 304L, 316L, 970L, 1056L) */ ((/* 8L, 5L, 9L, 305L, 317L, 967L, 1055L) */ ((last_1_var_1_15) / (/* 7L, 4L, 11L, 307L, 319L, 966L, 1054L) */ (abs (-16))))) >= (stepLocal_0))) {
		/* 14L, 23L, 310L, 322L, 974L, 1060L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: Req5Batch30Filler_PE_CI
	/* 1154L, 237L, 656L, 687L) */ if (/* 1155L, 184L, 185L, 657L, 688L) */ ((/* 1156L, 180L, 186L, 658L, 689L) */ (- (var_1_11))) > (/* 1158L, 183L, 188L, 660L, 691L) */ ((var_1_11) & (var_1_13))))) {
		/* 1161L, 231L, 663L, 694L) */ if (/* 1162L, 199L, 200L, 664L, 695L) */ ((var_1_11) <= (128))) {
			/* 1165L, 225L, 667L, 698L) */ if (var_1_1) {
				/* 1167L, 212L, 669L, 700L) */ var_1_15 = (
					var_1_14
				);
			} else {
				/* 1171L, 224L, 673L, 704L) */ var_1_15 = (
					var_1_13
				);
			}
		} else {
			/* 1175L, 230L, 677L, 708L) */ var_1_15 = (
				var_1_13
			);
		}
	} else {
		/* 1179L, 236L, 681L, 712L) */ var_1_15 = (
			var_1_13
		);
	}


	// From: Req2Batch30Filler_PE_CI
	signed long int stepLocal_2 = var_1_15;
	unsigned char stepLocal_1 = /* 1066L, 46L, 50L, 360L, 381L) */ ((var_1_11) < (var_1_15));
	/* 1088L, 70L, 351L, 372L) */ if (var_1_1) {
		/* 1087L, 68L, 353L, 374L) */ if (/* 1075L, 35L, 36L, 354L, 375L) */ ((var_1_11) >= (stepLocal_2))) {
			/* 1082L, 62L, 357L, 378L) */ if (/* 1077L, 47L, 48L, 358L, 379L) */ ((var_1_1) || (stepLocal_1))) {
				/* 1081L, 61L, 363L, 384L) */ var_1_5 = (
					var_1_7
				);
			}
		} else {
			/* 1086L, 67L, 367L, 388L) */ var_1_5 = (
				var_1_7
			);
		}
	}


	// From: Req6Batch30Filler_PE_CI
	signed long int stepLocal_3 = /* 1185L, 250L, 254L, 874L, 897L) */ ((/* 1186L, 248L, 255L, 875L, 898L) */ ((var_1_2) * (var_1_11))) * (32));
	/* 1207L, 299L, 871L, 894L) */ if (/* 1192L, 251L, 252L, 872L, 895L) */ ((var_1_14) >= (stepLocal_3))) {
		/* 1202L, 293L, 879L, 902L) */ if (var_1_1) {
			/* 1197L, 272L, 881L, 904L) */ var_1_16 = (
				var_1_10
			);
		} else {
			/* 1201L, 292L, 885L, 908L) */ var_1_16 = (
				var_1_7
			);
		}
	} else {
		/* 1206L, 298L, 889L, 912L) */ var_1_16 = (
			var_1_10
		);
	}


	// From: Req3Batch30Filler_PE_CI
	/* 1096L, 127L, 438L, 470L) */ if (/* 1097L, 78L, 79L, 439L, 471L) */ ((10.55f) < (var_1_16))) {
		/* 1100L, 106L, 442L, 474L) */ if (/* 1101L, 89L, 90L, 443L, 475L) */ ((var_1_16) > (/* 1103L, 88L, 92L, 445L, 477L) */ ((var_1_7) * (var_1_5))))) {
			/* 1106L, 105L, 448L, 480L) */ var_1_8 = (
				/* 1109L, 104L, 451L, 483L) */ (max (
					/* 1109L, 104L, 451L, 483L) */ (
						var_1_7
					) , (
						var_1_10
					)
				))
			);
		}
	} else {
		/* 1112L, 125L, 454L, 486L) */ if (/* 1113L, 110L, 111L, 455L, 487L) */ ((var_1_16) > (var_1_7))) {
			/* 1116L, 120L, 458L, 490L) */ var_1_8 = (
				var_1_10
			);
		} else {
			/* 1120L, 124L, 462L, 494L) */ var_1_8 = (
				var_1_7
			);
		}
	}


	// From: CodeObject1
	/* 410L, 118L) */ if (/* 411L, 97L, 98L) */ ((/* 412L, 93L, 99L) */ ((/* 413L, 91L, 100L) */ (abs (var_1_18))) - (var_1_19))) == (/* 416L, 96L, 103L) */ ((var_1_20) * (var_1_21))))) {
		/* 419L, 117L) */ var_1_17 = (
			-4
		);
	}


	// From: CodeObject2
	/* 424L, 127L) */ var_1_22 = (
		var_1_2
	);


	// From: CodeObject3
	/* 428L, 196L) */ if (/* 429L, 134L, 135L) */ ((var_1_14) != (var_1_15))) {
		/* 432L, 165L) */ if (/* 433L, 145L, 146L) */ ((var_1_5) < (/* 435L, 144L, 148L) */ ((var_1_19) / (var_1_24))))) {
			/* 438L, 160L) */ var_1_23 = (
				/* 441L, 159L) */ (abs (
					4
				))
			);
		} else {
			/* 443L, 164L) */ var_1_23 = (
				64
			);
		}
	} else {
		/* 447L, 194L) */ if (var_1_1) {
			/* 449L, 173L) */ var_1_23 = (
				var_1_26
			);
		} else {
			/* 453L, 193L) */ var_1_23 = (
				var_1_27
			);
		}
	}


	// From: CodeObject4
	/* 458L, 203L) */ var_1_28 = (
		var_1_26
	);


	// From: CodeObject5
	/* 463L, 301L) */ if (/* 464L, 214L, 215L) */ ((/* 465L, 212L, 216L) */ ((/* 466L, 210L, 217L) */ (max (/* 466L, 210L, 217L) */ (var_1_30) , (var_1_31)))) << (var_1_13))) <= (var_1_27))) {
		/* 471L, 237L) */ var_1_29 = (
			/* 474L, 236L) */ ((
				/* 475L, 233L) */ (min (
					/* 475L, 233L) */ (
						var_1_32
					) , (
						var_1_33
					)
				))
			) - (
				/* 478L, 235L) */ (abs (
					var_1_7
				))
			))
		);
	} else {
		/* 480L, 299L) */ if (/* 481L, 240L, 241L) */ ((var_1_30) >= (var_1_26))) {
			/* 484L, 297L) */ if (/* 485L, 253L, 254L) */ ((var_1_11) > (/* 487L, 252L, 256L) */ ((/* 488L, 250L, 257L) */ ((5) ^ (var_1_31))) ^ (var_1_26))))) {
				/* 492L, 287L) */ if (/* 493L, 272L, 273L) */ ((var_1_30) > (/* 495L, 271L, 275L) */ (abs (/* 496L, 270L, 276L) */ (abs (-10))))))) {
					/* 498L, 286L) */ var_1_29 = (
						31.1f
					);
				}
			} else {
				/* 502L, 296L) */ var_1_29 = (
					/* 505L, 295L) */ (max (
						/* 505L, 295L) */ (
							var_1_33
						) , (
							/* 507L, 294L) */ ((
								63.5f
							) + (
								var_1_35
							))
						)
					))
				);
			}
		}
	}


	// From: CodeObject6
	/* 510L, 327L) */ if (/* 511L, 309L, 310L) */ ((var_1_31) < (var_1_14))) {
		/* 514L, 320L) */ var_1_36 = (
			/* 517L, 319L) */ (abs (
				var_1_32
			))
		);
	} else {
		/* 519L, 326L) */ var_1_36 = (
			/* 522L, 325L) */ (max (
				/* 522L, 325L) */ (
					var_1_32
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject7
	/* 526L, 334L) */ var_1_37 = (
		var_1_30
	);


	// From: CodeObject8
	/* 531L, 342L) */ var_1_38 = (
		var_1_11
	);


	// From: CodeObject9
	/* 536L, 350L) */ var_1_39 = (
		var_1_30
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483647);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	if (/* 541L, 7L, 14L, 328L, 340L, 984L, 1212L, 25L) */ ((/* 542L, 5L, 15L, 329L, 341L, 981L, 1213L, 22L) */ ((last_1_var_1_15) / (/* 545L, 4L, 17L, 331L, 343L, 980L, 1216L, 21L) */ (abs (-16))))) >= (last_1_var_1_15))) {
	}
	if (var_1_1) {
		if (/* 557L, 35L, 39L, 396L, 417L, 1228L) */ ((var_1_11) >= (var_1_15))) {
			if (/* 561L, 47L, 53L, 400L, 421L, 1232L) */ ((var_1_1) || (/* 563L, 46L, 55L, 402L, 423L, 1234L) */ ((var_1_11) < (var_1_15))))) {
			}
		} else {
		}
	}
	if (/* 579L, 78L, 82L, 503L, 535L, 1250L) */ ((10.55f) < (var_1_16))) {
		if (/* 583L, 89L, 95L, 507L, 539L, 1254L) */ ((var_1_16) > (/* 585L, 88L, 97L, 509L, 541L, 1256L) */ ((var_1_7) * (var_1_5))))) {
		}
	} else {
		if (/* 595L, 110L, 114L, 519L, 551L, 1266L) */ ((var_1_16) > (var_1_7))) {
		} else {
		}
	}
	if (last_1_var_1_1) {
		if (/* 611L, 146L, 152L, 612L, 635L, 1027L, 1282L, 68L) */ ((/* 612L, 144L, 153L, 613L, 636L, 1024L, 1283L, 65L) */ (max (/* 612L, 144L, 153L, 613L, 636L, 1024L, 1283L, 65L) */ (last_1_var_1_5) , (49.75)))) > (last_1_var_1_16))) {
		}
	} else {
	}
	if (/* 637L, 184L, 191L, 719L, 750L, 1308L) */ ((/* 638L, 180L, 192L, 720L, 751L, 1309L) */ (- (var_1_11))) > (/* 640L, 183L, 194L, 722L, 753L, 1311L) */ ((var_1_11) & (var_1_13))))) {
		if (/* 644L, 199L, 203L, 726L, 757L, 1315L) */ ((var_1_11) <= (128))) {
			if (var_1_1) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 667L, 251L, 259L, 918L, 941L, 1338L) */ ((var_1_14) >= (/* 669L, 250L, 261L, 920L, 943L, 1340L) */ ((/* 670L, 248L, 262L, 921L, 944L, 1341L) */ ((var_1_2) * (var_1_11))) * (32))))) {
		if (var_1_1) {
		} else {
		}
	} else {
	}
	return /* 693L) */ ((
	/* 692L) */ ((
		/* 691L) */ ((
			/* 690L) */ ((
				/* 689L) */ ((
					/* 540L, 25L, 327L, 339L, 989L, 1211L, 30L) */ ((
						/* 541L, 7L, 14L, 328L, 340L, 984L, 1212L, 25L) */ ((
							/* 542L, 5L, 15L, 329L, 341L, 981L, 1213L, 22L) */ ((
								last_1_var_1_15
							) / (
								/* 545L, 4L, 17L, 331L, 343L, 980L, 1216L, 21L) */ (abs (
									-16
								))
							))
						) >= (
							last_1_var_1_15
						))
					) ? (
						/* 549L, 23L, 334L, 346L, 988L, 1220L, 29L) */ ((
							var_1_1
						) == (
							/* 549L, 23L, 334L, 346L, 988L, 1220L, 29L) */ ((unsigned char) (
								var_1_4
							))
						))
					) : (
						1
					))
				) && (
					/* 554L, 71L, 393L, 414L, 1225L) */ ((
						var_1_1
					) ? (
						/* 556L, 69L, 395L, 416L, 1227L) */ ((
							/* 557L, 35L, 39L, 396L, 417L, 1228L) */ ((
								var_1_11
							) >= (
								var_1_15
							))
						) ? (
							/* 560L, 63L, 399L, 420L, 1231L) */ ((
								/* 561L, 47L, 53L, 400L, 421L, 1232L) */ ((
									var_1_1
								) || (
									/* 563L, 46L, 55L, 402L, 423L, 1234L) */ ((
										var_1_11
									) < (
										var_1_15
									))
								))
							) ? (
								/* 566L, 61L, 405L, 426L, 1237L) */ ((
									var_1_5
								) == (
									/* 566L, 61L, 405L, 426L, 1237L) */ ((double) (
										var_1_7
									))
								))
							) : (
								1
							))
						) : (
							/* 570L, 67L, 409L, 430L, 1241L) */ ((
								var_1_5
							) == (
								/* 570L, 67L, 409L, 430L, 1241L) */ ((double) (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 578L, 128L, 502L, 534L, 1249L) */ ((
					/* 579L, 78L, 82L, 503L, 535L, 1250L) */ ((
						10.55f
					) < (
						var_1_16
					))
				) ? (
					/* 582L, 107L, 506L, 538L, 1253L) */ ((
						/* 583L, 89L, 95L, 507L, 539L, 1254L) */ ((
							var_1_16
						) > (
							/* 585L, 88L, 97L, 509L, 541L, 1256L) */ ((
								var_1_7
							) * (
								var_1_5
							))
						))
					) ? (
						/* 588L, 105L, 512L, 544L, 1259L) */ ((
							var_1_8
						) == (
							/* 588L, 105L, 512L, 544L, 1259L) */ ((double) (
								/* 591L, 104L, 515L, 547L, 1262L) */ (max (
									/* 591L, 104L, 515L, 547L, 1262L) */ (
										var_1_7
									) , (
										var_1_10
									)
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 594L, 126L, 518L, 550L, 1265L) */ ((
						/* 595L, 110L, 114L, 519L, 551L, 1266L) */ ((
							var_1_16
						) > (
							var_1_7
						))
					) ? (
						/* 598L, 120L, 522L, 554L, 1269L) */ ((
							var_1_8
						) == (
							/* 598L, 120L, 522L, 554L, 1269L) */ ((double) (
								var_1_10
							))
						))
					) : (
						/* 602L, 124L, 526L, 558L, 1273L) */ ((
							var_1_8
						) == (
							/* 602L, 124L, 526L, 558L, 1273L) */ ((double) (
								var_1_7
							))
						))
					))
				))
			))
		) && (
			/* 607L, 174L, 609L, 632L, 1045L, 1278L, 86L) */ ((
				last_1_var_1_1
			) ? (
				/* 610L, 168L, 611L, 634L, 1039L, 1281L, 80L) */ ((
					/* 611L, 146L, 152L, 612L, 635L, 1027L, 1282L, 68L) */ ((
						/* 612L, 144L, 153L, 613L, 636L, 1024L, 1283L, 65L) */ (max (
							/* 612L, 144L, 153L, 613L, 636L, 1024L, 1283L, 65L) */ (
								last_1_var_1_5
							) , (
								49.75
							)
						))
					) > (
						last_1_var_1_16
					))
				) ? (
					/* 618L, 166L, 617L, 640L, 1038L, 1289L, 79L) */ ((
						var_1_11
					) == (
						/* 618L, 166L, 617L, 640L, 1038L, 1289L, 79L) */ ((signed long int) (
							/* 621L, 165L, 620L, 643L, 1037L, 1292L, 78L) */ (min (
								/* 621L, 165L, 620L, 643L, 1037L, 1292L, 78L) */ (
									last_1_var_1_15
								) , (
									/* 624L, 164L, 622L, 645L, 1036L, 1295L, 77L) */ (max (
										/* 624L, 164L, 622L, 645L, 1036L, 1295L, 77L) */ (
											/* 625L, 162L, 623L, 646L, 1034L, 1296L, 75L) */ ((
												var_1_13
											) - (
												5
											))
										) , (
											var_1_14
										)
									))
								)
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 629L, 172L, 627L, 650L, 1044L, 1300L, 85L) */ ((
					var_1_11
				) == (
					/* 629L, 172L, 627L, 650L, 1044L, 1300L, 85L) */ ((signed long int) (
						last_1_var_1_15
					))
				))
			))
		))
	) && (
		/* 636L, 238L, 718L, 749L, 1307L) */ ((
			/* 637L, 184L, 191L, 719L, 750L, 1308L) */ ((
				/* 638L, 180L, 192L, 720L, 751L, 1309L) */ (- (
					var_1_11
				))
			) > (
				/* 640L, 183L, 194L, 722L, 753L, 1311L) */ ((
					var_1_11
				) & (
					var_1_13
				))
			))
		) ? (
			/* 643L, 232L, 725L, 756L, 1314L) */ ((
				/* 644L, 199L, 203L, 726L, 757L, 1315L) */ ((
					var_1_11
				) <= (
					128
				))
			) ? (
				/* 647L, 226L, 729L, 760L, 1318L) */ ((
					var_1_1
				) ? (
					/* 649L, 212L, 731L, 762L, 1320L) */ ((
						var_1_15
					) == (
						/* 649L, 212L, 731L, 762L, 1320L) */ ((signed long int) (
							var_1_14
						))
					))
				) : (
					/* 653L, 224L, 735L, 766L, 1324L) */ ((
						var_1_15
					) == (
						/* 653L, 224L, 735L, 766L, 1324L) */ ((signed long int) (
							var_1_13
						))
					))
				))
			) : (
				/* 657L, 230L, 739L, 770L, 1328L) */ ((
					var_1_15
				) == (
					/* 657L, 230L, 739L, 770L, 1328L) */ ((signed long int) (
						var_1_13
					))
				))
			))
		) : (
			/* 661L, 236L, 743L, 774L, 1332L) */ ((
				var_1_15
			) == (
				/* 661L, 236L, 743L, 774L, 1332L) */ ((signed long int) (
					var_1_13
				))
			))
		))
	))
) && (
	/* 666L, 300L, 917L, 940L, 1337L) */ ((
		/* 667L, 251L, 259L, 918L, 941L, 1338L) */ ((
			var_1_14
		) >= (
			/* 669L, 250L, 261L, 920L, 943L, 1340L) */ ((
				/* 670L, 248L, 262L, 921L, 944L, 1341L) */ ((
					var_1_2
				) * (
					var_1_11
				))
			) * (
				32
			))
		))
	) ? (
		/* 674L, 294L, 925L, 948L, 1345L) */ ((
			var_1_1
		) ? (
			/* 676L, 272L, 927L, 950L, 1347L) */ ((
				var_1_16
			) == (
				/* 676L, 272L, 927L, 950L, 1347L) */ ((double) (
					var_1_10
				))
			))
		) : (
			/* 680L, 292L, 931L, 954L, 1351L) */ ((
				var_1_16
			) == (
				/* 680L, 292L, 931L, 954L, 1351L) */ ((double) (
					var_1_7
				))
			))
		))
	) : (
		/* 684L, 298L, 935L, 958L, 1355L) */ ((
			var_1_16
		) == (
			/* 684L, 298L, 935L, 958L, 1355L) */ ((double) (
				var_1_10
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
