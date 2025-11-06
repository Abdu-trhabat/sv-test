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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Filler_PS_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -8;
unsigned short int var_1_2 = 1000;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 0;
unsigned char var_1_5 = 1;
signed short int var_1_7 = -64;
signed short int var_1_8 = 200;
signed short int var_1_9 = 200;
signed short int var_1_10 = 8;
signed short int var_1_11 = -1;
double var_1_12 = 128.25;
double var_1_13 = 255.7;
double var_1_14 = 999999999999.375;
unsigned char var_1_15 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
float var_1_19 = 63.6;
signed char var_1_20 = 16;
float var_1_21 = 1.375;
unsigned long int var_1_22 = 10;
signed char var_1_23 = 32;
signed char var_1_24 = 2;
signed char var_1_25 = 32;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 2;
signed long int var_1_32 = 1;
signed long int var_1_33 = 32;
signed short int var_1_34 = 0;
unsigned long int var_1_35 = 8;
unsigned long int var_1_36 = 200;
signed long int var_1_37 = 128;
signed long int var_1_38 = -32;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 1;
signed long int var_1_41 = 50;
signed long int var_1_43 = 16;
unsigned short int var_1_44 = 32;
unsigned short int var_1_45 = 10;
double var_1_46 = 50.75;
double var_1_47 = 9.7;
double var_1_48 = 10.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_22 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 54L) */ if (/* 36L, 35L) */ ((/* 37L, 31L) */ ((2) << (var_1_31))) <= (/* 40L, 34L) */ (max (/* 40L, 34L) */ (var_1_32) , (var_1_33)))))) {
		/* 53L) */ var_1_29 = (
			0
		);
	}


	// From: CodeObject2
	/* 63L) */ var_1_34 = (
		var_1_31
	);


	// From: CodeObject3
	/* 92L) */ if (/* 72L, 71L) */ ((var_1_31) > (/* 74L, 70L) */ (abs (var_1_34))))) {
		/* 85L) */ var_1_35 = (
			/* 84L) */ ((
				var_1_31
			) + (
				var_1_36
			))
		);
	} else {
		/* 91L) */ var_1_35 = (
			/* 90L) */ (min (
				/* 90L) */ (
					var_1_31
				) , (
					var_1_36
				)
			))
		);
	}


	// From: CodeObject4
	/* 132L) */ if (/* 109L, 108L) */ ((-128) > (var_1_31))) {
		/* 123L) */ var_1_37 = (
			/* 122L) */ (max (
				/* 122L) */ (
					/* 118L) */ (abs (
						var_1_34
					))
				) , (
					/* 121L) */ (min (
						/* 121L) */ (
							var_1_31
						) , (
							var_1_38
						)
					))
				)
			))
		);
	} else {
		/* 131L) */ var_1_37 = (
			/* 130L) */ (max (
				/* 130L) */ (
					/* 128L) */ ((
						var_1_31
					) + (
						var_1_34
					))
				) , (
					1000
				)
			))
		);
	}


	// From: CodeObject5
	/* 157L) */ if (/* 141L, 140L) */ ((var_1_33) >= (/* 143L, 139L) */ ((var_1_36) & (var_1_34))))) {
		/* 156L) */ var_1_39 = (
			/* 155L) */ ((
				var_1_30
			) || (
				var_1_40
			))
		);
	}


	// From: CodeObject6
	/* 194L) */ if (var_1_29) {
		/* 192L) */ if (/* 172L, 171L) */ ((var_1_33) <= (var_1_34))) {
			/* 185L) */ var_1_41 = (
				/* 184L) */ (abs (
					/* 183L) */ (abs (
						/* 182L) */ ((
							var_1_31
						) - (
							var_1_43
						))
					))
				))
			);
		} else {
			/* 191L) */ var_1_41 = (
				/* 190L) */ ((
					var_1_43
				) - (
					var_1_31
				))
			);
		}
	}


	// From: CodeObject7
	/* 227L) */ if (/* 207L, 206L) */ ((/* 208L, 202L) */ ((-1) - (var_1_31))) < (/* 211L, 205L) */ ((var_1_37) ^ (var_1_41))))) {
		/* 226L) */ var_1_44 = (
			/* 225L) */ ((
				25
			) + (
				var_1_45
			))
		);
	}


	// From: CodeObject8
	/* 270L) */ if (/* 234L, 233L) */ ((var_1_32) > (var_1_36))) {
		/* 264L) */ if (/* 243L, 242L) */ ((var_1_33) < (var_1_35))) {
			/* 256L) */ if (var_1_40) {
				/* 255L) */ var_1_46 = (
					var_1_47
				);
			}
		} else {
			/* 263L) */ var_1_46 = (
				/* 262L) */ (min (
					/* 262L) */ (
						var_1_47
					) , (
						var_1_48
					)
				))
			);
		}
	} else {
		/* 269L) */ var_1_46 = (
			var_1_48
		);
	}


	// From: Req4Batch144Filler_PS_CN
	/* 10L, 128L, 626L, 638L, 1159L, 1242L) */ if (/* 3L, 115L, 116L, 627L, 639L, 1152L, 1243L) */ ((var_1_8) >= (last_1_var_1_22))) {
		/* 9L, 127L, 630L, 642L, 1158L, 1247L) */ var_1_15 = (
			/* 8L, 126L, 633L, 645L, 1157L, 1250L) */ ((
				var_1_17
			) && (
				var_1_18
			))
		);
	}


	// From: Req2Batch144Filler_PS_CN
	/* 1214L, 55L, 490L, 510L) */ var_1_7 = (
		/* 1217L, 54L, 493L, 513L) */ (min (
			/* 1217L, 54L, 493L, 513L) */ (
				var_1_8
			) , (
				/* 1219L, 53L, 495L, 515L) */ ((
					/* 1220L, 51L, 496L, 516L) */ ((
						var_1_9
					) - (
						var_1_10
					))
				) + (
					var_1_11
				))
			)
		))
	);


	// From: Req8Batch144Filler_PS_CN
	/* 1311L, 233L, 918L, 926L) */ var_1_26 = (
		/* 1314L, 232L, 921L, 929L) */ ((
			var_1_17
		) && (
			var_1_27
		))
	);


	// From: Req7Batch144Filler_PS_CN
	unsigned char stepLocal_3 = var_1_26;
	/* 1306L, 219L, 873L, 884L) */ if (/* 1299L, 206L, 207L, 874L, 885L) */ ((var_1_17) && (stepLocal_3))) {
		/* 1305L, 218L, 877L, 888L) */ var_1_23 = (
			/* 1304L, 217L, 880L, 891L) */ ((
				var_1_24
			) - (
				var_1_25
			))
		);
	}


	// From: Req1Batch144Filler_PS_CN
	unsigned char stepLocal_1 = var_1_26;
	unsigned short int stepLocal_0 = var_1_2;
	/* 1200L, 40L, 389L, 412L) */ if (/* 1184L, 6L, 7L, 390L, 413L) */ ((stepLocal_0) == (/* 1183L, 5L, 9L, 392L, 415L) */ ((var_1_3) ^ (var_1_4))))) {
		/* 1199L, 38L, 395L, 418L) */ if (/* 1186L, 19L, 20L, 396L, 419L) */ ((var_1_15) && (stepLocal_1))) {
			/* 1190L, 29L, 399L, 422L) */ var_1_1 = (
				var_1_2
			);
		} else {
			/* 1198L, 37L, 403L, 426L) */ var_1_1 = (
				/* 1197L, 36L, 406L, 429L) */ (min (
					/* 1197L, 36L, 406L, 429L) */ (
						/* 1195L, 34L, 407L, 430L) */ ((
							var_1_2
						) + (
							var_1_3
						))
					) , (
						var_1_4
					)
				))
			);
		}
	}


	// From: Req6Batch144Filler_PS_CN
	/* 1284L, 196L, 823L, 836L) */ if (/* 1285L, 181L, 182L, 824L, 837L) */ ((var_1_18) || (/* 1287L, 180L, 184L, 826L, 839L) */ ((var_1_5) && (var_1_15))))) {
		/* 1290L, 195L, 829L, 842L) */ var_1_22 = (
			var_1_1
		);
	}


	// From: Req3Batch144Filler_PS_CN
	/* 1226L, 105L, 562L, 578L) */ if (/* 1227L, 84L, 85L, 563L, 579L) */ ((/* 1228L, 82L, 86L, 564L, 580L) */ ((/* 1229L, 80L, 87L, 565L, 581L) */ ((var_1_22) * (var_1_9))) <= (var_1_1))) || (var_1_15))) {
		/* 1234L, 104L, 570L, 586L) */ var_1_12 = (
			/* 1237L, 103L, 573L, 589L) */ ((
				var_1_13
			) + (
				var_1_14
			))
		);
	}


	// From: Req5Batch144Filler_PS_CN
	unsigned long int stepLocal_2 = var_1_22;
	/* 1278L, 171L, 673L, 697L) */ if (/* 1260L, 140L, 141L, 674L, 698L) */ ((/* 1259L, 138L, 142L, 675L, 699L) */ ((var_1_22) / (var_1_20))) <= (stepLocal_2))) {
		/* 1277L, 169L, 679L, 703L) */ if (var_1_26) {
			/* 1272L, 164L, 681L, 705L) */ var_1_19 = (
				/* 1271L, 163L, 684L, 708L) */ ((
					/* 1267L, 159L, 685L, 709L) */ ((
						var_1_21
					) + (
						/* 1266L, 158L, 687L, 711L) */ (abs (
							var_1_13
						))
					))
				) - (
					/* 1270L, 162L, 689L, 713L) */ (abs (
						/* 1269L, 161L, 690L, 714L) */ (abs (
							1000000.625f
						))
					))
				))
			);
		} else {
			/* 1276L, 168L, 692L, 716L) */ var_1_19 = (
				var_1_13
			);
		}
	}


	// From: Req9Batch144Filler_PS_CN
	signed short int stepLocal_4 = var_1_11;
	/* 1343L, 339L, 1049L, 1074L) */ if (/* 1323L, 242L, 243L, 1050L, 1075L) */ ((var_1_21) < (var_1_12))) {
		/* 1338L, 333L, 1053L, 1078L) */ if (/* 1327L, 253L, 254L, 1054L, 1079L) */ ((stepLocal_4) >= (/* 1326L, 252L, 256L, 1056L, 1081L) */ (min (/* 1326L, 252L, 256L, 1056L, 1081L) */ (var_1_4) , (var_1_7)))))) {
			/* 1337L, 331L, 1059L, 1084L) */ if (var_1_17) {
				/* 1332L, 270L, 1061L, 1086L) */ var_1_28 = (
					var_1_25
				);
			} else {
				/* 1336L, 330L, 1065L, 1090L) */ var_1_28 = (
					32
				);
			}
		}
	} else {
		/* 1342L, 338L, 1069L, 1094L) */ var_1_28 = (
			var_1_25
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -16383);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -128);
	assume_abort_if_not(var_1_20 <= 127);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -1);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 29);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483648);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483647);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (/* 275L, 6L, 12L, 436L, 459L, 1348L) */ ((var_1_2) == (/* 277L, 5L, 14L, 438L, 461L, 1350L) */ ((var_1_3) ^ (var_1_4))))) {
		if (/* 281L, 19L, 23L, 442L, 465L, 1354L) */ ((var_1_15) && (var_1_26))) {
		} else {
		}
	}
	if (/* 319L, 84L, 92L, 595L, 611L, 1392L) */ ((/* 320L, 82L, 93L, 596L, 612L, 1393L) */ ((/* 321L, 80L, 94L, 597L, 613L, 1394L) */ ((var_1_22) * (var_1_9))) <= (var_1_1))) || (var_1_15))) {
	}
	if (/* 335L, 115L, 119L, 651L, 663L, 1165L, 1408L, 16L) */ ((var_1_8) >= (last_1_var_1_22))) {
	}
	if (/* 347L, 140L, 146L, 722L, 746L, 1420L) */ ((/* 348L, 138L, 147L, 723L, 747L, 1421L) */ ((var_1_22) / (var_1_20))) <= (var_1_22))) {
		if (var_1_26) {
		} else {
		}
	}
	if (/* 373L, 181L, 187L, 850L, 863L, 1446L) */ ((var_1_18) || (/* 375L, 180L, 189L, 852L, 865L, 1448L) */ ((var_1_5) && (var_1_15))))) {
	}
	if (/* 384L, 206L, 210L, 896L, 907L, 1457L) */ ((var_1_17) && (var_1_26))) {
	}
	if (/* 403L, 242L, 246L, 1100L, 1125L, 1476L) */ ((var_1_21) < (var_1_12))) {
		if (/* 407L, 253L, 259L, 1104L, 1129L, 1480L) */ ((var_1_11) >= (/* 409L, 252L, 261L, 1106L, 1131L, 1482L) */ (min (/* 409L, 252L, 261L, 1106L, 1131L, 1482L) */ (var_1_4) , (var_1_7)))))) {
			if (var_1_17) {
			} else {
			}
		}
	} else {
	}
	return /* 434L) */ ((
	/* 433L) */ ((
		/* 432L) */ ((
			/* 431L) */ ((
				/* 430L) */ ((
					/* 429L) */ ((
						/* 428L) */ ((
							/* 427L) */ ((
								/* 274L, 41L, 435L, 458L, 1347L) */ ((
									/* 275L, 6L, 12L, 436L, 459L, 1348L) */ ((
										var_1_2
									) == (
										/* 277L, 5L, 14L, 438L, 461L, 1350L) */ ((
											var_1_3
										) ^ (
											var_1_4
										))
									))
								) ? (
									/* 280L, 39L, 441L, 464L, 1353L) */ ((
										/* 281L, 19L, 23L, 442L, 465L, 1354L) */ ((
											var_1_15
										) && (
											var_1_26
										))
									) ? (
										/* 284L, 29L, 445L, 468L, 1357L) */ ((
											var_1_1
										) == (
											/* 284L, 29L, 445L, 468L, 1357L) */ ((signed long int) (
												var_1_2
											))
										))
									) : (
										/* 288L, 37L, 449L, 472L, 1361L) */ ((
											var_1_1
										) == (
											/* 288L, 37L, 449L, 472L, 1361L) */ ((signed long int) (
												/* 291L, 36L, 452L, 475L, 1364L) */ (min (
													/* 291L, 36L, 452L, 475L, 1364L) */ (
														/* 292L, 34L, 453L, 476L, 1365L) */ ((
															var_1_2
														) + (
															var_1_3
														))
													) , (
														var_1_4
													)
												))
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 306L, 55L, 530L, 550L, 1379L) */ ((
									var_1_7
								) == (
									/* 306L, 55L, 530L, 550L, 1379L) */ ((signed short int) (
										/* 309L, 54L, 533L, 553L, 1382L) */ (min (
											/* 309L, 54L, 533L, 553L, 1382L) */ (
												var_1_8
											) , (
												/* 311L, 53L, 535L, 555L, 1384L) */ ((
													/* 312L, 51L, 536L, 556L, 1385L) */ ((
														var_1_9
													) - (
														var_1_10
													))
												) + (
													var_1_11
												))
											)
										))
									))
								))
							))
						) && (
							/* 318L, 106L, 594L, 610L, 1391L) */ ((
								/* 319L, 84L, 92L, 595L, 611L, 1392L) */ ((
									/* 320L, 82L, 93L, 596L, 612L, 1393L) */ ((
										/* 321L, 80L, 94L, 597L, 613L, 1394L) */ ((
											var_1_22
										) * (
											var_1_9
										))
									) <= (
										var_1_1
									))
								) || (
									var_1_15
								))
							) ? (
								/* 326L, 104L, 602L, 618L, 1399L) */ ((
									var_1_12
								) == (
									/* 326L, 104L, 602L, 618L, 1399L) */ ((double) (
										/* 329L, 103L, 605L, 621L, 1402L) */ ((
											var_1_13
										) + (
											var_1_14
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 334L, 129L, 650L, 662L, 1172L, 1407L, 23L) */ ((
							/* 335L, 115L, 119L, 651L, 663L, 1165L, 1408L, 16L) */ ((
								var_1_8
							) >= (
								last_1_var_1_22
							))
						) ? (
							/* 339L, 127L, 654L, 666L, 1171L, 1412L, 22L) */ ((
								var_1_15
							) == (
								/* 339L, 127L, 654L, 666L, 1171L, 1412L, 22L) */ ((unsigned char) (
									/* 342L, 126L, 657L, 669L, 1170L, 1415L, 21L) */ ((
										var_1_17
									) && (
										var_1_18
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 346L, 172L, 721L, 745L, 1419L) */ ((
						/* 347L, 140L, 146L, 722L, 746L, 1420L) */ ((
							/* 348L, 138L, 147L, 723L, 747L, 1421L) */ ((
								var_1_22
							) / (
								var_1_20
							))
						) <= (
							var_1_22
						))
					) ? (
						/* 352L, 170L, 727L, 751L, 1425L) */ ((
							var_1_26
						) ? (
							/* 354L, 164L, 729L, 753L, 1427L) */ ((
								var_1_19
							) == (
								/* 354L, 164L, 729L, 753L, 1427L) */ ((float) (
									/* 357L, 163L, 732L, 756L, 1430L) */ ((
										/* 358L, 159L, 733L, 757L, 1431L) */ ((
											var_1_21
										) + (
											/* 360L, 158L, 735L, 759L, 1433L) */ (abs (
												var_1_13
											))
										))
									) - (
										/* 362L, 162L, 737L, 761L, 1435L) */ (abs (
											/* 363L, 161L, 738L, 762L, 1436L) */ (abs (
												1000000.625f
											))
										))
									))
								))
							))
						) : (
							/* 365L, 168L, 740L, 764L, 1438L) */ ((
								var_1_19
							) == (
								/* 365L, 168L, 740L, 764L, 1438L) */ ((float) (
									var_1_13
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 372L, 197L, 849L, 862L, 1445L) */ ((
					/* 373L, 181L, 187L, 850L, 863L, 1446L) */ ((
						var_1_18
					) || (
						/* 375L, 180L, 189L, 852L, 865L, 1448L) */ ((
							var_1_5
						) && (
							var_1_15
						))
					))
				) ? (
					/* 378L, 195L, 855L, 868L, 1451L) */ ((
						var_1_22
					) == (
						/* 378L, 195L, 855L, 868L, 1451L) */ ((unsigned long int) (
							var_1_1
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 383L, 220L, 895L, 906L, 1456L) */ ((
				/* 384L, 206L, 210L, 896L, 907L, 1457L) */ ((
					var_1_17
				) && (
					var_1_26
				))
			) ? (
				/* 387L, 218L, 899L, 910L, 1460L) */ ((
					var_1_23
				) == (
					/* 387L, 218L, 899L, 910L, 1460L) */ ((signed char) (
						/* 390L, 217L, 902L, 913L, 1463L) */ ((
							var_1_24
						) - (
							var_1_25
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 395L, 233L, 934L, 942L, 1468L) */ ((
			var_1_26
		) == (
			/* 395L, 233L, 934L, 942L, 1468L) */ ((unsigned char) (
				/* 398L, 232L, 937L, 945L, 1471L) */ ((
					var_1_17
				) && (
					var_1_27
				))
			))
		))
	))
) && (
	/* 402L, 340L, 1099L, 1124L, 1475L) */ ((
		/* 403L, 242L, 246L, 1100L, 1125L, 1476L) */ ((
			var_1_21
		) < (
			var_1_12
		))
	) ? (
		/* 406L, 334L, 1103L, 1128L, 1479L) */ ((
			/* 407L, 253L, 259L, 1104L, 1129L, 1480L) */ ((
				var_1_11
			) >= (
				/* 409L, 252L, 261L, 1106L, 1131L, 1482L) */ (min (
					/* 409L, 252L, 261L, 1106L, 1131L, 1482L) */ (
						var_1_4
					) , (
						var_1_7
					)
				))
			))
		) ? (
			/* 412L, 332L, 1109L, 1134L, 1485L) */ ((
				var_1_17
			) ? (
				/* 414L, 270L, 1111L, 1136L, 1487L) */ ((
					var_1_28
				) == (
					/* 414L, 270L, 1111L, 1136L, 1487L) */ ((unsigned char) (
						var_1_25
					))
				))
			) : (
				/* 418L, 330L, 1115L, 1140L, 1491L) */ ((
					var_1_28
				) == (
					/* 418L, 330L, 1115L, 1140L, 1491L) */ ((unsigned char) (
						32
					))
				))
			))
		) : (
			1
		))
	) : (
		/* 422L, 338L, 1119L, 1144L, 1495L) */ ((
			var_1_28
		) == (
			/* 422L, 338L, 1119L, 1144L, 1495L) */ ((unsigned char) (
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
