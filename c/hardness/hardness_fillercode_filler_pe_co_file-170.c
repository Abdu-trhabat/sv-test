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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Filler_PE_CO.c", 13, "reach_error"); }
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
float var_1_1 = 255.2;
float var_1_3 = 9.375;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = -25;
signed short int var_1_11 = -4;
signed short int var_1_12 = 8;
float var_1_13 = 128.2;
float var_1_16 = 4.5;
float var_1_17 = 9999999.25;
signed long int var_1_18 = -64;
signed char var_1_19 = -2;
signed char var_1_20 = 64;
float var_1_21 = 256.5;
unsigned short int var_1_22 = 0;
signed short int var_1_23 = -16;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 256;
unsigned short int var_1_26 = 2;
double var_1_27 = 99999.28;
signed char var_1_28 = 4;
unsigned short int var_1_29 = 1;
signed char var_1_30 = 1;
signed char var_1_31 = 2;
signed char var_1_32 = 10;
float var_1_33 = 127.9;
float var_1_34 = 5.5;
signed char var_1_35 = -1;
unsigned char var_1_36 = 1;
signed long int var_1_37 = -64;
float var_1_38 = 99999999.5;
double var_1_39 = 31.5;
double var_1_40 = 256.4;
double var_1_41 = 64.5;
double var_1_42 = 999999999999.75;
float var_1_43 = 8.5;
unsigned char var_1_44 = 0;
signed long int var_1_45 = -1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_4 = 1;
signed long int last_1_var_1_10 = -25;
float last_1_var_1_13 = 128.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch170Filler_PE_CO
	/* 30L, 53L, 348L, 379L, 993L, 1037L) */ if (/* 3L, 15L, 16L, 349L, 380L, 966L, 1038L) */ ((-5) > (last_1_var_1_10))) {
		/* 25L, 47L, 352L, 383L, 988L, 1042L) */ if (/* 7L, 24L, 25L, 353L, 384L, 970L, 1043L) */ ((last_1_var_1_10) > (10))) {
			/* 16L, 38L, 356L, 387L, 979L, 1047L) */ var_1_4 = (
				/* 15L, 37L, 359L, 390L, 978L, 1050L) */ ((
					/* 13L, 35L, 360L, 391L, 976L, 1051L) */ ((
						last_1_var_1_4
					) && (
						var_1_6
					))
				) || (
					var_1_7
				))
			);
		} else {
			/* 24L, 46L, 365L, 396L, 987L, 1056L) */ var_1_4 = (
				/* 23L, 45L, 368L, 399L, 986L, 1059L) */ ((
					var_1_7
				) && (
					/* 22L, 44L, 370L, 401L, 985L, 1061L) */ ((
						var_1_8
					) || (
						var_1_6
					))
				))
			);
		}
	} else {
		/* 29L, 52L, 373L, 404L, 992L, 1064L) */ var_1_4 = (
			var_1_9
		);
	}


	// From: Req3Batch170Filler_PE_CO
	signed long int stepLocal_0 = -256;
	/* 1084L, 93L, 471L, 486L) */ if (/* 1077L, 69L, 70L, 472L, 487L) */ ((/* 1076L, 67L, 71L, 473L, 488L) */ ((var_1_5) + (/* 1075L, 66L, 73L, 475L, 490L) */ ((var_1_11) + (var_1_12))))) >= (stepLocal_0))) {
		/* 1083L, 91L, 479L, 494L) */ if (var_1_4) {
			/* 1082L, 90L, 481L, 496L) */ var_1_10 = (
				var_1_12
			);
		}
	}


	// From: Req1Batch170Filler_PE_CO
	/* 1029L, 9L, 319L, 326L) */ if (var_1_4) {
		/* 1031L, 8L, 321L, 328L) */ var_1_1 = (
			var_1_3
		);
	}


	// From: Req5Batch170Filler_PE_CO
	/* 1130L, 194L, 776L, 789L) */ if (/* 1131L, 177L, 178L, 777L, 790L) */ ((var_1_10) > (/* 1133L, 176L, 180L, 779L, 792L) */ ((var_1_10) / (/* 1135L, 175L, 182L, 781L, 794L) */ (abs (var_1_18))))))) {
		/* 1137L, 193L, 783L, 796L) */ var_1_17 = (
			var_1_16
		);
	}


	// From: Req7Batch170Filler_PE_CO
	/* 1171L, 314L, 940L, 946L) */ var_1_21 = (
		var_1_3
	);


	// From: Req4Batch170Filler_PE_CO
	/* 1089L, 164L, 612L, 653L) */ if (/* 1090L, 103L, 104L, 613L, 654L) */ ((var_1_10) == (/* 1092L, 102L, 106L, 615L, 656L) */ ((var_1_5) + (var_1_11))))) {
		/* 1095L, 158L, 618L, 659L) */ if (var_1_7) {
			/* 1097L, 152L, 620L, 661L) */ if (/* 1098L, 123L, 124L, 621L, 662L) */ ((var_1_3) == (/* 1100L, 122L, 126L, 623L, 664L) */ (min (/* 1100L, 122L, 126L, 623L, 664L) */ (var_1_1) , (/* 1102L, 121L, 128L, 625L, 666L) */ ((last_1_var_1_13) * (var_1_21)))))))) {
				/* 1106L, 145L, 629L, 670L) */ var_1_13 = (
					/* 1109L, 144L, 632L, 673L) */ (max (
						/* 1109L, 144L, 632L, 673L) */ (
							/* 1110L, 142L, 633L, 674L) */ ((
								var_1_16
							) + (
								15.8f
							))
						) , (
							var_1_3
						)
					))
				);
			} else {
				/* 1114L, 151L, 637L, 678L) */ var_1_13 = (
					/* 1117L, 150L, 640L, 681L) */ (min (
						/* 1117L, 150L, 640L, 681L) */ (
							99999.1f
						) , (
							var_1_16
						)
					))
				);
			}
		} else {
			/* 1120L, 157L, 643L, 684L) */ var_1_13 = (
				var_1_3
			);
		}
	} else {
		/* 1124L, 163L, 647L, 688L) */ var_1_13 = (
			var_1_3
		);
	}


	// From: Req6Batch170Filler_PE_CO
	/* 1143L, 303L, 828L, 856L) */ if (/* 1144L, 204L, 205L, 829L, 857L) */ ((var_1_17) < (var_1_3))) {
		/* 1147L, 297L, 832L, 860L) */ if (/* 1148L, 217L, 218L, 833L, 861L) */ ((var_1_13) < (/* 1150L, 216L, 220L, 835L, 863L) */ ((/* 1151L, 214L, 221L, 836L, 864L) */ ((64.1f) * (var_1_16))) / (256.95f))))) {
			/* 1155L, 295L, 840L, 868L) */ if (var_1_9) {
				/* 1157L, 238L, 842L, 870L) */ var_1_19 = (
					var_1_20
				);
			} else {
				/* 1161L, 294L, 846L, 874L) */ var_1_19 = (
					-1
				);
			}
		}
	} else {
		/* 1165L, 302L, 850L, 878L) */ var_1_19 = (
			var_1_20
		);
	}


	// From: CodeObject1
	/* 310L, 85L) */ if (/* 311L, 70L, 71L) */ ((var_1_23) < (var_1_24))) {
		/* 314L, 84L) */ var_1_22 = (
			/* 317L, 83L) */ (abs (
				/* 318L, 82L) */ (max (
					/* 318L, 82L) */ (
						/* 319L, 80L) */ (abs (
							var_1_25
						))
					) , (
						var_1_26
					)
				))
			))
		);
	}


	// From: CodeObject2
	/* 323L, 92L) */ var_1_27 = (
		0.5800000000000001
	);


	// From: CodeObject3
	/* 327L, 125L) */ if (/* 328L, 101L, 102L) */ ((var_1_10) > (/* 330L, 100L, 104L) */ ((var_1_25) % (var_1_29))))) {
		/* 333L, 115L) */ var_1_28 = (
			var_1_30
		);
	} else {
		/* 337L, 124L) */ var_1_28 = (
			/* 340L, 123L) */ (min (
				/* 340L, 123L) */ (
					var_1_30
				) , (
					/* 342L, 122L) */ ((
						/* 343L, 120L) */ (abs (
							var_1_31
						))
					) - (
						var_1_32
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 347L, 132L) */ var_1_33 = (
		var_1_34
	);


	// From: CodeObject5
	/* 351L, 146L) */ if (var_1_4) {
		/* 353L, 145L) */ var_1_35 = (
			/* 356L, 144L) */ (abs (
				/* 357L, 143L) */ (abs (
					-64
				))
			))
		);
	}


	// From: CodeObject6
	/* 359L, 171L) */ if (/* 360L, 154L, 155L) */ ((var_1_34) >= (/* 362L, 153L, 157L) */ ((var_1_38) - (1.5f))))) {
		/* 365L, 170L) */ var_1_37 = (
			/* 368L, 169L) */ (min (
				/* 368L, 169L) */ (
					var_1_26
				) , (
					var_1_32
				)
			))
		);
	}


	// From: CodeObject7
	/* 371L, 192L) */ if (/* 372L, 176L, 177L) */ (! (var_1_4))) {
		/* 374L, 191L) */ var_1_39 = (
			/* 377L, 190L) */ ((
				/* 378L, 187L) */ ((
					var_1_40
				) + (
					/* 380L, 186L) */ (max (
						/* 380L, 186L) */ (
							var_1_41
						) , (
							var_1_42
						)
					))
				))
			) + (
				/* 383L, 189L) */ (abs (
					2.25
				))
			))
		);
	}


	// From: CodeObject8
	/* 415L, 255L) */ if (/* 416L, 200L, 201L) */ ((/* 417L, 198L, 202L) */ ((var_1_10) % (var_1_29))) < (var_1_25))) {
		/* 421L, 253L) */ if (/* 422L, 215L, 216L) */ ((99.5) >= (/* 424L, 214L, 218L) */ (max (/* 424L, 214L, 218L) */ (var_1_40) , (var_1_38)))))) {
			/* 427L, 247L) */ if (/* 428L, 228L, 229L) */ ((var_1_36) || (var_1_44))) {
				/* 431L, 238L) */ var_1_43 = (
					var_1_42
				);
			} else {
				/* 435L, 246L) */ var_1_43 = (
					var_1_40
				);
			}
		} else {
			/* 439L, 252L) */ var_1_43 = (
				var_1_34
			);
		}
	}


	// From: CodeObject9
	/* 443L, 296L) */ if (/* 444L, 263L, 264L) */ ((-16) < (var_1_32))) {
		/* 447L, 290L) */ if (/* 448L, 273L, 274L) */ (! (/* 449L, 272L, 275L) */ ((var_1_10) < (1))))) {
			/* 452L, 285L) */ var_1_45 = (
				var_1_26
			);
		} else {
			/* 456L, 289L) */ var_1_45 = (
				var_1_10
			);
		}
	} else {
		/* 460L, 295L) */ var_1_45 = (
			var_1_10
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32768);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= -2147483647);
	assume_abort_if_not(var_1_18 <= 2147483647);
	assume_abort_if_not(var_1_18 != 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32768);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65535);
	assume_abort_if_not(var_1_29 != 0);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -126);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_4 = var_1_4;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	if (var_1_4) {
	}
	if (/* 473L, 15L, 19L, 411L, 442L, 999L, 1185L, 36L) */ ((-5) > (last_1_var_1_10))) {
		if (/* 478L, 24L, 28L, 415L, 446L, 1003L, 1190L, 40L) */ ((last_1_var_1_10) > (10))) {
		} else {
		}
	} else {
	}
	if (/* 505L, 69L, 77L, 502L, 517L, 1217L) */ ((/* 506L, 67L, 78L, 503L, 518L, 1218L) */ ((var_1_5) + (/* 508L, 66L, 80L, 505L, 520L, 1220L) */ ((var_1_11) + (var_1_12))))) >= (-256))) {
		if (var_1_4) {
		}
	}
	if (/* 521L, 103L, 109L, 695L, 736L, 1233L) */ ((var_1_10) == (/* 523L, 102L, 111L, 697L, 738L, 1235L) */ ((var_1_5) + (var_1_11))))) {
		if (var_1_7) {
			if (/* 529L, 123L, 131L, 703L, 744L, 1241L) */ ((var_1_3) == (/* 531L, 122L, 133L, 705L, 746L, 1243L) */ (min (/* 531L, 122L, 133L, 705L, 746L, 1243L) */ (var_1_1) , (/* 533L, 121L, 135L, 707L, 748L, 1245L) */ ((last_1_var_1_13) * (var_1_21)))))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 562L, 177L, 184L, 803L, 816L, 1274L) */ ((var_1_10) > (/* 564L, 176L, 186L, 805L, 818L, 1276L) */ ((var_1_10) / (/* 566L, 175L, 188L, 807L, 820L, 1278L) */ (abs (var_1_18))))))) {
	}
	if (/* 575L, 204L, 208L, 885L, 913L, 1287L) */ ((var_1_17) < (var_1_3))) {
		if (/* 579L, 217L, 225L, 889L, 917L, 1291L) */ ((var_1_13) < (/* 581L, 216L, 227L, 891L, 919L, 1293L) */ ((/* 582L, 214L, 228L, 892L, 920L, 1294L) */ ((64.1f) * (var_1_16))) / (256.95f))))) {
			if (var_1_9) {
			} else {
			}
		}
	} else {
	}
	return /* 612L) */ ((
	/* 611L) */ ((
		/* 610L) */ ((
			/* 609L) */ ((
				/* 608L) */ ((
					/* 607L) */ ((
						/* 464L, 10L, 333L, 340L, 1176L) */ ((
							var_1_4
						) ? (
							/* 466L, 8L, 335L, 342L, 1178L) */ ((
								var_1_1
							) == (
								/* 466L, 8L, 335L, 342L, 1178L) */ ((float) (
									var_1_3
								))
							))
						) : (
							1
						))
					) && (
						/* 472L, 54L, 410L, 441L, 1026L, 1184L, 63L) */ ((
							/* 473L, 15L, 19L, 411L, 442L, 999L, 1185L, 36L) */ ((
								-5
							) > (
								last_1_var_1_10
							))
						) ? (
							/* 477L, 48L, 414L, 445L, 1021L, 1189L, 58L) */ ((
								/* 478L, 24L, 28L, 415L, 446L, 1003L, 1190L, 40L) */ ((
									last_1_var_1_10
								) > (
									10
								))
							) ? (
								/* 482L, 38L, 418L, 449L, 1012L, 1194L, 49L) */ ((
									var_1_4
								) == (
									/* 482L, 38L, 418L, 449L, 1012L, 1194L, 49L) */ ((unsigned char) (
										/* 485L, 37L, 421L, 452L, 1011L, 1197L, 48L) */ ((
											/* 486L, 35L, 422L, 453L, 1009L, 1198L, 46L) */ ((
												last_1_var_1_4
											) && (
												var_1_6
											))
										) || (
											var_1_7
										))
									))
								))
							) : (
								/* 491L, 46L, 427L, 458L, 1020L, 1203L, 57L) */ ((
									var_1_4
								) == (
									/* 491L, 46L, 427L, 458L, 1020L, 1203L, 57L) */ ((unsigned char) (
										/* 494L, 45L, 430L, 461L, 1019L, 1206L, 56L) */ ((
											var_1_7
										) && (
											/* 496L, 44L, 432L, 463L, 1018L, 1208L, 55L) */ ((
												var_1_8
											) || (
												var_1_6
											))
										))
									))
								))
							))
						) : (
							/* 499L, 52L, 435L, 466L, 1025L, 1211L, 62L) */ ((
								var_1_4
							) == (
								/* 499L, 52L, 435L, 466L, 1025L, 1211L, 62L) */ ((unsigned char) (
									var_1_9
								))
							))
						))
					))
				) && (
					/* 504L, 94L, 501L, 516L, 1216L) */ ((
						/* 505L, 69L, 77L, 502L, 517L, 1217L) */ ((
							/* 506L, 67L, 78L, 503L, 518L, 1218L) */ ((
								var_1_5
							) + (
								/* 508L, 66L, 80L, 505L, 520L, 1220L) */ ((
									var_1_11
								) + (
									var_1_12
								))
							))
						) >= (
							-256
						))
					) ? (
						/* 512L, 92L, 509L, 524L, 1224L) */ ((
							var_1_4
						) ? (
							/* 514L, 90L, 511L, 526L, 1226L) */ ((
								var_1_10
							) == (
								/* 514L, 90L, 511L, 526L, 1226L) */ ((signed long int) (
									var_1_12
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
				/* 520L, 165L, 694L, 735L, 1232L) */ ((
					/* 521L, 103L, 109L, 695L, 736L, 1233L) */ ((
						var_1_10
					) == (
						/* 523L, 102L, 111L, 697L, 738L, 1235L) */ ((
							var_1_5
						) + (
							var_1_11
						))
					))
				) ? (
					/* 526L, 159L, 700L, 741L, 1238L) */ ((
						var_1_7
					) ? (
						/* 528L, 153L, 702L, 743L, 1240L) */ ((
							/* 529L, 123L, 131L, 703L, 744L, 1241L) */ ((
								var_1_3
							) == (
								/* 531L, 122L, 133L, 705L, 746L, 1243L) */ (min (
									/* 531L, 122L, 133L, 705L, 746L, 1243L) */ (
										var_1_1
									) , (
										/* 533L, 121L, 135L, 707L, 748L, 1245L) */ ((
											last_1_var_1_13
										) * (
											var_1_21
										))
									)
								))
							))
						) ? (
							/* 537L, 145L, 711L, 752L, 1249L) */ ((
								var_1_13
							) == (
								/* 537L, 145L, 711L, 752L, 1249L) */ ((float) (
									/* 540L, 144L, 714L, 755L, 1252L) */ (max (
										/* 540L, 144L, 714L, 755L, 1252L) */ (
											/* 541L, 142L, 715L, 756L, 1253L) */ ((
												var_1_16
											) + (
												15.8f
											))
										) , (
											var_1_3
										)
									))
								))
							))
						) : (
							/* 545L, 151L, 719L, 760L, 1257L) */ ((
								var_1_13
							) == (
								/* 545L, 151L, 719L, 760L, 1257L) */ ((float) (
									/* 548L, 150L, 722L, 763L, 1260L) */ (min (
										/* 548L, 150L, 722L, 763L, 1260L) */ (
											99999.1f
										) , (
											var_1_16
										)
									))
								))
							))
						))
					) : (
						/* 551L, 157L, 725L, 766L, 1263L) */ ((
							var_1_13
						) == (
							/* 551L, 157L, 725L, 766L, 1263L) */ ((float) (
								var_1_3
							))
						))
					))
				) : (
					/* 555L, 163L, 729L, 770L, 1267L) */ ((
						var_1_13
					) == (
						/* 555L, 163L, 729L, 770L, 1267L) */ ((float) (
							var_1_3
						))
					))
				))
			))
		) && (
			/* 561L, 195L, 802L, 815L, 1273L) */ ((
				/* 562L, 177L, 184L, 803L, 816L, 1274L) */ ((
					var_1_10
				) > (
					/* 564L, 176L, 186L, 805L, 818L, 1276L) */ ((
						var_1_10
					) / (
						/* 566L, 175L, 188L, 807L, 820L, 1278L) */ (abs (
							var_1_18
						))
					))
				))
			) ? (
				/* 568L, 193L, 809L, 822L, 1280L) */ ((
					var_1_17
				) == (
					/* 568L, 193L, 809L, 822L, 1280L) */ ((float) (
						var_1_16
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 574L, 304L, 884L, 912L, 1286L) */ ((
			/* 575L, 204L, 208L, 885L, 913L, 1287L) */ ((
				var_1_17
			) < (
				var_1_3
			))
		) ? (
			/* 578L, 298L, 888L, 916L, 1290L) */ ((
				/* 579L, 217L, 225L, 889L, 917L, 1291L) */ ((
					var_1_13
				) < (
					/* 581L, 216L, 227L, 891L, 919L, 1293L) */ ((
						/* 582L, 214L, 228L, 892L, 920L, 1294L) */ ((
							64.1f
						) * (
							var_1_16
						))
					) / (
						256.95f
					))
				))
			) ? (
				/* 586L, 296L, 896L, 924L, 1298L) */ ((
					var_1_9
				) ? (
					/* 588L, 238L, 898L, 926L, 1300L) */ ((
						var_1_19
					) == (
						/* 588L, 238L, 898L, 926L, 1300L) */ ((signed char) (
							var_1_20
						))
					))
				) : (
					/* 592L, 294L, 902L, 930L, 1304L) */ ((
						var_1_19
					) == (
						/* 592L, 294L, 902L, 930L, 1304L) */ ((signed char) (
							-1
						))
					))
				))
			) : (
				1
			))
		) : (
			/* 596L, 302L, 906L, 934L, 1308L) */ ((
				var_1_19
			) == (
				/* 596L, 302L, 906L, 934L, 1308L) */ ((signed char) (
					var_1_20
				))
			))
		))
	))
) && (
	/* 602L, 314L, 952L, 958L, 1314L) */ ((
		var_1_21
	) == (
		/* 602L, 314L, 952L, 958L, 1314L) */ ((float) (
			var_1_3
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
