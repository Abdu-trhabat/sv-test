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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90Filler_PE_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_2 = 16;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
signed long int var_1_5 = -10;
signed long int var_1_10 = 5;
signed long int var_1_11 = -4;
signed char var_1_12 = 4;
signed long int var_1_13 = 100000;
signed char var_1_14 = -16;
double var_1_15 = 2.25;
signed long int var_1_16 = 2;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -1;
signed short int var_1_19 = 4;
signed short int var_1_20 = 32;
double var_1_21 = 4.5;
double var_1_22 = 8.75;
double var_1_23 = 1000.8;
double var_1_24 = 63.5;
double var_1_25 = 31.5;
signed short int var_1_26 = 16;
signed short int var_1_27 = -128;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
signed short int var_1_30 = 0;
signed short int var_1_31 = 10;
signed short int var_1_32 = 128;
float var_1_33 = 127.8;
float var_1_34 = -0.2;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 1;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 256;
unsigned char var_1_47 = 2;
unsigned long int var_1_48 = 16;
unsigned long int var_1_49 = 1289077960;
unsigned long int var_1_50 = 10;
unsigned long int var_1_51 = 3273461173;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
signed long int last_1_var_1_16 = 2;
double last_1_var_1_21 = 4.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch90Filler_PE_CN
	/* 59L, 201L, 641L, 655L, 997L, 1121L) */ if (/* 54L, 186L, 187L, 642L, 656L, 992L, 1122L) */ ((/* 52L, 184L, 188L, 643L, 657L, 990L, 1123L) */ ((last_1_var_1_1) + (last_1_var_1_16))) != (var_1_13))) {
		/* 58L, 200L, 647L, 661L, 996L, 1129L) */ var_1_15 = (
			16.4
		);
	}


	// From: Req4Batch90Filler_PE_CN
	unsigned char stepLocal_0 = var_1_17;
	/* 23L, 254L, 694L, 715L, 1038L, 1156L) */ if (/* 6L, 215L, 216L, 695L, 716L, 1021L, 1140L) */ ((8.5) <= (last_1_var_1_21))) {
		/* 18L, 248L, 698L, 719L, 1033L, 1151L) */ if (/* 13L, 229L, 230L, 699L, 720L, 1028L, 1146L) */ ((stepLocal_0) || (/* 12L, 228L, 232L, 701L, 722L, 1027L, 1145L) */ ((/* 10L, 226L, 233L, 702L, 723L, 1025L, 1143L) */ ((var_1_11) & (var_1_3))) != (var_1_13))))) {
			/* 17L, 247L, 706L, 727L, 1032L, 1150L) */ var_1_16 = (
				var_1_10
			);
		}
	} else {
		/* 22L, 253L, 710L, 731L, 1037L, 1155L) */ var_1_16 = (
			0
		);
	}


	// From: Req2Batch90Filler_PE_CN
	/* 1097L, 172L, 548L, 571L) */ if (/* 1098L, 97L, 98L, 549L, 572L) */ ((/* 1099L, 93L, 99L, 550L, 573L) */ ((/* 1100L, 89L, 100L, 551L, 574L) */ ((var_1_16) * (var_1_4))) * (/* 1103L, 92L, 103L, 554L, 577L) */ ((-500) / (var_1_3))))) <= (/* 1106L, 96L, 106L, 557L, 580L) */ ((var_1_2) - (var_1_13))))) {
		/* 1109L, 123L, 560L, 583L) */ var_1_12 = (
			var_1_14
		);
	} else {
		/* 1113L, 171L, 564L, 587L) */ var_1_12 = (
			5
		);
	}


	// From: Req5Batch90Filler_PE_CN
	/* 1161L, 275L, 779L, 795L) */ if (var_1_17) {
		/* 1163L, 268L, 781L, 797L) */ var_1_18 = (
			/* 1166L, 267L, 784L, 800L) */ ((
				var_1_19
			) - (
				var_1_20
			))
		);
	} else {
		/* 1169L, 274L, 787L, 803L) */ var_1_18 = (
			/* 1172L, 273L, 790L, 806L) */ ((
				var_1_14
			) + (
				var_1_12
			))
		);
	}


	// From: Req6Batch90Filler_PE_CN
	/* 1177L, 344L, 843L, 879L) */ if (/* 1178L, 287L, 288L, 844L, 880L) */ ((-50) == (/* 1180L, 286L, 290L, 846L, 882L) */ ((var_1_3) + (var_1_16))))) {
		/* 1183L, 307L, 849L, 885L) */ var_1_21 = (
			/* 1186L, 306L, 852L, 888L) */ ((
				/* 1187L, 304L, 853L, 889L) */ ((
					/* 1188L, 302L, 854L, 890L) */ (min (
						/* 1188L, 302L, 854L, 890L) */ (
							var_1_22
						) , (
							var_1_23
						)
					))
				) - (
					var_1_24
				))
			) + (
				var_1_25
			))
		);
	} else {
		/* 1193L, 342L, 859L, 895L) */ if (/* 1194L, 310L, 311L, 860L, 896L) */ ((var_1_15) > (var_1_25))) {
			/* 1197L, 340L, 863L, 899L) */ if (/* 1198L, 321L, 322L, 864L, 900L) */ ((/* 1199L, 319L, 323L, 865L, 901L) */ ((var_1_19) - (var_1_20))) <= (var_1_13))) {
				/* 1203L, 335L, 869L, 905L) */ var_1_21 = (
					var_1_22
				);
			} else {
				/* 1207L, 339L, 873L, 909L) */ var_1_21 = (
					var_1_25
				);
			}
		}
	}


	// From: Req1Batch90Filler_PE_CN
	/* 1065L, 75L, 417L, 450L) */ if (/* 1066L, 11L, 12L, 418L, 451L) */ ((/* 1067L, 7L, 13L, 419L, 452L) */ ((var_1_2) / (/* 1069L, 6L, 15L, 421L, 454L) */ (min (/* 1069L, 6L, 15L, 421L, 454L) */ (var_1_3) , (var_1_4)))))) <= (/* 1072L, 10L, 18L, 424L, 457L) */ ((var_1_5) | (last_1_var_1_1))))) {
		/* 1076L, 69L, 428L, 461L) */ if (/* 1077L, 34L, 35L, 429L, 462L) */ ((/* 1078L, 32L, 36L, 430L, 463L) */ ((var_1_21) * (var_1_15))) < (var_1_21))) {
			/* 1082L, 48L, 434L, 467L) */ var_1_1 = (
				var_1_10
			);
		} else {
			/* 1086L, 68L, 438L, 471L) */ var_1_1 = (
				var_1_11
			);
		}
	} else {
		/* 1090L, 74L, 442L, 475L) */ var_1_1 = (
			var_1_10
		);
	}


	// From: CodeObject1
	/* 85L) */ var_1_26 = (
		var_1_27
	);


	// From: CodeObject2
	/* 154L) */ if (var_1_29) {
		/* 152L) */ if (/* 103L, 102L) */ ((var_1_27) < (/* 105L, 101L) */ (max (/* 105L, 101L) */ (/* 106L, 97L) */ (min (/* 106L, 97L) */ (var_1_26) , (var_1_30)))) , (/* 109L, 100L) */ ((var_1_31) / (var_1_32)))))))) {
			/* 150L) */ if (/* 125L, 124L) */ ((/* 126L, 122L) */ (abs (var_1_33))) < (var_1_34))) {
				/* 138L) */ var_1_28 = (
					/* 137L) */ ((
						var_1_35
					) || (
						var_1_36
					))
				);
			} else {
				/* 148L) */ if (var_1_35) {
					/* 147L) */ var_1_28 = (
						/* 146L) */ ((
							var_1_36
						) || (
							var_1_37
						))
					);
				}
			}
		}
	}


	// From: CodeObject3
	/* 186L) */ if (/* 161L, 160L) */ ((var_1_34) == (var_1_33))) {
		/* 175L) */ var_1_38 = (
			/* 174L) */ (abs (
				/* 173L) */ (min (
					/* 173L) */ (
						/* 171L) */ (max (
							/* 171L) */ (
								var_1_39
							) , (
								var_1_40
							)
						))
					) , (
						var_1_41
					)
				))
			))
		);
	} else {
		/* 185L) */ var_1_38 = (
			/* 184L) */ (min (
				/* 184L) */ (
					var_1_41
				) , (
					/* 183L) */ (max (
						/* 183L) */ (
							/* 181L) */ (max (
								/* 181L) */ (
									var_1_40
								) , (
									var_1_39
								)
							))
						) , (
							var_1_42
						)
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 193L) */ var_1_43 = (
		var_1_30
	);


	// From: CodeObject5
	/* 207L) */ if (var_1_37) {
		/* 206L) */ var_1_44 = (
			/* 205L) */ ((
				var_1_36
			) && (
				var_1_45
			))
		);
	}


	// From: CodeObject6
	/* 236L) */ if (/* 218L, 217L) */ ((var_1_42) <= (/* 220L, 216L) */ ((/* 221L, 214L) */ ((var_1_41) >> (var_1_47))) % (var_1_32))))) {
		/* 235L) */ var_1_46 = (
			var_1_27
		);
	}


	// From: CodeObject7
	/* 259L) */ if (var_1_35) {
		/* 258L) */ var_1_48 = (
			/* 257L) */ ((
				/* 251L) */ ((
					var_1_47
				) + (
					var_1_40
				))
			) + (
				/* 256L) */ (min (
					/* 256L) */ (
						var_1_39
					) , (
						/* 255L) */ ((
							var_1_49
						) - (
							var_1_30
						))
					)
				))
			))
		);
	}


	// From: CodeObject8
	/* 306L) */ if (/* 268L, 267L) */ ((var_1_46) >= (/* 270L, 266L) */ ((16) << (var_1_27))))) {
		/* 300L) */ if (/* 283L, 282L) */ ((var_1_43) > (/* 285L, 281L) */ ((var_1_38) | (var_1_39))))) {
			/* 299L) */ var_1_50 = (
				/* 298L) */ ((
					/* 296L) */ (abs (
						var_1_51
					))
				) - (
					32u
				))
			);
		}
	} else {
		/* 305L) */ var_1_50 = (
			var_1_38
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32768);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32768);
	assume_abort_if_not(var_1_32 <= 32767);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 7);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 312L, 11L, 21L, 484L, 517L, 1216L) */ ((/* 313L, 7L, 22L, 485L, 518L, 1217L) */ ((var_1_2) / (/* 315L, 6L, 24L, 487L, 520L, 1219L) */ (min (/* 315L, 6L, 24L, 487L, 520L, 1219L) */ (var_1_3) , (var_1_4)))))) <= (/* 318L, 10L, 27L, 490L, 523L, 1222L) */ ((var_1_5) | (last_1_var_1_1))))) {
		if (/* 323L, 34L, 40L, 495L, 528L, 1227L) */ ((/* 324L, 32L, 41L, 496L, 529L, 1228L) */ ((var_1_21) * (var_1_15))) < (var_1_21))) {
		} else {
		}
	} else {
	}
	if (/* 344L, 97L, 109L, 595L, 618L, 1248L) */ ((/* 345L, 93L, 110L, 596L, 619L, 1249L) */ ((/* 346L, 89L, 111L, 597L, 620L, 1250L) */ ((var_1_16) * (var_1_4))) * (/* 349L, 92L, 114L, 600L, 623L, 1253L) */ ((-500) / (var_1_3))))) <= (/* 352L, 96L, 117L, 603L, 626L, 1256L) */ ((var_1_2) - (var_1_13))))) {
	} else {
	}
	if (/* 368L, 186L, 192L, 670L, 684L, 1008L, 1272L, 70L) */ ((/* 369L, 184L, 193L, 671L, 685L, 1006L, 1273L, 68L) */ ((last_1_var_1_1) + (last_1_var_1_16))) != (var_1_13))) {
	}
	if (/* 381L, 215L, 219L, 737L, 758L, 1043L, 1285L, 29L) */ ((8.5) <= (last_1_var_1_21))) {
		if (/* 386L, 229L, 237L, 741L, 762L, 1050L, 1290L, 36L) */ ((var_1_17) || (/* 388L, 228L, 239L, 743L, 764L, 1049L, 1292L, 35L) */ ((/* 389L, 226L, 240L, 744L, 765L, 1047L, 1293L, 33L) */ ((var_1_11) & (var_1_3))) != (var_1_13))))) {
		}
	} else {
	}
	if (var_1_17) {
	} else {
	}
	if (/* 420L, 287L, 293L, 916L, 952L, 1324L) */ ((-50) == (/* 422L, 286L, 295L, 918L, 954L, 1326L) */ ((var_1_3) + (var_1_16))))) {
	} else {
		if (/* 436L, 310L, 314L, 932L, 968L, 1340L) */ ((var_1_15) > (var_1_25))) {
			if (/* 440L, 321L, 327L, 936L, 972L, 1344L) */ ((/* 441L, 319L, 328L, 937L, 973L, 1345L) */ ((var_1_19) - (var_1_20))) <= (var_1_13))) {
			} else {
			}
		}
	}
	return /* 458L) */ ((
	/* 457L) */ ((
		/* 456L) */ ((
			/* 455L) */ ((
				/* 454L) */ ((
					/* 311L, 76L, 483L, 516L, 1215L) */ ((
						/* 312L, 11L, 21L, 484L, 517L, 1216L) */ ((
							/* 313L, 7L, 22L, 485L, 518L, 1217L) */ ((
								var_1_2
							) / (
								/* 315L, 6L, 24L, 487L, 520L, 1219L) */ (min (
									/* 315L, 6L, 24L, 487L, 520L, 1219L) */ (
										var_1_3
									) , (
										var_1_4
									)
								))
							))
						) <= (
							/* 318L, 10L, 27L, 490L, 523L, 1222L) */ ((
								var_1_5
							) | (
								last_1_var_1_1
							))
						))
					) ? (
						/* 322L, 70L, 494L, 527L, 1226L) */ ((
							/* 323L, 34L, 40L, 495L, 528L, 1227L) */ ((
								/* 324L, 32L, 41L, 496L, 529L, 1228L) */ ((
									var_1_21
								) * (
									var_1_15
								))
							) < (
								var_1_21
							))
						) ? (
							/* 328L, 48L, 500L, 533L, 1232L) */ ((
								var_1_1
							) == (
								/* 328L, 48L, 500L, 533L, 1232L) */ ((signed long int) (
									var_1_10
								))
							))
						) : (
							/* 332L, 68L, 504L, 537L, 1236L) */ ((
								var_1_1
							) == (
								/* 332L, 68L, 504L, 537L, 1236L) */ ((signed long int) (
									var_1_11
								))
							))
						))
					) : (
						/* 336L, 74L, 508L, 541L, 1240L) */ ((
							var_1_1
						) == (
							/* 336L, 74L, 508L, 541L, 1240L) */ ((signed long int) (
								var_1_10
							))
						))
					))
				) && (
					/* 343L, 173L, 594L, 617L, 1247L) */ ((
						/* 344L, 97L, 109L, 595L, 618L, 1248L) */ ((
							/* 345L, 93L, 110L, 596L, 619L, 1249L) */ ((
								/* 346L, 89L, 111L, 597L, 620L, 1250L) */ ((
									var_1_16
								) * (
									var_1_4
								))
							) * (
								/* 349L, 92L, 114L, 600L, 623L, 1253L) */ ((
									-500
								) / (
									var_1_3
								))
							))
						) <= (
							/* 352L, 96L, 117L, 603L, 626L, 1256L) */ ((
								var_1_2
							) - (
								var_1_13
							))
						))
					) ? (
						/* 355L, 123L, 606L, 629L, 1259L) */ ((
							var_1_12
						) == (
							/* 355L, 123L, 606L, 629L, 1259L) */ ((signed char) (
								var_1_14
							))
						))
					) : (
						/* 359L, 171L, 610L, 633L, 1263L) */ ((
							var_1_12
						) == (
							/* 359L, 171L, 610L, 633L, 1263L) */ ((signed char) (
								5
							))
						))
					))
				))
			) && (
				/* 367L, 202L, 669L, 683L, 1013L, 1271L, 75L) */ ((
					/* 368L, 186L, 192L, 670L, 684L, 1008L, 1272L, 70L) */ ((
						/* 369L, 184L, 193L, 671L, 685L, 1006L, 1273L, 68L) */ ((
							last_1_var_1_1
						) + (
							last_1_var_1_16
						))
					) != (
						var_1_13
					))
				) ? (
					/* 375L, 200L, 675L, 689L, 1012L, 1279L, 74L) */ ((
						var_1_15
					) == (
						/* 375L, 200L, 675L, 689L, 1012L, 1279L, 74L) */ ((double) (
							16.4
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 380L, 255L, 736L, 757L, 1060L, 1284L, 46L) */ ((
				/* 381L, 215L, 219L, 737L, 758L, 1043L, 1285L, 29L) */ ((
					8.5
				) <= (
					last_1_var_1_21
				))
			) ? (
				/* 385L, 249L, 740L, 761L, 1055L, 1289L, 41L) */ ((
					/* 386L, 229L, 237L, 741L, 762L, 1050L, 1290L, 36L) */ ((
						var_1_17
					) || (
						/* 388L, 228L, 239L, 743L, 764L, 1049L, 1292L, 35L) */ ((
							/* 389L, 226L, 240L, 744L, 765L, 1047L, 1293L, 33L) */ ((
								var_1_11
							) & (
								var_1_3
							))
						) != (
							var_1_13
						))
					))
				) ? (
					/* 393L, 247L, 748L, 769L, 1054L, 1297L, 40L) */ ((
						var_1_16
					) == (
						/* 393L, 247L, 748L, 769L, 1054L, 1297L, 40L) */ ((signed long int) (
							var_1_10
						))
					))
				) : (
					1
				))
			) : (
				/* 397L, 253L, 752L, 773L, 1059L, 1301L, 45L) */ ((
					var_1_16
				) == (
					/* 397L, 253L, 752L, 773L, 1059L, 1301L, 45L) */ ((signed long int) (
						0
					))
				))
			))
		))
	) && (
		/* 403L, 276L, 811L, 827L, 1307L) */ ((
			var_1_17
		) ? (
			/* 405L, 268L, 813L, 829L, 1309L) */ ((
				var_1_18
			) == (
				/* 405L, 268L, 813L, 829L, 1309L) */ ((signed short int) (
					/* 408L, 267L, 816L, 832L, 1312L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		) : (
			/* 411L, 274L, 819L, 835L, 1315L) */ ((
				var_1_18
			) == (
				/* 411L, 274L, 819L, 835L, 1315L) */ ((signed short int) (
					/* 414L, 273L, 822L, 838L, 1318L) */ ((
						var_1_14
					) + (
						var_1_12
					))
				))
			))
		))
	))
) && (
	/* 419L, 345L, 915L, 951L, 1323L) */ ((
		/* 420L, 287L, 293L, 916L, 952L, 1324L) */ ((
			-50
		) == (
			/* 422L, 286L, 295L, 918L, 954L, 1326L) */ ((
				var_1_3
			) + (
				var_1_16
			))
		))
	) ? (
		/* 425L, 307L, 921L, 957L, 1329L) */ ((
			var_1_21
		) == (
			/* 425L, 307L, 921L, 957L, 1329L) */ ((double) (
				/* 428L, 306L, 924L, 960L, 1332L) */ ((
					/* 429L, 304L, 925L, 961L, 1333L) */ ((
						/* 430L, 302L, 926L, 962L, 1334L) */ (min (
							/* 430L, 302L, 926L, 962L, 1334L) */ (
								var_1_22
							) , (
								var_1_23
							)
						))
					) - (
						var_1_24
					))
				) + (
					var_1_25
				))
			))
		))
	) : (
		/* 435L, 343L, 931L, 967L, 1339L) */ ((
			/* 436L, 310L, 314L, 932L, 968L, 1340L) */ ((
				var_1_15
			) > (
				var_1_25
			))
		) ? (
			/* 439L, 341L, 935L, 971L, 1343L) */ ((
				/* 440L, 321L, 327L, 936L, 972L, 1344L) */ ((
					/* 441L, 319L, 328L, 937L, 973L, 1345L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				) <= (
					var_1_13
				))
			) ? (
				/* 445L, 335L, 941L, 977L, 1349L) */ ((
					var_1_21
				) == (
					/* 445L, 335L, 941L, 977L, 1349L) */ ((double) (
						var_1_22
					))
				))
			) : (
				/* 449L, 339L, 945L, 981L, 1353L) */ ((
					var_1_21
				) == (
					/* 449L, 339L, 945L, 981L, 1353L) */ ((double) (
						var_1_25
					))
				))
			))
		) : (
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
